#include <stdio.h>
#include <stdlib.h>
#include "llvm/Transforms/Instrumentation.h"
#include "ProfilingUtils.h"
#include "llvm/ADT/Statistic.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Instructions.h"
#include "llvm/Pass.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/ADT/SmallString.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Transforms/Utils/BasicBlockUtils.h"
#include <set>
#include <iostream>
#include <vector>
#include <set>
using namespace llvm;


std::set<Function *> conj;
unsigned NumCalls = 0;

namespace {
  class MemoryProfiler : public ModulePass {
    bool runOnModule(Module &M);
  public:
    static char ID; // Pass identification, replacement for typeid
    MemoryProfiler() : ModulePass(ID) {
      initializeMemoryProfilerPass(*PassRegistry::getPassRegistry());
    }

    virtual const char *getPassName() const {
      return "Memory Profiler";
    }
  };
}

char MemoryProfiler::ID = 0;
INITIALIZE_PASS(MemoryProfiler, "insert-memory-profiling",
                "Juan - Insert instrumentation for memory profiling", false, false)

ModulePass *llvm::createMemoryProfilerPass() { return new MemoryProfiler(); }

void InsertProfilingInitCall(Function *Fn, const char *FnName, Instruction *Inst) {
  LLVMContext &Context = Fn->getContext();
  Type *VoidTy = FunctionType::getVoidTy(Context);

  
  Module &M = *Fn->getParent();
  Constant *ProfFn = M.getOrInsertFunction(FnName,VoidTy,NULL);//M..getOrInsertFunction(new StringRef("hola"), VoidTy);
                        
  CallInst::Create(ProfFn, "", Inst);
}

void InsertProfilingCall(Function *Fn, const char *FnName, Value *Addr, unsigned CallNO, Instruction *Inst, unsigned tipo, Value *itNO, Value *tID, Value *current, int lineNo) {
  LLVMContext &Context = Fn->getContext();
  Type *VoidTy = FunctionType::getVoidTy(Context);
  Type *UIntTy = Type::getInt32Ty(Context);
  Module &M = *Fn->getParent();
	Type *Int8PTy= Type::getInt8PtrTy(Context);

  Constant *ProfFn = M.getOrInsertFunction(FnName, VoidTy, Addr->getType(), itNO->getType(), tID->getType(), UIntTy, Int8PTy, UIntTy, NULL);

  std::vector<Value*> Args(6);
  Args[0] = Addr;
  Args[1] = itNO;
  Args[2] = tID;
  Args[3] = ConstantInt::get(UIntTy, tipo);
  Args[4] = current;
  Args[5] = ConstantInt::get(UIntTy, lineNo);

  
  CallInst::Create(ProfFn, Args, "", Inst);
}

void InsertSetCall(Function *Fn, const char *FnName, Instruction *Inst, Value *itNO, Value *tID) {
  LLVMContext &Context = Fn->getContext();
  Type *VoidTy = FunctionType::getVoidTy(Context);
  Module &M = *Fn->getParent();
  
  Constant *ProfFn = M.getOrInsertFunction(FnName, VoidTy, tID->getType(), itNO->getType(), NULL);

  std::vector<Value*> Args(2);
  Args[0] = tID;
  Args[1] = itNO;
  
  CallInst::Create(ProfFn, Args, "", Inst);
}

void InsertAllocaCall(Function *Fn, const char *FnName, Instruction *Inst, Value *tID) {
  LLVMContext &Context = Fn->getContext();
  Type *VoidTy = FunctionType::getVoidTy(Context);
  Module &M = *Fn->getParent();
  
  Constant *ProfFn = M.getOrInsertFunction(FnName, VoidTy, tID->getType(), NULL);

  std::vector<Value*> Args(1);
  Args[0] = tID;
  
  CallInst::Create(ProfFn, Args, "", Inst);
}

Value * InsertGetCall(Function *Fn, const char *FnName, Instruction *Inst, Value *tID) {
  LLVMContext &Context = Fn->getContext();
  Type *UIntTy = Type::getInt32Ty(Context);
  Module &M = *Fn->getParent();
  
  Constant *ProfFn = M.getOrInsertFunction(FnName, UIntTy, tID->getType(), NULL);

  std::vector<Value*> Args(1);
  Args[0] = tID;
  
  return CallInst::Create(ProfFn, Args, "", Inst);
}

Instruction *InsertGetPC(Function *Fn, const char *FnName, Instruction *Inst) {
  LLVMContext &Context = Fn->getContext();
  Type *VoidTy = FunctionType::getVoidTy(Context);
	Type *UIntTy = Type::getInt32Ty(Context);
  Module &M = *Fn->getParent();
  Type *IntPTy= Type::getInt8PtrTy(Context);
  
  Constant *ProfFn = M.getOrInsertFunction(FnName, IntPTy, NULL);

  std::vector<Value*> Args(0);
  
  return CallInst::Create(ProfFn, Args, "", Inst);
}

void RecursiveCallInstrumentation (Function *F) {
	Instruction *PC;
	std::set<StringRef> locals;

	errs() << "\tFUNCAO: " << F->getName() << " - " << F->onlyReadsMemory() <<"\n";
	Value * indexValue, * tID;

	if(F->hasUWTable() && conj.count(F) == 0) {
		errs() << "F INIT\n";
		LLVMContext &Context = F->getContext();
		Type *UIntTy = Type::getInt32Ty(Context);
		Module &M = *F->getParent();
		Constant *ProfFn = M.getOrInsertFunction("omp_get_thread_num", UIntTy, NULL);
		tID = CallInst::Create(ProfFn, "", (F->begin())->begin());
		indexValue = InsertGetCall(F, "getVec", ++(F->begin())->begin(), tID);
		PC = InsertGetPC(F, "get_pc", (F->begin())->begin());
		conj.insert(F);
	}

	for (Function::iterator BB = F->begin(), E = F->end(); BB != E; BB++) {
		errs() << "\t\tBB: " << BB->getName() << "\n";
		for (BasicBlock::iterator I=BB->begin(), E= BB->end(); I!=E; ) {
			Instruction *CurrentInst = I;
			Instruction *NextInst= ++I;
			if(isa<CallInst>(CurrentInst)) {
				CallInst *CI = dyn_cast<CallInst>(CurrentInst);
				Function * f = CI->getCalledFunction();
				if(f->getName().compare(F->getName()) != 0 && f->hasUWTable() && conj.count(f) == 0) {
					RecursiveCallInstrumentation(f);
				}
			}
			else if (isa<AllocaInst>(CurrentInst)) {
				Value *Val = dyn_cast<Value>(CurrentInst);
				locals.insert(Val->getName());
			}
			else if (isa<LoadInst>(CurrentInst) || isa<StoreInst>(CurrentInst)) {
				NumCalls += 1;
				Value *Addr;
				if (isa<LoadInst>(CurrentInst)) {
					LoadInst *LI = dyn_cast<LoadInst>(CurrentInst);
					Addr = LI->getPointerOperand();
					errs() << "\t\tLOAD: " << *LI << "(" << LI << ") - " << *indexValue << " - " << *tID <<"\n";
					if(!locals.count(Addr->getName())) {
						InsertProfilingCall(F,"llvm_memory_profiling", Addr, NumCalls, CurrentInst, 0, indexValue, tID, PC, (CurrentInst->getDebugLoc()).getLine());
					}
				}
				else
				{
					StoreInst *SI = dyn_cast<StoreInst>(CurrentInst);
					Addr = SI->getPointerOperand();
					errs() << "\t\tSTORE: " << *SI << "(" << SI <<") - " << *indexValue << " - " << *tID <<"\n";
					if(!locals.count(Addr->getName())) {
				     	InsertProfilingCall(F,"llvm_memory_profiling", Addr, NumCalls, CurrentInst,1, indexValue, tID, PC, (CurrentInst->getDebugLoc()).getLine());
					}
				}
			}

			I = NextInst;
		}
	}

	errs() << "\tEND FUNCAO: " << F->getName() << "\n";
}

bool MemoryProfiler::runOnModule(Module &M) {
	Function *Main = M.getFunction("main");

	if (Main != 0) {
		InsertProfilingInitCall(Main, "llvm_start_memory_profiling", (Main->begin())->begin());
	}

	std::vector<Function *> v;
	std::set<StringRef> locals;
	Function * fn;
	FILE * f;

	f = fopen("temp_check_functions.log", "a");
	fprintf(f, "---end---\n");
	fclose(f);

	f = fopen("temp_check_functions.log", "r");

	char str[50];
	while(!feof(f)) {
		fscanf(f, "%s\n", str);
		if(strcmp(str, "---end---")) {
			fn = M.getFunction(str);
			v.push_back(fn);
		}
	}

	Value * iterador;
	Value * tID, * numT;
	Value * indexValue;
	bool instrumenta = false, first = true, cond = false, iteradorFound = false;
	bool LoadArray = false;
	int numLoops = 0, loop = 1;
	Instruction *PC;
	Instruction *iteradorPtr;
	GetElementPtrInst *GEPI;
	Function::iterator init, main;
	for (std::vector<Function *>::iterator it = v.begin(); it != v.end(); ++it) {
		errs() << "FN: " << (*it)->getName() << "\n";

		instrumenta = false;
		iteradorFound = false;

		for (Function::iterator BB = (*it)->begin(), E = (*it)->end(); BB != E; BB++) {
			errs() << "BB: " << BB->getName() << "\n";
			if(BB->getName().compare("omp.loop.init") == 0) {
				init = BB;
				LLVMContext &Context = (*it)->getContext();
				Type *UIntTy = Type::getInt32Ty(Context);

				PC = InsertGetPC(*it, "get_pc", BB->begin());
				Module &M = *(*it)->getParent();
				Constant *ProfFn = M.getOrInsertFunction("omp_get_num_threads", UIntTy, NULL);
				numT = CallInst::Create(ProfFn, "", BB->begin());
				ProfFn = M.getOrInsertFunction("omp_get_thread_num", UIntTy, NULL);
				tID = CallInst::Create(ProfFn, "", ++(BB->begin()));
				InsertAllocaCall(*it, "alloca_vec", ++(BB->begin()), numT);
			}
			else if(BB->getName().compare("omp.loop.main") == 0) {
				for (Function::iterator BB2 = BB, E = (*it)->end(); BB != E; BB2++) {
					for (BasicBlock::iterator I=BB2->begin(), E= BB2->end(); I!=E; ) {
						Instruction *CurrentInst = I;
						Instruction *NextInst= ++I;

						if (isa<StoreInst>(CurrentInst)) {
							iteradorPtr = CurrentInst;
							iteradorFound = true;
							break;
						}
						I=NextInst;
					}
					if(iteradorFound) break;
				}
				main = BB;
			}
			else if(BB->getName().compare("omp.check.start") == 0) {
				instrumenta = true;
				iterador = iteradorPtr->getOperand(1);
				indexValue = new LoadInst(iterador, "", BB->begin());
				InsertSetCall(*it, "setVec", ++(BB->begin()), indexValue, tID);
				errs() << " === START!\n";
			}
			else if (BB->getName().compare("omp.check.end") == 0) {
				instrumenta = false;
				errs() << " === END!\n";
			}
			else if (BB->getName().compare("omp.loop.end") == 0) {
				for (BasicBlock::iterator I=BB->begin(), E= BB->end(); I!=E; ) {
					Instruction *CurrentInst = I;
					Instruction *NextInst= ++I;

					if (isa<ReturnInst>(CurrentInst)) {
						InsertProfilingInitCall(*it, "clear_instrumentation", CurrentInst);
					}
					I=NextInst;
				}
			}
			else if(BB->getName().startswith("for.cond")) {
				errs() << " New loop: " << loop++ << "\n";
				numLoops++;
				cond = true;
			}
			else if(BB->getName().startswith("for.end")) {
				errs() << " End loop: " << --loop << "\n";
			}
			else if (BB->getName().compare("entry") == 0) {
				for (BasicBlock::iterator I=BB->begin(), E= BB->end(); I!=E; ) {
					Instruction *CurrentInst = I;
					Instruction *NextInst= ++I;

					if (isa<AllocaInst>(CurrentInst)) {
						Value *Val = dyn_cast<Value>(CurrentInst);
						locals.insert(Val->getName());
					}
					I=NextInst;
				}
			}

			if(instrumenta) {
				errs() << " === INSTRUMENTANDO: " << BB->getName() << " em " << (*it)->getName() <<"\n";
				for (BasicBlock::iterator I=BB->begin(), E= BB->end(); I!=E; ) {
					Instruction *CurrentInst = I;
					Instruction *NextInst= ++I;

					LoadArray = false;
					if (isa<LoadInst>(CurrentInst) || isa<StoreInst>(CurrentInst)) {
						++NumCalls;
						Value *Addr;
						Value *Val;
						
						errs() << "LINHA: " << (CurrentInst->getDebugLoc()).getLine() << "\n";
						if (isa<LoadInst>(CurrentInst)) {
							if(!first) {
								LoadInst *LI = dyn_cast<LoadInst>(CurrentInst);
								Value *Val = dyn_cast<Value>(CurrentInst);
								Addr = LI->getPointerOperand();
								errs() << "\tLOAD (" << Val->getName() << "): " << *CurrentInst << "(" << CurrentInst << ") - " << *indexValue << " - " << *tID << " - " << Val->getType()->isPointerTy() << " - " << Addr->getName() << "\n";
								if (isa<GetElementPtrInst>(NextInst)) {
									GEPI = dyn_cast<GetElementPtrInst>(NextInst);
									Val = GEPI->getPointerOperand();
									if(Val == LI) {
										LoadArray = true;
									}
								}
								if(Addr == GEPI) LoadArray = true;

								if(!LoadArray && !locals.count(Addr->getName())) {
									InsertProfilingCall(*it,"llvm_memory_profiling", Addr, NumCalls, CurrentInst, 0, indexValue, tID, PC,
	 (CurrentInst->getDebugLoc()).getLine());
								}
							}
							else {
								first = false;
							}
						}
						else
						{
							StoreInst *SI = dyn_cast<StoreInst>(CurrentInst);
							Value *Val = dyn_cast<Value>(CurrentInst);
							Addr = SI->getPointerOperand();
							errs() << "\tSTORE (" << Val->getName() << "): " << *CurrentInst << "(" << CurrentInst << ") - " << *indexValue << " - " << *tID << " - " << Val->getType()->isPointerTy() << "\n";

							if(!locals.count(Addr->getName())) {
								InsertProfilingCall(*it,"llvm_memory_profiling", Addr, NumCalls, CurrentInst,1, indexValue, tID, PC, (CurrentInst->getDebugLoc()).getLine());
							}
						}
					}
					else if(isa<CallInst>(CurrentInst)) {
						CallInst *CI = dyn_cast<CallInst>(CurrentInst);
						fn = CI->getCalledFunction();
						RecursiveCallInstrumentation (fn);
					}

					I=NextInst;
				}
			}
		}
	}

	errs() << "END OMP_MICROTASK\n";
  
  return true;
}

