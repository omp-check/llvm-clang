/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Enum Values                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace SP {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    PROLOG_LABEL	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    KILL	= 5,
    EXTRACT_SUBREG	= 6,
    INSERT_SUBREG	= 7,
    IMPLICIT_DEF	= 8,
    SUBREG_TO_REG	= 9,
    COPY_TO_REGCLASS	= 10,
    DBG_VALUE	= 11,
    REG_SEQUENCE	= 12,
    COPY	= 13,
    BUNDLE	= 14,
    LIFETIME_START	= 15,
    LIFETIME_END	= 16,
    ADDCCri	= 17,
    ADDCCrr	= 18,
    ADDXri	= 19,
    ADDXrr	= 20,
    ADDri	= 21,
    ADDrr	= 22,
    ADJCALLSTACKDOWN	= 23,
    ADJCALLSTACKUP	= 24,
    ANDNri	= 25,
    ANDNrr	= 26,
    ANDri	= 27,
    ANDrr	= 28,
    BA	= 29,
    BCOND	= 30,
    BPXCC	= 31,
    CALL	= 32,
    FABSD	= 33,
    FABSS	= 34,
    FADDD	= 35,
    FADDS	= 36,
    FBCOND	= 37,
    FCMPD	= 38,
    FCMPS	= 39,
    FDIVD	= 40,
    FDIVS	= 41,
    FDTOI	= 42,
    FDTOS	= 43,
    FITOD	= 44,
    FITOS	= 45,
    FLUSHW	= 46,
    FMOVD	= 47,
    FMOVD_FCC	= 48,
    FMOVD_ICC	= 49,
    FMOVS	= 50,
    FMOVS_FCC	= 51,
    FMOVS_ICC	= 52,
    FMULD	= 53,
    FMULS	= 54,
    FNEGD	= 55,
    FNEGS	= 56,
    FSMULD	= 57,
    FSQRTD	= 58,
    FSQRTS	= 59,
    FSTOD	= 60,
    FSTOI	= 61,
    FSUBD	= 62,
    FSUBS	= 63,
    FpABSD	= 64,
    FpMOVD	= 65,
    FpNEGD	= 66,
    GETPCX	= 67,
    JMPLri	= 68,
    JMPLrr	= 69,
    LDDFri	= 70,
    LDDFrr	= 71,
    LDFri	= 72,
    LDFrr	= 73,
    LDSBri	= 74,
    LDSBrr	= 75,
    LDSHri	= 76,
    LDSHrr	= 77,
    LDSWri	= 78,
    LDSWrr	= 79,
    LDUBri	= 80,
    LDUBrr	= 81,
    LDUHri	= 82,
    LDUHrr	= 83,
    LDXri	= 84,
    LDXrr	= 85,
    LDri	= 86,
    LDrr	= 87,
    LEA_ADDri	= 88,
    MOVFCCri	= 89,
    MOVFCCrr	= 90,
    MOVICCri	= 91,
    MOVICCrr	= 92,
    MOVXCCri	= 93,
    MOVXCCrr	= 94,
    MULXri	= 95,
    MULXrr	= 96,
    NOP	= 97,
    ORNri	= 98,
    ORNrr	= 99,
    ORri	= 100,
    ORrr	= 101,
    POPCrr	= 102,
    RDY	= 103,
    RESTOREri	= 104,
    RESTORErr	= 105,
    RET	= 106,
    RETL	= 107,
    SAVEri	= 108,
    SAVErr	= 109,
    SDIVXri	= 110,
    SDIVXrr	= 111,
    SDIVri	= 112,
    SDIVrr	= 113,
    SELECT_CC_DFP_FCC	= 114,
    SELECT_CC_DFP_ICC	= 115,
    SELECT_CC_FP_FCC	= 116,
    SELECT_CC_FP_ICC	= 117,
    SELECT_CC_Int_FCC	= 118,
    SELECT_CC_Int_ICC	= 119,
    SETHIi	= 120,
    SLLXri	= 121,
    SLLXrr	= 122,
    SLLri	= 123,
    SLLrr	= 124,
    SMULri	= 125,
    SMULrr	= 126,
    SRAXri	= 127,
    SRAXrr	= 128,
    SRAri	= 129,
    SRArr	= 130,
    SRLXri	= 131,
    SRLXrr	= 132,
    SRLri	= 133,
    SRLrr	= 134,
    STBri	= 135,
    STBrr	= 136,
    STDFri	= 137,
    STDFrr	= 138,
    STFri	= 139,
    STFrr	= 140,
    STHri	= 141,
    STHrr	= 142,
    STXri	= 143,
    STXrr	= 144,
    STri	= 145,
    STrr	= 146,
    SUBCCri	= 147,
    SUBCCrr	= 148,
    SUBXCCrr	= 149,
    SUBXri	= 150,
    SUBXrr	= 151,
    SUBri	= 152,
    SUBrr	= 153,
    TA3	= 154,
    UDIVXri	= 155,
    UDIVXrr	= 156,
    UDIVri	= 157,
    UDIVrr	= 158,
    UMULri	= 159,
    UMULrr	= 160,
    UNIMP	= 161,
    WRYri	= 162,
    WRYrr	= 163,
    XNORri	= 164,
    XNORrr	= 165,
    XORri	= 166,
    XORrr	= 167,
    INSTRUCTION_LIST_END = 168
  };
}
} // End llvm namespace 
#endif // GET_INSTRINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Descriptors                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const uint16_t ImplicitList1[] = { SP::ICC, 0 };
static const uint16_t ImplicitList2[] = { SP::O6, 0 };
static const uint16_t ImplicitList3[] = { SP::O0, SP::O1, SP::O2, SP::O3, SP::O4, SP::O5, SP::O7, SP::G1, SP::G2, SP::G3, SP::G4, SP::G5, SP::G6, SP::G7, SP::D0, SP::D1, SP::D2, SP::D3, SP::D4, SP::D5, SP::D6, SP::D7, SP::D8, SP::D9, SP::D10, SP::D11, SP::D12, SP::D13, SP::D14, SP::D15, SP::ICC, SP::FCC, SP::Y, 0 };
static const uint16_t ImplicitList4[] = { SP::FCC, 0 };
static const uint16_t ImplicitList5[] = { SP::O7, 0 };
static const uint16_t ImplicitList6[] = { SP::Y, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc SparcInsts[] = {
  { 0,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #2 = PROLOG_LABEL
  { 3,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #5 = KILL
  { 6,	3,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo3 },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo4 },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo6 },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo3 },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #11 = DBG_VALUE
  { 12,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #12 = REG_SEQUENCE
  { 13,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo7 },  // Inst #13 = COPY
  { 14,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #14 = BUNDLE
  { 15,	1,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #15 = LIFETIME_START
  { 16,	1,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #16 = LIFETIME_END
  { 17,	3,	1,	0,	0,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #17 = ADDCCri
  { 18,	3,	1,	0,	0,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #18 = ADDCCrr
  { 19,	3,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo8 },  // Inst #19 = ADDXri
  { 20,	3,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo9 },  // Inst #20 = ADDXrr
  { 21,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #21 = ADDri
  { 22,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #22 = ADDrr
  { 23,	1,	0,	0,	0,	0, 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo2 },  // Inst #23 = ADJCALLSTACKDOWN
  { 24,	2,	0,	0,	0,	0, 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo10 },  // Inst #24 = ADJCALLSTACKUP
  { 25,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #25 = ANDNri
  { 26,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #26 = ANDNrr
  { 27,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #27 = ANDri
  { 28,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #28 = ANDrr
  { 29,	1,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #29 = BA
  { 30,	2,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, ImplicitList1, NULL, OperandInfo7 },  // Inst #30 = BCOND
  { 31,	2,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, ImplicitList1, NULL, OperandInfo7 },  // Inst #31 = BPXCC
  { 32,	1,	0,	0,	0,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Variadic), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo5 },  // Inst #32 = CALL
  { 33,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #33 = FABSD
  { 34,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #34 = FABSS
  { 35,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #35 = FADDD
  { 36,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #36 = FADDS
  { 37,	2,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, ImplicitList4, NULL, OperandInfo7 },  // Inst #37 = FBCOND
  { 38,	2,	0,	0,	0,	0, 0x0ULL, NULL, ImplicitList4, OperandInfo11 },  // Inst #38 = FCMPD
  { 39,	2,	0,	0,	0,	0, 0x0ULL, NULL, ImplicitList4, OperandInfo12 },  // Inst #39 = FCMPS
  { 40,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #40 = FDIVD
  { 41,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #41 = FDIVS
  { 42,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #42 = FDTOI
  { 43,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #43 = FDTOS
  { 44,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #44 = FITOD
  { 45,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #45 = FITOS
  { 46,	0,	0,	0,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #46 = FLUSHW
  { 47,	2,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #47 = FMOVD
  { 48,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList4, NULL, OperandInfo17 },  // Inst #48 = FMOVD_FCC
  { 49,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo17 },  // Inst #49 = FMOVD_ICC
  { 50,	2,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #50 = FMOVS
  { 51,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList4, NULL, OperandInfo18 },  // Inst #51 = FMOVS_FCC
  { 52,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo18 },  // Inst #52 = FMOVS_ICC
  { 53,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #53 = FMULD
  { 54,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #54 = FMULS
  { 55,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #55 = FNEGD
  { 56,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #56 = FNEGS
  { 57,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #57 = FSMULD
  { 58,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #58 = FSQRTD
  { 59,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #59 = FSQRTS
  { 60,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #60 = FSTOD
  { 61,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #61 = FSTOI
  { 62,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #62 = FSUBD
  { 63,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #63 = FSUBS
  { 64,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #64 = FpABSD
  { 65,	2,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #65 = FpMOVD
  { 66,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #66 = FpNEGD
  { 67,	1,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList5, OperandInfo5 },  // Inst #67 = GETPCX
  { 68,	2,	0,	0,	0,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Variadic), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo20 },  // Inst #68 = JMPLri
  { 69,	2,	0,	0,	0,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Variadic), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo21 },  // Inst #69 = JMPLrr
  { 70,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #70 = LDDFri
  { 71,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #71 = LDDFrr
  { 72,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #72 = LDFri
  { 73,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #73 = LDFrr
  { 74,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #74 = LDSBri
  { 75,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #75 = LDSBrr
  { 76,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #76 = LDSHri
  { 77,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #77 = LDSHrr
  { 78,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #78 = LDSWri
  { 79,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #79 = LDSWrr
  { 80,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #80 = LDUBri
  { 81,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #81 = LDUBrr
  { 82,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #82 = LDUHri
  { 83,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #83 = LDUHrr
  { 84,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #84 = LDXri
  { 85,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #85 = LDXrr
  { 86,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #86 = LDri
  { 87,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #87 = LDrr
  { 88,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #88 = LEA_ADDri
  { 89,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList4, NULL, OperandInfo30 },  // Inst #89 = MOVFCCri
  { 90,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList4, NULL, OperandInfo31 },  // Inst #90 = MOVFCCrr
  { 91,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo30 },  // Inst #91 = MOVICCri
  { 92,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo31 },  // Inst #92 = MOVICCrr
  { 93,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo32 },  // Inst #93 = MOVXCCri
  { 94,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo33 },  // Inst #94 = MOVXCCrr
  { 95,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #95 = MULXri
  { 96,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #96 = MULXrr
  { 97,	0,	0,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #97 = NOP
  { 98,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #98 = ORNri
  { 99,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #99 = ORNrr
  { 100,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #100 = ORri
  { 101,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #101 = ORrr
  { 102,	2,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo35 },  // Inst #102 = POPCrr
  { 103,	1,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList6, NULL, OperandInfo36 },  // Inst #103 = RDY
  { 104,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #104 = RESTOREri
  { 105,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #105 = RESTORErr
  { 106,	1,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #106 = RET
  { 107,	1,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #107 = RETL
  { 108,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #108 = SAVEri
  { 109,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #109 = SAVErr
  { 110,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #110 = SDIVXri
  { 111,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #111 = SDIVXrr
  { 112,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList6, OperandInfo8 },  // Inst #112 = SDIVri
  { 113,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList6, OperandInfo9 },  // Inst #113 = SDIVrr
  { 114,	4,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, NULL, OperandInfo37 },  // Inst #114 = SELECT_CC_DFP_FCC
  { 115,	4,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, NULL, OperandInfo37 },  // Inst #115 = SELECT_CC_DFP_ICC
  { 116,	4,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, NULL, OperandInfo38 },  // Inst #116 = SELECT_CC_FP_FCC
  { 117,	4,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, NULL, OperandInfo38 },  // Inst #117 = SELECT_CC_FP_ICC
  { 118,	4,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, NULL, OperandInfo39 },  // Inst #118 = SELECT_CC_Int_FCC
  { 119,	4,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, NULL, OperandInfo39 },  // Inst #119 = SELECT_CC_Int_ICC
  { 120,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo40 },  // Inst #120 = SETHIi
  { 121,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #121 = SLLXri
  { 122,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo42 },  // Inst #122 = SLLXrr
  { 123,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #123 = SLLri
  { 124,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #124 = SLLrr
  { 125,	3,	1,	0,	0,	0, 0x0ULL, NULL, ImplicitList6, OperandInfo8 },  // Inst #125 = SMULri
  { 126,	3,	1,	0,	0,	0, 0x0ULL, NULL, ImplicitList6, OperandInfo9 },  // Inst #126 = SMULrr
  { 127,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #127 = SRAXri
  { 128,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo42 },  // Inst #128 = SRAXrr
  { 129,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #129 = SRAri
  { 130,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #130 = SRArr
  { 131,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #131 = SRLXri
  { 132,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo42 },  // Inst #132 = SRLXrr
  { 133,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #133 = SRLri
  { 134,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #134 = SRLrr
  { 135,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo43 },  // Inst #135 = STBri
  { 136,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo44 },  // Inst #136 = STBrr
  { 137,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #137 = STDFri
  { 138,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #138 = STDFrr
  { 139,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo47 },  // Inst #139 = STFri
  { 140,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo48 },  // Inst #140 = STFrr
  { 141,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo43 },  // Inst #141 = STHri
  { 142,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo44 },  // Inst #142 = STHrr
  { 143,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo49 },  // Inst #143 = STXri
  { 144,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo50 },  // Inst #144 = STXrr
  { 145,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo43 },  // Inst #145 = STri
  { 146,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo44 },  // Inst #146 = STrr
  { 147,	3,	1,	0,	0,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #147 = SUBCCri
  { 148,	3,	1,	0,	0,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #148 = SUBCCrr
  { 149,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo9 },  // Inst #149 = SUBXCCrr
  { 150,	3,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo8 },  // Inst #150 = SUBXri
  { 151,	3,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo9 },  // Inst #151 = SUBXrr
  { 152,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #152 = SUBri
  { 153,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #153 = SUBrr
  { 154,	0,	0,	0,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #154 = TA3
  { 155,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #155 = UDIVXri
  { 156,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #156 = UDIVXrr
  { 157,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList6, OperandInfo8 },  // Inst #157 = UDIVri
  { 158,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList6, OperandInfo9 },  // Inst #158 = UDIVrr
  { 159,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList6, OperandInfo8 },  // Inst #159 = UMULri
  { 160,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList6, OperandInfo9 },  // Inst #160 = UMULrr
  { 161,	1,	0,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #161 = UNIMP
  { 162,	2,	0,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList6, OperandInfo40 },  // Inst #162 = WRYri
  { 163,	2,	0,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList6, OperandInfo35 },  // Inst #163 = WRYrr
  { 164,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #164 = XNORri
  { 165,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #165 = XNORrr
  { 166,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #166 = XORri
  { 167,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #167 = XORrr
};

extern const char SparcInstrNameData[] = {
  /* 0 */ 'T', 'A', '3', 0,
  /* 4 */ 'B', 'A', 0,
  /* 7 */ 'F', 'M', 'O', 'V', 'D', '_', 'F', 'C', 'C', 0,
  /* 17 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'D', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 35 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 52 */ 'F', 'M', 'O', 'V', 'S', '_', 'F', 'C', 'C', 0,
  /* 62 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', 'n', 't', '_', 'F', 'C', 'C', 0,
  /* 80 */ 'F', 'M', 'O', 'V', 'D', '_', 'I', 'C', 'C', 0,
  /* 90 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'D', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 108 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 125 */ 'F', 'M', 'O', 'V', 'S', '_', 'I', 'C', 'C', 0,
  /* 135 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', 'n', 't', '_', 'I', 'C', 'C', 0,
  /* 153 */ 'B', 'P', 'X', 'C', 'C', 0,
  /* 159 */ 'F', 'S', 'U', 'B', 'D', 0,
  /* 165 */ 'F', 'A', 'D', 'D', 'D', 0,
  /* 171 */ 'F', 'N', 'E', 'G', 'D', 0,
  /* 177 */ 'F', 'p', 'N', 'E', 'G', 'D', 0,
  /* 184 */ 'F', 'M', 'U', 'L', 'D', 0,
  /* 190 */ 'F', 'S', 'M', 'U', 'L', 'D', 0,
  /* 197 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 210 */ 'F', 'B', 'C', 'O', 'N', 'D', 0,
  /* 217 */ 'F', 'I', 'T', 'O', 'D', 0,
  /* 223 */ 'F', 'S', 'T', 'O', 'D', 0,
  /* 229 */ 'F', 'C', 'M', 'P', 'D', 0,
  /* 235 */ 'F', 'A', 'B', 'S', 'D', 0,
  /* 241 */ 'F', 'p', 'A', 'B', 'S', 'D', 0,
  /* 248 */ 'F', 'S', 'Q', 'R', 'T', 'D', 0,
  /* 255 */ 'F', 'D', 'I', 'V', 'D', 0,
  /* 261 */ 'F', 'M', 'O', 'V', 'D', 0,
  /* 267 */ 'F', 'p', 'M', 'O', 'V', 'D', 0,
  /* 274 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 287 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 294 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 304 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 317 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 332 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 346 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 360 */ 'P', 'H', 'I', 0,
  /* 364 */ 'F', 'D', 'T', 'O', 'I', 0,
  /* 370 */ 'F', 'S', 'T', 'O', 'I', 0,
  /* 376 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 385 */ 'P', 'R', 'O', 'L', 'O', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 398 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 407 */ 'C', 'A', 'L', 'L', 0,
  /* 412 */ 'K', 'I', 'L', 'L', 0,
  /* 417 */ 'R', 'E', 'T', 'L', 0,
  /* 422 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 432 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 449 */ 'U', 'N', 'I', 'M', 'P', 0,
  /* 455 */ 'N', 'O', 'P', 0,
  /* 459 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 474 */ 'F', 'S', 'U', 'B', 'S', 0,
  /* 480 */ 'F', 'A', 'D', 'D', 'S', 0,
  /* 486 */ 'F', 'N', 'E', 'G', 'S', 0,
  /* 492 */ 'F', 'M', 'U', 'L', 'S', 0,
  /* 498 */ 'F', 'D', 'T', 'O', 'S', 0,
  /* 504 */ 'F', 'I', 'T', 'O', 'S', 0,
  /* 510 */ 'F', 'C', 'M', 'P', 'S', 0,
  /* 516 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 533 */ 'F', 'A', 'B', 'S', 'S', 0,
  /* 539 */ 'F', 'S', 'Q', 'R', 'T', 'S', 0,
  /* 546 */ 'F', 'D', 'I', 'V', 'S', 0,
  /* 552 */ 'F', 'M', 'O', 'V', 'S', 0,
  /* 558 */ 'R', 'E', 'T', 0,
  /* 562 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 577 */ 'F', 'L', 'U', 'S', 'H', 'W', 0,
  /* 584 */ 'G', 'E', 'T', 'P', 'C', 'X', 0,
  /* 591 */ 'R', 'D', 'Y', 0,
  /* 595 */ 'C', 'O', 'P', 'Y', 0,
  /* 600 */ 'S', 'E', 'T', 'H', 'I', 'i', 0,
  /* 607 */ 'S', 'R', 'A', 'r', 'i', 0,
  /* 613 */ 'L', 'D', 'S', 'B', 'r', 'i', 0,
  /* 620 */ 'S', 'T', 'B', 'r', 'i', 0,
  /* 626 */ 'L', 'D', 'U', 'B', 'r', 'i', 0,
  /* 633 */ 'S', 'U', 'B', 'r', 'i', 0,
  /* 639 */ 'S', 'U', 'B', 'C', 'C', 'r', 'i', 0,
  /* 647 */ 'A', 'D', 'D', 'C', 'C', 'r', 'i', 0,
  /* 655 */ 'M', 'O', 'V', 'F', 'C', 'C', 'r', 'i', 0,
  /* 664 */ 'M', 'O', 'V', 'I', 'C', 'C', 'r', 'i', 0,
  /* 673 */ 'M', 'O', 'V', 'X', 'C', 'C', 'r', 'i', 0,
  /* 682 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'r', 'i', 0,
  /* 692 */ 'L', 'D', 'r', 'i', 0,
  /* 697 */ 'A', 'N', 'D', 'r', 'i', 0,
  /* 703 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', 'r', 'i', 0,
  /* 713 */ 'S', 'A', 'V', 'E', 'r', 'i', 0,
  /* 720 */ 'L', 'D', 'D', 'F', 'r', 'i', 0,
  /* 727 */ 'L', 'D', 'F', 'r', 'i', 0,
  /* 733 */ 'S', 'T', 'D', 'F', 'r', 'i', 0,
  /* 740 */ 'S', 'T', 'F', 'r', 'i', 0,
  /* 746 */ 'L', 'D', 'S', 'H', 'r', 'i', 0,
  /* 753 */ 'S', 'T', 'H', 'r', 'i', 0,
  /* 759 */ 'L', 'D', 'U', 'H', 'r', 'i', 0,
  /* 766 */ 'S', 'L', 'L', 'r', 'i', 0,
  /* 772 */ 'J', 'M', 'P', 'L', 'r', 'i', 0,
  /* 779 */ 'S', 'R', 'L', 'r', 'i', 0,
  /* 785 */ 'S', 'M', 'U', 'L', 'r', 'i', 0,
  /* 792 */ 'U', 'M', 'U', 'L', 'r', 'i', 0,
  /* 799 */ 'A', 'N', 'D', 'N', 'r', 'i', 0,
  /* 806 */ 'O', 'R', 'N', 'r', 'i', 0,
  /* 812 */ 'X', 'N', 'O', 'R', 'r', 'i', 0,
  /* 819 */ 'X', 'O', 'R', 'r', 'i', 0,
  /* 825 */ 'S', 'T', 'r', 'i', 0,
  /* 830 */ 'S', 'D', 'I', 'V', 'r', 'i', 0,
  /* 837 */ 'U', 'D', 'I', 'V', 'r', 'i', 0,
  /* 844 */ 'L', 'D', 'S', 'W', 'r', 'i', 0,
  /* 851 */ 'S', 'R', 'A', 'X', 'r', 'i', 0,
  /* 858 */ 'S', 'U', 'B', 'X', 'r', 'i', 0,
  /* 865 */ 'A', 'D', 'D', 'X', 'r', 'i', 0,
  /* 872 */ 'L', 'D', 'X', 'r', 'i', 0,
  /* 878 */ 'S', 'L', 'L', 'X', 'r', 'i', 0,
  /* 885 */ 'S', 'R', 'L', 'X', 'r', 'i', 0,
  /* 892 */ 'M', 'U', 'L', 'X', 'r', 'i', 0,
  /* 899 */ 'S', 'T', 'X', 'r', 'i', 0,
  /* 905 */ 'S', 'D', 'I', 'V', 'X', 'r', 'i', 0,
  /* 913 */ 'U', 'D', 'I', 'V', 'X', 'r', 'i', 0,
  /* 921 */ 'W', 'R', 'Y', 'r', 'i', 0,
  /* 927 */ 'S', 'R', 'A', 'r', 'r', 0,
  /* 933 */ 'L', 'D', 'S', 'B', 'r', 'r', 0,
  /* 940 */ 'S', 'T', 'B', 'r', 'r', 0,
  /* 946 */ 'L', 'D', 'U', 'B', 'r', 'r', 0,
  /* 953 */ 'S', 'U', 'B', 'r', 'r', 0,
  /* 959 */ 'S', 'U', 'B', 'C', 'C', 'r', 'r', 0,
  /* 967 */ 'A', 'D', 'D', 'C', 'C', 'r', 'r', 0,
  /* 975 */ 'M', 'O', 'V', 'F', 'C', 'C', 'r', 'r', 0,
  /* 984 */ 'M', 'O', 'V', 'I', 'C', 'C', 'r', 'r', 0,
  /* 993 */ 'S', 'U', 'B', 'X', 'C', 'C', 'r', 'r', 0,
  /* 1002 */ 'M', 'O', 'V', 'X', 'C', 'C', 'r', 'r', 0,
  /* 1011 */ 'P', 'O', 'P', 'C', 'r', 'r', 0,
  /* 1018 */ 'A', 'D', 'D', 'r', 'r', 0,
  /* 1024 */ 'L', 'D', 'r', 'r', 0,
  /* 1029 */ 'A', 'N', 'D', 'r', 'r', 0,
  /* 1035 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', 'r', 'r', 0,
  /* 1045 */ 'S', 'A', 'V', 'E', 'r', 'r', 0,
  /* 1052 */ 'L', 'D', 'D', 'F', 'r', 'r', 0,
  /* 1059 */ 'L', 'D', 'F', 'r', 'r', 0,
  /* 1065 */ 'S', 'T', 'D', 'F', 'r', 'r', 0,
  /* 1072 */ 'S', 'T', 'F', 'r', 'r', 0,
  /* 1078 */ 'L', 'D', 'S', 'H', 'r', 'r', 0,
  /* 1085 */ 'S', 'T', 'H', 'r', 'r', 0,
  /* 1091 */ 'L', 'D', 'U', 'H', 'r', 'r', 0,
  /* 1098 */ 'S', 'L', 'L', 'r', 'r', 0,
  /* 1104 */ 'J', 'M', 'P', 'L', 'r', 'r', 0,
  /* 1111 */ 'S', 'R', 'L', 'r', 'r', 0,
  /* 1117 */ 'S', 'M', 'U', 'L', 'r', 'r', 0,
  /* 1124 */ 'U', 'M', 'U', 'L', 'r', 'r', 0,
  /* 1131 */ 'A', 'N', 'D', 'N', 'r', 'r', 0,
  /* 1138 */ 'O', 'R', 'N', 'r', 'r', 0,
  /* 1144 */ 'X', 'N', 'O', 'R', 'r', 'r', 0,
  /* 1151 */ 'X', 'O', 'R', 'r', 'r', 0,
  /* 1157 */ 'S', 'T', 'r', 'r', 0,
  /* 1162 */ 'S', 'D', 'I', 'V', 'r', 'r', 0,
  /* 1169 */ 'U', 'D', 'I', 'V', 'r', 'r', 0,
  /* 1176 */ 'L', 'D', 'S', 'W', 'r', 'r', 0,
  /* 1183 */ 'S', 'R', 'A', 'X', 'r', 'r', 0,
  /* 1190 */ 'S', 'U', 'B', 'X', 'r', 'r', 0,
  /* 1197 */ 'A', 'D', 'D', 'X', 'r', 'r', 0,
  /* 1204 */ 'L', 'D', 'X', 'r', 'r', 0,
  /* 1210 */ 'S', 'L', 'L', 'X', 'r', 'r', 0,
  /* 1217 */ 'S', 'R', 'L', 'X', 'r', 'r', 0,
  /* 1224 */ 'M', 'U', 'L', 'X', 'r', 'r', 0,
  /* 1231 */ 'S', 'T', 'X', 'r', 'r', 0,
  /* 1237 */ 'S', 'D', 'I', 'V', 'X', 'r', 'r', 0,
  /* 1245 */ 'U', 'D', 'I', 'V', 'X', 'r', 'r', 0,
  /* 1253 */ 'W', 'R', 'Y', 'r', 'r', 0,
};

extern const unsigned SparcInstrNameIndices[] = {
    360U, 422U, 385U, 398U, 376U, 412U, 317U, 332U, 
    304U, 346U, 516U, 294U, 274U, 595U, 287U, 562U, 
    197U, 647U, 967U, 865U, 1197U, 686U, 1018U, 432U, 
    459U, 799U, 1131U, 697U, 1029U, 4U, 211U, 153U, 
    407U, 235U, 533U, 165U, 480U, 210U, 229U, 510U, 
    255U, 546U, 364U, 498U, 217U, 504U, 577U, 261U, 
    7U, 80U, 552U, 52U, 125U, 184U, 492U, 171U, 
    486U, 190U, 248U, 539U, 223U, 370U, 159U, 474U, 
    241U, 267U, 177U, 584U, 772U, 1104U, 720U, 1052U, 
    727U, 1059U, 613U, 933U, 746U, 1078U, 844U, 1176U, 
    626U, 946U, 759U, 1091U, 872U, 1204U, 692U, 1024U, 
    682U, 655U, 975U, 664U, 984U, 673U, 1002U, 892U, 
    1224U, 455U, 806U, 1138U, 814U, 1146U, 1011U, 591U, 
    703U, 1035U, 558U, 417U, 713U, 1045U, 905U, 1237U, 
    830U, 1162U, 17U, 90U, 35U, 108U, 62U, 135U, 
    600U, 878U, 1210U, 766U, 1098U, 785U, 1117U, 851U, 
    1183U, 607U, 927U, 885U, 1217U, 779U, 1111U, 620U, 
    940U, 733U, 1065U, 740U, 1072U, 753U, 1085U, 899U, 
    1231U, 825U, 1157U, 639U, 959U, 993U, 858U, 1190U, 
    633U, 953U, 0U, 913U, 1245U, 837U, 1169U, 792U, 
    1124U, 449U, 921U, 1253U, 812U, 1144U, 819U, 1151U, 
};

static inline void InitSparcMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(SparcInsts, SparcInstrNameIndices, SparcInstrNameData, 168);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct SparcGenInstrInfo : public TargetInstrInfo {
  explicit SparcGenInstrInfo(int SO = -1, int DO = -1);
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR
#undef GET_INSTRINFO_CTOR
namespace llvm {
extern const MCInstrDesc SparcInsts[];
extern const unsigned SparcInstrNameIndices[];
extern const char SparcInstrNameData[];
SparcGenInstrInfo::SparcGenInstrInfo(int SO, int DO)
  : TargetInstrInfo(SO, DO) {
  InitMCInstrInfo(SparcInsts, SparcInstrNameIndices, SparcInstrNameData, 168);
}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR

