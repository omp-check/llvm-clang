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
  CVT_95_addRegG8RCOperands,
  CVT_95_addRegGPRCOperands,
  CVT_95_addRegG8RCNoX0Operands,
  CVT_95_addImmOperands,
  CVT_95_addRegGPRCNoR0Operands,
  CVT_imm_76,
  CVT_95_addRegCRRCOperands,
  CVT_imm_4,
  CVT_imm_44,
  CVT_imm_36,
  CVT_imm_12,
  CVT_imm_68,
  CVT_imm_100,
  CVT_imm_108,
  CVT_95_addRegCRBITRCOperands,
  CVT_95_addRegGxRCNoR0Operands,
  CVT_95_addRegGxRCOperands,
  CVT_95_addRegF4RCOperands,
  CVT_95_addRegF8RCOperands,
  CVT_95_addDispRIOperands,
  CVT_imm_0,
  CVT_95_addDispRIXOperands,
  CVT_95_addRegVRRCOperands,
  CVT_95_addCRBitMaskOperands,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2,
  Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3,
  Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3,
  Convert__RegG8RC1_0__RegG8RCNoX01_1__S16Imm1_2,
  Convert__RegGPRC1_0__RegGPRCNoR01_1__S16Imm1_2,
  Convert__RegG8RC1_0__RegG8RC1_1__S16Imm1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2,
  Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3,
  Convert__RegG8RC1_0__RegG8RC1_1,
  Convert__RegGPRC1_0__RegGPRC1_1,
  Convert__RegG8RC1_1__RegG8RC1_2,
  Convert__RegGPRC1_1__RegGPRC1_2,
  Convert__RegG8RC1_1__RegG8RC1_2__U16Imm1_3,
  Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3,
  Convert__Imm1_0,
  Convert_NoOperands,
  Convert__imm_76__RegCRRC1_0__Imm1_1,
  Convert__imm_76__RegCRRC1_0,
  Convert__imm_4__RegCRRC1_0__Imm1_1,
  Convert__imm_4__RegCRRC1_0,
  Convert__imm_44__RegCRRC1_0__Imm1_1,
  Convert__imm_44__RegCRRC1_0,
  Convert__imm_36__RegCRRC1_0__Imm1_1,
  Convert__imm_36__RegCRRC1_0,
  Convert__imm_12__RegCRRC1_0__Imm1_1,
  Convert__imm_12__RegCRRC1_0,
  Convert__imm_68__RegCRRC1_0__Imm1_1,
  Convert__imm_68__RegCRRC1_0,
  Convert__imm_100__RegCRRC1_0__Imm1_1,
  Convert__imm_100__RegCRRC1_0,
  Convert__imm_108__RegCRRC1_0__Imm1_1,
  Convert__imm_108__RegCRRC1_0,
  Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2,
  Convert__RegCRRC1_0__RegG8RC1_1__S16Imm1_2,
  Convert__RegCRRC1_0__RegG8RC1_1__U16Imm1_2,
  Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2,
  Convert__RegCRRC1_0__RegGPRC1_1__U16Imm1_2,
  Convert__RegCRRC1_0__RegGPRC1_1__S16Imm1_2,
  Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2,
  Convert__RegGxRCNoR01_0__RegGxRC1_1,
  Convert__RegG8RC1_0__RegGPRC1_1,
  Convert__RegG8RC1_1__RegGPRC1_2,
  Convert__RegF4RC1_0__RegF4RC1_1,
  Convert__RegF8RC1_0__RegF8RC1_1,
  Convert__RegF4RC1_1__RegF4RC1_2,
  Convert__RegF8RC1_1__RegF8RC1_2,
  Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2,
  Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3,
  Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2,
  Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3,
  Convert__RegF4RC1_0__RegF8RC1_1,
  Convert__RegF4RC1_1__RegF8RC1_2,
  Convert__RegCRRC1_0__RegF4RC1_1__RegF4RC1_2,
  Convert__RegCRRC1_0__RegF8RC1_1__RegF8RC1_2,
  Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3,
  Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4,
  Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3,
  Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4,
  Convert__RegF4RC1_0__RegF8RC1_1__RegF4RC1_2__RegF4RC1_3,
  Convert__RegF4RC1_1__RegF8RC1_2__RegF4RC1_3__RegF4RC1_4,
  Convert__RegG8RC1_0__RegG8RCNoX01_1__RegG8RC1_2__RegCRBITRC1_3,
  Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__RegCRBITRC1_3,
  Convert__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegG8RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegGPRC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegG8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegGPRC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2,
  Convert__RegG8RC1_0__imm_0__DispRIX1_1__RegGxRCNoR01_2,
  Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF8RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF4RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__RegF4RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_0__S16Imm1_1,
  Convert__RegGPRC1_0__S16Imm1_1,
  Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegCRRC1_0__RegCRRC1_1,
  Convert__RegG8RC1_0,
  Convert__RegGPRC1_0,
  Convert__RegF8RC1_0,
  Convert__RegGPRC1_0__CRBitMask1_1,
  Convert__RegVRRC1_0,
  Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1,
  Convert__CRBitMask1_0__RegG8RC1_1,
  Convert__CRBitMask1_0__RegGPRC1_1,
  Convert__U5Imm1_0,
  Convert__Imm1_0__RegF8RC1_1,
  Convert__RegGPRC1_1,
  Convert__RegG8RC1_0__RegG8RC1_1__U16Imm1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2,
  Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3,
  Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4,
  Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3,
  Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4,
  Convert__RegG8RC1_0__Tie0__RegG8RC1_1__U6Imm1_2__U6Imm1_3,
  Convert__RegG8RC1_1__Tie0__RegG8RC1_2__U6Imm1_3__U6Imm1_4,
  Convert__RegGPRC1_0__Tie0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegGPRC1_1__Tie0__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5,
  Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5,
  Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5,
  Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4,
  Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__U5Imm1_4__U5Imm1_5,
  Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2,
  Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3,
  Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2,
  Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2,
  Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3,
  Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3,
  Convert__imm_0__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__imm_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__imm_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__imm_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegG8RC1_1__RegGxRCNoR01_2__RegGxRC1_3,
  Convert__imm_0__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2,
  Convert__imm_0__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__imm_0__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__imm_0__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2,
  Convert__imm_0__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2,
  Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2,
  Convert__RegVRRC1_0__RegVRRC1_1,
  Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1,
  Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3,
  Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U5Imm1_3,
  Convert__RegVRRC1_0__S5Imm1_1,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][13] = {
  // Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegG8RCOperands, 4, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RCNoX01_1__S16Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCNoX0Operands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRCNoR01_1__S16Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCNoR0Operands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__S16Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U16Imm1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__imm_76__RegCRRC1_0__Imm1_1
  { CVT_imm_76, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_76__RegCRRC1_0
  { CVT_imm_76, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_4__RegCRRC1_0__Imm1_1
  { CVT_imm_4, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_4__RegCRRC1_0
  { CVT_imm_4, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_44__RegCRRC1_0__Imm1_1
  { CVT_imm_44, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_44__RegCRRC1_0
  { CVT_imm_44, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_36__RegCRRC1_0__Imm1_1
  { CVT_imm_36, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_36__RegCRRC1_0
  { CVT_imm_36, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_12__RegCRRC1_0__Imm1_1
  { CVT_imm_12, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_12__RegCRRC1_0
  { CVT_imm_12, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_68__RegCRRC1_0__Imm1_1
  { CVT_imm_68, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_68__RegCRRC1_0
  { CVT_imm_68, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_100__RegCRRC1_0__Imm1_1
  { CVT_imm_100, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_100__RegCRRC1_0
  { CVT_imm_100, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__imm_108__RegCRRC1_0__Imm1_1
  { CVT_imm_108, 0, CVT_95_addRegCRRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_108__RegCRRC1_0
  { CVT_imm_108, 0, CVT_95_addRegCRRCOperands, 1, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_1__S16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegG8RC1_1__U16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_1__U16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegGPRC1_1__S16Imm1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2
  { CVT_95_addRegCRBITRCOperands, 1, CVT_95_addRegCRBITRCOperands, 2, CVT_95_addRegCRBITRCOperands, 3, CVT_Done },
  // Convert__RegGxRCNoR01_0__RegGxRC1_1
  { CVT_95_addRegGxRCNoR0Operands, 1, CVT_95_addRegGxRCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_0__RegGPRC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_1__RegGPRC1_2
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__RegF4RC1_1
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_Done },
  // Convert__RegF8RC1_0__RegF8RC1_1
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__RegF4RC1_1__RegF4RC1_2
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_1__RegF8RC1_2
  { CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3
  { CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF8RCOperands, 4, CVT_Done },
  // Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_Done },
  // Convert__RegF4RC1_0__RegF8RC1_1
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__RegF4RC1_1__RegF8RC1_2
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegF4RC1_1__RegF4RC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegF8RC1_1__RegF8RC1_2
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF8RCOperands, 4, CVT_Done },
  // Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4
  { CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF8RCOperands, 4, CVT_95_addRegF8RCOperands, 5, CVT_Done },
  // Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_Done },
  // Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_95_addRegF4RCOperands, 5, CVT_Done },
  // Convert__RegF4RC1_0__RegF8RC1_1__RegF4RC1_2__RegF4RC1_3
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_95_addRegF4RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_Done },
  // Convert__RegF4RC1_1__RegF8RC1_2__RegF4RC1_3__RegF4RC1_4
  { CVT_95_addRegF4RCOperands, 2, CVT_95_addRegF8RCOperands, 3, CVT_95_addRegF4RCOperands, 4, CVT_95_addRegF4RCOperands, 5, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RCNoX01_1__RegG8RC1_2__RegCRBITRC1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCNoX0Operands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegCRBITRCOperands, 4, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__RegCRBITRC1_3
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCNoR0Operands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegCRBITRCOperands, 4, CVT_Done },
  // Convert__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addDispRIOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addDispRIOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegG8RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_0, 0, CVT_95_addDispRIOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegGPRC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_0, 0, CVT_95_addDispRIOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegG8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_imm_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addDispRIXOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegG8RC1_0__imm_0__DispRIX1_1__RegGxRCNoR01_2
  { CVT_95_addRegG8RCOperands, 1, CVT_imm_0, 0, CVT_95_addDispRIXOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addDispRIOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF8RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF8RCOperands, 1, CVT_imm_0, 0, CVT_95_addDispRIOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF8RCOperands, 1, CVT_imm_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addDispRIOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF4RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_95_addRegF4RCOperands, 1, CVT_imm_0, 0, CVT_95_addDispRIOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__RegF4RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF4RCOperands, 1, CVT_imm_0, 0, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegF4RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__S16Imm1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegGPRC1_0__S16Imm1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegCRRC1_0__RegCRRC1_1
  { CVT_95_addRegCRRCOperands, 1, CVT_95_addRegCRRCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_0
  { CVT_95_addRegG8RCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_0
  { CVT_95_addRegGPRCOperands, 1, CVT_Done },
  // Convert__RegF8RC1_0
  { CVT_95_addRegF8RCOperands, 1, CVT_Done },
  // Convert__RegGPRC1_0__CRBitMask1_1
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addCRBitMaskOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0
  { CVT_95_addRegVRRCOperands, 1, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__CRBitMask1_0__RegG8RC1_1
  { CVT_95_addCRBitMaskOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_Done },
  // Convert__CRBitMask1_0__RegGPRC1_1
  { CVT_95_addCRBitMaskOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__U5Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_0__RegF8RC1_1
  { CVT_95_addImmOperands, 1, CVT_95_addRegF8RCOperands, 2, CVT_Done },
  // Convert__RegGPRC1_1
  { CVT_95_addRegGPRCOperands, 2, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U16Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegG8RC1_0__Tie0__RegG8RC1_1__U6Imm1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 1, CVT_Tied, 0, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegG8RC1_1__Tie0__RegG8RC1_2__U6Imm1_3__U6Imm1_4
  { CVT_95_addRegG8RCOperands, 2, CVT_Tied, 0, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_0__Tie0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 1, CVT_Tied, 0, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_1__Tie0__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5
  { CVT_95_addRegGPRCOperands, 2, CVT_Tied, 0, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__U5Imm1_4__U5Imm1_5
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addRegGPRCOperands, 4, CVT_Done },
  // Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2
  { CVT_95_addRegG8RCOperands, 1, CVT_95_addRegG8RCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2
  { CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGPRCOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegG8RCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGPRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__imm_0__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_imm_0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addDispRIOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_imm_0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addDispRIOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__imm_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_0, 0, CVT_95_addRegGPRCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegG8RC1_1__RegGxRCNoR01_2__RegGxRC1_3
  { CVT_95_addRegG8RCOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_95_addRegGxRCOperands, 4, CVT_Done },
  // Convert__imm_0__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2
  { CVT_imm_0, 0, CVT_95_addRegG8RCOperands, 1, CVT_95_addDispRIXOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_0__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_imm_0, 0, CVT_95_addRegF8RCOperands, 1, CVT_95_addDispRIOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_0__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_0, 0, CVT_95_addRegF8RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__imm_0__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2
  { CVT_imm_0, 0, CVT_95_addRegF4RCOperands, 1, CVT_95_addDispRIOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_Done },
  // Convert__imm_0__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2
  { CVT_imm_0, 0, CVT_95_addRegF4RCOperands, 1, CVT_95_addRegGxRCNoR0Operands, 2, CVT_95_addRegGxRCOperands, 3, CVT_Done },
  // Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3
  { CVT_95_addRegGPRCOperands, 2, CVT_95_addRegGxRCNoR0Operands, 3, CVT_95_addRegGxRCOperands, 4, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addImmOperands, 3, CVT_95_addRegVRRCOperands, 2, CVT_Done },
  // Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3
  { CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addRegVRRCOperands, 4, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addRegVRRCOperands, 4, CVT_Done },
  // Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U5Imm1_3
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addRegVRRCOperands, 2, CVT_95_addRegVRRCOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__RegVRRC1_0__S5Imm1_1
  { CVT_95_addRegVRRCOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
};

void PPCAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const SmallVectorImpl<MCParsedAsmOperand*> &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(*(p + 1)));
      break;
    case CVT_95_addRegG8RCOperands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addRegG8RCOperands(Inst, 1);
      break;
    case CVT_95_addRegGPRCOperands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addRegGPRCOperands(Inst, 1);
      break;
    case CVT_95_addRegG8RCNoX0Operands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addRegG8RCNoX0Operands(Inst, 1);
      break;
    case CVT_95_addImmOperands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addImmOperands(Inst, 1);
      break;
    case CVT_95_addRegGPRCNoR0Operands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addRegGPRCNoR0Operands(Inst, 1);
      break;
    case CVT_imm_76:
      Inst.addOperand(MCOperand::CreateImm(76));
      break;
    case CVT_95_addRegCRRCOperands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addRegCRRCOperands(Inst, 1);
      break;
    case CVT_imm_4:
      Inst.addOperand(MCOperand::CreateImm(4));
      break;
    case CVT_imm_44:
      Inst.addOperand(MCOperand::CreateImm(44));
      break;
    case CVT_imm_36:
      Inst.addOperand(MCOperand::CreateImm(36));
      break;
    case CVT_imm_12:
      Inst.addOperand(MCOperand::CreateImm(12));
      break;
    case CVT_imm_68:
      Inst.addOperand(MCOperand::CreateImm(68));
      break;
    case CVT_imm_100:
      Inst.addOperand(MCOperand::CreateImm(100));
      break;
    case CVT_imm_108:
      Inst.addOperand(MCOperand::CreateImm(108));
      break;
    case CVT_95_addRegCRBITRCOperands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addRegCRBITRCOperands(Inst, 1);
      break;
    case CVT_95_addRegGxRCNoR0Operands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addRegGxRCNoR0Operands(Inst, 1);
      break;
    case CVT_95_addRegGxRCOperands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addRegGxRCOperands(Inst, 1);
      break;
    case CVT_95_addRegF4RCOperands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addRegF4RCOperands(Inst, 1);
      break;
    case CVT_95_addRegF8RCOperands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addRegF8RCOperands(Inst, 1);
      break;
    case CVT_95_addDispRIOperands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addDispRIOperands(Inst, 1);
      break;
    case CVT_imm_0:
      Inst.addOperand(MCOperand::CreateImm(0));
      break;
    case CVT_95_addDispRIXOperands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addDispRIXOperands(Inst, 1);
      break;
    case CVT_95_addRegVRRCOperands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addRegVRRCOperands(Inst, 1);
      break;
    case CVT_95_addCRBitMaskOperands:
      static_cast<PPCOperand*>(Operands[*(p + 1)])->addCRBitMaskOperands(Inst, 1);
      break;
    }
  }
}

void PPCAsmParser::
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
    case CVT_95_addRegG8RCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegGPRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegG8RCNoX0Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegGPRCNoR0Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_76:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addRegCRRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_4:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_44:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_36:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_12:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_68:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_100:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_108:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addRegCRBITRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegGxRCNoR0Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegGxRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegF4RCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegF8RCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addDispRIOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addDispRIXOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegVRRCOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addCRBitMaskOperands:
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
  MCK__45_1, // '-1'
  MCK__DOT_, // '.'
  MCK_256, // '256'
  MCK_268, // '268'
  MCK_VRRC, // register class 'VRRC'
  MCK_Reg3, // derived register class
  MCK_G8RC, // register class 'G8RC'
  MCK_G8RC_NOX0, // register class 'G8RC_NOX0'
  MCK_Reg6, // derived register class
  MCK_GPRC, // register class 'GPRC'
  MCK_GPRC_NOR0, // register class 'GPRC_NOR0'
  MCK_F4RC, // register class 'F4RC,F8RC'
  MCK_CR0LT, // register class 'CR0LT'
  MCK_CRBITRC, // register class 'CRBITRC'
  MCK_CRRC, // register class 'CRRC'
  MCK_CTRRC, // register class 'CTRRC'
  MCK_CTRRC8, // register class 'CTRRC8'
  MCK_VRSAVERC, // register class 'VRSAVERC'
  MCK_CARRYRC, // register class 'CARRYRC'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_CRBitMask, // user defined class 'PPCCRBitMaskOperand'
  MCK_DispRI, // user defined class 'PPCDispRIOperand'
  MCK_DispRIX, // user defined class 'PPCDispRIXOperand'
  MCK_RegCRBITRC, // user defined class 'PPCRegCRBITRCAsmOperand'
  MCK_RegCRRC, // user defined class 'PPCRegCRRCAsmOperand'
  MCK_RegF4RC, // user defined class 'PPCRegF4RCAsmOperand'
  MCK_RegF8RC, // user defined class 'PPCRegF8RCAsmOperand'
  MCK_RegG8RC, // user defined class 'PPCRegG8RCAsmOperand'
  MCK_RegG8RCNoX0, // user defined class 'PPCRegG8RCNoX0AsmOperand'
  MCK_RegGPRC, // user defined class 'PPCRegGPRCAsmOperand'
  MCK_RegGPRCNoR0, // user defined class 'PPCRegGPRCNoR0AsmOperand'
  MCK_RegGxRCNoR0, // user defined class 'PPCRegGxRCNoR0Operand'
  MCK_RegGxRC, // user defined class 'PPCRegGxRCOperand'
  MCK_RegVRRC, // user defined class 'PPCRegVRRCAsmOperand'
  MCK_S16Imm, // user defined class 'PPCS16ImmAsmOperand'
  MCK_S5Imm, // user defined class 'PPCS5ImmAsmOperand'
  MCK_U16Imm, // user defined class 'PPCU16ImmAsmOperand'
  MCK_U5Imm, // user defined class 'PPCU5ImmAsmOperand'
  MCK_U6Imm, // user defined class 'PPCU6ImmAsmOperand'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 1 string to match.
    if (Name[0] != '.')
      break;
    return MCK__DOT_;	 // "."
  case 2:	 // 1 string to match.
    if (memcmp(Name.data()+0, "-1", 2))
      break;
    return MCK__45_1;	 // "-1"
  case 3:	 // 2 strings to match.
    if (Name[0] != '2')
      break;
    switch (Name[1]) {
    default: break;
    case '5':	 // 1 string to match.
      if (Name[2] != '6')
        break;
      return MCK_256;	 // "256"
    case '6':	 // 1 string to match.
      if (Name[2] != '8')
        break;
      return MCK_268;	 // "268"
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

  case MCK_Reg3:
    switch (B) {
    default: return false;
    case MCK_G8RC: return true;
    case MCK_G8RC_NOX0: return true;
    }

  case MCK_Reg6:
    switch (B) {
    default: return false;
    case MCK_GPRC: return true;
    case MCK_GPRC_NOR0: return true;
    }

  case MCK_CR0LT:
    return B == MCK_CRBITRC;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand *GOp, MatchClassKind Kind) {
  PPCOperand &Operand = *(PPCOperand*)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  // 'Imm' class
  if (Kind == MCK_Imm) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'CRBitMask' class
  if (Kind == MCK_CRBitMask) {
    if (Operand.isCRBitMask())
      return MCTargetAsmParser::Match_Success;
  }

  // 'DispRI' class
  if (Kind == MCK_DispRI) {
    if (Operand.isS16Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'DispRIX' class
  if (Kind == MCK_DispRIX) {
    if (Operand.isS16ImmX4())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegCRBITRC' class
  if (Kind == MCK_RegCRBITRC) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegCRRC' class
  if (Kind == MCK_RegCRRC) {
    if (Operand.isCCRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegF4RC' class
  if (Kind == MCK_RegF4RC) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegF8RC' class
  if (Kind == MCK_RegF8RC) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegG8RC' class
  if (Kind == MCK_RegG8RC) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegG8RCNoX0' class
  if (Kind == MCK_RegG8RCNoX0) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegGPRC' class
  if (Kind == MCK_RegGPRC) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegGPRCNoR0' class
  if (Kind == MCK_RegGPRCNoR0) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegGxRCNoR0' class
  if (Kind == MCK_RegGxRCNoR0) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegGxRC' class
  if (Kind == MCK_RegGxRC) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegVRRC' class
  if (Kind == MCK_RegVRRC) {
    if (Operand.isRegNumber())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S16Imm' class
  if (Kind == MCK_S16Imm) {
    if (Operand.isS16Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S5Imm' class
  if (Kind == MCK_S5Imm) {
    if (Operand.isS5Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U16Imm' class
  if (Kind == MCK_U16Imm) {
    if (Operand.isU16Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U5Imm' class
  if (Kind == MCK_U5Imm) {
    if (Operand.isU5Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U6Imm' class
  if (Kind == MCK_U6Imm) {
    if (Operand.isU6Imm())
      return MCTargetAsmParser::Match_Success;
  }

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case PPC::R0: OpKind = MCK_GPRC; break;
    case PPC::R1: OpKind = MCK_Reg6; break;
    case PPC::R2: OpKind = MCK_Reg6; break;
    case PPC::R3: OpKind = MCK_Reg6; break;
    case PPC::R4: OpKind = MCK_Reg6; break;
    case PPC::R5: OpKind = MCK_Reg6; break;
    case PPC::R6: OpKind = MCK_Reg6; break;
    case PPC::R7: OpKind = MCK_Reg6; break;
    case PPC::R8: OpKind = MCK_Reg6; break;
    case PPC::R9: OpKind = MCK_Reg6; break;
    case PPC::R10: OpKind = MCK_Reg6; break;
    case PPC::R11: OpKind = MCK_Reg6; break;
    case PPC::R12: OpKind = MCK_Reg6; break;
    case PPC::R13: OpKind = MCK_Reg6; break;
    case PPC::R14: OpKind = MCK_Reg6; break;
    case PPC::R15: OpKind = MCK_Reg6; break;
    case PPC::R16: OpKind = MCK_Reg6; break;
    case PPC::R17: OpKind = MCK_Reg6; break;
    case PPC::R18: OpKind = MCK_Reg6; break;
    case PPC::R19: OpKind = MCK_Reg6; break;
    case PPC::R20: OpKind = MCK_Reg6; break;
    case PPC::R21: OpKind = MCK_Reg6; break;
    case PPC::R22: OpKind = MCK_Reg6; break;
    case PPC::R23: OpKind = MCK_Reg6; break;
    case PPC::R24: OpKind = MCK_Reg6; break;
    case PPC::R25: OpKind = MCK_Reg6; break;
    case PPC::R26: OpKind = MCK_Reg6; break;
    case PPC::R27: OpKind = MCK_Reg6; break;
    case PPC::R28: OpKind = MCK_Reg6; break;
    case PPC::R29: OpKind = MCK_Reg6; break;
    case PPC::R30: OpKind = MCK_Reg6; break;
    case PPC::R31: OpKind = MCK_Reg6; break;
    case PPC::X0: OpKind = MCK_G8RC; break;
    case PPC::X1: OpKind = MCK_Reg3; break;
    case PPC::X2: OpKind = MCK_Reg3; break;
    case PPC::X3: OpKind = MCK_Reg3; break;
    case PPC::X4: OpKind = MCK_Reg3; break;
    case PPC::X5: OpKind = MCK_Reg3; break;
    case PPC::X6: OpKind = MCK_Reg3; break;
    case PPC::X7: OpKind = MCK_Reg3; break;
    case PPC::X8: OpKind = MCK_Reg3; break;
    case PPC::X9: OpKind = MCK_Reg3; break;
    case PPC::X10: OpKind = MCK_Reg3; break;
    case PPC::X11: OpKind = MCK_Reg3; break;
    case PPC::X12: OpKind = MCK_Reg3; break;
    case PPC::X13: OpKind = MCK_Reg3; break;
    case PPC::X14: OpKind = MCK_Reg3; break;
    case PPC::X15: OpKind = MCK_Reg3; break;
    case PPC::X16: OpKind = MCK_Reg3; break;
    case PPC::X17: OpKind = MCK_Reg3; break;
    case PPC::X18: OpKind = MCK_Reg3; break;
    case PPC::X19: OpKind = MCK_Reg3; break;
    case PPC::X20: OpKind = MCK_Reg3; break;
    case PPC::X21: OpKind = MCK_Reg3; break;
    case PPC::X22: OpKind = MCK_Reg3; break;
    case PPC::X23: OpKind = MCK_Reg3; break;
    case PPC::X24: OpKind = MCK_Reg3; break;
    case PPC::X25: OpKind = MCK_Reg3; break;
    case PPC::X26: OpKind = MCK_Reg3; break;
    case PPC::X27: OpKind = MCK_Reg3; break;
    case PPC::X28: OpKind = MCK_Reg3; break;
    case PPC::X29: OpKind = MCK_Reg3; break;
    case PPC::X30: OpKind = MCK_Reg3; break;
    case PPC::X31: OpKind = MCK_Reg3; break;
    case PPC::F0: OpKind = MCK_F4RC; break;
    case PPC::F1: OpKind = MCK_F4RC; break;
    case PPC::F2: OpKind = MCK_F4RC; break;
    case PPC::F3: OpKind = MCK_F4RC; break;
    case PPC::F4: OpKind = MCK_F4RC; break;
    case PPC::F5: OpKind = MCK_F4RC; break;
    case PPC::F6: OpKind = MCK_F4RC; break;
    case PPC::F7: OpKind = MCK_F4RC; break;
    case PPC::F8: OpKind = MCK_F4RC; break;
    case PPC::F9: OpKind = MCK_F4RC; break;
    case PPC::F10: OpKind = MCK_F4RC; break;
    case PPC::F11: OpKind = MCK_F4RC; break;
    case PPC::F12: OpKind = MCK_F4RC; break;
    case PPC::F13: OpKind = MCK_F4RC; break;
    case PPC::F14: OpKind = MCK_F4RC; break;
    case PPC::F15: OpKind = MCK_F4RC; break;
    case PPC::F16: OpKind = MCK_F4RC; break;
    case PPC::F17: OpKind = MCK_F4RC; break;
    case PPC::F18: OpKind = MCK_F4RC; break;
    case PPC::F19: OpKind = MCK_F4RC; break;
    case PPC::F20: OpKind = MCK_F4RC; break;
    case PPC::F21: OpKind = MCK_F4RC; break;
    case PPC::F22: OpKind = MCK_F4RC; break;
    case PPC::F23: OpKind = MCK_F4RC; break;
    case PPC::F24: OpKind = MCK_F4RC; break;
    case PPC::F25: OpKind = MCK_F4RC; break;
    case PPC::F26: OpKind = MCK_F4RC; break;
    case PPC::F27: OpKind = MCK_F4RC; break;
    case PPC::F28: OpKind = MCK_F4RC; break;
    case PPC::F29: OpKind = MCK_F4RC; break;
    case PPC::F30: OpKind = MCK_F4RC; break;
    case PPC::F31: OpKind = MCK_F4RC; break;
    case PPC::V0: OpKind = MCK_VRRC; break;
    case PPC::V1: OpKind = MCK_VRRC; break;
    case PPC::V2: OpKind = MCK_VRRC; break;
    case PPC::V3: OpKind = MCK_VRRC; break;
    case PPC::V4: OpKind = MCK_VRRC; break;
    case PPC::V5: OpKind = MCK_VRRC; break;
    case PPC::V6: OpKind = MCK_VRRC; break;
    case PPC::V7: OpKind = MCK_VRRC; break;
    case PPC::V8: OpKind = MCK_VRRC; break;
    case PPC::V9: OpKind = MCK_VRRC; break;
    case PPC::V10: OpKind = MCK_VRRC; break;
    case PPC::V11: OpKind = MCK_VRRC; break;
    case PPC::V12: OpKind = MCK_VRRC; break;
    case PPC::V13: OpKind = MCK_VRRC; break;
    case PPC::V14: OpKind = MCK_VRRC; break;
    case PPC::V15: OpKind = MCK_VRRC; break;
    case PPC::V16: OpKind = MCK_VRRC; break;
    case PPC::V17: OpKind = MCK_VRRC; break;
    case PPC::V18: OpKind = MCK_VRRC; break;
    case PPC::V19: OpKind = MCK_VRRC; break;
    case PPC::V20: OpKind = MCK_VRRC; break;
    case PPC::V21: OpKind = MCK_VRRC; break;
    case PPC::V22: OpKind = MCK_VRRC; break;
    case PPC::V23: OpKind = MCK_VRRC; break;
    case PPC::V24: OpKind = MCK_VRRC; break;
    case PPC::V25: OpKind = MCK_VRRC; break;
    case PPC::V26: OpKind = MCK_VRRC; break;
    case PPC::V27: OpKind = MCK_VRRC; break;
    case PPC::V28: OpKind = MCK_VRRC; break;
    case PPC::V29: OpKind = MCK_VRRC; break;
    case PPC::V30: OpKind = MCK_VRRC; break;
    case PPC::V31: OpKind = MCK_VRRC; break;
    case PPC::ZERO: OpKind = MCK_GPRC_NOR0; break;
    case PPC::ZERO8: OpKind = MCK_G8RC_NOX0; break;
    case PPC::FP: OpKind = MCK_Reg6; break;
    case PPC::FP8: OpKind = MCK_Reg3; break;
    case PPC::CR0LT: OpKind = MCK_CR0LT; break;
    case PPC::CR0GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR0EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR0UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR1LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR1GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR1EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR1UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR2LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR2GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR2EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR2UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR3LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR3GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR3EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR3UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR4LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR4GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR4EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR4UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR5LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR5GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR5EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR5UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR6LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR6GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR6EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR6UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR7LT: OpKind = MCK_CRBITRC; break;
    case PPC::CR7GT: OpKind = MCK_CRBITRC; break;
    case PPC::CR7EQ: OpKind = MCK_CRBITRC; break;
    case PPC::CR7UN: OpKind = MCK_CRBITRC; break;
    case PPC::CR0: OpKind = MCK_CRRC; break;
    case PPC::CR1: OpKind = MCK_CRRC; break;
    case PPC::CR2: OpKind = MCK_CRRC; break;
    case PPC::CR3: OpKind = MCK_CRRC; break;
    case PPC::CR4: OpKind = MCK_CRRC; break;
    case PPC::CR5: OpKind = MCK_CRRC; break;
    case PPC::CR6: OpKind = MCK_CRRC; break;
    case PPC::CR7: OpKind = MCK_CRRC; break;
    case PPC::CTR: OpKind = MCK_CTRRC; break;
    case PPC::CTR8: OpKind = MCK_CTRRC8; break;
    case PPC::VRSAVE: OpKind = MCK_VRSAVERC; break;
    case PPC::CARRY: OpKind = MCK_CARRYRC; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

unsigned PPCAsmParser::
ComputeAvailableFeatures(uint64_t FB) const {
  unsigned Features = 0;
  return Features;
}

static const char *const MnemonicTable =
    "\003add\004addc\004adde\004addi\005addic\005addis\005addme\005addze\003"
    "and\004andc\004andi\005andis\001b\002ba\004bctr\005bctrl\004bdnz\006bdn"
    "zlr\003bdz\005bdzlr\003beq\006beqctr\007beqctrl\005beqlr\003bge\006bgec"
    "tr\007bgectrl\005bgelr\003bgt\006bgtctr\007bgtctrl\005bgtlr\002bl\003bl"
    "a\003ble\006blectr\007blectrl\005blelr\003blr\003blt\006bltctr\007bltct"
    "rl\005bltlr\003bne\006bnectr\007bnectrl\005bnelr\003bng\006bngctr\007bn"
    "gctrl\005bnglr\003bnl\006bnlctr\007bnlctrl\005bnllr\003bns\006bnsctr\007"
    "bnsctrl\005bnslr\003bnu\006bnuctr\007bnuctrl\005bnulr\003bso\006bsoctr\007"
    "bsoctrl\005bsolr\003bun\006bunctr\007bunctrl\005bunlr\004cmpd\005cmpdi\005"
    "cmpld\006cmpldi\005cmplw\006cmplwi\004cmpw\005cmpwi\006cntlzd\006cntlzw"
    "\005creqv\004cror\004dcba\004dcbf\004dcbi\005dcbst\004dcbt\006dcbtst\004"
    "dcbz\005dcbzl\004divd\005divdu\004divw\005divwu\003eqv\005extsb\005exts"
    "h\005extsw\004fabs\004fadd\005fadds\005fcfid\006fcfids\006fcfidu\007fcf"
    "idus\005fcmpu\007fctiduz\006fctidz\007fctiwuz\006fctiwz\004fdiv\005fdiv"
    "s\005fmadd\006fmadds\003fmr\005fmsub\006fmsubs\004fmul\005fmuls\005fnab"
    "s\004fneg\006fnmadd\007fnmadds\006fnmsub\007fnmsubs\003fre\004fres\004f"
    "rim\004frin\004frip\004friz\004frsp\007frsqrte\010frsqrtes\004fsel\005f"
    "sqrt\006fsqrts\004fsub\005fsubs\004icbi\004isel\005isync\003lbz\004lbzu"
    "\005lbzux\004lbzx\002ld\005ldarx\005ldbrx\003ldu\004ldux\003ldx\003lfd\004"
    "lfdu\005lfdux\004lfdx\006lfiwax\006lfiwzx\003lfs\004lfsu\005lfsux\004lf"
    "sx\003lha\004lhau\005lhaux\004lhax\005lhbrx\003lhz\004lhzu\005lhzux\004"
    "lhzx\002li\003lis\005lvebx\005lvehx\005lvewx\004lvsl\004lvsr\003lvx\004"
    "lvxl\003lwa\005lwarx\005lwaux\004lwax\005lwbrx\003lwz\004lwzu\005lwzux\004"
    "lwzx\004mcrf\004mfcr\005mfctr\004mffs\004mflr\006mfocrf\005mfspr\006mfv"
    "scr\002mr\005mtcrf\005mtctr\006mtfsb0\006mtfsb1\005mtfsf\004mtlr\005mts"
    "pr\006mtvscr\005mulhd\006mulhdu\005mulhw\006mulhwu\005mulld\005mulli\005"
    "mullw\004nand\003neg\003nop\003nor\002or\003orc\003ori\004oris\007popcn"
    "td\007popcntw\005rldcl\006rldicl\006rldicr\006rldimi\006rlwimi\006rlwin"
    "m\005rlwnm\003sld\004sldi\003slw\004slwi\004srad\005sradi\004sraw\005sr"
    "awi\003srd\004srdi\003srw\004srwi\003stb\004stbu\005stbux\004stbx\003st"
    "d\006stdbrx\005stdcx\004stdu\005stdux\004stdx\004stfd\005stfdu\006stfdu"
    "x\005stfdx\006stfiwx\004stfs\005stfsu\006stfsux\005stfsx\003sth\006sthb"
    "rx\004sthu\005sthux\004sthx\006stvebx\006stvehx\006stvewx\004stvx\005st"
    "vxl\003stw\006stwbrx\005stwcx\004stwu\005stwux\004stwx\004subf\005subfc"
    "\005subfe\006subfic\006subfme\006subfze\004sync\004trap\007vaddcuw\006v"
    "addfp\007vaddsbs\007vaddshs\007vaddsws\007vaddubm\007vaddubs\007vadduhm"
    "\007vadduhs\007vadduwm\007vadduws\004vand\005vandc\006vavgsb\006vavgsh\006"
    "vavgsw\006vavgub\006vavguh\006vavguw\005vcfsx\005vcfux\007vcmpbfp\010vc"
    "mpeqfp\010vcmpequb\010vcmpequh\010vcmpequw\010vcmpgefp\010vcmpgtfp\010v"
    "cmpgtsb\010vcmpgtsh\010vcmpgtsw\010vcmpgtub\010vcmpgtuh\010vcmpgtuw\006"
    "vctsxs\006vctuxs\010vexptefp\007vlogefp\007vmaddfp\006vmaxfp\006vmaxsb\006"
    "vmaxsh\006vmaxsw\006vmaxub\006vmaxuh\006vmaxuw\tvmhaddshs\nvmhraddshs\006"
    "vminfp\006vminsb\006vminsh\006vminsw\006vminub\006vminuh\006vminuw\tvml"
    "adduhm\006vmrghb\006vmrghh\006vmrghw\006vmrglb\006vmrglh\006vmrglw\010v"
    "msummbm\010vmsumshm\010vmsumshs\010vmsumubm\010vmsumuhm\010vmsumuhs\007"
    "vmulesb\007vmulesh\007vmuleub\007vmuleuh\007vmulosb\007vmulosh\007vmulo"
    "ub\007vmulouh\010vnmsubfp\004vnor\003vor\005vperm\005vpkpx\007vpkshss\007"
    "vpkshus\007vpkswss\007vpkswus\007vpkuhum\007vpkuhus\007vpkuwum\007vpkuw"
    "us\005vrefp\005vrfim\005vrfin\005vrfip\005vrfiz\004vrlb\004vrlh\004vrlw"
    "\tvrsqrtefp\004vsel\003vsl\004vslb\006vsldoi\004vslh\004vslo\004vslw\006"
    "vspltb\006vsplth\010vspltisb\010vspltish\010vspltisw\006vspltw\003vsr\005"
    "vsrab\005vsrah\005vsraw\004vsrb\004vsrh\004vsro\004vsrw\007vsubcuw\006v"
    "subfp\007vsubsbs\007vsubshs\007vsubsws\007vsububm\007vsububs\007vsubuhm"
    "\007vsubuhs\007vsubuwm\007vsubuws\010vsum2sws\010vsum4sbs\010vsum4shs\010"
    "vsum4ubs\007vsumsws\007vupkhpx\007vupkhsb\007vupkhsh\007vupklpx\007vupk"
    "lsb\007vupklsh\004vxor\003xor\004xori\005xoris";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint8_t RequiredFeatures;
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

static const MatchEntry MatchTable[658] = {
  { 0 /* add */, PPC::ADD8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 0 /* add */, PPC::ADD4, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 0 /* add */, PPC::ADD8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 0 /* add */, PPC::ADD4o, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 4 /* addc */, PPC::ADDC8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 4 /* addc */, PPC::ADDC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 4 /* addc */, PPC::ADDC8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 4 /* addc */, PPC::ADDCo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 9 /* adde */, PPC::ADDE8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 9 /* adde */, PPC::ADDE, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 9 /* adde */, PPC::ADDE8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 9 /* adde */, PPC::ADDEo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 14 /* addi */, PPC::ADDI8, Convert__RegG8RC1_0__RegG8RCNoX01_1__S16Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RCNoX0, MCK_S16Imm }, 0},
  { 14 /* addi */, PPC::ADDI, Convert__RegGPRC1_0__RegGPRCNoR01_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_S16Imm }, 0},
  { 19 /* addic */, PPC::ADDIC8, Convert__RegG8RC1_0__RegG8RC1_1__S16Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_S16Imm }, 0},
  { 19 /* addic */, PPC::ADDIC, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, 0},
  { 19 /* addic */, PPC::ADDICo, Convert__RegGPRC1_1__RegGPRC1_2__S16Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, 0},
  { 25 /* addis */, PPC::ADDIS8, Convert__RegG8RC1_0__RegG8RCNoX01_1__S16Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RCNoX0, MCK_S16Imm }, 0},
  { 25 /* addis */, PPC::ADDIS, Convert__RegGPRC1_0__RegGPRCNoR01_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_S16Imm }, 0},
  { 31 /* addme */, PPC::ADDME8, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 31 /* addme */, PPC::ADDME, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 31 /* addme */, PPC::ADDME8o, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 31 /* addme */, PPC::ADDMEo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 37 /* addze */, PPC::ADDZE8, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 37 /* addze */, PPC::ADDZE, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 37 /* addze */, PPC::ADDZE8o, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 37 /* addze */, PPC::ADDZEo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 43 /* and */, PPC::AND8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 43 /* and */, PPC::AND, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 43 /* and */, PPC::AND8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 43 /* and */, PPC::ANDo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 47 /* andc */, PPC::ANDC8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 47 /* andc */, PPC::ANDC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 47 /* andc */, PPC::ANDC8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 47 /* andc */, PPC::ANDCo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 52 /* andi */, PPC::ANDIo8, Convert__RegG8RC1_1__RegG8RC1_2__U16Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U16Imm }, 0},
  { 52 /* andi */, PPC::ANDIo, Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, 0},
  { 57 /* andis */, PPC::ANDISo8, Convert__RegG8RC1_1__RegG8RC1_2__U16Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U16Imm }, 0},
  { 57 /* andis */, PPC::ANDISo, Convert__RegGPRC1_1__RegGPRC1_2__U16Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, 0},
  { 63 /* b */, PPC::B, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 65 /* ba */, PPC::TAILBA, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 68 /* bctr */, PPC::BCTR, Convert_NoOperands, 0, {  }, 0},
  { 68 /* bctr */, PPC::BCTR8, Convert_NoOperands, 0, {  }, 0},
  { 73 /* bctrl */, PPC::BCTRL, Convert_NoOperands, 0, {  }, 0},
  { 73 /* bctrl */, PPC::BCTRL8, Convert_NoOperands, 0, {  }, 0},
  { 79 /* bdnz */, PPC::BDNZ, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 79 /* bdnz */, PPC::BDNZ8, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 84 /* bdnzlr */, PPC::BDNZLR8, Convert_NoOperands, 0, {  }, 0},
  { 91 /* bdz */, PPC::BDZ, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 91 /* bdz */, PPC::BDZ8, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 95 /* bdzlr */, PPC::BDZLR8, Convert_NoOperands, 0, {  }, 0},
  { 101 /* beq */, PPC::BCC, Convert__imm_76__RegCRRC1_0__Imm1_1, 0, { MCK_RegCRRC, MCK_Imm }, 0},
  { 105 /* beqctr */, PPC::BCCTR, Convert__imm_76__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 112 /* beqctrl */, PPC::BCCTRL, Convert__imm_76__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 120 /* beqlr */, PPC::BCLR, Convert__imm_76__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 126 /* bge */, PPC::BCC, Convert__imm_4__RegCRRC1_0__Imm1_1, 0, { MCK_RegCRRC, MCK_Imm }, 0},
  { 130 /* bgectr */, PPC::BCCTR, Convert__imm_4__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 137 /* bgectrl */, PPC::BCCTRL, Convert__imm_4__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 145 /* bgelr */, PPC::BCLR, Convert__imm_4__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 151 /* bgt */, PPC::BCC, Convert__imm_44__RegCRRC1_0__Imm1_1, 0, { MCK_RegCRRC, MCK_Imm }, 0},
  { 155 /* bgtctr */, PPC::BCCTR, Convert__imm_44__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 162 /* bgtctrl */, PPC::BCCTRL, Convert__imm_44__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 170 /* bgtlr */, PPC::BCLR, Convert__imm_44__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 176 /* bl */, PPC::BL, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 176 /* bl */, PPC::BL8, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 179 /* bla */, PPC::BLA, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 179 /* bla */, PPC::BLA8, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 183 /* ble */, PPC::BCC, Convert__imm_36__RegCRRC1_0__Imm1_1, 0, { MCK_RegCRRC, MCK_Imm }, 0},
  { 187 /* blectr */, PPC::BCCTR, Convert__imm_36__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 194 /* blectrl */, PPC::BCCTRL, Convert__imm_36__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 202 /* blelr */, PPC::BCLR, Convert__imm_36__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 208 /* blr */, PPC::BLR, Convert_NoOperands, 0, {  }, 0},
  { 212 /* blt */, PPC::BCC, Convert__imm_12__RegCRRC1_0__Imm1_1, 0, { MCK_RegCRRC, MCK_Imm }, 0},
  { 216 /* bltctr */, PPC::BCCTR, Convert__imm_12__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 223 /* bltctrl */, PPC::BCCTRL, Convert__imm_12__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 231 /* bltlr */, PPC::BCLR, Convert__imm_12__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 237 /* bne */, PPC::BCC, Convert__imm_68__RegCRRC1_0__Imm1_1, 0, { MCK_RegCRRC, MCK_Imm }, 0},
  { 241 /* bnectr */, PPC::BCCTR, Convert__imm_68__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 248 /* bnectrl */, PPC::BCCTRL, Convert__imm_68__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 256 /* bnelr */, PPC::BCLR, Convert__imm_68__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 262 /* bng */, PPC::BCC, Convert__imm_36__RegCRRC1_0__Imm1_1, 0, { MCK_RegCRRC, MCK_Imm }, 0},
  { 266 /* bngctr */, PPC::BCCTR, Convert__imm_36__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 273 /* bngctrl */, PPC::BCCTRL, Convert__imm_36__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 281 /* bnglr */, PPC::BCLR, Convert__imm_36__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 287 /* bnl */, PPC::BCC, Convert__imm_4__RegCRRC1_0__Imm1_1, 0, { MCK_RegCRRC, MCK_Imm }, 0},
  { 291 /* bnlctr */, PPC::BCCTR, Convert__imm_4__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 298 /* bnlctrl */, PPC::BCCTRL, Convert__imm_4__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 306 /* bnllr */, PPC::BCLR, Convert__imm_4__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 312 /* bns */, PPC::BCC, Convert__imm_100__RegCRRC1_0__Imm1_1, 0, { MCK_RegCRRC, MCK_Imm }, 0},
  { 316 /* bnsctr */, PPC::BCCTR, Convert__imm_100__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 323 /* bnsctrl */, PPC::BCCTRL, Convert__imm_100__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 331 /* bnslr */, PPC::BCLR, Convert__imm_100__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 337 /* bnu */, PPC::BCC, Convert__imm_100__RegCRRC1_0__Imm1_1, 0, { MCK_RegCRRC, MCK_Imm }, 0},
  { 341 /* bnuctr */, PPC::BCCTR, Convert__imm_100__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 348 /* bnuctrl */, PPC::BCCTRL, Convert__imm_100__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 356 /* bnulr */, PPC::BCLR, Convert__imm_100__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 362 /* bso */, PPC::BCC, Convert__imm_108__RegCRRC1_0__Imm1_1, 0, { MCK_RegCRRC, MCK_Imm }, 0},
  { 366 /* bsoctr */, PPC::BCCTR, Convert__imm_108__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 373 /* bsoctrl */, PPC::BCCTRL, Convert__imm_108__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 381 /* bsolr */, PPC::BCLR, Convert__imm_108__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 387 /* bun */, PPC::BCC, Convert__imm_108__RegCRRC1_0__Imm1_1, 0, { MCK_RegCRRC, MCK_Imm }, 0},
  { 391 /* bunctr */, PPC::BCCTR, Convert__imm_108__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 398 /* bunctrl */, PPC::BCCTRL, Convert__imm_108__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 406 /* bunlr */, PPC::BCLR, Convert__imm_108__RegCRRC1_0, 0, { MCK_RegCRRC }, 0},
  { 412 /* cmpd */, PPC::CMPD, Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegCRRC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 417 /* cmpdi */, PPC::CMPDI, Convert__RegCRRC1_0__RegG8RC1_1__S16Imm1_2, 0, { MCK_RegCRRC, MCK_RegG8RC, MCK_S16Imm }, 0},
  { 423 /* cmpld */, PPC::CMPLD, Convert__RegCRRC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegCRRC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 429 /* cmpldi */, PPC::CMPLDI, Convert__RegCRRC1_0__RegG8RC1_1__U16Imm1_2, 0, { MCK_RegCRRC, MCK_RegG8RC, MCK_U16Imm }, 0},
  { 436 /* cmplw */, PPC::CMPLW, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 442 /* cmplwi */, PPC::CMPLWI, Convert__RegCRRC1_0__RegGPRC1_1__U16Imm1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_U16Imm }, 0},
  { 449 /* cmpw */, PPC::CMPW, Convert__RegCRRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 454 /* cmpwi */, PPC::CMPWI, Convert__RegCRRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegCRRC, MCK_RegGPRC, MCK_S16Imm }, 0},
  { 460 /* cntlzd */, PPC::CNTLZD, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 460 /* cntlzd */, PPC::CNTLZDo, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 467 /* cntlzw */, PPC::CNTLZW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 467 /* cntlzw */, PPC::CNTLZWo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 474 /* creqv */, PPC::CREQV, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, 0},
  { 480 /* cror */, PPC::CROR, Convert__RegCRBITRC1_0__RegCRBITRC1_1__RegCRBITRC1_2, 0, { MCK_RegCRBITRC, MCK_RegCRBITRC, MCK_RegCRBITRC }, 0},
  { 485 /* dcba */, PPC::DCBA, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 490 /* dcbf */, PPC::DCBF, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 495 /* dcbi */, PPC::DCBI, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 500 /* dcbst */, PPC::DCBST, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 506 /* dcbt */, PPC::DCBT, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 511 /* dcbtst */, PPC::DCBTST, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 518 /* dcbz */, PPC::DCBZ, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 523 /* dcbzl */, PPC::DCBZL, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 529 /* divd */, PPC::DIVD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 529 /* divd */, PPC::DIVDo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 534 /* divdu */, PPC::DIVDU, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 534 /* divdu */, PPC::DIVDUo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 540 /* divw */, PPC::DIVW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 540 /* divw */, PPC::DIVWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 545 /* divwu */, PPC::DIVWU, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 545 /* divwu */, PPC::DIVWUo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 551 /* eqv */, PPC::EQV8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 551 /* eqv */, PPC::EQV, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 551 /* eqv */, PPC::EQV8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 551 /* eqv */, PPC::EQVo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 555 /* extsb */, PPC::EXTSB8, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 555 /* extsb */, PPC::EXTSB, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 555 /* extsb */, PPC::EXTSB8o, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 555 /* extsb */, PPC::EXTSBo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 561 /* extsh */, PPC::EXTSH8, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 561 /* extsh */, PPC::EXTSH, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 561 /* extsh */, PPC::EXTSH8o, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 561 /* extsh */, PPC::EXTSHo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 567 /* extsw */, PPC::EXTSW, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 567 /* extsw */, PPC::EXTSW_32_64, Convert__RegG8RC1_0__RegGPRC1_1, 0, { MCK_RegG8RC, MCK_RegGPRC }, 0},
  { 567 /* extsw */, PPC::EXTSWo, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 567 /* extsw */, PPC::EXTSW_32_64o, Convert__RegG8RC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegGPRC }, 0},
  { 573 /* fabs */, PPC::FABSS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 573 /* fabs */, PPC::FABSD, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 573 /* fabs */, PPC::FABSSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 573 /* fabs */, PPC::FABSDo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 578 /* fadd */, PPC::FADD, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 578 /* fadd */, PPC::FADDo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 583 /* fadds */, PPC::FADDS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 583 /* fadds */, PPC::FADDSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 589 /* fcfid */, PPC::FCFID, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 589 /* fcfid */, PPC::FCFIDo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 595 /* fcfids */, PPC::FCFIDS, Convert__RegF4RC1_0__RegF8RC1_1, 0, { MCK_RegF4RC, MCK_RegF8RC }, 0},
  { 595 /* fcfids */, PPC::FCFIDSo, Convert__RegF4RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC }, 0},
  { 602 /* fcfidu */, PPC::FCFIDU, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 602 /* fcfidu */, PPC::FCFIDUo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 609 /* fcfidus */, PPC::FCFIDUS, Convert__RegF4RC1_0__RegF8RC1_1, 0, { MCK_RegF4RC, MCK_RegF8RC }, 0},
  { 609 /* fcfidus */, PPC::FCFIDUSo, Convert__RegF4RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC }, 0},
  { 617 /* fcmpu */, PPC::FCMPUS, Convert__RegCRRC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegCRRC, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 617 /* fcmpu */, PPC::FCMPUD, Convert__RegCRRC1_0__RegF8RC1_1__RegF8RC1_2, 0, { MCK_RegCRRC, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 623 /* fctiduz */, PPC::FCTIDUZ, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 623 /* fctiduz */, PPC::FCTIDUZo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 631 /* fctidz */, PPC::FCTIDZ, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 631 /* fctidz */, PPC::FCTIDZo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 638 /* fctiwuz */, PPC::FCTIWUZ, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 638 /* fctiwuz */, PPC::FCTIWUZo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 646 /* fctiwz */, PPC::FCTIWZ, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 646 /* fctiwz */, PPC::FCTIWZo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 653 /* fdiv */, PPC::FDIV, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 653 /* fdiv */, PPC::FDIVo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 658 /* fdivs */, PPC::FDIVS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 658 /* fdivs */, PPC::FDIVSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 664 /* fmadd */, PPC::FMADD, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 664 /* fmadd */, PPC::FMADDo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 670 /* fmadds */, PPC::FMADDS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 670 /* fmadds */, PPC::FMADDSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 677 /* fmr */, PPC::FMR, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 677 /* fmr */, PPC::FMRo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 681 /* fmsub */, PPC::FMSUB, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 681 /* fmsub */, PPC::FMSUBo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 687 /* fmsubs */, PPC::FMSUBS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 687 /* fmsubs */, PPC::FMSUBSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 694 /* fmul */, PPC::FMUL, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 694 /* fmul */, PPC::FMULo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 699 /* fmuls */, PPC::FMULS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 699 /* fmuls */, PPC::FMULSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 705 /* fnabs */, PPC::FNABSS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 705 /* fnabs */, PPC::FNABSD, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 705 /* fnabs */, PPC::FNABSSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 705 /* fnabs */, PPC::FNABSDo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 711 /* fneg */, PPC::FNEGS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 711 /* fneg */, PPC::FNEGD, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 711 /* fneg */, PPC::FNEGSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 711 /* fneg */, PPC::FNEGDo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 716 /* fnmadd */, PPC::FNMADD, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 716 /* fnmadd */, PPC::FNMADDo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 723 /* fnmadds */, PPC::FNMADDS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 723 /* fnmadds */, PPC::FNMADDSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 731 /* fnmsub */, PPC::FNMSUB, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 731 /* fnmsub */, PPC::FNMSUBo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 738 /* fnmsubs */, PPC::FNMSUBS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 738 /* fnmsubs */, PPC::FNMSUBSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3__RegF4RC1_4, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 746 /* fre */, PPC::FRE, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 746 /* fre */, PPC::FREo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 750 /* fres */, PPC::FRES, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 750 /* fres */, PPC::FRESo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 755 /* frim */, PPC::FRIMS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 755 /* frim */, PPC::FRIMD, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 755 /* frim */, PPC::FRIMSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 755 /* frim */, PPC::FRIMDo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 760 /* frin */, PPC::FRINS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 760 /* frin */, PPC::FRIND, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 760 /* frin */, PPC::FRINSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 760 /* frin */, PPC::FRINDo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 765 /* frip */, PPC::FRIPS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 765 /* frip */, PPC::FRIPD, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 765 /* frip */, PPC::FRIPSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 765 /* frip */, PPC::FRIPDo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 770 /* friz */, PPC::FRIZS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 770 /* friz */, PPC::FRIZD, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 770 /* friz */, PPC::FRIZSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 770 /* friz */, PPC::FRIZDo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 775 /* frsp */, PPC::FRSP, Convert__RegF4RC1_0__RegF8RC1_1, 0, { MCK_RegF4RC, MCK_RegF8RC }, 0},
  { 775 /* frsp */, PPC::FRSPo, Convert__RegF4RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC }, 0},
  { 780 /* frsqrte */, PPC::FRSQRTE, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 780 /* frsqrte */, PPC::FRSQRTEo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 788 /* frsqrtes */, PPC::FRSQRTES, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 788 /* frsqrtes */, PPC::FRSQRTESo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 797 /* fsel */, PPC::FSELS, Convert__RegF4RC1_0__RegF8RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK_RegF4RC, MCK_RegF8RC, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 797 /* fsel */, PPC::FSELD, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 797 /* fsel */, PPC::FSELSo, Convert__RegF4RC1_1__RegF8RC1_2__RegF4RC1_3__RegF4RC1_4, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF8RC, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 797 /* fsel */, PPC::FSELDo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3__RegF8RC1_4, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 802 /* fsqrt */, PPC::FSQRT, Convert__RegF8RC1_0__RegF8RC1_1, 0, { MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 802 /* fsqrt */, PPC::FSQRTo, Convert__RegF8RC1_1__RegF8RC1_2, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 808 /* fsqrts */, PPC::FSQRTS, Convert__RegF4RC1_0__RegF4RC1_1, 0, { MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 808 /* fsqrts */, PPC::FSQRTSo, Convert__RegF4RC1_1__RegF4RC1_2, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 815 /* fsub */, PPC::FSUB, Convert__RegF8RC1_0__RegF8RC1_1__RegF8RC1_2, 0, { MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 815 /* fsub */, PPC::FSUBo, Convert__RegF8RC1_1__RegF8RC1_2__RegF8RC1_3, 0, { MCK__DOT_, MCK_RegF8RC, MCK_RegF8RC, MCK_RegF8RC }, 0},
  { 820 /* fsubs */, PPC::FSUBS, Convert__RegF4RC1_0__RegF4RC1_1__RegF4RC1_2, 0, { MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 820 /* fsubs */, PPC::FSUBSo, Convert__RegF4RC1_1__RegF4RC1_2__RegF4RC1_3, 0, { MCK__DOT_, MCK_RegF4RC, MCK_RegF4RC, MCK_RegF4RC }, 0},
  { 826 /* icbi */, PPC::ICBI, Convert__RegGxRCNoR01_0__RegGxRC1_1, 0, { MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 831 /* isel */, PPC::ISEL8, Convert__RegG8RC1_0__RegG8RCNoX01_1__RegG8RC1_2__RegCRBITRC1_3, 0, { MCK_RegG8RC, MCK_RegG8RCNoX0, MCK_RegG8RC, MCK_RegCRBITRC }, 0},
  { 831 /* isel */, PPC::ISEL, Convert__RegGPRC1_0__RegGPRCNoR01_1__RegGPRC1_2__RegCRBITRC1_3, 0, { MCK_RegGPRC, MCK_RegGPRCNoR0, MCK_RegGPRC, MCK_RegCRBITRC }, 0},
  { 836 /* isync */, PPC::ISYNC, Convert_NoOperands, 0, {  }, 0},
  { 842 /* lbz */, PPC::LBZ8, Convert__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 842 /* lbz */, PPC::LBZ, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 846 /* lbzu */, PPC::LBZU8, Convert__RegG8RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 846 /* lbzu */, PPC::LBZU, Convert__RegGPRC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 851 /* lbzux */, PPC::LBZUX8, Convert__RegG8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 851 /* lbzux */, PPC::LBZUX, Convert__RegGPRC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 857 /* lbzx */, PPC::LBZX8, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 857 /* lbzx */, PPC::LBZX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 862 /* ld */, PPC::LD, Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, 0},
  { 865 /* ldarx */, PPC::LDARX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 871 /* ldbrx */, PPC::LDBRX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 877 /* ldu */, PPC::LDU, Convert__RegG8RC1_0__imm_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, 0},
  { 881 /* ldux */, PPC::LDUX, Convert__RegG8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 886 /* ldx */, PPC::LDX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 890 /* lfd */, PPC::LFD, Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 894 /* lfdu */, PPC::LFDU, Convert__RegF8RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 899 /* lfdux */, PPC::LFDUX, Convert__RegF8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 905 /* lfdx */, PPC::LFDX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 910 /* lfiwax */, PPC::LFIWAX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 917 /* lfiwzx */, PPC::LFIWZX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 924 /* lfs */, PPC::LFS, Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 928 /* lfsu */, PPC::LFSU, Convert__RegF4RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 933 /* lfsux */, PPC::LFSUX, Convert__RegF4RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 939 /* lfsx */, PPC::LFSX, Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 944 /* lha */, PPC::LHA8, Convert__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 944 /* lha */, PPC::LHA, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 948 /* lhau */, PPC::LHAU8, Convert__RegG8RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 948 /* lhau */, PPC::LHAU, Convert__RegGPRC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 953 /* lhaux */, PPC::LHAUX8, Convert__RegG8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 953 /* lhaux */, PPC::LHAUX, Convert__RegGPRC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 959 /* lhax */, PPC::LHAX8, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 959 /* lhax */, PPC::LHAX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 964 /* lhbrx */, PPC::LHBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 970 /* lhz */, PPC::LHZ8, Convert__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 970 /* lhz */, PPC::LHZ, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 974 /* lhzu */, PPC::LHZU8, Convert__RegG8RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 974 /* lhzu */, PPC::LHZU, Convert__RegGPRC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 979 /* lhzux */, PPC::LHZUX8, Convert__RegG8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 979 /* lhzux */, PPC::LHZUX, Convert__RegGPRC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 985 /* lhzx */, PPC::LHZX8, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 985 /* lhzx */, PPC::LHZX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 990 /* li */, PPC::LI8, Convert__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, 0},
  { 990 /* li */, PPC::LI, Convert__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, 0},
  { 993 /* lis */, PPC::LIS8, Convert__RegG8RC1_0__S16Imm1_1, 0, { MCK_RegG8RC, MCK_S16Imm }, 0},
  { 993 /* lis */, PPC::LIS, Convert__RegGPRC1_0__S16Imm1_1, 0, { MCK_RegGPRC, MCK_S16Imm }, 0},
  { 997 /* lvebx */, PPC::LVEBX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1003 /* lvehx */, PPC::LVEHX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1009 /* lvewx */, PPC::LVEWX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1015 /* lvsl */, PPC::LVSL, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1020 /* lvsr */, PPC::LVSR, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1025 /* lvx */, PPC::LVX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1029 /* lvxl */, PPC::LVXL, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1034 /* lwa */, PPC::LWA, Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, 0},
  { 1038 /* lwarx */, PPC::LWARX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1044 /* lwaux */, PPC::LWAUX, Convert__RegG8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1050 /* lwax */, PPC::LWAX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1055 /* lwbrx */, PPC::LWBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1061 /* lwz */, PPC::LWZ8, Convert__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 1061 /* lwz */, PPC::LWZ, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 1065 /* lwzu */, PPC::LWZU8, Convert__RegG8RC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 1065 /* lwzu */, PPC::LWZU, Convert__RegGPRC1_0__imm_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 1070 /* lwzux */, PPC::LWZUX8, Convert__RegG8RC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1070 /* lwzux */, PPC::LWZUX, Convert__RegGPRC1_0__imm_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1076 /* lwzx */, PPC::LWZX8, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1076 /* lwzx */, PPC::LWZX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1081 /* mcrf */, PPC::MCRF, Convert__RegCRRC1_0__RegCRRC1_1, 0, { MCK_RegCRRC, MCK_RegCRRC }, 0},
  { 1086 /* mfcr */, PPC::MFCR8, Convert__RegG8RC1_0, 0, { MCK_RegG8RC }, 0},
  { 1086 /* mfcr */, PPC::MFCR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, 0},
  { 1091 /* mfctr */, PPC::MFCTR8, Convert__RegG8RC1_0, 0, { MCK_RegG8RC }, 0},
  { 1091 /* mfctr */, PPC::MFCTR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, 0},
  { 1097 /* mffs */, PPC::MFFS, Convert__RegF8RC1_0, 0, { MCK_RegF8RC }, 0},
  { 1102 /* mflr */, PPC::MFLR8, Convert__RegG8RC1_0, 0, { MCK_RegG8RC }, 0},
  { 1102 /* mflr */, PPC::MFLR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, 0},
  { 1107 /* mfocrf */, PPC::MFOCRF, Convert__RegGPRC1_0__CRBitMask1_1, 0, { MCK_RegGPRC, MCK_CRBitMask }, 0},
  { 1114 /* mfspr */, PPC::MFTB8, Convert__RegG8RC1_0, 0, { MCK_RegG8RC, MCK_268 }, 0},
  { 1114 /* mfspr */, PPC::MFVRSAVE, Convert__RegGPRC1_0, 0, { MCK_RegGPRC, MCK_256 }, 0},
  { 1120 /* mfvscr */, PPC::MFVSCR, Convert__RegVRRC1_0, 0, { MCK_RegVRRC }, 0},
  { 1127 /* mr */, PPC::OR8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1130 /* mtcrf */, PPC::MTCRF8, Convert__CRBitMask1_0__RegG8RC1_1, 0, { MCK_CRBitMask, MCK_RegG8RC }, 0},
  { 1130 /* mtcrf */, PPC::MTCRF, Convert__CRBitMask1_0__RegGPRC1_1, 0, { MCK_CRBitMask, MCK_RegGPRC }, 0},
  { 1136 /* mtctr */, PPC::MTCTR8, Convert__RegG8RC1_0, 0, { MCK_RegG8RC }, 0},
  { 1136 /* mtctr */, PPC::MTCTR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, 0},
  { 1142 /* mtfsb0 */, PPC::MTFSB0, Convert__U5Imm1_0, 0, { MCK_U5Imm }, 0},
  { 1149 /* mtfsb1 */, PPC::MTFSB1, Convert__U5Imm1_0, 0, { MCK_U5Imm }, 0},
  { 1156 /* mtfsf */, PPC::MTFSF, Convert__Imm1_0__RegF8RC1_1, 0, { MCK_Imm, MCK_RegF8RC }, 0},
  { 1162 /* mtlr */, PPC::MTLR8, Convert__RegG8RC1_0, 0, { MCK_RegG8RC }, 0},
  { 1162 /* mtlr */, PPC::MTLR, Convert__RegGPRC1_0, 0, { MCK_RegGPRC }, 0},
  { 1167 /* mtspr */, PPC::MTVRSAVE, Convert__RegGPRC1_1, 0, { MCK_256, MCK_RegGPRC }, 0},
  { 1173 /* mtvscr */, PPC::MTVSCR, Convert__RegVRRC1_0, 0, { MCK_RegVRRC }, 0},
  { 1180 /* mulhd */, PPC::MULHD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1180 /* mulhd */, PPC::MULHDo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1186 /* mulhdu */, PPC::MULHDU, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1186 /* mulhdu */, PPC::MULHDUo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1193 /* mulhw */, PPC::MULHW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1193 /* mulhw */, PPC::MULHWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1199 /* mulhwu */, PPC::MULHWU, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1199 /* mulhwu */, PPC::MULHWUo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1206 /* mulld */, PPC::MULLD, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1206 /* mulld */, PPC::MULLDo, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1212 /* mulli */, PPC::MULLI, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, 0},
  { 1218 /* mullw */, PPC::MULLW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1218 /* mullw */, PPC::MULLWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1224 /* nand */, PPC::NAND8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1224 /* nand */, PPC::NAND, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1224 /* nand */, PPC::NAND8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1224 /* nand */, PPC::NANDo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1229 /* neg */, PPC::NEG8, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1229 /* neg */, PPC::NEG, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1229 /* neg */, PPC::NEG8o, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1229 /* neg */, PPC::NEGo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1233 /* nop */, PPC::NOP, Convert_NoOperands, 0, {  }, 0},
  { 1237 /* nor */, PPC::NOR8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1237 /* nor */, PPC::NOR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1237 /* nor */, PPC::NOR8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1237 /* nor */, PPC::NORo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1241 /* or */, PPC::OR8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1241 /* or */, PPC::OR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1241 /* or */, PPC::OR8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1241 /* or */, PPC::ORo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1244 /* orc */, PPC::ORC8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1244 /* orc */, PPC::ORC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1244 /* orc */, PPC::ORC8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1244 /* orc */, PPC::ORCo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1248 /* ori */, PPC::ORI8, Convert__RegG8RC1_0__RegG8RC1_1__U16Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U16Imm }, 0},
  { 1248 /* ori */, PPC::ORI, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, 0},
  { 1252 /* oris */, PPC::ORIS8, Convert__RegG8RC1_0__RegG8RC1_1__U16Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U16Imm }, 0},
  { 1252 /* oris */, PPC::ORIS, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, 0},
  { 1257 /* popcntd */, PPC::POPCNTD, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1257 /* popcntd */, PPC::POPCNTDo, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1265 /* popcntw */, PPC::POPCNTW, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1265 /* popcntw */, PPC::POPCNTWo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1273 /* rldcl */, PPC::RLDCL, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, 0},
  { 1273 /* rldcl */, PPC::RLDCLo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC, MCK_U6Imm }, 0},
  { 1279 /* rldicl */, PPC::RLDICL, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, 0},
  { 1279 /* rldicl */, PPC::RLDICLo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, 0},
  { 1286 /* rldicr */, PPC::RLDICR, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, 0},
  { 1286 /* rldicr */, PPC::RLDICRo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, 0},
  { 1293 /* rldimi */, PPC::RLDIMI, Convert__RegG8RC1_0__Tie0__RegG8RC1_1__U6Imm1_2__U6Imm1_3, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, 0},
  { 1293 /* rldimi */, PPC::RLDIMIo, Convert__RegG8RC1_1__Tie0__RegG8RC1_2__U6Imm1_3__U6Imm1_4, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm, MCK_U6Imm }, 0},
  { 1300 /* rlwimi */, PPC::RLWIMI, Convert__RegGPRC1_0__Tie0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, 0},
  { 1300 /* rlwimi */, PPC::RLWIMIo, Convert__RegGPRC1_1__Tie0__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, 0},
  { 1307 /* rlwinm */, PPC::RLWINM8, Convert__RegG8RC1_0__RegG8RC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, 0},
  { 1307 /* rlwinm */, PPC::RLWINM, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2__U5Imm1_3__U5Imm1_4, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, 0},
  { 1307 /* rlwinm */, PPC::RLWINM8o, Convert__RegG8RC1_1__RegG8RC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, 0},
  { 1307 /* rlwinm */, PPC::RLWINMo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4__U5Imm1_5, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm, MCK_U5Imm }, 0},
  { 1314 /* rlwnm */, PPC::RLWNM, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2__U5Imm1_3__U5Imm1_4, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, 0},
  { 1314 /* rlwnm */, PPC::RLWNMo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3__U5Imm1_4__U5Imm1_5, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm, MCK_U5Imm }, 0},
  { 1320 /* sld */, PPC::SLD, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, 0},
  { 1320 /* sld */, PPC::SLDo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, 0},
  { 1324 /* sldi */, PPC::SLDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, 0},
  { 1329 /* slw */, PPC::SLW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1329 /* slw */, PPC::SLWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1333 /* slwi */, PPC::SLWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, 0},
  { 1338 /* srad */, PPC::SRAD, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, 0},
  { 1338 /* srad */, PPC::SRADo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, 0},
  { 1343 /* sradi */, PPC::SRADI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, 0},
  { 1343 /* sradi */, PPC::SRADIo, Convert__RegG8RC1_1__RegG8RC1_2__U6Imm1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, 0},
  { 1349 /* sraw */, PPC::SRAW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1349 /* sraw */, PPC::SRAWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1354 /* srawi */, PPC::SRAWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, 0},
  { 1354 /* srawi */, PPC::SRAWIo, Convert__RegGPRC1_1__RegGPRC1_2__U5Imm1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, 0},
  { 1360 /* srd */, PPC::SRD, Convert__RegG8RC1_0__RegG8RC1_1__RegGPRC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, 0},
  { 1360 /* srd */, PPC::SRDo, Convert__RegG8RC1_1__RegG8RC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegGPRC }, 0},
  { 1364 /* srdi */, PPC::SRDI, Convert__RegG8RC1_0__RegG8RC1_1__U6Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U6Imm }, 0},
  { 1369 /* srw */, PPC::SRW, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1369 /* srw */, PPC::SRWo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1373 /* srwi */, PPC::SRWI, Convert__RegGPRC1_0__RegGPRC1_1__U5Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U5Imm }, 0},
  { 1378 /* stb */, PPC::STB8, Convert__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 1378 /* stb */, PPC::STB, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 1382 /* stbu */, PPC::STBU8, Convert__imm_0__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 1382 /* stbu */, PPC::STBU, Convert__imm_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 1387 /* stbux */, PPC::STBUX8, Convert__imm_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1387 /* stbux */, PPC::STBUX, Convert__imm_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1393 /* stbx */, PPC::STBX8, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1393 /* stbx */, PPC::STBX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1398 /* std */, PPC::STD, Convert__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, 0},
  { 1402 /* stdbrx */, PPC::STDBRX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1409 /* stdcx */, PPC::STDCX, Convert__RegG8RC1_1__RegGxRCNoR01_2__RegGxRC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1415 /* stdu */, PPC::STDU, Convert__imm_0__RegG8RC1_0__DispRIX1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRIX, MCK_RegGxRCNoR0 }, 0},
  { 1420 /* stdux */, PPC::STDUX, Convert__imm_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1426 /* stdx */, PPC::STDX, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1431 /* stfd */, PPC::STFD, Convert__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 1436 /* stfdu */, PPC::STFDU, Convert__imm_0__RegF8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 1442 /* stfdux */, PPC::STFDUX, Convert__imm_0__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1449 /* stfdx */, PPC::STFDX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1455 /* stfiwx */, PPC::STFIWX, Convert__RegF8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1462 /* stfs */, PPC::STFS, Convert__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 1467 /* stfsu */, PPC::STFSU, Convert__imm_0__RegF4RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegF4RC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 1473 /* stfsux */, PPC::STFSUX, Convert__imm_0__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1480 /* stfsx */, PPC::STFSX, Convert__RegF4RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegF4RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1486 /* sth */, PPC::STH8, Convert__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 1486 /* sth */, PPC::STH, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 1490 /* sthbrx */, PPC::STHBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1497 /* sthu */, PPC::STHU8, Convert__imm_0__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 1497 /* sthu */, PPC::STHU, Convert__imm_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 1502 /* sthux */, PPC::STHUX8, Convert__imm_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1502 /* sthux */, PPC::STHUX, Convert__imm_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1508 /* sthx */, PPC::STHX8, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1508 /* sthx */, PPC::STHX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1513 /* stvebx */, PPC::STVEBX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1520 /* stvehx */, PPC::STVEHX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1527 /* stvewx */, PPC::STVEWX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1534 /* stvx */, PPC::STVX, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1539 /* stvxl */, PPC::STVXL, Convert__RegVRRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegVRRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1545 /* stw */, PPC::STW8, Convert__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 1545 /* stw */, PPC::STW, Convert__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 1549 /* stwbrx */, PPC::STWBRX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1556 /* stwcx */, PPC::STWCX, Convert__RegGPRC1_1__RegGxRCNoR01_2__RegGxRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1562 /* stwu */, PPC::STWU8, Convert__imm_0__RegG8RC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegG8RC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 1562 /* stwu */, PPC::STWU, Convert__imm_0__RegGPRC1_0__DispRI1_1__RegGxRCNoR01_2, 0, { MCK_RegGPRC, MCK_DispRI, MCK_RegGxRCNoR0 }, 0},
  { 1567 /* stwux */, PPC::STWUX8, Convert__imm_0__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1567 /* stwux */, PPC::STWUX, Convert__imm_0__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1573 /* stwx */, PPC::STWX8, Convert__RegG8RC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegG8RC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1573 /* stwx */, PPC::STWX, Convert__RegGPRC1_0__RegGxRCNoR01_1__RegGxRC1_2, 0, { MCK_RegGPRC, MCK_RegGxRCNoR0, MCK_RegGxRC }, 0},
  { 1578 /* subf */, PPC::SUBF8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1578 /* subf */, PPC::SUBF, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1578 /* subf */, PPC::SUBF8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1578 /* subf */, PPC::SUBFo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1583 /* subfc */, PPC::SUBFC8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1583 /* subfc */, PPC::SUBFC, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1583 /* subfc */, PPC::SUBFC8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1583 /* subfc */, PPC::SUBFCo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1589 /* subfe */, PPC::SUBFE8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1589 /* subfe */, PPC::SUBFE, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1589 /* subfe */, PPC::SUBFE8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1589 /* subfe */, PPC::SUBFEo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1595 /* subfic */, PPC::SUBFIC8, Convert__RegG8RC1_0__RegG8RC1_1__S16Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_S16Imm }, 0},
  { 1595 /* subfic */, PPC::SUBFIC, Convert__RegGPRC1_0__RegGPRC1_1__S16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_S16Imm }, 0},
  { 1602 /* subfme */, PPC::SUBFME8, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1602 /* subfme */, PPC::SUBFME, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1602 /* subfme */, PPC::SUBFME8o, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1602 /* subfme */, PPC::SUBFMEo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1609 /* subfze */, PPC::SUBFZE8, Convert__RegG8RC1_0__RegG8RC1_1, 0, { MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1609 /* subfze */, PPC::SUBFZE, Convert__RegGPRC1_0__RegGPRC1_1, 0, { MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1609 /* subfze */, PPC::SUBFZE8o, Convert__RegG8RC1_1__RegG8RC1_2, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 1609 /* subfze */, PPC::SUBFZEo, Convert__RegGPRC1_1__RegGPRC1_2, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 1616 /* sync */, PPC::SYNC, Convert_NoOperands, 0, {  }, 0},
  { 1621 /* trap */, PPC::TRAP, Convert_NoOperands, 0, {  }, 0},
  { 1626 /* vaddcuw */, PPC::VADDCUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1634 /* vaddfp */, PPC::VADDFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1641 /* vaddsbs */, PPC::VADDSBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1649 /* vaddshs */, PPC::VADDSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1657 /* vaddsws */, PPC::VADDSWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1665 /* vaddubm */, PPC::VADDUBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1673 /* vaddubs */, PPC::VADDUBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1681 /* vadduhm */, PPC::VADDUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1689 /* vadduhs */, PPC::VADDUHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1697 /* vadduwm */, PPC::VADDUWM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1705 /* vadduws */, PPC::VADDUWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1713 /* vand */, PPC::VAND, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1718 /* vandc */, PPC::VANDC, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1724 /* vavgsb */, PPC::VAVGSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1731 /* vavgsh */, PPC::VAVGSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1738 /* vavgsw */, PPC::VAVGSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1745 /* vavgub */, PPC::VAVGUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1752 /* vavguh */, PPC::VAVGUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1759 /* vavguw */, PPC::VAVGUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1766 /* vcfsx */, PPC::VCFSX_0, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_CR0LT }, 0},
  { 1766 /* vcfsx */, PPC::VCFSX, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, 0},
  { 1772 /* vcfux */, PPC::VCFUX_0, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_CR0LT }, 0},
  { 1772 /* vcfux */, PPC::VCFUX, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, 0},
  { 1778 /* vcmpbfp */, PPC::VCMPBFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1778 /* vcmpbfp */, PPC::VCMPBFPo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1786 /* vcmpeqfp */, PPC::VCMPEQFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1786 /* vcmpeqfp */, PPC::VCMPEQFPo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1795 /* vcmpequb */, PPC::VCMPEQUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1795 /* vcmpequb */, PPC::VCMPEQUBo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1804 /* vcmpequh */, PPC::VCMPEQUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1804 /* vcmpequh */, PPC::VCMPEQUHo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1813 /* vcmpequw */, PPC::VCMPEQUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1813 /* vcmpequw */, PPC::VCMPEQUWo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1822 /* vcmpgefp */, PPC::VCMPGEFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1822 /* vcmpgefp */, PPC::VCMPGEFPo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1831 /* vcmpgtfp */, PPC::VCMPGTFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1831 /* vcmpgtfp */, PPC::VCMPGTFPo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1840 /* vcmpgtsb */, PPC::VCMPGTSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1840 /* vcmpgtsb */, PPC::VCMPGTSBo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1849 /* vcmpgtsh */, PPC::VCMPGTSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1849 /* vcmpgtsh */, PPC::VCMPGTSHo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1858 /* vcmpgtsw */, PPC::VCMPGTSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1858 /* vcmpgtsw */, PPC::VCMPGTSWo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1867 /* vcmpgtub */, PPC::VCMPGTUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1867 /* vcmpgtub */, PPC::VCMPGTUBo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1876 /* vcmpgtuh */, PPC::VCMPGTUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1876 /* vcmpgtuh */, PPC::VCMPGTUHo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1885 /* vcmpgtuw */, PPC::VCMPGTUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1885 /* vcmpgtuw */, PPC::VCMPGTUWo, Convert__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK__DOT_, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1894 /* vctsxs */, PPC::VCTSXS_0, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_CR0LT }, 0},
  { 1894 /* vctsxs */, PPC::VCTSXS, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, 0},
  { 1901 /* vctuxs */, PPC::VCTUXS_0, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_CR0LT }, 0},
  { 1901 /* vctuxs */, PPC::VCTUXS, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, 0},
  { 1908 /* vexptefp */, PPC::VEXPTEFP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1917 /* vlogefp */, PPC::VLOGEFP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1925 /* vmaddfp */, PPC::VMADDFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1933 /* vmaxfp */, PPC::VMAXFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1940 /* vmaxsb */, PPC::VMAXSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1947 /* vmaxsh */, PPC::VMAXSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1954 /* vmaxsw */, PPC::VMAXSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1961 /* vmaxub */, PPC::VMAXUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1968 /* vmaxuh */, PPC::VMAXUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1975 /* vmaxuw */, PPC::VMAXUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1982 /* vmhaddshs */, PPC::VMHADDSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 1992 /* vmhraddshs */, PPC::VMHRADDSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2003 /* vminfp */, PPC::VMINFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2010 /* vminsb */, PPC::VMINSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2017 /* vminsh */, PPC::VMINSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2024 /* vminsw */, PPC::VMINSW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2031 /* vminub */, PPC::VMINUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2038 /* vminuh */, PPC::VMINUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2045 /* vminuw */, PPC::VMINUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2052 /* vmladduhm */, PPC::VMLADDUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2062 /* vmrghb */, PPC::VMRGHB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2069 /* vmrghh */, PPC::VMRGHH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2076 /* vmrghw */, PPC::VMRGHW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2083 /* vmrglb */, PPC::VMRGLB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2090 /* vmrglh */, PPC::VMRGLH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2097 /* vmrglw */, PPC::VMRGLW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2104 /* vmsummbm */, PPC::VMSUMMBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2113 /* vmsumshm */, PPC::VMSUMSHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2122 /* vmsumshs */, PPC::VMSUMSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2131 /* vmsumubm */, PPC::VMSUMUBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2140 /* vmsumuhm */, PPC::VMSUMUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2149 /* vmsumuhs */, PPC::VMSUMUHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2158 /* vmulesb */, PPC::VMULESB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2166 /* vmulesh */, PPC::VMULESH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2174 /* vmuleub */, PPC::VMULEUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2182 /* vmuleuh */, PPC::VMULEUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2190 /* vmulosb */, PPC::VMULOSB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2198 /* vmulosh */, PPC::VMULOSH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2206 /* vmuloub */, PPC::VMULOUB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2214 /* vmulouh */, PPC::VMULOUH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2222 /* vnmsubfp */, PPC::VNMSUBFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2231 /* vnor */, PPC::VNOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2236 /* vor */, PPC::VOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2240 /* vperm */, PPC::VPERM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2246 /* vpkpx */, PPC::VPKPX, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2252 /* vpkshss */, PPC::VPKSHSS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2260 /* vpkshus */, PPC::VPKSHUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2268 /* vpkswss */, PPC::VPKSWSS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2276 /* vpkswus */, PPC::VPKSWUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2284 /* vpkuhum */, PPC::VPKUHUM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2292 /* vpkuhus */, PPC::VPKUHUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2300 /* vpkuwum */, PPC::VPKUWUM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2308 /* vpkuwus */, PPC::VPKUWUS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2316 /* vrefp */, PPC::VREFP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2322 /* vrfim */, PPC::VRFIM, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2328 /* vrfin */, PPC::VRFIN, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2334 /* vrfip */, PPC::VRFIP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2340 /* vrfiz */, PPC::VRFIZ, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2346 /* vrlb */, PPC::VRLB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2351 /* vrlh */, PPC::VRLH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2356 /* vrlw */, PPC::VRLW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2361 /* vrsqrtefp */, PPC::VRSQRTEFP, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2371 /* vsel */, PPC::VSEL, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__RegVRRC1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2376 /* vsl */, PPC::VSL, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2380 /* vslb */, PPC::VSLB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2385 /* vsldoi */, PPC::VSLDOI, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2__U5Imm1_3, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, 0},
  { 2392 /* vslh */, PPC::VSLH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2397 /* vslo */, PPC::VSLO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2402 /* vslw */, PPC::VSLW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2407 /* vspltb */, PPC::VSPLTB, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, 0},
  { 2414 /* vsplth */, PPC::VSPLTH, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, 0},
  { 2421 /* vspltisb */, PPC::VSPLTISB, Convert__RegVRRC1_0__S5Imm1_1, 0, { MCK_RegVRRC, MCK_S5Imm }, 0},
  { 2430 /* vspltish */, PPC::VSPLTISH, Convert__RegVRRC1_0__S5Imm1_1, 0, { MCK_RegVRRC, MCK_S5Imm }, 0},
  { 2439 /* vspltisw */, PPC::V_SETALLONES, Convert__RegVRRC1_0, 0, { MCK_RegVRRC, MCK__45_1 }, 0},
  { 2439 /* vspltisw */, PPC::VSPLTISW, Convert__RegVRRC1_0__S5Imm1_1, 0, { MCK_RegVRRC, MCK_S5Imm }, 0},
  { 2448 /* vspltw */, PPC::VSPLTW, Convert__RegVRRC1_0__U5Imm1_2__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_U5Imm }, 0},
  { 2455 /* vsr */, PPC::VSR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2459 /* vsrab */, PPC::VSRAB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2465 /* vsrah */, PPC::VSRAH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2471 /* vsraw */, PPC::VSRAW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2477 /* vsrb */, PPC::VSRB, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2482 /* vsrh */, PPC::VSRH, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2487 /* vsro */, PPC::VSRO, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2492 /* vsrw */, PPC::VSRW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2497 /* vsubcuw */, PPC::VSUBCUW, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2505 /* vsubfp */, PPC::VSUBFP, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2512 /* vsubsbs */, PPC::VSUBSBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2520 /* vsubshs */, PPC::VSUBSHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2528 /* vsubsws */, PPC::VSUBSWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2536 /* vsububm */, PPC::VSUBUBM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2544 /* vsububs */, PPC::VSUBUBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2552 /* vsubuhm */, PPC::VSUBUHM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2560 /* vsubuhs */, PPC::VSUBUHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2568 /* vsubuwm */, PPC::VSUBUWM, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2576 /* vsubuws */, PPC::VSUBUWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2584 /* vsum2sws */, PPC::VSUM2SWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2593 /* vsum4sbs */, PPC::VSUM4SBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2602 /* vsum4shs */, PPC::VSUM4SHS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2611 /* vsum4ubs */, PPC::VSUM4UBS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2620 /* vsumsws */, PPC::VSUMSWS, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2628 /* vupkhpx */, PPC::VUPKHPX, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2636 /* vupkhsb */, PPC::VUPKHSB, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2644 /* vupkhsh */, PPC::VUPKHSH, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2652 /* vupklpx */, PPC::VUPKLPX, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2660 /* vupklsb */, PPC::VUPKLSB, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2668 /* vupklsh */, PPC::VUPKLSH, Convert__RegVRRC1_0__RegVRRC1_1, 0, { MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2676 /* vxor */, PPC::VXOR, Convert__RegVRRC1_0__RegVRRC1_1__RegVRRC1_2, 0, { MCK_RegVRRC, MCK_RegVRRC, MCK_RegVRRC }, 0},
  { 2681 /* xor */, PPC::XOR8, Convert__RegG8RC1_0__RegG8RC1_1__RegG8RC1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 2681 /* xor */, PPC::XOR, Convert__RegGPRC1_0__RegGPRC1_1__RegGPRC1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 2681 /* xor */, PPC::XOR8o, Convert__RegG8RC1_1__RegG8RC1_2__RegG8RC1_3, 0, { MCK__DOT_, MCK_RegG8RC, MCK_RegG8RC, MCK_RegG8RC }, 0},
  { 2681 /* xor */, PPC::XORo, Convert__RegGPRC1_1__RegGPRC1_2__RegGPRC1_3, 0, { MCK__DOT_, MCK_RegGPRC, MCK_RegGPRC, MCK_RegGPRC }, 0},
  { 2685 /* xori */, PPC::XORI8, Convert__RegG8RC1_0__RegG8RC1_1__U16Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U16Imm }, 0},
  { 2685 /* xori */, PPC::XORI, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, 0},
  { 2690 /* xoris */, PPC::XORIS8, Convert__RegG8RC1_0__RegG8RC1_1__U16Imm1_2, 0, { MCK_RegG8RC, MCK_RegG8RC, MCK_U16Imm }, 0},
  { 2690 /* xoris */, PPC::XORIS, Convert__RegGPRC1_0__RegGPRC1_1__U16Imm1_2, 0, { MCK_RegGPRC, MCK_RegGPRC, MCK_U16Imm }, 0},
};

bool PPCAsmParser::
mnemonicIsValid(StringRef Mnemonic) {
  // Search the table.
  std::pair<const MatchEntry*, const MatchEntry*> MnemonicRange =
    std::equal_range(MatchTable, MatchTable+658, Mnemonic, LessOpcode());
  return MnemonicRange.first != MnemonicRange.second;
}

unsigned PPCAsmParser::
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
  StringRef Mnemonic = ((PPCOperand*)Operands[0])->getToken();

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
    std::equal_range(MatchTable, MatchTable+658, Mnemonic, LessOpcode());

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

#endif // GET_MATCHER_IMPLEMENTATION

