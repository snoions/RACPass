#ifndef LLVM_TRANSFORMS_RACPASS_H
#define LLVM_TRANSFORMS_RACPASS_H

#include "llvm/IR/PassManager.h"

namespace llvm {

class RACWrapperPass : public PassInfoMixin<RACWrapperPass> {
public:
  PreservedAnalyses run(Function &F, FunctionAnalysisManager &AM);

  static bool isRequired() { return true; }
};

}

#endif //LLVM_TRANSFORMS_RACPASS_H
