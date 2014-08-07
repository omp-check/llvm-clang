/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Assembly Matcher Source Fragment                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_ASSEMBLER_HEADER
#undef GET_ASSEMBLER_HEADER
  // This should be included into the middle of the declaration of
  // your subclasses implementation of MCTargetAsmParser.
  unsigned ComputeAvailableFeatures(uint64_t FeatureBits) const;
  void convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                       const SmallVectorImpl<MCParsedAsmOperand*> &Operands);
  void convertToMapAndConstraints(unsigned Kind,
                           const SmallVectorImpl<MCParsedAsmOperand*> &Operands);
  bool mnemonicIsValid(StringRef Mnemonic);
  unsigned MatchInstructionImpl(
                           const SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                                MCInst &Inst,
                                unsigned &ErrorInfo, bool matchingInlineAsm,
                                unsigned VariantID = 0);

  enum OperandMatchResultTy {
    MatchOperand_Success,    // operand matched successfully
    MatchOperand_NoMatch,    // operand did not match
    MatchOperand_ParseFail   // operand matched but had errors
  };
  OperandMatchResultTy MatchOperandParserImpl(
    SmallVectorImpl<MCParsedAsmOperand*> &Operands,
    StringRef Mnemonic);
  OperandMatchResultTy tryCustomParseOperand(
    SmallVectorImpl<MCParsedAsmOperand*> &Operands,
    unsigned MCK);

#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Flags for subtarget features that participate in instruction matching.
enum SubtargetFeatureFlag {
  Feature_HasSEInReg = (1 << 9),
  Feature_HasBitCount = (1 << 0),
  Feature_HasSwap = (1 << 11),
  Feature_HasCondMov = (1 << 1),
  Feature_HasFPIdx = (1 << 4),
  Feature_HasMips32 = (1 << 5),
  Feature_HasMips32r2 = (1 << 6),
  Feature_HasMips64 = (1 << 7),
  Feature_NotMips64 = (1 << 19),
  Feature_HasMips64r2 = (1 << 8),
  Feature_IsN64 = (1 << 14),
  Feature_NotN64 = (1 << 20),
  Feature_InMips16Mode = (1 << 12),
  Feature_RelocStatic = (1 << 22),
  Feature_RelocPIC = (1 << 21),
  Feature_NoNaNsFPMath = (1 << 17),
  Feature_HasStdEnc = (1 << 10),
  Feature_IsFP64bit = (1 << 13),
  Feature_NotFP64bit = (1 << 18),
  Feature_IsSingleFloat = (1 << 16),
  Feature_IsNotSingleFloat = (1 << 15),
  Feature_HasDSP = (1 << 2),
  Feature_HasDSPR2 = (1 << 3),
  Feature_None = 0
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(unsigned Val) {
  switch(Val) {
  case Feature_HasSEInReg: return "";
  case Feature_HasBitCount: return "";
  case Feature_HasSwap: return "";
  case Feature_HasCondMov: return "";
  case Feature_HasFPIdx: return "";
  case Feature_HasMips32: return "";
  case Feature_HasMips32r2: return "";
  case Feature_HasMips64: return "";
  case Feature_NotMips64: return "";
  case Feature_HasMips64r2: return "";
  case Feature_IsN64: return "";
  case Feature_NotN64: return "";
  case Feature_InMips16Mode: return "";
  case Feature_RelocStatic: return "";
  case Feature_RelocPIC: return "";
  case Feature_NoNaNsFPMath: return "";
  case Feature_HasStdEnc: return "";
  case Feature_IsFP64bit: return "";
  case Feature_NotFP64bit: return "";
  case Feature_IsSingleFloat: return "";
  case Feature_IsNotSingleFloat: return "";
  case Feature_HasDSP: return "";
  case Feature_HasDSPR2: return "";
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_Reg,
  CVT_95_addCPURegsAsmOperands,
  CVT_95_addImmOperands,
  CVT_95_addCPU64RegsAsmOperands,
  CVT_regRA,
  CVT_95_addCCRAsmOperands,
  CVT_imm_0,
  CVT_regRA_64,
  CVT_95_addMemOperands,
  CVT_regZERO_64,
  CVT_regZERO,
  CVT_95_addHW64RegsAsmOperands,
  CVT_95_addHWRegsAsmOperands,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__Reg1_1__Reg1_2,
  Convert__CPURegsAsm1_0__CPURegsAsm1_1__CPURegsAsm1_2,
  Convert__CPURegsAsm1_0__CPURegsAsm1_1__Imm1_2,
  Convert__Reg1_1__Reg1_2__Reg1_3,
  Convert__Reg1_0__Imm1_1,
  Convert__Imm1_1,
  Convert__Reg1_0__Reg1_1__Imm1_2,
  Convert__Reg1_0__Imm1_2,
  Convert__Reg1_0__Tie0__Imm1_1,
  Convert__Reg1_0__Reg1_1__Reg1_2,
  Convert__Reg1_0__Tie0__Reg1_1,
  Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__CPU64RegsAsm1_2,
  Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2,
  Convert__Reg1_0__Reg1_1__Imm1_2__Tie0,
  Convert__Imm1_0,
  Convert__regRA__Imm1_0,
  Convert__CPURegsAsm1_0__Imm1_1,
  Convert__Reg1_0__Reg1_1,
  Convert__Reg1_3__Reg1_4__Imm1_1,
  Convert__Reg1_2__Reg1_3,
  Convert__Reg1_0__CCRAsm1_1,
  Convert__CPURegsAsm1_0__CPURegsAsm1_1,
  Convert__Reg1_2__Reg1_3__Reg1_4,
  Convert__CCRAsm1_1__Reg1_0,
  Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1,
  Convert__CPU64RegsAsm1_1__CPU64RegsAsm1_2,
  Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2__Imm1_3,
  Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2__Imm1_3__Tie0,
  Convert__CPURegsAsm1_1__CPURegsAsm1_2,
  Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__imm_0,
  Convert__CPU64RegsAsm1_1__imm_0__CPU64RegsAsm1_0,
  Convert__CPU64RegsAsm1_1__Imm1_2__CPU64RegsAsm1_0,
  Convert__Reg1_1__Reg1_0,
  Convert__Reg1_2__Reg1_3__Reg1_4__Tie0,
  Convert__CPU64RegsAsm1_0__CPURegsAsm1_2__CPU64RegsAsm1_1,
  Convert__CPURegsAsm1_0__CPURegsAsm1_1__Imm1_2__Imm1_3,
  Convert__Reg1_1__Reg1_2__Imm1_3,
  Convert__CPURegsAsm1_0__CPURegsAsm1_1__Imm1_2__Imm1_3__Tie0,
  Convert__Reg1_0,
  Convert__regRA_64__Reg1_0,
  Convert__regRA__Reg1_0,
  Convert_NoOperands,
  Convert__CPURegsAsm1_0__Mem2_1,
  Convert__Reg1_0__Mem2_1,
  Convert__Reg1_0__Reg1_3__Reg1_1,
  Convert__Reg1_0__Mem2_1__Tie0,
  Convert__CPU64RegsAsm1_0__Mem2_1,
  Convert__Reg1_0__Reg1_3__Imm1_1,
  Convert__Reg1_0__Reg1_1__Reg1_2__Tie0,
  Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4,
  Convert__CPURegsAsm1_0__CPURegsAsm1_1__imm_0,
  Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__regZERO_64,
  Convert__CPURegsAsm1_0__CPURegsAsm1_1__regZERO,
  Convert__Reg1_0__Reg1_1__Tie0,
  Convert__Reg1_1__Reg1_2__Tie0,
  Convert__Reg1_1__Reg1_2__Reg1_3__Tie0,
  Convert__CPURegsAsm1_1__imm_0__CPURegsAsm1_0,
  Convert__CPURegsAsm1_1__Imm1_2__CPURegsAsm1_0,
  Convert__Reg1_1__Reg1_0__Tie0,
  Convert__CPURegsAsm1_0__regZERO__CPURegsAsm1_1,
  Convert__regZERO__regZERO__imm_0,
  Convert__Reg1_2__Reg1_3__Imm1_4__Tie0,
  Convert__Reg1_0__HW64RegsAsm1_1,
  Convert__Reg1_0__HWRegsAsm1_1,
  Convert__Reg1_1__Imm1_2,
  Convert__CPURegsAsm1_0__CPURegsAsm1_2__CPURegsAsm1_1,
  Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3,
  Convert__CPURegsAsm1_0__Tie0__Mem2_1,
  Convert__CPU64RegsAsm1_0__Tie0__Mem2_1,
  Convert__Reg1_0__Imm1_1__Tie0,
  Convert__CPURegsAsm1_0__Reg1_1__Reg1_2,
  Convert__CPURegsAsm1_0__Reg1_1__Imm1_2,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][11] = {
  // Convert__Reg1_1__Reg1_2
  { CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__CPURegsAsm1_0__CPURegsAsm1_1__CPURegsAsm1_2
  { CVT_95_addCPURegsAsmOperands, 1, CVT_95_addCPURegsAsmOperands, 2, CVT_95_addCPURegsAsmOperands, 3, CVT_Done },
  // Convert__CPURegsAsm1_0__CPURegsAsm1_1__Imm1_2
  { CVT_95_addCPURegsAsmOperands, 1, CVT_95_addCPURegsAsmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_1__Reg1_2__Reg1_3
  { CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_Done },
  // Convert__Reg1_0__Imm1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Imm1_1
  { CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Imm1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Imm1_2
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Tie0__Imm1_1
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_1
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__CPU64RegsAsm1_2
  { CVT_95_addCPU64RegsAsmOperands, 1, CVT_95_addCPU64RegsAsmOperands, 2, CVT_95_addCPU64RegsAsmOperands, 3, CVT_Done },
  // Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2
  { CVT_95_addCPU64RegsAsmOperands, 1, CVT_95_addCPU64RegsAsmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Imm1_2__Tie0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__regRA__Imm1_0
  { CVT_regRA, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__CPURegsAsm1_0__Imm1_1
  { CVT_95_addCPURegsAsmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_3__Reg1_4__Imm1_1
  { CVT_95_Reg, 4, CVT_95_Reg, 5, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_2__Reg1_3
  { CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_Done },
  // Convert__Reg1_0__CCRAsm1_1
  { CVT_95_Reg, 1, CVT_95_addCCRAsmOperands, 2, CVT_Done },
  // Convert__CPURegsAsm1_0__CPURegsAsm1_1
  { CVT_95_addCPURegsAsmOperands, 1, CVT_95_addCPURegsAsmOperands, 2, CVT_Done },
  // Convert__Reg1_2__Reg1_3__Reg1_4
  { CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_95_Reg, 5, CVT_Done },
  // Convert__CCRAsm1_1__Reg1_0
  { CVT_95_addCCRAsmOperands, 2, CVT_95_Reg, 1, CVT_Done },
  // Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1
  { CVT_95_addCPU64RegsAsmOperands, 1, CVT_95_addCPU64RegsAsmOperands, 2, CVT_Done },
  // Convert__CPU64RegsAsm1_1__CPU64RegsAsm1_2
  { CVT_95_addCPU64RegsAsmOperands, 2, CVT_95_addCPU64RegsAsmOperands, 3, CVT_Done },
  // Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2__Imm1_3
  { CVT_95_addCPU64RegsAsmOperands, 1, CVT_95_addCPU64RegsAsmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2__Imm1_3__Tie0
  { CVT_95_addCPU64RegsAsmOperands, 1, CVT_95_addCPU64RegsAsmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Tied, 0, CVT_Done },
  // Convert__CPURegsAsm1_1__CPURegsAsm1_2
  { CVT_95_addCPURegsAsmOperands, 2, CVT_95_addCPURegsAsmOperands, 3, CVT_Done },
  // Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__imm_0
  { CVT_95_addCPU64RegsAsmOperands, 1, CVT_95_addCPU64RegsAsmOperands, 2, CVT_imm_0, 0, CVT_Done },
  // Convert__CPU64RegsAsm1_1__imm_0__CPU64RegsAsm1_0
  { CVT_95_addCPU64RegsAsmOperands, 2, CVT_imm_0, 0, CVT_95_addCPU64RegsAsmOperands, 1, CVT_Done },
  // Convert__CPU64RegsAsm1_1__Imm1_2__CPU64RegsAsm1_0
  { CVT_95_addCPU64RegsAsmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addCPU64RegsAsmOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_0
  { CVT_95_Reg, 2, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__Reg1_4__Tie0
  { CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_95_Reg, 5, CVT_Tied, 0, CVT_Done },
  // Convert__CPU64RegsAsm1_0__CPURegsAsm1_2__CPU64RegsAsm1_1
  { CVT_95_addCPU64RegsAsmOperands, 1, CVT_95_addCPURegsAsmOperands, 3, CVT_95_addCPU64RegsAsmOperands, 2, CVT_Done },
  // Convert__CPURegsAsm1_0__CPURegsAsm1_1__Imm1_2__Imm1_3
  { CVT_95_addCPURegsAsmOperands, 1, CVT_95_addCPURegsAsmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_1__Reg1_2__Imm1_3
  { CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__CPURegsAsm1_0__CPURegsAsm1_1__Imm1_2__Imm1_3__Tie0
  { CVT_95_addCPURegsAsmOperands, 1, CVT_95_addCPURegsAsmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_0
  { CVT_95_Reg, 1, CVT_Done },
  // Convert__regRA_64__Reg1_0
  { CVT_regRA_64, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__regRA__Reg1_0
  { CVT_regRA, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__CPURegsAsm1_0__Mem2_1
  { CVT_95_addCPURegsAsmOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__Reg1_0__Mem2_1
  { CVT_95_Reg, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_3__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Mem2_1__Tie0
  { CVT_95_Reg, 1, CVT_95_addMemOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__CPU64RegsAsm1_0__Mem2_1
  { CVT_95_addCPU64RegsAsmOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_3__Imm1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__Tie0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4
  { CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_95_Reg, 5, CVT_Done },
  // Convert__CPURegsAsm1_0__CPURegsAsm1_1__imm_0
  { CVT_95_addCPURegsAsmOperands, 1, CVT_95_addCPURegsAsmOperands, 2, CVT_imm_0, 0, CVT_Done },
  // Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__regZERO_64
  { CVT_95_addCPU64RegsAsmOperands, 1, CVT_95_addCPU64RegsAsmOperands, 2, CVT_regZERO_64, 0, CVT_Done },
  // Convert__CPURegsAsm1_0__CPURegsAsm1_1__regZERO
  { CVT_95_addCPURegsAsmOperands, 1, CVT_95_addCPURegsAsmOperands, 2, CVT_regZERO, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Tie0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_2__Tie0
  { CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_2__Reg1_3__Tie0
  { CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_Tied, 0, CVT_Done },
  // Convert__CPURegsAsm1_1__imm_0__CPURegsAsm1_0
  { CVT_95_addCPURegsAsmOperands, 2, CVT_imm_0, 0, CVT_95_addCPURegsAsmOperands, 1, CVT_Done },
  // Convert__CPURegsAsm1_1__Imm1_2__CPURegsAsm1_0
  { CVT_95_addCPURegsAsmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addCPURegsAsmOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_0__Tie0
  { CVT_95_Reg, 2, CVT_95_Reg, 1, CVT_Tied, 0, CVT_Done },
  // Convert__CPURegsAsm1_0__regZERO__CPURegsAsm1_1
  { CVT_95_addCPURegsAsmOperands, 1, CVT_regZERO, 0, CVT_95_addCPURegsAsmOperands, 2, CVT_Done },
  // Convert__regZERO__regZERO__imm_0
  { CVT_regZERO, 0, CVT_regZERO, 0, CVT_imm_0, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_3__Imm1_4__Tie0
  { CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_95_addImmOperands, 5, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_0__HW64RegsAsm1_1
  { CVT_95_Reg, 1, CVT_95_addHW64RegsAsmOperands, 2, CVT_Done },
  // Convert__Reg1_0__HWRegsAsm1_1
  { CVT_95_Reg, 1, CVT_95_addHWRegsAsmOperands, 2, CVT_Done },
  // Convert__Reg1_1__Imm1_2
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__CPURegsAsm1_0__CPURegsAsm1_2__CPURegsAsm1_1
  { CVT_95_addCPURegsAsmOperands, 1, CVT_95_addCPURegsAsmOperands, 3, CVT_95_addCPURegsAsmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_Reg, 4, CVT_Done },
  // Convert__CPURegsAsm1_0__Tie0__Mem2_1
  { CVT_95_addCPURegsAsmOperands, 1, CVT_Tied, 0, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__CPU64RegsAsm1_0__Tie0__Mem2_1
  { CVT_95_addCPU64RegsAsmOperands, 1, CVT_Tied, 0, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__Reg1_0__Imm1_1__Tie0
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__CPURegsAsm1_0__Reg1_1__Reg1_2
  { CVT_95_addCPURegsAsmOperands, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__CPURegsAsm1_0__Reg1_1__Imm1_2
  { CVT_95_addCPURegsAsmOperands, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
};

void MipsAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const SmallVectorImpl<MCParsedAsmOperand*> &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<MipsOperand*>(Operands[*(p + 1)])->addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(*(p + 1)));
      break;
    case CVT_95_Reg:
      static_cast<MipsOperand*>(Operands[*(p + 1)])->addRegOperands(Inst, 1);
      break;
    case CVT_95_addCPURegsAsmOperands:
      static_cast<MipsOperand*>(Operands[*(p + 1)])->addCPURegsAsmOperands(Inst, 1);
      break;
    case CVT_95_addImmOperands:
      static_cast<MipsOperand*>(Operands[*(p + 1)])->addImmOperands(Inst, 1);
      break;
    case CVT_95_addCPU64RegsAsmOperands:
      static_cast<MipsOperand*>(Operands[*(p + 1)])->addCPU64RegsAsmOperands(Inst, 1);
      break;
    case CVT_regRA:
      Inst.addOperand(MCOperand::CreateReg(Mips::RA));
      break;
    case CVT_95_addCCRAsmOperands:
      static_cast<MipsOperand*>(Operands[*(p + 1)])->addCCRAsmOperands(Inst, 1);
      break;
    case CVT_imm_0:
      Inst.addOperand(MCOperand::CreateImm(0));
      break;
    case CVT_regRA_64:
      Inst.addOperand(MCOperand::CreateReg(Mips::RA_64));
      break;
    case CVT_95_addMemOperands:
      static_cast<MipsOperand*>(Operands[*(p + 1)])->addMemOperands(Inst, 2);
      break;
    case CVT_regZERO_64:
      Inst.addOperand(MCOperand::CreateReg(Mips::ZERO_64));
      break;
    case CVT_regZERO:
      Inst.addOperand(MCOperand::CreateReg(Mips::ZERO));
      break;
    case CVT_95_addHW64RegsAsmOperands:
      static_cast<MipsOperand*>(Operands[*(p + 1)])->addHW64RegsAsmOperands(Inst, 1);
      break;
    case CVT_95_addHWRegsAsmOperands:
      static_cast<MipsOperand*>(Operands[*(p + 1)])->addHWRegsAsmOperands(Inst, 1);
      break;
    }
  }
}

void MipsAsmParser::
convertToMapAndConstraints(unsigned Kind,
                           const SmallVectorImpl<MCParsedAsmOperand*> &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  unsigned NumMCOperands = 0;
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      ++NumMCOperands;
      break;
    case CVT_Tied:
      ++NumMCOperands;
      break;
    case CVT_95_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      NumMCOperands += 1;
      break;
    case CVT_95_addCPURegsAsmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addCPU64RegsAsmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regRA:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addCCRAsmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_regRA_64:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addMemOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_regZERO_64:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_regZERO:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addHW64RegsAsmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addHWRegsAsmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  MCK__35_, // '#'
  MCK__40_, // '('
  MCK__41_, // ')'
  MCK__41__59_, // ');'
  MCK__DOT_, // '.'
  MCK__DOT_d, // '.d'
  MCK__DOT_eq, // '.eq'
  MCK__DOT_h, // '.h'
  MCK__DOT_l, // '.l'
  MCK__DOT_le, // '.le'
  MCK__DOT_lt, // '.lt'
  MCK__DOT_ph, // '.ph'
  MCK__DOT_phl, // '.phl'
  MCK__DOT_phr, // '.phr'
  MCK__DOT_qb, // '.qb'
  MCK__DOT_qbl, // '.qbl'
  MCK__DOT_qbla, // '.qbla'
  MCK__DOT_qbr, // '.qbr'
  MCK__DOT_qbra, // '.qbra'
  MCK__DOT_s, // '.s'
  MCK__DOT_w, // '.w'
  MCK_16, // '16'
  MCK_bit, // 'bit'
  MCK_inst, // 'inst'
  MCK_Reg1, // derived register class
  MCK_Reg7, // derived register class
  MCK_Reg8, // derived register class
  MCK_CPU64Regs, // register class 'CPU64Regs'
  MCK_ZERO, // register class 'ZERO'
  MCK_CPU16Regs, // register class 'CPU16Regs'
  MCK_CPUSPReg, // register class 'CPUSPReg,SP'
  MCK_CPURAReg, // register class 'CPURAReg,RA'
  MCK_CPURegs, // register class 'CPURegs,DSPRegs'
  MCK_FGR32, // register class 'FGR32'
  MCK_AFGR64, // register class 'AFGR64'
  MCK_FGR64, // register class 'FGR64'
  MCK_HIRegs, // register class 'HIRegs'
  MCK_HIRegsDSP, // register class 'HIRegsDSP'
  MCK_LORegs, // register class 'LORegs'
  MCK_LORegsDSP, // register class 'LORegsDSP'
  MCK_HIRegs64, // register class 'HIRegs64'
  MCK_LORegs64, // register class 'LORegs64'
  MCK_FCC0, // register class 'FCC0'
  MCK_CCR, // register class 'CCR'
  MCK_PC, // register class 'PC'
  MCK_HWRegs, // register class 'HWRegs'
  MCK_HWRegs64, // register class 'HWRegs64'
  MCK_ACRegs, // register class 'ACRegs'
  MCK_ACRegsDSP, // register class 'ACRegsDSP'
  MCK_ACRegs128, // register class 'ACRegs128'
  MCK_DSPCC, // register class 'DSPCC'
  MCK_CCRAsm, // user defined class 'CCRAsmOperand'
  MCK_CPU64RegsAsm, // user defined class 'CPU64RegsAsmOperand'
  MCK_CPURegsAsm, // user defined class 'CPURegsAsmOperand'
  MCK_HW64RegsAsm, // user defined class 'HW64RegsAsmOperand'
  MCK_HWRegsAsm, // user defined class 'HWRegsAsmOperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_Mem, // user defined class 'MipsMemAsmOperand'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 4 strings to match.
    switch (Name[0]) {
    default: break;
    case '#':	 // 1 string to match.
      return MCK__35_;	 // "#"
    case '(':	 // 1 string to match.
      return MCK__40_;	 // "("
    case ')':	 // 1 string to match.
      return MCK__41_;	 // ")"
    case '.':	 // 1 string to match.
      return MCK__DOT_;	 // "."
    }
    break;
  case 2:	 // 7 strings to match.
    switch (Name[0]) {
    default: break;
    case ')':	 // 1 string to match.
      if (Name[1] != ';')
        break;
      return MCK__41__59_;	 // ");"
    case '.':	 // 5 strings to match.
      switch (Name[1]) {
      default: break;
      case 'd':	 // 1 string to match.
        return MCK__DOT_d;	 // ".d"
      case 'h':	 // 1 string to match.
        return MCK__DOT_h;	 // ".h"
      case 'l':	 // 1 string to match.
        return MCK__DOT_l;	 // ".l"
      case 's':	 // 1 string to match.
        return MCK__DOT_s;	 // ".s"
      case 'w':	 // 1 string to match.
        return MCK__DOT_w;	 // ".w"
      }
      break;
    case '1':	 // 1 string to match.
      if (Name[1] != '6')
        break;
      return MCK_16;	 // "16"
    }
    break;
  case 3:	 // 6 strings to match.
    switch (Name[0]) {
    default: break;
    case '.':	 // 5 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (Name[2] != 'q')
          break;
        return MCK__DOT_eq;	 // ".eq"
      case 'l':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'e':	 // 1 string to match.
          return MCK__DOT_le;	 // ".le"
        case 't':	 // 1 string to match.
          return MCK__DOT_lt;	 // ".lt"
        }
        break;
      case 'p':	 // 1 string to match.
        if (Name[2] != 'h')
          break;
        return MCK__DOT_ph;	 // ".ph"
      case 'q':	 // 1 string to match.
        if (Name[2] != 'b')
          break;
        return MCK__DOT_qb;	 // ".qb"
      }
      break;
    case 'b':	 // 1 string to match.
      if (memcmp(Name.data()+1, "it", 2))
        break;
      return MCK_bit;	 // "bit"
    }
    break;
  case 4:	 // 5 strings to match.
    switch (Name[0]) {
    default: break;
    case '.':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'p':	 // 2 strings to match.
        if (Name[2] != 'h')
          break;
        switch (Name[3]) {
        default: break;
        case 'l':	 // 1 string to match.
          return MCK__DOT_phl;	 // ".phl"
        case 'r':	 // 1 string to match.
          return MCK__DOT_phr;	 // ".phr"
        }
        break;
      case 'q':	 // 2 strings to match.
        if (Name[2] != 'b')
          break;
        switch (Name[3]) {
        default: break;
        case 'l':	 // 1 string to match.
          return MCK__DOT_qbl;	 // ".qbl"
        case 'r':	 // 1 string to match.
          return MCK__DOT_qbr;	 // ".qbr"
        }
        break;
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "nst", 3))
        break;
      return MCK_inst;	 // "inst"
    }
    break;
  case 5:	 // 2 strings to match.
    if (memcmp(Name.data()+0, ".qb", 3))
      break;
    switch (Name[3]) {
    default: break;
    case 'l':	 // 1 string to match.
      if (Name[4] != 'a')
        break;
      return MCK__DOT_qbla;	 // ".qbla"
    case 'r':	 // 1 string to match.
      if (Name[4] != 'a')
        break;
      return MCK__DOT_qbra;	 // ".qbra"
    }
    break;
  }
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_Reg1:
    return B == MCK_CPU64Regs;

  case MCK_Reg7:
    return B == MCK_CPU64Regs;

  case MCK_Reg8:
    return B == MCK_CPU64Regs;

  case MCK_ZERO:
    return B == MCK_CPURegs;

  case MCK_CPU16Regs:
    return B == MCK_CPURegs;

  case MCK_CPUSPReg:
    return B == MCK_CPURegs;

  case MCK_CPURAReg:
    return B == MCK_CPURegs;

  case MCK_HIRegs:
    return B == MCK_HIRegsDSP;

  case MCK_LORegs:
    return B == MCK_LORegsDSP;

  case MCK_FCC0:
    return B == MCK_CCR;

  case MCK_ACRegs:
    return B == MCK_ACRegsDSP;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand *GOp, MatchClassKind Kind) {
  MipsOperand &Operand = *(MipsOperand*)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  // 'CCRAsm' class
  if (Kind == MCK_CCRAsm) {
    if (Operand.isCCRAsm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'CPU64RegsAsm' class
  if (Kind == MCK_CPU64RegsAsm) {
    if (Operand.isCPU64RegsAsm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'CPURegsAsm' class
  if (Kind == MCK_CPURegsAsm) {
    if (Operand.isCPURegsAsm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'HW64RegsAsm' class
  if (Kind == MCK_HW64RegsAsm) {
    if (Operand.isHW64RegsAsm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'HWRegsAsm' class
  if (Kind == MCK_HWRegsAsm) {
    if (Operand.isHWRegsAsm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm' class
  if (Kind == MCK_Imm) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Mem' class
  if (Kind == MCK_Mem) {
    if (Operand.isMem())
      return MCTargetAsmParser::Match_Success;
  }

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case Mips::ZERO: OpKind = MCK_ZERO; break;
    case Mips::AT: OpKind = MCK_CPURegs; break;
    case Mips::V0: OpKind = MCK_CPU16Regs; break;
    case Mips::V1: OpKind = MCK_CPU16Regs; break;
    case Mips::A0: OpKind = MCK_CPU16Regs; break;
    case Mips::A1: OpKind = MCK_CPU16Regs; break;
    case Mips::A2: OpKind = MCK_CPU16Regs; break;
    case Mips::A3: OpKind = MCK_CPU16Regs; break;
    case Mips::T0: OpKind = MCK_CPURegs; break;
    case Mips::T1: OpKind = MCK_CPURegs; break;
    case Mips::T2: OpKind = MCK_CPURegs; break;
    case Mips::T3: OpKind = MCK_CPURegs; break;
    case Mips::T4: OpKind = MCK_CPURegs; break;
    case Mips::T5: OpKind = MCK_CPURegs; break;
    case Mips::T6: OpKind = MCK_CPURegs; break;
    case Mips::T7: OpKind = MCK_CPURegs; break;
    case Mips::S0: OpKind = MCK_CPU16Regs; break;
    case Mips::S1: OpKind = MCK_CPU16Regs; break;
    case Mips::S2: OpKind = MCK_CPURegs; break;
    case Mips::S3: OpKind = MCK_CPURegs; break;
    case Mips::S4: OpKind = MCK_CPURegs; break;
    case Mips::S5: OpKind = MCK_CPURegs; break;
    case Mips::S6: OpKind = MCK_CPURegs; break;
    case Mips::S7: OpKind = MCK_CPURegs; break;
    case Mips::T8: OpKind = MCK_CPURegs; break;
    case Mips::T9: OpKind = MCK_CPURegs; break;
    case Mips::K0: OpKind = MCK_CPURegs; break;
    case Mips::K1: OpKind = MCK_CPURegs; break;
    case Mips::GP: OpKind = MCK_CPURegs; break;
    case Mips::SP: OpKind = MCK_CPUSPReg; break;
    case Mips::FP: OpKind = MCK_CPURegs; break;
    case Mips::RA: OpKind = MCK_CPURAReg; break;
    case Mips::ZERO_64: OpKind = MCK_CPU64Regs; break;
    case Mips::AT_64: OpKind = MCK_CPU64Regs; break;
    case Mips::V0_64: OpKind = MCK_Reg1; break;
    case Mips::V1_64: OpKind = MCK_Reg1; break;
    case Mips::A0_64: OpKind = MCK_Reg1; break;
    case Mips::A1_64: OpKind = MCK_Reg1; break;
    case Mips::A2_64: OpKind = MCK_Reg1; break;
    case Mips::A3_64: OpKind = MCK_Reg1; break;
    case Mips::T0_64: OpKind = MCK_CPU64Regs; break;
    case Mips::T1_64: OpKind = MCK_CPU64Regs; break;
    case Mips::T2_64: OpKind = MCK_CPU64Regs; break;
    case Mips::T3_64: OpKind = MCK_CPU64Regs; break;
    case Mips::T4_64: OpKind = MCK_CPU64Regs; break;
    case Mips::T5_64: OpKind = MCK_CPU64Regs; break;
    case Mips::T6_64: OpKind = MCK_CPU64Regs; break;
    case Mips::T7_64: OpKind = MCK_CPU64Regs; break;
    case Mips::S0_64: OpKind = MCK_Reg1; break;
    case Mips::S1_64: OpKind = MCK_Reg1; break;
    case Mips::S2_64: OpKind = MCK_CPU64Regs; break;
    case Mips::S3_64: OpKind = MCK_CPU64Regs; break;
    case Mips::S4_64: OpKind = MCK_CPU64Regs; break;
    case Mips::S5_64: OpKind = MCK_CPU64Regs; break;
    case Mips::S6_64: OpKind = MCK_CPU64Regs; break;
    case Mips::S7_64: OpKind = MCK_CPU64Regs; break;
    case Mips::T8_64: OpKind = MCK_CPU64Regs; break;
    case Mips::T9_64: OpKind = MCK_CPU64Regs; break;
    case Mips::K0_64: OpKind = MCK_CPU64Regs; break;
    case Mips::K1_64: OpKind = MCK_CPU64Regs; break;
    case Mips::GP_64: OpKind = MCK_CPU64Regs; break;
    case Mips::SP_64: OpKind = MCK_Reg7; break;
    case Mips::FP_64: OpKind = MCK_CPU64Regs; break;
    case Mips::RA_64: OpKind = MCK_Reg8; break;
    case Mips::F0: OpKind = MCK_FGR32; break;
    case Mips::F1: OpKind = MCK_FGR32; break;
    case Mips::F2: OpKind = MCK_FGR32; break;
    case Mips::F3: OpKind = MCK_FGR32; break;
    case Mips::F4: OpKind = MCK_FGR32; break;
    case Mips::F5: OpKind = MCK_FGR32; break;
    case Mips::F6: OpKind = MCK_FGR32; break;
    case Mips::F7: OpKind = MCK_FGR32; break;
    case Mips::F8: OpKind = MCK_FGR32; break;
    case Mips::F9: OpKind = MCK_FGR32; break;
    case Mips::F10: OpKind = MCK_FGR32; break;
    case Mips::F11: OpKind = MCK_FGR32; break;
    case Mips::F12: OpKind = MCK_FGR32; break;
    case Mips::F13: OpKind = MCK_FGR32; break;
    case Mips::F14: OpKind = MCK_FGR32; break;
    case Mips::F15: OpKind = MCK_FGR32; break;
    case Mips::F16: OpKind = MCK_FGR32; break;
    case Mips::F17: OpKind = MCK_FGR32; break;
    case Mips::F18: OpKind = MCK_FGR32; break;
    case Mips::F19: OpKind = MCK_FGR32; break;
    case Mips::F20: OpKind = MCK_FGR32; break;
    case Mips::F21: OpKind = MCK_FGR32; break;
    case Mips::F22: OpKind = MCK_FGR32; break;
    case Mips::F23: OpKind = MCK_FGR32; break;
    case Mips::F24: OpKind = MCK_FGR32; break;
    case Mips::F25: OpKind = MCK_FGR32; break;
    case Mips::F26: OpKind = MCK_FGR32; break;
    case Mips::F27: OpKind = MCK_FGR32; break;
    case Mips::F28: OpKind = MCK_FGR32; break;
    case Mips::F29: OpKind = MCK_FGR32; break;
    case Mips::F30: OpKind = MCK_FGR32; break;
    case Mips::F31: OpKind = MCK_FGR32; break;
    case Mips::D0: OpKind = MCK_AFGR64; break;
    case Mips::D1: OpKind = MCK_AFGR64; break;
    case Mips::D2: OpKind = MCK_AFGR64; break;
    case Mips::D3: OpKind = MCK_AFGR64; break;
    case Mips::D4: OpKind = MCK_AFGR64; break;
    case Mips::D5: OpKind = MCK_AFGR64; break;
    case Mips::D6: OpKind = MCK_AFGR64; break;
    case Mips::D7: OpKind = MCK_AFGR64; break;
    case Mips::D8: OpKind = MCK_AFGR64; break;
    case Mips::D9: OpKind = MCK_AFGR64; break;
    case Mips::D10: OpKind = MCK_AFGR64; break;
    case Mips::D11: OpKind = MCK_AFGR64; break;
    case Mips::D12: OpKind = MCK_AFGR64; break;
    case Mips::D13: OpKind = MCK_AFGR64; break;
    case Mips::D14: OpKind = MCK_AFGR64; break;
    case Mips::D15: OpKind = MCK_AFGR64; break;
    case Mips::D0_64: OpKind = MCK_FGR64; break;
    case Mips::D1_64: OpKind = MCK_FGR64; break;
    case Mips::D2_64: OpKind = MCK_FGR64; break;
    case Mips::D3_64: OpKind = MCK_FGR64; break;
    case Mips::D4_64: OpKind = MCK_FGR64; break;
    case Mips::D5_64: OpKind = MCK_FGR64; break;
    case Mips::D6_64: OpKind = MCK_FGR64; break;
    case Mips::D7_64: OpKind = MCK_FGR64; break;
    case Mips::D8_64: OpKind = MCK_FGR64; break;
    case Mips::D9_64: OpKind = MCK_FGR64; break;
    case Mips::D10_64: OpKind = MCK_FGR64; break;
    case Mips::D11_64: OpKind = MCK_FGR64; break;
    case Mips::D12_64: OpKind = MCK_FGR64; break;
    case Mips::D13_64: OpKind = MCK_FGR64; break;
    case Mips::D14_64: OpKind = MCK_FGR64; break;
    case Mips::D15_64: OpKind = MCK_FGR64; break;
    case Mips::D16_64: OpKind = MCK_FGR64; break;
    case Mips::D17_64: OpKind = MCK_FGR64; break;
    case Mips::D18_64: OpKind = MCK_FGR64; break;
    case Mips::D19_64: OpKind = MCK_FGR64; break;
    case Mips::D20_64: OpKind = MCK_FGR64; break;
    case Mips::D21_64: OpKind = MCK_FGR64; break;
    case Mips::D22_64: OpKind = MCK_FGR64; break;
    case Mips::D23_64: OpKind = MCK_FGR64; break;
    case Mips::D24_64: OpKind = MCK_FGR64; break;
    case Mips::D25_64: OpKind = MCK_FGR64; break;
    case Mips::D26_64: OpKind = MCK_FGR64; break;
    case Mips::D27_64: OpKind = MCK_FGR64; break;
    case Mips::D28_64: OpKind = MCK_FGR64; break;
    case Mips::D29_64: OpKind = MCK_FGR64; break;
    case Mips::D30_64: OpKind = MCK_FGR64; break;
    case Mips::D31_64: OpKind = MCK_FGR64; break;
    case Mips::HI: OpKind = MCK_HIRegs; break;
    case Mips::HI1: OpKind = MCK_HIRegsDSP; break;
    case Mips::HI2: OpKind = MCK_HIRegsDSP; break;
    case Mips::HI3: OpKind = MCK_HIRegsDSP; break;
    case Mips::LO: OpKind = MCK_LORegs; break;
    case Mips::LO1: OpKind = MCK_LORegsDSP; break;
    case Mips::LO2: OpKind = MCK_LORegsDSP; break;
    case Mips::LO3: OpKind = MCK_LORegsDSP; break;
    case Mips::HI64: OpKind = MCK_HIRegs64; break;
    case Mips::LO64: OpKind = MCK_LORegs64; break;
    case Mips::FCR31: OpKind = MCK_CCR; break;
    case Mips::FCC0: OpKind = MCK_FCC0; break;
    case Mips::PC: OpKind = MCK_PC; break;
    case Mips::HWR29: OpKind = MCK_HWRegs; break;
    case Mips::HWR29_64: OpKind = MCK_HWRegs64; break;
    case Mips::AC0: OpKind = MCK_ACRegs; break;
    case Mips::AC1: OpKind = MCK_ACRegsDSP; break;
    case Mips::AC2: OpKind = MCK_ACRegsDSP; break;
    case Mips::AC3: OpKind = MCK_ACRegsDSP; break;
    case Mips::AC0_64: OpKind = MCK_ACRegs128; break;
    case Mips::DSPCCond: OpKind = MCK_DSPCC; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

unsigned MipsAsmParser::
ComputeAvailableFeatures(uint64_t FB) const {
  unsigned Features = 0;
  if (((FB & Mips::FeatureSEInReg) != 0))
    Features |= Feature_HasSEInReg;
  if (((FB & Mips::FeatureBitCount) != 0))
    Features |= Feature_HasBitCount;
  if (((FB & Mips::FeatureSwap) != 0))
    Features |= Feature_HasSwap;
  if (((FB & Mips::FeatureCondMov) != 0))
    Features |= Feature_HasCondMov;
  if (((FB & Mips::FeatureFPIdx) != 0))
    Features |= Feature_HasFPIdx;
  if (((FB & Mips::FeatureMips32) != 0))
    Features |= Feature_HasMips32;
  if (((FB & Mips::FeatureMips32r2) != 0))
    Features |= Feature_HasMips32r2;
  if (((FB & Mips::FeatureMips64) != 0))
    Features |= Feature_HasMips64;
  if (((FB & Mips::FeatureMips64) == 0))
    Features |= Feature_NotMips64;
  if (((FB & Mips::FeatureMips64r2) != 0))
    Features |= Feature_HasMips64r2;
  if (((FB & Mips::FeatureN64) != 0))
    Features |= Feature_IsN64;
  if (((FB & Mips::FeatureN64) == 0))
    Features |= Feature_NotN64;
  if (((FB & Mips::FeatureMips16) != 0))
    Features |= Feature_InMips16Mode;
  if (((FB & Mips::FeatureMips32) != 0))
    Features |= Feature_RelocStatic;
  if (((FB & Mips::FeatureMips32) != 0))
    Features |= Feature_RelocPIC;
  if (((FB & Mips::FeatureMips32) != 0))
    Features |= Feature_NoNaNsFPMath;
  if (((FB & Mips::FeatureMips16) == 0))
    Features |= Feature_HasStdEnc;
  if (((FB & Mips::FeatureFP64Bit) != 0))
    Features |= Feature_IsFP64bit;
  if (((FB & Mips::FeatureFP64Bit) == 0))
    Features |= Feature_NotFP64bit;
  if (((FB & Mips::FeatureSingleFloat) != 0))
    Features |= Feature_IsSingleFloat;
  if (((FB & Mips::FeatureSingleFloat) == 0))
    Features |= Feature_IsNotSingleFloat;
  if (((FB & Mips::FeatureDSP) != 0))
    Features |= Feature_HasDSP;
  if (((FB & Mips::FeatureDSPR2) != 0))
    Features |= Feature_HasDSPR2;
  return Features;
}

static const char *const MnemonicTable =
    "\003abs\006absq_s\003add\004addi\005addiu\004addq\006addq_s\005addqh\007"
    "addqh_r\005addsc\004addu\006addu_s\005adduh\007adduh_r\005addwc\003and\004"
    "andi\006append\001b\003bal\006balign\004bc1f\004bc1t\003beq\004beqz\004"
    "bgez\006bgezal\004bgtz\006bitrev\004blez\004bltz\006bltzal\003bne\004bn"
    "ez\010bposge32\005bteqz\005btnez\001c\004ceil\004cfc1\003clo\003clz\003"
    "cmp\006cmpgdu\005cmpgu\004cmpi\004cmpu\004ctc1\003cvt\004dadd\005daddi\006"
    "daddiu\005daddu\004dclo\004dclz\004ddiv\005ddivu\004dext\005dextm\005de"
    "xtu\004dins\005dinsm\005dinsu\003div\004divu\005dmfc0\005dmfc1\005dmfc2"
    "\005dmtc0\005dmtc1\005dmtc2\005dmult\006dmultu\003dpa\006dpaq_s\007dpaq"
    "_sa\007dpaqx_s\010dpaqx_sa\004dpau\004dpax\003dps\006dpsq_s\007dpsq_sa\007"
    "dpsqx_s\010dpsqx_sa\004dpsu\004dpsx\005drotr\006drotrv\004dsbh\004dshd\004"
    "dsll\006dsll32\005dsllv\004dsra\006dsra32\005dsrav\004dsrl\006dsrl32\005"
    "dsrlv\005dsubu\003ext\004extp\006extpdp\007extpdpv\005extpv\004extr\006"
    "extr_r\007extr_rs\006extr_s\005extrv\007extrv_r\010extrv_rs\007extrv_s\005"
    "floor\003ins\004insv\001j\003jal\004jalr\005jalrc\002jr\003jrc\002la\002"
    "lb\003lbu\004lbux\002ld\004ldc1\003ldl\003ldr\005ldxc1\002lh\003lhu\003"
    "lhx\002li\002ll\003lld\nload_ac128\tload_ac64\013load_ac_dsp\016load_cc"
    "ond_dsp\003lui\005luxc1\002lw\004lwc1\003lwl\003lwr\003lwu\003lwx\005lw"
    "xc1\004madd\005maddu\005maq_s\006maq_sa\004mfc0\004mfc1\004mfc2\004mfhi"
    "\004mflo\006modsub\003mov\004move\004movf\004movn\004movt\004movz\004ms"
    "ub\005msubu\004mtc0\004mtc1\004mtc2\004mthi\006mthlip\004mtlo\003mul\005"
    "mul_s\007muleq_s\007muleu_s\007mulq_rs\006mulq_s\005mulsa\010mulsaq_s\004"
    "mult\005multu\003neg\004negu\005nmadd\005nmsub\003nop\003nor\003not\002"
    "or\003ori\006packrl\004pick\006preceq\007precequ\006preceu\005precr\tpr"
    "ecr_sra\013precr_sra_r\006precrq\tprecrq_rs\tprecrqu_s\007prepend\005ra"
    "ddu\005rddsp\005rdhwr\004repl\005replv\004rotr\005rotrv\005round\002sb\002"
    "sc\003scd\002sd\004sdc1\003sdl\003sdr\005sdxc1\003seb\003seh\002sh\005s"
    "hilo\006shilov\004shll\006shll_s\005shllv\007shllv_s\004shra\006shra_r\005"
    "shrav\007shrav_r\004shrl\005shrlv\003sll\004sllv\003slt\004slti\005slti"
    "u\004sltu\004sqrt\003sra\004srav\003srl\004srlv\013store_ac128\nstore_a"
    "c64\014store_ac_dsp\017store_ccond_dsp\003sub\004subq\006subq_s\005subq"
    "h\007subqh_r\004subu\006subu_s\005subuh\007subuh_r\005suxc1\002sw\004sw"
    "c1\003swl\003swr\005swxc1\004sync\005trunc\005wrdsp\004wsbh\003xor\004x"
    "ori";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint32_t RequiredFeatures;
    uint8_t Classes[6];
    uint8_t AsmVariantID;

    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcode {
    bool operator()(const MatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic() < RHS;
    }
    bool operator()(StringRef LHS, const MatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const MatchEntry &LHS, const MatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const MatchEntry MatchTable[541] = {
  { 0 /* abs */, Mips::FABS_D32, Convert__Reg1_1__Reg1_2, Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK__DOT_d, MCK_AFGR64, MCK_AFGR64 }, 0},
  { 0 /* abs */, Mips::FABS_D64, Convert__Reg1_1__Reg1_2, Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK__DOT_d, MCK_FGR64, MCK_FGR64 }, 0},
  { 0 /* abs */, Mips::FABS_S, Convert__Reg1_1__Reg1_2, Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK__DOT_s, MCK_FGR32, MCK_FGR32 }, 0},
  { 4 /* absq_s */, Mips::ABSQ_S_PH, Convert__Reg1_1__Reg1_2, Feature_HasDSP, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs }, 0},
  { 4 /* absq_s */, Mips::ABSQ_S_QB, Convert__Reg1_1__Reg1_2, Feature_HasDSPR2, { MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs }, 0},
  { 4 /* absq_s */, Mips::ABSQ_S_W, Convert__Reg1_1__Reg1_2, Feature_HasDSP, { MCK__DOT_w, MCK_CPURegs, MCK_CPURegs }, 0},
  { 11 /* add */, Mips::ADD, Convert__CPURegsAsm1_0__CPURegsAsm1_1__CPURegsAsm1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 11 /* add */, Mips::ADDi, Convert__CPURegsAsm1_0__CPURegsAsm1_1__Imm1_2, 0, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_Imm }, 0},
  { 11 /* add */, Mips::FADD_D32, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_NotFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK_AFGR64, MCK_AFGR64, MCK_AFGR64 }, 0},
  { 11 /* add */, Mips::FADD_D64, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK_FGR64, MCK_FGR64, MCK_FGR64 }, 0},
  { 11 /* add */, Mips::FADD_S, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasStdEnc, { MCK__DOT_s, MCK_FGR32, MCK_FGR32, MCK_FGR32 }, 0},
  { 15 /* addi */, Mips::ADDi, Convert__CPURegsAsm1_0__CPURegsAsm1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_Imm }, 0},
  { 20 /* addiu */, Mips::AddiuRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, 0},
  { 20 /* addiu */, Mips::AddiuSpImmX16, Convert__Imm1_1, Feature_InMips16Mode, { MCK_CPUSPReg, MCK_Imm }, 0},
  { 20 /* addiu */, Mips::AddiuRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm }, 0},
  { 20 /* addiu */, Mips::AddiuRxPcImmX16, Convert__Reg1_0__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_PC, MCK_Imm }, 0},
  { 20 /* addiu */, Mips::ADDiu, Convert__CPURegsAsm1_0__CPURegsAsm1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_Imm }, 0},
  { 20 /* addiu */, Mips::AddiuRxRxImm16, Convert__Reg1_0__Tie0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, 0},
  { 20 /* addiu */, Mips::AddiuSpImm16, Convert__Imm1_1, Feature_InMips16Mode, { MCK_CPUSPReg, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, 0},
  { 26 /* addq */, Mips::ADDQ_PH, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 31 /* addq_s */, Mips::ADDQ_S_PH, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 31 /* addq_s */, Mips::ADDQ_S_W, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_w, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 38 /* addqh */, Mips::ADDQH_PH, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSPR2, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 38 /* addqh */, Mips::ADDQH_W, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSPR2, { MCK__DOT_w, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 44 /* addqh_r */, Mips::ADDQH_R_PH, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSPR2, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 44 /* addqh_r */, Mips::ADDQH_R_W, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSPR2, { MCK__DOT_w, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 52 /* addsc */, Mips::ADDSC, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 58 /* addu */, Mips::AdduRxRyRz16, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_CPU16Regs }, 0},
  { 58 /* addu */, Mips::ADDu, Convert__CPURegsAsm1_0__CPURegsAsm1_1__CPURegsAsm1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 58 /* addu */, Mips::ADDiu, Convert__CPURegsAsm1_0__CPURegsAsm1_1__Imm1_2, 0, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_Imm }, 0},
  { 58 /* addu */, Mips::ADDU_PH, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSPR2, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 58 /* addu */, Mips::ADDU_QB, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 63 /* addu_s */, Mips::ADDU_S_PH, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSPR2, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 63 /* addu_s */, Mips::ADDU_S_QB, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 70 /* adduh */, Mips::ADDUH_QB, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSPR2, { MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 76 /* adduh_r */, Mips::ADDUH_R_QB, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSPR2, { MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 84 /* addwc */, Mips::ADDWC, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 90 /* and */, Mips::AndRxRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, 0},
  { 90 /* and */, Mips::AND64, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__CPU64RegsAsm1_2, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_CPU64RegsAsm }, 0},
  { 90 /* and */, Mips::DANDi, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2, Feature_HasMips64, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm }, 0},
  { 90 /* and */, Mips::AND, Convert__CPURegsAsm1_0__CPURegsAsm1_1__CPURegsAsm1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 90 /* and */, Mips::ANDi, Convert__CPURegsAsm1_0__CPURegsAsm1_1__Imm1_2, 0, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_Imm }, 0},
  { 94 /* andi */, Mips::DANDi, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm }, 0},
  { 94 /* andi */, Mips::ANDi, Convert__CPURegsAsm1_0__CPURegsAsm1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_Imm }, 0},
  { 99 /* append */, Mips::APPEND, Convert__Reg1_0__Reg1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_CPURegs, MCK_CPURegs, MCK_Imm }, 0},
  { 106 /* b */, Mips::B, Convert__Imm1_0, Feature_RelocPIC|Feature_HasStdEnc, { MCK_Imm }, 0},
  { 106 /* b */, Mips::BimmX16, Convert__Imm1_0, Feature_InMips16Mode, { MCK_Imm }, 0},
  { 108 /* bal */, Mips::BAL_BR, Convert__Imm1_0, Feature_HasStdEnc, { MCK_Imm }, 0},
  { 108 /* bal */, Mips::BGEZAL, Convert__regRA__Imm1_0, 0, { MCK_Imm }, 0},
  { 112 /* balign */, Mips::BALIGN, Convert__Reg1_0__Reg1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_CPURegs, MCK_CPURegs, MCK_Imm }, 0},
  { 119 /* bc1f */, Mips::BC1F, Convert__Imm1_0, Feature_HasStdEnc, { MCK_Imm }, 0},
  { 124 /* bc1t */, Mips::BC1T, Convert__Imm1_0, Feature_HasStdEnc, { MCK_Imm }, 0},
  { 129 /* beq */, Mips::BEQ64, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPU64Regs, MCK_CPU64Regs, MCK_Imm }, 0},
  { 129 /* beq */, Mips::BEQ, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPURegs, MCK_CPURegs, MCK_Imm }, 0},
  { 133 /* beqz */, Mips::BeqzRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, 0},
  { 133 /* beqz */, Mips::BeqzRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, 0},
  { 138 /* bgez */, Mips::BGEZ64, Convert__Reg1_0__Imm1_1, Feature_HasStdEnc, { MCK_CPU64Regs, MCK_Imm }, 0},
  { 138 /* bgez */, Mips::BGEZ, Convert__Reg1_0__Imm1_1, Feature_HasStdEnc, { MCK_CPURegs, MCK_Imm }, 0},
  { 143 /* bgezal */, Mips::BGEZAL, Convert__CPURegsAsm1_0__Imm1_1, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_Imm }, 0},
  { 150 /* bgtz */, Mips::BGTZ64, Convert__Reg1_0__Imm1_1, Feature_HasStdEnc, { MCK_CPU64Regs, MCK_Imm }, 0},
  { 150 /* bgtz */, Mips::BGTZ, Convert__Reg1_0__Imm1_1, Feature_HasStdEnc, { MCK_CPURegs, MCK_Imm }, 0},
  { 155 /* bitrev */, Mips::BITREV, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_CPURegs, MCK_CPURegs }, 0},
  { 162 /* blez */, Mips::BLEZ64, Convert__Reg1_0__Imm1_1, Feature_HasStdEnc, { MCK_CPU64Regs, MCK_Imm }, 0},
  { 162 /* blez */, Mips::BLEZ, Convert__Reg1_0__Imm1_1, Feature_HasStdEnc, { MCK_CPURegs, MCK_Imm }, 0},
  { 167 /* bltz */, Mips::BLTZ64, Convert__Reg1_0__Imm1_1, Feature_HasStdEnc, { MCK_CPU64Regs, MCK_Imm }, 0},
  { 167 /* bltz */, Mips::BLTZ, Convert__Reg1_0__Imm1_1, Feature_HasStdEnc, { MCK_CPURegs, MCK_Imm }, 0},
  { 172 /* bltzal */, Mips::BLTZAL, Convert__CPURegsAsm1_0__Imm1_1, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_Imm }, 0},
  { 179 /* bne */, Mips::BNE64, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPU64Regs, MCK_CPU64Regs, MCK_Imm }, 0},
  { 179 /* bne */, Mips::BNE, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPURegs, MCK_CPURegs, MCK_Imm }, 0},
  { 183 /* bnez */, Mips::BnezRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, 0},
  { 183 /* bnez */, Mips::BnezRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, 0},
  { 188 /* bposge32 */, Mips::BPOSGE32, Convert__Imm1_0, Feature_HasDSP, { MCK_Imm }, 0},
  { 197 /* bteqz */, Mips::BteqzX16, Convert__Imm1_0, Feature_InMips16Mode, { MCK_Imm }, 0},
  { 203 /* btnez */, Mips::BtnezX16, Convert__Imm1_0, Feature_InMips16Mode, { MCK_Imm }, 0},
  { 209 /* c */, Mips::FCMP_D32, Convert__Reg1_3__Reg1_4__Imm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK__DOT_, MCK_Imm, MCK__DOT_d, MCK_AFGR64, MCK_AFGR64 }, 0},
  { 209 /* c */, Mips::FCMP_D64, Convert__Reg1_3__Reg1_4__Imm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_, MCK_Imm, MCK__DOT_d, MCK_FGR64, MCK_FGR64 }, 0},
  { 209 /* c */, Mips::FCMP_S32, Convert__Reg1_3__Reg1_4__Imm1_1, Feature_HasStdEnc, { MCK__DOT_, MCK_Imm, MCK__DOT_s, MCK_FGR32, MCK_FGR32 }, 0},
  { 211 /* ceil */, Mips::CEIL_L_D64, Convert__Reg1_2__Reg1_3, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_l, MCK__DOT_d, MCK_FGR64, MCK_FGR64 }, 0},
  { 211 /* ceil */, Mips::CEIL_L_S, Convert__Reg1_2__Reg1_3, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_l, MCK__DOT_s, MCK_FGR64, MCK_FGR32 }, 0},
  { 211 /* ceil */, Mips::CEIL_W_D32, Convert__Reg1_2__Reg1_3, Feature_NotFP64bit|Feature_HasStdEnc, { MCK__DOT_w, MCK__DOT_d, MCK_FGR32, MCK_AFGR64 }, 0},
  { 211 /* ceil */, Mips::CEIL_W_D64, Convert__Reg1_2__Reg1_3, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_w, MCK__DOT_d, MCK_FGR32, MCK_FGR64 }, 0},
  { 211 /* ceil */, Mips::CEIL_W_S, Convert__Reg1_2__Reg1_3, Feature_HasStdEnc, { MCK__DOT_w, MCK__DOT_s, MCK_FGR32, MCK_FGR32 }, 0},
  { 216 /* cfc1 */, Mips::CFC1, Convert__Reg1_0__CCRAsm1_1, Feature_HasStdEnc, { MCK_CPURegs, MCK_CCRAsm }, 0},
  { 221 /* clo */, Mips::CLO, Convert__CPURegsAsm1_0__CPURegsAsm1_1, Feature_HasBitCount|Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 225 /* clz */, Mips::CLZ, Convert__CPURegsAsm1_0__CPURegsAsm1_1, Feature_HasBitCount|Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 229 /* cmp */, Mips::CmpRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, 0},
  { 229 /* cmp */, Mips::CMP_EQ_PH, Convert__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_eq, MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs }, 0},
  { 229 /* cmp */, Mips::CMP_LE_PH, Convert__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_le, MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs }, 0},
  { 229 /* cmp */, Mips::CMP_LT_PH, Convert__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_lt, MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs }, 0},
  { 233 /* cmpgdu */, Mips::CMPGDU_EQ_QB, Convert__Reg1_2__Reg1_3__Reg1_4, Feature_HasDSPR2, { MCK__DOT_eq, MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 233 /* cmpgdu */, Mips::CMPGDU_LE_QB, Convert__Reg1_2__Reg1_3__Reg1_4, Feature_HasDSPR2, { MCK__DOT_le, MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 233 /* cmpgdu */, Mips::CMPGDU_LT_QB, Convert__Reg1_2__Reg1_3__Reg1_4, Feature_HasDSPR2, { MCK__DOT_lt, MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 240 /* cmpgu */, Mips::CMPGU_EQ_QB, Convert__Reg1_2__Reg1_3__Reg1_4, Feature_HasDSP, { MCK__DOT_eq, MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 240 /* cmpgu */, Mips::CMPGU_LE_QB, Convert__Reg1_2__Reg1_3__Reg1_4, Feature_HasDSP, { MCK__DOT_le, MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 240 /* cmpgu */, Mips::CMPGU_LT_QB, Convert__Reg1_2__Reg1_3__Reg1_4, Feature_HasDSP, { MCK__DOT_lt, MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 246 /* cmpi */, Mips::CmpiRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, 0},
  { 246 /* cmpi */, Mips::CmpiRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, 0},
  { 251 /* cmpu */, Mips::CMPU_EQ_QB, Convert__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_eq, MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs }, 0},
  { 251 /* cmpu */, Mips::CMPU_LE_QB, Convert__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_le, MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs }, 0},
  { 251 /* cmpu */, Mips::CMPU_LT_QB, Convert__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_lt, MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs }, 0},
  { 256 /* ctc1 */, Mips::CTC1, Convert__CCRAsm1_1__Reg1_0, Feature_HasStdEnc, { MCK_CPURegs, MCK_CCRAsm }, 0},
  { 261 /* cvt */, Mips::CVT_D64_L, Convert__Reg1_2__Reg1_3, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK__DOT_l, MCK_FGR64, MCK_FGR64 }, 0},
  { 261 /* cvt */, Mips::CVT_D32_S, Convert__Reg1_2__Reg1_3, Feature_NotFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK__DOT_s, MCK_AFGR64, MCK_FGR32 }, 0},
  { 261 /* cvt */, Mips::CVT_D64_S, Convert__Reg1_2__Reg1_3, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK__DOT_s, MCK_FGR64, MCK_FGR32 }, 0},
  { 261 /* cvt */, Mips::CVT_D32_W, Convert__Reg1_2__Reg1_3, Feature_NotFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK__DOT_w, MCK_AFGR64, MCK_FGR32 }, 0},
  { 261 /* cvt */, Mips::CVT_D64_W, Convert__Reg1_2__Reg1_3, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK__DOT_w, MCK_FGR64, MCK_FGR32 }, 0},
  { 261 /* cvt */, Mips::CVT_L_D64, Convert__Reg1_2__Reg1_3, Feature_HasStdEnc, { MCK__DOT_l, MCK__DOT_d, MCK_FGR64, MCK_FGR64 }, 0},
  { 261 /* cvt */, Mips::CVT_L_S, Convert__Reg1_2__Reg1_3, Feature_HasStdEnc, { MCK__DOT_l, MCK__DOT_s, MCK_FGR64, MCK_FGR32 }, 0},
  { 261 /* cvt */, Mips::CVT_S_D32, Convert__Reg1_2__Reg1_3, Feature_NotFP64bit|Feature_HasStdEnc, { MCK__DOT_s, MCK__DOT_d, MCK_FGR32, MCK_AFGR64 }, 0},
  { 261 /* cvt */, Mips::CVT_S_D64, Convert__Reg1_2__Reg1_3, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_s, MCK__DOT_d, MCK_FGR32, MCK_FGR64 }, 0},
  { 261 /* cvt */, Mips::CVT_S_L, Convert__Reg1_2__Reg1_3, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_s, MCK__DOT_l, MCK_FGR32, MCK_FGR64 }, 0},
  { 261 /* cvt */, Mips::CVT_S_W, Convert__Reg1_2__Reg1_3, Feature_HasStdEnc, { MCK__DOT_s, MCK__DOT_w, MCK_FGR32, MCK_FGR32 }, 0},
  { 261 /* cvt */, Mips::CVT_W_D32, Convert__Reg1_2__Reg1_3, Feature_NotFP64bit|Feature_HasStdEnc, { MCK__DOT_w, MCK__DOT_d, MCK_FGR32, MCK_AFGR64 }, 0},
  { 261 /* cvt */, Mips::CVT_W_D64, Convert__Reg1_2__Reg1_3, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_w, MCK__DOT_d, MCK_FGR32, MCK_FGR64 }, 0},
  { 261 /* cvt */, Mips::CVT_W_S, Convert__Reg1_2__Reg1_3, Feature_HasStdEnc, { MCK__DOT_w, MCK__DOT_s, MCK_FGR32, MCK_FGR32 }, 0},
  { 265 /* dadd */, Mips::DADD, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__CPU64RegsAsm1_2, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_CPU64RegsAsm }, 0},
  { 265 /* dadd */, Mips::DADDi, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2, 0, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm }, 0},
  { 270 /* daddi */, Mips::DADDi, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm }, 0},
  { 276 /* daddiu */, Mips::DADDiu, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm }, 0},
  { 283 /* daddu */, Mips::DADDu, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__CPU64RegsAsm1_2, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_CPU64RegsAsm }, 0},
  { 283 /* daddu */, Mips::DADDiu, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2, 0, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm }, 0},
  { 289 /* dclo */, Mips::DCLO, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1, Feature_HasBitCount|Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm }, 0},
  { 294 /* dclz */, Mips::DCLZ, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1, Feature_HasBitCount|Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm }, 0},
  { 299 /* ddiv */, Mips::DSDIV, Convert__CPU64RegsAsm1_1__CPU64RegsAsm1_2, Feature_HasStdEnc, { MCK_ZERO, MCK_CPU64RegsAsm, MCK_CPU64RegsAsm }, 0},
  { 304 /* ddivu */, Mips::DUDIV, Convert__CPU64RegsAsm1_1__CPU64RegsAsm1_2, Feature_HasStdEnc, { MCK_ZERO, MCK_CPU64RegsAsm, MCK_CPU64RegsAsm }, 0},
  { 310 /* dext */, Mips::DEXT, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2__Imm1_3, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm, MCK_Imm }, 0},
  { 315 /* dextm */, Mips::DEXTM, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2__Imm1_3, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm, MCK_Imm }, 0},
  { 321 /* dextu */, Mips::DEXTU, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2__Imm1_3, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm, MCK_Imm }, 0},
  { 327 /* dins */, Mips::DINS, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2__Imm1_3__Tie0, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm, MCK_Imm }, 0},
  { 332 /* dinsm */, Mips::DINSM, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2__Imm1_3__Tie0, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm, MCK_Imm }, 0},
  { 338 /* dinsu */, Mips::DINSU, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2__Imm1_3__Tie0, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm, MCK_Imm }, 0},
  { 344 /* div */, Mips::DivRxRy16, Convert__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_ZERO, MCK_CPU16Regs, MCK_CPU16Regs }, 0},
  { 344 /* div */, Mips::SDIV, Convert__CPURegsAsm1_1__CPURegsAsm1_2, Feature_HasStdEnc, { MCK_ZERO, MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 344 /* div */, Mips::FDIV_D32, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_NotFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK_AFGR64, MCK_AFGR64, MCK_AFGR64 }, 0},
  { 344 /* div */, Mips::FDIV_D64, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK_FGR64, MCK_FGR64, MCK_FGR64 }, 0},
  { 344 /* div */, Mips::FDIV_S, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasStdEnc, { MCK__DOT_s, MCK_FGR32, MCK_FGR32, MCK_FGR32 }, 0},
  { 348 /* divu */, Mips::DivuRxRy16, Convert__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_ZERO, MCK_CPU16Regs, MCK_CPU16Regs }, 0},
  { 348 /* divu */, Mips::UDIV, Convert__CPURegsAsm1_1__CPURegsAsm1_2, Feature_HasStdEnc, { MCK_ZERO, MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 353 /* dmfc0 */, Mips::DMFC0_3OP64, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__imm_0, 0, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm }, 0},
  { 353 /* dmfc0 */, Mips::DMFC0_3OP64, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm }, 0},
  { 359 /* dmfc1 */, Mips::DMFC1, Convert__Reg1_0__Reg1_1, Feature_HasStdEnc, { MCK_CPU64Regs, MCK_FGR64 }, 0},
  { 365 /* dmfc2 */, Mips::DMFC2_3OP64, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__imm_0, 0, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm }, 0},
  { 365 /* dmfc2 */, Mips::DMFC2_3OP64, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm }, 0},
  { 371 /* dmtc0 */, Mips::DMTC0_3OP64, Convert__CPU64RegsAsm1_1__imm_0__CPU64RegsAsm1_0, 0, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm }, 0},
  { 371 /* dmtc0 */, Mips::DMTC0_3OP64, Convert__CPU64RegsAsm1_1__Imm1_2__CPU64RegsAsm1_0, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm }, 0},
  { 377 /* dmtc1 */, Mips::DMTC1, Convert__Reg1_1__Reg1_0, Feature_HasStdEnc, { MCK_CPU64Regs, MCK_FGR64 }, 0},
  { 383 /* dmtc2 */, Mips::DMTC2_3OP64, Convert__CPU64RegsAsm1_1__imm_0__CPU64RegsAsm1_0, 0, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm }, 0},
  { 383 /* dmtc2 */, Mips::DMTC2_3OP64, Convert__CPU64RegsAsm1_1__Imm1_2__CPU64RegsAsm1_0, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm }, 0},
  { 389 /* dmult */, Mips::DMULT, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm }, 0},
  { 395 /* dmultu */, Mips::DMULTu, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm }, 0},
  { 402 /* dpa */, Mips::DPA_W_PH, Convert__Reg1_2__Reg1_3__Reg1_4__Tie0, Feature_HasDSPR2, { MCK__DOT_w, MCK__DOT_ph, MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 406 /* dpaq_s */, Mips::DPAQ_S_W_PH, Convert__Reg1_2__Reg1_3__Reg1_4__Tie0, Feature_HasDSP, { MCK__DOT_w, MCK__DOT_ph, MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 413 /* dpaq_sa */, Mips::DPAQ_SA_L_W, Convert__Reg1_2__Reg1_3__Reg1_4__Tie0, Feature_HasDSP, { MCK__DOT_l, MCK__DOT_w, MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 421 /* dpaqx_s */, Mips::DPAQX_S_W_PH, Convert__Reg1_2__Reg1_3__Reg1_4__Tie0, Feature_HasDSPR2, { MCK__DOT_w, MCK__DOT_ph, MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 429 /* dpaqx_sa */, Mips::DPAQX_SA_W_PH, Convert__Reg1_2__Reg1_3__Reg1_4__Tie0, Feature_HasDSPR2, { MCK__DOT_w, MCK__DOT_ph, MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 438 /* dpau */, Mips::DPAU_H_QBL, Convert__Reg1_2__Reg1_3__Reg1_4__Tie0, Feature_HasDSP, { MCK__DOT_h, MCK__DOT_qbl, MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 438 /* dpau */, Mips::DPAU_H_QBR, Convert__Reg1_2__Reg1_3__Reg1_4__Tie0, Feature_HasDSP, { MCK__DOT_h, MCK__DOT_qbr, MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 443 /* dpax */, Mips::DPAX_W_PH, Convert__Reg1_2__Reg1_3__Reg1_4__Tie0, Feature_HasDSPR2, { MCK__DOT_w, MCK__DOT_ph, MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 448 /* dps */, Mips::DPS_W_PH, Convert__Reg1_2__Reg1_3__Reg1_4__Tie0, Feature_HasDSPR2, { MCK__DOT_w, MCK__DOT_ph, MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 452 /* dpsq_s */, Mips::DPSQ_S_W_PH, Convert__Reg1_2__Reg1_3__Reg1_4__Tie0, Feature_HasDSP, { MCK__DOT_w, MCK__DOT_ph, MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 459 /* dpsq_sa */, Mips::DPSQ_SA_L_W, Convert__Reg1_2__Reg1_3__Reg1_4__Tie0, Feature_HasDSP, { MCK__DOT_l, MCK__DOT_w, MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 467 /* dpsqx_s */, Mips::DPSQX_S_W_PH, Convert__Reg1_2__Reg1_3__Reg1_4__Tie0, Feature_HasDSPR2, { MCK__DOT_w, MCK__DOT_ph, MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 475 /* dpsqx_sa */, Mips::DPSQX_SA_W_PH, Convert__Reg1_2__Reg1_3__Reg1_4__Tie0, Feature_HasDSPR2, { MCK__DOT_w, MCK__DOT_ph, MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 484 /* dpsu */, Mips::DPSU_H_QBL, Convert__Reg1_2__Reg1_3__Reg1_4__Tie0, Feature_HasDSP, { MCK__DOT_h, MCK__DOT_qbl, MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 484 /* dpsu */, Mips::DPSU_H_QBR, Convert__Reg1_2__Reg1_3__Reg1_4__Tie0, Feature_HasDSP, { MCK__DOT_h, MCK__DOT_qbr, MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 489 /* dpsx */, Mips::DPSX_W_PH, Convert__Reg1_2__Reg1_3__Reg1_4__Tie0, Feature_HasDSPR2, { MCK__DOT_w, MCK__DOT_ph, MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 494 /* drotr */, Mips::DROTR, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2, Feature_HasMips64r2|Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm }, 0},
  { 500 /* drotrv */, Mips::DROTRV, Convert__CPU64RegsAsm1_0__CPURegsAsm1_2__CPU64RegsAsm1_1, Feature_HasMips64r2|Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_CPURegsAsm }, 0},
  { 507 /* dsbh */, Mips::DSBH, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1, Feature_HasSwap|Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm }, 0},
  { 512 /* dshd */, Mips::DSHD, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1, Feature_HasSwap|Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm }, 0},
  { 517 /* dsll */, Mips::DSLL, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm }, 0},
  { 522 /* dsll32 */, Mips::DSLL32, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm }, 0},
  { 529 /* dsllv */, Mips::DSLLV, Convert__CPU64RegsAsm1_0__CPURegsAsm1_2__CPU64RegsAsm1_1, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_CPURegsAsm }, 0},
  { 535 /* dsra */, Mips::DSRA, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm }, 0},
  { 540 /* dsra32 */, Mips::DSRA32, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm }, 0},
  { 547 /* dsrav */, Mips::DSRAV, Convert__CPU64RegsAsm1_0__CPURegsAsm1_2__CPU64RegsAsm1_1, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_CPURegsAsm }, 0},
  { 553 /* dsrl */, Mips::DSRL, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm }, 0},
  { 558 /* dsrl32 */, Mips::DSRL32, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm }, 0},
  { 565 /* dsrlv */, Mips::DSRLV, Convert__CPU64RegsAsm1_0__CPURegsAsm1_2__CPU64RegsAsm1_1, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_CPURegsAsm }, 0},
  { 571 /* dsubu */, Mips::DSUBu, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__CPU64RegsAsm1_2, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_CPU64RegsAsm }, 0},
  { 577 /* ext */, Mips::EXT, Convert__CPURegsAsm1_0__CPURegsAsm1_1__Imm1_2__Imm1_3, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_Imm, MCK_Imm }, 0},
  { 581 /* extp */, Mips::EXTP, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_HasDSP, { MCK_CPURegs, MCK_ACRegsDSP, MCK_Imm }, 0},
  { 586 /* extpdp */, Mips::EXTPDP, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_HasDSP, { MCK_CPURegs, MCK_ACRegsDSP, MCK_Imm }, 0},
  { 593 /* extpdpv */, Mips::EXTPDPV, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_CPURegs, MCK_ACRegsDSP, MCK_CPURegs }, 0},
  { 601 /* extpv */, Mips::EXTPV, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_CPURegs, MCK_ACRegsDSP, MCK_CPURegs }, 0},
  { 607 /* extr */, Mips::EXTR_W, Convert__Reg1_1__Reg1_2__Imm1_3, Feature_HasDSP, { MCK__DOT_w, MCK_CPURegs, MCK_ACRegsDSP, MCK_Imm }, 0},
  { 612 /* extr_r */, Mips::EXTR_R_W, Convert__Reg1_1__Reg1_2__Imm1_3, Feature_HasDSP, { MCK__DOT_w, MCK_CPURegs, MCK_ACRegsDSP, MCK_Imm }, 0},
  { 619 /* extr_rs */, Mips::EXTR_RS_W, Convert__Reg1_1__Reg1_2__Imm1_3, Feature_HasDSP, { MCK__DOT_w, MCK_CPURegs, MCK_ACRegsDSP, MCK_Imm }, 0},
  { 627 /* extr_s */, Mips::EXTR_S_H, Convert__Reg1_1__Reg1_2__Imm1_3, Feature_HasDSP, { MCK__DOT_h, MCK_CPURegs, MCK_ACRegsDSP, MCK_Imm }, 0},
  { 634 /* extrv */, Mips::EXTRV_W, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_w, MCK_CPURegs, MCK_ACRegsDSP, MCK_CPURegs }, 0},
  { 640 /* extrv_r */, Mips::EXTRV_R_W, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_w, MCK_CPURegs, MCK_ACRegsDSP, MCK_CPURegs }, 0},
  { 648 /* extrv_rs */, Mips::EXTRV_RS_W, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_w, MCK_CPURegs, MCK_ACRegsDSP, MCK_CPURegs }, 0},
  { 657 /* extrv_s */, Mips::EXTRV_S_H, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_h, MCK_CPURegs, MCK_ACRegsDSP, MCK_CPURegs }, 0},
  { 665 /* floor */, Mips::FLOOR_L_D64, Convert__Reg1_2__Reg1_3, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_l, MCK__DOT_d, MCK_FGR64, MCK_FGR64 }, 0},
  { 665 /* floor */, Mips::FLOOR_L_S, Convert__Reg1_2__Reg1_3, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_l, MCK__DOT_s, MCK_FGR64, MCK_FGR32 }, 0},
  { 665 /* floor */, Mips::FLOOR_W_D32, Convert__Reg1_2__Reg1_3, Feature_NotFP64bit|Feature_HasStdEnc, { MCK__DOT_w, MCK__DOT_d, MCK_FGR32, MCK_AFGR64 }, 0},
  { 665 /* floor */, Mips::FLOOR_W_D64, Convert__Reg1_2__Reg1_3, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_w, MCK__DOT_d, MCK_FGR32, MCK_FGR64 }, 0},
  { 665 /* floor */, Mips::FLOOR_W_S, Convert__Reg1_2__Reg1_3, Feature_HasStdEnc, { MCK__DOT_w, MCK__DOT_s, MCK_FGR32, MCK_FGR32 }, 0},
  { 671 /* ins */, Mips::INS, Convert__CPURegsAsm1_0__CPURegsAsm1_1__Imm1_2__Imm1_3__Tie0, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_Imm, MCK_Imm }, 0},
  { 675 /* insv */, Mips::INSV, Convert__Reg1_0__Tie0__Reg1_1, Feature_HasDSP, { MCK_CPURegs, MCK_CPURegs }, 0},
  { 680 /* j */, Mips::JR64, Convert__Reg1_0, Feature_HasMips64, { MCK_CPU64Regs }, 0},
  { 680 /* j */, Mips::JR, Convert__Reg1_0, Feature_NotMips64, { MCK_CPURegs }, 0},
  { 680 /* j */, Mips::J, Convert__Imm1_0, Feature_RelocStatic|Feature_HasStdEnc, { MCK_Imm }, 0},
  { 682 /* jal */, Mips::JALR64, Convert__regRA_64__Reg1_0, Feature_HasMips64, { MCK_CPU64Regs }, 0},
  { 682 /* jal */, Mips::JALR, Convert__regRA__Reg1_0, Feature_NotMips64, { MCK_CPURegs }, 0},
  { 682 /* jal */, Mips::JAL, Convert__Imm1_0, Feature_HasStdEnc, { MCK_Imm }, 0},
  { 682 /* jal */, Mips::JALR64, Convert__Reg1_0__Reg1_1, Feature_HasMips64, { MCK_CPU64Regs, MCK_CPU64Regs }, 0},
  { 682 /* jal */, Mips::JALR, Convert__Reg1_0__Reg1_1, Feature_NotMips64, { MCK_CPURegs, MCK_CPURegs }, 0},
  { 686 /* jalr */, Mips::JALR64, Convert__regRA_64__Reg1_0, Feature_HasMips64, { MCK_CPU64Regs }, 0},
  { 686 /* jalr */, Mips::JALR, Convert__regRA__Reg1_0, Feature_NotMips64, { MCK_CPURegs }, 0},
  { 686 /* jalr */, Mips::JALR64, Convert__Reg1_0__Reg1_1, Feature_HasStdEnc, { MCK_CPU64Regs, MCK_CPU64Regs }, 0},
  { 686 /* jalr */, Mips::JALR, Convert__Reg1_0__Reg1_1, Feature_HasStdEnc, { MCK_CPURegs, MCK_CPURegs }, 0},
  { 691 /* jalrc */, Mips::JumpLinkReg16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, 0},
  { 697 /* jr */, Mips::JR64, Convert__Reg1_0, Feature_HasStdEnc, { MCK_CPU64Regs }, 0},
  { 697 /* jr */, Mips::JrRa16, Convert_NoOperands, Feature_InMips16Mode, { MCK_CPURAReg }, 0},
  { 697 /* jr */, Mips::JR, Convert__Reg1_0, Feature_HasStdEnc, { MCK_CPURegs }, 0},
  { 700 /* jrc */, Mips::JrcRx16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, 0},
  { 700 /* jrc */, Mips::JrcRa16, Convert_NoOperands, Feature_InMips16Mode, { MCK_CPURAReg }, 0},
  { 704 /* la */, Mips::LoadAddr32Imm, Convert__CPURegsAsm1_0__Imm1_1, 0, { MCK_CPURegsAsm, MCK_Imm }, 0},
  { 704 /* la */, Mips::LoadAddr32Reg, Convert__CPURegsAsm1_0__Mem2_1, 0, { MCK_CPURegsAsm, MCK_Mem }, 0},
  { 707 /* lb */, Mips::LB64, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPU64Regs, MCK_Mem }, 0},
  { 707 /* lb */, Mips::LB, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPURegs, MCK_Mem }, 0},
  { 710 /* lbu */, Mips::LBu64, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPU64Regs, MCK_Mem }, 0},
  { 710 /* lbu */, Mips::LBu, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPURegs, MCK_Mem }, 0},
  { 714 /* lbux */, Mips::LBUX, Convert__Reg1_0__Reg1_3__Reg1_1, Feature_HasDSP, { MCK_CPURegs, MCK_CPURegs, MCK__40_, MCK_CPURegs, MCK__41_ }, 0},
  { 719 /* ld */, Mips::LD, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPU64Regs, MCK_Mem }, 0},
  { 722 /* ldc1 */, Mips::LDC1, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_NotMips64|Feature_HasStdEnc, { MCK_AFGR64, MCK_Mem }, 0},
  { 722 /* ldc1 */, Mips::LDC164, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasMips64|Feature_HasStdEnc, { MCK_FGR64, MCK_Mem }, 0},
  { 727 /* ldl */, Mips::LDL, Convert__Reg1_0__Mem2_1__Tie0, Feature_NotN64|Feature_HasStdEnc, { MCK_CPU64Regs, MCK_Mem }, 0},
  { 731 /* ldr */, Mips::LDR, Convert__Reg1_0__Mem2_1__Tie0, Feature_NotN64|Feature_HasStdEnc, { MCK_CPU64Regs, MCK_Mem }, 0},
  { 735 /* ldxc1 */, Mips::LDXC1, Convert__Reg1_0__Reg1_3__Reg1_1, Feature_HasMips32r2|Feature_NotMips64|Feature_HasStdEnc, { MCK_AFGR64, MCK_CPURegs, MCK__40_, MCK_CPURegs, MCK__41_ }, 0},
  { 735 /* ldxc1 */, Mips::LDXC164, Convert__Reg1_0__Reg1_3__Reg1_1, Feature_HasMips64|Feature_NotN64|Feature_HasStdEnc, { MCK_FGR64, MCK_CPURegs, MCK__40_, MCK_CPURegs, MCK__41_ }, 0},
  { 741 /* lh */, Mips::LH64, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPU64Regs, MCK_Mem }, 0},
  { 741 /* lh */, Mips::LH, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPURegs, MCK_Mem }, 0},
  { 744 /* lhu */, Mips::LHu64, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPU64Regs, MCK_Mem }, 0},
  { 744 /* lhu */, Mips::LHu, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPURegs, MCK_Mem }, 0},
  { 748 /* lhx */, Mips::LHX, Convert__Reg1_0__Reg1_3__Reg1_1, Feature_HasDSP, { MCK_CPURegs, MCK_CPURegs, MCK__40_, MCK_CPURegs, MCK__41_ }, 0},
  { 752 /* li */, Mips::LiRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, 0},
  { 752 /* li */, Mips::LoadImm32Reg, Convert__CPURegsAsm1_0__Imm1_1, 0, { MCK_CPURegsAsm, MCK_Imm }, 0},
  { 752 /* li */, Mips::LiRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, 0},
  { 755 /* ll */, Mips::LL, Convert__CPURegsAsm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_Mem }, 0},
  { 755 /* ll */, Mips::LL_P8, Convert__CPURegsAsm1_0__Mem2_1, Feature_IsN64|Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_Mem }, 0},
  { 758 /* lld */, Mips::LLD, Convert__CPU64RegsAsm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_Mem }, 0},
  { 762 /* load_ac128 */, Mips::LOAD_AC128, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_ACRegs128, MCK_Mem }, 0},
  { 773 /* load_ac64 */, Mips::LOAD_AC64, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_ACRegs, MCK_Mem }, 0},
  { 783 /* load_ac_dsp */, Mips::LOAD_AC_DSP, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_ACRegsDSP, MCK_Mem }, 0},
  { 795 /* load_ccond_dsp */, Mips::LOAD_CCOND_DSP, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_DSPCC, MCK_Mem }, 0},
  { 810 /* lui */, Mips::LUi64, Convert__Reg1_0__Imm1_1, Feature_HasStdEnc, { MCK_CPU64Regs, MCK_Imm }, 0},
  { 810 /* lui */, Mips::LUi, Convert__Reg1_0__Imm1_1, Feature_HasStdEnc, { MCK_CPURegs, MCK_Imm }, 0},
  { 814 /* luxc1 */, Mips::LUXC1, Convert__Reg1_0__Reg1_3__Reg1_1, Feature_NotMips64|Feature_HasStdEnc, { MCK_AFGR64, MCK_CPURegs, MCK__40_, MCK_CPURegs, MCK__41_ }, 0},
  { 814 /* luxc1 */, Mips::LUXC164, Convert__Reg1_0__Reg1_3__Reg1_1, Feature_HasMips64|Feature_HasStdEnc, { MCK_FGR64, MCK_CPURegs, MCK__40_, MCK_CPURegs, MCK__41_ }, 0},
  { 820 /* lw */, Mips::LW64, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPU64Regs, MCK_Mem }, 0},
  { 820 /* lw */, Mips::LW, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPURegs, MCK_Mem }, 0},
  { 820 /* lw */, Mips::LwRxSpImmX16, Convert__Reg1_0__Reg1_3__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__40_, MCK_CPUSPReg, MCK__41__59_ }, 0},
  { 823 /* lwc1 */, Mips::LWC1, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_FGR32, MCK_Mem }, 0},
  { 823 /* lwc1 */, Mips::LWC1_P8, Convert__Reg1_0__Mem2_1, Feature_IsN64|Feature_HasStdEnc, { MCK_FGR32, MCK_Mem }, 0},
  { 828 /* lwl */, Mips::LWL64, Convert__Reg1_0__Mem2_1__Tie0, Feature_NotN64|Feature_HasStdEnc, { MCK_CPU64Regs, MCK_Mem }, 0},
  { 828 /* lwl */, Mips::LWL, Convert__Reg1_0__Mem2_1__Tie0, Feature_NotN64|Feature_HasStdEnc, { MCK_CPURegs, MCK_Mem }, 0},
  { 832 /* lwr */, Mips::LWR64, Convert__Reg1_0__Mem2_1__Tie0, Feature_NotN64|Feature_HasStdEnc, { MCK_CPU64Regs, MCK_Mem }, 0},
  { 832 /* lwr */, Mips::LWR, Convert__Reg1_0__Mem2_1__Tie0, Feature_NotN64|Feature_HasStdEnc, { MCK_CPURegs, MCK_Mem }, 0},
  { 836 /* lwu */, Mips::LWu64, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPU64Regs, MCK_Mem }, 0},
  { 840 /* lwx */, Mips::LWX, Convert__Reg1_0__Reg1_3__Reg1_1, Feature_HasDSP, { MCK_CPURegs, MCK_CPURegs, MCK__40_, MCK_CPURegs, MCK__41_ }, 0},
  { 844 /* lwxc1 */, Mips::LWXC1, Convert__Reg1_0__Reg1_3__Reg1_1, Feature_HasFPIdx|Feature_HasStdEnc, { MCK_FGR32, MCK_CPURegs, MCK__40_, MCK_CPURegs, MCK__41_ }, 0},
  { 850 /* madd */, Mips::MADD, Convert__CPURegsAsm1_0__CPURegsAsm1_1, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 850 /* madd */, Mips::MADD_DSP, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSP, { MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 850 /* madd */, Mips::MADD_D32, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4, Feature_HasMips32r2|Feature_NotFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK_AFGR64, MCK_AFGR64, MCK_AFGR64, MCK_AFGR64 }, 0},
  { 850 /* madd */, Mips::MADD_S, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4, Feature_HasMips32r2|Feature_HasStdEnc, { MCK__DOT_s, MCK_FGR32, MCK_FGR32, MCK_FGR32, MCK_FGR32 }, 0},
  { 855 /* maddu */, Mips::MADDU, Convert__CPURegsAsm1_0__CPURegsAsm1_1, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 855 /* maddu */, Mips::MADDU_DSP, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSP, { MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 861 /* maq_s */, Mips::MAQ_S_W_PHL, Convert__Reg1_2__Reg1_3__Reg1_4__Tie0, Feature_HasDSP, { MCK__DOT_w, MCK__DOT_phl, MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 861 /* maq_s */, Mips::MAQ_S_W_PHR, Convert__Reg1_2__Reg1_3__Reg1_4__Tie0, Feature_HasDSP, { MCK__DOT_w, MCK__DOT_phr, MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 867 /* maq_sa */, Mips::MAQ_SA_W_PHL, Convert__Reg1_2__Reg1_3__Reg1_4__Tie0, Feature_HasDSP, { MCK__DOT_w, MCK__DOT_phl, MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 867 /* maq_sa */, Mips::MAQ_SA_W_PHR, Convert__Reg1_2__Reg1_3__Reg1_4__Tie0, Feature_HasDSP, { MCK__DOT_w, MCK__DOT_phr, MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 874 /* mfc0 */, Mips::MFC0_3OP, Convert__CPURegsAsm1_0__CPURegsAsm1_1__imm_0, 0, { MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 874 /* mfc0 */, Mips::MFC0_3OP, Convert__CPURegsAsm1_0__CPURegsAsm1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_Imm }, 0},
  { 879 /* mfc1 */, Mips::MFC1, Convert__Reg1_0__Reg1_1, Feature_HasStdEnc, { MCK_CPURegs, MCK_FGR32 }, 0},
  { 884 /* mfc2 */, Mips::MFC2_3OP, Convert__CPURegsAsm1_0__CPURegsAsm1_1__imm_0, 0, { MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 884 /* mfc2 */, Mips::MFC2_3OP, Convert__CPURegsAsm1_0__CPURegsAsm1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_Imm }, 0},
  { 889 /* mfhi */, Mips::MFHI64, Convert__Reg1_0, Feature_HasStdEnc, { MCK_CPU64Regs }, 0},
  { 889 /* mfhi */, Mips::Mfhi16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, 0},
  { 889 /* mfhi */, Mips::MFHI, Convert__Reg1_0, Feature_HasStdEnc, { MCK_CPURegs }, 0},
  { 889 /* mfhi */, Mips::MFHI_DSP, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_CPURegs, MCK_HIRegsDSP }, 0},
  { 894 /* mflo */, Mips::MFLO64, Convert__Reg1_0, Feature_HasStdEnc, { MCK_CPU64Regs }, 0},
  { 894 /* mflo */, Mips::Mflo16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, 0},
  { 894 /* mflo */, Mips::MFLO, Convert__Reg1_0, Feature_HasStdEnc, { MCK_CPURegs }, 0},
  { 894 /* mflo */, Mips::MFLO_DSP, Convert__Reg1_0__Reg1_1, Feature_HasDSP, { MCK_CPURegs, MCK_LORegsDSP }, 0},
  { 899 /* modsub */, Mips::MODSUB, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 906 /* mov */, Mips::FMOV_D32, Convert__Reg1_1__Reg1_2, Feature_NotFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK_AFGR64, MCK_AFGR64 }, 0},
  { 906 /* mov */, Mips::FMOV_D64, Convert__Reg1_1__Reg1_2, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK_FGR64, MCK_FGR64 }, 0},
  { 906 /* mov */, Mips::FMOV_S, Convert__Reg1_1__Reg1_2, Feature_HasStdEnc, { MCK__DOT_s, MCK_FGR32, MCK_FGR32 }, 0},
  { 910 /* move */, Mips::MoveR3216, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPURegs }, 0},
  { 910 /* move */, Mips::Move32R16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPURegs, MCK_CPU16Regs }, 0},
  { 910 /* move */, Mips::DADDu, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__regZERO_64, Feature_HasMips64, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm }, 0},
  { 910 /* move */, Mips::OR64, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__regZERO_64, Feature_HasMips64, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm }, 0},
  { 910 /* move */, Mips::ADDu, Convert__CPURegsAsm1_0__CPURegsAsm1_1__regZERO, Feature_NotMips64, { MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 910 /* move */, Mips::OR, Convert__CPURegsAsm1_0__CPURegsAsm1_1__regZERO, Feature_NotMips64, { MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 915 /* movf */, Mips::MOVF_I64, Convert__Reg1_0__Reg1_1__Tie0, Feature_HasMips64|Feature_HasStdEnc, { MCK_CPU64Regs, MCK_CPU64Regs, MCK_FCC0 }, 0},
  { 915 /* movf */, Mips::MOVF_I, Convert__Reg1_0__Reg1_1__Tie0, Feature_HasStdEnc, { MCK_CPURegs, MCK_CPURegs, MCK_FCC0 }, 0},
  { 915 /* movf */, Mips::MOVF_D32, Convert__Reg1_1__Reg1_2__Tie0, Feature_NotFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK_AFGR64, MCK_AFGR64, MCK_FCC0 }, 0},
  { 915 /* movf */, Mips::MOVF_D64, Convert__Reg1_1__Reg1_2__Tie0, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK_FGR64, MCK_FGR64, MCK_FCC0 }, 0},
  { 915 /* movf */, Mips::MOVF_S, Convert__Reg1_1__Reg1_2__Tie0, Feature_HasStdEnc, { MCK__DOT_s, MCK_FGR32, MCK_FGR32, MCK_FCC0 }, 0},
  { 920 /* movn */, Mips::MOVN_I_I64, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasStdEnc, { MCK_CPU64Regs, MCK_CPU64Regs, MCK_CPURegs }, 0},
  { 920 /* movn */, Mips::MOVN_I_I, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasStdEnc, { MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 920 /* movn */, Mips::MOVN_I_D32, Convert__Reg1_1__Reg1_2__Reg1_3__Tie0, Feature_NotFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK_AFGR64, MCK_AFGR64, MCK_CPURegs }, 0},
  { 920 /* movn */, Mips::MOVN_I_D64, Convert__Reg1_1__Reg1_2__Reg1_3__Tie0, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK_FGR64, MCK_FGR64, MCK_CPURegs }, 0},
  { 920 /* movn */, Mips::MOVN_I64_S, Convert__Reg1_1__Reg1_2__Reg1_3__Tie0, Feature_HasMips64|Feature_HasStdEnc, { MCK__DOT_s, MCK_FGR32, MCK_FGR32, MCK_CPU64Regs }, 0},
  { 920 /* movn */, Mips::MOVN_I_S, Convert__Reg1_1__Reg1_2__Reg1_3__Tie0, Feature_HasStdEnc, { MCK__DOT_s, MCK_FGR32, MCK_FGR32, MCK_CPURegs }, 0},
  { 925 /* movt */, Mips::MOVT_I64, Convert__Reg1_0__Reg1_1__Tie0, Feature_HasMips64|Feature_HasStdEnc, { MCK_CPU64Regs, MCK_CPU64Regs, MCK_FCC0 }, 0},
  { 925 /* movt */, Mips::MOVT_I, Convert__Reg1_0__Reg1_1__Tie0, Feature_HasStdEnc, { MCK_CPURegs, MCK_CPURegs, MCK_FCC0 }, 0},
  { 925 /* movt */, Mips::MOVT_D32, Convert__Reg1_1__Reg1_2__Tie0, Feature_NotFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK_AFGR64, MCK_AFGR64, MCK_FCC0 }, 0},
  { 925 /* movt */, Mips::MOVT_D64, Convert__Reg1_1__Reg1_2__Tie0, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK_FGR64, MCK_FGR64, MCK_FCC0 }, 0},
  { 925 /* movt */, Mips::MOVT_S, Convert__Reg1_1__Reg1_2__Tie0, Feature_HasStdEnc, { MCK__DOT_s, MCK_FGR32, MCK_FGR32, MCK_FCC0 }, 0},
  { 930 /* movz */, Mips::MOVZ_I_I64, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasStdEnc, { MCK_CPU64Regs, MCK_CPU64Regs, MCK_CPURegs }, 0},
  { 930 /* movz */, Mips::MOVZ_I_I, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasStdEnc, { MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 930 /* movz */, Mips::MOVZ_I_D32, Convert__Reg1_1__Reg1_2__Reg1_3__Tie0, Feature_NotFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK_AFGR64, MCK_AFGR64, MCK_CPURegs }, 0},
  { 930 /* movz */, Mips::MOVZ_I_D64, Convert__Reg1_1__Reg1_2__Reg1_3__Tie0, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK_FGR64, MCK_FGR64, MCK_CPURegs }, 0},
  { 930 /* movz */, Mips::MOVZ_I64_S, Convert__Reg1_1__Reg1_2__Reg1_3__Tie0, Feature_HasMips64|Feature_HasStdEnc, { MCK__DOT_s, MCK_FGR32, MCK_FGR32, MCK_CPU64Regs }, 0},
  { 930 /* movz */, Mips::MOVZ_I_S, Convert__Reg1_1__Reg1_2__Reg1_3__Tie0, Feature_HasStdEnc, { MCK__DOT_s, MCK_FGR32, MCK_FGR32, MCK_CPURegs }, 0},
  { 935 /* msub */, Mips::MSUB, Convert__CPURegsAsm1_0__CPURegsAsm1_1, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 935 /* msub */, Mips::MSUB_DSP, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSP, { MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 935 /* msub */, Mips::MSUB_D32, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4, Feature_HasMips32r2|Feature_NotFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK_AFGR64, MCK_AFGR64, MCK_AFGR64, MCK_AFGR64 }, 0},
  { 935 /* msub */, Mips::MSUB_S, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4, Feature_HasMips32r2|Feature_HasStdEnc, { MCK__DOT_s, MCK_FGR32, MCK_FGR32, MCK_FGR32, MCK_FGR32 }, 0},
  { 940 /* msubu */, Mips::MSUBU, Convert__CPURegsAsm1_0__CPURegsAsm1_1, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 940 /* msubu */, Mips::MSUBU_DSP, Convert__Reg1_0__Reg1_1__Reg1_2__Tie0, Feature_HasDSP, { MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 946 /* mtc0 */, Mips::MTC0_3OP, Convert__CPURegsAsm1_1__imm_0__CPURegsAsm1_0, 0, { MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 946 /* mtc0 */, Mips::MTC0_3OP, Convert__CPURegsAsm1_1__Imm1_2__CPURegsAsm1_0, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_Imm }, 0},
  { 951 /* mtc1 */, Mips::MTC1, Convert__Reg1_1__Reg1_0, Feature_HasStdEnc, { MCK_CPURegs, MCK_FGR32 }, 0},
  { 956 /* mtc2 */, Mips::MTC2_3OP, Convert__CPURegsAsm1_1__imm_0__CPURegsAsm1_0, 0, { MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 956 /* mtc2 */, Mips::MTC2_3OP, Convert__CPURegsAsm1_1__Imm1_2__CPURegsAsm1_0, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_Imm }, 0},
  { 961 /* mthi */, Mips::MTHI64, Convert__Reg1_0, Feature_HasStdEnc, { MCK_CPU64Regs }, 0},
  { 961 /* mthi */, Mips::MTHI, Convert__Reg1_0, Feature_HasStdEnc, { MCK_CPURegs }, 0},
  { 961 /* mthi */, Mips::MTHI_DSP, Convert__Reg1_1__Reg1_0, Feature_HasDSP, { MCK_CPURegs, MCK_HIRegsDSP }, 0},
  { 966 /* mthlip */, Mips::MTHLIP, Convert__Reg1_1__Reg1_0__Tie0, Feature_HasDSP, { MCK_CPURegs, MCK_ACRegsDSP }, 0},
  { 973 /* mtlo */, Mips::MTLO64, Convert__Reg1_0, Feature_HasStdEnc, { MCK_CPU64Regs }, 0},
  { 973 /* mtlo */, Mips::MTLO, Convert__Reg1_0, Feature_HasStdEnc, { MCK_CPURegs }, 0},
  { 973 /* mtlo */, Mips::MTLO_DSP, Convert__Reg1_1__Reg1_0, Feature_HasDSP, { MCK_CPURegs, MCK_LORegsDSP }, 0},
  { 978 /* mul */, Mips::MUL, Convert__CPURegsAsm1_0__CPURegsAsm1_1__CPURegsAsm1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 978 /* mul */, Mips::FMUL_D32, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_NotFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK_AFGR64, MCK_AFGR64, MCK_AFGR64 }, 0},
  { 978 /* mul */, Mips::FMUL_D64, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK_FGR64, MCK_FGR64, MCK_FGR64 }, 0},
  { 978 /* mul */, Mips::MUL_PH, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSPR2, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 978 /* mul */, Mips::FMUL_S, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasStdEnc, { MCK__DOT_s, MCK_FGR32, MCK_FGR32, MCK_FGR32 }, 0},
  { 982 /* mul_s */, Mips::MUL_S_PH, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSPR2, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 988 /* muleq_s */, Mips::MULEQ_S_W_PHL, Convert__Reg1_2__Reg1_3__Reg1_4, Feature_HasDSP, { MCK__DOT_w, MCK__DOT_phl, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 988 /* muleq_s */, Mips::MULEQ_S_W_PHR, Convert__Reg1_2__Reg1_3__Reg1_4, Feature_HasDSP, { MCK__DOT_w, MCK__DOT_phr, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 996 /* muleu_s */, Mips::MULEU_S_PH_QBL, Convert__Reg1_2__Reg1_3__Reg1_4, Feature_HasDSP, { MCK__DOT_ph, MCK__DOT_qbl, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 996 /* muleu_s */, Mips::MULEU_S_PH_QBR, Convert__Reg1_2__Reg1_3__Reg1_4, Feature_HasDSP, { MCK__DOT_ph, MCK__DOT_qbr, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1004 /* mulq_rs */, Mips::MULQ_RS_PH, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1004 /* mulq_rs */, Mips::MULQ_RS_W, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSPR2, { MCK__DOT_w, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1012 /* mulq_s */, Mips::MULQ_S_PH, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSPR2, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1012 /* mulq_s */, Mips::MULQ_S_W, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSPR2, { MCK__DOT_w, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1019 /* mulsa */, Mips::MULSA_W_PH, Convert__Reg1_2__Reg1_3__Reg1_4__Tie0, Feature_HasDSPR2, { MCK__DOT_w, MCK__DOT_ph, MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1025 /* mulsaq_s */, Mips::MULSAQ_S_W_PH, Convert__Reg1_2__Reg1_3__Reg1_4__Tie0, Feature_HasDSP, { MCK__DOT_w, MCK__DOT_ph, MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1034 /* mult */, Mips::MULT, Convert__CPURegsAsm1_0__CPURegsAsm1_1, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 1034 /* mult */, Mips::MULT_DSP, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1039 /* multu */, Mips::MULTu, Convert__CPURegsAsm1_0__CPURegsAsm1_1, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 1039 /* multu */, Mips::MULTU_DSP, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasDSP, { MCK_ACRegsDSP, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1045 /* neg */, Mips::NegRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, 0},
  { 1045 /* neg */, Mips::SUB, Convert__CPURegsAsm1_0__regZERO__CPURegsAsm1_1, 0, { MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 1045 /* neg */, Mips::FNEG_D32, Convert__Reg1_1__Reg1_2, Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK__DOT_d, MCK_AFGR64, MCK_AFGR64 }, 0},
  { 1045 /* neg */, Mips::FNEG_D64, Convert__Reg1_1__Reg1_2, Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK__DOT_d, MCK_FGR64, MCK_FGR64 }, 0},
  { 1045 /* neg */, Mips::FNEG_S, Convert__Reg1_1__Reg1_2, Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK__DOT_s, MCK_FGR32, MCK_FGR32 }, 0},
  { 1049 /* negu */, Mips::SUBu, Convert__CPURegsAsm1_0__regZERO__CPURegsAsm1_1, 0, { MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 1054 /* nmadd */, Mips::NMADD_D32, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4, Feature_HasMips32r2|Feature_NotFP64bit|Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK__DOT_d, MCK_AFGR64, MCK_AFGR64, MCK_AFGR64, MCK_AFGR64 }, 0},
  { 1054 /* nmadd */, Mips::NMADD_S, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4, Feature_HasMips32r2|Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK__DOT_s, MCK_FGR32, MCK_FGR32, MCK_FGR32, MCK_FGR32 }, 0},
  { 1060 /* nmsub */, Mips::NMSUB_D32, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4, Feature_HasMips32r2|Feature_NotFP64bit|Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK__DOT_d, MCK_AFGR64, MCK_AFGR64, MCK_AFGR64, MCK_AFGR64 }, 0},
  { 1060 /* nmsub */, Mips::NMSUB_S, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4, Feature_HasMips32r2|Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK__DOT_s, MCK_FGR32, MCK_FGR32, MCK_FGR32, MCK_FGR32 }, 0},
  { 1066 /* nop */, Mips::SLL, Convert__regZERO__regZERO__imm_0, 0, {  }, 0},
  { 1070 /* nor */, Mips::NOR64, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__CPU64RegsAsm1_2, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_CPU64RegsAsm }, 0},
  { 1070 /* nor */, Mips::NOR, Convert__CPURegsAsm1_0__CPURegsAsm1_1__CPURegsAsm1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 1074 /* not */, Mips::NotRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, 0},
  { 1074 /* not */, Mips::NOR64, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__regZERO_64, Feature_HasMips64, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm }, 0},
  { 1074 /* not */, Mips::NOR, Convert__CPURegsAsm1_0__CPURegsAsm1_1__regZERO, 0, { MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 1078 /* or */, Mips::OrRxRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, 0},
  { 1078 /* or */, Mips::OR64, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__CPU64RegsAsm1_2, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_CPU64RegsAsm }, 0},
  { 1078 /* or */, Mips::ORi64, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2, Feature_HasMips64, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm }, 0},
  { 1078 /* or */, Mips::OR, Convert__CPURegsAsm1_0__CPURegsAsm1_1__CPURegsAsm1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 1078 /* or */, Mips::ORi, Convert__CPURegsAsm1_0__CPURegsAsm1_1__Imm1_2, Feature_NotMips64, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_Imm }, 0},
  { 1081 /* ori */, Mips::ORi64, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm }, 0},
  { 1081 /* ori */, Mips::ORi, Convert__CPURegsAsm1_0__CPURegsAsm1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_Imm }, 0},
  { 1085 /* packrl */, Mips::PACKRL_PH, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1092 /* pick */, Mips::PICK_PH, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1092 /* pick */, Mips::PICK_QB, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1097 /* preceq */, Mips::PRECEQ_W_PHL, Convert__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_w, MCK__DOT_phl, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1097 /* preceq */, Mips::PRECEQ_W_PHR, Convert__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_w, MCK__DOT_phr, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1104 /* precequ */, Mips::PRECEQU_PH_QBL, Convert__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_ph, MCK__DOT_qbl, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1104 /* precequ */, Mips::PRECEQU_PH_QBLA, Convert__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_ph, MCK__DOT_qbla, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1104 /* precequ */, Mips::PRECEQU_PH_QBR, Convert__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_ph, MCK__DOT_qbr, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1104 /* precequ */, Mips::PRECEQU_PH_QBRA, Convert__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_ph, MCK__DOT_qbra, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1112 /* preceu */, Mips::PRECEU_PH_QBL, Convert__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_ph, MCK__DOT_qbl, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1112 /* preceu */, Mips::PRECEU_PH_QBLA, Convert__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_ph, MCK__DOT_qbla, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1112 /* preceu */, Mips::PRECEU_PH_QBR, Convert__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_ph, MCK__DOT_qbr, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1112 /* preceu */, Mips::PRECEU_PH_QBRA, Convert__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_ph, MCK__DOT_qbra, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1119 /* precr */, Mips::PRECR_QB_PH, Convert__Reg1_2__Reg1_3__Reg1_4, Feature_HasDSPR2, { MCK__DOT_qb, MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1125 /* precr_sra */, Mips::PRECR_SRA_PH_W, Convert__Reg1_2__Reg1_3__Imm1_4__Tie0, Feature_HasDSPR2, { MCK__DOT_ph, MCK__DOT_w, MCK_CPURegs, MCK_CPURegs, MCK_Imm }, 0},
  { 1135 /* precr_sra_r */, Mips::PRECR_SRA_R_PH_W, Convert__Reg1_2__Reg1_3__Imm1_4__Tie0, Feature_HasDSPR2, { MCK__DOT_ph, MCK__DOT_w, MCK_CPURegs, MCK_CPURegs, MCK_Imm }, 0},
  { 1147 /* precrq */, Mips::PRECRQ_PH_W, Convert__Reg1_2__Reg1_3__Reg1_4, Feature_HasDSP, { MCK__DOT_ph, MCK__DOT_w, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1147 /* precrq */, Mips::PRECRQ_QB_PH, Convert__Reg1_2__Reg1_3__Reg1_4, Feature_HasDSP, { MCK__DOT_qb, MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1154 /* precrq_rs */, Mips::PRECRQ_RS_PH_W, Convert__Reg1_2__Reg1_3__Reg1_4, Feature_HasDSP, { MCK__DOT_ph, MCK__DOT_w, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1164 /* precrqu_s */, Mips::PRECRQU_S_QB_PH, Convert__Reg1_2__Reg1_3__Reg1_4, Feature_HasDSP, { MCK__DOT_qb, MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1174 /* prepend */, Mips::PREPEND, Convert__Reg1_0__Reg1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_CPURegs, MCK_CPURegs, MCK_Imm }, 0},
  { 1182 /* raddu */, Mips::RADDU_W_QB, Convert__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_w, MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1188 /* rddsp */, Mips::RDDSP, Convert__Reg1_0__Imm1_1, Feature_HasDSP, { MCK_CPURegs, MCK_Imm }, 0},
  { 1194 /* rdhwr */, Mips::RDHWR64, Convert__Reg1_0__HW64RegsAsm1_1, Feature_HasStdEnc, { MCK_CPU64Regs, MCK_HW64RegsAsm }, 0},
  { 1194 /* rdhwr */, Mips::RDHWR, Convert__Reg1_0__HWRegsAsm1_1, Feature_HasStdEnc, { MCK_CPURegs, MCK_HWRegsAsm }, 0},
  { 1200 /* repl */, Mips::REPL_PH, Convert__Reg1_1__Imm1_2, Feature_HasDSP, { MCK__DOT_ph, MCK_CPURegs, MCK_Imm }, 0},
  { 1200 /* repl */, Mips::REPL_QB, Convert__Reg1_1__Imm1_2, Feature_HasDSP, { MCK__DOT_qb, MCK_CPURegs, MCK_Imm }, 0},
  { 1205 /* replv */, Mips::REPLV_PH, Convert__Reg1_1__Reg1_2, Feature_HasDSP, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1205 /* replv */, Mips::REPLV_QB, Convert__Reg1_1__Reg1_2, Feature_HasDSP, { MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1211 /* rotr */, Mips::ROTR, Convert__CPURegsAsm1_0__CPURegsAsm1_1__Imm1_2, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_Imm }, 0},
  { 1216 /* rotrv */, Mips::ROTRV, Convert__CPURegsAsm1_0__CPURegsAsm1_2__CPURegsAsm1_1, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 1222 /* round */, Mips::ROUND_L_D64, Convert__Reg1_2__Reg1_3, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_l, MCK__DOT_d, MCK_FGR64, MCK_FGR64 }, 0},
  { 1222 /* round */, Mips::ROUND_L_S, Convert__Reg1_2__Reg1_3, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_l, MCK__DOT_s, MCK_FGR64, MCK_FGR32 }, 0},
  { 1222 /* round */, Mips::ROUND_W_D32, Convert__Reg1_2__Reg1_3, Feature_NotFP64bit|Feature_HasStdEnc, { MCK__DOT_w, MCK__DOT_d, MCK_FGR32, MCK_AFGR64 }, 0},
  { 1222 /* round */, Mips::ROUND_W_D64, Convert__Reg1_2__Reg1_3, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_w, MCK__DOT_d, MCK_FGR32, MCK_FGR64 }, 0},
  { 1222 /* round */, Mips::ROUND_W_S, Convert__Reg1_2__Reg1_3, Feature_HasStdEnc, { MCK__DOT_w, MCK__DOT_s, MCK_FGR32, MCK_FGR32 }, 0},
  { 1228 /* sb */, Mips::SB64, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPU64Regs, MCK_Mem }, 0},
  { 1228 /* sb */, Mips::SB, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPURegs, MCK_Mem }, 0},
  { 1228 /* sb */, Mips::SbRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm, MCK_CPU16Regs }, 0},
  { 1231 /* sc */, Mips::SC, Convert__CPURegsAsm1_0__Tie0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_Mem }, 0},
  { 1231 /* sc */, Mips::SC_P8, Convert__CPURegsAsm1_0__Tie0__Mem2_1, Feature_IsN64|Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_Mem }, 0},
  { 1234 /* scd */, Mips::SCD, Convert__CPU64RegsAsm1_0__Tie0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_Mem }, 0},
  { 1238 /* sd */, Mips::SD, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPU64Regs, MCK_Mem }, 0},
  { 1241 /* sdc1 */, Mips::SDC1, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_NotMips64|Feature_HasStdEnc, { MCK_AFGR64, MCK_Mem }, 0},
  { 1241 /* sdc1 */, Mips::SDC164, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasMips64|Feature_HasStdEnc, { MCK_FGR64, MCK_Mem }, 0},
  { 1246 /* sdl */, Mips::SDL, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPU64Regs, MCK_Mem }, 0},
  { 1250 /* sdr */, Mips::SDR, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPU64Regs, MCK_Mem }, 0},
  { 1254 /* sdxc1 */, Mips::SDXC1, Convert__Reg1_0__Reg1_3__Reg1_1, Feature_HasMips32r2|Feature_NotMips64|Feature_HasStdEnc, { MCK_AFGR64, MCK_CPURegs, MCK__40_, MCK_CPURegs, MCK__41_ }, 0},
  { 1254 /* sdxc1 */, Mips::SDXC164, Convert__Reg1_0__Reg1_3__Reg1_1, Feature_HasMips64|Feature_NotN64|Feature_HasStdEnc, { MCK_FGR64, MCK_CPURegs, MCK__40_, MCK_CPURegs, MCK__41_ }, 0},
  { 1260 /* seb */, Mips::SEB64, Convert__Reg1_0__Reg1_1, Feature_HasSEInReg|Feature_HasStdEnc, { MCK_CPU64Regs, MCK_CPU64Regs }, 0},
  { 1260 /* seb */, Mips::SEB, Convert__Reg1_0__Reg1_1, Feature_HasSEInReg|Feature_HasStdEnc, { MCK_CPURegs, MCK_CPURegs }, 0},
  { 1264 /* seh */, Mips::SEH64, Convert__Reg1_0__Reg1_1, Feature_HasSEInReg|Feature_HasStdEnc, { MCK_CPU64Regs, MCK_CPU64Regs }, 0},
  { 1264 /* seh */, Mips::SEH, Convert__Reg1_0__Reg1_1, Feature_HasSEInReg|Feature_HasStdEnc, { MCK_CPURegs, MCK_CPURegs }, 0},
  { 1268 /* sh */, Mips::SH64, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPU64Regs, MCK_Mem }, 0},
  { 1268 /* sh */, Mips::SH, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPURegs, MCK_Mem }, 0},
  { 1268 /* sh */, Mips::ShRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm, MCK_CPU16Regs }, 0},
  { 1271 /* shilo */, Mips::SHILO, Convert__Reg1_0__Imm1_1__Tie0, Feature_HasDSP, { MCK_ACRegsDSP, MCK_Imm }, 0},
  { 1277 /* shilov */, Mips::SHILOV, Convert__Reg1_0__Reg1_1__Tie0, Feature_HasDSP, { MCK_ACRegsDSP, MCK_CPURegs }, 0},
  { 1284 /* shll */, Mips::SHLL_PH, Convert__Reg1_1__Reg1_2__Imm1_3, Feature_HasDSP, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_Imm }, 0},
  { 1284 /* shll */, Mips::SHLL_QB, Convert__Reg1_1__Reg1_2__Imm1_3, Feature_HasDSP, { MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs, MCK_Imm }, 0},
  { 1289 /* shll_s */, Mips::SHLL_S_PH, Convert__Reg1_1__Reg1_2__Imm1_3, Feature_HasDSP, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_Imm }, 0},
  { 1289 /* shll_s */, Mips::SHLL_S_W, Convert__Reg1_1__Reg1_2__Imm1_3, Feature_HasDSP, { MCK__DOT_w, MCK_CPURegs, MCK_CPURegs, MCK_Imm }, 0},
  { 1296 /* shllv */, Mips::SHLLV_PH, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1296 /* shllv */, Mips::SHLLV_QB, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1302 /* shllv_s */, Mips::SHLLV_S_PH, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1302 /* shllv_s */, Mips::SHLLV_S_W, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_w, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1310 /* shra */, Mips::SHRA_PH, Convert__Reg1_1__Reg1_2__Imm1_3, Feature_HasDSP, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_Imm }, 0},
  { 1310 /* shra */, Mips::SHRA_QB, Convert__Reg1_1__Reg1_2__Imm1_3, Feature_HasDSPR2, { MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs, MCK_Imm }, 0},
  { 1315 /* shra_r */, Mips::SHRA_R_PH, Convert__Reg1_1__Reg1_2__Imm1_3, Feature_HasDSP, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_Imm }, 0},
  { 1315 /* shra_r */, Mips::SHRA_R_QB, Convert__Reg1_1__Reg1_2__Imm1_3, Feature_HasDSPR2, { MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs, MCK_Imm }, 0},
  { 1315 /* shra_r */, Mips::SHRA_R_W, Convert__Reg1_1__Reg1_2__Imm1_3, Feature_HasDSP, { MCK__DOT_w, MCK_CPURegs, MCK_CPURegs, MCK_Imm }, 0},
  { 1322 /* shrav */, Mips::SHRAV_PH, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1322 /* shrav */, Mips::SHRAV_QB, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSPR2, { MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1328 /* shrav_r */, Mips::SHRAV_R_PH, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1328 /* shrav_r */, Mips::SHRAV_R_QB, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSPR2, { MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1328 /* shrav_r */, Mips::SHRAV_R_W, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_w, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1336 /* shrl */, Mips::SHRL_PH, Convert__Reg1_1__Reg1_2__Imm1_3, Feature_HasDSPR2, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_Imm }, 0},
  { 1336 /* shrl */, Mips::SHRL_QB, Convert__Reg1_1__Reg1_2__Imm1_3, Feature_HasDSP, { MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs, MCK_Imm }, 0},
  { 1341 /* shrlv */, Mips::SHRLV_PH, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSPR2, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1341 /* shrlv */, Mips::SHRLV_QB, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1347 /* sll */, Mips::SllX16, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm }, 0},
  { 1347 /* sll */, Mips::SLL, Convert__CPURegsAsm1_0__CPURegsAsm1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_Imm }, 0},
  { 1351 /* sllv */, Mips::SllvRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, 0},
  { 1351 /* sllv */, Mips::SLLV, Convert__CPURegsAsm1_0__CPURegsAsm1_2__CPURegsAsm1_1, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 1356 /* slt */, Mips::SltRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, 0},
  { 1356 /* slt */, Mips::SLT64, Convert__CPURegsAsm1_0__Reg1_1__Reg1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPU64Regs, MCK_CPU64Regs }, 0},
  { 1356 /* slt */, Mips::SLTi64, Convert__CPURegsAsm1_0__Reg1_1__Imm1_2, Feature_HasMips64, { MCK_CPURegsAsm, MCK_CPU64Regs, MCK_Imm }, 0},
  { 1356 /* slt */, Mips::SLT, Convert__CPURegsAsm1_0__Reg1_1__Reg1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1356 /* slt */, Mips::SLTi, Convert__CPURegsAsm1_0__Reg1_1__Imm1_2, 0, { MCK_CPURegsAsm, MCK_CPURegs, MCK_Imm }, 0},
  { 1360 /* slti */, Mips::SltiRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, 0},
  { 1360 /* slti */, Mips::SLTi64, Convert__CPURegsAsm1_0__Reg1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPU64Regs, MCK_Imm }, 0},
  { 1360 /* slti */, Mips::SLTi, Convert__CPURegsAsm1_0__Reg1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegs, MCK_Imm }, 0},
  { 1360 /* slti */, Mips::SltiRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, 0},
  { 1365 /* sltiu */, Mips::SltiuRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, 0},
  { 1365 /* sltiu */, Mips::SLTiu64, Convert__CPURegsAsm1_0__Reg1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPU64Regs, MCK_Imm }, 0},
  { 1365 /* sltiu */, Mips::SLTiu, Convert__CPURegsAsm1_0__Reg1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegs, MCK_Imm }, 0},
  { 1365 /* sltiu */, Mips::SltiuRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, 0},
  { 1371 /* sltu */, Mips::SltuRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, 0},
  { 1371 /* sltu */, Mips::SLTu64, Convert__CPURegsAsm1_0__Reg1_1__Reg1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPU64Regs, MCK_CPU64Regs }, 0},
  { 1371 /* sltu */, Mips::SLTu, Convert__CPURegsAsm1_0__Reg1_1__Reg1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1376 /* sqrt */, Mips::FSQRT_D32, Convert__Reg1_1__Reg1_2, Feature_NotFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK_AFGR64, MCK_AFGR64 }, 0},
  { 1376 /* sqrt */, Mips::FSQRT_D64, Convert__Reg1_1__Reg1_2, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK_FGR64, MCK_FGR64 }, 0},
  { 1376 /* sqrt */, Mips::FSQRT_S, Convert__Reg1_1__Reg1_2, Feature_HasStdEnc, { MCK__DOT_s, MCK_FGR32, MCK_FGR32 }, 0},
  { 1381 /* sra */, Mips::SraX16, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm }, 0},
  { 1381 /* sra */, Mips::SRA, Convert__CPURegsAsm1_0__CPURegsAsm1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_Imm }, 0},
  { 1385 /* srav */, Mips::SravRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, 0},
  { 1385 /* srav */, Mips::SRAV, Convert__CPURegsAsm1_0__CPURegsAsm1_2__CPURegsAsm1_1, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 1390 /* srl */, Mips::SrlX16, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm }, 0},
  { 1390 /* srl */, Mips::SRL, Convert__CPURegsAsm1_0__CPURegsAsm1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_Imm }, 0},
  { 1394 /* srlv */, Mips::SrlvRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, 0},
  { 1394 /* srlv */, Mips::SRLV, Convert__CPURegsAsm1_0__CPURegsAsm1_2__CPURegsAsm1_1, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 1399 /* store_ac128 */, Mips::STORE_AC128, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_ACRegs128, MCK_Mem }, 0},
  { 1411 /* store_ac64 */, Mips::STORE_AC64, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_ACRegs, MCK_Mem }, 0},
  { 1422 /* store_ac_dsp */, Mips::STORE_AC_DSP, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_ACRegsDSP, MCK_Mem }, 0},
  { 1435 /* store_ccond_dsp */, Mips::STORE_CCOND_DSP, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_DSPCC, MCK_Mem }, 0},
  { 1451 /* sub */, Mips::SUB, Convert__CPURegsAsm1_0__CPURegsAsm1_1__CPURegsAsm1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 1451 /* sub */, Mips::FSUB_D32, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_NotFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK_AFGR64, MCK_AFGR64, MCK_AFGR64 }, 0},
  { 1451 /* sub */, Mips::FSUB_D64, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_d, MCK_FGR64, MCK_FGR64, MCK_FGR64 }, 0},
  { 1451 /* sub */, Mips::FSUB_S, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasStdEnc, { MCK__DOT_s, MCK_FGR32, MCK_FGR32, MCK_FGR32 }, 0},
  { 1455 /* subq */, Mips::SUBQ_PH, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1460 /* subq_s */, Mips::SUBQ_S_PH, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1460 /* subq_s */, Mips::SUBQ_S_W, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_w, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1467 /* subqh */, Mips::SUBQH_PH, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSPR2, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1467 /* subqh */, Mips::SUBQH_W, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSPR2, { MCK__DOT_w, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1473 /* subqh_r */, Mips::SUBQH_R_PH, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSPR2, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1473 /* subqh_r */, Mips::SUBQH_R_W, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSPR2, { MCK__DOT_w, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1481 /* subu */, Mips::SubuRxRyRz16, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_CPU16Regs }, 0},
  { 1481 /* subu */, Mips::SUBu, Convert__CPURegsAsm1_0__CPURegsAsm1_1__CPURegsAsm1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 1481 /* subu */, Mips::SUBU_PH, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSPR2, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1481 /* subu */, Mips::SUBU_QB, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1486 /* subu_s */, Mips::SUBU_S_PH, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSPR2, { MCK__DOT_ph, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1486 /* subu_s */, Mips::SUBU_S_QB, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSP, { MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1493 /* subuh */, Mips::SUBUH_QB, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSPR2, { MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1499 /* subuh_r */, Mips::SUBUH_R_QB, Convert__Reg1_1__Reg1_2__Reg1_3, Feature_HasDSPR2, { MCK__DOT_qb, MCK_CPURegs, MCK_CPURegs, MCK_CPURegs }, 0},
  { 1507 /* suxc1 */, Mips::SUXC1, Convert__Reg1_0__Reg1_3__Reg1_1, Feature_NotMips64|Feature_HasStdEnc, { MCK_AFGR64, MCK_CPURegs, MCK__40_, MCK_CPURegs, MCK__41_ }, 0},
  { 1507 /* suxc1 */, Mips::SUXC164, Convert__Reg1_0__Reg1_3__Reg1_1, Feature_HasMips64|Feature_HasStdEnc, { MCK_FGR64, MCK_CPURegs, MCK__40_, MCK_CPURegs, MCK__41_ }, 0},
  { 1513 /* sw */, Mips::SW64, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPU64Regs, MCK_Mem }, 0},
  { 1513 /* sw */, Mips::SW, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPURegs, MCK_Mem }, 0},
  { 1513 /* sw */, Mips::SwRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm, MCK_CPU16Regs }, 0},
  { 1513 /* sw */, Mips::SwRxSpImmX16, Convert__Reg1_0__Reg1_3__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__40_, MCK_CPUSPReg, MCK__41__59_ }, 0},
  { 1516 /* swc1 */, Mips::SWC1, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_FGR32, MCK_Mem }, 0},
  { 1516 /* swc1 */, Mips::SWC1_P8, Convert__Reg1_0__Mem2_1, Feature_IsN64|Feature_HasStdEnc, { MCK_FGR32, MCK_Mem }, 0},
  { 1521 /* swl */, Mips::SWL64, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPU64Regs, MCK_Mem }, 0},
  { 1521 /* swl */, Mips::SWL, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPURegs, MCK_Mem }, 0},
  { 1525 /* swr */, Mips::SWR64, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPU64Regs, MCK_Mem }, 0},
  { 1525 /* swr */, Mips::SWR, Convert__Reg1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_CPURegs, MCK_Mem }, 0},
  { 1529 /* swxc1 */, Mips::SWXC1, Convert__Reg1_0__Reg1_3__Reg1_1, Feature_HasFPIdx|Feature_HasStdEnc, { MCK_FGR32, MCK_CPURegs, MCK__40_, MCK_CPURegs, MCK__41_ }, 0},
  { 1535 /* sync */, Mips::SYNC, Convert__Imm1_0, Feature_HasStdEnc, { MCK_Imm }, 0},
  { 1540 /* trunc */, Mips::TRUNC_L_D64, Convert__Reg1_2__Reg1_3, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_l, MCK__DOT_d, MCK_FGR64, MCK_FGR64 }, 0},
  { 1540 /* trunc */, Mips::TRUNC_L_S, Convert__Reg1_2__Reg1_3, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_l, MCK__DOT_s, MCK_FGR64, MCK_FGR32 }, 0},
  { 1540 /* trunc */, Mips::TRUNC_W_D32, Convert__Reg1_2__Reg1_3, Feature_NotFP64bit|Feature_HasStdEnc, { MCK__DOT_w, MCK__DOT_d, MCK_FGR32, MCK_AFGR64 }, 0},
  { 1540 /* trunc */, Mips::TRUNC_W_D64, Convert__Reg1_2__Reg1_3, Feature_IsFP64bit|Feature_HasStdEnc, { MCK__DOT_w, MCK__DOT_d, MCK_FGR32, MCK_FGR64 }, 0},
  { 1540 /* trunc */, Mips::TRUNC_W_S, Convert__Reg1_2__Reg1_3, Feature_HasStdEnc, { MCK__DOT_w, MCK__DOT_s, MCK_FGR32, MCK_FGR32 }, 0},
  { 1546 /* wrdsp */, Mips::WRDSP, Convert__Reg1_0__Imm1_1, Feature_HasDSP, { MCK_CPURegs, MCK_Imm }, 0},
  { 1552 /* wsbh */, Mips::WSBH, Convert__CPURegsAsm1_0__CPURegsAsm1_1, Feature_HasSwap|Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 1557 /* xor */, Mips::XorRxRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, 0},
  { 1557 /* xor */, Mips::XOR64, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__CPU64RegsAsm1_2, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_CPU64RegsAsm }, 0},
  { 1557 /* xor */, Mips::XORi64, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2, Feature_HasMips64, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm }, 0},
  { 1557 /* xor */, Mips::XOR, Convert__CPURegsAsm1_0__CPURegsAsm1_1__CPURegsAsm1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_CPURegsAsm }, 0},
  { 1557 /* xor */, Mips::XORi, Convert__CPURegsAsm1_0__CPURegsAsm1_1__Imm1_2, Feature_NotMips64, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_Imm }, 0},
  { 1561 /* xori */, Mips::XORi64, Convert__CPU64RegsAsm1_0__CPU64RegsAsm1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPU64RegsAsm, MCK_CPU64RegsAsm, MCK_Imm }, 0},
  { 1561 /* xori */, Mips::XORi, Convert__CPURegsAsm1_0__CPURegsAsm1_1__Imm1_2, Feature_HasStdEnc, { MCK_CPURegsAsm, MCK_CPURegsAsm, MCK_Imm }, 0},
};

bool MipsAsmParser::
mnemonicIsValid(StringRef Mnemonic) {
  // Search the table.
  std::pair<const MatchEntry*, const MatchEntry*> MnemonicRange =
    std::equal_range(MatchTable, MatchTable+541, Mnemonic, LessOpcode());
  return MnemonicRange.first != MnemonicRange.second;
}

unsigned MipsAsmParser::
MatchInstructionImpl(const SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                     MCInst &Inst,
unsigned &ErrorInfo, bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 7) {
    ErrorInfo = 7;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  unsigned AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((MipsOperand*)Operands[0])->getToken();

  // Some state to try to produce better error messages.
  bool HadMatchOtherThanFeatures = false;
  bool HadMatchOtherThanPredicate = false;
  unsigned RetCode = Match_InvalidOperand;
  unsigned MissingFeatures = ~0U;
  // Set ErrorInfo to the operand that mismatches if it is
  // wrong for all instances of the instruction.
  ErrorInfo = ~0U;
  // Search the table.
  std::pair<const MatchEntry*, const MatchEntry*> MnemonicRange =
    std::equal_range(MatchTable, MatchTable+541, Mnemonic, LessOpcode());

  // Return a more specific error code if no mnemonics match.
  if (MnemonicRange.first == MnemonicRange.second)
    return Match_MnemonicFail;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());
    if (VariantID != it->AsmVariantID) continue;
    bool OperandsValid = true;
    for (unsigned i = 0; i != 6; ++i) {
      if (i + 1 >= Operands.size()) {
        OperandsValid = (it->Classes[i] == InvalidMatchClass);
        if (!OperandsValid) ErrorInfo = i + 1;
        break;
      }
      unsigned Diag = validateOperandClass(Operands[i+1],
                                           (MatchClassKind)it->Classes[i]);
      if (Diag == Match_Success)
        continue;
      // If the generic handler indicates an invalid operand
      // failure, check for a special case.
      if (Diag == Match_InvalidOperand) {
        Diag = validateTargetOperandClass(Operands[i+1],
                                           (MatchClassKind)it->Classes[i]);
        if (Diag == Match_Success)
          continue;
      }
      // If this operand is broken for all of the instances of this
      // mnemonic, keep track of it so we can report loc info.
      // If we already had a match that only failed due to a
      // target predicate, that diagnostic is preferred.
      if (!HadMatchOtherThanPredicate &&
          (it == MnemonicRange.first || ErrorInfo <= i+1)) {
        ErrorInfo = i+1;
        // InvalidOperand is the default. Prefer specificity.
        if (Diag != Match_InvalidOperand)
          RetCode = Diag;
      }
      // Otherwise, just reject this instance of the mnemonic.
      OperandsValid = false;
      break;
    }

    if (!OperandsValid) continue;
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      HadMatchOtherThanFeatures = true;
      unsigned NewMissingFeatures = it->RequiredFeatures & ~AvailableFeatures;
      if (CountPopulation_32(NewMissingFeatures) <=
          CountPopulation_32(MissingFeatures))
        MissingFeatures = NewMissingFeatures;
      continue;
    }

    if (matchingInlineAsm) {
      Inst.setOpcode(it->Opcode);
      convertToMapAndConstraints(it->ConvertFn, Operands);
      return Match_Success;
    }

    // We have selected a definite instruction, convert the parsed
    // operands into the appropriate MCInst.
    convertToMCInst(it->ConvertFn, Inst, it->Opcode, Operands);

    // We have a potential match. Check the target predicate to
    // handle any context sensitive constraints.
    unsigned MatchResult;
    if ((MatchResult = checkTargetMatchPredicate(Inst)) != Match_Success) {
      Inst.clear();
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    return Match_Success;
  }

  // Okay, we had no match.  Try to return a useful error code.
  if (HadMatchOtherThanPredicate || !HadMatchOtherThanFeatures)
    return RetCode;

  // Missing feature matches return which features were missing
  ErrorInfo = MissingFeatures;
  return Match_MissingFeature;
}

namespace {
  struct OperandMatchEntry {
    uint32_t RequiredFeatures;
    uint16_t Mnemonic;
    uint8_t Class;
    uint8_t OperandMask;

    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcodeOperand {
    bool operator()(const OperandMatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic()  < RHS;
    }
    bool operator()(StringRef LHS, const OperandMatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const OperandMatchEntry &LHS, const OperandMatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const OperandMatchEntry OperandMatchTable[189] = {
  /* Operand List Mask, Mnemonic, Operand Class, Features */
  { Feature_HasStdEnc, 11 /* add */, MCK_CPURegsAsm, 7 /* 0, 1, 2 */ },
  { 0, 11 /* add */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 15 /* addi */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 20 /* addiu */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 58 /* addu */, MCK_CPURegsAsm, 7 /* 0, 1, 2 */ },
  { 0, 58 /* addu */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 90 /* and */, MCK_CPU64RegsAsm, 7 /* 0, 1, 2 */ },
  { Feature_HasMips64, 90 /* and */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 90 /* and */, MCK_CPURegsAsm, 7 /* 0, 1, 2 */ },
  { 0, 90 /* and */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 94 /* andi */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 94 /* andi */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 143 /* bgezal */, MCK_CPURegsAsm, 1 /* 0 */ },
  { Feature_HasStdEnc, 172 /* bltzal */, MCK_CPURegsAsm, 1 /* 0 */ },
  { Feature_HasStdEnc, 216 /* cfc1 */, MCK_CCRAsm, 2 /* 1 */ },
  { Feature_HasBitCount|Feature_HasStdEnc, 221 /* clo */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasBitCount|Feature_HasStdEnc, 225 /* clz */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 256 /* ctc1 */, MCK_CCRAsm, 2 /* 1 */ },
  { Feature_HasStdEnc, 265 /* dadd */, MCK_CPU64RegsAsm, 7 /* 0, 1, 2 */ },
  { 0, 265 /* dadd */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 270 /* daddi */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 276 /* daddiu */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 283 /* daddu */, MCK_CPU64RegsAsm, 7 /* 0, 1, 2 */ },
  { 0, 283 /* daddu */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasBitCount|Feature_HasStdEnc, 289 /* dclo */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasBitCount|Feature_HasStdEnc, 294 /* dclz */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 299 /* ddiv */, MCK_CPU64RegsAsm, 6 /* 1, 2 */ },
  { Feature_HasStdEnc, 304 /* ddivu */, MCK_CPU64RegsAsm, 6 /* 1, 2 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 310 /* dext */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 315 /* dextm */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 321 /* dextu */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 327 /* dins */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 332 /* dinsm */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 338 /* dinsu */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 344 /* div */, MCK_CPURegsAsm, 6 /* 1, 2 */ },
  { Feature_HasStdEnc, 348 /* divu */, MCK_CPURegsAsm, 6 /* 1, 2 */ },
  { 0, 353 /* dmfc0 */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 353 /* dmfc0 */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { 0, 365 /* dmfc2 */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 365 /* dmfc2 */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { 0, 371 /* dmtc0 */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 371 /* dmtc0 */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { 0, 383 /* dmtc2 */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 383 /* dmtc2 */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 389 /* dmult */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 395 /* dmultu */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasMips64r2|Feature_HasStdEnc, 494 /* drotr */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasMips64r2|Feature_HasStdEnc, 500 /* drotrv */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasMips64r2|Feature_HasStdEnc, 500 /* drotrv */, MCK_CPURegsAsm, 4 /* 2 */ },
  { Feature_HasSwap|Feature_HasStdEnc, 507 /* dsbh */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasSwap|Feature_HasStdEnc, 512 /* dshd */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 517 /* dsll */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 522 /* dsll32 */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 529 /* dsllv */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 529 /* dsllv */, MCK_CPURegsAsm, 4 /* 2 */ },
  { Feature_HasStdEnc, 535 /* dsra */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 540 /* dsra32 */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 547 /* dsrav */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 547 /* dsrav */, MCK_CPURegsAsm, 4 /* 2 */ },
  { Feature_HasStdEnc, 553 /* dsrl */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 558 /* dsrl32 */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 565 /* dsrlv */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 565 /* dsrlv */, MCK_CPURegsAsm, 4 /* 2 */ },
  { Feature_HasStdEnc, 571 /* dsubu */, MCK_CPU64RegsAsm, 7 /* 0, 1, 2 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 577 /* ext */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 671 /* ins */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { 0, 704 /* la */, MCK_CPURegsAsm, 1 /* 0 */ },
  { 0, 704 /* la */, MCK_CPURegsAsm, 1 /* 0 */ },
  { 0, 704 /* la */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 707 /* lb */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 707 /* lb */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 710 /* lbu */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 710 /* lbu */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 719 /* ld */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_NotMips64|Feature_HasStdEnc, 722 /* ldc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasMips64|Feature_HasStdEnc, 722 /* ldc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 727 /* ldl */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 731 /* ldr */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 741 /* lh */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 741 /* lh */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 744 /* lhu */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 744 /* lhu */, MCK_Mem, 2 /* 1 */ },
  { 0, 752 /* li */, MCK_CPURegsAsm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 755 /* ll */, MCK_CPURegsAsm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 755 /* ll */, MCK_Mem, 2 /* 1 */ },
  { Feature_IsN64|Feature_HasStdEnc, 755 /* ll */, MCK_CPURegsAsm, 1 /* 0 */ },
  { Feature_IsN64|Feature_HasStdEnc, 755 /* ll */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 758 /* lld */, MCK_CPU64RegsAsm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 758 /* lld */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 762 /* load_ac128 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 773 /* load_ac64 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 783 /* load_ac_dsp */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 795 /* load_ccond_dsp */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 820 /* lw */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 820 /* lw */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 823 /* lwc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_IsN64|Feature_HasStdEnc, 823 /* lwc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 828 /* lwl */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 828 /* lwl */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 832 /* lwr */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 832 /* lwr */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 836 /* lwu */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 850 /* madd */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 855 /* maddu */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { 0, 874 /* mfc0 */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 874 /* mfc0 */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { 0, 884 /* mfc2 */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 884 /* mfc2 */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasMips64, 910 /* move */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasMips64, 910 /* move */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_NotMips64, 910 /* move */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_NotMips64, 910 /* move */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 935 /* msub */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 940 /* msubu */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { 0, 946 /* mtc0 */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 946 /* mtc0 */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { 0, 956 /* mtc2 */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 956 /* mtc2 */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 978 /* mul */, MCK_CPURegsAsm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 1034 /* mult */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1039 /* multu */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { 0, 1045 /* neg */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { 0, 1049 /* negu */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1070 /* nor */, MCK_CPU64RegsAsm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 1070 /* nor */, MCK_CPURegsAsm, 7 /* 0, 1, 2 */ },
  { Feature_HasMips64, 1074 /* not */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { 0, 1074 /* not */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1078 /* or */, MCK_CPU64RegsAsm, 7 /* 0, 1, 2 */ },
  { Feature_HasMips64, 1078 /* or */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1078 /* or */, MCK_CPURegsAsm, 7 /* 0, 1, 2 */ },
  { Feature_NotMips64, 1078 /* or */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1081 /* ori */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1081 /* ori */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1194 /* rdhwr */, MCK_HW64RegsAsm, 2 /* 1 */ },
  { Feature_HasStdEnc, 1194 /* rdhwr */, MCK_HWRegsAsm, 2 /* 1 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 1211 /* rotr */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 1216 /* rotrv */, MCK_CPURegsAsm, 7 /* 0, 1, 2 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1228 /* sb */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1228 /* sb */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1231 /* sc */, MCK_CPURegsAsm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1231 /* sc */, MCK_Mem, 2 /* 1 */ },
  { Feature_IsN64|Feature_HasStdEnc, 1231 /* sc */, MCK_CPURegsAsm, 1 /* 0 */ },
  { Feature_IsN64|Feature_HasStdEnc, 1231 /* sc */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1234 /* scd */, MCK_CPU64RegsAsm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1234 /* scd */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1238 /* sd */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_NotMips64|Feature_HasStdEnc, 1241 /* sdc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasMips64|Feature_HasStdEnc, 1241 /* sdc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1246 /* sdl */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1250 /* sdr */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1268 /* sh */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1268 /* sh */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 1347 /* sll */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1351 /* sllv */, MCK_CPURegsAsm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 1356 /* slt */, MCK_CPURegsAsm, 1 /* 0 */ },
  { Feature_HasMips64, 1356 /* slt */, MCK_CPURegsAsm, 1 /* 0 */ },
  { Feature_HasStdEnc, 1356 /* slt */, MCK_CPURegsAsm, 1 /* 0 */ },
  { 0, 1356 /* slt */, MCK_CPURegsAsm, 1 /* 0 */ },
  { Feature_HasStdEnc, 1360 /* slti */, MCK_CPURegsAsm, 1 /* 0 */ },
  { Feature_HasStdEnc, 1360 /* slti */, MCK_CPURegsAsm, 1 /* 0 */ },
  { Feature_HasStdEnc, 1365 /* sltiu */, MCK_CPURegsAsm, 1 /* 0 */ },
  { Feature_HasStdEnc, 1365 /* sltiu */, MCK_CPURegsAsm, 1 /* 0 */ },
  { Feature_HasStdEnc, 1371 /* sltu */, MCK_CPURegsAsm, 1 /* 0 */ },
  { Feature_HasStdEnc, 1371 /* sltu */, MCK_CPURegsAsm, 1 /* 0 */ },
  { Feature_HasStdEnc, 1381 /* sra */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1385 /* srav */, MCK_CPURegsAsm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 1390 /* srl */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1394 /* srlv */, MCK_CPURegsAsm, 7 /* 0, 1, 2 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1399 /* store_ac128 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1411 /* store_ac64 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1422 /* store_ac_dsp */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1435 /* store_ccond_dsp */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 1451 /* sub */, MCK_CPURegsAsm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 1481 /* subu */, MCK_CPURegsAsm, 7 /* 0, 1, 2 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1513 /* sw */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1513 /* sw */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1516 /* swc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_IsN64|Feature_HasStdEnc, 1516 /* swc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1521 /* swl */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1521 /* swl */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1525 /* swr */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1525 /* swr */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasSwap|Feature_HasStdEnc, 1552 /* wsbh */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1557 /* xor */, MCK_CPU64RegsAsm, 7 /* 0, 1, 2 */ },
  { Feature_HasMips64, 1557 /* xor */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1557 /* xor */, MCK_CPURegsAsm, 7 /* 0, 1, 2 */ },
  { Feature_NotMips64, 1557 /* xor */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1561 /* xori */, MCK_CPU64RegsAsm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1561 /* xori */, MCK_CPURegsAsm, 3 /* 0, 1 */ },
};

MipsAsmParser::OperandMatchResultTy MipsAsmParser::
tryCustomParseOperand(SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_CCRAsm:
    return parseCCRRegs(Operands);
  case MCK_CPU64RegsAsm:
    return parseCPU64Regs(Operands);
  case MCK_CPURegsAsm:
    return parseCPURegs(Operands);
  case MCK_HW64RegsAsm:
    return parseHW64Regs(Operands);
  case MCK_HWRegsAsm:
    return parseHWRegs(Operands);
  case MCK_Mem:
    return parseMemOperand(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

MipsAsmParser::OperandMatchResultTy MipsAsmParser::
MatchOperandParserImpl(SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                       StringRef Mnemonic) {
  // Get the current feature set.
  unsigned AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size()-1;
  // Search the table.
  std::pair<const OperandMatchEntry*, const OperandMatchEntry*> MnemonicRange =
    std::equal_range(OperandMatchTable, OperandMatchTable+189, Mnemonic,
                     LessOpcodeOperand());

  if (MnemonicRange.first == MnemonicRange.second)
    return MatchOperand_NoMatch;

  for (const OperandMatchEntry *it = MnemonicRange.first,
       *ie = MnemonicRange.second; it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());

    // check if the available features match
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      continue;
    }

    // check if the operand in question has a custom parser.
    if (!(it->OperandMask & (1 << NextOpNum)))
      continue;

    // call custom parse method to handle the operand
    OperandMatchResultTy Result = tryCustomParseOperand(Operands, it->Class);
    if (Result != MatchOperand_NoMatch)
      return Result;
  }

  // Okay, we had no match.
  return MatchOperand_NoMatch;
}

#endif // GET_MATCHER_IMPLEMENTATION

