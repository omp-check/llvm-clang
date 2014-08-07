#define DEBUG_TYPE "loop-finder-type"
#include "llvm/Transforms/Instrumentation.h"
#include "llvm/Transforms/Scalar.h"
#include "llvm/ADT/SmallVector.h"
#include "llvm/ADT/Statistic.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Intrinsics.h"
#include "llvm/Analysis/Dominators.h"
#include "llvm/Analysis/LoopPass.h"
#include "llvm/Analysis/ScalarEvolution.h"
#include "DepProfiler.h"
#include "llvm/DebugInfo.h"
#include "llvm/InstVisitor.h"
#include "llvm/IR/Intrinsics.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Transforms/Scalar.h"
#include "llvm/Transforms/Utils/ModuleUtils.h"
#include "ProfilingUtils.h"
#include "llvm/IR/Instructions.h"
#include "llvm/Pass.h"
#include <iterator>
using namespace llvm;

STATISTIC(NumLoops, "Number of loops detected");
STATISTIC(NumParallelLoops, "Number of parallel loops detected");

namespace {
  class LoopFinder : public ModulePass {
  public:
    static char ID; // Pass ID, replacement for typeid
    LoopFinder() : ModulePass(ID) {
      initializeLoopFinderPass(*PassRegistry::getPassRegistry());
    }

	virtual void getAnalysisUsage(llvm::AnalysisUsage &au) const override {
	    au.addRequired<llvm::DataLayout>();
	    au.addRequired<llvm::LoopInfo>();
	  }

    // Possibly eliminate loop L if it is dead.
    bool runOnModule(Module &m);

  llvm::Type *i8PtrTy = nullptr;

  llvm::Constant *onLoad  = nullptr;
  llvm::Constant *onStore = nullptr;

  llvm::Constant *onFunEntry = nullptr;
  llvm::Constant *onFunExit  = nullptr;

  llvm::Constant *onLoopEntry = nullptr;
  llvm::Constant *onLoopExit  = nullptr;
  llvm::Constant *onLoopLatch = nullptr;

  void handleLoad(llvm::LoadInst &li);
  void handleStore(llvm::StoreInst &si);

  void handleFunctionEntry(llvm::Instruction &pos);
  void handleReturn(llvm::ReturnInst &ri);
  void handleInvoke(llvm::InvokeInst &ii);

  void handleLoop(llvm::Loop &loop);
  };
}

char LoopFinder::ID = 0;
INITIALIZE_PASS(LoopFinder, "loop-finder",
                "Luis & Juan - Finding loops and parallel loops", false, false)


void
DependenceProfilerPass::handleLoad(LoadInst &li) {
  uint64_t size    = getAnalysis<DataLayout>().getTypeStoreSize(li.getType());
  auto  *i64Ty     = Type::getInt64Ty(li.getContext());

  Value *loaded = li.getPointerOperand();
  Value *args[] = {
    new BitCastInst(loaded, i8PtrTy, "", &li),
    ConstantInt::get(i64Ty, size)
  };
  CallInst::Create(onLoad, args, "", &li);
}


void
DependenceProfilerPass::handleStore(StoreInst &si) {
  auto *storedTy   = si.getValueOperand()->getType();
  uint64_t size    = getAnalysis<DataLayout>().getTypeStoreSize(storedTy);
  auto  *i64Ty     = Type::getInt64Ty(si.getContext());

  Value *loaded = si.getPointerOperand();
  Value *args[] = {
    new BitCastInst(loaded, i8PtrTy, "", &si),
    ConstantInt::get(i64Ty, size)
  };
  CallInst::Create(onStore, args, "", &si);
}


////////////////////////////////////////////////////////////////////////////////
// Handle function entry/exit events
////////////////////////////////////////////////////////////////////////////////

void
DependenceProfilerPass::handleFunctionEntry(Instruction &pos) {
  auto &ctxt = pos.getContext();
  auto *m = pos.getParent()->getParent()->getParent();
  auto *getFramePtr = Intrinsic::getDeclaration(m, Intrinsic::frameaddress);
  Value *args[] = { ConstantInt::get(Type::getInt32Ty(ctxt), 0) };
  args[0] = CallInst::Create(getFramePtr, args, "", &pos);
  CallInst::Create(onFunEntry, args, "", &pos);
}


void
DependenceProfilerPass::handleReturn(ReturnInst &ri) {
  CallInst::Create(onFunExit, "", &ri);
}


void
DependenceProfilerPass::handleInvoke(InvokeInst &ii) {
  // TODO: Implement this to handle C++ programs
}

void
LoopFinder::handleLoop(Loop &loop) {
  // First process the loop's entries
  auto *entry = loop.getLoopPredecessor();
  CallInst::Create(onLoopEntry, "", entry->getTerminator());

  // Next process the loop's exits
  SmallVector<BasicBlock*,8> exiting;
  loop.getExitBlocks(exiting);
  for (auto *bb : exiting) {
    CallInst::Create(onLoopExit, "", bb->getFirstInsertionPt());
  }

  // Now handle the unique backedge
  auto *latch = loop.getLoopLatch();
  CallInst::Create(onLoopLatch, "", latch->getTerminator());

  // Recursively traverse any subloops
  for (auto &subloop : loop) {
    handleLoop(*subloop);
  }
}

ModulePass *llvm::createLoopFinderPass() {
  return new LoopFinder();
}

bool LoopFinder::runOnModule(Module &m) {

	for (auto &f : m) {
    if (f.isDeclaration()) {
      continue;
    }

	auto &loopInfo = getAnalysis<LoopInfo>(f);
    for (auto &loop : loopInfo) {
		handleLoop(*loop);
    }
 
  }

	errs() << "The total number of loops: " << NumLoops << "\n";
	errs() << "The total number of parallel loops: " << NumParallelLoops << "\n";

	return true;
}
