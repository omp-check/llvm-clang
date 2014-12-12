//===- EdgeProfiling.cpp - Insert counters for edge profiling -------------===//
//
//                      The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// 
//===----------------------------------------------------------------------===//
#define DEBUG_TYPE "insert-edge-profiling"

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
using namespace llvm;

//STATISTIC(NumCallsInserted, "The # of memory calls inserted");

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
	//Type* PointerTy = Type::getFP128Ty(Context);
//	char string[20];
//	Type *StrTy= Type::getInt8PtrTy(Context);
//	Type *VoidPtrTy= Type::getVoidPtrTy(Context);
  
//	sprintf(string, "%p", Instrucao);
//	StringRef ipStr = StringRef(string);
//	Value* st = ConstantDataArray::getString(Context, ipStr, true);
//	errs() << "Inst: " << Instrucao << "\nTIPO: " << /**(Instrucao->getType()) << " | " <<*/ *(st->getType()) << "\n\n";
  Constant *ProfFn = M.getOrInsertFunction(FnName, VoidTy, Addr->getType(), itNO->getType(), tID->getType(), UIntTy, Int8PTy, UIntTy, NULL);

  std::vector<Value*> Args(6);
  Args[0] = Addr;
  Args[1] = itNO;
  Args[2] = tID;
  Args[3] = ConstantInt::get(UIntTy, tipo);
  Args[4] = current;
  Args[5] = ConstantInt::get(UIntTy, lineNo);
  //Args[3] = ConstantInt::get(StrTy, Fn->getName().data());
  
	//errs() << "=== PROFILING BEFORE {" << *Inst << "} IN FUNCTION {" << Fn->getName() << "}\n";
  CallInst::Create(ProfFn, Args, "", Inst);
}

void InsertSetCall(Function *Fn, const char *FnName, Instruction *Inst, Value *itNO, Value *tID) {
  LLVMContext &Context = Fn->getContext();
  Type *VoidTy = FunctionType::getVoidTy(Context);
  Module &M = *Fn->getParent();
  //Type *StrTy= Type::getInt8PtrTy(Context);
  
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
  //Type *StrTy= Type::getInt8PtrTy(Context);
  
  Constant *ProfFn = M.getOrInsertFunction(FnName, VoidTy, tID->getType(), NULL);

  std::vector<Value*> Args(1);
  Args[0] = tID;
  
  CallInst::Create(ProfFn, Args, "", Inst);
}

Value * InsertGetCall(Function *Fn, const char *FnName, Instruction *Inst, Value *tID) {
  LLVMContext &Context = Fn->getContext();
  Type *UIntTy = Type::getInt32Ty(Context);
  Module &M = *Fn->getParent();
  //Type *StrTy= Type::getInt8PtrTy(Context);
  
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
//  Args[0] = ConstantInt::get(UIntTy, 0);
  
  return CallInst::Create(ProfFn, Args, "", Inst);
}

void RecursiveCallInstrumentation (Function *F) {

	errs() << "\tFUNCAO: " << F->getName() << " - " << F->onlyReadsMemory() <<"\n";
	Value * indexValue, * tID;

	if(F->hasUWTable() && conj.count(F) == 0) {
		LLVMContext &Context = F->getContext();
		Type *UIntTy = Type::getInt32Ty(Context);
		Module &M = *F->getParent();
		Constant *ProfFn = M.getOrInsertFunction("omp_get_thread_num", UIntTy, NULL);
		tID = CallInst::Create(ProfFn, "", (F->begin())->begin());
		indexValue = InsertGetCall(F, "getVec", ++(F->begin())->begin(), tID);
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
			else if (isa<LoadInst>(CurrentInst) || isa<StoreInst>(CurrentInst)) {
				NumCalls += 1;
				Value *Addr;
				Instruction *PC;
				if (isa<LoadInst>(CurrentInst)) {
					LoadInst *LI = dyn_cast<LoadInst>(CurrentInst);
					Addr = LI->getPointerOperand();
					errs() << "\t\tLOAD: " << *LI << "(" << LI << ") - " << *indexValue << " - " << *tID <<"\n";
					PC = InsertGetPC(F, "get_pc", CurrentInst);
					InsertProfilingCall(F,"llvm_memory_profiling", Addr, NumCalls, NextInst, 0, indexValue, tID, PC, (CurrentInst->getDebugLoc()).getLine());
				}
				else
				{
					StoreInst *SI = dyn_cast<StoreInst>(CurrentInst);
					Addr = SI->getPointerOperand();
					errs() << "\t\tSTORE: " << *SI << "(" << SI <<") - " << *indexValue << " - " << *tID <<"\n";
					PC = InsertGetPC(F, "get_pc", CurrentInst);
				     InsertProfilingCall(F,"llvm_memory_profiling", Addr, NumCalls, NextInst,1, indexValue, tID, PC, (CurrentInst->getDebugLoc()).getLine());
				}
			}

			I = NextInst;
		}
	}

	errs() << "\tEND FUNCAO: " << F->getName() << "\n";
}

bool MemoryProfiler::runOnModule(Module &M) {
	Function *Main = M.getFunction("main");

	std::vector<Function *> v;
	Function * fn;
	FILE * f;

	f = fopen("temp_check_functions.log", "a");
	fprintf(f, "---end---\n");
	fclose(f);

	f = fopen("temp_check_functions.log", "r");
//	load_list = fopen("temp_check_loads.log", "w");
//	store_list = fopen("temp_check_stores.log", "w");

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
	bool instrumenta = false, first = true, cond = false;
	int numLoops = 0, loop = 1;
	Function::iterator init, main;
	for (std::vector<Function *>::iterator it = v.begin(); it != v.end(); ++it) {
		errs() << "FN: " << (*it)->getName() << "\n";

		instrumenta = false;

		for (Function::iterator BB = (*it)->begin(), E = (*it)->end(); BB != E; BB++) {
			if(BB->getName().compare("omp.loop.init") == 0) {
				init = BB;
				LLVMContext &Context = (*it)->getContext();
				Type *UIntTy = Type::getInt32Ty(Context);

				Module &M = *(*it)->getParent();
				Constant *ProfFn = M.getOrInsertFunction("omp_get_num_threads", UIntTy, NULL);
				numT = CallInst::Create(ProfFn, "", BB->begin());
				InsertAllocaCall(*it, "alloca_vec", ++(BB->begin()), numT);
			}
			else if(BB->getName().compare("omp.loop.main") == 0) {
				main = BB;
			}
			else if(BB->getName().compare("omp.check.start") == 0) {
				instrumenta = true;
				iterador = main->begin()->getOperand(1);

				LLVMContext &Context = (*it)->getContext();
				Type *UIntTy = Type::getInt32Ty(Context);

				Module &M = *(*it)->getParent();
				Constant *ProfFn = M.getOrInsertFunction("omp_get_thread_num", UIntTy, NULL);
				tID = CallInst::Create(ProfFn, "", init->begin());
				indexValue = new LoadInst(iterador, "", BB->begin());
				InsertSetCall(*it, "setVec", ++(BB->begin()), indexValue, tID);
				//InsertProfilingCall(*it,"llvm_memory_profiling", Addr, NumCalls, NextInst, 0, indexValue, tID);
				errs() << " === START!\n";
			}
			else if (BB->getName().compare("omp.check.end") == 0) {
				instrumenta = false;
				errs() << " === END!\n";
			}
			else if(BB->getName().startswith("for.cond")) {
				errs() << " New loop: " << loop++ << "\n";
				numLoops++;
				cond = true;
			}
			else if(BB->getName().startswith("for.end")) {
				errs() << " End loop: " << --loop << "\n";
			}

			if(instrumenta) {
				errs() << " === INSTRUMENTANDO: " << BB->getName() << " em " << (*it)->getName() <<"\n";
				for (BasicBlock::iterator I=BB->begin(), E= BB->end(); I!=E; ) {
					Instruction *CurrentInst = I;
					Instruction *NextInst= ++I;
		
					if (isa<LoadInst>(CurrentInst) || isa<StoreInst>(CurrentInst)) {
						++NumCalls;
						Value *Addr;
						Instruction *PC;
						errs() << "LINHA: " << (CurrentInst->getDebugLoc()).getLine() << "\n";
						if (isa<LoadInst>(CurrentInst)) {
							if(!first) {
								LoadInst *LI = dyn_cast<LoadInst>(CurrentInst);
								Addr = LI->getPointerOperand();
//								fprintf(load_list, "%p\n", CurrentInst);
								errs() << "\tLOAD: " << *CurrentInst << "(" << CurrentInst << ") - " << *indexValue << " - " << *tID <<"\n";
//								PC = InsertGetPC(*it, "__builtin_return_address", NextInst);
								PC = InsertGetPC(*it, "get_pc", CurrentInst);
								InsertProfilingCall(*it,"llvm_memory_profiling", Addr, NumCalls, NextInst, 0, indexValue, tID, PC, (CurrentInst->getDebugLoc()).getLine());
							}
							else {
								first = false;
							}
						}
						else
						{
							StoreInst *SI = dyn_cast<StoreInst>(CurrentInst);
							Addr = SI->getPointerOperand();
//							fprintf(store_list, "%p\n", CurrentInst);
							errs() << "\tSTORE: " << *CurrentInst << "(" << CurrentInst << ") - " << *indexValue << " - " << *tID <<"\n";
//							PC = InsertGetPC(*it, "__builtin_return_address", NextInst);
							PC = InsertGetPC(*it, "get_pc", CurrentInst);
						     InsertProfilingCall(*it,"llvm_memory_profiling", Addr, NumCalls, NextInst,1, indexValue, tID, PC, (CurrentInst->getDebugLoc()).getLine());
						}
					}
					else if(isa<CallInst>(CurrentInst)) {
						CallInst *CI = dyn_cast<CallInst>(CurrentInst);
						fn = CI->getCalledFunction();
						RecursiveCallInstrumentation (fn);
					}
					/*else if(cond && isa<ICmpInst>(CurrentInst)) {
						LoadInst *CI = dyn_cast<LoadInst>(CurrentInst->getOperand(0));
						Value * address = CI->getPointerOperand(), * index = CI;
						errs() << "\tCMP: " << *address << " | " << *index << "\n";
						cond = false;
					}*/

					I=NextInst;
				}
			}
		}
	}

	errs() << "END OMP_MICROTASK\n";
  
  if (Main == 0) {
    errs() << "WARNING: cannot insert memory profiling into a module"
           << " with no main function!\n";
    return false;  // No main, no instrumentation!
  }

/*
  std::set<BasicBlock*> BlocksToInstrument;
  unsigned NumCalls = 0;
  for (Module::iterator F = M.begin(), E = M.end(); F != E; ++F) {
    if (F->isDeclaration()) continue;
    //errs() << F->getName() << "\n";
    for (Function::iterator BB = F->begin(), E = F->end(); BB != E; ) {
	//errs() << "\t" << BB->getName() << "\n";
	BasicBlock *CurrentBB=BB;
	BasicBlock *NextBB=++BB;
	
	for (BasicBlock::iterator I=CurrentBB->begin(), E= CurrentBB->end(); I!=E; ){
		Instruction *CurrentInst = I;
		Instruction *NextInst= ++I;
                
                
                if (isa<CallInst>(CurrentInst))
                {
                    CallInst *CI=dyn_cast<CallInst>(CurrentInst);
                    
                    StringRef nombre=CI->getCalledFunction()->getName();
                    
                    //errs()<<nombre<<"\n";
                    
                    if (nombre.compare("iterCount")==0) errs()<<"Habilitado"<<"\n";        
                    if (nombre.compare("iterFinish")==0) errs()<<"Deshabilitado"<<"\n";
                    
                    
                    
                }
		
		if (isa<LoadInst>(CurrentInst) || isa<StoreInst>(CurrentInst))
		{
			++NumCalls;
			Value *Addr;
			if (isa<LoadInst>(CurrentInst)) {
				LoadInst *LI = dyn_cast<LoadInst>(CurrentInst);
				Addr = LI->getPointerOperand();
                                
                                InsertProfilingCall(F,"llvm_memory_profiling", Addr, NumCalls, NextInst,0);
			}
			else
			{
				StoreInst *SI = dyn_cast<StoreInst>(CurrentInst);
				Addr = SI->getPointerOperand();
                                InsertProfilingCall(F,"llvm_memory_profiling", Addr, NumCalls, NextInst,1);
			}
			
			
			CurrentBB = SplitBlock(CurrentBB, NextInst, this);
			E=CurrentBB->end();
		}
		I=NextInst;

	}
	
	BB=NextBB;
     
    }
  }*/

//  NumCallsInserted = 0;

//  errs() << "The total number of load & store instructions: " << NumCallsInserted << "\n";

	
  
  // Add the initialization call to main.
  InsertProfilingInitCall(Main, "llvm_start_memory_profiling");
  return true;
}

