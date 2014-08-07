
#ifndef DEPPROFILER_H
#define DEPPROFILER_H

#include "llvm/IR/Constant.h"
#include "llvm/IR/DataLayout.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/Instructions.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/IR/Module.h"
#include "llvm/Pass.h"

namespace llvm {


struct DependenceProfilerPass : public llvm::ModulePass {

  static char ID;

  llvm::Type *i8PtrTy = nullptr;

  llvm::Constant *onLoad  = nullptr;
  llvm::Constant *onStore = nullptr;

  llvm::Constant *onFunEntry = nullptr;
  llvm::Constant *onFunExit  = nullptr;

  llvm::Constant *onLoopEntry = nullptr;
  llvm::Constant *onLoopExit  = nullptr;
  llvm::Constant *onLoopLatch = nullptr;

  DependenceProfilerPass()
    : ModulePass(ID)
      { }

  virtual void getAnalysisUsage(llvm::AnalysisUsage &au) const override {
    au.addRequired<llvm::DataLayout>();
    au.addRequired<llvm::LoopInfo>();
  }

  virtual bool runOnModule(llvm::Module &m) override;

  void initialize(llvm::Module &m);

  void handleLoad(llvm::LoadInst &li);
  void handleStore(llvm::StoreInst &si);

  void handleFunctionEntry(llvm::Instruction &pos);
  void handleReturn(llvm::ReturnInst &ri);
  void handleInvoke(llvm::InvokeInst &ii);

  void handleLoop(llvm::Loop &loop);
};


}

#endif
