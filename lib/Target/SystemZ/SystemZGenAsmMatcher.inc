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
  Feature_None = 0
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(unsigned Val) {
  switch(Val) {
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
  CVT_95_addRegOperands,
  CVT_95_addBDXAddrOperands,
  CVT_95_addImmOperands,
  CVT_95_addBDAddrOperands,
  CVT_95_addAccessRegOperands,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__GR321_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP641_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP641_0__Tie0__FP641_1,
  Convert__FP321_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP321_0__Tie0__FP321_1,
  Convert__GR321_0__Tie0__S32Imm1_1,
  Convert__GR641_0__Tie0__BDXAddr64Disp203_1,
  Convert__GR641_0__Tie0__S32Imm1_1,
  Convert__GR641_0__Tie0__GR321_1,
  Convert__GR641_0__Tie0__S16Imm1_1,
  Convert__GR641_0__Tie0__GR641_1,
  Convert__BDAddr64Disp202_0__S8Imm1_1,
  Convert__GR321_0__Tie0__S16Imm1_1,
  Convert__GR321_0__Tie0__BDXAddr64Disp203_1,
  Convert__GR321_0__Tie0__GR321_1,
  Convert__GR321_0__Tie0__U32Imm1_1,
  Convert__GR641_0__Tie0__U32Imm1_1,
  Convert__FP1281_0__Tie0__FP1281_1,
  Convert__GR641_0__ADDR641_1,
  Convert__ADDR641_0,
  Convert__GR641_0__Imm1_1,
  Convert__U4Imm1_0__Imm1_1,
  Convert__GR321_0__BDXAddr64Disp123_1,
  Convert__FP641_0__BDXAddr64Disp123_1,
  Convert__FP641_0__FP641_1,
  Convert__FP641_0__GR321_1,
  Convert__FP641_0__GR641_1,
  Convert__FP321_0__BDXAddr64Disp123_1,
  Convert__FP321_0__FP321_1,
  Convert__FP321_0__GR321_1,
  Convert__FP321_0__GR641_1,
  Convert__GR321_0__FP641_2__U4Imm1_1,
  Convert__GR321_0__FP321_2__U4Imm1_1,
  Convert__GR321_0__S32Imm1_1,
  Convert__GR321_0__FP1281_2__U4Imm1_1,
  Convert__GR641_0__BDXAddr64Disp203_1,
  Convert__GR641_0__FP641_2__U4Imm1_1,
  Convert__GR641_0__FP321_2__U4Imm1_1,
  Convert__GR641_0__S32Imm1_1,
  Convert__GR641_0__GR321_1,
  Convert__GR641_0__S16Imm1_1,
  Convert__BDAddr64Disp122_0__S16Imm1_1,
  Convert__GR641_0__GR641_1,
  Convert__GR641_0__FP1281_2__U4Imm1_1,
  Convert__GR321_0__S16Imm1_1,
  Convert__GR321_0__Imm1_1,
  Convert__GR321_0__BDXAddr64Disp203_1,
  Convert__BDAddr64Disp122_0__U16Imm1_1,
  Convert__GR321_0__U32Imm1_1,
  Convert__GR641_0__U32Imm1_1,
  Convert__BDAddr64Disp122_0__U8Imm1_1,
  Convert__BDAddr64Disp202_0__U8Imm1_1,
  Convert__GR321_0__GR321_1,
  Convert__FP641_0__FP641_2__FP641_1,
  Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2,
  Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2,
  Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2,
  Convert__FP1281_0__FP1281_1,
  Convert__FP1281_0__GR321_1,
  Convert__FP1281_0__GR641_1,
  Convert__GR1281_0__Tie0__BDXAddr64Disp203_1,
  Convert__GR1281_0__Tie0__GR641_1,
  Convert__GR1281_0__Tie0__GR321_1,
  Convert__GR321_0__AccessReg1_1,
  Convert__FP641_0__FP641_2__U4Imm1_1,
  Convert__FP321_0__FP321_2__U4Imm1_1,
  Convert__FP1281_0__FP1281_2__U4Imm1_1,
  Convert__GR1281_0__GR641_1,
  Convert__GR641_0__Tie0__BDXAddr64Disp123_1,
  Convert__GR641_0__Tie0__U16Imm1_1,
  Convert__Imm1_0,
  Convert__GR641_0__BDXAddr64Disp123_1,
  Convert__FP641_0__FP321_1,
  Convert__FP641_0__BDXAddr64Disp203_1,
  Convert__FP321_0__FP641_1,
  Convert__FP321_0__BDXAddr64Disp203_1,
  Convert__GR641_0__FP641_1,
  Convert__GR641_0__U16Imm1_1,
  Convert__GR641_0__GR641_1__BDAddr64Disp202_2,
  Convert__FP1281_0__BDXAddr64Disp123_1,
  Convert__FP1281_0__FP641_1,
  Convert__FP1281_0__FP321_1,
  Convert__FP641_0,
  Convert__FP321_0,
  Convert__FP1281_0,
  Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2,
  Convert__FP641_0__Tie0__FP641_1__FP641_2,
  Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2,
  Convert__FP321_0__Tie0__FP321_1__FP321_2,
  Convert__FP641_0__Tie0__FP321_1,
  Convert__FP1281_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP1281_0__Tie0__FP641_1,
  Convert__GR641_0__Tie0__GR641_1__U6Imm1_2__U6Imm1_3__U6Imm1_4,
  Convert__GR321_0__GR321_1__BDAddr32Disp202_2,
  Convert__GR641_0__GR641_1__BDAddr32Disp202_2,
  Convert__GR321_0__Tie0__BDAddr32Disp122_1,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][13] = {
  // Convert__GR321_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp202_0__S8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__FP1281_0__Tie0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__ADDR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__ADDR641_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__GR641_0__Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__Imm1_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__FP641_2__U4Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__FP321_2__U4Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__FP1281_2__U4Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__FP641_2__U4Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__FP321_2__U4Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0__S16Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__FP1281_2__U4Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0__U16Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0__U8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp202_0__U8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__FP641_2__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__FP1281_0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__AccessReg1_1
  { CVT_95_addRegOperands, 1, CVT_95_addAccessRegOperands, 2, CVT_Done },
  // Convert__FP641_0__FP641_2__U4Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__FP321_0__FP321_2__U4Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP1281_2__U4Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR1281_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__GR641_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__FP1281_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP321_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP1281_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP641_0__Tie0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__Tie0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__U6Imm1_2__U6Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GR321_0__GR321_1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__BDAddr32Disp122_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
};

void SystemZAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const SmallVectorImpl<MCParsedAsmOperand*> &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<SystemZOperand*>(Operands[*(p + 1)])->addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(*(p + 1)));
      break;
    case CVT_95_addRegOperands:
      static_cast<SystemZOperand*>(Operands[*(p + 1)])->addRegOperands(Inst, 1);
      break;
    case CVT_95_addBDXAddrOperands:
      static_cast<SystemZOperand*>(Operands[*(p + 1)])->addBDXAddrOperands(Inst, 3);
      break;
    case CVT_95_addImmOperands:
      static_cast<SystemZOperand*>(Operands[*(p + 1)])->addImmOperands(Inst, 1);
      break;
    case CVT_95_addBDAddrOperands:
      static_cast<SystemZOperand*>(Operands[*(p + 1)])->addBDAddrOperands(Inst, 2);
      break;
    case CVT_95_addAccessRegOperands:
      static_cast<SystemZOperand*>(Operands[*(p + 1)])->addAccessRegOperands(Inst, 1);
      break;
    }
  }
}

void SystemZAsmParser::
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
    case CVT_95_addRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBDXAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBDAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addAccessRegOperands:
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
  MCK_ADDR128Bit, // register class 'ADDR128Bit'
  MCK_GR128Bit, // register class 'GR128Bit'
  MCK_ADDR64Bit, // register class 'ADDR64Bit'
  MCK_GR64Bit, // register class 'GR64Bit'
  MCK_ADDR32Bit, // register class 'ADDR32Bit'
  MCK_GR32Bit, // register class 'GR32Bit'
  MCK_FP64Bit, // register class 'FP64Bit'
  MCK_FP32Bit, // register class 'FP32Bit'
  MCK_FP128Bit, // register class 'FP128Bit'
  MCK_ADDR128, // user defined class 'ADDR128AsmOperand'
  MCK_ADDR32, // user defined class 'ADDR32AsmOperand'
  MCK_ADDR64, // user defined class 'ADDR64AsmOperand'
  MCK_AccessReg, // user defined class 'AccessReg'
  MCK_BDAddr32Disp12, // user defined class 'BDAddr32Disp12'
  MCK_BDAddr32Disp20, // user defined class 'BDAddr32Disp20'
  MCK_BDAddr64Disp12, // user defined class 'BDAddr64Disp12'
  MCK_BDAddr64Disp20, // user defined class 'BDAddr64Disp20'
  MCK_BDXAddr64Disp12, // user defined class 'BDXAddr64Disp12'
  MCK_BDXAddr64Disp20, // user defined class 'BDXAddr64Disp20'
  MCK_FP128, // user defined class 'FP128AsmOperand'
  MCK_FP32, // user defined class 'FP32AsmOperand'
  MCK_FP64, // user defined class 'FP64AsmOperand'
  MCK_GR128, // user defined class 'GR128AsmOperand'
  MCK_GR32, // user defined class 'GR32AsmOperand'
  MCK_GR64, // user defined class 'GR64AsmOperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_S16Imm, // user defined class 'S16Imm'
  MCK_S32Imm, // user defined class 'S32Imm'
  MCK_S8Imm, // user defined class 'S8Imm'
  MCK_U16Imm, // user defined class 'U16Imm'
  MCK_U32Imm, // user defined class 'U32Imm'
  MCK_U4Imm, // user defined class 'U4Imm'
  MCK_U6Imm, // user defined class 'U6Imm'
  MCK_U8Imm, // user defined class 'U8Imm'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_ADDR128Bit:
    return B == MCK_GR128Bit;

  case MCK_ADDR64Bit:
    return B == MCK_GR64Bit;

  case MCK_ADDR32Bit:
    return B == MCK_GR32Bit;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand *GOp, MatchClassKind Kind) {
  SystemZOperand &Operand = *(SystemZOperand*)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  // 'ADDR128' class
  if (Kind == MCK_ADDR128) {
    if (Operand.isADDR128())
      return MCTargetAsmParser::Match_Success;
  }

  // 'ADDR32' class
  if (Kind == MCK_ADDR32) {
    if (Operand.isADDR32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'ADDR64' class
  if (Kind == MCK_ADDR64) {
    if (Operand.isADDR64())
      return MCTargetAsmParser::Match_Success;
  }

  // 'AccessReg' class
  if (Kind == MCK_AccessReg) {
    if (Operand.isAccessReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDAddr32Disp12' class
  if (Kind == MCK_BDAddr32Disp12) {
    if (Operand.isBDAddr32Disp12())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDAddr32Disp20' class
  if (Kind == MCK_BDAddr32Disp20) {
    if (Operand.isBDAddr32Disp20())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDAddr64Disp12' class
  if (Kind == MCK_BDAddr64Disp12) {
    if (Operand.isBDAddr64Disp12())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDAddr64Disp20' class
  if (Kind == MCK_BDAddr64Disp20) {
    if (Operand.isBDAddr64Disp20())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDXAddr64Disp12' class
  if (Kind == MCK_BDXAddr64Disp12) {
    if (Operand.isBDXAddr64Disp12())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDXAddr64Disp20' class
  if (Kind == MCK_BDXAddr64Disp20) {
    if (Operand.isBDXAddr64Disp20())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FP128' class
  if (Kind == MCK_FP128) {
    if (Operand.isFP128())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FP32' class
  if (Kind == MCK_FP32) {
    if (Operand.isFP32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FP64' class
  if (Kind == MCK_FP64) {
    if (Operand.isFP64())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GR128' class
  if (Kind == MCK_GR128) {
    if (Operand.isGR128())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GR32' class
  if (Kind == MCK_GR32) {
    if (Operand.isGR32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GR64' class
  if (Kind == MCK_GR64) {
    if (Operand.isGR64())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm' class
  if (Kind == MCK_Imm) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S16Imm' class
  if (Kind == MCK_S16Imm) {
    if (Operand.isS16Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S32Imm' class
  if (Kind == MCK_S32Imm) {
    if (Operand.isS32Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S8Imm' class
  if (Kind == MCK_S8Imm) {
    if (Operand.isS8Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U16Imm' class
  if (Kind == MCK_U16Imm) {
    if (Operand.isU16Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U32Imm' class
  if (Kind == MCK_U32Imm) {
    if (Operand.isU32Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U4Imm' class
  if (Kind == MCK_U4Imm) {
    if (Operand.isU4Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U6Imm' class
  if (Kind == MCK_U6Imm) {
    if (Operand.isU6Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U8Imm' class
  if (Kind == MCK_U8Imm) {
    if (Operand.isU8Imm())
      return MCTargetAsmParser::Match_Success;
  }

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case SystemZ::R0W: OpKind = MCK_GR32Bit; break;
    case SystemZ::R1W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R2W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R3W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R4W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R5W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R6W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R7W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R8W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R9W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R10W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R11W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R12W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R13W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R14W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R15W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R0D: OpKind = MCK_GR64Bit; break;
    case SystemZ::R1D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R2D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R3D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R4D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R5D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R6D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R7D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R8D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R9D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R10D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R11D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R12D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R13D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R14D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R15D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R0Q: OpKind = MCK_GR128Bit; break;
    case SystemZ::R2Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R4Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R6Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R8Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R10Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R12Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R14Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::F0S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F1S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F2S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F3S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F4S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F5S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F6S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F7S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F8S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F9S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F10S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F11S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F12S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F13S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F14S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F15S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F0D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F1D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F2D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F3D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F4D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F5D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F6D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F7D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F8D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F9D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F10D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F11D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F12D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F13D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F14D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F15D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F0Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F1Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F4Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F5Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F8Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F9Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F12Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F13Q: OpKind = MCK_FP128Bit; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

unsigned SystemZAsmParser::
ComputeAvailableFeatures(uint64_t FB) const {
  unsigned Features = 0;
  return Features;
}

static const char *const MnemonicTable =
    "\001a\003adb\004adbr\003aeb\004aebr\003afi\002ag\003agf\004agfi\004agfr"
    "\004aghi\003agr\004agsi\002ah\003ahi\003ahy\002al\003alc\004alcg\005alc"
    "gr\004alcr\004alfi\003alg\004algf\005algfi\005algfr\004algr\003alr\003a"
    "ly\002ar\003asi\004axbr\002ay\004basr\002br\004bras\005brasl\003brc\004"
    "brcl\001c\003cdb\004cdbr\005cdfbr\005cdgbr\003ceb\004cebr\005cefbr\005c"
    "egbr\005cfdbr\005cfebr\003cfi\005cfxbr\002cg\005cgdbr\005cgebr\003cgf\004"
    "cgfi\004cgfr\005cgfrl\003cgh\004cghi\005cghrl\005cghsi\003cgr\004cgrl\005"
    "cgxbr\002ch\005chhsi\003chi\004chrl\004chsi\003chy\002cl\006clfhsi\004c"
    "lfi\003clg\004clgf\005clgfi\005clgfr\006clgfrl\006clghrl\006clghsi\004c"
    "lgr\005clgrl\006clhhsi\005clhrl\003cli\004cliy\003clr\004clrl\003cly\005"
    "cpsdr\002cr\003crl\002cs\003csg\003csy\004cxbr\005cxfbr\005cxgbr\002cy\003"
    "ddb\004ddbr\003deb\004debr\002dl\003dlg\004dlgr\003dlr\003dsg\004dsgf\005"
    "dsgfr\004dsgr\004dxbr\003ear\005fidbr\005fiebr\005fixbr\005flogr\002ic\003"
    "icy\004iihf\004iihh\004iihl\004iilf\004iilh\004iill\001j\002je\002jg\003"
    "jge\003jgh\004jghe\003jgl\004jgle\004jglh\004jgne\004jgnh\005jgnhe\004j"
    "gnl\005jgnle\005jgnlh\004jgno\003jgo\002jh\003jhe\002jl\003jle\003jlh\003"
    "jne\003jnh\004jnhe\003jnl\004jnle\004jnlh\003jno\002jo\001l\002la\004la"
    "rl\003lay\002lb\003lbr\005lcdbr\005lcebr\005lcgfr\004lcgr\003lcr\005lcx"
    "br\002ld\004ldeb\005ldebr\004ldgr\003ldr\005ldxbr\003ldy\002le\005ledbr"
    "\003ler\005lexbr\003ley\002lg\003lgb\004lgbr\004lgdr\003lgf\004lgfi\004"
    "lgfr\005lgfrl\003lgh\004lghi\004lghr\005lghrl\003lgr\004lgrl\002lh\003l"
    "hi\003lhr\004lhrl\003lhy\003llc\004llcr\004llgc\005llgcr\004llgf\005llg"
    "fr\006llgfrl\004llgh\005llghr\006llghrl\003llh\004llhr\005llhrl\005llih"
    "f\005llihh\005llihl\005llilf\005llilh\005llill\003lmg\005lndbr\005lnebr"
    "\005lnxbr\005lpdbr\005lpebr\005lpxbr\002lr\003lrl\003lrv\004lrvg\005lrv"
    "gr\004lrvr\004lxdb\005lxdbr\004lxeb\005lxebr\003lxr\002ly\004lzdr\004lz"
    "er\004lzxr\004madb\005madbr\004maeb\005maebr\003mdb\004mdbr\004mdeb\005"
    "mdebr\004meeb\005meebr\004mghi\002mh\003mhi\003mhy\003mlg\004mlgr\002ms"
    "\004msdb\005msdbr\004mseb\005msebr\004msfi\003msg\004msgf\005msgfi\005m"
    "sgfr\004msgr\003msr\003msy\005mvghi\005mvhhi\004mvhi\003mvi\004mviy\004"
    "mxbr\004mxdb\005mxdbr\001n\002ng\003ngr\002ni\004nihf\004nihh\004nihl\004"
    "nilf\004nilh\004nill\003niy\002nr\002ny\001o\002og\003ogr\002oi\004oihf"
    "\004oihh\004oihl\004oilf\004oilh\004oill\003oiy\002or\002oy\005risbg\003"
    "rll\004rllg\001s\003sdb\004sdbr\003seb\004sebr\002sg\003sgf\004sgfr\003"
    "sgr\002sl\003slb\004slbg\005slbgr\004slbr\004slfi\003slg\004slgf\005slg"
    "fi\005slgfr\004slgr\003sll\004sllg\003slr\003sly\004sqdb\005sqdbr\004sq"
    "eb\005sqebr\005sqxbr\002sr\003sra\004srag\003srl\004srlg\002st\003stc\004"
    "stcy\003std\004stdy\003ste\004stey\003stg\005stgrl\003sth\005sthrl\004s"
    "thy\004stmg\004strl\004strv\005strvg\003sty\004sxbr\002sy\001x\002xg\003"
    "xgr\002xi\004xihf\004xilf\003xiy\002xr\002xy";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint8_t RequiredFeatures;
    uint8_t Classes[5];
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

static const MatchEntry MatchTable[369] = {
  { 0 /* a */, SystemZ::A, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 2 /* adb */, SystemZ::ADB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, 0},
  { 6 /* adbr */, SystemZ::ADBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, 0},
  { 11 /* aeb */, SystemZ::AEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, 0},
  { 15 /* aebr */, SystemZ::AEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, 0},
  { 20 /* afi */, SystemZ::AFI, Convert__GR321_0__Tie0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, 0},
  { 24 /* ag */, SystemZ::AG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 27 /* agf */, SystemZ::AGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 31 /* agfi */, SystemZ::AGFI, Convert__GR641_0__Tie0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, 0},
  { 36 /* agfr */, SystemZ::AGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, 0},
  { 41 /* aghi */, SystemZ::AGHI, Convert__GR641_0__Tie0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, 0},
  { 46 /* agr */, SystemZ::AGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 50 /* agsi */, SystemZ::AGSI, Convert__BDAddr64Disp202_0__S8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_S8Imm }, 0},
  { 55 /* ah */, SystemZ::AH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 58 /* ahi */, SystemZ::AHI, Convert__GR321_0__Tie0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, 0},
  { 62 /* ahy */, SystemZ::AHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 66 /* al */, SystemZ::AL, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 69 /* alc */, SystemZ::ALC, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 73 /* alcg */, SystemZ::ALCG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 78 /* alcgr */, SystemZ::ALCGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 84 /* alcr */, SystemZ::ALCR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 89 /* alfi */, SystemZ::ALFI, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, 0},
  { 94 /* alg */, SystemZ::ALG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 98 /* algf */, SystemZ::ALGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 103 /* algfi */, SystemZ::ALGFI, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, 0},
  { 109 /* algfr */, SystemZ::ALGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, 0},
  { 115 /* algr */, SystemZ::ALGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 120 /* alr */, SystemZ::ALR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 124 /* aly */, SystemZ::ALY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 128 /* ar */, SystemZ::AR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 131 /* asi */, SystemZ::ASI, Convert__BDAddr64Disp202_0__S8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_S8Imm }, 0},
  { 135 /* axbr */, SystemZ::AXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, 0},
  { 140 /* ay */, SystemZ::AY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 143 /* basr */, SystemZ::AsmBASR, Convert__GR641_0__ADDR641_1, 0, { MCK_GR64, MCK_ADDR64 }, 0},
  { 148 /* br */, SystemZ::BR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, 0},
  { 151 /* bras */, SystemZ::AsmBRAS, Convert__GR641_0__Imm1_1, 0, { MCK_GR64, MCK_Imm }, 0},
  { 156 /* brasl */, SystemZ::AsmBRASL, Convert__GR641_0__Imm1_1, 0, { MCK_GR64, MCK_Imm }, 0},
  { 162 /* brc */, SystemZ::AsmBRC, Convert__U4Imm1_0__Imm1_1, 0, { MCK_U4Imm, MCK_Imm }, 0},
  { 166 /* brcl */, SystemZ::AsmBRCL, Convert__U4Imm1_0__Imm1_1, 0, { MCK_U4Imm, MCK_Imm }, 0},
  { 171 /* c */, SystemZ::C, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 173 /* cdb */, SystemZ::CDB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, 0},
  { 177 /* cdbr */, SystemZ::CDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, 0},
  { 182 /* cdfbr */, SystemZ::CDFBR, Convert__FP641_0__GR321_1, 0, { MCK_FP64, MCK_GR32 }, 0},
  { 188 /* cdgbr */, SystemZ::CDGBR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, 0},
  { 194 /* ceb */, SystemZ::CEB, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, 0},
  { 198 /* cebr */, SystemZ::CEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, 0},
  { 203 /* cefbr */, SystemZ::CEFBR, Convert__FP321_0__GR321_1, 0, { MCK_FP32, MCK_GR32 }, 0},
  { 209 /* cegbr */, SystemZ::CEGBR, Convert__FP321_0__GR641_1, 0, { MCK_FP32, MCK_GR64 }, 0},
  { 215 /* cfdbr */, SystemZ::CFDBR, Convert__GR321_0__FP641_2__U4Imm1_1, 0, { MCK_GR32, MCK_U4Imm, MCK_FP64 }, 0},
  { 221 /* cfebr */, SystemZ::CFEBR, Convert__GR321_0__FP321_2__U4Imm1_1, 0, { MCK_GR32, MCK_U4Imm, MCK_FP32 }, 0},
  { 227 /* cfi */, SystemZ::CFI, Convert__GR321_0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, 0},
  { 231 /* cfxbr */, SystemZ::CFXBR, Convert__GR321_0__FP1281_2__U4Imm1_1, 0, { MCK_GR32, MCK_U4Imm, MCK_FP128 }, 0},
  { 237 /* cg */, SystemZ::CG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 240 /* cgdbr */, SystemZ::CGDBR, Convert__GR641_0__FP641_2__U4Imm1_1, 0, { MCK_GR64, MCK_U4Imm, MCK_FP64 }, 0},
  { 246 /* cgebr */, SystemZ::CGEBR, Convert__GR641_0__FP321_2__U4Imm1_1, 0, { MCK_GR64, MCK_U4Imm, MCK_FP32 }, 0},
  { 252 /* cgf */, SystemZ::CGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 256 /* cgfi */, SystemZ::CGFI, Convert__GR641_0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, 0},
  { 261 /* cgfr */, SystemZ::CGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, 0},
  { 266 /* cgfrl */, SystemZ::CGFRL, Convert__GR641_0__Imm1_1, 0, { MCK_GR64, MCK_Imm }, 0},
  { 272 /* cgh */, SystemZ::CGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 276 /* cghi */, SystemZ::CGHI, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, 0},
  { 281 /* cghrl */, SystemZ::CGHRL, Convert__GR641_0__Imm1_1, 0, { MCK_GR64, MCK_Imm }, 0},
  { 287 /* cghsi */, SystemZ::CGHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, 0},
  { 293 /* cgr */, SystemZ::CGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 297 /* cgrl */, SystemZ::CGRL, Convert__GR641_0__Imm1_1, 0, { MCK_GR64, MCK_Imm }, 0},
  { 302 /* cgxbr */, SystemZ::CGXBR, Convert__GR641_0__FP1281_2__U4Imm1_1, 0, { MCK_GR64, MCK_U4Imm, MCK_FP128 }, 0},
  { 308 /* ch */, SystemZ::CH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 311 /* chhsi */, SystemZ::CHHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, 0},
  { 317 /* chi */, SystemZ::CHI, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, 0},
  { 321 /* chrl */, SystemZ::CHRL, Convert__GR321_0__Imm1_1, 0, { MCK_GR32, MCK_Imm }, 0},
  { 326 /* chsi */, SystemZ::CHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, 0},
  { 331 /* chy */, SystemZ::CHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 335 /* cl */, SystemZ::CL, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 338 /* clfhsi */, SystemZ::CLFHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, 0},
  { 345 /* clfi */, SystemZ::CLFI, Convert__GR321_0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, 0},
  { 350 /* clg */, SystemZ::CLG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 354 /* clgf */, SystemZ::CLGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 359 /* clgfi */, SystemZ::CLGFI, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, 0},
  { 365 /* clgfr */, SystemZ::CLGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, 0},
  { 371 /* clgfrl */, SystemZ::CLGFRL, Convert__GR641_0__Imm1_1, 0, { MCK_GR64, MCK_Imm }, 0},
  { 378 /* clghrl */, SystemZ::CLGHRL, Convert__GR641_0__Imm1_1, 0, { MCK_GR64, MCK_Imm }, 0},
  { 385 /* clghsi */, SystemZ::CLGHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, 0},
  { 392 /* clgr */, SystemZ::CLGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 397 /* clgrl */, SystemZ::CLGRL, Convert__GR641_0__Imm1_1, 0, { MCK_GR64, MCK_Imm }, 0},
  { 403 /* clhhsi */, SystemZ::CLHHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, 0},
  { 410 /* clhrl */, SystemZ::CLHRL, Convert__GR321_0__Imm1_1, 0, { MCK_GR32, MCK_Imm }, 0},
  { 416 /* cli */, SystemZ::CLI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, 0},
  { 420 /* cliy */, SystemZ::CLIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, 0},
  { 425 /* clr */, SystemZ::CLR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 429 /* clrl */, SystemZ::CLRL, Convert__GR321_0__Imm1_1, 0, { MCK_GR32, MCK_Imm }, 0},
  { 434 /* cly */, SystemZ::CLY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 438 /* cpsdr */, SystemZ::CPSDRdd, Convert__FP641_0__FP641_2__FP641_1, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, 0},
  { 444 /* cr */, SystemZ::CR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 447 /* crl */, SystemZ::CRL, Convert__GR321_0__Imm1_1, 0, { MCK_GR32, MCK_Imm }, 0},
  { 451 /* cs */, SystemZ::CS, Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, 0},
  { 454 /* csg */, SystemZ::CSG, Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, 0},
  { 458 /* csy */, SystemZ::CSY, Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, 0},
  { 462 /* cxbr */, SystemZ::CXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, 0},
  { 467 /* cxfbr */, SystemZ::CXFBR, Convert__FP1281_0__GR321_1, 0, { MCK_FP128, MCK_GR32 }, 0},
  { 473 /* cxgbr */, SystemZ::CXGBR, Convert__FP1281_0__GR641_1, 0, { MCK_FP128, MCK_GR64 }, 0},
  { 479 /* cy */, SystemZ::CY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 482 /* ddb */, SystemZ::DDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, 0},
  { 486 /* ddbr */, SystemZ::DDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, 0},
  { 491 /* deb */, SystemZ::DEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, 0},
  { 495 /* debr */, SystemZ::DEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, 0},
  { 500 /* dl */, SystemZ::DL, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, 0},
  { 503 /* dlg */, SystemZ::DLG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, 0},
  { 507 /* dlgr */, SystemZ::DLGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, 0},
  { 512 /* dlr */, SystemZ::DLR, Convert__GR1281_0__Tie0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, 0},
  { 516 /* dsg */, SystemZ::DSG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, 0},
  { 520 /* dsgf */, SystemZ::DSGF, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, 0},
  { 525 /* dsgfr */, SystemZ::DSGFR, Convert__GR1281_0__Tie0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, 0},
  { 531 /* dsgr */, SystemZ::DSGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, 0},
  { 536 /* dxbr */, SystemZ::DXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, 0},
  { 541 /* ear */, SystemZ::EAR, Convert__GR321_0__AccessReg1_1, 0, { MCK_GR32, MCK_AccessReg }, 0},
  { 545 /* fidbr */, SystemZ::FIDBR, Convert__FP641_0__FP641_2__U4Imm1_1, 0, { MCK_FP64, MCK_U4Imm, MCK_FP64 }, 0},
  { 551 /* fiebr */, SystemZ::FIEBR, Convert__FP321_0__FP321_2__U4Imm1_1, 0, { MCK_FP32, MCK_U4Imm, MCK_FP32 }, 0},
  { 557 /* fixbr */, SystemZ::FIXBR, Convert__FP1281_0__FP1281_2__U4Imm1_1, 0, { MCK_FP128, MCK_U4Imm, MCK_FP128 }, 0},
  { 563 /* flogr */, SystemZ::FLOGR, Convert__GR1281_0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, 0},
  { 569 /* ic */, SystemZ::IC, Convert__GR641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, 0},
  { 572 /* icy */, SystemZ::ICY, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 576 /* iihf */, SystemZ::IIHF, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, 0},
  { 581 /* iihh */, SystemZ::IIHH, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 586 /* iihl */, SystemZ::IIHL, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 591 /* iilf */, SystemZ::IILF, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, 0},
  { 596 /* iilh */, SystemZ::IILH, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 601 /* iill */, SystemZ::IILL, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 606 /* j */, SystemZ::AsmJ, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 608 /* je */, SystemZ::AsmJE, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 611 /* jg */, SystemZ::JG, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 614 /* jge */, SystemZ::AsmJEL, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 618 /* jgh */, SystemZ::AsmJHL, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 622 /* jghe */, SystemZ::AsmJHEL, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 627 /* jgl */, SystemZ::AsmJLL, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 631 /* jgle */, SystemZ::AsmJLEL, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 636 /* jglh */, SystemZ::AsmJLHL, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 641 /* jgne */, SystemZ::AsmJNEL, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 646 /* jgnh */, SystemZ::AsmJNHL, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 651 /* jgnhe */, SystemZ::AsmJNHEL, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 657 /* jgnl */, SystemZ::AsmJNLL, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 662 /* jgnle */, SystemZ::AsmJNLEL, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 668 /* jgnlh */, SystemZ::AsmJNLHL, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 674 /* jgno */, SystemZ::AsmJNOL, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 679 /* jgo */, SystemZ::AsmJOL, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 683 /* jh */, SystemZ::AsmJH, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 686 /* jhe */, SystemZ::AsmJHE, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 690 /* jl */, SystemZ::AsmJL, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 693 /* jle */, SystemZ::AsmJLE, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 697 /* jlh */, SystemZ::AsmJLH, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 701 /* jne */, SystemZ::AsmJNE, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 705 /* jnh */, SystemZ::AsmJNH, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 709 /* jnhe */, SystemZ::AsmJNHE, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 714 /* jnl */, SystemZ::AsmJNL, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 718 /* jnle */, SystemZ::AsmJNLE, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 723 /* jnlh */, SystemZ::AsmJNLH, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 728 /* jno */, SystemZ::AsmJNO, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 732 /* jo */, SystemZ::AsmJO, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 735 /* l */, SystemZ::L, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 737 /* la */, SystemZ::LA, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, 0},
  { 740 /* larl */, SystemZ::LARL, Convert__GR641_0__Imm1_1, 0, { MCK_GR64, MCK_Imm }, 0},
  { 745 /* lay */, SystemZ::LAY, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 749 /* lb */, SystemZ::LB, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 752 /* lbr */, SystemZ::LBR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 756 /* lcdbr */, SystemZ::LCDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, 0},
  { 762 /* lcebr */, SystemZ::LCEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, 0},
  { 768 /* lcgfr */, SystemZ::LCGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, 0},
  { 774 /* lcgr */, SystemZ::LCGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 779 /* lcr */, SystemZ::LCR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 783 /* lcxbr */, SystemZ::LCXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, 0},
  { 789 /* ld */, SystemZ::LD, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, 0},
  { 792 /* ldeb */, SystemZ::LDEB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, 0},
  { 797 /* ldebr */, SystemZ::LDEBR, Convert__FP641_0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, 0},
  { 803 /* ldgr */, SystemZ::LDGR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, 0},
  { 808 /* ldr */, SystemZ::LDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, 0},
  { 812 /* ldxbr */, SystemZ::LDXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, 0},
  { 818 /* ldy */, SystemZ::LDY, Convert__FP641_0__BDXAddr64Disp203_1, 0, { MCK_FP64, MCK_BDXAddr64Disp20 }, 0},
  { 822 /* le */, SystemZ::LE, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, 0},
  { 825 /* ledbr */, SystemZ::LEDBR, Convert__FP321_0__FP641_1, 0, { MCK_FP32, MCK_FP64 }, 0},
  { 831 /* ler */, SystemZ::LER, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, 0},
  { 835 /* lexbr */, SystemZ::LEXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, 0},
  { 841 /* ley */, SystemZ::LEY, Convert__FP321_0__BDXAddr64Disp203_1, 0, { MCK_FP32, MCK_BDXAddr64Disp20 }, 0},
  { 845 /* lg */, SystemZ::LG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 848 /* lgb */, SystemZ::LGB, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 852 /* lgbr */, SystemZ::LGBR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 857 /* lgdr */, SystemZ::LGDR, Convert__GR641_0__FP641_1, 0, { MCK_GR64, MCK_FP64 }, 0},
  { 862 /* lgf */, SystemZ::LGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 866 /* lgfi */, SystemZ::LGFI, Convert__GR641_0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, 0},
  { 871 /* lgfr */, SystemZ::LGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, 0},
  { 876 /* lgfrl */, SystemZ::LGFRL, Convert__GR641_0__Imm1_1, 0, { MCK_GR64, MCK_Imm }, 0},
  { 882 /* lgh */, SystemZ::LGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 886 /* lghi */, SystemZ::LGHI, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, 0},
  { 891 /* lghr */, SystemZ::LGHR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 896 /* lghrl */, SystemZ::LGHRL, Convert__GR641_0__Imm1_1, 0, { MCK_GR64, MCK_Imm }, 0},
  { 902 /* lgr */, SystemZ::LGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 906 /* lgrl */, SystemZ::LGRL, Convert__GR641_0__Imm1_1, 0, { MCK_GR64, MCK_Imm }, 0},
  { 911 /* lh */, SystemZ::LH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 914 /* lhi */, SystemZ::LHI, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, 0},
  { 918 /* lhr */, SystemZ::LHR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 922 /* lhrl */, SystemZ::LHRL, Convert__GR321_0__Imm1_1, 0, { MCK_GR32, MCK_Imm }, 0},
  { 927 /* lhy */, SystemZ::LHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 931 /* llc */, SystemZ::LLC, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 935 /* llcr */, SystemZ::LLCR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 940 /* llgc */, SystemZ::LLGC, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 945 /* llgcr */, SystemZ::LLGCR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 951 /* llgf */, SystemZ::LLGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 956 /* llgfr */, SystemZ::LLGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, 0},
  { 962 /* llgfrl */, SystemZ::LLGFRL, Convert__GR641_0__Imm1_1, 0, { MCK_GR64, MCK_Imm }, 0},
  { 969 /* llgh */, SystemZ::LLGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 974 /* llghr */, SystemZ::LLGHR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 980 /* llghrl */, SystemZ::LLGHRL, Convert__GR641_0__Imm1_1, 0, { MCK_GR64, MCK_Imm }, 0},
  { 987 /* llh */, SystemZ::LLH, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 991 /* llhr */, SystemZ::LLHR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 996 /* llhrl */, SystemZ::LLHRL, Convert__GR321_0__Imm1_1, 0, { MCK_GR32, MCK_Imm }, 0},
  { 1002 /* llihf */, SystemZ::LLIHF, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, 0},
  { 1008 /* llihh */, SystemZ::LLIHH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 1014 /* llihl */, SystemZ::LLIHL, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 1020 /* llilf */, SystemZ::LLILF, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, 0},
  { 1026 /* llilh */, SystemZ::LLILH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 1032 /* llill */, SystemZ::LLILL, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 1038 /* lmg */, SystemZ::LMG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, 0},
  { 1042 /* lndbr */, SystemZ::LNDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, 0},
  { 1048 /* lnebr */, SystemZ::LNEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, 0},
  { 1054 /* lnxbr */, SystemZ::LNXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, 0},
  { 1060 /* lpdbr */, SystemZ::LPDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, 0},
  { 1066 /* lpebr */, SystemZ::LPEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, 0},
  { 1072 /* lpxbr */, SystemZ::LPXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, 0},
  { 1078 /* lr */, SystemZ::LR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 1081 /* lrl */, SystemZ::LRL, Convert__GR321_0__Imm1_1, 0, { MCK_GR32, MCK_Imm }, 0},
  { 1085 /* lrv */, SystemZ::LRV, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 1089 /* lrvg */, SystemZ::LRVG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1094 /* lrvgr */, SystemZ::LRVGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 1100 /* lrvr */, SystemZ::LRVR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 1105 /* lxdb */, SystemZ::LXDB, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, 0},
  { 1110 /* lxdbr */, SystemZ::LXDBR, Convert__FP1281_0__FP641_1, 0, { MCK_FP128, MCK_FP64 }, 0},
  { 1116 /* lxeb */, SystemZ::LXEB, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, 0},
  { 1121 /* lxebr */, SystemZ::LXEBR, Convert__FP1281_0__FP321_1, 0, { MCK_FP128, MCK_FP32 }, 0},
  { 1127 /* lxr */, SystemZ::LXR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, 0},
  { 1131 /* ly */, SystemZ::LY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 1134 /* lzdr */, SystemZ::LZDR, Convert__FP641_0, 0, { MCK_FP64 }, 0},
  { 1139 /* lzer */, SystemZ::LZER, Convert__FP321_0, 0, { MCK_FP32 }, 0},
  { 1144 /* lzxr */, SystemZ::LZXR, Convert__FP1281_0, 0, { MCK_FP128 }, 0},
  { 1149 /* madb */, SystemZ::MADB, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, 0},
  { 1154 /* madbr */, SystemZ::MADBR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, 0},
  { 1160 /* maeb */, SystemZ::MAEB, Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2, 0, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, 0},
  { 1165 /* maebr */, SystemZ::MAEBR, Convert__FP321_0__Tie0__FP321_1__FP321_2, 0, { MCK_FP32, MCK_FP32, MCK_FP32 }, 0},
  { 1171 /* mdb */, SystemZ::MDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, 0},
  { 1175 /* mdbr */, SystemZ::MDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, 0},
  { 1180 /* mdeb */, SystemZ::MDEB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, 0},
  { 1185 /* mdebr */, SystemZ::MDEBR, Convert__FP641_0__Tie0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, 0},
  { 1191 /* meeb */, SystemZ::MEEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, 0},
  { 1196 /* meebr */, SystemZ::MEEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, 0},
  { 1202 /* mghi */, SystemZ::MGHI, Convert__GR641_0__Tie0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, 0},
  { 1207 /* mh */, SystemZ::MH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 1210 /* mhi */, SystemZ::MHI, Convert__GR321_0__Tie0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, 0},
  { 1214 /* mhy */, SystemZ::MHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 1218 /* mlg */, SystemZ::MLG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, 0},
  { 1222 /* mlgr */, SystemZ::MLGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, 0},
  { 1227 /* ms */, SystemZ::MS, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 1230 /* msdb */, SystemZ::MSDB, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, 0},
  { 1235 /* msdbr */, SystemZ::MSDBR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, 0},
  { 1241 /* mseb */, SystemZ::MSEB, Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2, 0, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, 0},
  { 1246 /* msebr */, SystemZ::MSEBR, Convert__FP321_0__Tie0__FP321_1__FP321_2, 0, { MCK_FP32, MCK_FP32, MCK_FP32 }, 0},
  { 1252 /* msfi */, SystemZ::MSFI, Convert__GR321_0__Tie0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, 0},
  { 1257 /* msg */, SystemZ::MSG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1261 /* msgf */, SystemZ::MSGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1266 /* msgfi */, SystemZ::MSGFI, Convert__GR641_0__Tie0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, 0},
  { 1272 /* msgfr */, SystemZ::MSGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, 0},
  { 1278 /* msgr */, SystemZ::MSGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 1283 /* msr */, SystemZ::MSR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 1287 /* msy */, SystemZ::MSY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 1291 /* mvghi */, SystemZ::MVGHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, 0},
  { 1297 /* mvhhi */, SystemZ::MVHHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, 0},
  { 1303 /* mvhi */, SystemZ::MVHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, 0},
  { 1308 /* mvi */, SystemZ::MVI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, 0},
  { 1312 /* mviy */, SystemZ::MVIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, 0},
  { 1317 /* mxbr */, SystemZ::MXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, 0},
  { 1322 /* mxdb */, SystemZ::MXDB, Convert__FP1281_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, 0},
  { 1327 /* mxdbr */, SystemZ::MXDBR, Convert__FP1281_0__Tie0__FP641_1, 0, { MCK_FP128, MCK_FP64 }, 0},
  { 1333 /* n */, SystemZ::N, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 1335 /* ng */, SystemZ::NG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1338 /* ngr */, SystemZ::NGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 1342 /* ni */, SystemZ::NI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, 0},
  { 1345 /* nihf */, SystemZ::NIHF, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, 0},
  { 1350 /* nihh */, SystemZ::NIHH, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 1355 /* nihl */, SystemZ::NIHL, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 1360 /* nilf */, SystemZ::NILF, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, 0},
  { 1365 /* nilh */, SystemZ::NILH, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 1370 /* nill */, SystemZ::NILL, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 1375 /* niy */, SystemZ::NIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, 0},
  { 1379 /* nr */, SystemZ::NR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 1382 /* ny */, SystemZ::NY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 1385 /* o */, SystemZ::O, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 1387 /* og */, SystemZ::OG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1390 /* ogr */, SystemZ::OGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 1394 /* oi */, SystemZ::OI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, 0},
  { 1397 /* oihf */, SystemZ::OIHF, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, 0},
  { 1402 /* oihh */, SystemZ::OIHH, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 1407 /* oihl */, SystemZ::OIHL, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 1412 /* oilf */, SystemZ::OILF, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, 0},
  { 1417 /* oilh */, SystemZ::OILH, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 1422 /* oill */, SystemZ::OILL, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, 0},
  { 1427 /* oiy */, SystemZ::OIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, 0},
  { 1431 /* or */, SystemZ::OR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 1434 /* oy */, SystemZ::OY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 1437 /* risbg */, SystemZ::RISBG, Convert__GR641_0__Tie0__GR641_1__U6Imm1_2__U6Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U6Imm, MCK_U6Imm, MCK_U6Imm }, 0},
  { 1443 /* rll */, SystemZ::RLL, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, 0},
  { 1447 /* rllg */, SystemZ::RLLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, 0},
  { 1452 /* s */, SystemZ::S, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 1454 /* sdb */, SystemZ::SDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, 0},
  { 1458 /* sdbr */, SystemZ::SDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, 0},
  { 1463 /* seb */, SystemZ::SEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, 0},
  { 1467 /* sebr */, SystemZ::SEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, 0},
  { 1472 /* sg */, SystemZ::SG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1475 /* sgf */, SystemZ::SGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1479 /* sgfr */, SystemZ::SGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, 0},
  { 1484 /* sgr */, SystemZ::SGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 1488 /* sl */, SystemZ::SL, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 1491 /* slb */, SystemZ::SLB, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 1495 /* slbg */, SystemZ::SLBG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1500 /* slbgr */, SystemZ::SLGBR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 1506 /* slbr */, SystemZ::SLBR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 1511 /* slfi */, SystemZ::SLFI, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, 0},
  { 1516 /* slg */, SystemZ::SLG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1520 /* slgf */, SystemZ::SLGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1525 /* slgfi */, SystemZ::SLGFI, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, 0},
  { 1531 /* slgfr */, SystemZ::SLGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, 0},
  { 1537 /* slgr */, SystemZ::SLGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 1542 /* sll */, SystemZ::SLL, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, 0},
  { 1546 /* sllg */, SystemZ::SLLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, 0},
  { 1551 /* slr */, SystemZ::SLR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 1555 /* sly */, SystemZ::SLY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 1559 /* sqdb */, SystemZ::SQDB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, 0},
  { 1564 /* sqdbr */, SystemZ::SQDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, 0},
  { 1570 /* sqeb */, SystemZ::SQEB, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, 0},
  { 1575 /* sqebr */, SystemZ::SQEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, 0},
  { 1581 /* sqxbr */, SystemZ::SQXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, 0},
  { 1587 /* sr */, SystemZ::SR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 1590 /* sra */, SystemZ::SRA, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, 0},
  { 1594 /* srag */, SystemZ::SRAG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, 0},
  { 1599 /* srl */, SystemZ::SRL, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, 0},
  { 1603 /* srlg */, SystemZ::SRLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, 0},
  { 1608 /* st */, SystemZ::ST, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, 0},
  { 1611 /* stc */, SystemZ::STC, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, 0},
  { 1615 /* stcy */, SystemZ::STCY, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1620 /* std */, SystemZ::STD, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, 0},
  { 1624 /* stdy */, SystemZ::STDY, Convert__FP641_0__BDXAddr64Disp203_1, 0, { MCK_FP64, MCK_BDXAddr64Disp20 }, 0},
  { 1629 /* ste */, SystemZ::STE, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, 0},
  { 1633 /* stey */, SystemZ::STEY, Convert__FP321_0__BDXAddr64Disp203_1, 0, { MCK_FP32, MCK_BDXAddr64Disp20 }, 0},
  { 1638 /* stg */, SystemZ::STG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1642 /* stgrl */, SystemZ::STGRL, Convert__GR641_0__Imm1_1, 0, { MCK_GR64, MCK_Imm }, 0},
  { 1648 /* sth */, SystemZ::STH, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, 0},
  { 1652 /* sthrl */, SystemZ::STHRL, Convert__GR641_0__Imm1_1, 0, { MCK_GR64, MCK_Imm }, 0},
  { 1658 /* sthy */, SystemZ::STHY, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1663 /* stmg */, SystemZ::STMG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, 0},
  { 1668 /* strl */, SystemZ::STRL, Convert__GR641_0__Imm1_1, 0, { MCK_GR64, MCK_Imm }, 0},
  { 1673 /* strv */, SystemZ::STRV, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 1678 /* strvg */, SystemZ::STRVG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1684 /* sty */, SystemZ::STY, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1688 /* sxbr */, SystemZ::SXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, 0},
  { 1693 /* sy */, SystemZ::SY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
  { 1696 /* x */, SystemZ::X, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, 0},
  { 1698 /* xg */, SystemZ::XG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, 0},
  { 1701 /* xgr */, SystemZ::XGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, 0},
  { 1705 /* xi */, SystemZ::XI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, 0},
  { 1708 /* xihf */, SystemZ::XIHF, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, 0},
  { 1713 /* xilf */, SystemZ::XILF, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, 0},
  { 1718 /* xiy */, SystemZ::XIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, 0},
  { 1722 /* xr */, SystemZ::XR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, 0},
  { 1725 /* xy */, SystemZ::XY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, 0},
};

bool SystemZAsmParser::
mnemonicIsValid(StringRef Mnemonic) {
  // Search the table.
  std::pair<const MatchEntry*, const MatchEntry*> MnemonicRange =
    std::equal_range(MatchTable, MatchTable+369, Mnemonic, LessOpcode());
  return MnemonicRange.first != MnemonicRange.second;
}

unsigned SystemZAsmParser::
MatchInstructionImpl(const SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                     MCInst &Inst,
unsigned &ErrorInfo, bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 6) {
    ErrorInfo = 6;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  unsigned AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((SystemZOperand*)Operands[0])->getToken();

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
    std::equal_range(MatchTable, MatchTable+369, Mnemonic, LessOpcode());

  // Return a more specific error code if no mnemonics match.
  if (MnemonicRange.first == MnemonicRange.second)
    return Match_MnemonicFail;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());
    if (VariantID != it->AsmVariantID) continue;
    bool OperandsValid = true;
    for (unsigned i = 0; i != 5; ++i) {
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
    uint8_t RequiredFeatures;
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

static const OperandMatchEntry OperandMatchTable[499] = {
  /* Operand List Mask, Mnemonic, Operand Class, Features */
  { 0, 0 /* a */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 0 /* a */, MCK_GR32, 1 /* 0 */ },
  { 0, 2 /* adb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2 /* adb */, MCK_FP64, 1 /* 0 */ },
  { 0, 6 /* adbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 11 /* aeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 11 /* aeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 15 /* aebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 20 /* afi */, MCK_GR32, 1 /* 0 */ },
  { 0, 24 /* ag */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 24 /* ag */, MCK_GR64, 1 /* 0 */ },
  { 0, 27 /* agf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 27 /* agf */, MCK_GR64, 1 /* 0 */ },
  { 0, 31 /* agfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 36 /* agfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 36 /* agfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 41 /* aghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 46 /* agr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 50 /* agsi */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 55 /* ah */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 55 /* ah */, MCK_GR32, 1 /* 0 */ },
  { 0, 58 /* ahi */, MCK_GR32, 1 /* 0 */ },
  { 0, 62 /* ahy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 62 /* ahy */, MCK_GR32, 1 /* 0 */ },
  { 0, 66 /* al */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 66 /* al */, MCK_GR32, 1 /* 0 */ },
  { 0, 69 /* alc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 69 /* alc */, MCK_GR32, 1 /* 0 */ },
  { 0, 73 /* alcg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 73 /* alcg */, MCK_GR64, 1 /* 0 */ },
  { 0, 78 /* alcgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 84 /* alcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 89 /* alfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 94 /* alg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 94 /* alg */, MCK_GR64, 1 /* 0 */ },
  { 0, 98 /* algf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 98 /* algf */, MCK_GR64, 1 /* 0 */ },
  { 0, 103 /* algfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 109 /* algfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 109 /* algfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 115 /* algr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 120 /* alr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 124 /* aly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 124 /* aly */, MCK_GR32, 1 /* 0 */ },
  { 0, 128 /* ar */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 131 /* asi */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 135 /* axbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 140 /* ay */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 140 /* ay */, MCK_GR32, 1 /* 0 */ },
  { 0, 143 /* basr */, MCK_ADDR64, 2 /* 1 */ },
  { 0, 143 /* basr */, MCK_GR64, 1 /* 0 */ },
  { 0, 148 /* br */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 151 /* bras */, MCK_GR64, 1 /* 0 */ },
  { 0, 156 /* brasl */, MCK_GR64, 1 /* 0 */ },
  { 0, 171 /* c */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 171 /* c */, MCK_GR32, 1 /* 0 */ },
  { 0, 173 /* cdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 173 /* cdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 177 /* cdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 182 /* cdfbr */, MCK_FP64, 1 /* 0 */ },
  { 0, 182 /* cdfbr */, MCK_GR32, 2 /* 1 */ },
  { 0, 188 /* cdgbr */, MCK_FP64, 1 /* 0 */ },
  { 0, 188 /* cdgbr */, MCK_GR64, 2 /* 1 */ },
  { 0, 194 /* ceb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 194 /* ceb */, MCK_FP32, 1 /* 0 */ },
  { 0, 198 /* cebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 203 /* cefbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 203 /* cefbr */, MCK_GR32, 2 /* 1 */ },
  { 0, 209 /* cegbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 209 /* cegbr */, MCK_GR64, 2 /* 1 */ },
  { 0, 215 /* cfdbr */, MCK_FP64, 4 /* 2 */ },
  { 0, 215 /* cfdbr */, MCK_GR32, 1 /* 0 */ },
  { 0, 221 /* cfebr */, MCK_FP32, 4 /* 2 */ },
  { 0, 221 /* cfebr */, MCK_GR32, 1 /* 0 */ },
  { 0, 227 /* cfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 231 /* cfxbr */, MCK_FP128, 4 /* 2 */ },
  { 0, 231 /* cfxbr */, MCK_GR32, 1 /* 0 */ },
  { 0, 237 /* cg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 237 /* cg */, MCK_GR64, 1 /* 0 */ },
  { 0, 240 /* cgdbr */, MCK_FP64, 4 /* 2 */ },
  { 0, 240 /* cgdbr */, MCK_GR64, 1 /* 0 */ },
  { 0, 246 /* cgebr */, MCK_FP32, 4 /* 2 */ },
  { 0, 246 /* cgebr */, MCK_GR64, 1 /* 0 */ },
  { 0, 252 /* cgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 252 /* cgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 256 /* cgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 261 /* cgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 261 /* cgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 266 /* cgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 272 /* cgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 272 /* cgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 276 /* cghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 281 /* cghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 287 /* cghsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 293 /* cgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 297 /* cgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 302 /* cgxbr */, MCK_FP128, 4 /* 2 */ },
  { 0, 302 /* cgxbr */, MCK_GR64, 1 /* 0 */ },
  { 0, 308 /* ch */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 308 /* ch */, MCK_GR32, 1 /* 0 */ },
  { 0, 311 /* chhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 317 /* chi */, MCK_GR32, 1 /* 0 */ },
  { 0, 321 /* chrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 326 /* chsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 331 /* chy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 331 /* chy */, MCK_GR32, 1 /* 0 */ },
  { 0, 335 /* cl */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 335 /* cl */, MCK_GR32, 1 /* 0 */ },
  { 0, 338 /* clfhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 345 /* clfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 350 /* clg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 350 /* clg */, MCK_GR64, 1 /* 0 */ },
  { 0, 354 /* clgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 354 /* clgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 359 /* clgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 365 /* clgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 365 /* clgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 371 /* clgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 378 /* clghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 385 /* clghsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 392 /* clgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 397 /* clgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 403 /* clhhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 410 /* clhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 416 /* cli */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 420 /* cliy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 425 /* clr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 429 /* clrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 434 /* cly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 434 /* cly */, MCK_GR32, 1 /* 0 */ },
  { 0, 438 /* cpsdr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 444 /* cr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 447 /* crl */, MCK_GR32, 1 /* 0 */ },
  { 0, 451 /* cs */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 451 /* cs */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 454 /* csg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 454 /* csg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 458 /* csy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 458 /* csy */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 462 /* cxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 467 /* cxfbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 467 /* cxfbr */, MCK_GR32, 2 /* 1 */ },
  { 0, 473 /* cxgbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 473 /* cxgbr */, MCK_GR64, 2 /* 1 */ },
  { 0, 479 /* cy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 479 /* cy */, MCK_GR32, 1 /* 0 */ },
  { 0, 482 /* ddb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 482 /* ddb */, MCK_FP64, 1 /* 0 */ },
  { 0, 486 /* ddbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 491 /* deb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 491 /* deb */, MCK_FP32, 1 /* 0 */ },
  { 0, 495 /* debr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 500 /* dl */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 500 /* dl */, MCK_GR128, 1 /* 0 */ },
  { 0, 503 /* dlg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 503 /* dlg */, MCK_GR128, 1 /* 0 */ },
  { 0, 507 /* dlgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 507 /* dlgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 512 /* dlr */, MCK_GR128, 1 /* 0 */ },
  { 0, 512 /* dlr */, MCK_GR32, 2 /* 1 */ },
  { 0, 516 /* dsg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 516 /* dsg */, MCK_GR128, 1 /* 0 */ },
  { 0, 520 /* dsgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 520 /* dsgf */, MCK_GR128, 1 /* 0 */ },
  { 0, 525 /* dsgfr */, MCK_GR128, 1 /* 0 */ },
  { 0, 525 /* dsgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 531 /* dsgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 531 /* dsgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 536 /* dxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 541 /* ear */, MCK_AccessReg, 2 /* 1 */ },
  { 0, 541 /* ear */, MCK_GR32, 1 /* 0 */ },
  { 0, 545 /* fidbr */, MCK_FP64, 5 /* 0, 2 */ },
  { 0, 551 /* fiebr */, MCK_FP32, 5 /* 0, 2 */ },
  { 0, 557 /* fixbr */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 563 /* flogr */, MCK_GR128, 1 /* 0 */ },
  { 0, 563 /* flogr */, MCK_GR64, 2 /* 1 */ },
  { 0, 569 /* ic */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 569 /* ic */, MCK_GR64, 1 /* 0 */ },
  { 0, 572 /* icy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 572 /* icy */, MCK_GR64, 1 /* 0 */ },
  { 0, 576 /* iihf */, MCK_GR64, 1 /* 0 */ },
  { 0, 581 /* iihh */, MCK_GR64, 1 /* 0 */ },
  { 0, 586 /* iihl */, MCK_GR64, 1 /* 0 */ },
  { 0, 591 /* iilf */, MCK_GR64, 1 /* 0 */ },
  { 0, 596 /* iilh */, MCK_GR64, 1 /* 0 */ },
  { 0, 601 /* iill */, MCK_GR64, 1 /* 0 */ },
  { 0, 735 /* l */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 735 /* l */, MCK_GR32, 1 /* 0 */ },
  { 0, 737 /* la */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 737 /* la */, MCK_GR64, 1 /* 0 */ },
  { 0, 740 /* larl */, MCK_GR64, 1 /* 0 */ },
  { 0, 745 /* lay */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 745 /* lay */, MCK_GR64, 1 /* 0 */ },
  { 0, 749 /* lb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 749 /* lb */, MCK_GR32, 1 /* 0 */ },
  { 0, 752 /* lbr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 756 /* lcdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 762 /* lcebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 768 /* lcgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 768 /* lcgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 774 /* lcgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 779 /* lcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 783 /* lcxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 789 /* ld */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 789 /* ld */, MCK_FP64, 1 /* 0 */ },
  { 0, 792 /* ldeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 792 /* ldeb */, MCK_FP64, 1 /* 0 */ },
  { 0, 797 /* ldebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 797 /* ldebr */, MCK_FP64, 1 /* 0 */ },
  { 0, 803 /* ldgr */, MCK_FP64, 1 /* 0 */ },
  { 0, 803 /* ldgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 808 /* ldr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 812 /* ldxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 818 /* ldy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 818 /* ldy */, MCK_FP64, 1 /* 0 */ },
  { 0, 822 /* le */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 822 /* le */, MCK_FP32, 1 /* 0 */ },
  { 0, 825 /* ledbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 825 /* ledbr */, MCK_FP64, 2 /* 1 */ },
  { 0, 831 /* ler */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 835 /* lexbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 841 /* ley */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 841 /* ley */, MCK_FP32, 1 /* 0 */ },
  { 0, 845 /* lg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 845 /* lg */, MCK_GR64, 1 /* 0 */ },
  { 0, 848 /* lgb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 848 /* lgb */, MCK_GR64, 1 /* 0 */ },
  { 0, 852 /* lgbr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 857 /* lgdr */, MCK_FP64, 2 /* 1 */ },
  { 0, 857 /* lgdr */, MCK_GR64, 1 /* 0 */ },
  { 0, 862 /* lgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 862 /* lgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 866 /* lgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 871 /* lgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 871 /* lgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 876 /* lgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 882 /* lgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 882 /* lgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 886 /* lghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 891 /* lghr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 896 /* lghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 902 /* lgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 906 /* lgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 911 /* lh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 911 /* lh */, MCK_GR32, 1 /* 0 */ },
  { 0, 914 /* lhi */, MCK_GR32, 1 /* 0 */ },
  { 0, 918 /* lhr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 922 /* lhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 927 /* lhy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 927 /* lhy */, MCK_GR32, 1 /* 0 */ },
  { 0, 931 /* llc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 931 /* llc */, MCK_GR32, 1 /* 0 */ },
  { 0, 935 /* llcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 940 /* llgc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 940 /* llgc */, MCK_GR64, 1 /* 0 */ },
  { 0, 945 /* llgcr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 951 /* llgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 951 /* llgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 956 /* llgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 956 /* llgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 962 /* llgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 969 /* llgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 969 /* llgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 974 /* llghr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 980 /* llghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 987 /* llh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 987 /* llh */, MCK_GR32, 1 /* 0 */ },
  { 0, 991 /* llhr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 996 /* llhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1002 /* llihf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1008 /* llihh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1014 /* llihl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1020 /* llilf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1026 /* llilh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1032 /* llill */, MCK_GR64, 1 /* 0 */ },
  { 0, 1038 /* lmg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 1038 /* lmg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1042 /* lndbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1048 /* lnebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1054 /* lnxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1060 /* lpdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1066 /* lpebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1072 /* lpxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1078 /* lr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1081 /* lrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1085 /* lrv */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1085 /* lrv */, MCK_GR32, 1 /* 0 */ },
  { 0, 1089 /* lrvg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1089 /* lrvg */, MCK_GR64, 1 /* 0 */ },
  { 0, 1094 /* lrvgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1100 /* lrvr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1105 /* lxdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1105 /* lxdb */, MCK_FP128, 1 /* 0 */ },
  { 0, 1110 /* lxdbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 1110 /* lxdbr */, MCK_FP64, 2 /* 1 */ },
  { 0, 1116 /* lxeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1116 /* lxeb */, MCK_FP128, 1 /* 0 */ },
  { 0, 1121 /* lxebr */, MCK_FP128, 1 /* 0 */ },
  { 0, 1121 /* lxebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 1127 /* lxr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1131 /* ly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1131 /* ly */, MCK_GR32, 1 /* 0 */ },
  { 0, 1134 /* lzdr */, MCK_FP64, 1 /* 0 */ },
  { 0, 1139 /* lzer */, MCK_FP32, 1 /* 0 */ },
  { 0, 1144 /* lzxr */, MCK_FP128, 1 /* 0 */ },
  { 0, 1149 /* madb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 1149 /* madb */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1154 /* madbr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 1160 /* maeb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 1160 /* maeb */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1165 /* maebr */, MCK_FP32, 7 /* 0, 1, 2 */ },
  { 0, 1171 /* mdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1171 /* mdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 1175 /* mdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1180 /* mdeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1180 /* mdeb */, MCK_FP64, 1 /* 0 */ },
  { 0, 1185 /* mdebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 1185 /* mdebr */, MCK_FP64, 1 /* 0 */ },
  { 0, 1191 /* meeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1191 /* meeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 1196 /* meebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1202 /* mghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 1207 /* mh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1207 /* mh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1210 /* mhi */, MCK_GR32, 1 /* 0 */ },
  { 0, 1214 /* mhy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1214 /* mhy */, MCK_GR32, 1 /* 0 */ },
  { 0, 1218 /* mlg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1218 /* mlg */, MCK_GR128, 1 /* 0 */ },
  { 0, 1222 /* mlgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 1222 /* mlgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 1227 /* ms */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1227 /* ms */, MCK_GR32, 1 /* 0 */ },
  { 0, 1230 /* msdb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 1230 /* msdb */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1235 /* msdbr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 1241 /* mseb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 1241 /* mseb */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1246 /* msebr */, MCK_FP32, 7 /* 0, 1, 2 */ },
  { 0, 1252 /* msfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 1257 /* msg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1257 /* msg */, MCK_GR64, 1 /* 0 */ },
  { 0, 1261 /* msgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1261 /* msgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1266 /* msgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 1272 /* msgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1272 /* msgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1278 /* msgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1283 /* msr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1287 /* msy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1287 /* msy */, MCK_GR32, 1 /* 0 */ },
  { 0, 1291 /* mvghi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1297 /* mvhhi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1303 /* mvhi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1308 /* mvi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1312 /* mviy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 1317 /* mxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1322 /* mxdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1322 /* mxdb */, MCK_FP128, 1 /* 0 */ },
  { 0, 1327 /* mxdbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 1327 /* mxdbr */, MCK_FP64, 2 /* 1 */ },
  { 0, 1333 /* n */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1333 /* n */, MCK_GR32, 1 /* 0 */ },
  { 0, 1335 /* ng */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1335 /* ng */, MCK_GR64, 1 /* 0 */ },
  { 0, 1338 /* ngr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1342 /* ni */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1345 /* nihf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1350 /* nihh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1355 /* nihl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1360 /* nilf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1365 /* nilh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1370 /* nill */, MCK_GR64, 1 /* 0 */ },
  { 0, 1375 /* niy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 1379 /* nr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1382 /* ny */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1382 /* ny */, MCK_GR32, 1 /* 0 */ },
  { 0, 1385 /* o */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1385 /* o */, MCK_GR32, 1 /* 0 */ },
  { 0, 1387 /* og */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1387 /* og */, MCK_GR64, 1 /* 0 */ },
  { 0, 1390 /* ogr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1394 /* oi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1397 /* oihf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1402 /* oihh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1407 /* oihl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1412 /* oilf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1417 /* oilh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1422 /* oill */, MCK_GR64, 1 /* 0 */ },
  { 0, 1427 /* oiy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 1431 /* or */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1434 /* oy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1434 /* oy */, MCK_GR32, 1 /* 0 */ },
  { 0, 1437 /* risbg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1443 /* rll */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 1443 /* rll */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1447 /* rllg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 1447 /* rllg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1452 /* s */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1452 /* s */, MCK_GR32, 1 /* 0 */ },
  { 0, 1454 /* sdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1454 /* sdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 1458 /* sdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1463 /* seb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1463 /* seb */, MCK_FP32, 1 /* 0 */ },
  { 0, 1467 /* sebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1472 /* sg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1472 /* sg */, MCK_GR64, 1 /* 0 */ },
  { 0, 1475 /* sgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1475 /* sgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1479 /* sgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1479 /* sgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1484 /* sgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1488 /* sl */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1488 /* sl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1491 /* slb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1491 /* slb */, MCK_GR32, 1 /* 0 */ },
  { 0, 1495 /* slbg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1495 /* slbg */, MCK_GR64, 1 /* 0 */ },
  { 0, 1500 /* slbgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1506 /* slbr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1511 /* slfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 1516 /* slg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1516 /* slg */, MCK_GR64, 1 /* 0 */ },
  { 0, 1520 /* slgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1520 /* slgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1525 /* slgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 1531 /* slgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1531 /* slgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1537 /* slgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1542 /* sll */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 1542 /* sll */, MCK_GR32, 1 /* 0 */ },
  { 0, 1546 /* sllg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 1546 /* sllg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1551 /* slr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1555 /* sly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1555 /* sly */, MCK_GR32, 1 /* 0 */ },
  { 0, 1559 /* sqdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1559 /* sqdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 1564 /* sqdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1570 /* sqeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1570 /* sqeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 1575 /* sqebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1581 /* sqxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1587 /* sr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1590 /* sra */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 1590 /* sra */, MCK_GR32, 1 /* 0 */ },
  { 0, 1594 /* srag */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 1594 /* srag */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1599 /* srl */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 1599 /* srl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1603 /* srlg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 1603 /* srlg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1608 /* st */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1608 /* st */, MCK_GR64, 1 /* 0 */ },
  { 0, 1611 /* stc */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1611 /* stc */, MCK_GR64, 1 /* 0 */ },
  { 0, 1615 /* stcy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1615 /* stcy */, MCK_GR64, 1 /* 0 */ },
  { 0, 1620 /* std */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1620 /* std */, MCK_FP64, 1 /* 0 */ },
  { 0, 1624 /* stdy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1624 /* stdy */, MCK_FP64, 1 /* 0 */ },
  { 0, 1629 /* ste */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1629 /* ste */, MCK_FP32, 1 /* 0 */ },
  { 0, 1633 /* stey */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1633 /* stey */, MCK_FP32, 1 /* 0 */ },
  { 0, 1638 /* stg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1638 /* stg */, MCK_GR64, 1 /* 0 */ },
  { 0, 1642 /* stgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1648 /* sth */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1648 /* sth */, MCK_GR64, 1 /* 0 */ },
  { 0, 1652 /* sthrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1658 /* sthy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1658 /* sthy */, MCK_GR64, 1 /* 0 */ },
  { 0, 1663 /* stmg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 1663 /* stmg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1668 /* strl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1673 /* strv */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1673 /* strv */, MCK_GR32, 1 /* 0 */ },
  { 0, 1678 /* strvg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1678 /* strvg */, MCK_GR64, 1 /* 0 */ },
  { 0, 1684 /* sty */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1684 /* sty */, MCK_GR64, 1 /* 0 */ },
  { 0, 1688 /* sxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1693 /* sy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1693 /* sy */, MCK_GR32, 1 /* 0 */ },
  { 0, 1696 /* x */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1696 /* x */, MCK_GR32, 1 /* 0 */ },
  { 0, 1698 /* xg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1698 /* xg */, MCK_GR64, 1 /* 0 */ },
  { 0, 1701 /* xgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1705 /* xi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 1708 /* xihf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1713 /* xilf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1718 /* xiy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 1722 /* xr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1725 /* xy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1725 /* xy */, MCK_GR32, 1 /* 0 */ },
};

SystemZAsmParser::OperandMatchResultTy SystemZAsmParser::
tryCustomParseOperand(SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_ADDR128:
    return parseADDR128(Operands);
  case MCK_ADDR32:
    return parseADDR32(Operands);
  case MCK_ADDR64:
    return parseADDR64(Operands);
  case MCK_AccessReg:
    return parseAccessReg(Operands);
  case MCK_BDAddr32Disp12:
    return parseBDAddr32(Operands);
  case MCK_BDAddr32Disp20:
    return parseBDAddr32(Operands);
  case MCK_BDAddr64Disp12:
    return parseBDAddr64(Operands);
  case MCK_BDAddr64Disp20:
    return parseBDAddr64(Operands);
  case MCK_BDXAddr64Disp12:
    return parseBDXAddr64(Operands);
  case MCK_BDXAddr64Disp20:
    return parseBDXAddr64(Operands);
  case MCK_FP128:
    return parseFP128(Operands);
  case MCK_FP32:
    return parseFP32(Operands);
  case MCK_FP64:
    return parseFP64(Operands);
  case MCK_GR128:
    return parseGR128(Operands);
  case MCK_GR32:
    return parseGR32(Operands);
  case MCK_GR64:
    return parseGR64(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

SystemZAsmParser::OperandMatchResultTy SystemZAsmParser::
MatchOperandParserImpl(SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                       StringRef Mnemonic) {
  // Get the current feature set.
  unsigned AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size()-1;
  // Search the table.
  std::pair<const OperandMatchEntry*, const OperandMatchEntry*> MnemonicRange =
    std::equal_range(OperandMatchTable, OperandMatchTable+499, Mnemonic,
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

