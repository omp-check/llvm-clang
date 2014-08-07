#include "DepProfiler.h"

#include "llvm/ADT/Triple.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/Verifier.h"
#include "llvm/Assembly/Parser.h"
#include "llvm/Bitcode/ReaderWriter.h"
#include "llvm/CodeGen/CommandFlags.h"
#include "llvm/CodeGen/LinkAllAsmWriterComponents.h"
#include "llvm/CodeGen/LinkAllCodegenComponents.h"
#include "llvm/IR/DataLayout.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IRReader/IRReader.h"
#include "llvm/Linker.h"
#include "llvm/PassManager.h"
#include "llvm/Pass.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/FileUtilities.h"
#include "llvm/Support/FormattedStream.h"
#include "llvm/Support/ManagedStatic.h"
#include "llvm/Support/PrettyStackTrace.h"
#include "llvm/Support/Program.h"
#include "llvm/Support/Signals.h"
#include "llvm/Support/SourceMgr.h"
#include "llvm/Support/TargetRegistry.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Support/ToolOutputFile.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Target/TargetLibraryInfo.h"
#include "llvm/Target/TargetMachine.h"
#include "llvm/Transforms/Scalar.h"

#include <memory>
#include <string>

#include "config.h"

using namespace std;
using namespace llvm;
using namespace llvm::sys;


// TODO: This is a temporary placeholder until make_unique ships.
template<typename T, typename... Args>
unique_ptr<T> make_unique(Args&&... args) {
    return unique_ptr<T>(new T(forward<Args>(args)...));
}


namespace {


cl::opt<string>
inPath(cl::Positional,
       cl::desc("<Module to analyze>"),
       cl::value_desc("bitcode filename"), cl::Required);

cl::opt<string>
outFile("o",
        cl::desc("Filename of the instrumented program"),
        cl::value_desc("filename"),
        cl::Required);

// Determine optimization level.
static cl::opt<char>
optLevel("O",
        cl::desc("Optimization level. [-O0, -O1, -O2, or -O3] "
                  "(default = '-O2')"),
        cl::Prefix,
        cl::ZeroOrMore,
        cl::init('2'));

cl::list<string>
optPaths("L", cl::Prefix,
          cl::desc("Specify a library search path"),
          cl::value_desc("directory"));

cl::list<string>
optLibraries("l", cl::Prefix,
              cl::desc("Specify libraries to link to"),
              cl::value_desc("library prefix"));


}


static void
newCompile(Module &m, string outputPath) {
  string err;

  Triple triple = Triple(m.getTargetTriple());
  const Target *target = TargetRegistry::lookupTarget(MArch, triple, err);
  if (!target) {
    report_fatal_error("Unable to find target:\n " + err);
  }

  CodeGenOpt::Level level = CodeGenOpt::Default;
  switch (optLevel) {
    default:
      report_fatal_error("Invalid optimization level.\n");
      // No fall through
    case '0': level = CodeGenOpt::None; break;
    case '1': level = CodeGenOpt::Less; break;
    case '2': level = CodeGenOpt::Default; break;
    case '3': level = CodeGenOpt::Aggressive; break;
  }

  TargetOptions options;
  options.LessPreciseFPMADOption = EnableFPMAD;
  options.NoFramePointerElim = DisableFPElim;
  options.AllowFPOpFusion = FuseFPOps;
  options.UnsafeFPMath = EnableUnsafeFPMath;
  options.NoInfsFPMath = EnableNoInfsFPMath;
  options.NoNaNsFPMath = EnableNoNaNsFPMath;
  options.HonorSignDependentRoundingFPMathOption =
      EnableHonorSignDependentRoundingFPMath;
  options.UseSoftFloat = GenerateSoftFloatCalls;
  if (FloatABIForCalls != FloatABI::Default) {
    options.FloatABIType = FloatABIForCalls;
  }
  options.NoZerosInBSS = DontPlaceZerosInBSS;
  options.GuaranteedTailCallOpt = EnableGuaranteedTailCallOpt;
  options.DisableTailCalls = DisableTailCalls;
  options.StackAlignmentOverride = OverrideStackAlignment;
  options.TrapFuncName = TrapFuncName;
  options.PositionIndependentExecutable = EnablePIE;
  options.EnableSegmentedStacks = SegmentedStacks;
  options.UseInitArray = UseInitArray;

  string FeaturesStr;
  unique_ptr<TargetMachine>
    machine(target->createTargetMachine(triple.getTriple(),
                                        MCPU, FeaturesStr, options,
                                        RelocModel, CMModel, level));
  assert(machine.get() && "Could not allocate target machine!");

  if (DisableDotLoc) {
    machine->setMCUseLoc(false);
  }

  if (DisableCFI) {
    machine->setMCUseCFI(false);
  }

  if (EnableDwarfDirectory) {
    machine->setMCUseDwarfDirectory(true);
  }

  if (GenerateSoftFloatCalls) {
    FloatABIForCalls = FloatABI::Soft;
  }

  // Disable .loc support for older OS X versions.
  if (triple.isMacOSX() && triple.isMacOSXVersionLT(10, 6)) {
    machine->setMCUseLoc(false);
  }

  auto out = make_unique<tool_output_file>(outputPath.c_str(),
                                           err, sys::fs::F_Binary);
  if (!out) {
    report_fatal_error("Unable to create file:\n " + err);
  }

  // Build up all of the passes that we want to do to the module.
  PassManager pm;

  // Add target specific info and transforms
  pm.add(new TargetLibraryInfo(triple));
  machine->addAnalysisPasses(pm);
  pm.add(new DataLayout(&m));

  { // Bound this scope
    formatted_raw_ostream fos(out->os());

    // Ask the target to add backend passes as necessary.
    outs() << machine->getTargetTriple() << "\n";
    if (machine->addPassesToEmitFile(pm, fos, FileType)) {
      report_fatal_error("target does not support generation "
                         "of this file type!\n");
    }

    // Before executing passes, print the final values of the LLVM options.
    cl::PrintOptionValues();

    pm.run(m);
  }

  // Keep the output binary if we've been successful to this point.
  out->keep();
}


static char **
copyEnv(char ** const envp) {
  // Count the number of entries in the old list;
  unsigned entries;   // The number of entries in the old environment list
  for (entries = 0; envp[entries] != NULL; entries++)
    /*empty*/;

  // Add one more entry for the NULL pointer that ends the list.
  ++entries;

  // If there are no entries at all, just return NULL.
  if (entries == 0)
    return NULL;

  // Allocate a new environment list.
  char **newenv = nullptr;
  if ((newenv = new char* [entries]) == NULL)
    return NULL;

  // Make a copy of the list.  Don't forget the NULL that ends the list.
  entries = 0;
  while (envp[entries] != NULL) {
    size_t len = strlen(envp[entries]) + 1;
    newenv[entries] = new char[len];
    memcpy(newenv[entries], envp[entries], len);
    ++entries;
  }
  newenv[entries] = NULL;

  return newenv;
}static int
oldGenerateNative(Module &m,
                  const string &outputFilename,
                  const char **env) {
  string err;
  string bitcode = outputFilename + ".tmp.bc";
  auto out = make_unique<tool_output_file>(bitcode.c_str(),
                                           err, sys::fs::F_Binary);
  WriteBitcodeToFile(&m, out->os());
  out->keep();

  string clang = FindProgramByName("clang++");
  string opt("-O");
  opt += optLevel;

  vector<string> args;
  args.push_back(clang);
  args.push_back("-v");
  args.push_back(opt);
  args.push_back("-o");
  args.push_back(outputFilename);
  args.push_back(bitcode);

  for (unsigned index = 0; index < optPaths.size(); index++) {
    args.push_back("-L" + optPaths[index]);
  }

  for (unsigned index = 0; index < optLibraries.size(); index++) {
    args.push_back("-l" + optLibraries[index]);
  }

  vector<const char *> charArgs;
  for (unsigned i = 0, e = args.size(); i != e; ++i) {
    charArgs.push_back(args[i].c_str());
  }
  charArgs.push_back(0);

  for (auto &s : args) {
    outs() << s.c_str() << " ";
  }
  outs() << "\n";
  return ExecuteAndWait(clang, &charArgs[0], env, 0, 0, 0, &err);
}


int
main (int argc, char **argv, const char **env) {
  // This boiler plate provides convenient stack traces and clean LLVM exit
  // handling. It also initializes the built in support for convenient
  // command line option handling.
  sys::PrintStackTraceOnErrorSignal();
  llvm::PrettyStackTraceProgram X(argc, argv);
  llvm_shutdown_obj shutdown;
  cl::ParseCommandLineOptions(argc, argv);
  InitializeNativeTarget();

  // Construct an IR file from the filename passed on the command line.
  LLVMContext &context = getGlobalContext();
  SMDiagnostic err;
  unique_ptr<Module> module;
  module.reset(ParseIRFile(inPath.getValue(), err, context));

  if (!module.get()) {
    errs() << "Error reading bitcode file.\n";
    err.print(argv[0], errs());
    return -1;
  }

  // Build up all of the passes that we want to run on the module.
  PassManager pm;
  // Add pass for organizing memory layouts.
  pm.add(new DataLayout(module.get()));

  pm.add(new LoopInfo());
  pm.add(createLoopSimplifyPass());
  pm.add(new depprof::DependenceProfilerPass());
  pm.add(createVerifierPass());
  pm.run(*module);

#ifdef CMAKE_TEMP_LIBRARY_PATH
  optPaths.push_back(CMAKE_TEMP_LIBRARY_PATH "/" RUNTIME_LIB);
#endif
#ifdef TEMP_LIBRARY_PATH
  optPaths.push_back(TEMP_LIBRARY_PATH "/Debug+Asserts/lib/");
  optPaths.push_back(TEMP_LIBRARY_PATH "/Release+Asserts/lib/");
  optPaths.push_back(TEMP_LIBRARY_PATH "/Debug/lib/");
  optPaths.push_back(TEMP_LIBRARY_PATH "/Release/lib/");
#endif
  optLibraries.push_back(RUNTIME_LIB);
  optLibraries.push_back("rt");

  if (!oldGenerateNative(*module, outFile, env)) {
    outs() << "Done creating: " << outFile << "\n";
  } else {
    outs() << "Error creating binary\n";
  }

  return 0;
}

