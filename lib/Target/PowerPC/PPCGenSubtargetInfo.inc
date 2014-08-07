/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Subtarget Enumeration Source Fragment                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM
namespace llvm {
namespace PPC {
  const uint64_t Directive32 = 1ULL << 0;
  const uint64_t Directive64 = 1ULL << 1;
  const uint64_t Directive440 = 1ULL << 2;
  const uint64_t Directive601 = 1ULL << 3;
  const uint64_t Directive602 = 1ULL << 4;
  const uint64_t Directive603 = 1ULL << 5;
  const uint64_t Directive604 = 1ULL << 6;
  const uint64_t Directive620 = 1ULL << 7;
  const uint64_t Directive750 = 1ULL << 8;
  const uint64_t Directive970 = 1ULL << 9;
  const uint64_t Directive7400 = 1ULL << 10;
  const uint64_t DirectiveA2 = 1ULL << 11;
  const uint64_t DirectiveE500mc = 1ULL << 12;
  const uint64_t DirectiveE5500 = 1ULL << 13;
  const uint64_t DirectivePwr3 = 1ULL << 14;
  const uint64_t DirectivePwr4 = 1ULL << 15;
  const uint64_t DirectivePwr5 = 1ULL << 16;
  const uint64_t DirectivePwr5x = 1ULL << 17;
  const uint64_t DirectivePwr6 = 1ULL << 18;
  const uint64_t DirectivePwr6x = 1ULL << 19;
  const uint64_t DirectivePwr7 = 1ULL << 20;
  const uint64_t Feature64Bit = 1ULL << 21;
  const uint64_t Feature64BitRegs = 1ULL << 22;
  const uint64_t FeatureAltivec = 1ULL << 23;
  const uint64_t FeatureBookE = 1ULL << 24;
  const uint64_t FeatureFPCVT = 1ULL << 25;
  const uint64_t FeatureFPRND = 1ULL << 26;
  const uint64_t FeatureFRE = 1ULL << 27;
  const uint64_t FeatureFRES = 1ULL << 28;
  const uint64_t FeatureFRSQRTE = 1ULL << 29;
  const uint64_t FeatureFRSQRTES = 1ULL << 30;
  const uint64_t FeatureFSqrt = 1ULL << 31;
  const uint64_t FeatureISEL = 1ULL << 32;
  const uint64_t FeatureLDBRX = 1ULL << 33;
  const uint64_t FeatureLFIWAX = 1ULL << 34;
  const uint64_t FeatureMFOCRF = 1ULL << 35;
  const uint64_t FeaturePOPCNTD = 1ULL << 36;
  const uint64_t FeatureQPX = 1ULL << 37;
  const uint64_t FeatureRecipPrec = 1ULL << 38;
  const uint64_t FeatureSTFIWX = 1ULL << 39;
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV PPCFeatureKV[] = {
  { "64bit", "Enable 64-bit instructions", PPC::Feature64Bit, 0ULL },
  { "64bitregs", "Enable 64-bit registers usage for ppc32 [beta]", PPC::Feature64BitRegs, 0ULL },
  { "altivec", "Enable Altivec instructions", PPC::FeatureAltivec, 0ULL },
  { "booke", "Enable Book E instructions", PPC::FeatureBookE, 0ULL },
  { "fpcvt", "Enable fc[ft]* (unsigned and single-precision) and lfiwzx instructions", PPC::FeatureFPCVT, 0ULL },
  { "fprnd", "Enable the fri[mnpz] instructions", PPC::FeatureFPRND, 0ULL },
  { "fre", "Enable the fre instruction", PPC::FeatureFRE, 0ULL },
  { "fres", "Enable the fres instruction", PPC::FeatureFRES, 0ULL },
  { "frsqrte", "Enable the frsqrte instruction", PPC::FeatureFRSQRTE, 0ULL },
  { "frsqrtes", "Enable the frsqrtes instruction", PPC::FeatureFRSQRTES, 0ULL },
  { "fsqrt", "Enable the fsqrt instruction", PPC::FeatureFSqrt, 0ULL },
  { "isel", "Enable the isel instruction", PPC::FeatureISEL, 0ULL },
  { "ldbrx", "Enable the ldbrx instruction", PPC::FeatureLDBRX, 0ULL },
  { "lfiwax", "Enable the lfiwax instruction", PPC::FeatureLFIWAX, 0ULL },
  { "mfocrf", "Enable the MFOCRF instruction", PPC::FeatureMFOCRF, 0ULL },
  { "popcntd", "Enable the popcnt[dw] instructions", PPC::FeaturePOPCNTD, 0ULL },
  { "qpx", "Enable QPX instructions", PPC::FeatureQPX, 0ULL },
  { "recipprec", "Assume higher precision reciprocal estimates", PPC::FeatureRecipPrec, 0ULL },
  { "stfiwx", "Enable the stfiwx instruction", PPC::FeatureSTFIWX, 0ULL }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV PPCSubTypeKV[] = {
  { "440", "Select the 440 processor", PPC::Directive440 | PPC::FeatureISEL | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureBookE, 0ULL },
  { "450", "Select the 450 processor", PPC::Directive440 | PPC::FeatureISEL | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureBookE, 0ULL },
  { "601", "Select the 601 processor", PPC::Directive601, 0ULL },
  { "602", "Select the 602 processor", PPC::Directive602, 0ULL },
  { "603", "Select the 603 processor", PPC::Directive603 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "603e", "Select the 603e processor", PPC::Directive603 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "603ev", "Select the 603ev processor", PPC::Directive603 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "604", "Select the 604 processor", PPC::Directive604 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "604e", "Select the 604e processor", PPC::Directive604 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "620", "Select the 620 processor", PPC::Directive620 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "7400", "Select the 7400 processor", PPC::Directive7400 | PPC::FeatureAltivec | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "7450", "Select the 7450 processor", PPC::Directive7400 | PPC::FeatureAltivec | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "750", "Select the 750 processor", PPC::Directive750 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "970", "Select the 970 processor", PPC::Directive970 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "a2", "Select the a2 processor", PPC::DirectiveA2 | PPC::FeatureBookE | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::FeatureFPCVT | PPC::FeatureISEL | PPC::FeaturePOPCNTD | PPC::FeatureLDBRX | PPC::Feature64Bit, 0ULL },
  { "a2q", "Select the a2q processor", PPC::DirectiveA2 | PPC::FeatureBookE | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::FeatureFPCVT | PPC::FeatureISEL | PPC::FeaturePOPCNTD | PPC::FeatureLDBRX | PPC::Feature64Bit | PPC::FeatureQPX, 0ULL },
  { "e500mc", "Select the e500mc processor", PPC::DirectiveE500mc | PPC::FeatureMFOCRF | PPC::FeatureSTFIWX | PPC::FeatureBookE | PPC::FeatureISEL, 0ULL },
  { "e5500", "Select the e5500 processor", PPC::DirectiveE5500 | PPC::FeatureMFOCRF | PPC::Feature64Bit | PPC::FeatureSTFIWX | PPC::FeatureBookE | PPC::FeatureISEL, 0ULL },
  { "g3", "Select the g3 processor", PPC::Directive750 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "g4", "Select the g4 processor", PPC::Directive7400 | PPC::FeatureAltivec | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "g4+", "Select the g4+ processor", PPC::Directive7400 | PPC::FeatureAltivec | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "g5", "Select the g5 processor", PPC::Directive970 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureSTFIWX | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::Feature64Bit, 0ULL },
  { "generic", "Select the generic processor", PPC::Directive32, 0ULL },
  { "ppc", "Select the ppc processor", PPC::Directive32, 0ULL },
  { "ppc64", "Select the ppc64 processor", PPC::Directive64 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "pwr3", "Select the pwr3 processor", PPC::DirectivePwr3 | PPC::FeatureAltivec | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureMFOCRF | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "pwr4", "Select the pwr4 processor", PPC::DirectivePwr4 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "pwr5", "Select the pwr5 processor", PPC::DirectivePwr5 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "pwr5x", "Select the pwr5x processor", PPC::DirectivePwr5x | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureSTFIWX | PPC::FeatureFPRND | PPC::Feature64Bit, 0ULL },
  { "pwr6", "Select the pwr6 processor", PPC::DirectivePwr6 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::Feature64Bit, 0ULL },
  { "pwr6x", "Select the pwr6x processor", PPC::DirectivePwr5x | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::Feature64Bit, 0ULL },
  { "pwr7", "Select the pwr7 processor", PPC::DirectivePwr7 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::FeatureFPCVT | PPC::FeatureISEL | PPC::FeaturePOPCNTD | PPC::FeatureLDBRX | PPC::Feature64Bit, 0ULL }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "PPC440Itineraries"
namespace PPC440ItinerariesFU {
  const unsigned IFTH1 = 1 << 0;
  const unsigned IFTH2 = 1 << 1;
  const unsigned PDCD1 = 1 << 2;
  const unsigned PDCD2 = 1 << 3;
  const unsigned DISS1 = 1 << 4;
  const unsigned DISS2 = 1 << 5;
  const unsigned FRACC = 1 << 6;
  const unsigned IRACC = 1 << 7;
  const unsigned IEXE1 = 1 << 8;
  const unsigned IEXE2 = 1 << 9;
  const unsigned IWB = 1 << 10;
  const unsigned LRACC = 1 << 11;
  const unsigned JEXE1 = 1 << 12;
  const unsigned JEXE2 = 1 << 13;
  const unsigned JWB = 1 << 14;
  const unsigned AGEN = 1 << 15;
  const unsigned CRD = 1 << 16;
  const unsigned LWB = 1 << 17;
  const unsigned FEXE1 = 1 << 18;
  const unsigned FEXE2 = 1 << 19;
  const unsigned FEXE3 = 1 << 20;
  const unsigned FEXE4 = 1 << 21;
  const unsigned FEXE5 = 1 << 22;
  const unsigned FEXE6 = 1 << 23;
  const unsigned FWB = 1 << 24;
  const unsigned LWARX_Hold = 1 << 25;
}

// Pipeline forwarding pathes for itineraries "PPC440Itineraries"
namespace PPC440ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned GPR_Bypass = 1 << 0;
  const unsigned FPR_Bypass = 1 << 1;
}

// Functional units for "G3Itineraries"
namespace G3ItinerariesFU {
  const unsigned IU1 = 1 << 0;
  const unsigned IU2 = 1 << 1;
  const unsigned FPU1 = 1 << 2;
  const unsigned BPU = 1 << 3;
  const unsigned SRU = 1 << 4;
  const unsigned SLU = 1 << 5;
}

// Functional units for "G4Itineraries"
namespace G4ItinerariesFU {
  const unsigned IU1 = 1 << 0;
  const unsigned IU2 = 1 << 1;
  const unsigned SLU = 1 << 2;
  const unsigned SRU = 1 << 3;
  const unsigned BPU = 1 << 4;
  const unsigned FPU1 = 1 << 5;
  const unsigned VIU1 = 1 << 6;
  const unsigned VIU2 = 1 << 7;
  const unsigned VPU = 1 << 8;
  const unsigned VFPU = 1 << 9;
}

// Functional units for "G4PlusItineraries"
namespace G4PlusItinerariesFU {
  const unsigned IU1 = 1 << 0;
  const unsigned IU2 = 1 << 1;
  const unsigned IU3 = 1 << 2;
  const unsigned IU4 = 1 << 3;
  const unsigned BPU = 1 << 4;
  const unsigned SLU = 1 << 5;
  const unsigned FPU1 = 1 << 6;
  const unsigned VFPU = 1 << 7;
  const unsigned VIU1 = 1 << 8;
  const unsigned VIU2 = 1 << 9;
  const unsigned VPU = 1 << 10;
}

// Functional units for "G5Itineraries"
namespace G5ItinerariesFU {
  const unsigned IU1 = 1 << 0;
  const unsigned IU2 = 1 << 1;
  const unsigned SLU = 1 << 2;
  const unsigned BPU = 1 << 3;
  const unsigned FPU1 = 1 << 4;
  const unsigned FPU2 = 1 << 5;
  const unsigned VFPU = 1 << 6;
  const unsigned VIU1 = 1 << 7;
  const unsigned VIU2 = 1 << 8;
  const unsigned VPU = 1 << 9;
}

// Functional units for "PPCA2Itineraries"
namespace PPCA2ItinerariesFU {
  const unsigned IU0to3_0 = 1 << 0;
  const unsigned IU0to3_1 = 1 << 1;
  const unsigned IU0to3_2 = 1 << 2;
  const unsigned IU0to3_3 = 1 << 3;
  const unsigned IU4_0 = 1 << 4;
  const unsigned IU4_1 = 1 << 5;
  const unsigned IU4_2 = 1 << 6;
  const unsigned IU4_3 = 1 << 7;
  const unsigned IU4_4 = 1 << 8;
  const unsigned IU4_5 = 1 << 9;
  const unsigned IU4_6 = 1 << 10;
  const unsigned IU4_7 = 1 << 11;
  const unsigned IU5 = 1 << 12;
  const unsigned IU6 = 1 << 13;
  const unsigned RF0 = 1 << 14;
  const unsigned XRF1 = 1 << 15;
  const unsigned XEX1 = 1 << 16;
  const unsigned XEX2 = 1 << 17;
  const unsigned XEX3 = 1 << 18;
  const unsigned XEX4 = 1 << 19;
  const unsigned XEX5 = 1 << 20;
  const unsigned XEX6 = 1 << 21;
  const unsigned FRF1 = 1 << 22;
  const unsigned FEX1 = 1 << 23;
  const unsigned FEX2 = 1 << 24;
  const unsigned FEX3 = 1 << 25;
  const unsigned FEX4 = 1 << 26;
  const unsigned FEX5 = 1 << 27;
  const unsigned FEX6 = 1 << 28;
}

// Pipeline forwarding pathes for itineraries "PPCA2Itineraries"
namespace PPCA2ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned CR_Bypass = 1 << 0;
  const unsigned GPR_Bypass = 1 << 1;
  const unsigned FPR_Bypass = 1 << 2;
}

// Functional units for "PPCE500mcItineraries"
namespace PPCE500mcItinerariesFU {
  const unsigned DIS0 = 1 << 0;
  const unsigned DIS1 = 1 << 1;
  const unsigned SFX0 = 1 << 2;
  const unsigned SFX1 = 1 << 3;
  const unsigned BU = 1 << 4;
  const unsigned CFX_DivBypass = 1 << 5;
  const unsigned CFX_0 = 1 << 6;
  const unsigned LSU_0 = 1 << 7;
  const unsigned FPU_0 = 1 << 8;
}

// Pipeline forwarding pathes for itineraries "PPCE500mcItineraries"
namespace PPCE500mcItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned CR_Bypass = 1 << 0;
  const unsigned GPR_Bypass = 1 << 1;
  const unsigned FPR_Bypass = 1 << 2;
}

// Functional units for "PPCE5500Itineraries"
namespace PPCE5500ItinerariesFU {
  const unsigned DIS0 = 1 << 0;
  const unsigned DIS1 = 1 << 1;
  const unsigned SFX0 = 1 << 2;
  const unsigned SFX1 = 1 << 3;
  const unsigned BU = 1 << 4;
  const unsigned CFX_DivBypass = 1 << 5;
  const unsigned CFX_0 = 1 << 6;
  const unsigned CFX_1 = 1 << 7;
  const unsigned LSU_0 = 1 << 8;
  const unsigned FPU_0 = 1 << 9;
}

// Pipeline forwarding pathes for itineraries "PPCE5500Itineraries"
namespace PPCE5500ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned CR_Bypass = 1 << 0;
  const unsigned GPR_Bypass = 1 << 1;
  const unsigned FPR_Bypass = 1 << 2;
}

extern const llvm::InstrStage PPCStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IRACC | PPC440ItinerariesFU::LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE1 | PPC440ItinerariesFU::JEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE2 | PPC440ItinerariesFU::JEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IWB | PPC440ItinerariesFU::JWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1-7
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 8-14
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 15-21
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 33, PPC440ItinerariesFU::IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 22-28
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPC440ItinerariesFU::LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 29-35
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 36-46
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 25, PPC440ItinerariesFU::FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 47-57
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 13, PPC440ItinerariesFU::FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 58-68
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FRACC, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::LRACC, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::AGEN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::JEXE1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::CRD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::JEXE2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::FEXE3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::LWB, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::JWB, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 69-86
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IRACC, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPC440ItinerariesFU::LWARX_Hold, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 87-95
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPC440ItinerariesFU::IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 96-102
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPC440ItinerariesFU::AGEN, 1, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPC440ItinerariesFU::CRD, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 103-109
  { 1, G3ItinerariesFU::IU1 | G3ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 110
  { 1, G3ItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 111
  { 1, G3ItinerariesFU::SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 112
  { 3, G3ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 113
  { 19, G3ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 114
  { 2, G3ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 115
  { 1, G3ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 116
  { 31, G3ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 117
  { 17, G3ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 118
  { 2, G3ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 119
  { 2, G3ItinerariesFU::SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 120
  { 3, G3ItinerariesFU::SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 121
  { 3, G3ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 122
  { 5, G3ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 123
  { 6, G3ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 124
  { 3, G3ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 125
  { 8, G3ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 126
  { 1, G4ItinerariesFU::IU1 | G4ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 127
  { 1, G4ItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 128
  { 1, G4ItinerariesFU::SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 129
  { 2, G4ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 130
  { 19, G4ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 131
  { 1, G4ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 132
  { 31, G4ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 133
  { 17, G4ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 134
  { 2, G4ItinerariesFU::SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 135
  { 3, G4ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 136
  { 3, G4ItinerariesFU::SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 137
  { 3, G4ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 138
  { 5, G4ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 139
  { 6, G4ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 140
  { 3, G4ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 141
  { 5, G4ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 142
  { 8, G4ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 143
  { 4, G4ItinerariesFU::VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 144
  { 1, G4ItinerariesFU::VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 145
  { 1, G4ItinerariesFU::VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 146
  { 1, G4PlusItinerariesFU::IU1 | G4PlusItinerariesFU::IU2 | G4PlusItinerariesFU::IU3 | G4PlusItinerariesFU::IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 147
  { 1, G4PlusItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 148
  { 2, G4PlusItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 149
  { 3, G4PlusItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 150
  { 23, G4PlusItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 151
  { 5, G4PlusItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 152
  { 35, G4PlusItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 153
  { 21, G4PlusItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 154
  { 3, G4PlusItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 155
  { 0, G4PlusItinerariesFU::IU1 | G4PlusItinerariesFU::IU2 | G4PlusItinerariesFU::IU3 | G4PlusItinerariesFU::IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 156
  { 4, G4PlusItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 157
  { 4, G4PlusItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 158
  { 5, G4PlusItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 159
  { 2, G4PlusItinerariesFU::IU1 | G4PlusItinerariesFU::IU2 | G4PlusItinerariesFU::IU3 | G4PlusItinerariesFU::IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 160
  { 35, G4PlusItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 161
  { 4, G4PlusItinerariesFU::VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 162
  { 1, G4PlusItinerariesFU::VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 163
  { 2, G4PlusItinerariesFU::VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 164
  { 2, G4PlusItinerariesFU::VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 165
  { 2, G5ItinerariesFU::IU1 | G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 166
  { 1, G5ItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 167
  { 3, G5ItinerariesFU::IU1 | G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 168
  { 4, G5ItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 169
  { 3, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 170
  { 68, G5ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 171
  { 36, G5ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 172
  { 6, G5ItinerariesFU::FPU1 | G5ItinerariesFU::FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 173
  { 8, G5ItinerariesFU::FPU1 | G5ItinerariesFU::FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 174
  { 33, G5ItinerariesFU::FPU1 | G5ItinerariesFU::FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 175
  { 40, G5ItinerariesFU::FPU1 | G5ItinerariesFU::FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 176
  { 40, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 177
  { 11, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 178
  { 5, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 179
  { 2, G5ItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 180
  { 2, G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 181
  { 3, G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 182
  { 6, G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 183
  { 10, G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 184
  { 3, G5ItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 185
  { 8, G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 186
  { 5, G5ItinerariesFU::IU1 | G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 187
  { 7, G5ItinerariesFU::IU1 | G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 188
  { 4, G5ItinerariesFU::IU1 | G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 189
  { 4, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 190
  { 35, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 191
  { 8, G5ItinerariesFU::VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 192
  { 2, G5ItinerariesFU::VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 193
  { 2, G5ItinerariesFU::VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 194
  { 3, G5ItinerariesFU::VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 195
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XRF1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 196-207
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XRF1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 38, PPCA2ItinerariesFU::XEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 208-219
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::FRF1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::FEX1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::FEX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::FEX3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::FEX4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::FEX5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::FEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 220-231
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 71, PPCA2ItinerariesFU::FRF1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 71, PPCA2ItinerariesFU::FEX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 71, PPCA2ItinerariesFU::FEX2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 71, PPCA2ItinerariesFU::FEX3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 71, PPCA2ItinerariesFU::FEX4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 71, PPCA2ItinerariesFU::FEX5, 0, (llvm::InstrStage::ReservationKinds)0 },   { 71, PPCA2ItinerariesFU::FEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 232-243
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 58, PPCA2ItinerariesFU::FRF1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 58, PPCA2ItinerariesFU::FEX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 58, PPCA2ItinerariesFU::FEX2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 58, PPCA2ItinerariesFU::FEX3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 58, PPCA2ItinerariesFU::FEX4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 58, PPCA2ItinerariesFU::FEX5, 0, (llvm::InstrStage::ReservationKinds)0 },   { 58, PPCA2ItinerariesFU::FEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 244-255
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCA2ItinerariesFU::FRF1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCA2ItinerariesFU::FEX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCA2ItinerariesFU::FEX2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCA2ItinerariesFU::FEX3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCA2ItinerariesFU::FEX4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCA2ItinerariesFU::FEX5, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCA2ItinerariesFU::FEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 256-267
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XRF1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 14, PPCA2ItinerariesFU::XEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 268-279
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 13, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XRF1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 280-291
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XRF1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 12, PPCA2ItinerariesFU::XEX4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 292-303
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::SFX0 | PPCE500mcItinerariesFU::SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 304-305
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::BU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 306-307
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 308-309
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 14, PPCE500mcItinerariesFU::CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 310-312
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE500mcItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 313-314
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE500mcItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 315-316
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCE500mcItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 317-318
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 38, PPCE500mcItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 319-320
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::SFX0 | PPCE500mcItinerariesFU::SFX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 321-323
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPCE500mcItinerariesFU::LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 324-325
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, PPCE500mcItinerariesFU::SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 326-327
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, PPCE500mcItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 328-329
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE500mcItinerariesFU::SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 330-331
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 332-333
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::SFX0 | PPCE5500ItinerariesFU::SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 334-335
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::BU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 336-337
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 338-339
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 26, PPCE5500ItinerariesFU::CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 340-342
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 16, PPCE5500ItinerariesFU::CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 343-345
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 346-347
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 31, PPCE5500ItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 348-349
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 16, PPCE5500ItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 350-351
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::SFX0 | PPCE5500ItinerariesFU::SFX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 352-354
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPCE5500ItinerariesFU::LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 355-356
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, PPCE5500ItinerariesFU::CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 357-358
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 359-360
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE5500ItinerariesFU::CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 361-362
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, PPCE5500ItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 363-364
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::CFX_1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 365-367
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::CFX_1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 368-370
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::SFX0 | PPCE5500ItinerariesFU::SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 371-372
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned PPCOperandCycles[] = {
  0, // No itinerary
  6,   4,   4, // 1-3
  6,   4,   4, // 4-6
  8,   4, // 7-8
  6,   4,   4, // 9-11
  8,   4,   4, // 12-14
  8,   5, // 15-16
  40,   4,   4, // 17-19
  9,   5, // 20-21
  10,   4,   4, // 22-24
  10,   4,   4, // 25-27
  10,   4,   4, // 28-30
  35,   4,   4, // 31-33
  23,   4,   4, // 34-36
  10,   4,   4,   4, // 37-40
  8,   5, // 41-42
  9,   5, // 43-44
  9,   5,   5, // 45-47
  9,   5,   5, // 48-50
  8,   5, // 51-52
  8,   5, // 53-54
  8,   5, // 55-56
  8,   4,   4, // 57-59
  8,   4, // 60-61
  10,   4, // 62-63
  7,   4,   4, // 64-66
  10,   4, // 67-68
  8,   5, // 69-70
  8,   4,   4, // 71-73
  10,   4, // 74-75
  7,   4,   4, // 76-78
  8,   4,   4, // 79-81
  8,   4,   4, // 82-84
  8,   4,   4, // 85-87
  6,   4,   4, // 88-90
  6,   4,   4, // 91-93
  8,   5, // 94-95
  8,   5, // 96-97
  8,   5, // 98-99
  8,   5, // 100-101
  8,   5,   5, // 102-104
  8,   5,   5, // 105-107
  8,   5, // 108-109
  10,   7,   7, // 110-112
  10,   7,   7, // 113-115
  15,   7,   7, // 116-118
  10,   7,   7, // 119-121
  10,   7,   7, // 122-124
  13,   11, // 125-126
  53,   7,   7, // 127-129
  14,   7, // 130-131
  15,   7,   7, // 132-134
  15,   7,   7, // 135-137
  13,   7,   7, // 138-140
  86,   7,   7, // 141-143
  73,   7,   7, // 144-146
  15,   7,   7,   7, // 147-150
  86,   7, // 151-152
  14,   7, // 153-154
  14,   7, // 155-156
  14,   7, // 157-158
  14,   7,   7, // 159-161
  14,   7,   7, // 162-164
  14,   7, // 165-166
  14,   7, // 167-168
  26,   7, // 169-170
  10,   7,   7, // 171-173
  10,   7, // 174-175
  15,   7, // 176-177
  10,   7,   7, // 178-180
  29,   7, // 181-182
  13,   7, // 183-184
  10,   7,   7, // 185-187
  15,   7, // 188-189
  10,   7,   7, // 190-192
  14,   7,   7, // 193-195
  14,   7,   7, // 196-198
  15,   7,   7, // 199-201
  10,   7,   7, // 202-204
  10,   7,   7, // 205-207
  10,   7,   7, // 208-210
  10,   7,   7, // 211-213
  13,   7, // 214-215
  13,   7, // 216-217
  26,   7, // 218-219
  13,   7, // 220-221
  14,   7,   7, // 222-224
  14,   7,   7, // 225-227
  26,   7, // 228-229
  4,   1,   1, // 230-232
  4,   1,   1, // 233-235
  4,   1, // 236-237
  5,   1,   1, // 238-240
  4,   1,   1, // 241-243
  6,   1, // 244-245
  17,   1,   1, // 246-248
  6,   1, // 249-250
  11,   1,   1, // 251-253
  13,   1,   1, // 254-256
  11,   1,   1, // 257-259
  71,   1,   1, // 260-262
  41,   1,   1, // 263-265
  13,   1,   1,   1, // 266-269
  6,   1, // 270-271
  6,   1, // 272-273
  7,   1,   1, // 274-276
  7,   1,   1, // 277-279
  6,   1, // 280-281
  6,   1, // 282-283
  6,   1,   1, // 284-286
  4,   1, // 287-288
  8,   1, // 289-290
  4,   1, // 291-292
  11, // 293
  7,   1, // 294-295
  6,   1, // 296-297
  4,   1,   1, // 298-300
  4,   1, // 301-302
  11,   1,   1, // 303-305
  7,   1,   1, // 306-308
  7,   1,   1, // 309-311
  7,   1,   1, // 312-314
  4,   1,   1, // 315-317
  4,   1,   1, // 318-320
  6,   1, // 321-322
  6,   1,   1, // 323-325
  6,   1,   1, // 326-328
  6,   1, // 329-330
  5,   2,   2, // 331-333
  5,   2,   2, // 334-336
  5,   2, // 337-338
  6,   2,   2, // 339-341
  5,   2,   2, // 342-344
  7,   2, // 345-346
  30,   2,   2, // 347-349
  20,   2,   2, // 350-352
  7,   2, // 353-354
  11,   2,   2, // 355-357
  11,   2,   2, // 358-360
  11,   2,   2, // 361-363
  39,   2,   2, // 364-366
  24,   2,   2, // 367-369
  11,   2,   2,   2, // 370-373
  7,   2, // 374-375
  7,   2, // 376-377
  7,   2, // 378-379
  7,   2, // 380-381
  7,   2, // 382-383
  8,   2,   2, // 384-386
  8,   2,   2, // 387-389
  7,   2, // 390-391
  7,   2, // 392-393
  7,   2,   2, // 394-396
  5,   2, // 397-398
  9,   2, // 399-400
  5, // 401
  11, // 402
  8,   2, // 403-404
  7,   2, // 405-406
  5,   2,   2, // 407-409
  5, // 410
  11,   2,   2, // 411-413
  8,   2,   2, // 414-416
  8,   2,   2, // 417-419
  9,   2,   2, // 420-422
  8,   2,   2, // 423-425
  6,   2,   2, // 426-428
  5,   2,   2, // 429-431
  5,   2,   2, // 432-434
  6,   2,   2, // 435-437
  7,   2, // 438-439
  7,   2, // 440-441
  7,   2, // 442-443
  7,   2, // 444-445
  7,   2,   2, // 446-448
  7,   2,   2, // 449-451
  7,   2, // 452-453
  0 // End operand cycles
};
extern const unsigned PPCForwardingPaths[] = {
 0, // No itinerary
PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 1-3
PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 4-6
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 7-8
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 9-11
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 12-14
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 15-16
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 17-19
PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 20-21
PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, // 22-24
PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, // 25-27
PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, // 28-30
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, // 31-33
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, // 34-36
PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, // 37-40
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 41-42
PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 43-44
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 45-47
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 48-50
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 51-52
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 53-54
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 55-56
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 57-59
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 60-61
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 62-63
PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 64-66
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 67-68
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 69-70
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 71-73
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 74-75
PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 76-78
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 79-81
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 82-84
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 85-87
PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 88-90
PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 91-93
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 94-95
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 96-97
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 98-99
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 100-101
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 102-104
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 105-107
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 108-109
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 110-112
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 113-115
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass,  0, // 116-118
PPCA2ItinerariesBypass::CR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 119-121
PPCA2ItinerariesBypass::CR_Bypass, PPCA2ItinerariesBypass::CR_Bypass, PPCA2ItinerariesBypass::CR_Bypass, // 122-124
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 125-126
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 127-129
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 130-131
PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, // 132-134
PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, // 135-137
PPCA2ItinerariesBypass::CR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, // 138-140
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, // 141-143
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, // 144-146
PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, // 147-150
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::FPR_Bypass, // 151-152
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 153-154
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 155-156
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 157-158
PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 159-161
PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 162-164
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 165-166
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 167-168
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 169-170
PPCA2ItinerariesBypass::CR_Bypass, PPCA2ItinerariesBypass::CR_Bypass, PPCA2ItinerariesBypass::CR_Bypass, // 171-173
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::CR_Bypass, // 174-175
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 176-177
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 178-180
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 181-182
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 183-184
PPCA2ItinerariesBypass::CR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 185-187
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 188-189
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 190-192
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 193-195
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 196-198
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 199-201
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 202-204
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 205-207
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 208-210
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 211-213
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 214-215
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 216-217
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 218-219
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 220-221
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, // 222-224
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, // 225-227
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 228-229
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 230-232
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 233-235
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 236-237
PPCE500mcItinerariesBypass::CR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 238-240
PPCE500mcItinerariesBypass::CR_Bypass, PPCE500mcItinerariesBypass::CR_Bypass, PPCE500mcItinerariesBypass::CR_Bypass, // 241-243
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 244-245
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 246-248
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 249-250
PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, // 251-253
PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, // 254-256
PPCE500mcItinerariesBypass::CR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, // 257-259
PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, // 260-262
PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, // 263-265
PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, // 266-269
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 270-271
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 272-273
PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 274-276
PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 277-279
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 280-281
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 282-283
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 284-286
PPCE500mcItinerariesBypass::CR_Bypass, PPCE500mcItinerariesBypass::CR_Bypass, // 287-288
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::CR_Bypass, // 289-290
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::CR_Bypass, // 291-292
PPCE500mcItinerariesBypass::FPR_Bypass, // 293
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 294-295
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 296-297
PPCE500mcItinerariesBypass::CR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass,  0, // 298-300
PPCE500mcItinerariesBypass::CR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 301-302
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::NoBypass, // 303-305
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 306-308
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 309-311
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 312-314
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 315-317
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 318-320
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 321-322
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 323-325
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 326-328
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 329-330
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 331-333
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 334-336
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 337-338
PPCE5500ItinerariesBypass::CR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 339-341
PPCE5500ItinerariesBypass::CR_Bypass, PPCE5500ItinerariesBypass::CR_Bypass, PPCE5500ItinerariesBypass::CR_Bypass, // 342-344
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 345-346
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 347-349
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 350-352
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 353-354
PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, // 355-357
PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, // 358-360
PPCE5500ItinerariesBypass::CR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, // 361-363
PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, // 364-366
PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, // 367-369
PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, // 370-373
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 374-375
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 376-377
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 378-379
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 380-381
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 382-383
PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 384-386
PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 387-389
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 390-391
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 392-393
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 394-396
PPCE5500ItinerariesBypass::CR_Bypass, PPCE5500ItinerariesBypass::CR_Bypass, // 397-398
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::CR_Bypass, // 399-400
PPCE5500ItinerariesBypass::GPR_Bypass, // 401
PPCE5500ItinerariesBypass::FPR_Bypass, // 402
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 403-404
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 405-406
PPCE5500ItinerariesBypass::CR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass,  0, // 407-409
PPCE5500ItinerariesBypass::GPR_Bypass, // 410
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::NoBypass, // 411-413
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 414-416
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 417-419
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 420-422
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 423-425
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 426-428
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 429-431
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 432-434
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 435-437
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 438-439
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 440-441
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 442-443
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 444-445
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 446-448
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 449-451
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 452-453
 0 // End bypass tables
};

static const llvm::InstrItinerary *NoItineraries = 0;

static const llvm::InstrItinerary PPC440Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 8, 1, 4 }, // 1 IntSimple
  { 1, 1, 8, 4, 7 }, // 2 IntGeneral
  { 1, 8, 15, 7, 9 }, // 3 BrB
  { 1, 1, 8, 9, 12 }, // 4 IntCompare
  { 1, 8, 15, 12, 15 }, // 5 BrCR
  { 1, 15, 22, 15, 17 }, // 6 LdStDCBF
  { 0, 0, 0, 0, 0 }, // 7 IntDivD
  { 1, 22, 29, 17, 20 }, // 8 IntDivW
  { 1, 29, 36, 20, 22 }, // 9 LdStLoad
  { 1, 36, 47, 22, 25 }, // 10 FPGeneral
  { 1, 36, 47, 25, 28 }, // 11 FPAddSub
  { 1, 36, 47, 28, 31 }, // 12 FPCompare
  { 1, 47, 58, 31, 34 }, // 13 FPDivD
  { 1, 58, 69, 34, 37 }, // 14 FPDivS
  { 1, 36, 47, 37, 41 }, // 15 FPFused
  { 0, 0, 0, 0, 0 }, // 16 FPSqrt
  { 1, 15, 22, 41, 43 }, // 17 LdStICBI
  { 1, 69, 87, 0, 0 }, // 18 SprISYNC
  { 1, 29, 36, 43, 45 }, // 19 LdStLoadUpd
  { 0, 0, 0, 0, 0 }, // 20 LdStLD
  { 0, 0, 0, 0, 0 }, // 21 LdStLDARX
  { 0, 0, 0, 0, 0 }, // 22 LdStLDU
  { 1, 29, 36, 45, 48 }, // 23 LdStLFD
  { 1, 15, 22, 48, 51 }, // 24 LdStLFDU
  { 1, 15, 22, 51, 53 }, // 25 LdStLHA
  { 1, 15, 22, 53, 55 }, // 26 LdStLHAU
  { 0, 0, 0, 0, 0 }, // 27 LdStLWA
  { 1, 87, 96, 55, 57 }, // 28 LdStLWARX
  { 1, 8, 15, 57, 60 }, // 29 BrMCR
  { 1, 8, 15, 60, 62 }, // 30 SprMFCR
  { 1, 96, 103, 62, 64 }, // 31 SprMFSPR
  { 1, 8, 15, 64, 67 }, // 32 IntMFFS
  { 1, 96, 103, 67, 69 }, // 33 SprMFTB
  { 1, 29, 36, 69, 71 }, // 34 LdStStore
  { 1, 8, 15, 71, 74 }, // 35 BrMCRX
  { 1, 96, 103, 74, 76 }, // 36 SprMTSPR
  { 1, 8, 15, 76, 79 }, // 37 IntMTFSB0
  { 1, 8, 15, 79, 82 }, // 38 IntMulHW
  { 1, 8, 15, 82, 85 }, // 39 IntMulHWU
  { 0, 0, 0, 0, 0 }, // 40 IntMulHD
  { 1, 8, 15, 85, 88 }, // 41 IntMulLI
  { 0, 0, 0, 0, 0 }, // 42 IntRotateD
  { 0, 0, 0, 0, 0 }, // 43 IntRotateDI
  { 1, 1, 8, 88, 91 }, // 44 IntRotate
  { 1, 1, 8, 91, 94 }, // 45 IntShift
  { 1, 29, 36, 94, 96 }, // 46 LdStStoreUpd
  { 1, 29, 36, 96, 98 }, // 47 LdStSTD
  { 1, 87, 96, 98, 100 }, // 48 LdStSTDCX
  { 1, 29, 36, 100, 102 }, // 49 LdStSTDU
  { 1, 15, 22, 102, 105 }, // 50 LdStSTFD
  { 1, 15, 22, 105, 108 }, // 51 LdStSTFDU
  { 1, 87, 96, 108, 110 }, // 52 LdStSTWCX
  { 1, 103, 110, 0, 0 }, // 53 LdStSync
  { 0, 0, 0, 0, 0 }, // 54 VecFP
  { 0, 0, 0, 0, 0 }, // 55 VecGeneral
  { 0, 0, 0, 0, 0 }, // 56 VecFPCompare
  { 0, 0, 0, 0, 0 }, // 57 VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G3Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 110, 111, 0, 0 }, // 1 IntSimple
  { 1, 110, 111, 0, 0 }, // 2 IntGeneral
  { 1, 111, 112, 0, 0 }, // 3 BrB
  { 1, 110, 111, 0, 0 }, // 4 IntCompare
  { 1, 112, 113, 0, 0 }, // 5 BrCR
  { 1, 113, 114, 0, 0 }, // 6 LdStDCBF
  { 0, 0, 0, 0, 0 }, // 7 IntDivD
  { 1, 114, 115, 0, 0 }, // 8 IntDivW
  { 1, 115, 116, 0, 0 }, // 9 LdStLoad
  { 1, 116, 117, 0, 0 }, // 10 FPGeneral
  { 1, 116, 117, 0, 0 }, // 11 FPAddSub
  { 1, 116, 117, 0, 0 }, // 12 FPCompare
  { 1, 117, 118, 0, 0 }, // 13 FPDivD
  { 1, 118, 119, 0, 0 }, // 14 FPDivS
  { 1, 119, 120, 0, 0 }, // 15 FPFused
  { 0, 0, 0, 0, 0 }, // 16 FPSqrt
  { 1, 113, 114, 0, 0 }, // 17 LdStICBI
  { 1, 120, 121, 0, 0 }, // 18 SprISYNC
  { 1, 115, 116, 0, 0 }, // 19 LdStLoadUpd
  { 0, 0, 0, 0, 0 }, // 20 LdStLD
  { 0, 0, 0, 0, 0 }, // 21 LdStLDARX
  { 0, 0, 0, 0, 0 }, // 22 LdStLDU
  { 1, 115, 116, 0, 0 }, // 23 LdStLFD
  { 1, 115, 116, 0, 0 }, // 24 LdStLFDU
  { 1, 115, 116, 0, 0 }, // 25 LdStLHA
  { 1, 115, 116, 0, 0 }, // 26 LdStLHAU
  { 0, 0, 0, 0, 0 }, // 27 LdStLWA
  { 1, 113, 114, 0, 0 }, // 28 LdStLWARX
  { 1, 112, 113, 0, 0 }, // 29 BrMCR
  { 1, 112, 113, 0, 0 }, // 30 SprMFCR
  { 1, 121, 122, 0, 0 }, // 31 SprMFSPR
  { 1, 116, 117, 0, 0 }, // 32 IntMFFS
  { 1, 121, 122, 0, 0 }, // 33 SprMFTB
  { 1, 115, 116, 0, 0 }, // 34 LdStStore
  { 1, 112, 113, 0, 0 }, // 35 BrMCRX
  { 1, 120, 121, 0, 0 }, // 36 SprMTSPR
  { 1, 122, 123, 0, 0 }, // 37 IntMTFSB0
  { 1, 123, 124, 0, 0 }, // 38 IntMulHW
  { 1, 124, 125, 0, 0 }, // 39 IntMulHWU
  { 0, 0, 0, 0, 0 }, // 40 IntMulHD
  { 1, 125, 126, 0, 0 }, // 41 IntMulLI
  { 0, 0, 0, 0, 0 }, // 42 IntRotateD
  { 0, 0, 0, 0, 0 }, // 43 IntRotateDI
  { 1, 110, 111, 0, 0 }, // 44 IntRotate
  { 1, 110, 111, 0, 0 }, // 45 IntShift
  { 1, 115, 116, 0, 0 }, // 46 LdStStoreUpd
  { 0, 0, 0, 0, 0 }, // 47 LdStSTD
  { 0, 0, 0, 0, 0 }, // 48 LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 49 LdStSTDU
  { 1, 115, 116, 0, 0 }, // 50 LdStSTFD
  { 1, 115, 116, 0, 0 }, // 51 LdStSTFDU
  { 1, 126, 127, 0, 0 }, // 52 LdStSTWCX
  { 1, 113, 114, 0, 0 }, // 53 LdStSync
  { 0, 0, 0, 0, 0 }, // 54 VecFP
  { 0, 0, 0, 0, 0 }, // 55 VecGeneral
  { 0, 0, 0, 0, 0 }, // 56 VecFPCompare
  { 0, 0, 0, 0, 0 }, // 57 VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G4Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 127, 128, 0, 0 }, // 1 IntSimple
  { 1, 127, 128, 0, 0 }, // 2 IntGeneral
  { 1, 128, 129, 0, 0 }, // 3 BrB
  { 1, 127, 128, 0, 0 }, // 4 IntCompare
  { 1, 129, 130, 0, 0 }, // 5 BrCR
  { 1, 130, 131, 0, 0 }, // 6 LdStDCBF
  { 0, 0, 0, 0, 0 }, // 7 IntDivD
  { 1, 131, 132, 0, 0 }, // 8 IntDivW
  { 1, 130, 131, 0, 0 }, // 9 LdStLoad
  { 1, 132, 133, 0, 0 }, // 10 FPGeneral
  { 1, 132, 133, 0, 0 }, // 11 FPAddSub
  { 1, 132, 133, 0, 0 }, // 12 FPCompare
  { 1, 133, 134, 0, 0 }, // 13 FPDivD
  { 1, 134, 135, 0, 0 }, // 14 FPDivS
  { 1, 132, 133, 0, 0 }, // 15 FPFused
  { 0, 0, 0, 0, 0 }, // 16 FPSqrt
  { 1, 130, 131, 0, 0 }, // 17 LdStICBI
  { 1, 135, 136, 0, 0 }, // 18 SprISYNC
  { 1, 130, 131, 0, 0 }, // 19 LdStLoadUpd
  { 0, 0, 0, 0, 0 }, // 20 LdStLD
  { 0, 0, 0, 0, 0 }, // 21 LdStLDARX
  { 0, 0, 0, 0, 0 }, // 22 LdStLDU
  { 1, 130, 131, 0, 0 }, // 23 LdStLFD
  { 1, 130, 131, 0, 0 }, // 24 LdStLFDU
  { 1, 130, 131, 0, 0 }, // 25 LdStLHA
  { 1, 130, 131, 0, 0 }, // 26 LdStLHAU
  { 0, 0, 0, 0, 0 }, // 27 LdStLWA
  { 1, 136, 137, 0, 0 }, // 28 LdStLWARX
  { 1, 129, 130, 0, 0 }, // 29 BrMCR
  { 1, 129, 130, 0, 0 }, // 30 SprMFCR
  { 1, 137, 138, 0, 0 }, // 31 SprMFSPR
  { 1, 138, 139, 0, 0 }, // 32 IntMFFS
  { 1, 129, 130, 0, 0 }, // 33 SprMFTB
  { 1, 130, 131, 0, 0 }, // 34 LdStStore
  { 1, 129, 130, 0, 0 }, // 35 BrMCRX
  { 1, 135, 136, 0, 0 }, // 36 SprMTSPR
  { 1, 138, 139, 0, 0 }, // 37 IntMTFSB0
  { 1, 139, 140, 0, 0 }, // 38 IntMulHW
  { 1, 140, 141, 0, 0 }, // 39 IntMulHWU
  { 0, 0, 0, 0, 0 }, // 40 IntMulHD
  { 1, 141, 142, 0, 0 }, // 41 IntMulLI
  { 0, 0, 0, 0, 0 }, // 42 IntRotateD
  { 0, 0, 0, 0, 0 }, // 43 IntRotateDI
  { 1, 127, 128, 0, 0 }, // 44 IntRotate
  { 1, 127, 128, 0, 0 }, // 45 IntShift
  { 1, 130, 131, 0, 0 }, // 46 LdStStoreUpd
  { 0, 0, 0, 0, 0 }, // 47 LdStSTD
  { 0, 0, 0, 0, 0 }, // 48 LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 49 LdStSTDU
  { 1, 130, 131, 0, 0 }, // 50 LdStSTFD
  { 1, 130, 131, 0, 0 }, // 51 LdStSTFDU
  { 1, 142, 143, 0, 0 }, // 52 LdStSTWCX
  { 1, 143, 144, 0, 0 }, // 53 LdStSync
  { 1, 144, 145, 0, 0 }, // 54 VecFP
  { 1, 145, 146, 0, 0 }, // 55 VecGeneral
  { 1, 145, 146, 0, 0 }, // 56 VecFPCompare
  { 1, 146, 147, 0, 0 }, // 57 VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G4PlusItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 147, 148, 0, 0 }, // 1 IntSimple
  { 1, 147, 148, 0, 0 }, // 2 IntGeneral
  { 1, 148, 149, 0, 0 }, // 3 BrB
  { 1, 147, 148, 0, 0 }, // 4 IntCompare
  { 1, 149, 150, 0, 0 }, // 5 BrCR
  { 1, 150, 151, 0, 0 }, // 6 LdStDCBF
  { 0, 0, 0, 0, 0 }, // 7 IntDivD
  { 1, 151, 152, 0, 0 }, // 8 IntDivW
  { 1, 150, 151, 0, 0 }, // 9 LdStLoad
  { 1, 152, 153, 0, 0 }, // 10 FPGeneral
  { 1, 152, 153, 0, 0 }, // 11 FPAddSub
  { 1, 152, 153, 0, 0 }, // 12 FPCompare
  { 1, 153, 154, 0, 0 }, // 13 FPDivD
  { 1, 154, 155, 0, 0 }, // 14 FPDivS
  { 1, 152, 153, 0, 0 }, // 15 FPFused
  { 0, 0, 0, 0, 0 }, // 16 FPSqrt
  { 1, 155, 156, 0, 0 }, // 17 LdStICBI
  { 1, 156, 157, 0, 0 }, // 18 SprISYNC
  { 1, 150, 151, 0, 0 }, // 19 LdStLoadUpd
  { 0, 0, 0, 0, 0 }, // 20 LdStLD
  { 0, 0, 0, 0, 0 }, // 21 LdStLDARX
  { 0, 0, 0, 0, 0 }, // 22 LdStLDU
  { 1, 157, 158, 0, 0 }, // 23 LdStLFD
  { 1, 157, 158, 0, 0 }, // 24 LdStLFDU
  { 1, 150, 151, 0, 0 }, // 25 LdStLHA
  { 1, 150, 151, 0, 0 }, // 26 LdStLHAU
  { 1, 150, 151, 0, 0 }, // 27 LdStLWA
  { 1, 150, 151, 0, 0 }, // 28 LdStLWARX
  { 1, 149, 150, 0, 0 }, // 29 BrMCR
  { 1, 149, 150, 0, 0 }, // 30 SprMFCR
  { 1, 158, 159, 0, 0 }, // 31 SprMFSPR
  { 1, 152, 153, 0, 0 }, // 32 IntMFFS
  { 1, 159, 160, 0, 0 }, // 33 SprMFTB
  { 1, 150, 151, 0, 0 }, // 34 LdStStore
  { 1, 149, 150, 0, 0 }, // 35 BrMCRX
  { 1, 149, 150, 0, 0 }, // 36 SprMTSPR
  { 1, 152, 153, 0, 0 }, // 37 IntMTFSB0
  { 1, 158, 159, 0, 0 }, // 38 IntMulHW
  { 1, 158, 159, 0, 0 }, // 39 IntMulHWU
  { 0, 0, 0, 0, 0 }, // 40 IntMulHD
  { 1, 155, 156, 0, 0 }, // 41 IntMulLI
  { 0, 0, 0, 0, 0 }, // 42 IntRotateD
  { 0, 0, 0, 0, 0 }, // 43 IntRotateDI
  { 1, 147, 148, 0, 0 }, // 44 IntRotate
  { 1, 160, 161, 0, 0 }, // 45 IntShift
  { 1, 150, 151, 0, 0 }, // 46 LdStStoreUpd
  { 1, 150, 151, 0, 0 }, // 47 LdStSTD
  { 1, 150, 151, 0, 0 }, // 48 LdStSTDCX
  { 1, 150, 151, 0, 0 }, // 49 LdStSTDU
  { 1, 150, 151, 0, 0 }, // 50 LdStSTFD
  { 1, 150, 151, 0, 0 }, // 51 LdStSTFDU
  { 1, 150, 151, 0, 0 }, // 52 LdStSTWCX
  { 1, 161, 162, 0, 0 }, // 53 LdStSync
  { 1, 162, 163, 0, 0 }, // 54 VecFP
  { 1, 163, 164, 0, 0 }, // 55 VecGeneral
  { 1, 164, 165, 0, 0 }, // 56 VecFPCompare
  { 1, 165, 166, 0, 0 }, // 57 VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G5Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 166, 167, 0, 0 }, // 1 IntSimple
  { 1, 166, 167, 0, 0 }, // 2 IntGeneral
  { 1, 167, 168, 0, 0 }, // 3 BrB
  { 1, 168, 169, 0, 0 }, // 4 IntCompare
  { 1, 169, 170, 0, 0 }, // 5 BrCR
  { 1, 170, 171, 0, 0 }, // 6 LdStDCBF
  { 1, 171, 172, 0, 0 }, // 7 IntDivD
  { 1, 172, 173, 0, 0 }, // 8 IntDivW
  { 1, 170, 171, 0, 0 }, // 9 LdStLoad
  { 1, 173, 174, 0, 0 }, // 10 FPGeneral
  { 1, 173, 174, 0, 0 }, // 11 FPAddSub
  { 1, 174, 175, 0, 0 }, // 12 FPCompare
  { 1, 175, 176, 0, 0 }, // 13 FPDivD
  { 1, 175, 176, 0, 0 }, // 14 FPDivS
  { 1, 173, 174, 0, 0 }, // 15 FPFused
  { 1, 176, 177, 0, 0 }, // 16 FPSqrt
  { 1, 177, 178, 0, 0 }, // 17 LdStICBI
  { 1, 177, 178, 0, 0 }, // 18 SprISYNC
  { 1, 170, 171, 0, 0 }, // 19 LdStLoadUpd
  { 1, 170, 171, 0, 0 }, // 20 LdStLD
  { 1, 178, 179, 0, 0 }, // 21 LdStLDARX
  { 1, 170, 171, 0, 0 }, // 22 LdStLDU
  { 1, 170, 171, 0, 0 }, // 23 LdStLFD
  { 1, 179, 180, 0, 0 }, // 24 LdStLFDU
  { 1, 179, 180, 0, 0 }, // 25 LdStLHA
  { 1, 179, 180, 0, 0 }, // 26 LdStLHAU
  { 1, 179, 180, 0, 0 }, // 27 LdStLWA
  { 1, 178, 179, 0, 0 }, // 28 LdStLWARX
  { 1, 180, 181, 0, 0 }, // 29 BrMCR
  { 1, 181, 182, 0, 0 }, // 30 SprMFCR
  { 1, 182, 183, 0, 0 }, // 31 SprMFSPR
  { 1, 183, 184, 0, 0 }, // 32 IntMFFS
  { 1, 184, 185, 0, 0 }, // 33 SprMFTB
  { 1, 170, 171, 0, 0 }, // 34 LdStStore
  { 1, 185, 186, 0, 0 }, // 35 BrMCRX
  { 1, 186, 187, 0, 0 }, // 36 SprMTSPR
  { 1, 173, 174, 0, 0 }, // 37 IntMTFSB0
  { 1, 187, 188, 0, 0 }, // 38 IntMulHW
  { 1, 187, 188, 0, 0 }, // 39 IntMulHWU
  { 1, 188, 189, 0, 0 }, // 40 IntMulHD
  { 1, 189, 190, 0, 0 }, // 41 IntMulLI
  { 1, 166, 167, 0, 0 }, // 42 IntRotateD
  { 1, 166, 167, 0, 0 }, // 43 IntRotateDI
  { 1, 189, 190, 0, 0 }, // 44 IntRotate
  { 1, 166, 167, 0, 0 }, // 45 IntShift
  { 1, 170, 171, 0, 0 }, // 46 LdStStoreUpd
  { 1, 170, 171, 0, 0 }, // 47 LdStSTD
  { 1, 178, 179, 0, 0 }, // 48 LdStSTDCX
  { 1, 170, 171, 0, 0 }, // 49 LdStSTDU
  { 1, 190, 191, 0, 0 }, // 50 LdStSTFD
  { 1, 190, 191, 0, 0 }, // 51 LdStSTFDU
  { 1, 178, 179, 0, 0 }, // 52 LdStSTWCX
  { 1, 191, 192, 0, 0 }, // 53 LdStSync
  { 1, 192, 193, 0, 0 }, // 54 VecFP
  { 1, 193, 194, 0, 0 }, // 55 VecGeneral
  { 1, 194, 195, 0, 0 }, // 56 VecFPCompare
  { 1, 195, 196, 0, 0 }, // 57 VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary PPCA2Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 196, 208, 110, 113 }, // 1 IntSimple
  { 1, 196, 208, 113, 116 }, // 2 IntGeneral
  { 1, 196, 208, 116, 119 }, // 3 BrB
  { 1, 196, 208, 119, 122 }, // 4 IntCompare
  { 1, 196, 208, 122, 125 }, // 5 BrCR
  { 1, 196, 208, 125, 127 }, // 6 LdStDCBF
  { 0, 0, 0, 0, 0 }, // 7 IntDivD
  { 1, 208, 220, 127, 130 }, // 8 IntDivW
  { 1, 196, 208, 130, 132 }, // 9 LdStLoad
  { 1, 220, 232, 132, 135 }, // 10 FPGeneral
  { 1, 220, 232, 135, 138 }, // 11 FPAddSub
  { 1, 220, 232, 138, 141 }, // 12 FPCompare
  { 1, 232, 244, 141, 144 }, // 13 FPDivD
  { 1, 244, 256, 144, 147 }, // 14 FPDivS
  { 1, 220, 232, 147, 151 }, // 15 FPFused
  { 1, 256, 268, 151, 153 }, // 16 FPSqrt
  { 1, 196, 208, 153, 155 }, // 17 LdStICBI
  { 1, 268, 280, 0, 0 }, // 18 SprISYNC
  { 1, 196, 208, 155, 157 }, // 19 LdStLoadUpd
  { 0, 0, 0, 0, 0 }, // 20 LdStLD
  { 0, 0, 0, 0, 0 }, // 21 LdStLDARX
  { 1, 196, 208, 157, 159 }, // 22 LdStLDU
  { 1, 196, 208, 159, 162 }, // 23 LdStLFD
  { 1, 196, 208, 162, 165 }, // 24 LdStLFDU
  { 1, 196, 208, 165, 167 }, // 25 LdStLHA
  { 1, 196, 208, 167, 169 }, // 26 LdStLHAU
  { 0, 0, 0, 0, 0 }, // 27 LdStLWA
  { 1, 280, 292, 169, 171 }, // 28 LdStLWARX
  { 1, 196, 208, 171, 174 }, // 29 BrMCR
  { 1, 196, 208, 174, 176 }, // 30 SprMFCR
  { 1, 196, 208, 176, 178 }, // 31 SprMFSPR
  { 1, 196, 208, 178, 181 }, // 32 IntMFFS
  { 1, 268, 280, 181, 183 }, // 33 SprMFTB
  { 1, 196, 208, 183, 185 }, // 34 LdStStore
  { 1, 196, 208, 185, 188 }, // 35 BrMCRX
  { 1, 196, 208, 188, 190 }, // 36 SprMTSPR
  { 1, 196, 208, 190, 193 }, // 37 IntMTFSB0
  { 1, 196, 208, 193, 196 }, // 38 IntMulHW
  { 1, 196, 208, 196, 199 }, // 39 IntMulHWU
  { 0, 0, 0, 0, 0 }, // 40 IntMulHD
  { 1, 196, 208, 199, 202 }, // 41 IntMulLI
  { 1, 196, 208, 202, 205 }, // 42 IntRotateD
  { 1, 196, 208, 205, 208 }, // 43 IntRotateDI
  { 1, 196, 208, 208, 211 }, // 44 IntRotate
  { 1, 196, 208, 211, 214 }, // 45 IntShift
  { 1, 196, 208, 214, 216 }, // 46 LdStStoreUpd
  { 1, 196, 208, 216, 218 }, // 47 LdStSTD
  { 1, 280, 292, 218, 220 }, // 48 LdStSTDCX
  { 1, 196, 208, 220, 222 }, // 49 LdStSTDU
  { 1, 196, 208, 222, 225 }, // 50 LdStSTFD
  { 1, 196, 208, 225, 228 }, // 51 LdStSTFDU
  { 1, 280, 292, 228, 230 }, // 52 LdStSTWCX
  { 1, 292, 304, 0, 0 }, // 53 LdStSync
  { 0, 0, 0, 0, 0 }, // 54 VecFP
  { 0, 0, 0, 0, 0 }, // 55 VecGeneral
  { 0, 0, 0, 0, 0 }, // 56 VecFPCompare
  { 0, 0, 0, 0, 0 }, // 57 VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary PPCE500mcItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 304, 306, 230, 233 }, // 1 IntSimple
  { 1, 304, 306, 233, 236 }, // 2 IntGeneral
  { 1, 306, 308, 236, 238 }, // 3 BrB
  { 1, 304, 306, 238, 241 }, // 4 IntCompare
  { 1, 306, 308, 241, 244 }, // 5 BrCR
  { 1, 308, 310, 244, 246 }, // 6 LdStDCBF
  { 0, 0, 0, 0, 0 }, // 7 IntDivD
  { 1, 310, 313, 246, 249 }, // 8 IntDivW
  { 1, 308, 310, 249, 251 }, // 9 LdStLoad
  { 1, 313, 315, 251, 254 }, // 10 FPGeneral
  { 1, 315, 317, 254, 257 }, // 11 FPAddSub
  { 1, 313, 315, 257, 260 }, // 12 FPCompare
  { 1, 317, 319, 260, 263 }, // 13 FPDivD
  { 1, 319, 321, 263, 266 }, // 14 FPDivS
  { 1, 315, 317, 266, 270 }, // 15 FPFused
  { 0, 0, 0, 0, 0 }, // 16 FPSqrt
  { 1, 308, 310, 270, 272 }, // 17 LdStICBI
  { 0, 0, 0, 0, 0 }, // 18 SprISYNC
  { 2, 321, 324, 272, 274 }, // 19 LdStLoadUpd
  { 0, 0, 0, 0, 0 }, // 20 LdStLD
  { 0, 0, 0, 0, 0 }, // 21 LdStLDARX
  { 0, 0, 0, 0, 0 }, // 22 LdStLDU
  { 1, 308, 310, 274, 277 }, // 23 LdStLFD
  { 2, 321, 324, 277, 280 }, // 24 LdStLFDU
  { 1, 308, 310, 280, 282 }, // 25 LdStLHA
  { 1, 321, 324, 282, 284 }, // 26 LdStLHAU
  { 0, 0, 0, 0, 0 }, // 27 LdStLWA
  { 1, 324, 326, 284, 287 }, // 28 LdStLWARX
  { 1, 306, 308, 287, 289 }, // 29 BrMCR
  { 1, 326, 328, 289, 291 }, // 30 SprMFCR
  { 1, 304, 306, 291, 293 }, // 31 SprMFSPR
  { 1, 328, 330, 293, 294 }, // 32 IntMFFS
  { 1, 330, 332, 294, 296 }, // 33 SprMFTB
  { 1, 308, 310, 296, 298 }, // 34 LdStStore
  { 1, 304, 306, 298, 301 }, // 35 BrMCRX
  { 1, 304, 306, 301, 303 }, // 36 SprMTSPR
  { 1, 328, 330, 303, 306 }, // 37 IntMTFSB0
  { 1, 332, 334, 306, 309 }, // 38 IntMulHW
  { 1, 332, 334, 309, 312 }, // 39 IntMulHWU
  { 0, 0, 0, 0, 0 }, // 40 IntMulHD
  { 1, 332, 334, 312, 315 }, // 41 IntMulLI
  { 0, 0, 0, 0, 0 }, // 42 IntRotateD
  { 0, 0, 0, 0, 0 }, // 43 IntRotateDI
  { 1, 304, 306, 315, 318 }, // 44 IntRotate
  { 1, 304, 306, 318, 321 }, // 45 IntShift
  { 2, 321, 324, 321, 323 }, // 46 LdStStoreUpd
  { 0, 0, 0, 0, 0 }, // 47 LdStSTD
  { 0, 0, 0, 0, 0 }, // 48 LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 49 LdStSTDU
  { 1, 308, 310, 323, 326 }, // 50 LdStSTFD
  { 2, 321, 324, 326, 329 }, // 51 LdStSTFDU
  { 1, 308, 310, 329, 331 }, // 52 LdStSTWCX
  { 1, 308, 310, 0, 0 }, // 53 LdStSync
  { 0, 0, 0, 0, 0 }, // 54 VecFP
  { 0, 0, 0, 0, 0 }, // 55 VecGeneral
  { 0, 0, 0, 0, 0 }, // 56 VecFPCompare
  { 0, 0, 0, 0, 0 }, // 57 VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary PPCE5500Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 334, 336, 331, 334 }, // 1 IntSimple
  { 1, 334, 336, 334, 337 }, // 2 IntGeneral
  { 1, 336, 338, 337, 339 }, // 3 BrB
  { 1, 334, 336, 339, 342 }, // 4 IntCompare
  { 1, 336, 338, 342, 345 }, // 5 BrCR
  { 1, 338, 340, 345, 347 }, // 6 LdStDCBF
  { 1, 340, 343, 347, 350 }, // 7 IntDivD
  { 1, 343, 346, 350, 353 }, // 8 IntDivW
  { 1, 338, 340, 353, 355 }, // 9 LdStLoad
  { 1, 346, 348, 355, 358 }, // 10 FPGeneral
  { 1, 346, 348, 358, 361 }, // 11 FPAddSub
  { 1, 346, 348, 361, 364 }, // 12 FPCompare
  { 1, 348, 350, 364, 367 }, // 13 FPDivD
  { 1, 350, 352, 367, 370 }, // 14 FPDivS
  { 1, 346, 348, 370, 374 }, // 15 FPFused
  { 0, 0, 0, 0, 0 }, // 16 FPSqrt
  { 1, 338, 340, 374, 376 }, // 17 LdStICBI
  { 0, 0, 0, 0, 0 }, // 18 SprISYNC
  { 2, 352, 355, 376, 378 }, // 19 LdStLoadUpd
  { 1, 338, 340, 378, 380 }, // 20 LdStLD
  { 1, 355, 357, 380, 382 }, // 21 LdStLDARX
  { 2, 352, 355, 382, 384 }, // 22 LdStLDU
  { 2, 338, 340, 384, 387 }, // 23 LdStLFD
  { 2, 352, 355, 387, 390 }, // 24 LdStLFDU
  { 1, 338, 340, 390, 392 }, // 25 LdStLHA
  { 2, 352, 355, 392, 394 }, // 26 LdStLHAU
  { 0, 0, 0, 0, 0 }, // 27 LdStLWA
  { 1, 355, 357, 394, 397 }, // 28 LdStLWARX
  { 1, 336, 338, 397, 399 }, // 29 BrMCR
  { 1, 357, 359, 399, 401 }, // 30 SprMFCR
  { 1, 359, 361, 401, 402 }, // 31 SprMFSPR
  { 1, 346, 348, 402, 403 }, // 32 IntMFFS
  { 1, 361, 363, 403, 405 }, // 33 SprMFTB
  { 1, 338, 340, 405, 407 }, // 34 LdStStore
  { 1, 359, 361, 407, 410 }, // 35 BrMCRX
  { 1, 334, 336, 410, 411 }, // 36 SprMTSPR
  { 1, 363, 365, 411, 414 }, // 37 IntMTFSB0
  { 1, 365, 368, 414, 417 }, // 38 IntMulHW
  { 1, 365, 368, 417, 420 }, // 39 IntMulHWU
  { 1, 368, 371, 420, 423 }, // 40 IntMulHD
  { 1, 368, 371, 423, 426 }, // 41 IntMulLI
  { 1, 371, 373, 426, 429 }, // 42 IntRotateD
  { 1, 334, 336, 429, 432 }, // 43 IntRotateDI
  { 1, 334, 336, 432, 435 }, // 44 IntRotate
  { 1, 371, 373, 435, 438 }, // 45 IntShift
  { 2, 352, 355, 438, 440 }, // 46 LdStStoreUpd
  { 1, 338, 340, 440, 442 }, // 47 LdStSTD
  { 1, 338, 340, 442, 444 }, // 48 LdStSTDCX
  { 2, 352, 355, 444, 446 }, // 49 LdStSTDU
  { 1, 338, 340, 446, 449 }, // 50 LdStSTFD
  { 2, 352, 355, 449, 452 }, // 51 LdStSTFDU
  { 1, 338, 340, 452, 454 }, // 52 LdStSTWCX
  { 1, 338, 340, 0, 0 }, // 53 LdStSync
  { 0, 0, 0, 0, 0 }, // 54 VecFP
  { 0, 0, 0, 0, 0 }, // 55 VecGeneral
  { 0, 0, 0, 0, 0 }, // 56 VecFPCompare
  { 0, 0, 0, 0, 0 }, // 57 VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry PPCWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // PPCWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry PPCWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // PPCWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry PPCReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // PPCReadAdvanceTable

static const llvm::MCSchedModel NoSchedModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMinLatency,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultILPWindow,
  MCSchedModel::DefaultMispredictPenalty,
  0, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  NoItineraries);

static const llvm::MCSchedModel PPC440ItinerariesModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMinLatency,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultILPWindow,
  MCSchedModel::DefaultMispredictPenalty,
  1, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  PPC440Itineraries);

static const llvm::MCSchedModel G3ItinerariesModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMinLatency,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultILPWindow,
  MCSchedModel::DefaultMispredictPenalty,
  2, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  G3Itineraries);

static const llvm::MCSchedModel G4ItinerariesModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMinLatency,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultILPWindow,
  MCSchedModel::DefaultMispredictPenalty,
  3, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  G4Itineraries);

static const llvm::MCSchedModel G4PlusItinerariesModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMinLatency,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultILPWindow,
  MCSchedModel::DefaultMispredictPenalty,
  4, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  G4PlusItineraries);

static const llvm::MCSchedModel G5Model(
  4, // IssueWidth
  0, // MinLatency
  3, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultILPWindow,
  16, // MispredictPenalty
  5, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  G5Itineraries);

static const llvm::MCSchedModel PPCA2Model(
  1, // IssueWidth
  MCSchedModel::DefaultMinLatency,
  6, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultILPWindow,
  13, // MispredictPenalty
  6, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  PPCA2Itineraries);

static const llvm::MCSchedModel PPCE500mcModel(
  2, // IssueWidth
  MCSchedModel::DefaultMinLatency,
  5, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultILPWindow,
  MCSchedModel::DefaultMispredictPenalty,
  7, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  PPCE500mcItineraries);

static const llvm::MCSchedModel PPCE5500Model(
  2, // IssueWidth
  MCSchedModel::DefaultMinLatency,
  6, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultILPWindow,
  MCSchedModel::DefaultMispredictPenalty,
  8, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  PPCE5500Itineraries);

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV PPCProcSchedKV[] = {
  { "440", (const void *)&PPC440ItinerariesModel },
  { "450", (const void *)&PPC440ItinerariesModel },
  { "601", (const void *)&G3ItinerariesModel },
  { "602", (const void *)&G3ItinerariesModel },
  { "603", (const void *)&G3ItinerariesModel },
  { "603e", (const void *)&G3ItinerariesModel },
  { "603ev", (const void *)&G3ItinerariesModel },
  { "604", (const void *)&G3ItinerariesModel },
  { "604e", (const void *)&G3ItinerariesModel },
  { "620", (const void *)&G3ItinerariesModel },
  { "7400", (const void *)&G4ItinerariesModel },
  { "7450", (const void *)&G4PlusItinerariesModel },
  { "750", (const void *)&G4ItinerariesModel },
  { "970", (const void *)&G5Model },
  { "a2", (const void *)&PPCA2Model },
  { "a2q", (const void *)&PPCA2Model },
  { "e500mc", (const void *)&PPCE500mcModel },
  { "e5500", (const void *)&PPCE5500Model },
  { "g3", (const void *)&G3ItinerariesModel },
  { "g4", (const void *)&G4ItinerariesModel },
  { "g4+", (const void *)&G4PlusItinerariesModel },
  { "g5", (const void *)&G5Model },
  { "generic", (const void *)&G3ItinerariesModel },
  { "ppc", (const void *)&G3ItinerariesModel },
  { "ppc64", (const void *)&G5Model },
  { "pwr3", (const void *)&G5Model },
  { "pwr4", (const void *)&G5Model },
  { "pwr5", (const void *)&G5Model },
  { "pwr5x", (const void *)&G5Model },
  { "pwr6", (const void *)&G5Model },
  { "pwr6x", (const void *)&G5Model },
  { "pwr7", (const void *)&G5Model }
};
#undef DBGFIELD
static inline void InitPPCMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, PPCFeatureKV, PPCSubTypeKV, 
                      PPCProcSchedKV, PPCWriteProcResTable, PPCWriteLatencyTable, PPCReadAdvanceTable, 
                      PPCStages, PPCOperandCycles, PPCForwardingPaths, 19, 32);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::PPCSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  uint64_t Bits = getFeatureBits();
  if ((Bits & PPC::Directive32) != 0 && DarwinDirective < PPC::DIR_32) DarwinDirective = PPC::DIR_32;
  if ((Bits & PPC::Directive64) != 0 && DarwinDirective < PPC::DIR_64) DarwinDirective = PPC::DIR_64;
  if ((Bits & PPC::Directive440) != 0 && DarwinDirective < PPC::DIR_440) DarwinDirective = PPC::DIR_440;
  if ((Bits & PPC::Directive601) != 0 && DarwinDirective < PPC::DIR_601) DarwinDirective = PPC::DIR_601;
  if ((Bits & PPC::Directive602) != 0 && DarwinDirective < PPC::DIR_602) DarwinDirective = PPC::DIR_602;
  if ((Bits & PPC::Directive603) != 0 && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if ((Bits & PPC::Directive604) != 0 && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if ((Bits & PPC::Directive620) != 0 && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if ((Bits & PPC::Directive750) != 0 && DarwinDirective < PPC::DIR_750) DarwinDirective = PPC::DIR_750;
  if ((Bits & PPC::Directive970) != 0 && DarwinDirective < PPC::DIR_970) DarwinDirective = PPC::DIR_970;
  if ((Bits & PPC::Directive7400) != 0 && DarwinDirective < PPC::DIR_7400) DarwinDirective = PPC::DIR_7400;
  if ((Bits & PPC::DirectiveA2) != 0 && DarwinDirective < PPC::DIR_A2) DarwinDirective = PPC::DIR_A2;
  if ((Bits & PPC::DirectiveE500mc) != 0 && DarwinDirective < PPC::DIR_E500mc) DarwinDirective = PPC::DIR_E500mc;
  if ((Bits & PPC::DirectiveE5500) != 0 && DarwinDirective < PPC::DIR_E5500) DarwinDirective = PPC::DIR_E5500;
  if ((Bits & PPC::DirectivePwr3) != 0 && DarwinDirective < PPC::DIR_PWR3) DarwinDirective = PPC::DIR_PWR3;
  if ((Bits & PPC::DirectivePwr4) != 0 && DarwinDirective < PPC::DIR_PWR4) DarwinDirective = PPC::DIR_PWR4;
  if ((Bits & PPC::DirectivePwr5) != 0 && DarwinDirective < PPC::DIR_PWR5) DarwinDirective = PPC::DIR_PWR5;
  if ((Bits & PPC::DirectivePwr5x) != 0 && DarwinDirective < PPC::DIR_PWR5X) DarwinDirective = PPC::DIR_PWR5X;
  if ((Bits & PPC::DirectivePwr6) != 0 && DarwinDirective < PPC::DIR_PWR6) DarwinDirective = PPC::DIR_PWR6;
  if ((Bits & PPC::DirectivePwr6x) != 0 && DarwinDirective < PPC::DIR_PWR6X) DarwinDirective = PPC::DIR_PWR6X;
  if ((Bits & PPC::DirectivePwr7) != 0 && DarwinDirective < PPC::DIR_PWR7) DarwinDirective = PPC::DIR_PWR7;
  if ((Bits & PPC::Feature64Bit) != 0) Has64BitSupport = true;
  if ((Bits & PPC::Feature64BitRegs) != 0) Use64BitRegs = true;
  if ((Bits & PPC::FeatureAltivec) != 0) HasAltivec = true;
  if ((Bits & PPC::FeatureBookE) != 0) IsBookE = true;
  if ((Bits & PPC::FeatureFPCVT) != 0) HasFPCVT = true;
  if ((Bits & PPC::FeatureFPRND) != 0) HasFPRND = true;
  if ((Bits & PPC::FeatureFRE) != 0) HasFRE = true;
  if ((Bits & PPC::FeatureFRES) != 0) HasFRES = true;
  if ((Bits & PPC::FeatureFRSQRTE) != 0) HasFRSQRTE = true;
  if ((Bits & PPC::FeatureFRSQRTES) != 0) HasFRSQRTES = true;
  if ((Bits & PPC::FeatureFSqrt) != 0) HasFSQRT = true;
  if ((Bits & PPC::FeatureISEL) != 0) HasISEL = true;
  if ((Bits & PPC::FeatureLDBRX) != 0) HasLDBRX = true;
  if ((Bits & PPC::FeatureLFIWAX) != 0) HasLFIWAX = true;
  if ((Bits & PPC::FeatureMFOCRF) != 0) HasMFOCRF = true;
  if ((Bits & PPC::FeaturePOPCNTD) != 0) HasPOPCNTD = true;
  if ((Bits & PPC::FeatureQPX) != 0) HasQPX = true;
  if ((Bits & PPC::FeatureRecipPrec) != 0) HasRecipPrec = true;
  if ((Bits & PPC::FeatureSTFIWX) != 0) HasSTFIWX = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct PPCGenSubtargetInfo : public TargetSubtargetInfo {
  explicit PPCGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass, const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
};
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR
#include "llvm/CodeGen/TargetSchedule.h"
namespace llvm {
extern const llvm::SubtargetFeatureKV PPCFeatureKV[];
extern const llvm::SubtargetFeatureKV PPCSubTypeKV[];
extern const llvm::SubtargetInfoKV PPCProcSchedKV[];
extern const llvm::MCWriteProcResEntry PPCWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry PPCWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry PPCReadAdvanceTable[];
extern const llvm::InstrStage PPCStages[];
extern const unsigned PPCOperandCycles[];
extern const unsigned PPCForwardingPaths[];
PPCGenSubtargetInfo::PPCGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, PPCFeatureKV, PPCSubTypeKV, 
                      PPCProcSchedKV, PPCWriteProcResTable, PPCWriteLatencyTable, PPCReadAdvanceTable, 
                      PPCStages, PPCOperandCycles, PPCForwardingPaths, 19, 32);
}

unsigned PPCGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // PPCGenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

