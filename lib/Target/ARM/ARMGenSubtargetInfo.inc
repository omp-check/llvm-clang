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
namespace ARM {
  const uint64_t FeatureAvoidMOVsShOp = 1ULL << 0;
  const uint64_t FeatureAvoidPartialCPSR = 1ULL << 1;
  const uint64_t FeatureD16 = 1ULL << 2;
  const uint64_t FeatureDB = 1ULL << 3;
  const uint64_t FeatureDSPThumb2 = 1ULL << 4;
  const uint64_t FeatureFP16 = 1ULL << 5;
  const uint64_t FeatureHWDiv = 1ULL << 6;
  const uint64_t FeatureHWDivARM = 1ULL << 7;
  const uint64_t FeatureHasRAS = 1ULL << 8;
  const uint64_t FeatureHasSlowFPVMLx = 1ULL << 9;
  const uint64_t FeatureMClass = 1ULL << 10;
  const uint64_t FeatureMP = 1ULL << 11;
  const uint64_t FeatureNEON = 1ULL << 12;
  const uint64_t FeatureNEONForFP = 1ULL << 13;
  const uint64_t FeatureNaClTrap = 1ULL << 14;
  const uint64_t FeatureNoARM = 1ULL << 15;
  const uint64_t FeaturePref32BitThumb = 1ULL << 16;
  const uint64_t FeatureSlowFPBrcc = 1ULL << 17;
  const uint64_t FeatureT2XtPk = 1ULL << 18;
  const uint64_t FeatureThumb2 = 1ULL << 19;
  const uint64_t FeatureTrustZone = 1ULL << 20;
  const uint64_t FeatureVFP2 = 1ULL << 21;
  const uint64_t FeatureVFP3 = 1ULL << 22;
  const uint64_t FeatureVFP4 = 1ULL << 23;
  const uint64_t FeatureVFPOnlySP = 1ULL << 24;
  const uint64_t FeatureVMLxForwarding = 1ULL << 25;
  const uint64_t HasV4TOps = 1ULL << 26;
  const uint64_t HasV5TEOps = 1ULL << 27;
  const uint64_t HasV5TOps = 1ULL << 28;
  const uint64_t HasV6Ops = 1ULL << 29;
  const uint64_t HasV6T2Ops = 1ULL << 30;
  const uint64_t HasV7Ops = 1ULL << 31;
  const uint64_t ModeThumb = 1ULL << 32;
  const uint64_t ProcA5 = 1ULL << 33;
  const uint64_t ProcA8 = 1ULL << 34;
  const uint64_t ProcA9 = 1ULL << 35;
  const uint64_t ProcA15 = 1ULL << 36;
  const uint64_t ProcR5 = 1ULL << 37;
  const uint64_t ProcSwift = 1ULL << 38;
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV ARMFeatureKV[] = {
  { "32bit", "Prefer 32-bit Thumb instrs", ARM::FeaturePref32BitThumb, 0ULL },
  { "a15", "Cortex-A15 ARM processors", ARM::ProcA15, ARM::FeatureT2XtPk | ARM::FeatureFP16 | ARM::FeatureAvoidPartialCPSR | ARM::FeatureTrustZone },
  { "a5", "Cortex-A5 ARM processors", ARM::ProcA5, ARM::FeatureSlowFPBrcc | ARM::FeatureHasSlowFPVMLx | ARM::FeatureVMLxForwarding | ARM::FeatureT2XtPk | ARM::FeatureTrustZone },
  { "a8", "Cortex-A8 ARM processors", ARM::ProcA8, ARM::FeatureSlowFPBrcc | ARM::FeatureHasSlowFPVMLx | ARM::FeatureVMLxForwarding | ARM::FeatureT2XtPk | ARM::FeatureTrustZone },
  { "a9", "Cortex-A9 ARM processors", ARM::ProcA9, ARM::FeatureVMLxForwarding | ARM::FeatureT2XtPk | ARM::FeatureFP16 | ARM::FeatureAvoidPartialCPSR | ARM::FeatureTrustZone },
  { "avoid-movs-shop", "Avoid movs instructions with shifter operand", ARM::FeatureAvoidMOVsShOp, 0ULL },
  { "avoid-partial-cpsr", "Avoid CPSR partial update for OOO execution", ARM::FeatureAvoidPartialCPSR, 0ULL },
  { "d16", "Restrict VFP3 to 16 double registers", ARM::FeatureD16, 0ULL },
  { "db", "Has data barrier (dmb / dsb) instructions", ARM::FeatureDB, 0ULL },
  { "fp-only-sp", "Floating point unit supports single precision only", ARM::FeatureVFPOnlySP, 0ULL },
  { "fp16", "Enable half-precision floating point", ARM::FeatureFP16, 0ULL },
  { "hwdiv", "Enable divide instructions", ARM::FeatureHWDiv, 0ULL },
  { "hwdiv-arm", "Enable divide instructions in ARM mode", ARM::FeatureHWDivARM, 0ULL },
  { "mclass", "Is microcontroller profile ('M' series)", ARM::FeatureMClass, 0ULL },
  { "mp", "Supports Multiprocessing extension", ARM::FeatureMP, 0ULL },
  { "nacl-trap", "NaCl trap", ARM::FeatureNaClTrap, 0ULL },
  { "neon", "Enable NEON instructions", ARM::FeatureNEON, ARM::FeatureVFP3 },
  { "neonfp", "Use NEON for single precision FP", ARM::FeatureNEONForFP, 0ULL },
  { "noarm", "Does not support ARM mode execution", ARM::FeatureNoARM, 0ULL },
  { "r5", "Cortex-R5 ARM processors", ARM::ProcR5, ARM::FeatureSlowFPBrcc | ARM::FeatureHWDivARM | ARM::FeatureHasSlowFPVMLx | ARM::FeatureAvoidPartialCPSR | ARM::FeatureT2XtPk },
  { "ras", "Has return address stack", ARM::FeatureHasRAS, 0ULL },
  { "slow-fp-brcc", "FP compare + branch is slow", ARM::FeatureSlowFPBrcc, 0ULL },
  { "slowfpvmlx", "Disable VFP / NEON MAC instructions", ARM::FeatureHasSlowFPVMLx, 0ULL },
  { "swift", "Swift ARM processors", ARM::ProcSwift, ARM::FeatureNEONForFP | ARM::FeatureT2XtPk | ARM::FeatureVFP4 | ARM::FeatureMP | ARM::FeatureHWDiv | ARM::FeatureHWDivARM | ARM::FeatureAvoidPartialCPSR | ARM::FeatureAvoidMOVsShOp | ARM::FeatureHasSlowFPVMLx | ARM::FeatureTrustZone },
  { "t2dsp", "Supports v7 DSP instructions in Thumb2", ARM::FeatureDSPThumb2, 0ULL },
  { "t2xtpk", "Enable Thumb2 extract and pack instructions", ARM::FeatureT2XtPk, 0ULL },
  { "thumb-mode", "Thumb mode", ARM::ModeThumb, 0ULL },
  { "thumb2", "Enable Thumb2 instructions", ARM::FeatureThumb2, 0ULL },
  { "trustzone", "Enable support for TrustZone security extensions", ARM::FeatureTrustZone, 0ULL },
  { "v4t", "Support ARM v4T instructions", ARM::HasV4TOps, 0ULL },
  { "v5t", "Support ARM v5T instructions", ARM::HasV5TOps, ARM::HasV4TOps },
  { "v5te", "Support ARM v5TE, v5TEj, and v5TExp instructions", ARM::HasV5TEOps, ARM::HasV5TOps },
  { "v6", "Support ARM v6 instructions", ARM::HasV6Ops, ARM::HasV5TEOps },
  { "v6t2", "Support ARM v6t2 instructions", ARM::HasV6T2Ops, ARM::HasV6Ops | ARM::FeatureThumb2 },
  { "v7", "Support ARM v7 instructions", ARM::HasV7Ops, ARM::HasV6T2Ops },
  { "vfp2", "Enable VFP2 instructions", ARM::FeatureVFP2, 0ULL },
  { "vfp3", "Enable VFP3 instructions", ARM::FeatureVFP3, ARM::FeatureVFP2 },
  { "vfp4", "Enable VFP4 instructions", ARM::FeatureVFP4, ARM::FeatureVFP3 | ARM::FeatureFP16 },
  { "vmlx-forwarding", "Has multiplier accumulator forwarding", ARM::FeatureVMLxForwarding, 0ULL }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV ARMSubTypeKV[] = {
  { "arm1020e", "Select the arm1020e processor", ARM::HasV5TEOps, 0ULL },
  { "arm1020t", "Select the arm1020t processor", ARM::HasV5TOps, 0ULL },
  { "arm1022e", "Select the arm1022e processor", ARM::HasV5TEOps, 0ULL },
  { "arm10e", "Select the arm10e processor", ARM::HasV5TEOps, 0ULL },
  { "arm10tdmi", "Select the arm10tdmi processor", ARM::HasV5TOps, 0ULL },
  { "arm1136j-s", "Select the arm1136j-s processor", ARM::HasV6Ops, 0ULL },
  { "arm1136jf-s", "Select the arm1136jf-s processor", ARM::HasV6Ops | ARM::FeatureVFP2 | ARM::FeatureHasSlowFPVMLx, 0ULL },
  { "arm1156t2-s", "Select the arm1156t2-s processor", ARM::HasV6T2Ops | ARM::FeatureDSPThumb2, 0ULL },
  { "arm1156t2f-s", "Select the arm1156t2f-s processor", ARM::HasV6T2Ops | ARM::FeatureVFP2 | ARM::FeatureHasSlowFPVMLx | ARM::FeatureDSPThumb2, 0ULL },
  { "arm1176jz-s", "Select the arm1176jz-s processor", ARM::HasV6Ops, 0ULL },
  { "arm1176jzf-s", "Select the arm1176jzf-s processor", ARM::HasV6Ops | ARM::FeatureVFP2 | ARM::FeatureHasSlowFPVMLx, 0ULL },
  { "arm710t", "Select the arm710t processor", ARM::HasV4TOps, 0ULL },
  { "arm720t", "Select the arm720t processor", ARM::HasV4TOps, 0ULL },
  { "arm7tdmi", "Select the arm7tdmi processor", ARM::HasV4TOps, 0ULL },
  { "arm7tdmi-s", "Select the arm7tdmi-s processor", ARM::HasV4TOps, 0ULL },
  { "arm8", "Select the arm8 processor", 0ULL, 0ULL },
  { "arm810", "Select the arm810 processor", 0ULL, 0ULL },
  { "arm9", "Select the arm9 processor", ARM::HasV4TOps, 0ULL },
  { "arm920", "Select the arm920 processor", ARM::HasV4TOps, 0ULL },
  { "arm920t", "Select the arm920t processor", ARM::HasV4TOps, 0ULL },
  { "arm922t", "Select the arm922t processor", ARM::HasV4TOps, 0ULL },
  { "arm926ej-s", "Select the arm926ej-s processor", ARM::HasV5TEOps, 0ULL },
  { "arm940t", "Select the arm940t processor", ARM::HasV4TOps, 0ULL },
  { "arm946e-s", "Select the arm946e-s processor", ARM::HasV5TEOps, 0ULL },
  { "arm966e-s", "Select the arm966e-s processor", ARM::HasV5TEOps, 0ULL },
  { "arm968e-s", "Select the arm968e-s processor", ARM::HasV5TEOps, 0ULL },
  { "arm9e", "Select the arm9e processor", ARM::HasV5TEOps, 0ULL },
  { "arm9tdmi", "Select the arm9tdmi processor", ARM::HasV4TOps, 0ULL },
  { "cortex-a15", "Select the cortex-a15 processor", ARM::ProcA15 | ARM::HasV7Ops | ARM::FeatureNEON | ARM::FeatureDB | ARM::FeatureDSPThumb2 | ARM::FeatureHasRAS, 0ULL },
  { "cortex-a5", "Select the cortex-a5 processor", ARM::ProcA5 | ARM::HasV7Ops | ARM::FeatureNEON | ARM::FeatureDB | ARM::FeatureVFP4 | ARM::FeatureDSPThumb2 | ARM::FeatureHasRAS, 0ULL },
  { "cortex-a8", "Select the cortex-a8 processor", ARM::ProcA8 | ARM::HasV7Ops | ARM::FeatureNEON | ARM::FeatureDB | ARM::FeatureDSPThumb2 | ARM::FeatureHasRAS, 0ULL },
  { "cortex-a9", "Select the cortex-a9 processor", ARM::ProcA9 | ARM::HasV7Ops | ARM::FeatureNEON | ARM::FeatureDB | ARM::FeatureDSPThumb2 | ARM::FeatureHasRAS, 0ULL },
  { "cortex-a9-mp", "Select the cortex-a9-mp processor", ARM::ProcA9 | ARM::HasV7Ops | ARM::FeatureNEON | ARM::FeatureDB | ARM::FeatureDSPThumb2 | ARM::FeatureMP | ARM::FeatureHasRAS, 0ULL },
  { "cortex-m0", "Select the cortex-m0 processor", ARM::HasV6Ops | ARM::FeatureNoARM | ARM::FeatureDB | ARM::FeatureMClass, 0ULL },
  { "cortex-m3", "Select the cortex-m3 processor", ARM::HasV7Ops | ARM::FeatureThumb2 | ARM::FeatureNoARM | ARM::FeatureDB | ARM::FeatureHWDiv | ARM::FeatureMClass, 0ULL },
  { "cortex-m4", "Select the cortex-m4 processor", ARM::HasV7Ops | ARM::FeatureThumb2 | ARM::FeatureNoARM | ARM::FeatureDB | ARM::FeatureHWDiv | ARM::FeatureDSPThumb2 | ARM::FeatureT2XtPk | ARM::FeatureVFP4 | ARM::FeatureVFPOnlySP | ARM::FeatureMClass, 0ULL },
  { "cortex-r5", "Select the cortex-r5 processor", ARM::ProcR5 | ARM::HasV7Ops | ARM::FeatureDB | ARM::FeatureVFP3 | ARM::FeatureDSPThumb2 | ARM::FeatureHasRAS, 0ULL },
  { "ep9312", "Select the ep9312 processor", ARM::HasV4TOps, 0ULL },
  { "generic", "Select the generic processor", 0ULL, 0ULL },
  { "iwmmxt", "Select the iwmmxt processor", ARM::HasV5TEOps, 0ULL },
  { "mpcore", "Select the mpcore processor", ARM::HasV6Ops | ARM::FeatureVFP2 | ARM::FeatureHasSlowFPVMLx, 0ULL },
  { "mpcorenovfp", "Select the mpcorenovfp processor", ARM::HasV6Ops, 0ULL },
  { "strongarm", "Select the strongarm processor", 0ULL, 0ULL },
  { "strongarm110", "Select the strongarm110 processor", 0ULL, 0ULL },
  { "strongarm1100", "Select the strongarm1100 processor", 0ULL, 0ULL },
  { "strongarm1110", "Select the strongarm1110 processor", 0ULL, 0ULL },
  { "swift", "Select the swift processor", ARM::ProcSwift | ARM::HasV7Ops | ARM::FeatureNEON | ARM::FeatureDB | ARM::FeatureDSPThumb2 | ARM::FeatureHasRAS, 0ULL },
  { "xscale", "Select the xscale processor", ARM::HasV5TEOps, 0ULL }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "ARMV6Itineraries"
namespace ARMV6ItinerariesFU {
  const unsigned V6_Pipe = 1 << 0;
}

// Functional units for "CortexA9Itineraries"
namespace CortexA9ItinerariesFU {
  const unsigned A9_Issue0 = 1 << 0;
  const unsigned A9_Issue1 = 1 << 1;
  const unsigned A9_Branch = 1 << 2;
  const unsigned A9_ALU0 = 1 << 3;
  const unsigned A9_ALU1 = 1 << 4;
  const unsigned A9_AGU = 1 << 5;
  const unsigned A9_NPipe = 1 << 6;
  const unsigned A9_MUX0 = 1 << 7;
  const unsigned A9_LSUnit = 1 << 8;
  const unsigned A9_DRegsVFP = 1 << 9;
  const unsigned A9_DRegsN = 1 << 10;
}

// Pipeline forwarding pathes for itineraries "CortexA9Itineraries"
namespace CortexA9ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned A9_LdBypass = 1 << 0;
}

// Functional units for "CortexA8Itineraries"
namespace CortexA8ItinerariesFU {
  const unsigned A8_Pipe0 = 1 << 0;
  const unsigned A8_Pipe1 = 1 << 1;
  const unsigned A8_LSPipe = 1 << 2;
  const unsigned A8_NPipe = 1 << 3;
  const unsigned A8_NLSPipe = 1 << 4;
}

// Functional units for "SwiftItineraries"
namespace SwiftItinerariesFU {
  const unsigned SW_DIS0 = 1 << 0;
  const unsigned SW_DIS1 = 1 << 1;
  const unsigned SW_DIS2 = 1 << 2;
  const unsigned SW_ALU0 = 1 << 3;
  const unsigned SW_ALU1 = 1 << 4;
  const unsigned SW_LS = 1 << 5;
  const unsigned SW_IDIV = 1 << 6;
  const unsigned SW_FDIV = 1 << 7;
}

extern const llvm::InstrStage ARMStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 2, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 3, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 3, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4-5
  { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6-7
  { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 8-10
  { 29, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 11
  { 15, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 12
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 13-14
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 15-16
  { 1, CortexA9ItinerariesFU::A9_Issue0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_Branch, -1, (llvm::InstrStage::ReservationKinds)0 }, // 17-19
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 20-21
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 22-26
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 27-31
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_AGU, 1, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 32-35
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 1, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_Branch, -1, (llvm::InstrStage::ReservationKinds)0 }, // 36-40
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 41-44
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 45-48
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, 0, (llvm::InstrStage::ReservationKinds)0 }, // 49-52
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_ALU0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 53-54
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 55-58
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 59-61
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 62-65
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 66-71
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_AGU, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 72-75
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 76
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_ALU0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 77-78
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 79-82
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 83-87
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 88-92
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 93-97
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 98-102
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 26, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 20, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 103-107
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 16, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 10, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 108-112
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 113-117
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 10, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 118-122
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 123-127
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 10, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 4, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 128-132
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 133-138
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 139-144
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 3, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 145-150
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 11, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 5, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 151-156
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 10, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 4, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 157-162
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 163-168
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 169-174
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 }, // 175-176
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 177-181
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 182-186
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 187-191
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 11, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 192-196
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 12, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 197-201
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 202-206
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 33, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 28, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 207-211
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 18, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 13, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 212-216
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 217-222
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 223-228
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 3, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 229-234
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 235-239
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 3, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 240-244
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 3, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 245-249
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 250-254
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 255-259
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_AGU, 1, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_Branch, -1, (llvm::InstrStage::ReservationKinds)0 }, // 260-264
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 265
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 266-268
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 269-270
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 271-272
  { 2, CortexA8ItinerariesFU::A8_Pipe0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 273-274
  { 3, CortexA8ItinerariesFU::A8_Pipe0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 275-276
  { 3, CortexA8ItinerariesFU::A8_Pipe0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 277-279
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 280-281
  { 2, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 282-283
  { 2, CortexA8ItinerariesFU::A8_Pipe0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 284
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 285-286
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 287-289
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 290-292
  { 3, CortexA8ItinerariesFU::A8_Pipe0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 293
  { 1, CortexA8ItinerariesFU::A8_Pipe0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 294
  { 2, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 295-296
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 297-298
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 299-301
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 302-304
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 305-307
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 29, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 29, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 308-310
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 20, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 20, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 311-313
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 314-315
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 19, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 19, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 316-318
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 319-321
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 322-324
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 325-327
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 328-330
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 331-333
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 334-336
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 337-341
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 342-344
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 345-348
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 11, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 11, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 349-351
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 352-354
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 355-358
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 359-361
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 362-363
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 }, // 364
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 365-366
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 367-368
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 369-373
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 3, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 374-379
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 380-383
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 384-387
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 388-389
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 2, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 390-393
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 3, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 394-399
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 3, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 400-406
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 407-410
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 411-414
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 415-418
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 14, SwiftItinerariesFU::SW_IDIV, -1, (llvm::InstrStage::ReservationKinds)0 }, // 419-421
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 3, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 422-428
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, 3, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 429-434
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 435-443
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 444-449
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 4, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 450-453
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 454-455
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 30, SwiftItinerariesFU::SW_FDIV, -1, (llvm::InstrStage::ReservationKinds)0 }, // 456-458
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 15, SwiftItinerariesFU::SW_FDIV, -1, (llvm::InstrStage::ReservationKinds)0 }, // 459-461
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 4, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 462-465
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 4, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 466-469
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 3, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 470-473
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 2, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 474-477
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 2, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 2, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 478-483
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 2, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 2, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 2, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 484-490
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 491-494
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 3, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 495-497
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned ARMOperandCycles[] = {
  0, // No itinerary
  2,   2, // 1-2
  2,   2,   2, // 3-5
  3,   3,   2,   1, // 6-9
  3,   3,   2,   1, // 10-13
  3,   3,   2,   1, // 14-17
  2,   2, // 18-19
  2,   2,   2, // 20-22
  3,   3,   2,   1, // 23-26
  3,   3,   2,   1, // 27-30
  2,   1, // 31-32
  2,   2, // 33-34
  2, // 35
  2,   2, // 36-37
  3,   2,   1, // 38-40
  2, // 41
  2,   2, // 42-43
  3,   2,   1, // 44-46
  3,   2,   1, // 47-49
  5,   2, // 50-51
  5,   2, // 52-53
  3, // 54
  1,   1,   1,   1,   4, // 55-59
  2,   1,   1,   1,   4, // 60-64
  1,   2,   1,   1,   4, // 65-69
  4,   2,   1,   1, // 70-73
  4,   2,   1, // 74-76
  4,   1,   1, // 77-79
  5,   2,   1, // 80-82
  4,   1,   1, // 83-85
  4,   2,   1,   1, // 86-89
  4,   2,   1,   1, // 90-93
  4,   2,   1, // 94-96
  4,   1,   1, // 97-99
  5,   2,   1, // 100-102
  2,   2, // 103-104
  5,   1,   1,   2, // 105-108
  3, // 109
  2, // 110
  4, // 111
  3,   2, // 112-113
  4,   2,   1, // 114-116
  2, // 117
  3, // 118
  5, // 119
  2,   2, // 120-121
  3,   2,   1, // 122-124
  2,   1, // 125-126
  5,   1,   1, // 127-129
  2, // 130
  2,   2, // 131-132
  3,   2,   1, // 133-135
  2,   2,   2, // 136-138
  2,   1,   1, // 139-141
  2,   1,   1, // 142-144
  2,   2,   1, // 145-147
  2,   2,   1, // 148-150
  4,   1,   1,   2, // 151-154
  6,   1,   1,   2, // 155-158
  4,   1,   1, // 159-161
  6,   1,   1, // 162-164
  2, // 165
  2,   2,   1,   1, // 166-169
  2,   2,   1, // 170-172
  2,   2,   1,   1, // 173-176
  2,   2,   1, // 177-179
  2,   1,   1, // 180-182
  2,   2,   1,   1, // 183-186
  2,   2,   1, // 187-189
  2,   2,   1, // 190-192
  2,   2,   1, // 193-195
  1,   1, // 196-197
  2, // 198
  2,   2, // 199-200
  3,   2,   1, // 201-203
  3,   2,   1, // 204-206
  9,   2,   2, // 207-209
  9,   2,   2, // 210-212
  2,   2, // 213-214
  2,   2, // 215-216
  5,   2, // 217-218
  5,   2, // 219-220
  34,   2,   2, // 221-223
  20,   2,   2, // 224-226
  9,   2,   2,   2, // 227-230
  9,   2,   2,   2, // 231-234
  3,   2,   1,   1,   5, // 235-239
  2,   1,   1,   5, // 240-243
  5,   2,   2, // 244-246
  5,   2,   2, // 247-249
  9,   2,   2,   2, // 250-253
  9,   2,   2,   2, // 254-257
  10,   1,   1, // 258-260
  10,   10,   1, // 261-263
  10,   1, // 264-265
  10,   1, // 266-267
  9,   2,   2, // 268-270
  9,   2,   2, // 271-273
  9,   2, // 274-275
  9,   2, // 276-277
  34,   2,   2, // 278-280
  20,   2,   2, // 281-283
  2,   2,   2,   2, // 284-287
  2,   2,   2, // 288-290
  2,   2,   2, // 291-293
  9,   2, // 294-295
  9,   2, // 296-297
  2,   2,   1, // 298-300
  2,   2, // 301-302
  2,   2,   2, // 303-305
  2,   2,   1, // 306-308
  2,   2, // 309-310
  2,   1, // 311-312
  4,   1, // 313-314
  4,   1, // 315-316
  4,   1, // 317-318
  3,   1, // 319-320
  3,   1, // 321-322
  2,   1, // 323-324
  2,   1, // 325-326
  2,   1, // 327-328
  3,   3,   2,   1, // 329-332
  2, // 333
  2,   2, // 334-335
  2,   1, // 336-337
  1,   1,   4, // 338-340
  1,   2,   4, // 341-343
  1,   1, // 344-345
  1,   1,   1, // 346-348
  3,   1,   1,   1, // 349-352
  3,   1,   1,   1, // 353-356
  3,   1,   1,   1, // 357-360
  1,   1, // 361-362
  1,   1,   1, // 363-365
  3,   1,   1,   1, // 366-369
  3,   1,   1,   1, // 370-373
  2,   1, // 374-375
  1,   1, // 376-377
  1, // 378
  1,   1, // 379-380
  1,   1,   1, // 381-383
  1, // 384
  1,   1, // 385-386
  1,   1,   1, // 387-389
  1,   1,   1, // 390-392
  1,   1, // 393-394
  1,   1, // 395-396
  1, // 397
  1,   1,   1,   1,   3, // 398-402
  2,   1,   1,   1,   3, // 403-407
  1,   2,   1,   1,   3, // 408-412
  4,   3,   1,   1, // 413-416
  4,   3,   1, // 417-419
  4,   1,   1, // 420-422
  5,   1,   1, // 423-425
  3,   3,   1,   1, // 426-429
  3,   3,   1,   1, // 430-433
  3,   2,   1,   1, // 434-437
  3,   2,   1, // 438-440
  3,   1,   1, // 441-443
  4,   1,   1, // 444-446
  1,   1, // 447-448
  4,   1,   1,   1, // 449-452
  1, // 453
  1, // 454
  2, // 455
  1,   1, // 456-457
  2,   1,   1, // 458-460
  2, // 461
  3, // 462
  5, // 463
  1,   1, // 464-465
  2,   1,   1, // 466-468
  1,   1, // 469-470
  4,   1,   1, // 471-473
  1, // 474
  1,   1, // 475-476
  3,   1,   1, // 477-479
  1,   1,   1, // 480-482
  1,   1,   1, // 483-485
  1,   1,   1, // 486-488
  2,   1,   1, // 489-491
  2,   1,   1, // 492-494
  1,   1, // 495-496
  3,   1,   1,   1, // 497-500
  4,   5,   1,   1, // 501-504
  3,   1,   1, // 505-507
  4,   5,   1,   1, // 508-511
  2, // 512
  3,   1,   1,   1, // 513-516
  3,   1,   1, // 517-519
  2,   1,   1,   1, // 520-523
  1,   1,   1, // 524-526
  1,   1,   1, // 527-529
  3,   1,   1,   1, // 530-533
  2,   1,   1, // 534-536
  1,   1,   1, // 537-539
  3,   1,   1, // 540-542
  2,   1, // 543-544
  1, // 545
  1,   1, // 546-547
  1,   1,   1, // 548-550
  1,   1,   1, // 551-553
  6,   3,   2,   1, // 554-557
  6,   3,   2,   1, // 558-561
  4,   2,   1, // 562-564
  5,   2,   2, // 565-567
  6,   2,   2, // 568-570
  4,   2,   1, // 571-573
  5,   2, // 574-575
  6,   2, // 576-577
  4,   2, // 578-579
  4,   2, // 580-581
  4,   1,   1, // 582-584
  4,   2,   2, // 585-587
  3,   1,   1, // 588-590
  4,   1,   1, // 591-593
  3,   2,   1, // 594-596
  3,   2,   2, // 597-599
  3,   2,   2, // 600-602
  3, // 603
  3,   2,   2, // 604-606
  4,   2,   2, // 607-609
  1,   1, // 610-611
  1,   1, // 612-613
  4,   1, // 614-615
  2,   1, // 616-617
  4,   1, // 618-619
  4,   1, // 620-621
  25,   1,   1, // 622-624
  15,   1,   1, // 625-627
  1,   1, // 628-629
  2,   1, // 630-631
  2,   1, // 632-633
  2,   1,   1, // 634-636
  3,   1,   2, // 637-639
  9,   1,   1,   1, // 640-643
  8,   1,   1,   1, // 644-647
  6,   3,   2,   1, // 648-651
  8,   4,   2,   1, // 652-655
  2,   1, // 656-657
  4,   2,   2, // 658-660
  2,   1, // 661-662
  2,   2,   1,   1, // 663-666
  3,   1,   1,   1, // 667-670
  3,   2,   1,   1,   1,   1, // 671-676
  1,   1, // 677-678
  1,   1,   2,   2,   1, // 679-683
  1,   1,   2,   1, // 684-687
  1,   1,   2,   1, // 688-691
  1,   2,   1, // 692-694
  1,   1,   1, // 695-697
  2,   2,   1, // 698-700
  2,   2,   2,   1,   1, // 701-705
  3,   3,   1,   1,   1,   1, // 706-711
  3,   3,   2,   1,   1,   1,   1,   1, // 712-719
  2,   2,   1, // 720-722
  2,   2,   2,   1,   1,   1, // 723-728
  2,   3,   2,   3,   1, // 729-733
  2,   3,   2,   3,   2,   1, // 734-739
  3,   3,   4,   1, // 740-743
  3,   3,   4,   2,   1,   1, // 744-749
  5,   5,   6,   1,   1,   1,   1,   2, // 750-757
  5,   5,   6,   2,   1,   1,   1,   1,   1,   2, // 758-767
  3,   3,   4,   1, // 768-771
  3,   3,   4,   2,   1, // 772-776
  2,   2,   3,   3,   1, // 777-781
  2,   2,   3,   3,   2,   1,   1, // 782-788
  4,   4,   5,   5,   1,   1,   1,   1,   2,   2, // 789-798
  4,   4,   5,   5,   2,   1,   1,   1,   1,   1,   2,   2, // 799-810
  3,   3,   4,   4,   1, // 811-815
  3,   3,   4,   4,   2,   1, // 816-821
  2,   1,   1,   1, // 822-825
  1,   1,   1,   1, // 826-829
  2,   1, // 830-831
  1,   1, // 832-833
  9,   1,   1,   1, // 834-837
  7,   3,   2,   1, // 838-841
  6,   3,   2,   2, // 842-845
  8,   1,   1,   1, // 846-849
  6,   3,   2,   1, // 850-853
  8,   4,   2,   1, // 854-857
  9,   3,   2,   1, // 858-861
  7,   3,   2,   2, // 862-865
  1,   1,   1, // 866-868
  4,   1, // 869-870
  3,   1, // 871-872
  2,   1,   1, // 873-875
  2,   1, // 876-877
  1,   1, // 878-879
  6,   1,   1, // 880-882
  6,   2,   2, // 883-885
  7,   2,   1, // 886-888
  5,   1,   1, // 889-891
  5,   2,   1, // 892-894
  6,   2,   1, // 895-897
  7,   2,   2, // 898-900
  9,   2,   1, // 901-903
  3,   1,   1, // 904-906
  6,   3,   1, // 907-909
  6,   3,   1, // 910-912
  5,   1,   1, // 913-915
  4,   1, // 916-917
  4,   1,   1, // 918-920
  4,   1,   1, // 921-923
  9,   2,   2, // 924-926
  10,   2,   2, // 927-929
  3,   1,   1, // 930-932
  4,   1, // 933-934
  4,   1, // 935-936
  32,   1, // 937-938
  17,   1, // 939-940
  1,   1,   1, // 941-943
  2,   1,   1,   1,   1, // 944-948
  1,   1,   1, // 949-951
  1,   1,   1,   1,   2,   2, // 952-957
  1,   1,   2,   2,   2,   1, // 958-963
  1,   1,   1,   1,   2, // 964-968
  1,   1,   2,   2,   1, // 969-973
  2,   1,   1,   1,   1,   1,   2,   2, // 974-981
  2,   1,   1,   1,   1,   1,   2, // 982-988
  1,   1,   1,   1, // 989-992
  1,   1,   1,   1, // 993-996
  2,   1,   1,   1,   1,   1, // 997-1002
  1,   1,   1,   1, // 1003-1006
  1,   1,   1,   1,   2,   2, // 1007-1012
  2,   1,   1,   1,   1,   1,   2,   2, // 1013-1020
  1,   1,   1,   1,   2, // 1021-1025
  2,   1,   1,   1,   1,   1,   2, // 1026-1032
  1,   1,   1,   1,   2, // 1033-1037
  2,   1,   1,   1,   1,   1,   2, // 1038-1044
  1,   1,   1,   1,   2,   2, // 1045-1050
  2,   1,   1,   1,   1,   1,   2,   2, // 1051-1058
  1,   1,   1,   1,   2,   2, // 1059-1064
  2,   1,   1,   1,   1,   1,   2,   2, // 1065-1072
  1,   1,   1,   1, // 1073-1076
  1,   1, // 1077-1078
  1,   1, // 1079-1080
  3,   2,   1, // 1081-1083
  3,   2,   1, // 1084-1086
  3,   2,   2,   1, // 1087-1090
  4,   2,   2,   3,   1, // 1091-1095
  4,   2,   2,   3,   3,   1, // 1096-1101
  3,   1,   2,   1, // 1102-1105
  3,   1,   2,   2,   1, // 1106-1110
  4,   1,   2,   2,   3,   1, // 1111-1116
  4,   1,   2,   2,   3,   3,   1, // 1117-1123
  4,   1, // 1124-1125
  4,   1, // 1126-1127
  2,   2,   1,   1, // 1128-1131
  3,   3,   1,   1, // 1132-1135
  4,   4,   1,   1, // 1136-1139
  2,   1,   1, // 1140-1142
  1,   1, // 1143-1144
  1,   1,   1, // 1145-1147
  2,   1,   1, // 1148-1150
  1,   1, // 1151-1152
  1,   1, // 1153-1154
  4,   1, // 1155-1156
  3,   3,   1, // 1157-1159
  3,   1, // 1160-1161
  2,   1, // 1162-1163
  1,   1, // 1164-1165
  2,   1, // 1166-1167
  2,   1,   1, // 1168-1170
  1,   1, // 1171-1172
  1,   1, // 1173-1174
  3,   1,   1,   1, // 1175-1178
  1, // 1179
  1,   1, // 1180-1181
  1,   1, // 1182-1183
  1,   1,   3, // 1184-1186
  1,   1,   3, // 1187-1189
  2,   2, // 1190-1191
  2,   2,   2, // 1192-1194
  2,   2,   1,   1, // 1195-1198
  2,   2,   1,   1, // 1199-1202
  2,   2,   1,   1, // 1203-1206
  2,   2, // 1207-1208
  2,   2,   2, // 1209-1211
  2,   2,   1,   1, // 1212-1215
  2,   2,   1,   1, // 1216-1219
  2,   1, // 1220-1221
  2,   2, // 1222-1223
  2, // 1224
  2,   2, // 1225-1226
  2,   1,   1, // 1227-1229
  2, // 1230
  2,   2, // 1231-1232
  2,   1,   1, // 1233-1235
  2,   1,   1, // 1236-1238
  4,   1, // 1239-1240
  7,   1, // 1241-1242
  20, // 1243
  1,   1,   1,   1,   3, // 1244-1248
  2,   1,   1,   1,   3, // 1249-1253
  1,   2,   1,   1,   3, // 1254-1258
  3,   2,   1,   1, // 1259-1262
  3,   2,   1, // 1263-1265
  3,   1,   1, // 1266-1268
  4,   1,   1, // 1269-1271
  3,   1,   1, // 1272-1274
  3,   2,   1,   1, // 1275-1278
  3,   2,   1,   1, // 1279-1282
  3,   2,   1, // 1283-1285
  3,   1,   1, // 1286-1288
  4,   1,   1, // 1289-1291
  2,   2, // 1292-1293
  6,   1,   1,   4, // 1294-1297
  2, // 1298
  1, // 1299
  3,   1, // 1300-1301
  2,   1, // 1302-1303
  2,   1,   1, // 1304-1306
  2, // 1307
  3, // 1308
  5, // 1309
  1,   1, // 1310-1311
  1,   1,   1, // 1312-1314
  1,   1, // 1315-1316
  6,   1,   1, // 1317-1319
  1, // 1320
  1,   1, // 1321-1322
  1,   1,   1, // 1323-1325
  2,   2,   2, // 1326-1328
  3,   1,   1, // 1329-1331
  3,   1,   1, // 1332-1334
  2,   2,   1, // 1335-1337
  2,   2,   1, // 1338-1340
  2,   2, // 1341-1342
  6,   1,   1,   4, // 1343-1346
  6,   6,   1,   1, // 1347-1350
  5,   1,   1, // 1351-1353
  6,   6,   1,   1, // 1354-1357
  2, // 1358
  2,   3,   1,   1, // 1359-1362
  2,   3,   1, // 1363-1365
  2,   3,   1,   1, // 1366-1369
  3,   1,   1, // 1370-1372
  3,   1,   1, // 1373-1375
  2,   3,   1,   1, // 1376-1379
  2,   3,   1, // 1380-1382
  3,   1,   1, // 1383-1385
  2,   2,   1, // 1386-1388
  1,   1, // 1389-1390
  2, // 1391
  2,   2, // 1392-1393
  2,   1,   1, // 1394-1396
  2,   1,   1, // 1397-1399
  6,   3,   2,   1, // 1400-1403
  6,   3,   2,   1, // 1404-1407
  4,   2,   1, // 1408-1410
  5,   2,   2, // 1411-1413
  6,   2,   2, // 1414-1416
  4,   2,   1, // 1417-1419
  5,   2, // 1420-1421
  6,   2, // 1422-1423
  4,   2, // 1424-1425
  4,   2, // 1426-1427
  9,   1,   1, // 1428-1430
  4,   2,   1, // 1431-1433
  3,   1,   1, // 1434-1436
  7,   1,   1, // 1437-1439
  3,   2,   1, // 1440-1442
  3,   2,   2, // 1443-1445
  3,   2,   2, // 1446-1448
  3, // 1449
  3,   2,   2, // 1450-1452
  4,   2,   2, // 1453-1455
  4,   1, // 1456-1457
  1,   1, // 1458-1459
  5,   1, // 1460-1461
  7,   1, // 1462-1463
  29,   1,   1, // 1464-1466
  20,   1,   1, // 1467-1469
  2,   1, // 1470-1471
  2,   1, // 1472-1473
  3,   1, // 1474-1475
  2,   1,   1, // 1476-1478
  3,   1,   1, // 1479-1481
  19,   2,   1,   1, // 1482-1485
  7,   2,   1,   1, // 1486-1489
  9,   3,   2,   2, // 1490-1493
  10,   3,   2,   2, // 1494-1497
  20,   1, // 1498-1499
  4,   2,   1, // 1500-1502
  2,   1, // 1503-1504
  2,   2,   1,   1, // 1505-1508
  3,   1,   1,   1, // 1509-1512
  3,   2,   1,   1,   1,   1, // 1513-1518
  2,   1, // 1519-1520
  2,   2,   3,   3,   1, // 1521-1525
  2,   2,   2,   1, // 1526-1529
  2,   2,   3,   1, // 1530-1533
  2,   2,   1, // 1534-1536
  2,   2,   1, // 1537-1539
  2,   2,   1, // 1540-1542
  2,   2,   2,   1,   1, // 1543-1547
  3,   3,   1,   1,   1,   1, // 1548-1553
  3,   3,   2,   1,   1,   1,   1,   1, // 1554-1561
  2,   2,   1, // 1562-1564
  2,   2,   2,   1,   1,   1, // 1565-1570
  2,   2,   3,   3,   1, // 1571-1575
  2,   2,   3,   3,   2,   1, // 1576-1581
  2,   2,   3,   1, // 1582-1585
  2,   2,   3,   2,   1,   1, // 1586-1591
  4,   4,   5,   1,   1,   1,   1,   2, // 1592-1599
  4,   4,   5,   2,   1,   1,   1,   1,   1,   2, // 1600-1609
  3,   3,   4,   1, // 1610-1613
  3,   3,   4,   2,   1, // 1614-1618
  2,   2,   3,   3,   1, // 1619-1623
  2,   2,   3,   3,   2,   1,   1, // 1624-1630
  4,   4,   5,   5,   1,   1,   1,   1,   2,   2, // 1631-1640
  4,   4,   5,   5,   2,   1,   1,   1,   1,   1,   2,   2, // 1641-1652
  3,   3,   4,   4,   1, // 1653-1657
  3,   3,   4,   4,   2,   1, // 1658-1663
  2,   1,   1,   1,   2, // 1664-1668
  1,   1,   1,   2, // 1669-1672
  2,   1, // 1673-1674
  2,   1, // 1675-1676
  19,   2,   1,   1, // 1677-1680
  7,   3,   2,   1, // 1681-1684
  6,   3,   2,   2, // 1685-1688
  7,   2,   1,   1, // 1689-1692
  9,   3,   2,   2, // 1693-1696
  10,   3,   2,   2, // 1697-1700
  9,   3,   2,   1, // 1701-1704
  7,   3,   2,   2, // 1705-1708
  2,   1,   1, // 1709-1711
  4,   1, // 1712-1713
  2,   1, // 1714-1715
  20,   20,   1, // 1716-1718
  20,   1, // 1719-1720
  2,   1, // 1721-1722
  11,   1,   1, // 1723-1725
  6,   2,   2, // 1726-1728
  7,   2,   1, // 1729-1731
  7,   1,   1, // 1732-1734
  5,   2,   1, // 1735-1737
  6,   2,   1, // 1738-1740
  7,   2,   2, // 1741-1743
  9,   2,   1, // 1744-1746
  4,   1,   1, // 1747-1749
  7,   3,   1, // 1750-1752
  6,   3,   1, // 1753-1755
  5,   2,   2, // 1756-1758
  4,   1, // 1759-1760
  5,   1,   1, // 1761-1763
  4,   1,   1, // 1764-1766
  9,   2,   2, // 1767-1769
  10,   2,   2, // 1770-1772
  3,   1,   1, // 1773-1775
  8,   1, // 1776-1777
  7,   1, // 1778-1779
  29,   1, // 1780-1781
  19,   1, // 1782-1783
  1,   1,   1, // 1784-1786
  2,   1,   1,   1,   1, // 1787-1791
  1,   1,   1, // 1792-1794
  1,   1,   1,   1,   2,   2, // 1795-1800
  2,   2,   3,   3,   2,   1, // 1801-1806
  1,   1,   1,   1,   2, // 1807-1811
  2,   2,   3,   2,   1, // 1812-1816
  2,   1,   1,   1,   1,   1,   2,   2, // 1817-1824
  2,   1,   1,   1,   1,   1,   2, // 1825-1831
  1,   1,   1,   1, // 1832-1835
  1,   1,   1,   1, // 1836-1839
  2,   1,   1,   1,   1,   1, // 1840-1845
  1,   1,   1,   1, // 1846-1849
  1,   1,   1,   1,   2,   2, // 1850-1855
  2,   1,   1,   1,   1,   1,   2,   2, // 1856-1863
  1,   1,   1,   1,   2, // 1864-1868
  2,   1,   1,   1,   1,   1,   2, // 1869-1875
  1,   1,   1,   1,   2, // 1876-1880
  2,   1,   1,   1,   1,   1,   2, // 1881-1887
  1,   1,   1,   1,   2,   2, // 1888-1893
  2,   1,   1,   1,   1,   1,   2,   2, // 1894-1901
  1,   1,   1,   1,   2,   2, // 1902-1907
  2,   1,   1,   1,   1,   1,   2,   2, // 1908-1915
  1,   1,   1,   1, // 1916-1919
  1,   1, // 1920-1921
  1,   1, // 1922-1923
  3,   2,   1, // 1924-1926
  3,   2,   1, // 1927-1929
  3,   2,   2,   1, // 1930-1933
  4,   2,   2,   3,   1, // 1934-1938
  4,   2,   2,   3,   3,   1, // 1939-1944
  3,   1,   2,   1, // 1945-1948
  3,   1,   2,   2,   1, // 1949-1953
  4,   1,   2,   2,   3,   1, // 1954-1959
  4,   1,   2,   2,   3,   3,   1, // 1960-1966
  8,   1, // 1967-1968
  7,   1, // 1969-1970
  2,   2,   1,   1, // 1971-1974
  3,   3,   1,   1, // 1975-1978
  4,   4,   1,   1, // 1979-1982
  2,   2,   1, // 1983-1985
  2,   2, // 1986-1987
  2,   2,   2, // 1988-1990
  2,   2,   1, // 1991-1993
  2,   2, // 1994-1995
  2,   1, // 1996-1997
  3,   1, // 1998-1999
  3,   1, // 2000-2001
  3,   1, // 2002-2003
  4,   1, // 2004-2005
  2,   1, // 2006-2007
  1,   1, // 2008-2009
  2,   1,   2, // 2010-2012
  3,   1, // 2013-2014
  3,   1, // 2015-2016
  2,   2,   1,   1, // 2017-2020
  2, // 2021
  2,   2, // 2022-2023
  2,   1, // 2024-2025
  1,   1,   3, // 2026-2028
  1,   1,   3, // 2029-2031
  1,   1, // 2032-2033
  1,   1,   1, // 2034-2036
  2,   1,   1,   1, // 2037-2040
  2,   1,   1,   1, // 2041-2044
  2,   1,   1,   1, // 2045-2048
  1,   1, // 2049-2050
  1,   1,   1, // 2051-2053
  2,   1,   1,   1, // 2054-2057
  2,   1,   1,   1, // 2058-2061
  2,   1, // 2062-2063
  1,   1, // 2064-2065
  1, // 2066
  1,   1, // 2067-2068
  1,   1,   1, // 2069-2071
  1, // 2072
  1,   1, // 2073-2074
  1,   1,   1, // 2075-2077
  1,   1,   1, // 2078-2080
  2,   1, // 2081-2082
  2,   1, // 2083-2084
  1, // 2085
  1,   1,   1,   1,   3, // 2086-2090
  2,   1,   1,   1,   3, // 2091-2095
  1,   1,   1,   1,   3, // 2096-2100
  3,   1,   1,   1, // 2101-2104
  3,   1,   1, // 2105-2107
  3,   1,   1, // 2108-2110
  5,   1,   1, // 2111-2113
  3,   4,   1,   1, // 2114-2117
  3,   4,   1,   1, // 2118-2121
  3,   1,   1,   1, // 2122-2125
  3,   1,   1, // 2126-2128
  3,   1,   1, // 2129-2131
  5,   1,   1, // 2132-2134
  1,   1, // 2135-2136
  4,   1,   1,   1, // 2137-2140
  1, // 2141
  1, // 2142
  2, // 2143
  1,   1, // 2144-2145
  2,   1,   1, // 2146-2148
  2, // 2149
  3, // 2150
  5, // 2151
  1, // 2152
  1, // 2153
  1, // 2154
  4,   1,   1, // 2155-2157
  1, // 2158
  1, // 2159
  1, // 2160
  1,   1,   1, // 2161-2163
  1,   1,   1, // 2164-2166
  1,   1,   1, // 2167-2169
  2,   1,   1, // 2170-2172
  2,   1,   1, // 2173-2175
  1,   1, // 2176-2177
  14,   1,   1, // 2178-2180
  3,   1,   1,   1, // 2181-2184
  5,   6,   1,   1, // 2185-2188
  3,   1,   1, // 2189-2191
  5,   5,   1,   1, // 2192-2195
  2, // 2196
  1,   1,   1,   1, // 2197-2200
  1,   1,   1, // 2201-2203
  1,   1,   1,   1, // 2204-2207
  1,   1,   1, // 2208-2210
  1,   1,   1, // 2211-2213
  1,   1,   1,   1, // 2214-2217
  1,   1,   1, // 2218-2220
  1,   1,   1, // 2221-2223
  1,   1,   1, // 2224-2226
  1,   1, // 2227-2228
  1, // 2229
  1,   1, // 2230-2231
  1,   1,   1, // 2232-2234
  1,   1,   1, // 2235-2237
  4,   1,   1,   1, // 2238-2241
  4,   1,   1,   1, // 2242-2245
  4,   1,   1, // 2246-2248
  4,   1,   1, // 2249-2251
  4,   1,   1, // 2252-2254
  4,   1,   1, // 2255-2257
  2,   1, // 2258-2259
  2,   1, // 2260-2261
  4,   1, // 2262-2263
  4,   1, // 2264-2265
  2,   1,   1, // 2266-2268
  4,   1,   1, // 2269-2271
  2,   1,   1, // 2272-2274
  2,   1,   1, // 2275-2277
  2,   1,   1, // 2278-2280
  2,   1,   1, // 2281-2283
  2,   1,   1, // 2284-2286
  2, // 2287
  2,   1,   1, // 2288-2290
  2,   1,   1, // 2291-2293
  1,   1, // 2294-2295
  1,   1, // 2296-2297
  6,   1, // 2298-2299
  4,   1, // 2300-2301
  4,   1, // 2302-2303
  4,   1, // 2304-2305
  32,   1,   1, // 2306-2308
  17,   1,   1, // 2309-2311
  6,   1, // 2312-2313
  2,   1, // 2314-2315
  2,   1, // 2316-2317
  2,   1,   1, // 2318-2320
  2,   1,   1, // 2321-2323
  12,   1,   1, // 2324-2326
  8,   1,   1, // 2327-2329
  8,   1,   1, // 2330-2332
  8,   1,   1, // 2333-2335
  3,   1, // 2336-2337
  4,   1,   1, // 2338-2340
  2,   1,   1,   1,   4, // 2341-2345
  1,   1,   1,   4, // 2346-2349
  4,   1, // 2350-2351
  4,   1, // 2352-2353
  12,   1,   1, // 2354-2356
  4,   1,   1,   1, // 2357-2360
  4,   1,   1,   1, // 2361-2364
  8,   1,   1, // 2365-2367
  8,   1,   1, // 2368-2370
  8,   1,   1, // 2371-2373
  4,   1,   1,   1, // 2374-2377
  4,   1,   1,   1, // 2378-2381
  4,   1, // 2382-2383
  4,   1, // 2384-2385
  2,   1, // 2386-2387
  3,   4,   1, // 2388-2390
  3,   1, // 2391-2392
  6,   1, // 2393-2394
  6,   1,   1, // 2395-2397
  4,   1,   1, // 2398-2400
  4,   1,   1, // 2401-2403
  4,   1,   1, // 2404-2406
  4,   1,   1, // 2407-2409
  4,   1,   1, // 2410-2412
  4,   1,   1, // 2413-2415
  4,   1,   1, // 2416-2418
  2,   1,   1, // 2419-2421
  4,   1,   1, // 2422-2424
  4,   1,   1, // 2425-2427
  4,   1,   1, // 2428-2430
  4,   1, // 2431-2432
  4,   1,   1, // 2433-2435
  4,   1,   1, // 2436-2438
  8,   1,   1, // 2439-2441
  8,   1,   1, // 2442-2444
  6,   1, // 2445-2446
  4,   1, // 2447-2448
  4,   1, // 2449-2450
  32,   1,   1, // 2451-2453
  17,   1, // 2454-2455
  1,   1,   1, // 2456-2458
  1,   1, // 2459-2460
  1,   1, // 2461-2462
  2,   1,   1, // 2463-2465
  2,   1,   1, // 2466-2468
  4,   1,   3,   3, // 2469-2472
  6,   1,   3,   5,   5, // 2473-2477
  8,   1,   3,   5,   7,   7, // 2478-2483
  2,   1,   1, // 2484-2486
  4,   1,   3,   3, // 2487-2490
  6,   1,   3,   5,   5, // 2491-2495
  8,   1,   3,   5,   7,   7, // 2496-2501
  4,   1, // 2502-2503
  4,   1, // 2504-2505
  3,   4,   3,   4, // 2506-2509
  3,   4,   3,   4, // 2510-2513
  3,   4,   3,   4, // 2514-2517
  2,   1,   1, // 2518-2520
  1,   1, // 2521-2522
  1,   1,   1, // 2523-2525
  2,   1,   1, // 2526-2528
  1,   1, // 2529-2530
  1,   1, // 2531-2532
  3,   1, // 2533-2534
  3,   4,   1, // 2535-2537
  3,   1, // 2538-2539
  4,   1, // 2540-2541
  1,   1, // 2542-2543
  1, // 2544
  2,   1,   1, // 2545-2547
  1,   1, // 2548-2549
  1,   1, // 2550-2551
  1,   1,   1,   1, // 2552-2555
  1, // 2556
  1,   1, // 2557-2558
  1,   1, // 2559-2560
  1,   1,   3, // 2561-2563
  1,   1,   3, // 2564-2566
  0 // End operand cycles
};
extern const unsigned ARMForwardingPaths[] = {
 0, // No itinerary
 0,  0, // 1-2
 0,  0,  0, // 3-5
 0,  0,  0,  0, // 6-9
 0,  0,  0,  0, // 10-13
 0,  0,  0,  0, // 14-17
 0,  0, // 18-19
 0,  0,  0, // 20-22
 0,  0,  0,  0, // 23-26
 0,  0,  0,  0, // 27-30
 0,  0, // 31-32
 0,  0, // 33-34
 0, // 35
 0,  0, // 36-37
 0,  0,  0, // 38-40
 0, // 41
 0,  0, // 42-43
 0,  0,  0, // 44-46
 0,  0,  0, // 47-49
 0,  0, // 50-51
 0,  0, // 52-53
 0, // 54
 0,  0,  0,  0,  0, // 55-59
 0,  0,  0,  0,  0, // 60-64
 0,  0,  0,  0,  0, // 65-69
 0,  0,  0,  0, // 70-73
 0,  0,  0, // 74-76
 0,  0,  0, // 77-79
 0,  0,  0, // 80-82
 0,  0,  0, // 83-85
 0,  0,  0,  0, // 86-89
 0,  0,  0,  0, // 90-93
 0,  0,  0, // 94-96
 0,  0,  0, // 97-99
 0,  0,  0, // 100-102
 0,  0, // 103-104
 0,  0,  0,  0, // 105-108
 0, // 109
 0, // 110
 0, // 111
 0,  0, // 112-113
 0,  0,  0, // 114-116
 0, // 117
 0, // 118
 0, // 119
 0,  0, // 120-121
 0,  0,  0, // 122-124
 0,  0, // 125-126
 0,  0,  0, // 127-129
 0, // 130
 0,  0, // 131-132
 0,  0,  0, // 133-135
 0,  0,  0, // 136-138
 0,  0,  0, // 139-141
 0,  0,  0, // 142-144
 0,  0,  0, // 145-147
 0,  0,  0, // 148-150
 0,  0,  0,  0, // 151-154
 0,  0,  0,  0, // 155-158
 0,  0,  0, // 159-161
 0,  0,  0, // 162-164
 0, // 165
 0,  0,  0,  0, // 166-169
 0,  0,  0, // 170-172
 0,  0,  0,  0, // 173-176
 0,  0,  0, // 177-179
 0,  0,  0, // 180-182
 0,  0,  0,  0, // 183-186
 0,  0,  0, // 187-189
 0,  0,  0, // 190-192
 0,  0,  0, // 193-195
 0,  0, // 196-197
 0, // 198
 0,  0, // 199-200
 0,  0,  0, // 201-203
 0,  0,  0, // 204-206
 0,  0,  0, // 207-209
 0,  0,  0, // 210-212
 0,  0, // 213-214
 0,  0, // 215-216
 0,  0, // 217-218
 0,  0, // 219-220
 0,  0,  0, // 221-223
 0,  0,  0, // 224-226
 0,  0,  0,  0, // 227-230
 0,  0,  0,  0, // 231-234
 0,  0,  0,  0,  0, // 235-239
 0,  0,  0,  0, // 240-243
 0,  0,  0, // 244-246
 0,  0,  0, // 247-249
 0,  0,  0,  0, // 250-253
 0,  0,  0,  0, // 254-257
 0,  0,  0, // 258-260
 0,  0,  0, // 261-263
 0,  0, // 264-265
 0,  0, // 266-267
 0,  0,  0, // 268-270
 0,  0,  0, // 271-273
 0,  0, // 274-275
 0,  0, // 276-277
 0,  0,  0, // 278-280
 0,  0,  0, // 281-283
 0,  0,  0,  0, // 284-287
 0,  0,  0, // 288-290
 0,  0,  0, // 291-293
 0,  0, // 294-295
 0,  0, // 296-297
 0,  0,  0, // 298-300
 0,  0, // 301-302
 0,  0,  0, // 303-305
 0,  0,  0, // 306-308
 0,  0, // 309-310
 0,  0, // 311-312
 0,  0, // 313-314
 0,  0, // 315-316
 0,  0, // 317-318
 0,  0, // 319-320
 0,  0, // 321-322
 0,  0, // 323-324
 0,  0, // 325-326
 0,  0, // 327-328
 0,  0,  0,  0, // 329-332
 0, // 333
 0,  0, // 334-335
 0,  0, // 336-337
 0,  0,  0, // 338-340
 0,  0,  0, // 341-343
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 344-345
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 346-348
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, // 349-352
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, // 353-356
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, // 357-360
 0,  0, // 361-362
 0,  0,  0, // 363-365
 0,  0,  0,  0, // 366-369
 0,  0,  0,  0, // 370-373
 0,  0, // 374-375
 0,  0, // 376-377
CortexA9ItinerariesBypass::A9_LdBypass, // 378
CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 379-380
CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, // 381-383
CortexA9ItinerariesBypass::A9_LdBypass, // 384
CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 385-386
CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, // 387-389
CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, // 390-392
 0,  0, // 393-394
 0,  0, // 395-396
 0, // 397
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 398-402
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 403-407
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 408-412
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 413-416
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 417-419
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 420-422
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 423-425
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 426-429
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 430-433
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 434-437
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 438-440
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 441-443
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 444-446
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 447-448
 0,  0,  0,  0, // 449-452
 0, // 453
 0, // 454
 0, // 455
 0,  0, // 456-457
 0,  0,  0, // 458-460
 0, // 461
 0, // 462
 0, // 463
 0,  0, // 464-465
 0,  0,  0, // 466-468
 0,  0, // 469-470
 0,  0,  0, // 471-473
 0, // 474
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 475-476
 0,  0,  0, // 477-479
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 480-482
 0,  0,  0, // 483-485
 0,  0,  0, // 486-488
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, // 489-491
 0,  0,  0, // 492-494
 0,  0, // 495-496
 0,  0,  0,  0, // 497-500
 0,  0,  0,  0, // 501-504
 0,  0,  0, // 505-507
 0,  0,  0,  0, // 508-511
 0, // 512
 0,  0,  0,  0, // 513-516
 0,  0,  0, // 517-519
 0,  0,  0,  0, // 520-523
 0,  0,  0, // 524-526
 0,  0,  0, // 527-529
 0,  0,  0,  0, // 530-533
 0,  0,  0, // 534-536
 0,  0,  0, // 537-539
 0,  0,  0, // 540-542
 0,  0, // 543-544
 0, // 545
 0,  0, // 546-547
 0,  0,  0, // 548-550
 0,  0,  0, // 551-553
 0,  0,  0,  0, // 554-557
 0,  0,  0,  0, // 558-561
 0,  0,  0, // 562-564
 0,  0,  0, // 565-567
 0,  0,  0, // 568-570
 0,  0,  0, // 571-573
 0,  0, // 574-575
 0,  0, // 576-577
 0,  0, // 578-579
 0,  0, // 580-581
 0,  0,  0, // 582-584
 0,  0,  0, // 585-587
 0,  0,  0, // 588-590
 0,  0,  0, // 591-593
 0,  0,  0, // 594-596
 0,  0,  0, // 597-599
 0,  0,  0, // 600-602
 0, // 603
 0,  0,  0, // 604-606
 0,  0,  0, // 607-609
 0,  0, // 610-611
 0,  0, // 612-613
 0,  0, // 614-615
 0,  0, // 616-617
 0,  0, // 618-619
 0,  0, // 620-621
 0,  0,  0, // 622-624
 0,  0,  0, // 625-627
 0,  0, // 628-629
 0,  0, // 630-631
 0,  0, // 632-633
 0,  0,  0, // 634-636
 0,  0,  0, // 637-639
 0,  0,  0,  0, // 640-643
 0,  0,  0,  0, // 644-647
 0,  0,  0,  0, // 648-651
 0,  0,  0,  0, // 652-655
 0,  0, // 656-657
 0,  0,  0, // 658-660
 0,  0, // 661-662
 0,  0,  0,  0, // 663-666
 0,  0,  0,  0, // 667-670
 0,  0,  0,  0,  0,  0, // 671-676
 0,  0, // 677-678
 0,  0,  0,  0,  0, // 679-683
 0,  0,  0,  0, // 684-687
 0,  0,  0,  0, // 688-691
 0,  0,  0, // 692-694
 0,  0,  0, // 695-697
 0,  0,  0, // 698-700
 0,  0,  0,  0,  0, // 701-705
 0,  0,  0,  0,  0,  0, // 706-711
 0,  0,  0,  0,  0,  0,  0,  0, // 712-719
 0,  0,  0, // 720-722
 0,  0,  0,  0,  0,  0, // 723-728
 0,  0,  0,  0,  0, // 729-733
 0,  0,  0,  0,  0,  0, // 734-739
 0,  0,  0,  0, // 740-743
 0,  0,  0,  0,  0,  0, // 744-749
 0,  0,  0,  0,  0,  0,  0,  0, // 750-757
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 758-767
 0,  0,  0,  0, // 768-771
 0,  0,  0,  0,  0, // 772-776
 0,  0,  0,  0,  0, // 777-781
 0,  0,  0,  0,  0,  0,  0, // 782-788
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 789-798
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 799-810
 0,  0,  0,  0,  0, // 811-815
 0,  0,  0,  0,  0,  0, // 816-821
 0,  0,  0,  0, // 822-825
 0,  0,  0,  0, // 826-829
 0,  0, // 830-831
 0,  0, // 832-833
 0,  0,  0,  0, // 834-837
 0,  0,  0,  0, // 838-841
 0,  0,  0,  0, // 842-845
 0,  0,  0,  0, // 846-849
 0,  0,  0,  0, // 850-853
 0,  0,  0,  0, // 854-857
 0,  0,  0,  0, // 858-861
 0,  0,  0,  0, // 862-865
 0,  0,  0, // 866-868
 0,  0, // 869-870
 0,  0, // 871-872
 0,  0,  0, // 873-875
 0,  0, // 876-877
 0,  0, // 878-879
 0,  0,  0, // 880-882
 0,  0,  0, // 883-885
 0,  0,  0, // 886-888
 0,  0,  0, // 889-891
 0,  0,  0, // 892-894
 0,  0,  0, // 895-897
 0,  0,  0, // 898-900
 0,  0,  0, // 901-903
 0,  0,  0, // 904-906
 0,  0,  0, // 907-909
 0,  0,  0, // 910-912
 0,  0,  0, // 913-915
 0,  0, // 916-917
 0,  0,  0, // 918-920
 0,  0,  0, // 921-923
 0,  0,  0, // 924-926
 0,  0,  0, // 927-929
 0,  0,  0, // 930-932
 0,  0, // 933-934
 0,  0, // 935-936
 0,  0, // 937-938
 0,  0, // 939-940
 0,  0,  0, // 941-943
 0,  0,  0,  0,  0, // 944-948
 0,  0,  0, // 949-951
 0,  0,  0,  0,  0,  0, // 952-957
 0,  0,  0,  0,  0,  0, // 958-963
 0,  0,  0,  0,  0, // 964-968
 0,  0,  0,  0,  0, // 969-973
 0,  0,  0,  0,  0,  0,  0,  0, // 974-981
 0,  0,  0,  0,  0,  0,  0, // 982-988
 0,  0,  0,  0, // 989-992
 0,  0,  0,  0, // 993-996
 0,  0,  0,  0,  0,  0, // 997-1002
 0,  0,  0,  0, // 1003-1006
 0,  0,  0,  0,  0,  0, // 1007-1012
 0,  0,  0,  0,  0,  0,  0,  0, // 1013-1020
 0,  0,  0,  0,  0, // 1021-1025
 0,  0,  0,  0,  0,  0,  0, // 1026-1032
 0,  0,  0,  0,  0, // 1033-1037
 0,  0,  0,  0,  0,  0,  0, // 1038-1044
 0,  0,  0,  0,  0,  0, // 1045-1050
 0,  0,  0,  0,  0,  0,  0,  0, // 1051-1058
 0,  0,  0,  0,  0,  0, // 1059-1064
 0,  0,  0,  0,  0,  0,  0,  0, // 1065-1072
 0,  0,  0,  0, // 1073-1076
 0,  0, // 1077-1078
 0,  0, // 1079-1080
 0,  0,  0, // 1081-1083
 0,  0,  0, // 1084-1086
 0,  0,  0,  0, // 1087-1090
 0,  0,  0,  0,  0, // 1091-1095
 0,  0,  0,  0,  0,  0, // 1096-1101
 0,  0,  0,  0, // 1102-1105
 0,  0,  0,  0,  0, // 1106-1110
 0,  0,  0,  0,  0,  0, // 1111-1116
 0,  0,  0,  0,  0,  0,  0, // 1117-1123
 0,  0, // 1124-1125
 0,  0, // 1126-1127
 0,  0,  0,  0, // 1128-1131
 0,  0,  0,  0, // 1132-1135
 0,  0,  0,  0, // 1136-1139
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, // 1140-1142
 0,  0, // 1143-1144
 0,  0,  0, // 1145-1147
 0,  0,  0, // 1148-1150
 0,  0, // 1151-1152
CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, // 1153-1154
CortexA9ItinerariesBypass::A9_LdBypass,  0, // 1155-1156
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 1157-1159
CortexA9ItinerariesBypass::A9_LdBypass,  0, // 1160-1161
 0,  0, // 1162-1163
 0,  0, // 1164-1165
 0,  0, // 1166-1167
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1168-1170
 0,  0, // 1171-1172
 0,  0, // 1173-1174
 0,  0,  0,  0, // 1175-1178
 0, // 1179
 0,  0, // 1180-1181
 0,  0, // 1182-1183
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1184-1186
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1187-1189
 0,  0, // 1190-1191
 0,  0,  0, // 1192-1194
 0,  0,  0,  0, // 1195-1198
 0,  0,  0,  0, // 1199-1202
 0,  0,  0,  0, // 1203-1206
 0,  0, // 1207-1208
 0,  0,  0, // 1209-1211
 0,  0,  0,  0, // 1212-1215
 0,  0,  0,  0, // 1216-1219
 0,  0, // 1220-1221
 0,  0, // 1222-1223
 0, // 1224
 0,  0, // 1225-1226
 0,  0,  0, // 1227-1229
 0, // 1230
 0,  0, // 1231-1232
 0,  0,  0, // 1233-1235
 0,  0,  0, // 1236-1238
 0,  0, // 1239-1240
 0,  0, // 1241-1242
 0, // 1243
 0,  0,  0,  0,  0, // 1244-1248
 0,  0,  0,  0,  0, // 1249-1253
 0,  0,  0,  0,  0, // 1254-1258
 0,  0,  0,  0, // 1259-1262
 0,  0,  0, // 1263-1265
 0,  0,  0, // 1266-1268
 0,  0,  0, // 1269-1271
 0,  0,  0, // 1272-1274
 0,  0,  0,  0, // 1275-1278
 0,  0,  0,  0, // 1279-1282
 0,  0,  0, // 1283-1285
 0,  0,  0, // 1286-1288
 0,  0,  0, // 1289-1291
 0,  0, // 1292-1293
 0,  0,  0,  0, // 1294-1297
 0, // 1298
 0, // 1299
 0,  0, // 1300-1301
 0,  0, // 1302-1303
 0,  0,  0, // 1304-1306
 0, // 1307
 0, // 1308
 0, // 1309
 0,  0, // 1310-1311
 0,  0,  0, // 1312-1314
 0,  0, // 1315-1316
 0,  0,  0, // 1317-1319
 0, // 1320
 0,  0, // 1321-1322
 0,  0,  0, // 1323-1325
 0,  0,  0, // 1326-1328
 0,  0,  0, // 1329-1331
 0,  0,  0, // 1332-1334
 0,  0,  0, // 1335-1337
 0,  0,  0, // 1338-1340
 0,  0, // 1341-1342
 0,  0,  0,  0, // 1343-1346
 0,  0,  0,  0, // 1347-1350
 0,  0,  0, // 1351-1353
 0,  0,  0,  0, // 1354-1357
 0, // 1358
 0,  0,  0,  0, // 1359-1362
 0,  0,  0, // 1363-1365
 0,  0,  0,  0, // 1366-1369
 0,  0,  0, // 1370-1372
 0,  0,  0, // 1373-1375
 0,  0,  0,  0, // 1376-1379
 0,  0,  0, // 1380-1382
 0,  0,  0, // 1383-1385
 0,  0,  0, // 1386-1388
 0,  0, // 1389-1390
 0, // 1391
 0,  0, // 1392-1393
 0,  0,  0, // 1394-1396
 0,  0,  0, // 1397-1399
 0,  0,  0,  0, // 1400-1403
 0,  0,  0,  0, // 1404-1407
 0,  0,  0, // 1408-1410
 0,  0,  0, // 1411-1413
 0,  0,  0, // 1414-1416
 0,  0,  0, // 1417-1419
 0,  0, // 1420-1421
 0,  0, // 1422-1423
 0,  0, // 1424-1425
 0,  0, // 1426-1427
 0,  0,  0, // 1428-1430
 0,  0,  0, // 1431-1433
 0,  0,  0, // 1434-1436
 0,  0,  0, // 1437-1439
 0,  0,  0, // 1440-1442
 0,  0,  0, // 1443-1445
 0,  0,  0, // 1446-1448
 0, // 1449
 0,  0,  0, // 1450-1452
 0,  0,  0, // 1453-1455
 0,  0, // 1456-1457
 0,  0, // 1458-1459
 0,  0, // 1460-1461
 0,  0, // 1462-1463
 0,  0,  0, // 1464-1466
 0,  0,  0, // 1467-1469
 0,  0, // 1470-1471
 0,  0, // 1472-1473
 0,  0, // 1474-1475
 0,  0,  0, // 1476-1478
 0,  0,  0, // 1479-1481
 0,  0,  0,  0, // 1482-1485
 0,  0,  0,  0, // 1486-1489
 0,  0,  0,  0, // 1490-1493
 0,  0,  0,  0, // 1494-1497
 0,  0, // 1498-1499
 0,  0,  0, // 1500-1502
 0,  0, // 1503-1504
 0,  0,  0,  0, // 1505-1508
 0,  0,  0,  0, // 1509-1512
 0,  0,  0,  0,  0,  0, // 1513-1518
 0,  0, // 1519-1520
 0,  0,  0,  0,  0, // 1521-1525
 0,  0,  0,  0, // 1526-1529
 0,  0,  0,  0, // 1530-1533
 0,  0,  0, // 1534-1536
 0,  0,  0, // 1537-1539
 0,  0,  0, // 1540-1542
 0,  0,  0,  0,  0, // 1543-1547
 0,  0,  0,  0,  0,  0, // 1548-1553
 0,  0,  0,  0,  0,  0,  0,  0, // 1554-1561
 0,  0,  0, // 1562-1564
 0,  0,  0,  0,  0,  0, // 1565-1570
 0,  0,  0,  0,  0, // 1571-1575
 0,  0,  0,  0,  0,  0, // 1576-1581
 0,  0,  0,  0, // 1582-1585
 0,  0,  0,  0,  0,  0, // 1586-1591
 0,  0,  0,  0,  0,  0,  0,  0, // 1592-1599
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 1600-1609
 0,  0,  0,  0, // 1610-1613
 0,  0,  0,  0,  0, // 1614-1618
 0,  0,  0,  0,  0, // 1619-1623
 0,  0,  0,  0,  0,  0,  0, // 1624-1630
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 1631-1640
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 1641-1652
 0,  0,  0,  0,  0, // 1653-1657
 0,  0,  0,  0,  0,  0, // 1658-1663
 0,  0,  0,  0,  0, // 1664-1668
 0,  0,  0,  0, // 1669-1672
 0,  0, // 1673-1674
 0,  0, // 1675-1676
 0,  0,  0,  0, // 1677-1680
 0,  0,  0,  0, // 1681-1684
 0,  0,  0,  0, // 1685-1688
 0,  0,  0,  0, // 1689-1692
 0,  0,  0,  0, // 1693-1696
 0,  0,  0,  0, // 1697-1700
 0,  0,  0,  0, // 1701-1704
 0,  0,  0,  0, // 1705-1708
 0,  0,  0, // 1709-1711
 0,  0, // 1712-1713
 0,  0, // 1714-1715
 0,  0,  0, // 1716-1718
 0,  0, // 1719-1720
 0,  0, // 1721-1722
 0,  0,  0, // 1723-1725
 0,  0,  0, // 1726-1728
 0,  0,  0, // 1729-1731
 0,  0,  0, // 1732-1734
 0,  0,  0, // 1735-1737
 0,  0,  0, // 1738-1740
 0,  0,  0, // 1741-1743
 0,  0,  0, // 1744-1746
 0,  0,  0, // 1747-1749
 0,  0,  0, // 1750-1752
 0,  0,  0, // 1753-1755
 0,  0,  0, // 1756-1758
 0,  0, // 1759-1760
 0,  0,  0, // 1761-1763
 0,  0,  0, // 1764-1766
 0,  0,  0, // 1767-1769
 0,  0,  0, // 1770-1772
 0,  0,  0, // 1773-1775
 0,  0, // 1776-1777
 0,  0, // 1778-1779
 0,  0, // 1780-1781
 0,  0, // 1782-1783
 0,  0,  0, // 1784-1786
 0,  0,  0,  0,  0, // 1787-1791
 0,  0,  0, // 1792-1794
 0,  0,  0,  0,  0,  0, // 1795-1800
 0,  0,  0,  0,  0,  0, // 1801-1806
 0,  0,  0,  0,  0, // 1807-1811
 0,  0,  0,  0,  0, // 1812-1816
 0,  0,  0,  0,  0,  0,  0,  0, // 1817-1824
 0,  0,  0,  0,  0,  0,  0, // 1825-1831
 0,  0,  0,  0, // 1832-1835
 0,  0,  0,  0, // 1836-1839
 0,  0,  0,  0,  0,  0, // 1840-1845
 0,  0,  0,  0, // 1846-1849
 0,  0,  0,  0,  0,  0, // 1850-1855
 0,  0,  0,  0,  0,  0,  0,  0, // 1856-1863
 0,  0,  0,  0,  0, // 1864-1868
 0,  0,  0,  0,  0,  0,  0, // 1869-1875
 0,  0,  0,  0,  0, // 1876-1880
 0,  0,  0,  0,  0,  0,  0, // 1881-1887
 0,  0,  0,  0,  0,  0, // 1888-1893
 0,  0,  0,  0,  0,  0,  0,  0, // 1894-1901
 0,  0,  0,  0,  0,  0, // 1902-1907
 0,  0,  0,  0,  0,  0,  0,  0, // 1908-1915
 0,  0,  0,  0, // 1916-1919
 0,  0, // 1920-1921
 0,  0, // 1922-1923
 0,  0,  0, // 1924-1926
 0,  0,  0, // 1927-1929
 0,  0,  0,  0, // 1930-1933
 0,  0,  0,  0,  0, // 1934-1938
 0,  0,  0,  0,  0,  0, // 1939-1944
 0,  0,  0,  0, // 1945-1948
 0,  0,  0,  0,  0, // 1949-1953
 0,  0,  0,  0,  0,  0, // 1954-1959
 0,  0,  0,  0,  0,  0,  0, // 1960-1966
 0,  0, // 1967-1968
 0,  0, // 1969-1970
 0,  0,  0,  0, // 1971-1974
 0,  0,  0,  0, // 1975-1978
 0,  0,  0,  0, // 1979-1982
 0,  0,  0, // 1983-1985
 0,  0, // 1986-1987
 0,  0,  0, // 1988-1990
 0,  0,  0, // 1991-1993
 0,  0, // 1994-1995
 0,  0, // 1996-1997
 0,  0, // 1998-1999
 0,  0, // 2000-2001
 0,  0, // 2002-2003
 0,  0, // 2004-2005
 0,  0, // 2006-2007
 0,  0, // 2008-2009
 0,  0,  0, // 2010-2012
 0,  0, // 2013-2014
 0,  0, // 2015-2016
 0,  0,  0,  0, // 2017-2020
 0, // 2021
 0,  0, // 2022-2023
 0,  0, // 2024-2025
 0,  0,  0, // 2026-2028
 0,  0,  0, // 2029-2031
 0,  0, // 2032-2033
 0,  0,  0, // 2034-2036
 0,  0,  0,  0, // 2037-2040
 0,  0,  0,  0, // 2041-2044
 0,  0,  0,  0, // 2045-2048
 0,  0, // 2049-2050
 0,  0,  0, // 2051-2053
 0,  0,  0,  0, // 2054-2057
 0,  0,  0,  0, // 2058-2061
 0,  0, // 2062-2063
 0,  0, // 2064-2065
 0, // 2066
 0,  0, // 2067-2068
 0,  0,  0, // 2069-2071
 0, // 2072
 0,  0, // 2073-2074
 0,  0,  0, // 2075-2077
 0,  0,  0, // 2078-2080
 0,  0, // 2081-2082
 0,  0, // 2083-2084
 0, // 2085
 0,  0,  0,  0,  0, // 2086-2090
 0,  0,  0,  0,  0, // 2091-2095
 0,  0,  0,  0,  0, // 2096-2100
 0,  0,  0,  0, // 2101-2104
 0,  0,  0, // 2105-2107
 0,  0,  0, // 2108-2110
 0,  0,  0, // 2111-2113
 0,  0,  0,  0, // 2114-2117
 0,  0,  0,  0, // 2118-2121
 0,  0,  0,  0, // 2122-2125
 0,  0,  0, // 2126-2128
 0,  0,  0, // 2129-2131
 0,  0,  0, // 2132-2134
 0,  0, // 2135-2136
 0,  0,  0,  0, // 2137-2140
 0, // 2141
 0, // 2142
 0, // 2143
 0,  0, // 2144-2145
 0,  0,  0, // 2146-2148
 0, // 2149
 0, // 2150
 0, // 2151
 0, // 2152
 0, // 2153
 0, // 2154
 0,  0,  0, // 2155-2157
 0, // 2158
 0, // 2159
 0, // 2160
 0,  0,  0, // 2161-2163
 0,  0,  0, // 2164-2166
 0,  0,  0, // 2167-2169
 0,  0,  0, // 2170-2172
 0,  0,  0, // 2173-2175
 0,  0, // 2176-2177
 0,  0,  0, // 2178-2180
 0,  0,  0,  0, // 2181-2184
 0,  0,  0,  0, // 2185-2188
 0,  0,  0, // 2189-2191
 0,  0,  0,  0, // 2192-2195
 0, // 2196
 0,  0,  0,  0, // 2197-2200
 0,  0,  0, // 2201-2203
 0,  0,  0,  0, // 2204-2207
 0,  0,  0, // 2208-2210
 0,  0,  0, // 2211-2213
 0,  0,  0,  0, // 2214-2217
 0,  0,  0, // 2218-2220
 0,  0,  0, // 2221-2223
 0,  0,  0, // 2224-2226
 0,  0, // 2227-2228
 0, // 2229
 0,  0, // 2230-2231
 0,  0,  0, // 2232-2234
 0,  0,  0, // 2235-2237
 0,  0,  0,  0, // 2238-2241
 0,  0,  0,  0, // 2242-2245
 0,  0,  0, // 2246-2248
 0,  0,  0, // 2249-2251
 0,  0,  0, // 2252-2254
 0,  0,  0, // 2255-2257
 0,  0, // 2258-2259
 0,  0, // 2260-2261
 0,  0, // 2262-2263
 0,  0, // 2264-2265
 0,  0,  0, // 2266-2268
 0,  0,  0, // 2269-2271
 0,  0,  0, // 2272-2274
 0,  0,  0, // 2275-2277
 0,  0,  0, // 2278-2280
 0,  0,  0, // 2281-2283
 0,  0,  0, // 2284-2286
 0, // 2287
 0,  0,  0, // 2288-2290
 0,  0,  0, // 2291-2293
 0,  0, // 2294-2295
 0,  0, // 2296-2297
 0,  0, // 2298-2299
 0,  0, // 2300-2301
 0,  0, // 2302-2303
 0,  0, // 2304-2305
 0,  0,  0, // 2306-2308
 0,  0,  0, // 2309-2311
 0,  0, // 2312-2313
 0,  0, // 2314-2315
 0,  0, // 2316-2317
 0,  0,  0, // 2318-2320
 0,  0,  0, // 2321-2323
 0,  0,  0, // 2324-2326
 0,  0,  0, // 2327-2329
 0,  0,  0, // 2330-2332
 0,  0,  0, // 2333-2335
 0,  0, // 2336-2337
 0,  0,  0, // 2338-2340
 0,  0,  0,  0,  0, // 2341-2345
 0,  0,  0,  0, // 2346-2349
 0,  0, // 2350-2351
 0,  0, // 2352-2353
 0,  0,  0, // 2354-2356
 0,  0,  0,  0, // 2357-2360
 0,  0,  0,  0, // 2361-2364
 0,  0,  0, // 2365-2367
 0,  0,  0, // 2368-2370
 0,  0,  0, // 2371-2373
 0,  0,  0,  0, // 2374-2377
 0,  0,  0,  0, // 2378-2381
 0,  0, // 2382-2383
 0,  0, // 2384-2385
 0,  0, // 2386-2387
 0,  0,  0, // 2388-2390
 0,  0, // 2391-2392
 0,  0, // 2393-2394
 0,  0,  0, // 2395-2397
 0,  0,  0, // 2398-2400
 0,  0,  0, // 2401-2403
 0,  0,  0, // 2404-2406
 0,  0,  0, // 2407-2409
 0,  0,  0, // 2410-2412
 0,  0,  0, // 2413-2415
 0,  0,  0, // 2416-2418
 0,  0,  0, // 2419-2421
 0,  0,  0, // 2422-2424
 0,  0,  0, // 2425-2427
 0,  0,  0, // 2428-2430
 0,  0, // 2431-2432
 0,  0,  0, // 2433-2435
 0,  0,  0, // 2436-2438
 0,  0,  0, // 2439-2441
 0,  0,  0, // 2442-2444
 0,  0, // 2445-2446
 0,  0, // 2447-2448
 0,  0, // 2449-2450
 0,  0,  0, // 2451-2453
 0,  0, // 2454-2455
 0,  0,  0, // 2456-2458
 0,  0, // 2459-2460
 0,  0, // 2461-2462
 0,  0,  0, // 2463-2465
 0,  0,  0, // 2466-2468
 0,  0,  0,  0, // 2469-2472
 0,  0,  0,  0,  0, // 2473-2477
 0,  0,  0,  0,  0,  0, // 2478-2483
 0,  0,  0, // 2484-2486
 0,  0,  0,  0, // 2487-2490
 0,  0,  0,  0,  0, // 2491-2495
 0,  0,  0,  0,  0,  0, // 2496-2501
 0,  0, // 2502-2503
 0,  0, // 2504-2505
 0,  0,  0,  0, // 2506-2509
 0,  0,  0,  0, // 2510-2513
 0,  0,  0,  0, // 2514-2517
 0,  0,  0, // 2518-2520
 0,  0, // 2521-2522
 0,  0,  0, // 2523-2525
 0,  0,  0, // 2526-2528
 0,  0, // 2529-2530
 0,  0, // 2531-2532
 0,  0, // 2533-2534
 0,  0,  0, // 2535-2537
 0,  0, // 2538-2539
 0,  0, // 2540-2541
 0,  0, // 2542-2543
 0, // 2544
 0,  0,  0, // 2545-2547
 0,  0, // 2548-2549
 0,  0, // 2550-2551
 0,  0,  0,  0, // 2552-2555
 0, // 2556
 0,  0, // 2557-2558
 0,  0, // 2559-2560
 0,  0,  0, // 2561-2563
 0,  0,  0, // 2564-2566
 0 // End bypass tables
};

static const llvm::InstrItinerary *NoItineraries = 0;

static const llvm::InstrItinerary ARMV6Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 2, 1, 3 }, // 1 IIC_iALUi_WriteALU_ReadALU
  { 1, 1, 2, 3, 6 }, // 2 IIC_iALUr_WriteALU_ReadALU_ReadALU
  { 1, 2, 3, 6, 10 }, // 3 IIC_iALUsr_WriteALUsi_ReadALU
  { 1, 2, 3, 10, 14 }, // 4 IIC_iALUsr_WriteALUsr_ReadALUsr
  { 1, 2, 3, 14, 18 }, // 5 IIC_iALUsr_WriteALUSsr_ReadALUsr
  { 1, 1, 2, 18, 20 }, // 6 IIC_iBITi_WriteALU_ReadALU
  { 1, 1, 2, 20, 23 }, // 7 IIC_iBITr_WriteALU_ReadALU_ReadALU
  { 1, 2, 3, 23, 27 }, // 8 IIC_iBITsr_WriteALUsi_ReadALU
  { 1, 2, 3, 27, 31 }, // 9 IIC_iBITsr_WriteALUsr_ReadALUsr
  { 1, 1, 2, 0, 0 }, // 10 IIC_Br
  { 1, 1, 2, 31, 33 }, // 11 IIC_iUNAsi
  { 1, 1, 2, 33, 35 }, // 12 IIC_iUNAr_WriteALU
  { 1, 1, 2, 35, 36 }, // 13 IIC_iCMPi
  { 1, 1, 2, 36, 38 }, // 14 IIC_iCMPr
  { 1, 2, 3, 38, 41 }, // 15 IIC_iCMPsr
  { 1, 1, 2, 41, 42 }, // 16 IIC_iCMPi_WriteCMP_ReadALU
  { 1, 1, 2, 42, 44 }, // 17 IIC_iCMPr_WriteCMP_ReadALU_ReadALU
  { 1, 2, 3, 44, 47 }, // 18 IIC_iCMPsr_WriteCMPsi_ReadALU
  { 1, 2, 3, 47, 50 }, // 19 IIC_iCMPsr_WriteCMPsr_ReadALU
  { 1, 1, 2, 50, 52 }, // 20 IIC_fpUNA64
  { 1, 1, 2, 52, 54 }, // 21 IIC_fpUNA32
  { 1, 1, 2, 54, 55 }, // 22 IIC_fpSTAT
  { 1, 3, 4, 55, 60 }, // 23 IIC_iLoad_m
  { 1, 3, 4, 60, 65 }, // 24 IIC_iLoad_mu
  { 1, 4, 6, 65, 70 }, // 25 IIC_iLoad_mBr
  { 1, 1, 2, 70, 74 }, // 26 IIC_iLoad_bh_ru
  { 1, 1, 2, 74, 77 }, // 27 IIC_iLoad_bh_iu
  { 1, 1, 2, 77, 80 }, // 28 IIC_iLoad_bh_r
  { 1, 2, 3, 80, 83 }, // 29 IIC_iLoad_bh_si
  { 1, 1, 2, 83, 86 }, // 30 IIC_iLoad_d_r
  { 1, 1, 2, 86, 90 }, // 31 IIC_iLoad_d_ru
  { 1, 1, 2, 90, 94 }, // 32 IIC_iLoad_ru
  { 1, 1, 2, 94, 97 }, // 33 IIC_iLoad_iu
  { 1, 1, 2, 97, 100 }, // 34 IIC_iLoad_r
  { 1, 2, 3, 100, 103 }, // 35 IIC_iLoad_si
  { 1, 1, 2, 103, 105 }, // 36 IIC_iALUi
  { 1, 2, 3, 105, 109 }, // 37 IIC_iMAC32
  { 1, 1, 2, 109, 110 }, // 38 IIC_iCMOVi
  { 1, 1, 2, 110, 111 }, // 39 IIC_iMOVi
  { 1, 6, 8, 111, 112 }, // 40 IIC_iCMOVix2
  { 1, 1, 2, 112, 114 }, // 41 IIC_iCMOVr
  { 1, 1, 2, 114, 117 }, // 42 IIC_iCMOVsr
  { 1, 6, 8, 117, 118 }, // 43 IIC_iMOVix2
  { 1, 8, 11, 118, 119 }, // 44 IIC_iMOVix2addpc
  { 1, 8, 11, 119, 120 }, // 45 IIC_iMOVix2ld
  { 1, 1, 2, 120, 122 }, // 46 IIC_iMOVr
  { 1, 2, 3, 122, 125 }, // 47 IIC_iMOVsr
  { 1, 1, 2, 125, 127 }, // 48 IIC_iMOVsi
  { 1, 2, 3, 127, 130 }, // 49 IIC_iMUL32
  { 1, 1, 2, 130, 131 }, // 50 IIC_iMVNi
  { 1, 1, 2, 131, 133 }, // 51 IIC_iMVNr
  { 1, 2, 3, 133, 136 }, // 52 IIC_iMVNsr
  { 1, 1, 2, 136, 139 }, // 53 IIC_iALUr
  { 1, 1, 2, 139, 142 }, // 54 IIC_iStore_r
  { 1, 1, 2, 142, 145 }, // 55 IIC_iStore_bh_r
  { 1, 1, 2, 145, 148 }, // 56 IIC_iALUsi_WriteALUsi_ReadALU
  { 1, 1, 2, 148, 151 }, // 57 IIC_iBITsi_WriteALUsi_ReadALU
  { 0, 0, 0, 0, 0 }, // 58 IIC_Preload
  { 0, 0, 0, 0, 0 }, // 59 IIC_iDIV
  { 1, 1, 2, 151, 155 }, // 60 IIC_iMAC16
  { 1, 3, 4, 155, 159 }, // 61 IIC_iMAC64
  { 1, 1, 2, 159, 162 }, // 62 IIC_iMUL16
  { 1, 3, 4, 162, 165 }, // 63 IIC_iMUL64
  { 1, 3, 4, 0, 0 }, // 64 IIC_iStore_m
  { 1, 3, 4, 165, 166 }, // 65 IIC_iStore_mu
  { 1, 1, 2, 166, 170 }, // 66 IIC_iStore_bh_ru
  { 1, 1, 2, 170, 173 }, // 67 IIC_iStore_bh_iu
  { 1, 1, 2, 173, 177 }, // 68 IIC_iStore_ru
  { 1, 2, 3, 177, 180 }, // 69 IIC_iStore_bh_si
  { 1, 1, 2, 180, 183 }, // 70 IIC_iStore_d_r
  { 1, 1, 2, 183, 187 }, // 71 IIC_iStore_d_ru
  { 1, 1, 2, 187, 190 }, // 72 IIC_iStore_iu
  { 1, 2, 3, 190, 193 }, // 73 IIC_iStore_si
  { 1, 1, 2, 193, 196 }, // 74 IIC_iEXTAr
  { 1, 1, 2, 196, 198 }, // 75 IIC_iEXTr
  { 1, 1, 2, 198, 199 }, // 76 IIC_iTSTi_WriteCMP_ReadALU
  { 1, 1, 2, 199, 201 }, // 77 IIC_iTSTr_WriteCMP_ReadALU_ReadALU
  { 1, 2, 3, 201, 204 }, // 78 IIC_iTSTsr_WriteCMPsi_ReadALU
  { 1, 2, 3, 204, 207 }, // 79 IIC_iTSTsr_WriteCMPsr_ReadALU
  { 0, 0, 0, 0, 0 }, // 80 IIC_VABAD
  { 0, 0, 0, 0, 0 }, // 81 IIC_VABAQ
  { 0, 0, 0, 0, 0 }, // 82 IIC_VSUBi4Q
  { 0, 0, 0, 0, 0 }, // 83 IIC_VBIND
  { 0, 0, 0, 0, 0 }, // 84 IIC_VBINQ
  { 0, 0, 0, 0, 0 }, // 85 IIC_VSUBi4D
  { 0, 0, 0, 0, 0 }, // 86 IIC_VUNAD
  { 0, 0, 0, 0, 0 }, // 87 IIC_VUNAQ
  { 0, 0, 0, 0, 0 }, // 88 IIC_VUNAiQ
  { 0, 0, 0, 0, 0 }, // 89 IIC_VUNAiD
  { 1, 1, 2, 207, 210 }, // 90 IIC_fpALU64
  { 0, 0, 0, 0, 0 }, // 91 IIC_VBINi4D
  { 0, 0, 0, 0, 0 }, // 92 IIC_VSHLiD
  { 1, 1, 2, 210, 213 }, // 93 IIC_fpALU32
  { 0, 0, 0, 0, 0 }, // 94 IIC_VSUBiD
  { 0, 0, 0, 0, 0 }, // 95 IIC_VBINiQ
  { 0, 0, 0, 0, 0 }, // 96 IIC_VBINiD
  { 0, 0, 0, 0, 0 }, // 97 IIC_VMOVImm
  { 0, 0, 0, 0, 0 }, // 98 IIC_VCNTiD
  { 0, 0, 0, 0, 0 }, // 99 IIC_VCNTiQ
  { 1, 1, 2, 213, 215 }, // 100 IIC_fpCMP64
  { 1, 1, 2, 215, 217 }, // 101 IIC_fpCMP32
  { 0, 0, 0, 0, 0 }, // 102 IIC_fpCVTSH
  { 0, 0, 0, 0, 0 }, // 103 IIC_fpCVTHS
  { 1, 1, 2, 217, 219 }, // 104 IIC_fpCVTDS
  { 1, 1, 2, 219, 221 }, // 105 IIC_fpCVTSD
  { 1, 11, 12, 221, 224 }, // 106 IIC_fpDIV64
  { 1, 12, 13, 224, 227 }, // 107 IIC_fpDIV32
  { 0, 0, 0, 0, 0 }, // 108 IIC_VMOVIS
  { 0, 0, 0, 0, 0 }, // 109 IIC_VMOVD
  { 0, 0, 0, 0, 0 }, // 110 IIC_VMOVQ
  { 0, 0, 0, 0, 0 }, // 111 IIC_VEXTD
  { 0, 0, 0, 0, 0 }, // 112 IIC_VEXTQ
  { 1, 2, 3, 227, 231 }, // 113 IIC_fpFMAC64
  { 1, 1, 2, 231, 235 }, // 114 IIC_fpFMAC32
  { 0, 0, 0, 0, 0 }, // 115 IIC_VFMACD
  { 0, 0, 0, 0, 0 }, // 116 IIC_VFMACQ
  { 0, 0, 0, 0, 0 }, // 117 IIC_VMOVSI
  { 0, 0, 0, 0, 0 }, // 118 IIC_VBINi4Q
  { 0, 0, 0, 0, 0 }, // 119 IIC_VLD1dup
  { 0, 0, 0, 0, 0 }, // 120 IIC_VLD1dupu
  { 0, 0, 0, 0, 0 }, // 121 IIC_VLD1ln
  { 0, 0, 0, 0, 0 }, // 122 IIC_VLD1lnu
  { 0, 0, 0, 0, 0 }, // 123 IIC_VLD1
  { 0, 0, 0, 0, 0 }, // 124 IIC_VLD1x4
  { 0, 0, 0, 0, 0 }, // 125 IIC_VLD1x2u
  { 0, 0, 0, 0, 0 }, // 126 IIC_VLD1x3
  { 0, 0, 0, 0, 0 }, // 127 IIC_VLD1u
  { 0, 0, 0, 0, 0 }, // 128 IIC_VLD1x2
  { 0, 0, 0, 0, 0 }, // 129 IIC_VLD2dup
  { 0, 0, 0, 0, 0 }, // 130 IIC_VLD2dupu
  { 0, 0, 0, 0, 0 }, // 131 IIC_VLD2ln
  { 0, 0, 0, 0, 0 }, // 132 IIC_VLD2lnu
  { 0, 0, 0, 0, 0 }, // 133 IIC_VLD2
  { 0, 0, 0, 0, 0 }, // 134 IIC_VLD2u
  { 0, 0, 0, 0, 0 }, // 135 IIC_VLD2x2
  { 0, 0, 0, 0, 0 }, // 136 IIC_VLD2x2u
  { 0, 0, 0, 0, 0 }, // 137 IIC_VLD3dup
  { 0, 0, 0, 0, 0 }, // 138 IIC_VLD3dupu
  { 0, 0, 0, 0, 0 }, // 139 IIC_VLD3ln
  { 0, 0, 0, 0, 0 }, // 140 IIC_VLD3lnu
  { 0, 0, 0, 0, 0 }, // 141 IIC_VLD3
  { 0, 0, 0, 0, 0 }, // 142 IIC_VLD3u
  { 0, 0, 0, 0, 0 }, // 143 IIC_VLD4dup
  { 0, 0, 0, 0, 0 }, // 144 IIC_VLD4dupu
  { 0, 0, 0, 0, 0 }, // 145 IIC_VLD4ln
  { 0, 0, 0, 0, 0 }, // 146 IIC_VLD4lnu
  { 0, 0, 0, 0, 0 }, // 147 IIC_VLD4
  { 0, 0, 0, 0, 0 }, // 148 IIC_VLD4u
  { 1, 3, 4, 235, 240 }, // 149 IIC_fpLoad_mu
  { 1, 3, 4, 240, 244 }, // 150 IIC_fpLoad_m
  { 1, 1, 2, 244, 247 }, // 151 IIC_fpLoad64
  { 1, 1, 2, 247, 250 }, // 152 IIC_fpLoad32
  { 1, 2, 3, 250, 254 }, // 153 IIC_fpMAC64
  { 0, 0, 0, 0, 0 }, // 154 IIC_VMACi32D
  { 0, 0, 0, 0, 0 }, // 155 IIC_VMACi16D
  { 1, 1, 2, 254, 258 }, // 156 IIC_fpMAC32
  { 0, 0, 0, 0, 0 }, // 157 IIC_VMACD
  { 0, 0, 0, 0, 0 }, // 158 IIC_VMACQ
  { 0, 0, 0, 0, 0 }, // 159 IIC_VMACi32Q
  { 0, 0, 0, 0, 0 }, // 160 IIC_VMACi16Q
  { 1, 1, 2, 258, 261 }, // 161 IIC_fpMOVID
  { 0, 0, 0, 0, 0 }, // 162 IIC_VQUNAiD
  { 0, 0, 0, 0, 0 }, // 163 IIC_VMOVN
  { 1, 1, 2, 261, 264 }, // 164 IIC_fpMOVDI
  { 1, 1, 2, 264, 266 }, // 165 IIC_fpMOVSI
  { 1, 1, 2, 266, 268 }, // 166 IIC_fpMOVIS
  { 1, 2, 3, 268, 271 }, // 167 IIC_fpMUL64
  { 0, 0, 0, 0, 0 }, // 168 IIC_VMULi16D
  { 0, 0, 0, 0, 0 }, // 169 IIC_VMULi32D
  { 1, 1, 2, 271, 274 }, // 170 IIC_fpMUL32
  { 0, 0, 0, 0, 0 }, // 171 IIC_VFMULD
  { 0, 0, 0, 0, 0 }, // 172 IIC_VFMULQ
  { 0, 0, 0, 0, 0 }, // 173 IIC_VMULi16Q
  { 0, 0, 0, 0, 0 }, // 174 IIC_VMULi32Q
  { 0, 0, 0, 0, 0 }, // 175 IIC_VSHLiQ
  { 0, 0, 0, 0, 0 }, // 176 IIC_VPALiQ
  { 0, 0, 0, 0, 0 }, // 177 IIC_VPALiD
  { 0, 0, 0, 0, 0 }, // 178 IIC_VPBIND
  { 0, 0, 0, 0, 0 }, // 179 IIC_VQUNAiQ
  { 0, 0, 0, 0, 0 }, // 180 IIC_VSHLi4Q
  { 0, 0, 0, 0, 0 }, // 181 IIC_VSHLi4D
  { 0, 0, 0, 0, 0 }, // 182 IIC_VRECSD
  { 0, 0, 0, 0, 0 }, // 183 IIC_VRECSQ
  { 0, 0, 0, 0, 0 }, // 184 IIC_VMOVISL
  { 1, 1, 2, 274, 276 }, // 185 IIC_fpCVTID
  { 1, 1, 2, 276, 278 }, // 186 IIC_fpCVTIS
  { 1, 11, 12, 278, 281 }, // 187 IIC_fpSQRT64
  { 1, 12, 13, 281, 284 }, // 188 IIC_fpSQRT32
  { 0, 0, 0, 0, 0 }, // 189 IIC_VST1ln
  { 0, 0, 0, 0, 0 }, // 190 IIC_VST1lnu
  { 0, 0, 0, 0, 0 }, // 191 IIC_VST1
  { 0, 0, 0, 0, 0 }, // 192 IIC_VST1x4
  { 0, 0, 0, 0, 0 }, // 193 IIC_VLD1x4u
  { 0, 0, 0, 0, 0 }, // 194 IIC_VST1x3
  { 0, 0, 0, 0, 0 }, // 195 IIC_VLD1x3u
  { 0, 0, 0, 0, 0 }, // 196 IIC_VST1x4u
  { 0, 0, 0, 0, 0 }, // 197 IIC_VST1x3u
  { 0, 0, 0, 0, 0 }, // 198 IIC_VST1x2
  { 0, 0, 0, 0, 0 }, // 199 IIC_VST2ln
  { 0, 0, 0, 0, 0 }, // 200 IIC_VST2lnu
  { 0, 0, 0, 0, 0 }, // 201 IIC_VST2
  { 0, 0, 0, 0, 0 }, // 202 IIC_VST2x2
  { 0, 0, 0, 0, 0 }, // 203 IIC_VST2x2u
  { 0, 0, 0, 0, 0 }, // 204 IIC_VST3ln
  { 0, 0, 0, 0, 0 }, // 205 IIC_VST3lnu
  { 0, 0, 0, 0, 0 }, // 206 IIC_VST3
  { 0, 0, 0, 0, 0 }, // 207 IIC_VST3u
  { 0, 0, 0, 0, 0 }, // 208 IIC_VST4ln
  { 0, 0, 0, 0, 0 }, // 209 IIC_VST4lnu
  { 0, 0, 0, 0, 0 }, // 210 IIC_VST4
  { 0, 0, 0, 0, 0 }, // 211 IIC_VST4u
  { 1, 3, 4, 284, 288 }, // 212 IIC_fpStore_m
  { 1, 1, 2, 288, 291 }, // 213 IIC_fpStore64
  { 1, 1, 2, 291, 294 }, // 214 IIC_fpStore32
  { 0, 0, 0, 0, 0 }, // 215 IIC_VSUBiQ
  { 0, 0, 0, 0, 0 }, // 216 IIC_VTB1
  { 0, 0, 0, 0, 0 }, // 217 IIC_VTB2
  { 0, 0, 0, 0, 0 }, // 218 IIC_VTB3
  { 0, 0, 0, 0, 0 }, // 219 IIC_VTB4
  { 0, 0, 0, 0, 0 }, // 220 IIC_VTBX1
  { 0, 0, 0, 0, 0 }, // 221 IIC_VTBX2
  { 0, 0, 0, 0, 0 }, // 222 IIC_VTBX3
  { 0, 0, 0, 0, 0 }, // 223 IIC_VTBX4
  { 1, 1, 2, 294, 296 }, // 224 IIC_fpCVTDI
  { 1, 1, 2, 296, 298 }, // 225 IIC_fpCVTSI
  { 0, 0, 0, 0, 0 }, // 226 IIC_VPERMD
  { 0, 0, 0, 0, 0 }, // 227 IIC_VPERMQ
  { 0, 0, 0, 0, 0 }, // 228 IIC_VPERMQ3
  { 1, 1, 2, 298, 301 }, // 229 IIC_iALUsi
  { 1, 1, 2, 301, 303 }, // 230 IIC_iBITi
  { 1, 1, 2, 303, 306 }, // 231 IIC_iBITr
  { 1, 1, 2, 306, 309 }, // 232 IIC_iBITsi
  { 1, 1, 2, 309, 311 }, // 233 IIC_iUNAr
  { 1, 1, 2, 311, 313 }, // 234 IIC_iCMPsi
  { 1, 1, 2, 0, 0 }, // 235 IIC_iALUx
  { 1, 1, 2, 313, 315 }, // 236 IIC_iLoad_bh_i
  { 1, 1, 2, 315, 317 }, // 237 IIC_iLoad_d_i
  { 1, 1, 2, 317, 319 }, // 238 IIC_iLoad_i
  { 1, 6, 8, 319, 321 }, // 239 IIC_iLoadiALU
  { 1, 1, 2, 321, 323 }, // 240 IIC_iCMOVsi
  { 1, 1, 2, 323, 325 }, // 241 IIC_iMVNsi
  { 0, 0, 0, 0, 0 }, // 242 IIC_iALUsir
  { 1, 1, 2, 325, 327 }, // 243 IIC_iStore_bh_i
  { 1, 1, 2, 327, 329 }, // 244 IIC_iStore_i
  { 1, 2, 3, 329, 333 }, // 245 IIC_iEXTAsr
  { 1, 1, 2, 333, 334 }, // 246 IIC_iTSTi
  { 1, 1, 2, 334, 336 }, // 247 IIC_iTSTr
  { 1, 1, 2, 336, 338 }, // 248 IIC_iTSTsi
  { 1, 3, 4, 338, 341 }, // 249 IIC_iPop
  { 1, 4, 6, 341, 344 }, // 250 IIC_iPop_Br
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary CortexA9Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 13, 15, 344, 346 }, // 1 IIC_iALUi_WriteALU_ReadALU
  { 1, 13, 15, 346, 349 }, // 2 IIC_iALUr_WriteALU_ReadALU_ReadALU
  { 1, 15, 17, 349, 353 }, // 3 IIC_iALUsr_WriteALUsi_ReadALU
  { 1, 15, 17, 353, 357 }, // 4 IIC_iALUsr_WriteALUsr_ReadALUsr
  { 1, 15, 17, 357, 361 }, // 5 IIC_iALUsr_WriteALUSsr_ReadALUsr
  { 1, 13, 15, 361, 363 }, // 6 IIC_iBITi_WriteALU_ReadALU
  { 1, 13, 15, 363, 366 }, // 7 IIC_iBITr_WriteALU_ReadALU_ReadALU
  { 1, 15, 17, 366, 370 }, // 8 IIC_iBITsr_WriteALUsi_ReadALU
  { 1, 15, 17, 370, 374 }, // 9 IIC_iBITsr_WriteALUsr_ReadALUsr
  { 1, 17, 20, 0, 0 }, // 10 IIC_Br
  { 1, 20, 22, 374, 376 }, // 11 IIC_iUNAsi
  { 1, 13, 15, 376, 378 }, // 12 IIC_iUNAr_WriteALU
  { 1, 13, 15, 378, 379 }, // 13 IIC_iCMPi
  { 1, 13, 15, 379, 381 }, // 14 IIC_iCMPr
  { 1, 15, 17, 381, 384 }, // 15 IIC_iCMPsr
  { 1, 13, 15, 384, 385 }, // 16 IIC_iCMPi_WriteCMP_ReadALU
  { 1, 13, 15, 385, 387 }, // 17 IIC_iCMPr_WriteCMP_ReadALU_ReadALU
  { 1, 15, 17, 387, 390 }, // 18 IIC_iCMPsr_WriteCMPsi_ReadALU
  { 1, 15, 17, 390, 393 }, // 19 IIC_iCMPsr_WriteCMPsr_ReadALU
  { 1, 22, 27, 393, 395 }, // 20 IIC_fpUNA64
  { 1, 22, 27, 395, 397 }, // 21 IIC_fpUNA32
  { 1, 27, 32, 397, 398 }, // 22 IIC_fpSTAT
  { -1, 32, 36, 398, 403 }, // 23 IIC_iLoad_m
  { -1, 32, 36, 403, 408 }, // 24 IIC_iLoad_mu
  { -1, 36, 41, 408, 413 }, // 25 IIC_iLoad_mBr
  { 1, 41, 45, 413, 417 }, // 26 IIC_iLoad_bh_ru
  { 1, 41, 45, 417, 420 }, // 27 IIC_iLoad_bh_iu
  { 1, 41, 45, 420, 423 }, // 28 IIC_iLoad_bh_r
  { 1, 41, 45, 423, 426 }, // 29 IIC_iLoad_bh_si
  { 1, 41, 45, 426, 430 }, // 30 IIC_iLoad_d_r
  { 1, 41, 45, 430, 434 }, // 31 IIC_iLoad_d_ru
  { 1, 45, 49, 434, 438 }, // 32 IIC_iLoad_ru
  { 1, 45, 49, 438, 441 }, // 33 IIC_iLoad_iu
  { 1, 45, 49, 441, 444 }, // 34 IIC_iLoad_r
  { 1, 49, 53, 444, 447 }, // 35 IIC_iLoad_si
  { 1, 13, 15, 447, 449 }, // 36 IIC_iALUi
  { 1, 53, 55, 449, 453 }, // 37 IIC_iMAC32
  { 1, 13, 15, 453, 454 }, // 38 IIC_iCMOVi
  { 1, 13, 15, 454, 455 }, // 39 IIC_iMOVi
  { 1, 55, 59, 455, 456 }, // 40 IIC_iCMOVix2
  { 1, 13, 15, 456, 458 }, // 41 IIC_iCMOVr
  { 1, 20, 22, 458, 461 }, // 42 IIC_iCMOVsr
  { 1, 59, 62, 461, 462 }, // 43 IIC_iMOVix2
  { 1, 62, 66, 462, 463 }, // 44 IIC_iMOVix2addpc
  { 1, 66, 72, 463, 464 }, // 45 IIC_iMOVix2ld
  { 1, 13, 15, 464, 466 }, // 46 IIC_iMOVr
  { 1, 20, 22, 466, 469 }, // 47 IIC_iMOVsr
  { 1, 13, 15, 469, 471 }, // 48 IIC_iMOVsi
  { 1, 53, 55, 471, 474 }, // 49 IIC_iMUL32
  { 1, 13, 15, 474, 475 }, // 50 IIC_iMVNi
  { 1, 13, 15, 475, 477 }, // 51 IIC_iMVNr
  { 1, 15, 17, 477, 480 }, // 52 IIC_iMVNsr
  { 1, 13, 15, 480, 483 }, // 53 IIC_iALUr
  { 1, 45, 49, 483, 486 }, // 54 IIC_iStore_r
  { 1, 72, 76, 486, 489 }, // 55 IIC_iStore_bh_r
  { 1, 20, 22, 489, 492 }, // 56 IIC_iALUsi_WriteALUsi_ReadALU
  { 1, 20, 22, 492, 495 }, // 57 IIC_iBITsi_WriteALUsi_ReadALU
  { 1, 76, 77, 495, 497 }, // 58 IIC_Preload
  { 0, 0, 0, 0, 0 }, // 59 IIC_iDIV
  { 1, 53, 55, 497, 501 }, // 60 IIC_iMAC16
  { 1, 77, 79, 501, 505 }, // 61 IIC_iMAC64
  { 1, 53, 55, 505, 508 }, // 62 IIC_iMUL16
  { 1, 77, 79, 508, 512 }, // 63 IIC_iMUL64
  { -1, 79, 83, 0, 0 }, // 64 IIC_iStore_m
  { -1, 79, 83, 512, 513 }, // 65 IIC_iStore_mu
  { 1, 72, 76, 513, 517 }, // 66 IIC_iStore_bh_ru
  { 1, 72, 76, 517, 520 }, // 67 IIC_iStore_bh_iu
  { 1, 45, 49, 520, 524 }, // 68 IIC_iStore_ru
  { 1, 72, 76, 524, 527 }, // 69 IIC_iStore_bh_si
  { 1, 72, 76, 527, 530 }, // 70 IIC_iStore_d_r
  { 1, 72, 76, 530, 534 }, // 71 IIC_iStore_d_ru
  { 1, 45, 49, 534, 537 }, // 72 IIC_iStore_iu
  { 1, 45, 49, 537, 540 }, // 73 IIC_iStore_si
  { 1, 20, 22, 540, 543 }, // 74 IIC_iEXTAr
  { 1, 13, 15, 543, 545 }, // 75 IIC_iEXTr
  { 1, 13, 15, 545, 546 }, // 76 IIC_iTSTi_WriteCMP_ReadALU
  { 1, 13, 15, 546, 548 }, // 77 IIC_iTSTr_WriteCMP_ReadALU_ReadALU
  { 1, 15, 17, 548, 551 }, // 78 IIC_iTSTsr_WriteCMPsi_ReadALU
  { 1, 15, 17, 551, 554 }, // 79 IIC_iTSTsr_WriteCMPsr_ReadALU
  { 1, 83, 88, 554, 558 }, // 80 IIC_VABAD
  { 1, 88, 93, 558, 562 }, // 81 IIC_VABAQ
  { 1, 83, 88, 562, 565 }, // 82 IIC_VSUBi4Q
  { 1, 83, 88, 565, 568 }, // 83 IIC_VBIND
  { 1, 93, 98, 568, 571 }, // 84 IIC_VBINQ
  { 1, 83, 88, 571, 574 }, // 85 IIC_VSUBi4D
  { 1, 83, 88, 574, 576 }, // 86 IIC_VUNAD
  { 1, 93, 98, 576, 578 }, // 87 IIC_VUNAQ
  { 1, 83, 88, 578, 580 }, // 88 IIC_VUNAiQ
  { 1, 83, 88, 580, 582 }, // 89 IIC_VUNAiD
  { 1, 98, 103, 582, 585 }, // 90 IIC_fpALU64
  { 1, 83, 88, 585, 588 }, // 91 IIC_VBINi4D
  { 1, 83, 88, 588, 591 }, // 92 IIC_VSHLiD
  { 1, 98, 103, 591, 594 }, // 93 IIC_fpALU32
  { 1, 83, 88, 594, 597 }, // 94 IIC_VSUBiD
  { 1, 83, 88, 597, 600 }, // 95 IIC_VBINiQ
  { 1, 83, 88, 600, 603 }, // 96 IIC_VBINiD
  { 1, 83, 88, 603, 604 }, // 97 IIC_VMOVImm
  { 1, 83, 88, 604, 607 }, // 98 IIC_VCNTiD
  { 1, 93, 98, 607, 610 }, // 99 IIC_VCNTiQ
  { 1, 98, 103, 610, 612 }, // 100 IIC_fpCMP64
  { 1, 98, 103, 612, 614 }, // 101 IIC_fpCMP32
  { 1, 98, 103, 614, 616 }, // 102 IIC_fpCVTSH
  { 1, 22, 27, 616, 618 }, // 103 IIC_fpCVTHS
  { 1, 98, 103, 618, 620 }, // 104 IIC_fpCVTDS
  { 1, 98, 103, 620, 622 }, // 105 IIC_fpCVTSD
  { 1, 103, 108, 622, 625 }, // 106 IIC_fpDIV64
  { 1, 108, 113, 625, 628 }, // 107 IIC_fpDIV32
  { 1, 113, 118, 628, 630 }, // 108 IIC_VMOVIS
  { 1, 83, 88, 630, 632 }, // 109 IIC_VMOVD
  { 1, 83, 88, 632, 634 }, // 110 IIC_VMOVQ
  { 1, 83, 88, 634, 637 }, // 111 IIC_VEXTD
  { 1, 93, 98, 637, 640 }, // 112 IIC_VEXTQ
  { 1, 118, 123, 640, 644 }, // 113 IIC_fpFMAC64
  { 1, 123, 128, 644, 648 }, // 114 IIC_fpFMAC32
  { 1, 93, 98, 648, 652 }, // 115 IIC_VFMACD
  { 1, 128, 133, 652, 656 }, // 116 IIC_VFMACQ
  { 1, 113, 118, 656, 658 }, // 117 IIC_VMOVSI
  { 1, 83, 88, 658, 661 }, // 118 IIC_VBINi4Q
  { 1, 133, 139, 661, 663 }, // 119 IIC_VLD1dup
  { 1, 133, 139, 663, 667 }, // 120 IIC_VLD1dupu
  { 1, 139, 145, 667, 671 }, // 121 IIC_VLD1ln
  { 1, 139, 145, 671, 677 }, // 122 IIC_VLD1lnu
  { 1, 133, 139, 677, 679 }, // 123 IIC_VLD1
  { 1, 139, 145, 679, 684 }, // 124 IIC_VLD1x4
  { 1, 133, 139, 684, 688 }, // 125 IIC_VLD1x2u
  { 1, 139, 145, 688, 692 }, // 126 IIC_VLD1x3
  { 1, 133, 139, 692, 695 }, // 127 IIC_VLD1u
  { 1, 133, 139, 695, 698 }, // 128 IIC_VLD1x2
  { 1, 133, 139, 698, 701 }, // 129 IIC_VLD2dup
  { 1, 133, 139, 701, 706 }, // 130 IIC_VLD2dupu
  { 1, 139, 145, 706, 712 }, // 131 IIC_VLD2ln
  { 1, 139, 145, 712, 720 }, // 132 IIC_VLD2lnu
  { 1, 133, 139, 720, 723 }, // 133 IIC_VLD2
  { 1, 133, 139, 723, 729 }, // 134 IIC_VLD2u
  { 1, 139, 145, 729, 734 }, // 135 IIC_VLD2x2
  { 1, 139, 145, 734, 740 }, // 136 IIC_VLD2x2u
  { 1, 145, 151, 740, 744 }, // 137 IIC_VLD3dup
  { 1, 145, 151, 744, 750 }, // 138 IIC_VLD3dupu
  { 1, 151, 157, 750, 758 }, // 139 IIC_VLD3ln
  { 1, 151, 157, 758, 768 }, // 140 IIC_VLD3lnu
  { 1, 145, 151, 768, 772 }, // 141 IIC_VLD3
  { 1, 145, 151, 772, 777 }, // 142 IIC_VLD3u
  { 1, 139, 145, 777, 782 }, // 143 IIC_VLD4dup
  { 1, 139, 145, 782, 789 }, // 144 IIC_VLD4dupu
  { 1, 157, 163, 789, 799 }, // 145 IIC_VLD4ln
  { 1, 157, 163, 799, 811 }, // 146 IIC_VLD4lnu
  { 1, 145, 151, 811, 816 }, // 147 IIC_VLD4
  { 1, 145, 151, 816, 822 }, // 148 IIC_VLD4u
  { -1, 163, 169, 822, 826 }, // 149 IIC_fpLoad_mu
  { -1, 163, 169, 826, 830 }, // 150 IIC_fpLoad_m
  { 1, 169, 175, 830, 832 }, // 151 IIC_fpLoad64
  { 1, 169, 175, 832, 834 }, // 152 IIC_fpLoad32
  { 1, 118, 123, 834, 838 }, // 153 IIC_fpMAC64
  { 1, 93, 98, 838, 842 }, // 154 IIC_VMACi32D
  { 1, 83, 88, 842, 846 }, // 155 IIC_VMACi16D
  { 1, 123, 128, 846, 850 }, // 156 IIC_fpMAC32
  { 1, 93, 98, 850, 854 }, // 157 IIC_VMACD
  { 1, 128, 133, 854, 858 }, // 158 IIC_VMACQ
  { 1, 128, 133, 858, 862 }, // 159 IIC_VMACi32Q
  { 1, 93, 98, 862, 866 }, // 160 IIC_VMACi16Q
  { 1, 22, 27, 866, 869 }, // 161 IIC_fpMOVID
  { 1, 83, 88, 869, 871 }, // 162 IIC_VQUNAiD
  { 1, 83, 88, 871, 873 }, // 163 IIC_VMOVN
  { 1, 175, 177, 873, 876 }, // 164 IIC_fpMOVDI
  { 1, 175, 177, 876, 878 }, // 165 IIC_fpMOVSI
  { 1, 22, 27, 878, 880 }, // 166 IIC_fpMOVIS
  { 1, 177, 182, 880, 883 }, // 167 IIC_fpMUL64
  { 1, 83, 88, 883, 886 }, // 168 IIC_VMULi16D
  { 1, 93, 98, 886, 889 }, // 169 IIC_VMULi32D
  { 1, 182, 187, 889, 892 }, // 170 IIC_fpMUL32
  { 1, 83, 88, 892, 895 }, // 171 IIC_VFMULD
  { 1, 187, 192, 895, 898 }, // 172 IIC_VFMULQ
  { 1, 93, 98, 898, 901 }, // 173 IIC_VMULi16Q
  { 1, 128, 133, 901, 904 }, // 174 IIC_VMULi32Q
  { 1, 83, 88, 904, 907 }, // 175 IIC_VSHLiQ
  { 1, 88, 93, 907, 910 }, // 176 IIC_VPALiQ
  { 1, 83, 88, 910, 913 }, // 177 IIC_VPALiD
  { 1, 83, 88, 913, 916 }, // 178 IIC_VPBIND
  { 1, 83, 88, 916, 918 }, // 179 IIC_VQUNAiQ
  { 1, 83, 88, 918, 921 }, // 180 IIC_VSHLi4Q
  { 1, 83, 88, 921, 924 }, // 181 IIC_VSHLi4D
  { 1, 192, 197, 924, 927 }, // 182 IIC_VRECSD
  { 1, 197, 202, 927, 930 }, // 183 IIC_VRECSQ
  { 1, 202, 207, 930, 933 }, // 184 IIC_VMOVISL
  { 1, 98, 103, 933, 935 }, // 185 IIC_fpCVTID
  { 1, 98, 103, 935, 937 }, // 186 IIC_fpCVTIS
  { 1, 207, 212, 937, 939 }, // 187 IIC_fpSQRT64
  { 1, 212, 217, 939, 941 }, // 188 IIC_fpSQRT32
  { 1, 217, 223, 941, 944 }, // 189 IIC_VST1ln
  { 1, 217, 223, 944, 949 }, // 190 IIC_VST1lnu
  { 1, 217, 223, 949, 952 }, // 191 IIC_VST1
  { 1, 223, 229, 952, 958 }, // 192 IIC_VST1x4
  { 1, 139, 145, 958, 964 }, // 193 IIC_VLD1x4u
  { 1, 223, 229, 964, 969 }, // 194 IIC_VST1x3
  { 1, 139, 145, 969, 974 }, // 195 IIC_VLD1x3u
  { 1, 223, 229, 974, 982 }, // 196 IIC_VST1x4u
  { 1, 223, 229, 982, 989 }, // 197 IIC_VST1x3u
  { 1, 217, 223, 989, 993 }, // 198 IIC_VST1x2
  { 1, 217, 223, 993, 997 }, // 199 IIC_VST2ln
  { 1, 217, 223, 997, 1003 }, // 200 IIC_VST2lnu
  { 1, 217, 223, 1003, 1007 }, // 201 IIC_VST2
  { 1, 229, 235, 1007, 1013 }, // 202 IIC_VST2x2
  { 1, 229, 235, 1013, 1021 }, // 203 IIC_VST2x2u
  { 1, 229, 235, 1021, 1026 }, // 204 IIC_VST3ln
  { 1, 229, 235, 1026, 1033 }, // 205 IIC_VST3lnu
  { 1, 223, 229, 1033, 1038 }, // 206 IIC_VST3
  { 1, 223, 229, 1038, 1045 }, // 207 IIC_VST3u
  { 1, 223, 229, 1045, 1051 }, // 208 IIC_VST4ln
  { 1, 223, 229, 1051, 1059 }, // 209 IIC_VST4lnu
  { 1, 223, 229, 1059, 1065 }, // 210 IIC_VST4
  { 1, 223, 229, 1065, 1073 }, // 211 IIC_VST4u
  { -1, 163, 169, 1073, 1077 }, // 212 IIC_fpStore_m
  { 1, 169, 175, 1077, 1079 }, // 213 IIC_fpStore64
  { 1, 169, 175, 1079, 1081 }, // 214 IIC_fpStore32
  { 1, 83, 88, 1081, 1084 }, // 215 IIC_VSUBiQ
  { 1, 93, 98, 1084, 1087 }, // 216 IIC_VTB1
  { 1, 235, 240, 1087, 1091 }, // 217 IIC_VTB2
  { 1, 240, 245, 1091, 1096 }, // 218 IIC_VTB3
  { 1, 245, 250, 1096, 1102 }, // 219 IIC_VTB4
  { 1, 93, 98, 1102, 1106 }, // 220 IIC_VTBX1
  { 1, 93, 98, 1106, 1111 }, // 221 IIC_VTBX2
  { 1, 245, 250, 1111, 1117 }, // 222 IIC_VTBX3
  { 1, 250, 255, 1117, 1124 }, // 223 IIC_VTBX4
  { 1, 98, 103, 1124, 1126 }, // 224 IIC_fpCVTDI
  { 1, 98, 103, 1126, 1128 }, // 225 IIC_fpCVTSI
  { 1, 83, 88, 1128, 1132 }, // 226 IIC_VPERMD
  { 1, 93, 98, 1132, 1136 }, // 227 IIC_VPERMQ
  { 1, 245, 250, 1136, 1140 }, // 228 IIC_VPERMQ3
  { 1, 20, 22, 1140, 1143 }, // 229 IIC_iALUsi
  { 1, 13, 15, 1143, 1145 }, // 230 IIC_iBITi
  { 1, 13, 15, 1145, 1148 }, // 231 IIC_iBITr
  { 1, 20, 22, 1148, 1151 }, // 232 IIC_iBITsi
  { 1, 13, 15, 1151, 1153 }, // 233 IIC_iUNAr
  { 1, 20, 22, 1153, 1155 }, // 234 IIC_iCMPsi
  { 1, 13, 15, 0, 0 }, // 235 IIC_iALUx
  { 1, 41, 45, 1155, 1157 }, // 236 IIC_iLoad_bh_i
  { 1, 41, 45, 1157, 1160 }, // 237 IIC_iLoad_d_i
  { 1, 45, 49, 1160, 1162 }, // 238 IIC_iLoad_i
  { 1, 255, 260, 1162, 1164 }, // 239 IIC_iLoadiALU
  { 1, 13, 15, 1164, 1166 }, // 240 IIC_iCMOVsi
  { 1, 20, 22, 1166, 1168 }, // 241 IIC_iMVNsi
  { 1, 20, 22, 1168, 1171 }, // 242 IIC_iALUsir
  { 1, 72, 76, 1171, 1173 }, // 243 IIC_iStore_bh_i
  { 1, 45, 49, 1173, 1175 }, // 244 IIC_iStore_i
  { 1, 15, 17, 1175, 1179 }, // 245 IIC_iEXTAsr
  { 1, 13, 15, 1179, 1180 }, // 246 IIC_iTSTi
  { 1, 13, 15, 1180, 1182 }, // 247 IIC_iTSTr
  { 1, 20, 22, 1182, 1184 }, // 248 IIC_iTSTsi
  { -1, 32, 36, 1184, 1187 }, // 249 IIC_iPop
  { -1, 260, 265, 1187, 1190 }, // 250 IIC_iPop_Br
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary CortexA8Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 265, 266, 1190, 1192 }, // 1 IIC_iALUi_WriteALU_ReadALU
  { 1, 265, 266, 1192, 1195 }, // 2 IIC_iALUr_WriteALU_ReadALU_ReadALU
  { 1, 265, 266, 1195, 1199 }, // 3 IIC_iALUsr_WriteALUsi_ReadALU
  { 1, 265, 266, 1199, 1203 }, // 4 IIC_iALUsr_WriteALUsr_ReadALUsr
  { 1, 265, 266, 1203, 1207 }, // 5 IIC_iALUsr_WriteALUSsr_ReadALUsr
  { 1, 265, 266, 1207, 1209 }, // 6 IIC_iBITi_WriteALU_ReadALU
  { 1, 265, 266, 1209, 1212 }, // 7 IIC_iBITr_WriteALU_ReadALU_ReadALU
  { 1, 265, 266, 1212, 1216 }, // 8 IIC_iBITsr_WriteALUsi_ReadALU
  { 1, 265, 266, 1216, 1220 }, // 9 IIC_iBITsr_WriteALUsr_ReadALUsr
  { 1, 265, 266, 0, 0 }, // 10 IIC_Br
  { 1, 265, 266, 1220, 1222 }, // 11 IIC_iUNAsi
  { 1, 265, 266, 1222, 1224 }, // 12 IIC_iUNAr_WriteALU
  { 1, 265, 266, 1224, 1225 }, // 13 IIC_iCMPi
  { 1, 265, 266, 1225, 1227 }, // 14 IIC_iCMPr
  { 1, 265, 266, 1227, 1230 }, // 15 IIC_iCMPsr
  { 1, 265, 266, 1230, 1231 }, // 16 IIC_iCMPi_WriteCMP_ReadALU
  { 1, 265, 266, 1231, 1233 }, // 17 IIC_iCMPr_WriteCMP_ReadALU_ReadALU
  { 1, 265, 266, 1233, 1236 }, // 18 IIC_iCMPsr_WriteCMPsi_ReadALU
  { 1, 265, 266, 1236, 1239 }, // 19 IIC_iCMPsr_WriteCMPsr_ReadALU
  { 1, 266, 269, 1239, 1241 }, // 20 IIC_fpUNA64
  { 1, 269, 271, 1241, 1243 }, // 21 IIC_fpUNA32
  { 1, 271, 273, 1243, 1244 }, // 22 IIC_fpSTAT
  { -1, 273, 275, 1244, 1249 }, // 23 IIC_iLoad_m
  { -1, 275, 277, 1249, 1254 }, // 24 IIC_iLoad_mu
  { -1, 277, 280, 1254, 1259 }, // 25 IIC_iLoad_mBr
  { 1, 280, 282, 1259, 1263 }, // 26 IIC_iLoad_bh_ru
  { 1, 280, 282, 1263, 1266 }, // 27 IIC_iLoad_bh_iu
  { 1, 280, 282, 1266, 1269 }, // 28 IIC_iLoad_bh_r
  { 1, 282, 284, 1269, 1272 }, // 29 IIC_iLoad_bh_si
  { 1, 280, 282, 1272, 1275 }, // 30 IIC_iLoad_d_r
  { 1, 280, 282, 1275, 1279 }, // 31 IIC_iLoad_d_ru
  { 1, 280, 282, 1279, 1283 }, // 32 IIC_iLoad_ru
  { 1, 280, 282, 1283, 1286 }, // 33 IIC_iLoad_iu
  { 1, 280, 282, 1286, 1289 }, // 34 IIC_iLoad_r
  { 1, 282, 284, 1289, 1292 }, // 35 IIC_iLoad_si
  { 1, 265, 266, 1292, 1294 }, // 36 IIC_iALUi
  { 1, 284, 285, 1294, 1298 }, // 37 IIC_iMAC32
  { 1, 265, 266, 1298, 1299 }, // 38 IIC_iCMOVi
  { 1, 265, 266, 1299, 1300 }, // 39 IIC_iMOVi
  { 1, 285, 287, 1300, 1302 }, // 40 IIC_iCMOVix2
  { 1, 265, 266, 1302, 1304 }, // 41 IIC_iCMOVr
  { 1, 265, 266, 1304, 1307 }, // 42 IIC_iCMOVsr
  { 1, 285, 287, 1307, 1308 }, // 43 IIC_iMOVix2
  { 1, 287, 290, 1308, 1309 }, // 44 IIC_iMOVix2addpc
  { 1, 290, 293, 1309, 1310 }, // 45 IIC_iMOVix2ld
  { 1, 265, 266, 1310, 1312 }, // 46 IIC_iMOVr
  { 1, 265, 266, 1312, 1315 }, // 47 IIC_iMOVsr
  { 1, 265, 266, 1315, 1317 }, // 48 IIC_iMOVsi
  { 1, 284, 285, 1317, 1320 }, // 49 IIC_iMUL32
  { 1, 265, 266, 1320, 1321 }, // 50 IIC_iMVNi
  { 1, 265, 266, 1321, 1323 }, // 51 IIC_iMVNr
  { 1, 265, 266, 1323, 1326 }, // 52 IIC_iMVNsr
  { 1, 265, 266, 1326, 1329 }, // 53 IIC_iALUr
  { 1, 280, 282, 1329, 1332 }, // 54 IIC_iStore_r
  { 1, 280, 282, 1332, 1335 }, // 55 IIC_iStore_bh_r
  { 1, 265, 266, 1335, 1338 }, // 56 IIC_iALUsi_WriteALUsi_ReadALU
  { 1, 265, 266, 1338, 1341 }, // 57 IIC_iBITsi_WriteALUsi_ReadALU
  { 1, 265, 266, 1341, 1343 }, // 58 IIC_Preload
  { 0, 0, 0, 0, 0 }, // 59 IIC_iDIV
  { 1, 284, 285, 1343, 1347 }, // 60 IIC_iMAC16
  { 1, 293, 294, 1347, 1351 }, // 61 IIC_iMAC64
  { 1, 294, 295, 1351, 1354 }, // 62 IIC_iMUL16
  { 1, 293, 294, 1354, 1358 }, // 63 IIC_iMUL64
  { -1, 273, 275, 0, 0 }, // 64 IIC_iStore_m
  { -1, 273, 275, 1358, 1359 }, // 65 IIC_iStore_mu
  { 1, 280, 282, 1359, 1363 }, // 66 IIC_iStore_bh_ru
  { 1, 280, 282, 1363, 1366 }, // 67 IIC_iStore_bh_iu
  { 1, 280, 282, 1366, 1370 }, // 68 IIC_iStore_ru
  { 1, 295, 297, 1370, 1373 }, // 69 IIC_iStore_bh_si
  { 1, 280, 282, 1373, 1376 }, // 70 IIC_iStore_d_r
  { 1, 280, 282, 1376, 1380 }, // 71 IIC_iStore_d_ru
  { 1, 280, 282, 1380, 1383 }, // 72 IIC_iStore_iu
  { 1, 295, 297, 1383, 1386 }, // 73 IIC_iStore_si
  { 1, 265, 266, 1386, 1389 }, // 74 IIC_iEXTAr
  { 1, 265, 266, 1389, 1391 }, // 75 IIC_iEXTr
  { 1, 265, 266, 1391, 1392 }, // 76 IIC_iTSTi_WriteCMP_ReadALU
  { 1, 265, 266, 1392, 1394 }, // 77 IIC_iTSTr_WriteCMP_ReadALU_ReadALU
  { 1, 265, 266, 1394, 1397 }, // 78 IIC_iTSTsr_WriteCMPsi_ReadALU
  { 1, 265, 266, 1397, 1400 }, // 79 IIC_iTSTsr_WriteCMPsr_ReadALU
  { 1, 269, 271, 1400, 1404 }, // 80 IIC_VABAD
  { 1, 297, 299, 1404, 1408 }, // 81 IIC_VABAQ
  { 1, 269, 271, 1408, 1411 }, // 82 IIC_VSUBi4Q
  { 1, 269, 271, 1411, 1414 }, // 83 IIC_VBIND
  { 1, 297, 299, 1414, 1417 }, // 84 IIC_VBINQ
  { 1, 269, 271, 1417, 1420 }, // 85 IIC_VSUBi4D
  { 1, 269, 271, 1420, 1422 }, // 86 IIC_VUNAD
  { 1, 297, 299, 1422, 1424 }, // 87 IIC_VUNAQ
  { 1, 269, 271, 1424, 1426 }, // 88 IIC_VUNAiQ
  { 1, 269, 271, 1426, 1428 }, // 89 IIC_VUNAiD
  { 1, 299, 302, 1428, 1431 }, // 90 IIC_fpALU64
  { 1, 269, 271, 1431, 1434 }, // 91 IIC_VBINi4D
  { 1, 269, 271, 1434, 1437 }, // 92 IIC_VSHLiD
  { 1, 269, 271, 1437, 1440 }, // 93 IIC_fpALU32
  { 1, 269, 271, 1440, 1443 }, // 94 IIC_VSUBiD
  { 1, 269, 271, 1443, 1446 }, // 95 IIC_VBINiQ
  { 1, 269, 271, 1446, 1449 }, // 96 IIC_VBINiD
  { 1, 269, 271, 1449, 1450 }, // 97 IIC_VMOVImm
  { 1, 269, 271, 1450, 1453 }, // 98 IIC_VCNTiD
  { 1, 297, 299, 1453, 1456 }, // 99 IIC_VCNTiQ
  { 1, 266, 269, 1456, 1458 }, // 100 IIC_fpCMP64
  { 1, 269, 271, 1458, 1460 }, // 101 IIC_fpCMP32
  { 0, 0, 0, 0, 0 }, // 102 IIC_fpCVTSH
  { 0, 0, 0, 0, 0 }, // 103 IIC_fpCVTHS
  { 1, 302, 305, 1460, 1462 }, // 104 IIC_fpCVTDS
  { 1, 305, 308, 1462, 1464 }, // 105 IIC_fpCVTSD
  { 1, 308, 311, 1464, 1467 }, // 106 IIC_fpDIV64
  { 1, 311, 314, 1467, 1470 }, // 107 IIC_fpDIV32
  { 1, 271, 273, 1470, 1472 }, // 108 IIC_VMOVIS
  { 1, 271, 273, 1472, 1474 }, // 109 IIC_VMOVD
  { 1, 314, 316, 1474, 1476 }, // 110 IIC_VMOVQ
  { 1, 271, 273, 1476, 1479 }, // 111 IIC_VEXTD
  { 1, 314, 316, 1479, 1482 }, // 112 IIC_VEXTQ
  { 1, 316, 319, 1482, 1486 }, // 113 IIC_fpFMAC64
  { 1, 269, 271, 1486, 1490 }, // 114 IIC_fpFMAC32
  { 1, 269, 271, 1490, 1494 }, // 115 IIC_VFMACD
  { 1, 297, 299, 1494, 1498 }, // 116 IIC_VFMACQ
  { 1, 271, 273, 1498, 1500 }, // 117 IIC_VMOVSI
  { 1, 269, 271, 1500, 1503 }, // 118 IIC_VBINi4Q
  { 1, 319, 322, 1503, 1505 }, // 119 IIC_VLD1dup
  { 1, 319, 322, 1505, 1509 }, // 120 IIC_VLD1dupu
  { 1, 322, 325, 1509, 1513 }, // 121 IIC_VLD1ln
  { 1, 322, 325, 1513, 1519 }, // 122 IIC_VLD1lnu
  { 1, 325, 328, 1519, 1521 }, // 123 IIC_VLD1
  { 1, 328, 331, 1521, 1526 }, // 124 IIC_VLD1x4
  { 1, 325, 328, 1526, 1530 }, // 125 IIC_VLD1x2u
  { 1, 328, 331, 1530, 1534 }, // 126 IIC_VLD1x3
  { 1, 325, 328, 1534, 1537 }, // 127 IIC_VLD1u
  { 1, 325, 328, 1537, 1540 }, // 128 IIC_VLD1x2
  { 1, 319, 322, 1540, 1543 }, // 129 IIC_VLD2dup
  { 1, 319, 322, 1543, 1548 }, // 130 IIC_VLD2dupu
  { 1, 328, 331, 1548, 1554 }, // 131 IIC_VLD2ln
  { 1, 328, 331, 1554, 1562 }, // 132 IIC_VLD2lnu
  { 1, 325, 328, 1562, 1565 }, // 133 IIC_VLD2
  { 1, 325, 328, 1565, 1571 }, // 134 IIC_VLD2u
  { 1, 328, 331, 1571, 1576 }, // 135 IIC_VLD2x2
  { 1, 328, 331, 1576, 1582 }, // 136 IIC_VLD2x2u
  { 1, 322, 325, 1582, 1586 }, // 137 IIC_VLD3dup
  { 1, 322, 325, 1586, 1592 }, // 138 IIC_VLD3dupu
  { 1, 331, 334, 1592, 1600 }, // 139 IIC_VLD3ln
  { 1, 331, 334, 1600, 1610 }, // 140 IIC_VLD3lnu
  { 1, 334, 337, 1610, 1614 }, // 141 IIC_VLD3
  { 1, 334, 337, 1614, 1619 }, // 142 IIC_VLD3u
  { 1, 322, 325, 1619, 1624 }, // 143 IIC_VLD4dup
  { 1, 322, 325, 1624, 1631 }, // 144 IIC_VLD4dupu
  { 1, 331, 334, 1631, 1641 }, // 145 IIC_VLD4ln
  { 1, 331, 334, 1641, 1653 }, // 146 IIC_VLD4lnu
  { 1, 334, 337, 1653, 1658 }, // 147 IIC_VLD4
  { 1, 334, 337, 1658, 1664 }, // 148 IIC_VLD4u
  { -1, 337, 342, 1664, 1669 }, // 149 IIC_fpLoad_mu
  { -1, 337, 342, 1669, 1673 }, // 150 IIC_fpLoad_m
  { 1, 342, 345, 1673, 1675 }, // 151 IIC_fpLoad64
  { 1, 342, 345, 1675, 1677 }, // 152 IIC_fpLoad32
  { 1, 316, 319, 1677, 1681 }, // 153 IIC_fpMAC64
  { 1, 297, 299, 1681, 1685 }, // 154 IIC_VMACi32D
  { 1, 269, 271, 1685, 1689 }, // 155 IIC_VMACi16D
  { 1, 269, 271, 1689, 1693 }, // 156 IIC_fpMAC32
  { 1, 269, 271, 1693, 1697 }, // 157 IIC_VMACD
  { 1, 297, 299, 1697, 1701 }, // 158 IIC_VMACQ
  { 1, 345, 349, 1701, 1705 }, // 159 IIC_VMACi32Q
  { 1, 297, 299, 1705, 1709 }, // 160 IIC_VMACi16Q
  { 1, 269, 271, 1709, 1712 }, // 161 IIC_fpMOVID
  { 1, 269, 271, 1712, 1714 }, // 162 IIC_VQUNAiD
  { 1, 269, 271, 1714, 1716 }, // 163 IIC_VMOVN
  { 1, 269, 271, 1716, 1719 }, // 164 IIC_fpMOVDI
  { 1, 269, 271, 1719, 1721 }, // 165 IIC_fpMOVSI
  { 1, 269, 271, 1721, 1723 }, // 166 IIC_fpMOVIS
  { 1, 349, 352, 1723, 1726 }, // 167 IIC_fpMUL64
  { 1, 269, 271, 1726, 1729 }, // 168 IIC_VMULi16D
  { 1, 297, 299, 1729, 1732 }, // 169 IIC_VMULi32D
  { 1, 269, 271, 1732, 1735 }, // 170 IIC_fpMUL32
  { 1, 269, 271, 1735, 1738 }, // 171 IIC_VFMULD
  { 1, 269, 271, 1738, 1741 }, // 172 IIC_VFMULQ
  { 1, 297, 299, 1741, 1744 }, // 173 IIC_VMULi16Q
  { 1, 345, 349, 1744, 1747 }, // 174 IIC_VMULi32Q
  { 1, 297, 299, 1747, 1750 }, // 175 IIC_VSHLiQ
  { 1, 297, 299, 1750, 1753 }, // 176 IIC_VPALiQ
  { 1, 269, 271, 1753, 1756 }, // 177 IIC_VPALiD
  { 1, 269, 271, 1756, 1759 }, // 178 IIC_VPBIND
  { 1, 269, 271, 1759, 1761 }, // 179 IIC_VQUNAiQ
  { 1, 297, 299, 1761, 1764 }, // 180 IIC_VSHLi4Q
  { 1, 269, 271, 1764, 1767 }, // 181 IIC_VSHLi4D
  { 1, 269, 271, 1767, 1770 }, // 182 IIC_VRECSD
  { 1, 297, 299, 1770, 1773 }, // 183 IIC_VRECSQ
  { 1, 314, 316, 1773, 1776 }, // 184 IIC_VMOVISL
  { 1, 352, 355, 1776, 1778 }, // 185 IIC_fpCVTID
  { 1, 269, 271, 1778, 1780 }, // 186 IIC_fpCVTIS
  { 1, 308, 311, 1780, 1782 }, // 187 IIC_fpSQRT64
  { 1, 316, 319, 1782, 1784 }, // 188 IIC_fpSQRT32
  { 1, 319, 322, 1784, 1787 }, // 189 IIC_VST1ln
  { 1, 319, 322, 1787, 1792 }, // 190 IIC_VST1lnu
  { 1, 325, 328, 1792, 1795 }, // 191 IIC_VST1
  { 1, 328, 331, 1795, 1801 }, // 192 IIC_VST1x4
  { 1, 328, 331, 1801, 1807 }, // 193 IIC_VLD1x4u
  { 1, 328, 331, 1807, 1812 }, // 194 IIC_VST1x3
  { 1, 328, 331, 1812, 1817 }, // 195 IIC_VLD1x3u
  { 1, 328, 331, 1817, 1825 }, // 196 IIC_VST1x4u
  { 1, 328, 331, 1825, 1832 }, // 197 IIC_VST1x3u
  { 1, 325, 328, 1832, 1836 }, // 198 IIC_VST1x2
  { 1, 325, 328, 1836, 1840 }, // 199 IIC_VST2ln
  { 1, 325, 328, 1840, 1846 }, // 200 IIC_VST2lnu
  { 1, 325, 328, 1846, 1850 }, // 201 IIC_VST2
  { 1, 334, 337, 1850, 1856 }, // 202 IIC_VST2x2
  { 1, 334, 337, 1856, 1864 }, // 203 IIC_VST2x2u
  { 1, 328, 331, 1864, 1869 }, // 204 IIC_VST3ln
  { 1, 328, 331, 1869, 1876 }, // 205 IIC_VST3lnu
  { 1, 328, 331, 1876, 1881 }, // 206 IIC_VST3
  { 1, 328, 331, 1881, 1888 }, // 207 IIC_VST3u
  { 1, 334, 337, 1888, 1894 }, // 208 IIC_VST4ln
  { 1, 334, 337, 1894, 1902 }, // 209 IIC_VST4lnu
  { 1, 334, 337, 1902, 1908 }, // 210 IIC_VST4
  { 1, 334, 337, 1908, 1916 }, // 211 IIC_VST4u
  { -1, 337, 342, 1916, 1920 }, // 212 IIC_fpStore_m
  { 1, 342, 345, 1920, 1922 }, // 213 IIC_fpStore64
  { 1, 342, 345, 1922, 1924 }, // 214 IIC_fpStore32
  { 1, 269, 271, 1924, 1927 }, // 215 IIC_VSUBiQ
  { 1, 314, 316, 1927, 1930 }, // 216 IIC_VTB1
  { 1, 314, 316, 1930, 1934 }, // 217 IIC_VTB2
  { 1, 355, 359, 1934, 1939 }, // 218 IIC_VTB3
  { 1, 355, 359, 1939, 1945 }, // 219 IIC_VTB4
  { 1, 314, 316, 1945, 1949 }, // 220 IIC_VTBX1
  { 1, 314, 316, 1949, 1954 }, // 221 IIC_VTBX2
  { 1, 355, 359, 1954, 1960 }, // 222 IIC_VTBX3
  { 1, 355, 359, 1960, 1967 }, // 223 IIC_VTBX4
  { 1, 352, 355, 1967, 1969 }, // 224 IIC_fpCVTDI
  { 1, 269, 271, 1969, 1971 }, // 225 IIC_fpCVTSI
  { 1, 271, 273, 1971, 1975 }, // 226 IIC_VPERMD
  { 1, 314, 316, 1975, 1979 }, // 227 IIC_VPERMQ
  { 1, 355, 359, 1979, 1983 }, // 228 IIC_VPERMQ3
  { 1, 265, 266, 1983, 1986 }, // 229 IIC_iALUsi
  { 1, 265, 266, 1986, 1988 }, // 230 IIC_iBITi
  { 1, 265, 266, 1988, 1991 }, // 231 IIC_iBITr
  { 1, 265, 266, 1991, 1994 }, // 232 IIC_iBITsi
  { 1, 265, 266, 1994, 1996 }, // 233 IIC_iUNAr
  { 1, 265, 266, 1996, 1998 }, // 234 IIC_iCMPsi
  { 1, 265, 266, 0, 0 }, // 235 IIC_iALUx
  { 1, 280, 282, 1998, 2000 }, // 236 IIC_iLoad_bh_i
  { 1, 280, 282, 2000, 2002 }, // 237 IIC_iLoad_d_i
  { 1, 280, 282, 2002, 2004 }, // 238 IIC_iLoad_i
  { 1, 359, 362, 2004, 2006 }, // 239 IIC_iLoadiALU
  { 1, 265, 266, 2006, 2008 }, // 240 IIC_iCMOVsi
  { 1, 265, 266, 2008, 2010 }, // 241 IIC_iMVNsi
  { 1, 265, 266, 2010, 2013 }, // 242 IIC_iALUsir
  { 1, 280, 282, 2013, 2015 }, // 243 IIC_iStore_bh_i
  { 1, 280, 282, 2015, 2017 }, // 244 IIC_iStore_i
  { 1, 265, 266, 2017, 2021 }, // 245 IIC_iEXTAsr
  { 1, 265, 266, 2021, 2022 }, // 246 IIC_iTSTi
  { 1, 265, 266, 2022, 2024 }, // 247 IIC_iTSTr
  { 1, 265, 266, 2024, 2026 }, // 248 IIC_iTSTsi
  { -1, 275, 277, 2026, 2029 }, // 249 IIC_iPop
  { -1, 277, 280, 2029, 2032 }, // 250 IIC_iPop_Br
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary SwiftItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 362, 364, 2032, 2034 }, // 1 IIC_iALUi_WriteALU_ReadALU
  { 1, 362, 364, 2034, 2037 }, // 2 IIC_iALUr_WriteALU_ReadALU_ReadALU
  { 1, 362, 364, 2037, 2041 }, // 3 IIC_iALUsr_WriteALUsi_ReadALU
  { 1, 362, 364, 2041, 2045 }, // 4 IIC_iALUsr_WriteALUsr_ReadALUsr
  { 1, 362, 364, 2045, 2049 }, // 5 IIC_iALUsr_WriteALUSsr_ReadALUsr
  { 1, 362, 364, 2049, 2051 }, // 6 IIC_iBITi_WriteALU_ReadALU
  { 1, 362, 364, 2051, 2054 }, // 7 IIC_iBITr_WriteALU_ReadALU_ReadALU
  { 1, 362, 364, 2054, 2058 }, // 8 IIC_iBITsr_WriteALUsi_ReadALU
  { 1, 362, 364, 2058, 2062 }, // 9 IIC_iBITsr_WriteALUsr_ReadALUsr
  { 1, 364, 365, 0, 0 }, // 10 IIC_Br
  { 1, 362, 364, 2062, 2064 }, // 11 IIC_iUNAsi
  { 1, 362, 364, 2064, 2066 }, // 12 IIC_iUNAr_WriteALU
  { 1, 362, 364, 2066, 2067 }, // 13 IIC_iCMPi
  { 1, 362, 364, 2067, 2069 }, // 14 IIC_iCMPr
  { 1, 365, 367, 2069, 2072 }, // 15 IIC_iCMPsr
  { 1, 362, 364, 2072, 2073 }, // 16 IIC_iCMPi_WriteCMP_ReadALU
  { 1, 362, 364, 2073, 2075 }, // 17 IIC_iCMPr_WriteCMP_ReadALU_ReadALU
  { 1, 365, 367, 2075, 2078 }, // 18 IIC_iCMPsr_WriteCMPsi_ReadALU
  { 1, 365, 367, 2078, 2081 }, // 19 IIC_iCMPsr_WriteCMPsr_ReadALU
  { 1, 367, 369, 2081, 2083 }, // 20 IIC_fpUNA64
  { 1, 367, 369, 2083, 2085 }, // 21 IIC_fpUNA32
  { 1, 362, 364, 2085, 2086 }, // 22 IIC_fpSTAT
  { -1, 369, 374, 2086, 2091 }, // 23 IIC_iLoad_m
  { -1, 374, 380, 2091, 2096 }, // 24 IIC_iLoad_mu
  { -1, 369, 374, 2096, 2101 }, // 25 IIC_iLoad_mBr
  { 1, 380, 384, 2101, 2105 }, // 26 IIC_iLoad_bh_ru
  { 1, 384, 388, 2105, 2108 }, // 27 IIC_iLoad_bh_iu
  { 1, 388, 390, 2108, 2111 }, // 28 IIC_iLoad_bh_r
  { 1, 390, 394, 2111, 2114 }, // 29 IIC_iLoad_bh_si
  { 1, 394, 400, 2114, 2118 }, // 30 IIC_iLoad_d_r
  { 1, 400, 407, 2118, 2122 }, // 31 IIC_iLoad_d_ru
  { 1, 380, 384, 2122, 2126 }, // 32 IIC_iLoad_ru
  { 1, 384, 388, 2126, 2129 }, // 33 IIC_iLoad_iu
  { 1, 388, 390, 2129, 2132 }, // 34 IIC_iLoad_r
  { 1, 390, 394, 2132, 2135 }, // 35 IIC_iLoad_si
  { 1, 362, 364, 2135, 2137 }, // 36 IIC_iALUi
  { 1, 367, 369, 2137, 2141 }, // 37 IIC_iMAC32
  { 1, 362, 364, 2141, 2142 }, // 38 IIC_iCMOVi
  { 1, 362, 364, 2142, 2143 }, // 39 IIC_iMOVi
  { 1, 407, 411, 2143, 2144 }, // 40 IIC_iCMOVix2
  { 1, 362, 364, 2144, 2146 }, // 41 IIC_iCMOVr
  { 1, 362, 364, 2146, 2149 }, // 42 IIC_iCMOVsr
  { 1, 407, 411, 2149, 2150 }, // 43 IIC_iMOVix2
  { 1, 411, 415, 2150, 2151 }, // 44 IIC_iMOVix2addpc
  { 1, 415, 419, 2151, 2152 }, // 45 IIC_iMOVix2ld
  { 1, 362, 364, 2152, 2153 }, // 46 IIC_iMOVr
  { 1, 362, 364, 2153, 2154 }, // 47 IIC_iMOVsr
  { 1, 362, 364, 2154, 2155 }, // 48 IIC_iMOVsi
  { 1, 367, 369, 2155, 2158 }, // 49 IIC_iMUL32
  { 1, 362, 364, 2158, 2159 }, // 50 IIC_iMVNi
  { 1, 362, 364, 2159, 2160 }, // 51 IIC_iMVNr
  { 1, 362, 364, 2160, 2161 }, // 52 IIC_iMVNsr
  { 1, 362, 364, 2161, 2164 }, // 53 IIC_iALUr
  { 1, 388, 390, 2164, 2167 }, // 54 IIC_iStore_r
  { 1, 388, 390, 2167, 2170 }, // 55 IIC_iStore_bh_r
  { 1, 362, 364, 2170, 2173 }, // 56 IIC_iALUsi_WriteALUsi_ReadALU
  { 1, 362, 364, 2173, 2176 }, // 57 IIC_iBITsi_WriteALUsi_ReadALU
  { 1, 364, 365, 2176, 2178 }, // 58 IIC_Preload
  { 1, 419, 422, 2178, 2181 }, // 59 IIC_iDIV
  { 1, 367, 369, 2181, 2185 }, // 60 IIC_iMAC16
  { 1, 422, 429, 2185, 2189 }, // 61 IIC_iMAC64
  { 1, 367, 369, 2189, 2192 }, // 62 IIC_iMUL16
  { 1, 429, 435, 2192, 2196 }, // 63 IIC_iMUL64
  { -1, 435, 444, 0, 0 }, // 64 IIC_iStore_m
  { -1, 435, 444, 2196, 2197 }, // 65 IIC_iStore_mu
  { 1, 384, 388, 2197, 2201 }, // 66 IIC_iStore_bh_ru
  { 1, 384, 388, 2201, 2204 }, // 67 IIC_iStore_bh_iu
  { 1, 384, 388, 2204, 2208 }, // 68 IIC_iStore_ru
  { 1, 390, 394, 2208, 2211 }, // 69 IIC_iStore_bh_si
  { 1, 444, 450, 2211, 2214 }, // 70 IIC_iStore_d_r
  { 1, 384, 388, 2214, 2218 }, // 71 IIC_iStore_d_ru
  { 1, 384, 388, 2218, 2221 }, // 72 IIC_iStore_iu
  { 1, 390, 394, 2221, 2224 }, // 73 IIC_iStore_si
  { 1, 362, 364, 2224, 2227 }, // 74 IIC_iEXTAr
  { 1, 362, 364, 2227, 2229 }, // 75 IIC_iEXTr
  { 1, 362, 364, 2229, 2230 }, // 76 IIC_iTSTi_WriteCMP_ReadALU
  { 1, 362, 364, 2230, 2232 }, // 77 IIC_iTSTr_WriteCMP_ReadALU_ReadALU
  { 1, 365, 367, 2232, 2235 }, // 78 IIC_iTSTsr_WriteCMPsi_ReadALU
  { 1, 365, 367, 2235, 2238 }, // 79 IIC_iTSTsr_WriteCMPsr_ReadALU
  { 1, 367, 369, 2238, 2242 }, // 80 IIC_VABAD
  { 1, 367, 369, 2242, 2246 }, // 81 IIC_VABAQ
  { 1, 367, 369, 2246, 2249 }, // 82 IIC_VSUBi4Q
  { 1, 367, 369, 2249, 2252 }, // 83 IIC_VBIND
  { 1, 367, 369, 2252, 2255 }, // 84 IIC_VBINQ
  { 1, 367, 369, 2255, 2258 }, // 85 IIC_VSUBi4D
  { 1, 367, 369, 2258, 2260 }, // 86 IIC_VUNAD
  { 1, 367, 369, 2260, 2262 }, // 87 IIC_VUNAQ
  { 1, 367, 369, 2262, 2264 }, // 88 IIC_VUNAiQ
  { 1, 367, 369, 2264, 2266 }, // 89 IIC_VUNAiD
  { 1, 367, 369, 2266, 2269 }, // 90 IIC_fpALU64
  { 1, 367, 369, 2269, 2272 }, // 91 IIC_VBINi4D
  { 1, 367, 369, 2272, 2275 }, // 92 IIC_VSHLiD
  { 1, 367, 369, 2275, 2278 }, // 93 IIC_fpALU32
  { 1, 367, 369, 2278, 2281 }, // 94 IIC_VSUBiD
  { 1, 367, 369, 2281, 2284 }, // 95 IIC_VBINiQ
  { 1, 367, 369, 2284, 2287 }, // 96 IIC_VBINiD
  { 1, 367, 369, 2287, 2288 }, // 97 IIC_VMOVImm
  { 1, 367, 369, 2288, 2291 }, // 98 IIC_VCNTiD
  { 1, 367, 369, 2291, 2294 }, // 99 IIC_VCNTiQ
  { 1, 367, 369, 2294, 2296 }, // 100 IIC_fpCMP64
  { 1, 367, 369, 2296, 2298 }, // 101 IIC_fpCMP32
  { 1, 450, 454, 2298, 2300 }, // 102 IIC_fpCVTSH
  { 1, 454, 456, 2300, 2302 }, // 103 IIC_fpCVTHS
  { 1, 454, 456, 2302, 2304 }, // 104 IIC_fpCVTDS
  { 1, 454, 456, 2304, 2306 }, // 105 IIC_fpCVTSD
  { 1, 456, 459, 2306, 2309 }, // 106 IIC_fpDIV64
  { 1, 459, 462, 2309, 2312 }, // 107 IIC_fpDIV32
  { 1, 462, 466, 2312, 2314 }, // 108 IIC_VMOVIS
  { 1, 454, 456, 2314, 2316 }, // 109 IIC_VMOVD
  { 1, 454, 456, 2316, 2318 }, // 110 IIC_VMOVQ
  { 1, 454, 456, 2318, 2321 }, // 111 IIC_VEXTD
  { 1, 454, 456, 2321, 2324 }, // 112 IIC_VEXTQ
  { 1, 454, 456, 2324, 2327 }, // 113 IIC_fpFMAC64
  { 1, 454, 456, 2327, 2330 }, // 114 IIC_fpFMAC32
  { 1, 454, 456, 2330, 2333 }, // 115 IIC_VFMACD
  { 1, 454, 456, 2333, 2336 }, // 116 IIC_VFMACQ
  { 1, 388, 390, 2336, 2338 }, // 117 IIC_VMOVSI
  { 1, 367, 369, 2338, 2341 }, // 118 IIC_VBINi4Q
  { 0, 0, 0, 0, 0 }, // 119 IIC_VLD1dup
  { 0, 0, 0, 0, 0 }, // 120 IIC_VLD1dupu
  { 0, 0, 0, 0, 0 }, // 121 IIC_VLD1ln
  { 0, 0, 0, 0, 0 }, // 122 IIC_VLD1lnu
  { 0, 0, 0, 0, 0 }, // 123 IIC_VLD1
  { 0, 0, 0, 0, 0 }, // 124 IIC_VLD1x4
  { 0, 0, 0, 0, 0 }, // 125 IIC_VLD1x2u
  { 0, 0, 0, 0, 0 }, // 126 IIC_VLD1x3
  { 0, 0, 0, 0, 0 }, // 127 IIC_VLD1u
  { 0, 0, 0, 0, 0 }, // 128 IIC_VLD1x2
  { 0, 0, 0, 0, 0 }, // 129 IIC_VLD2dup
  { 0, 0, 0, 0, 0 }, // 130 IIC_VLD2dupu
  { 0, 0, 0, 0, 0 }, // 131 IIC_VLD2ln
  { 0, 0, 0, 0, 0 }, // 132 IIC_VLD2lnu
  { 0, 0, 0, 0, 0 }, // 133 IIC_VLD2
  { 0, 0, 0, 0, 0 }, // 134 IIC_VLD2u
  { 0, 0, 0, 0, 0 }, // 135 IIC_VLD2x2
  { 0, 0, 0, 0, 0 }, // 136 IIC_VLD2x2u
  { 0, 0, 0, 0, 0 }, // 137 IIC_VLD3dup
  { 0, 0, 0, 0, 0 }, // 138 IIC_VLD3dupu
  { 0, 0, 0, 0, 0 }, // 139 IIC_VLD3ln
  { 0, 0, 0, 0, 0 }, // 140 IIC_VLD3lnu
  { 0, 0, 0, 0, 0 }, // 141 IIC_VLD3
  { 0, 0, 0, 0, 0 }, // 142 IIC_VLD3u
  { 0, 0, 0, 0, 0 }, // 143 IIC_VLD4dup
  { 0, 0, 0, 0, 0 }, // 144 IIC_VLD4dupu
  { 0, 0, 0, 0, 0 }, // 145 IIC_VLD4ln
  { 0, 0, 0, 0, 0 }, // 146 IIC_VLD4lnu
  { 0, 0, 0, 0, 0 }, // 147 IIC_VLD4
  { 0, 0, 0, 0, 0 }, // 148 IIC_VLD4u
  { -1, 466, 470, 2341, 2346 }, // 149 IIC_fpLoad_mu
  { -1, 388, 390, 2346, 2350 }, // 150 IIC_fpLoad_m
  { 1, 388, 390, 2350, 2352 }, // 151 IIC_fpLoad64
  { 1, 388, 390, 2352, 2354 }, // 152 IIC_fpLoad32
  { 1, 454, 456, 2354, 2357 }, // 153 IIC_fpMAC64
  { 1, 454, 456, 2357, 2361 }, // 154 IIC_VMACi32D
  { 1, 454, 456, 2361, 2365 }, // 155 IIC_VMACi16D
  { 1, 454, 456, 2365, 2368 }, // 156 IIC_fpMAC32
  { 1, 454, 456, 2368, 2371 }, // 157 IIC_VMACD
  { 1, 454, 456, 2371, 2374 }, // 158 IIC_VMACQ
  { 1, 454, 456, 2374, 2378 }, // 159 IIC_VMACi32Q
  { 1, 454, 456, 2378, 2382 }, // 160 IIC_VMACi16Q
  { 1, 388, 390, 2382, 2384 }, // 161 IIC_fpMOVID
  { 1, 367, 369, 2384, 2386 }, // 162 IIC_VQUNAiD
  { 1, 454, 456, 2386, 2388 }, // 163 IIC_VMOVN
  { 1, 470, 474, 2388, 2391 }, // 164 IIC_fpMOVDI
  { 1, 388, 390, 2391, 2393 }, // 165 IIC_fpMOVSI
  { 1, 462, 466, 2393, 2395 }, // 166 IIC_fpMOVIS
  { 1, 454, 456, 2395, 2398 }, // 167 IIC_fpMUL64
  { 1, 454, 456, 2398, 2401 }, // 168 IIC_VMULi16D
  { 1, 454, 456, 2401, 2404 }, // 169 IIC_VMULi32D
  { 1, 454, 456, 2404, 2407 }, // 170 IIC_fpMUL32
  { 1, 454, 456, 2407, 2410 }, // 171 IIC_VFMULD
  { 1, 454, 456, 2410, 2413 }, // 172 IIC_VFMULQ
  { 1, 454, 456, 2413, 2416 }, // 173 IIC_VMULi16Q
  { 1, 454, 456, 2416, 2419 }, // 174 IIC_VMULi32Q
  { 1, 367, 369, 2419, 2422 }, // 175 IIC_VSHLiQ
  { 1, 367, 369, 2422, 2425 }, // 176 IIC_VPALiQ
  { 1, 367, 369, 2425, 2428 }, // 177 IIC_VPALiD
  { 1, 367, 369, 2428, 2431 }, // 178 IIC_VPBIND
  { 1, 367, 369, 2431, 2433 }, // 179 IIC_VQUNAiQ
  { 1, 367, 369, 2433, 2436 }, // 180 IIC_VSHLi4Q
  { 1, 367, 369, 2436, 2439 }, // 181 IIC_VSHLi4D
  { 1, 454, 456, 2439, 2442 }, // 182 IIC_VRECSD
  { 1, 454, 456, 2442, 2445 }, // 183 IIC_VRECSQ
  { 1, 462, 466, 2445, 2447 }, // 184 IIC_VMOVISL
  { 1, 454, 456, 2447, 2449 }, // 185 IIC_fpCVTID
  { 1, 454, 456, 2449, 2451 }, // 186 IIC_fpCVTIS
  { 1, 456, 459, 2451, 2454 }, // 187 IIC_fpSQRT64
  { 1, 459, 462, 2454, 2456 }, // 188 IIC_fpSQRT32
  { 0, 0, 0, 0, 0 }, // 189 IIC_VST1ln
  { 0, 0, 0, 0, 0 }, // 190 IIC_VST1lnu
  { 0, 0, 0, 0, 0 }, // 191 IIC_VST1
  { 0, 0, 0, 0, 0 }, // 192 IIC_VST1x4
  { 0, 0, 0, 0, 0 }, // 193 IIC_VLD1x4u
  { 0, 0, 0, 0, 0 }, // 194 IIC_VST1x3
  { 0, 0, 0, 0, 0 }, // 195 IIC_VLD1x3u
  { 0, 0, 0, 0, 0 }, // 196 IIC_VST1x4u
  { 0, 0, 0, 0, 0 }, // 197 IIC_VST1x3u
  { 0, 0, 0, 0, 0 }, // 198 IIC_VST1x2
  { 0, 0, 0, 0, 0 }, // 199 IIC_VST2ln
  { 0, 0, 0, 0, 0 }, // 200 IIC_VST2lnu
  { 0, 0, 0, 0, 0 }, // 201 IIC_VST2
  { 0, 0, 0, 0, 0 }, // 202 IIC_VST2x2
  { 0, 0, 0, 0, 0 }, // 203 IIC_VST2x2u
  { 0, 0, 0, 0, 0 }, // 204 IIC_VST3ln
  { 0, 0, 0, 0, 0 }, // 205 IIC_VST3lnu
  { 0, 0, 0, 0, 0 }, // 206 IIC_VST3
  { 0, 0, 0, 0, 0 }, // 207 IIC_VST3u
  { 0, 0, 0, 0, 0 }, // 208 IIC_VST4ln
  { 0, 0, 0, 0, 0 }, // 209 IIC_VST4lnu
  { 0, 0, 0, 0, 0 }, // 210 IIC_VST4
  { 0, 0, 0, 0, 0 }, // 211 IIC_VST4u
  { -1, 388, 390, 2456, 2459 }, // 212 IIC_fpStore_m
  { 1, 388, 390, 2459, 2461 }, // 213 IIC_fpStore64
  { 1, 388, 390, 2461, 2463 }, // 214 IIC_fpStore32
  { 1, 367, 369, 2463, 2466 }, // 215 IIC_VSUBiQ
  { 1, 454, 456, 2466, 2469 }, // 216 IIC_VTB1
  { 1, 474, 478, 2469, 2473 }, // 217 IIC_VTB2
  { 1, 478, 484, 2473, 2478 }, // 218 IIC_VTB3
  { 1, 484, 491, 2478, 2484 }, // 219 IIC_VTB4
  { 1, 454, 456, 2484, 2487 }, // 220 IIC_VTBX1
  { 1, 474, 478, 2487, 2491 }, // 221 IIC_VTBX2
  { 1, 478, 484, 2491, 2496 }, // 222 IIC_VTBX3
  { 1, 484, 491, 2496, 2502 }, // 223 IIC_VTBX4
  { 1, 454, 456, 2502, 2504 }, // 224 IIC_fpCVTDI
  { 1, 454, 456, 2504, 2506 }, // 225 IIC_fpCVTSI
  { 1, 478, 484, 2506, 2510 }, // 226 IIC_VPERMD
  { 1, 478, 484, 2510, 2514 }, // 227 IIC_VPERMQ
  { 1, 478, 484, 2514, 2518 }, // 228 IIC_VPERMQ3
  { 1, 362, 364, 2518, 2521 }, // 229 IIC_iALUsi
  { 1, 362, 364, 2521, 2523 }, // 230 IIC_iBITi
  { 1, 362, 364, 2523, 2526 }, // 231 IIC_iBITr
  { 1, 362, 364, 2526, 2529 }, // 232 IIC_iBITsi
  { 1, 362, 364, 2529, 2531 }, // 233 IIC_iUNAr
  { 1, 365, 367, 2531, 2533 }, // 234 IIC_iCMPsi
  { 1, 362, 364, 0, 0 }, // 235 IIC_iALUx
  { 1, 388, 390, 2533, 2535 }, // 236 IIC_iLoad_bh_i
  { 1, 491, 495, 2535, 2538 }, // 237 IIC_iLoad_d_i
  { 1, 388, 390, 2538, 2540 }, // 238 IIC_iLoad_i
  { 1, 495, 498, 2540, 2542 }, // 239 IIC_iLoadiALU
  { 1, 362, 364, 2542, 2544 }, // 240 IIC_iCMOVsi
  { 1, 362, 364, 2544, 2545 }, // 241 IIC_iMVNsi
  { 1, 362, 364, 2545, 2548 }, // 242 IIC_iALUsir
  { 1, 388, 390, 2548, 2550 }, // 243 IIC_iStore_bh_i
  { 1, 388, 390, 2550, 2552 }, // 244 IIC_iStore_i
  { 1, 362, 364, 2552, 2556 }, // 245 IIC_iEXTAsr
  { 1, 362, 364, 2556, 2557 }, // 246 IIC_iTSTi
  { 1, 362, 364, 2557, 2559 }, // 247 IIC_iTSTr
  { 1, 365, 367, 2559, 2561 }, // 248 IIC_iTSTsi
  { -1, 384, 388, 2561, 2564 }, // 249 IIC_iPop
  { -1, 384, 388, 2564, 2567 }, // 250 IIC_iPop_Br
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry ARMWriteProcResTable[] = {
  { 0,  0}, // Invalid
  { 2,  1}, // #1
  { 3,  1}, // #2
  { 1,  1}, // #3
  { 4,  1}, // #4
  { 1,  2}, // #5
  { 5,  1}, // #6
  { 1,  1}, // #7
  { 5,  1}, // #8
  { 2,  3}, // #9
  { 6,  3}, // #10
  { 2,  2}, // #11
  { 2,  2}, // #12
  { 5,  1}, // #13
  { 2,  2}, // #14
  { 6,  2}, // #15
  { 1,  3}, // #16
  { 5,  1}, // #17
  { 1,  1}, // #18
  { 4,  2}, // #19
  { 1,  2}, // #20
  { 4,  2}, // #21
  { 1,  2}, // #22
  { 4,  2}, // #23
  { 5,  1}, // #24
  { 1,  2}, // #25
  { 4,  3}, // #26
  { 5,  2}, // #27
  { 1,  1}, // #28
  { 4,  1}, // #29
  { 5,  1}, // #30
  { 1,  2}, // #31
  { 4,  2}, // #32
  { 5,  2}, // #33
  { 1,  4}, // #34
  { 4,  4}, // #35
  { 5,  3}, // #36
  { 1,  6}, // #37
  { 4,  6}, // #38
  { 5,  5}, // #39
  { 1,  5}, // #40
  { 4,  5}, // #41
  { 5,  4}, // #42
  { 1,  1}, // #43
  { 2,  1}, // #44
  { 5,  1}, // #45
  { 1,  2}, // #46
  { 5,  2}, // #47
  { 1,  3}, // #48
  { 5,  3}, // #49
  { 1,  4}, // #50
  { 5,  4}, // #51
  { 1,  5}, // #52
  { 5,  5}, // #53
  { 1,  6}, // #54
  { 5,  6}, // #55
  { 1,  7}, // #56
  { 5,  7}, // #57
  { 1,  8}, // #58
  { 5,  8}, // #59
  { 1,  1}, // #60
  { 3,  1}, // #61
  { 5,  1}, // #62
  { 1,  2}, // #63
  { 3,  1}, // #64
  { 5,  2}, // #65
  { 1,  3}, // #66
  { 3,  1}, // #67
  { 5,  3}, // #68
  { 1,  4}, // #69
  { 3,  1}, // #70
  { 5,  4}, // #71
  { 1,  5}, // #72
  { 3,  1}, // #73
  { 5,  5}, // #74
  { 1,  6}, // #75
  { 3,  1}, // #76
  { 5,  6}, // #77
  { 1,  7}, // #78
  { 3,  1}, // #79
  { 5,  7}, // #80
  { 1,  8}, // #81
  { 3,  1}, // #82
  { 5,  8}, // #83
  { 1,  3}, // #84
  { 4,  3}, // #85
  { 5,  3}, // #86
  { 1,  4}, // #87
  { 4,  4}, // #88
  { 5,  4}, // #89
  { 1,  5}, // #90
  { 4,  5}, // #91
  { 5,  5}, // #92
  { 1,  6}, // #93
  { 4,  6}, // #94
  { 5,  6}, // #95
  { 1,  7}, // #96
  { 4,  7}, // #97
  { 5,  7}, // #98
  { 1,  8}, // #99
  { 4,  8}, // #100
  { 5,  8}, // #101
  { 1,  3}, // #102
  { 2,  3} // #103
}; // ARMWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry ARMWriteLatencyTable[] = {
  { 0,  0}, // Invalid
  { 1,  0}, // #1 A9WriteALU_A9WriteB_A9WriteFMov_A9WriteI_A9WriteV1_WriteCMP_WriteCMPsi_WriteCMPsr
  { 2,  0}, // #2 WriteALUsi_A9WriteI_A9WriteIsr_A9WriteV2_SwiftWriteP01TwoCycle
  { 3,  0}, // #3 A9WriteALUsr_A9WriteV3_SwiftWriteP01ThreeCycleTwoUops_SwiftWriteP0ThreeCycleThreeUops
  { 4, 83}, // #4 A9WriteLb
  { 2,  0}, // #5 A9WriteAdr
  { 5, 84}, // #6 A9WriteLbsi
  { 2,  0}, // #7 A9WriteAdr
  { 3, 40}, // #8 A9WriteL
  { 3, 57}, // #9 A9WriteLHi
  { 1,  0}, // #10 A9WriteAdr
  { 3, 40}, // #11 A9WriteL
  { 1,  0}, // #12 A9WriteAdr
  { 4, 107}, // #13 A9WriteLsi
  { 1,  0}, // #14 A9WriteAdr
  { 4,  0}, // #15 A9WriteM_A9WriteV4_A9WriteF_A9Write2V4
  { 5,  0}, // #16 A9WriteMHi_A9WriteV5_A9WriteFMulS
  { 5, 40}, // #17 A9WriteL
  { 1,  0}, // #18 A9WriteAdr_A9WriteLfpOp_A9WriteLSfp_A9WriteFMov
  { 1,  0}, // #19 A9WriteS_A9WriteAdr_A9WriteFMov_A9WriteLfpOp_A9WriteLSfp
  { 2,  0}, // #20 A9WriteAdr
  { 1,  0}, // #21 A9WriteS
  { 3,  0}, // #22 A9WriteM16_A9WriteV3
  { 4,  0}, // #23 A9WriteM16Hi_A9WriteV4
  { 3,  0}, // #24 A9WriteAdr
  { 1,  0}, // #25 A9WriteS
  { 6,  0}, // #26 A9WriteV6_A9WriteFMulD
  {25,  0}, // #27 A9WriteFDivD
  {15,  0}, // #28 A9WriteFDivS
  { 9,  0}, // #29 A9WriteV9_A9WriteFMAD_A9Write2V9
  {10,  0}, // #30 A9WriteV10
  { 5,  0}, // #31 A9WriteLfpOp
  { 1,  0}, // #32 A9WriteAdr
  { 6,  0}, // #33 A9WriteLfpOp
  { 1,  0}, // #34 A9WriteAdr
  { 2,  0}, // #35 A9WriteLfpOp_A9WriteAdr
  { 2,  0}, // #36 A9WriteAdr_A9WriteLfpOp
  { 7,  0}, // #37 A9WriteLfpOp_A9Write2V7_A9WriteV7
  { 3,  0}, // #38 A9WriteAdr
  { 9,  0}, // #39 A9WriteLfpOp
  { 5,  0}, // #40 A9WriteAdr
  { 8,  0}, // #41 A9WriteLfpOp_A9WriteFMAS
  { 4,  0}, // #42 A9WriteAdr
  {32,  0}, // #43 A9WriteFSqrtD
  {17,  0}, // #44 A9WriteFSqrtS
  { 3, 40}, // #45 A9WriteL
  { 1,  0}, // #46 A9WriteAdr
  { 1,  0}, // #47 A9WriteALU_A9WriteCycle1
  { 3,  0}, // #48 A9WriteCycle1_A9WriteAdr_A9WriteLfpOp
  { 3,  0}, // #49 A9WriteCycle1_A9WriteLfpOp_A9WriteAdr
  { 1,  0}, // #50 A9WriteAdr
  { 0,  0}, // #51 A9WriteIssue
  { 3,  0}, // #52 A9WriteCycle1
  { 3,  0}, // #53 A9WriteCycle1
  { 4,  0}, // #54 A9WriteCycle1_A9WriteAdr_A9WriteLfpOp
  { 4,  0}, // #55 A9WriteCycle1_A9WriteLfpOp_A9WriteAdr
  { 2,  0}, // #56 A9WriteAdr
  { 0,  0}, // #57 A9WriteIssue
  { 3,  0}, // #58 A9WriteCycle1
  { 3,  0}, // #59 A9WriteCycle1
  { 4,  0}, // #60 A9WriteCycle1
  { 4,  0}, // #61 A9WriteCycle1
  { 5,  0}, // #62 A9WriteCycle1_A9WriteAdr_A9WriteLfpOp
  { 5,  0}, // #63 A9WriteCycle1_A9WriteLfpOp_A9WriteAdr
  { 3,  0}, // #64 A9WriteAdr
  { 0,  0}, // #65 A9WriteIssue
  { 3,  0}, // #66 A9WriteCycle1
  { 3,  0}, // #67 A9WriteCycle1
  { 4,  0}, // #68 A9WriteCycle1
  { 4,  0}, // #69 A9WriteCycle1
  { 5,  0}, // #70 A9WriteCycle1
  { 5,  0}, // #71 A9WriteCycle1
  { 6,  0}, // #72 A9WriteCycle1_A9WriteAdr_A9WriteLfpOp
  { 6,  0}, // #73 A9WriteCycle1_A9WriteLfpOp_A9WriteAdr
  { 4,  0}, // #74 A9WriteAdr
  { 0,  0}, // #75 A9WriteIssue
  { 3,  0}, // #76 A9WriteCycle1
  { 3,  0}, // #77 A9WriteCycle1
  { 4,  0}, // #78 A9WriteCycle1
  { 4,  0}, // #79 A9WriteCycle1
  { 5,  0}, // #80 A9WriteCycle1
  { 5,  0}, // #81 A9WriteCycle1
  { 6,  0}, // #82 A9WriteCycle1
  { 6,  0}, // #83 A9WriteCycle1
  { 7,  0}, // #84 A9WriteCycle1_A9WriteAdr_A9WriteLfpOp
  { 7,  0}, // #85 A9WriteCycle1_A9WriteLfpOp_A9WriteAdr
  { 5,  0}, // #86 A9WriteAdr
  { 0,  0}, // #87 A9WriteIssue
  { 3,  0}, // #88 A9WriteCycle1
  { 3,  0}, // #89 A9WriteCycle1
  { 4,  0}, // #90 A9WriteCycle1
  { 4,  0}, // #91 A9WriteCycle1
  { 5,  0}, // #92 A9WriteCycle1
  { 5,  0}, // #93 A9WriteCycle1
  { 6,  0}, // #94 A9WriteCycle1
  { 6,  0}, // #95 A9WriteCycle1
  { 7,  0}, // #96 A9WriteCycle1
  { 7,  0}, // #97 A9WriteCycle1
  { 8,  0}, // #98 A9WriteCycle1_A9WriteAdr_A9WriteLfpOp
  { 8,  0}, // #99 A9WriteCycle1_A9WriteLfpOp_A9WriteAdr
  { 6,  0}, // #100 A9WriteAdr
  { 0,  0}, // #101 A9WriteIssue
  { 3,  0}, // #102 A9WriteCycle1
  { 3,  0}, // #103 A9WriteCycle1
  { 4,  0}, // #104 A9WriteCycle1
  { 4,  0}, // #105 A9WriteCycle1
  { 5,  0}, // #106 A9WriteCycle1
  { 5,  0}, // #107 A9WriteCycle1
  { 6,  0}, // #108 A9WriteCycle1
  { 6,  0}, // #109 A9WriteCycle1
  { 7,  0}, // #110 A9WriteCycle1
  { 7,  0}, // #111 A9WriteCycle1
  { 8,  0}, // #112 A9WriteCycle1
  { 8,  0}, // #113 A9WriteCycle1
  { 9,  0}, // #114 A9WriteCycle1
  { 9,  0}, // #115 A9WriteCycle1
  { 7,  0}, // #116 A9WriteAdr
  { 0,  0}, // #117 A9WriteIssue
  { 3,  0}, // #118 A9WriteCycle1
  { 3,  0}, // #119 A9WriteCycle1
  { 4,  0}, // #120 A9WriteCycle1
  { 4,  0}, // #121 A9WriteCycle1
  { 5,  0}, // #122 A9WriteCycle1
  { 5,  0}, // #123 A9WriteCycle1
  { 6,  0}, // #124 A9WriteCycle1
  { 6,  0}, // #125 A9WriteCycle1
  { 7,  0}, // #126 A9WriteCycle1
  { 7,  0}, // #127 A9WriteCycle1
  { 8,  0}, // #128 A9WriteCycle1
  { 8,  0}, // #129 A9WriteCycle1
  { 9,  0}, // #130 A9WriteCycle1
  { 9,  0}, // #131 A9WriteCycle1
  {10,  0}, // #132 A9WriteCycle1
  {10,  0}, // #133 A9WriteCycle1
  { 8,  0}, // #134 A9WriteAdr
  { 0,  0}, // #135 A9WriteIssue
  { 3,  0}, // #136 A9WriteCycle1
  { 3,  0}, // #137 A9WriteCycle1
  { 4,  0}, // #138 A9WriteCycle1
  { 4,  0}, // #139 A9WriteCycle1
  { 5,  0}, // #140 A9WriteCycle1
  { 5,  0}, // #141 A9WriteCycle1
  { 6,  0}, // #142 A9WriteCycle1
  { 6,  0}, // #143 A9WriteCycle1
  { 7,  0}, // #144 A9WriteCycle1
  { 7,  0}, // #145 A9WriteCycle1
  { 8,  0}, // #146 A9WriteCycle1
  { 8,  0}, // #147 A9WriteCycle1
  { 9,  0}, // #148 A9WriteCycle1
  { 9,  0}, // #149 A9WriteCycle1
  {10,  0}, // #150 A9WriteCycle1
  {10,  0}, // #151 A9WriteCycle1
  { 2,  0}, // #152 A9WriteAdr
  { 0,  0}, // #153 A9WriteIssue
  { 1,  0}, // #154 A9WriteAdr
  { 3,  0}, // #155 A9WriteCycle1
  { 3,  0}, // #156 A9WriteCycle1
  { 0,  0}, // #157 A9WriteIssue
  { 2,  0}, // #158 A9WriteAdr
  { 3,  0}, // #159 A9WriteCycle1
  { 3,  0}, // #160 A9WriteCycle1
  { 4,  0}, // #161 A9WriteCycle1
  { 4,  0}, // #162 A9WriteCycle1
  { 0,  0}, // #163 A9WriteIssue
  { 3,  0}, // #164 A9WriteAdr
  { 3,  0}, // #165 A9WriteCycle1
  { 3,  0}, // #166 A9WriteCycle1
  { 4,  0}, // #167 A9WriteCycle1
  { 4,  0}, // #168 A9WriteCycle1
  { 5,  0}, // #169 A9WriteCycle1
  { 5,  0}, // #170 A9WriteCycle1
  { 0,  0}, // #171 A9WriteIssue
  { 4,  0}, // #172 A9WriteAdr
  { 3,  0}, // #173 A9WriteCycle1
  { 3,  0}, // #174 A9WriteCycle1
  { 4,  0}, // #175 A9WriteCycle1
  { 4,  0}, // #176 A9WriteCycle1
  { 5,  0}, // #177 A9WriteCycle1
  { 5,  0}, // #178 A9WriteCycle1
  { 6,  0}, // #179 A9WriteCycle1
  { 6,  0}, // #180 A9WriteCycle1
  { 0,  0}, // #181 A9WriteIssue
  { 5,  0}, // #182 A9WriteAdr
  { 3,  0}, // #183 A9WriteCycle1
  { 3,  0}, // #184 A9WriteCycle1
  { 4,  0}, // #185 A9WriteCycle1
  { 4,  0}, // #186 A9WriteCycle1
  { 5,  0}, // #187 A9WriteCycle1
  { 5,  0}, // #188 A9WriteCycle1
  { 6,  0}, // #189 A9WriteCycle1
  { 6,  0}, // #190 A9WriteCycle1
  { 7,  0}, // #191 A9WriteCycle1
  { 7,  0}, // #192 A9WriteCycle1
  { 0,  0}, // #193 A9WriteIssue
  { 6,  0}, // #194 A9WriteAdr
  { 3,  0}, // #195 A9WriteCycle1
  { 3,  0}, // #196 A9WriteCycle1
  { 4,  0}, // #197 A9WriteCycle1
  { 4,  0}, // #198 A9WriteCycle1
  { 5,  0}, // #199 A9WriteCycle1
  { 5,  0}, // #200 A9WriteCycle1
  { 6,  0}, // #201 A9WriteCycle1
  { 6,  0}, // #202 A9WriteCycle1
  { 7,  0}, // #203 A9WriteCycle1
  { 7,  0}, // #204 A9WriteCycle1
  { 8,  0}, // #205 A9WriteCycle1
  { 8,  0}, // #206 A9WriteCycle1
  { 0,  0}, // #207 A9WriteIssue
  { 7,  0}, // #208 A9WriteAdr
  { 3,  0}, // #209 A9WriteCycle1
  { 3,  0}, // #210 A9WriteCycle1
  { 4,  0}, // #211 A9WriteCycle1
  { 4,  0}, // #212 A9WriteCycle1
  { 5,  0}, // #213 A9WriteCycle1
  { 5,  0}, // #214 A9WriteCycle1
  { 6,  0}, // #215 A9WriteCycle1
  { 6,  0}, // #216 A9WriteCycle1
  { 7,  0}, // #217 A9WriteCycle1
  { 7,  0}, // #218 A9WriteCycle1
  { 8,  0}, // #219 A9WriteCycle1
  { 8,  0}, // #220 A9WriteCycle1
  { 9,  0}, // #221 A9WriteCycle1
  { 9,  0}, // #222 A9WriteCycle1
  { 0,  0}, // #223 A9WriteIssue
  { 8,  0}, // #224 A9WriteAdr
  { 3,  0}, // #225 A9WriteCycle1
  { 3,  0}, // #226 A9WriteCycle1
  { 4,  0}, // #227 A9WriteCycle1
  { 4,  0}, // #228 A9WriteCycle1
  { 5,  0}, // #229 A9WriteCycle1
  { 5,  0}, // #230 A9WriteCycle1
  { 6,  0}, // #231 A9WriteCycle1
  { 6,  0}, // #232 A9WriteCycle1
  { 7,  0}, // #233 A9WriteCycle1
  { 7,  0}, // #234 A9WriteCycle1
  { 8,  0}, // #235 A9WriteCycle1
  { 8,  0}, // #236 A9WriteCycle1
  { 9,  0}, // #237 A9WriteCycle1
  { 9,  0}, // #238 A9WriteCycle1
  {10,  0}, // #239 A9WriteCycle1
  {10,  0}, // #240 A9WriteCycle1
  { 0,  0}, // #241 A9WriteIssue
  { 2,  0}, // #242 A9WriteAdr
  { 3,  0}, // #243 A9WriteCycle1
  { 3,  0}, // #244 A9WriteCycle1
  { 4,  0}, // #245 A9WriteCycle1
  { 4,  0}, // #246 A9WriteCycle1
  { 5,  0}, // #247 A9WriteCycle1
  { 5,  0}, // #248 A9WriteCycle1
  { 6,  0}, // #249 A9WriteCycle1
  { 6,  0}, // #250 A9WriteCycle1
  { 7,  0}, // #251 A9WriteCycle1
  { 7,  0}, // #252 A9WriteCycle1
  { 8,  0}, // #253 A9WriteCycle1
  { 8,  0}, // #254 A9WriteCycle1
  { 9,  0}, // #255 A9WriteCycle1
  { 9,  0}, // #256 A9WriteCycle1
  {10,  0}, // #257 A9WriteCycle1
  {10,  0}, // #258 A9WriteCycle1
  { 0,  0}, // #259 A9WriteIssue
  { 3,  0}, // #260 A9WriteCycle1
  { 3,  0}, // #261 A9WriteCycle1
  { 1,  0}, // #262 A9WriteAdr
  { 1,  0}, // #263 A9WriteB
  { 3,  0}, // #264 A9WriteCycle1
  { 3,  0}, // #265 A9WriteCycle1
  { 4,  0}, // #266 A9WriteCycle1
  { 4,  0}, // #267 A9WriteCycle1
  { 2,  0}, // #268 A9WriteAdr
  { 1,  0}, // #269 A9WriteB
  { 3,  0}, // #270 A9WriteCycle1
  { 3,  0}, // #271 A9WriteCycle1
  { 4,  0}, // #272 A9WriteCycle1
  { 4,  0}, // #273 A9WriteCycle1
  { 5,  0}, // #274 A9WriteCycle1
  { 5,  0}, // #275 A9WriteCycle1
  { 3,  0}, // #276 A9WriteAdr
  { 1,  0}, // #277 A9WriteB
  { 3,  0}, // #278 A9WriteCycle1
  { 3,  0}, // #279 A9WriteCycle1
  { 4,  0}, // #280 A9WriteCycle1
  { 4,  0}, // #281 A9WriteCycle1
  { 5,  0}, // #282 A9WriteCycle1
  { 5,  0}, // #283 A9WriteCycle1
  { 6,  0}, // #284 A9WriteCycle1
  { 6,  0}, // #285 A9WriteCycle1
  { 4,  0}, // #286 A9WriteAdr
  { 1,  0}, // #287 A9WriteB
  { 3,  0}, // #288 A9WriteCycle1
  { 3,  0}, // #289 A9WriteCycle1
  { 4,  0}, // #290 A9WriteCycle1
  { 4,  0}, // #291 A9WriteCycle1
  { 5,  0}, // #292 A9WriteCycle1
  { 5,  0}, // #293 A9WriteCycle1
  { 6,  0}, // #294 A9WriteCycle1
  { 6,  0}, // #295 A9WriteCycle1
  { 7,  0}, // #296 A9WriteCycle1
  { 7,  0}, // #297 A9WriteCycle1
  { 5,  0}, // #298 A9WriteAdr
  { 1,  0}, // #299 A9WriteB
  { 3,  0}, // #300 A9WriteCycle1
  { 3,  0}, // #301 A9WriteCycle1
  { 4,  0}, // #302 A9WriteCycle1
  { 4,  0}, // #303 A9WriteCycle1
  { 5,  0}, // #304 A9WriteCycle1
  { 5,  0}, // #305 A9WriteCycle1
  { 6,  0}, // #306 A9WriteCycle1
  { 6,  0}, // #307 A9WriteCycle1
  { 7,  0}, // #308 A9WriteCycle1
  { 7,  0}, // #309 A9WriteCycle1
  { 8,  0}, // #310 A9WriteCycle1
  { 8,  0}, // #311 A9WriteCycle1
  { 6,  0}, // #312 A9WriteAdr
  { 1,  0}, // #313 A9WriteB
  { 3,  0}, // #314 A9WriteCycle1
  { 3,  0}, // #315 A9WriteCycle1
  { 4,  0}, // #316 A9WriteCycle1
  { 4,  0}, // #317 A9WriteCycle1
  { 5,  0}, // #318 A9WriteCycle1
  { 5,  0}, // #319 A9WriteCycle1
  { 6,  0}, // #320 A9WriteCycle1
  { 6,  0}, // #321 A9WriteCycle1
  { 7,  0}, // #322 A9WriteCycle1
  { 7,  0}, // #323 A9WriteCycle1
  { 8,  0}, // #324 A9WriteCycle1
  { 8,  0}, // #325 A9WriteCycle1
  { 9,  0}, // #326 A9WriteCycle1
  { 9,  0}, // #327 A9WriteCycle1
  { 7,  0}, // #328 A9WriteAdr
  { 1,  0}, // #329 A9WriteB
  { 3,  0}, // #330 A9WriteCycle1
  { 3,  0}, // #331 A9WriteCycle1
  { 4,  0}, // #332 A9WriteCycle1
  { 4,  0}, // #333 A9WriteCycle1
  { 5,  0}, // #334 A9WriteCycle1
  { 5,  0}, // #335 A9WriteCycle1
  { 6,  0}, // #336 A9WriteCycle1
  { 6,  0}, // #337 A9WriteCycle1
  { 7,  0}, // #338 A9WriteCycle1
  { 7,  0}, // #339 A9WriteCycle1
  { 8,  0}, // #340 A9WriteCycle1
  { 8,  0}, // #341 A9WriteCycle1
  { 9,  0}, // #342 A9WriteCycle1
  { 9,  0}, // #343 A9WriteCycle1
  {10,  0}, // #344 A9WriteCycle1
  {10,  0}, // #345 A9WriteCycle1
  { 8,  0}, // #346 A9WriteAdr
  { 1,  0}, // #347 A9WriteB
  { 3,  0}, // #348 A9WriteCycle1
  { 3,  0}, // #349 A9WriteCycle1
  { 4,  0}, // #350 A9WriteCycle1
  { 4,  0}, // #351 A9WriteCycle1
  { 5,  0}, // #352 A9WriteCycle1
  { 5,  0}, // #353 A9WriteCycle1
  { 6,  0}, // #354 A9WriteCycle1
  { 6,  0}, // #355 A9WriteCycle1
  { 7,  0}, // #356 A9WriteCycle1
  { 7,  0}, // #357 A9WriteCycle1
  { 8,  0}, // #358 A9WriteCycle1
  { 8,  0}, // #359 A9WriteCycle1
  { 9,  0}, // #360 A9WriteCycle1
  { 9,  0}, // #361 A9WriteCycle1
  {10,  0}, // #362 A9WriteCycle1
  {10,  0}, // #363 A9WriteCycle1
  { 2,  0}, // #364 A9WriteAdr
  { 1,  0}, // #365 A9WriteB
  { 2,  0}, // #366 A9WriteAdr
  { 1,  0}, // #367 A9WriteCycle1
  { 3,  0}, // #368 A9WriteCycle1
  { 2,  0}, // #369 A9WriteCycle1
  { 4,  0}, // #370 A9WriteCycle1
  { 3,  0}, // #371 A9WriteAdr
  { 1,  0}, // #372 A9WriteCycle1
  { 3,  0}, // #373 A9WriteCycle1
  { 2,  0}, // #374 A9WriteCycle1
  { 4,  0}, // #375 A9WriteCycle1
  { 3,  0}, // #376 A9WriteCycle1
  { 5,  0}, // #377 A9WriteCycle1
  { 4,  0}, // #378 A9WriteAdr
  { 1,  0}, // #379 A9WriteCycle1
  { 3,  0}, // #380 A9WriteCycle1
  { 2,  0}, // #381 A9WriteCycle1
  { 4,  0}, // #382 A9WriteCycle1
  { 3,  0}, // #383 A9WriteCycle1
  { 5,  0}, // #384 A9WriteCycle1
  { 4,  0}, // #385 A9WriteCycle1
  { 6,  0}, // #386 A9WriteCycle1
  { 5,  0}, // #387 A9WriteAdr
  { 1,  0}, // #388 A9WriteCycle1
  { 3,  0}, // #389 A9WriteCycle1
  { 2,  0}, // #390 A9WriteCycle1
  { 4,  0}, // #391 A9WriteCycle1
  { 3,  0}, // #392 A9WriteCycle1
  { 5,  0}, // #393 A9WriteCycle1
  { 4,  0}, // #394 A9WriteCycle1
  { 6,  0}, // #395 A9WriteCycle1
  { 5,  0}, // #396 A9WriteCycle1
  { 7,  0}, // #397 A9WriteCycle1
  { 6,  0}, // #398 A9WriteAdr
  { 1,  0}, // #399 A9WriteCycle1
  { 3,  0}, // #400 A9WriteCycle1
  { 2,  0}, // #401 A9WriteCycle1
  { 4,  0}, // #402 A9WriteCycle1
  { 3,  0}, // #403 A9WriteCycle1
  { 5,  0}, // #404 A9WriteCycle1
  { 4,  0}, // #405 A9WriteCycle1
  { 6,  0}, // #406 A9WriteCycle1
  { 5,  0}, // #407 A9WriteCycle1
  { 7,  0}, // #408 A9WriteCycle1
  { 6,  0}, // #409 A9WriteCycle1
  { 8,  0}, // #410 A9WriteCycle1
  { 7,  0}, // #411 A9WriteAdr
  { 1,  0}, // #412 A9WriteCycle1
  { 3,  0}, // #413 A9WriteCycle1
  { 2,  0}, // #414 A9WriteCycle1
  { 4,  0}, // #415 A9WriteCycle1
  { 3,  0}, // #416 A9WriteCycle1
  { 5,  0}, // #417 A9WriteCycle1
  { 4,  0}, // #418 A9WriteCycle1
  { 6,  0}, // #419 A9WriteCycle1
  { 5,  0}, // #420 A9WriteCycle1
  { 7,  0}, // #421 A9WriteCycle1
  { 6,  0}, // #422 A9WriteCycle1
  { 8,  0}, // #423 A9WriteCycle1
  { 7,  0}, // #424 A9WriteCycle1
  { 9,  0}, // #425 A9WriteCycle1
  { 8,  0}, // #426 A9WriteAdr
  { 1,  0}, // #427 A9WriteCycle1
  { 3,  0}, // #428 A9WriteCycle1
  { 2,  0}, // #429 A9WriteCycle1
  { 4,  0}, // #430 A9WriteCycle1
  { 3,  0}, // #431 A9WriteCycle1
  { 5,  0}, // #432 A9WriteCycle1
  { 4,  0}, // #433 A9WriteCycle1
  { 6,  0}, // #434 A9WriteCycle1
  { 5,  0}, // #435 A9WriteCycle1
  { 7,  0}, // #436 A9WriteCycle1
  { 6,  0}, // #437 A9WriteCycle1
  { 8,  0}, // #438 A9WriteCycle1
  { 7,  0}, // #439 A9WriteCycle1
  { 9,  0}, // #440 A9WriteCycle1
  { 8,  0}, // #441 A9WriteCycle1
  {10,  0}, // #442 A9WriteCycle1
  { 2,  0}, // #443 A9WriteAdr
  { 1,  0}, // #444 A9WriteCycle1
  { 3,  0}, // #445 A9WriteCycle1
  { 2,  0}, // #446 A9WriteCycle1
  { 4,  0}, // #447 A9WriteCycle1
  { 5,  0}, // #448 A9WriteCycle1
  { 5,  0}, // #449 A9WriteCycle1
  { 6,  0}, // #450 A9WriteCycle1
  { 6,  0}, // #451 A9WriteCycle1
  { 7,  0}, // #452 A9WriteCycle1
  { 7,  0}, // #453 A9WriteCycle1
  { 8,  0}, // #454 A9WriteCycle1
  { 8,  0}, // #455 A9WriteCycle1
  { 9,  0}, // #456 A9WriteCycle1
  { 9,  0}, // #457 A9WriteCycle1
  {10,  0}, // #458 A9WriteCycle1
  {10,  0}, // #459 A9WriteCycle1
  { 1,  0}, // #460 A9WriteCycle1
  { 3,  0}, // #461 A9WriteCycle1
  { 1,  0}, // #462 A9WriteAdr
  { 1,  0}, // #463 A9WriteCycle1
  { 3,  0}, // #464 A9WriteCycle1
  { 2,  0}, // #465 A9WriteCycle1
  { 4,  0}, // #466 A9WriteCycle1
  { 2,  0}, // #467 A9WriteAdr
  { 1,  0}, // #468 A9WriteCycle1
  { 3,  0}, // #469 A9WriteCycle1
  { 2,  0}, // #470 A9WriteCycle1
  { 4,  0}, // #471 A9WriteCycle1
  { 3,  0}, // #472 A9WriteCycle1
  { 5,  0}, // #473 A9WriteCycle1
  { 3,  0}, // #474 A9WriteAdr
  { 1,  0}, // #475 A9WriteCycle1
  { 3,  0}, // #476 A9WriteCycle1
  { 2,  0}, // #477 A9WriteCycle1
  { 4,  0}, // #478 A9WriteCycle1
  { 3,  0}, // #479 A9WriteCycle1
  { 5,  0}, // #480 A9WriteCycle1
  { 4,  0}, // #481 A9WriteCycle1
  { 6,  0}, // #482 A9WriteCycle1
  { 4,  0}, // #483 A9WriteAdr
  { 1,  0}, // #484 A9WriteCycle1
  { 3,  0}, // #485 A9WriteCycle1
  { 2,  0}, // #486 A9WriteCycle1
  { 4,  0}, // #487 A9WriteCycle1
  { 3,  0}, // #488 A9WriteCycle1
  { 5,  0}, // #489 A9WriteCycle1
  { 4,  0}, // #490 A9WriteCycle1
  { 6,  0}, // #491 A9WriteCycle1
  { 5,  0}, // #492 A9WriteCycle1
  { 7,  0}, // #493 A9WriteCycle1
  { 5,  0}, // #494 A9WriteAdr
  { 1,  0}, // #495 A9WriteCycle1
  { 3,  0}, // #496 A9WriteCycle1
  { 2,  0}, // #497 A9WriteCycle1
  { 4,  0}, // #498 A9WriteCycle1
  { 3,  0}, // #499 A9WriteCycle1
  { 5,  0}, // #500 A9WriteCycle1
  { 4,  0}, // #501 A9WriteCycle1
  { 6,  0}, // #502 A9WriteCycle1
  { 5,  0}, // #503 A9WriteCycle1
  { 7,  0}, // #504 A9WriteCycle1
  { 6,  0}, // #505 A9WriteCycle1
  { 8,  0}, // #506 A9WriteCycle1
  { 6,  0}, // #507 A9WriteAdr
  { 1,  0}, // #508 A9WriteCycle1
  { 3,  0}, // #509 A9WriteCycle1
  { 2,  0}, // #510 A9WriteCycle1
  { 4,  0}, // #511 A9WriteCycle1
  { 3,  0}, // #512 A9WriteCycle1
  { 5,  0}, // #513 A9WriteCycle1
  { 4,  0}, // #514 A9WriteCycle1
  { 6,  0}, // #515 A9WriteCycle1
  { 5,  0}, // #516 A9WriteCycle1
  { 7,  0}, // #517 A9WriteCycle1
  { 6,  0}, // #518 A9WriteCycle1
  { 8,  0}, // #519 A9WriteCycle1
  { 7,  0}, // #520 A9WriteCycle1
  { 9,  0}, // #521 A9WriteCycle1
  { 7,  0}, // #522 A9WriteAdr
  { 1,  0}, // #523 A9WriteCycle1
  { 3,  0}, // #524 A9WriteCycle1
  { 2,  0}, // #525 A9WriteCycle1
  { 4,  0}, // #526 A9WriteCycle1
  { 3,  0}, // #527 A9WriteCycle1
  { 5,  0}, // #528 A9WriteCycle1
  { 4,  0}, // #529 A9WriteCycle1
  { 6,  0}, // #530 A9WriteCycle1
  { 5,  0}, // #531 A9WriteCycle1
  { 7,  0}, // #532 A9WriteCycle1
  { 6,  0}, // #533 A9WriteCycle1
  { 8,  0}, // #534 A9WriteCycle1
  { 7,  0}, // #535 A9WriteCycle1
  { 9,  0}, // #536 A9WriteCycle1
  { 8,  0}, // #537 A9WriteCycle1
  {10,  0}, // #538 A9WriteCycle1
  { 8,  0}, // #539 A9WriteAdr
  { 1,  0}, // #540 A9WriteCycle1
  { 3,  0}, // #541 A9WriteCycle1
  { 2,  0}, // #542 A9WriteCycle1
  { 4,  0}, // #543 A9WriteCycle1
  { 5,  0}, // #544 A9WriteCycle1
  { 5,  0}, // #545 A9WriteCycle1
  { 6,  0}, // #546 A9WriteCycle1
  { 6,  0}, // #547 A9WriteCycle1
  { 7,  0}, // #548 A9WriteCycle1
  { 7,  0}, // #549 A9WriteCycle1
  { 8,  0}, // #550 A9WriteCycle1
  { 8,  0}, // #551 A9WriteCycle1
  { 9,  0}, // #552 A9WriteCycle1
  { 9,  0}, // #553 A9WriteCycle1
  {10,  0}, // #554 A9WriteCycle1
  {10,  0}, // #555 A9WriteCycle1
  { 2,  0} // #556 A9WriteAdr
}; // ARMWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry ARMReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
  {0, 40,  1}, // #1
  {0, 41,  1}, // #2
  {0, 42,  1}, // #3
  {0, 43,  1}, // #4
  {0, 44,  1}, // #5
  {0, 45,  1}, // #6
  {0, 46,  1}, // #7
  {0, 47,  1}, // #8
  {0, 48,  1}, // #9
  {0, 49,  1}, // #10
  {0, 50,  1}, // #11
  {0, 51,  1}, // #12
  {0, 52,  1}, // #13
  {0, 53,  1}, // #14
  {0, 54,  1}, // #15
  {0, 55,  1}, // #16
  {0, 56,  1}, // #17
  {0, 57,  1}, // #18
  {0, 83,  1}, // #19
  {0, 84,  1}, // #20
  {0, 107,  1}, // #21
  {0, 40,  1}, // #22
  {0, 41,  1}, // #23
  {0, 42,  1}, // #24
  {0, 43,  1}, // #25
  {0, 44,  1}, // #26
  {0, 45,  1}, // #27
  {0, 46,  1}, // #28
  {0, 47,  1}, // #29
  {0, 48,  1}, // #30
  {0, 49,  1}, // #31
  {0, 50,  1}, // #32
  {0, 51,  1}, // #33
  {0, 52,  1}, // #34
  {0, 53,  1}, // #35
  {0, 54,  1}, // #36
  {0, 55,  1}, // #37
  {0, 56,  1}, // #38
  {0, 57,  1}, // #39
  {0, 83,  1}, // #40
  {0, 84,  1}, // #41
  {0, 107,  1}, // #42
  {1, 40,  1}, // #43
  {1, 41,  1}, // #44
  {1, 42,  1}, // #45
  {1, 43,  1}, // #46
  {1, 44,  1}, // #47
  {1, 45,  1}, // #48
  {1, 46,  1}, // #49
  {1, 47,  1}, // #50
  {1, 48,  1}, // #51
  {1, 49,  1}, // #52
  {1, 50,  1}, // #53
  {1, 51,  1}, // #54
  {1, 52,  1}, // #55
  {1, 53,  1}, // #56
  {1, 54,  1}, // #57
  {1, 55,  1}, // #58
  {1, 56,  1}, // #59
  {1, 57,  1}, // #60
  {1, 83,  1}, // #61
  {1, 84,  1}, // #62
  {1, 107,  1}, // #63
  {0,  0,  2}, // #64
  {1,  0,  1}, // #65
  {0,  0,  1}, // #66
  {0,  0,  1}, // #67
  {1,  0,  1}, // #68
  {0,  0,  2}, // #69
  {1,  0,  1}, // #70
  {2,  0,  1}, // #71
  {0,  0,  1}, // #72
  {1,  0,  1}, // #73
  {2,  0,  2}, // #74
  {0,  0,  1}, // #75
  {1,  0,  1}, // #76
  {2,  0,  2}, // #77
  {3,  0,  2}, // #78
  {1,  0,  1}, // #79
  {2,  0,  1}, // #80
  {3,  0,  2}, // #81
  {1,  0,  1}, // #82
  {2,  0,  1}, // #83
  {3,  0,  2}, // #84
  {4,  0,  2}, // #85
  {0,  0,  0}, // #86
  {1,  0,  0} // #87
}; // ARMReadAdvanceTable

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc CortexA9ModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, 0, 0,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("IIC_iALUi_WriteALU_ReadALU") 1, 0, 0,  1, 1,  1, 1,  1, 21}, // #1
  {DBGFIELD("IIC_iALUr_WriteALU_ReadALU_ReadALU") 1, 0, 0,  1, 1,  1, 1, 22, 42}, // #2
  {DBGFIELD("IIC_iALUsr_WriteALUsi_ReadALU") 1, 0, 0,  1, 1,  2, 1,  1, 21}, // #3
  {DBGFIELD("IIC_iALUsr_WriteALUsr_ReadALUsr") 1, 0, 0,  1, 1,  3, 1,  1, 21}, // #4
  {DBGFIELD("IIC_iALUsr_WriteALUSsr_ReadALUsr") 1, 0, 0,  1, 1,  3, 1,  1, 21}, // #5
  {DBGFIELD("IIC_iBITi_WriteALU_ReadALU") 1, 0, 0,  1, 1,  1, 1,  1, 21}, // #6
  {DBGFIELD("IIC_iBITr_WriteALU_ReadALU_ReadALU") 1, 0, 0,  1, 1,  1, 1, 22, 42}, // #7
  {DBGFIELD("IIC_iBITsr_WriteALUsi_ReadALU") 1, 0, 0,  1, 1,  2, 1,  1, 21}, // #8
  {DBGFIELD("IIC_iBITsr_WriteALUsr_ReadALUsr") 1, 0, 0,  1, 1,  3, 1,  1, 21}, // #9
  {DBGFIELD("IIC_Br")             1, 0, 0,  2, 1,  1, 1,  0, 0}, // #10
  {DBGFIELD("IIC_iUNAsi")         1, 0, 0,  1, 1,  2, 1,  0, 0}, // #11
  {DBGFIELD("IIC_iUNAr_WriteALU") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #12
  {DBGFIELD("IIC_iCMPi")          1, 0, 0,  1, 1,  1, 1,  1, 21}, // #13
  {DBGFIELD("IIC_iCMPr")          1, 0, 0,  1, 1,  1, 1, 22, 42}, // #14
  {DBGFIELD("IIC_iCMPsr")         1, 0, 0,  1, 1,  3, 1,  1, 21}, // #15
  {DBGFIELD("IIC_iCMPi_WriteCMP_ReadALU") 1, 0, 0,  1, 1,  1, 1,  1, 21}, // #16
  {DBGFIELD("IIC_iCMPr_WriteCMP_ReadALU_ReadALU") 1, 0, 0,  1, 1,  1, 1, 22, 42}, // #17
  {DBGFIELD("IIC_iCMPsr_WriteCMPsi_ReadALU") 1, 0, 0,  1, 1,  1, 1,  1, 21}, // #18
  {DBGFIELD("IIC_iCMPsr_WriteCMPsr_ReadALU") 1, 0, 0,  1, 1,  1, 1,  1, 21}, // #19
  {DBGFIELD("IIC_fpUNA64")        1, 0, 0,  3, 2,  1, 1,  0, 0}, // #20
  {DBGFIELD("IIC_fpUNA32")        1, 0, 0,  3, 2,  1, 1,  0, 0}, // #21
  {DBGFIELD("IIC_fpSTAT")         1, 0, 0,  3, 2,  1, 1,  0, 0}, // #22
  {DBGFIELD("IIC_iLoad_m")        65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #23
  {DBGFIELD("IIC_iLoad_mu")       65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #24
  {DBGFIELD("IIC_iLoad_mBr")      65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #25
  {DBGFIELD("IIC_iLoad_bh_ru")    1, 0, 0,  5, 2,  4, 2,  0, 0}, // #26
  {DBGFIELD("IIC_iLoad_bh_iu")    1, 0, 0,  5, 2,  4, 2,  0, 0}, // #27
  {DBGFIELD("IIC_iLoad_bh_r")     1, 0, 0,  5, 2,  4, 2,  0, 0}, // #28
  {DBGFIELD("IIC_iLoad_bh_si")    1, 0, 0,  5, 2,  6, 2,  0, 0}, // #29
  {DBGFIELD("IIC_iLoad_d_r")      1, 0, 0,  7, 2,  8, 3,  0, 0}, // #30
  {DBGFIELD("IIC_iLoad_d_ru")     1, 0, 0,  7, 2,  8, 3,  0, 0}, // #31
  {DBGFIELD("IIC_iLoad_ru")       1, 0, 0,  7, 2, 11, 2,  0, 0}, // #32
  {DBGFIELD("IIC_iLoad_iu")       1, 0, 0,  7, 2, 11, 2,  0, 0}, // #33
  {DBGFIELD("IIC_iLoad_r")        1, 0, 0,  7, 2, 11, 2,  0, 0}, // #34
  {DBGFIELD("IIC_iLoad_si")       1, 0, 0,  7, 2, 13, 2,  0, 0}, // #35
  {DBGFIELD("IIC_iALUi")          1, 0, 0,  1, 1,  1, 1,  1, 21}, // #36
  {DBGFIELD("IIC_iMAC32")         1, 0, 0,  9, 2, 15, 2,  0, 0}, // #37
  {DBGFIELD("IIC_iCMOVi")         1, 0, 0,  1, 1,  1, 1,  0, 0}, // #38
  {DBGFIELD("IIC_iMOVi")          1, 0, 0,  1, 1,  1, 1,  0, 0}, // #39
  {DBGFIELD("IIC_iCMOVix2")       2, 0, 0, 11, 1,  2, 1,  0, 0}, // #40
  {DBGFIELD("IIC_iCMOVr")         1, 0, 0,  1, 1,  1, 1,  0, 0}, // #41
  {DBGFIELD("IIC_iCMOVsr")        1, 0, 0,  1, 1,  2, 1,  0, 0}, // #42
  {DBGFIELD("IIC_iMOVix2")        2, 0, 0, 11, 1,  2, 1,  0, 0}, // #43
  {DBGFIELD("IIC_iMOVix2addpc")   3, 0, 0,  9, 1,  3, 1,  0, 0}, // #44
  {DBGFIELD("IIC_iMOVix2ld")      3, 0, 0, 12, 2, 17, 1,  0, 0}, // #45
  {DBGFIELD("IIC_iMOVr")          1, 0, 0,  1, 1,  1, 1,  0, 0}, // #46
  {DBGFIELD("IIC_iMOVsr")         1, 0, 0,  1, 1,  2, 1,  0, 0}, // #47
  {DBGFIELD("IIC_iMOVsi")         1, 0, 0,  1, 1,  1, 1,  0, 0}, // #48
  {DBGFIELD("IIC_iMUL32")         1, 0, 0,  9, 2, 15, 2,  0, 0}, // #49
  {DBGFIELD("IIC_iMVNi")          1, 0, 0,  1, 1,  1, 1,  0, 0}, // #50
  {DBGFIELD("IIC_iMVNr")          1, 0, 0,  1, 1,  1, 1,  1, 21}, // #51
  {DBGFIELD("IIC_iMVNsr")         1, 0, 0,  1, 1,  2, 1,  0, 0}, // #52
  {DBGFIELD("IIC_iALUr")          1, 0, 0,  1, 1,  1, 1, 22, 42}, // #53
  {DBGFIELD("IIC_iStore_r")       1, 0, 0,  7, 2, 18, 2,  0, 0}, // #54
  {DBGFIELD("IIC_iStore_bh_r")    1, 0, 0,  5, 2, 20, 2,  0, 0}, // #55
  {DBGFIELD("IIC_iALUsi_WriteALUsi_ReadALU") 1, 0, 0,  1, 1,  2, 1,  1, 21}, // #56
  {DBGFIELD("IIC_iBITsi_WriteALUsi_ReadALU") 1, 0, 0,  1, 1,  2, 1,  1, 21}, // #57
  {DBGFIELD("IIC_Preload")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #58
  {DBGFIELD("IIC_iDIV")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #59
  {DBGFIELD("IIC_iMAC16")         1, 0, 0, 14, 2, 22, 2,  0, 0}, // #60
  {DBGFIELD("IIC_iMAC64")         1, 0, 0,  9, 2, 15, 2,  0, 0}, // #61
  {DBGFIELD("IIC_iMUL16")         1, 0, 0, 14, 2, 22, 2,  0, 0}, // #62
  {DBGFIELD("IIC_iMUL64")         1, 0, 0,  9, 2, 15, 2,  0, 0}, // #63
  {DBGFIELD("IIC_iStore_m")       65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #64
  {DBGFIELD("IIC_iStore_mu")      65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #65
  {DBGFIELD("IIC_iStore_bh_ru")   1, 0, 0,  5, 2, 20, 2,  0, 0}, // #66
  {DBGFIELD("IIC_iStore_bh_iu")   1, 0, 0,  5, 2, 20, 2,  0, 0}, // #67
  {DBGFIELD("IIC_iStore_ru")      1, 0, 0,  7, 2, 18, 2,  0, 0}, // #68
  {DBGFIELD("IIC_iStore_bh_si")   1, 0, 0, 16, 2, 24, 2,  0, 0}, // #69
  {DBGFIELD("IIC_iStore_d_r")     1, 0, 0,  7, 2, 18, 2,  0, 0}, // #70
  {DBGFIELD("IIC_iStore_d_ru")    1, 0, 0,  7, 2, 18, 2,  0, 0}, // #71
  {DBGFIELD("IIC_iStore_iu")      1, 0, 0,  7, 2, 18, 2,  0, 0}, // #72
  {DBGFIELD("IIC_iStore_si")      1, 0, 0,  5, 2, 20, 2,  0, 0}, // #73
  {DBGFIELD("IIC_iEXTAr")         1, 0, 0,  1, 1,  3, 1,  0, 0}, // #74
  {DBGFIELD("IIC_iEXTr")          1, 0, 0,  1, 1,  2, 1,  0, 0}, // #75
  {DBGFIELD("IIC_iTSTi_WriteCMP_ReadALU") 1, 0, 0,  1, 1,  1, 1,  1, 21}, // #76
  {DBGFIELD("IIC_iTSTr_WriteCMP_ReadALU_ReadALU") 1, 0, 0,  1, 1,  1, 1, 22, 42}, // #77
  {DBGFIELD("IIC_iTSTsr_WriteCMPsi_ReadALU") 1, 0, 0,  1, 1,  1, 1,  1, 21}, // #78
  {DBGFIELD("IIC_iTSTsr_WriteCMPsr_ReadALU") 1, 0, 0,  1, 1,  1, 1,  1, 21}, // #79
  {DBGFIELD("IIC_VABAD")          1, 0, 0,  3, 2, 26, 1, 64, 2}, // #80
  {DBGFIELD("IIC_VABAQ")          1, 0, 0,  3, 2, 26, 1, 64, 2}, // #81
  {DBGFIELD("IIC_VSUBi4Q")        1, 0, 0,  3, 2, 15, 1, 66, 1}, // #82
  {DBGFIELD("IIC_VBIND")          1, 0, 0,  3, 2, 16, 1, 67, 2}, // #83
  {DBGFIELD("IIC_VBINQ")          1, 0, 0,  3, 2, 26, 1, 67, 2}, // #84
  {DBGFIELD("IIC_VSUBi4D")        1, 0, 0,  3, 2, 15, 1, 66, 1}, // #85
  {DBGFIELD("IIC_VUNAD")          1, 0, 0,  3, 2, 16, 1, 66, 1}, // #86
  {DBGFIELD("IIC_VUNAQ")          1, 0, 0,  3, 2, 26, 1, 66, 1}, // #87
  {DBGFIELD("IIC_VUNAiQ")         1, 0, 0,  3, 2, 15, 1, 66, 1}, // #88
  {DBGFIELD("IIC_VUNAiD")         1, 0, 0,  3, 2, 15, 1, 66, 1}, // #89
  {DBGFIELD("IIC_fpALU64")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #90
  {DBGFIELD("IIC_VBINi4D")        1, 0, 0,  3, 2, 15, 1, 67, 2}, // #91
  {DBGFIELD("IIC_VSHLiD")         1, 0, 0,  3, 2,  3, 1,  0, 0}, // #92
  {DBGFIELD("IIC_fpALU32")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #93
  {DBGFIELD("IIC_VSUBiD")         1, 0, 0,  3, 2,  3, 1, 66, 1}, // #94
  {DBGFIELD("IIC_VBINiQ")         1, 0, 0,  3, 2,  3, 1, 67, 2}, // #95
  {DBGFIELD("IIC_VBINiD")         1, 0, 0,  3, 2,  3, 1, 67, 2}, // #96
  {DBGFIELD("IIC_VMOVImm")        1, 0, 0,  3, 2,  3, 1,  0, 0}, // #97
  {DBGFIELD("IIC_VCNTiD")         1, 0, 0,  3, 2,  3, 1, 66, 1}, // #98
  {DBGFIELD("IIC_VCNTiQ")         1, 0, 0, 18, 2, 15, 1, 64, 1}, // #99
  {DBGFIELD("IIC_fpCMP64")        1, 0, 0,  3, 2,  1, 1,  0, 0}, // #100
  {DBGFIELD("IIC_fpCMP32")        1, 0, 0,  3, 2,  1, 1,  0, 0}, // #101
  {DBGFIELD("IIC_fpCVTSH")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #102
  {DBGFIELD("IIC_fpCVTHS")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #103
  {DBGFIELD("IIC_fpCVTDS")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #104
  {DBGFIELD("IIC_fpCVTSD")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #105
  {DBGFIELD("IIC_fpDIV64")        1, 0, 0,  3, 2, 27, 1,  0, 0}, // #106
  {DBGFIELD("IIC_fpDIV32")        1, 0, 0,  3, 2, 28, 1,  0, 0}, // #107
  {DBGFIELD("IIC_VMOVIS")         1, 0, 0,  3, 2,  1, 1,  0, 0}, // #108
  {DBGFIELD("IIC_VMOVD")          1, 0, 0,  3, 2,  2, 1,  0, 0}, // #109
  {DBGFIELD("IIC_VMOVQ")          1, 0, 0,  3, 2,  2, 1,  0, 0}, // #110
  {DBGFIELD("IIC_VEXTD")          1, 0, 0,  3, 2,  2, 1,  0, 0}, // #111
  {DBGFIELD("IIC_VEXTQ")          2, 0, 0, 20, 2, 22, 2, 65, 1}, // #112
  {DBGFIELD("IIC_fpFMAC64")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #113
  {DBGFIELD("IIC_fpFMAC32")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #114
  {DBGFIELD("IIC_VFMACD")         1, 0, 0,  3, 2, 29, 1, 64, 2}, // #115
  {DBGFIELD("IIC_VFMACQ")         1, 0, 0,  3, 2, 30, 1, 64, 2}, // #116
  {DBGFIELD("IIC_VMOVSI")         1, 0, 0,  3, 2,  2, 1,  0, 0}, // #117
  {DBGFIELD("IIC_VBINi4Q")        1, 0, 0,  3, 2, 15, 1, 67, 2}, // #118
  {DBGFIELD("IIC_VLD1dup")        1, 0, 0, 22, 3, 31, 2,  0, 0}, // #119
  {DBGFIELD("IIC_VLD1dupu")       1, 0, 0, 22, 3, 31, 2,  0, 0}, // #120
  {DBGFIELD("IIC_VLD1ln")         1, 0, 0, 25, 3, 33, 2,  0, 0}, // #121
  {DBGFIELD("IIC_VLD1lnu")        1, 0, 0, 25, 3, 33, 2,  0, 0}, // #122
  {DBGFIELD("IIC_VLD1")           1, 0, 0, 28, 3, 18, 2,  0, 0}, // #123
  {DBGFIELD("IIC_VLD1x4")         1, 0, 0, 31, 3, 35, 2,  0, 0}, // #124
  {DBGFIELD("IIC_VLD1x2u")        1, 0, 0, 28, 3, 18, 2,  0, 0}, // #125
  {DBGFIELD("IIC_VLD1x3")         1, 0, 0, 31, 3, 35, 2,  0, 0}, // #126
  {DBGFIELD("IIC_VLD1u")          1, 0, 0, 28, 3, 18, 2,  0, 0}, // #127
  {DBGFIELD("IIC_VLD1x2")         1, 0, 0, 28, 3, 18, 2,  0, 0}, // #128
  {DBGFIELD("IIC_VLD2dup")        1, 0, 0, 22, 3, 31, 2,  0, 0}, // #129
  {DBGFIELD("IIC_VLD2dupu")       1, 0, 0, 22, 3, 31, 2,  0, 0}, // #130
  {DBGFIELD("IIC_VLD2ln")         1, 0, 0, 25, 3, 33, 2,  0, 0}, // #131
  {DBGFIELD("IIC_VLD2lnu")        1, 0, 0, 25, 3, 33, 2,  0, 0}, // #132
  {DBGFIELD("IIC_VLD2")           1, 0, 0, 22, 3, 31, 2,  0, 0}, // #133
  {DBGFIELD("IIC_VLD2u")          1, 0, 0, 22, 3, 31, 2,  0, 0}, // #134
  {DBGFIELD("IIC_VLD2x2")         1, 0, 0, 25, 3, 33, 2,  0, 0}, // #135
  {DBGFIELD("IIC_VLD2x2u")        1, 0, 0, 25, 3, 33, 2,  0, 0}, // #136
  {DBGFIELD("IIC_VLD3dup")        1, 0, 0, 34, 3, 37, 2,  0, 0}, // #137
  {DBGFIELD("IIC_VLD3dupu")       1, 0, 0, 34, 3, 37, 2,  0, 0}, // #138
  {DBGFIELD("IIC_VLD3ln")         1, 0, 0, 37, 3, 39, 2,  0, 0}, // #139
  {DBGFIELD("IIC_VLD3lnu")        1, 0, 0, 37, 3, 39, 2,  0, 0}, // #140
  {DBGFIELD("IIC_VLD3")           1, 0, 0, 34, 3, 37, 2,  0, 0}, // #141
  {DBGFIELD("IIC_VLD3u")          1, 0, 0, 34, 3, 37, 2,  0, 0}, // #142
  {DBGFIELD("IIC_VLD4dup")        1, 0, 0, 31, 3, 35, 2,  0, 0}, // #143
  {DBGFIELD("IIC_VLD4dupu")       1, 0, 0, 31, 3, 35, 2,  0, 0}, // #144
  {DBGFIELD("IIC_VLD4ln")         1, 0, 0, 40, 3, 41, 2,  0, 0}, // #145
  {DBGFIELD("IIC_VLD4lnu")        1, 0, 0, 40, 3, 41, 2,  0, 0}, // #146
  {DBGFIELD("IIC_VLD4")           1, 0, 0, 40, 3, 41, 2,  0, 0}, // #147
  {DBGFIELD("IIC_VLD4u")          1, 0, 0, 40, 3, 41, 2,  0, 0}, // #148
  {DBGFIELD("IIC_fpLoad_mu")      65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #149
  {DBGFIELD("IIC_fpLoad_m")       65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #150
  {DBGFIELD("IIC_fpLoad64")       1, 0, 0, 28, 3, 18, 2,  0, 0}, // #151
  {DBGFIELD("IIC_fpLoad32")       1, 0, 0, 28, 3, 18, 2,  0, 0}, // #152
  {DBGFIELD("IIC_fpMAC64")        1, 0, 0,  3, 2, 29, 1,  0, 0}, // #153
  {DBGFIELD("IIC_VMACi32D")       1, 0, 0, 18, 2, 37, 1, 64, 2}, // #154
  {DBGFIELD("IIC_VMACi16D")       1, 0, 0,  3, 2, 26, 1, 69, 3}, // #155
  {DBGFIELD("IIC_fpMAC32")        1, 0, 0,  3, 2, 41, 1,  0, 0}, // #156
  {DBGFIELD("IIC_VMACD")          1, 0, 0,  3, 2, 29, 1, 64, 2}, // #157
  {DBGFIELD("IIC_VMACQ")          1, 0, 0,  3, 2, 30, 1, 64, 2}, // #158
  {DBGFIELD("IIC_VMACi32Q")       1, 0, 0, 18, 2, 29, 1, 64, 2}, // #159
  {DBGFIELD("IIC_VMACi16Q")       1, 0, 0,  3, 2, 37, 1, 69, 3}, // #160
  {DBGFIELD("IIC_fpMOVID")        1, 0, 0,  3, 2,  1, 1,  0, 0}, // #161
  {DBGFIELD("IIC_VQUNAiD")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #162
  {DBGFIELD("IIC_VMOVN")          1, 0, 0,  3, 2,  3, 1,  0, 0}, // #163
  {DBGFIELD("IIC_fpMOVDI")        2, 0, 0, 20, 2, 18, 2,  0, 0}, // #164
  {DBGFIELD("IIC_fpMOVSI")        1, 0, 0,  3, 2,  1, 1,  0, 0}, // #165
  {DBGFIELD("IIC_fpMOVIS")        1, 0, 0,  3, 2,  1, 1,  0, 0}, // #166
  {DBGFIELD("IIC_fpMUL64")        1, 0, 0,  3, 2, 26, 1,  0, 0}, // #167
  {DBGFIELD("IIC_VMULi16D")       1, 0, 0,  3, 2, 26, 1, 67, 2}, // #168
  {DBGFIELD("IIC_VMULi32D")       1, 0, 0, 18, 2, 37, 1, 66, 1}, // #169
  {DBGFIELD("IIC_fpMUL32")        1, 0, 0,  3, 2, 16, 1,  0, 0}, // #170
  {DBGFIELD("IIC_VFMULD")         1, 0, 0,  3, 2, 16, 1, 66, 1}, // #171
  {DBGFIELD("IIC_VFMULQ")         1, 0, 0,  3, 2, 26, 1, 66, 1}, // #172
  {DBGFIELD("IIC_VMULi16Q")       1, 0, 0,  3, 2, 37, 1, 67, 2}, // #173
  {DBGFIELD("IIC_VMULi32Q")       1, 0, 0, 18, 2, 29, 1, 66, 1}, // #174
  {DBGFIELD("IIC_VSHLiQ")         1, 0, 0,  3, 2,  3, 1,  0, 0}, // #175
  {DBGFIELD("IIC_VPALiQ")         1, 0, 0,  3, 2, 26, 1, 64, 1}, // #176
  {DBGFIELD("IIC_VPALiD")         1, 0, 0,  3, 2, 26, 1, 64, 1}, // #177
  {DBGFIELD("IIC_VPBIND")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #178
  {DBGFIELD("IIC_VQUNAiQ")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #179
  {DBGFIELD("IIC_VSHLi4Q")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #180
  {DBGFIELD("IIC_VSHLi4D")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #181
  {DBGFIELD("IIC_VRECSD")         1, 0, 0,  3, 2, 29, 1, 67, 2}, // #182
  {DBGFIELD("IIC_VRECSQ")         1, 0, 0,  3, 2, 30, 1, 67, 2}, // #183
  {DBGFIELD("IIC_VMOVISL")        1, 0, 0,  3, 2,  3, 1,  0, 0}, // #184
  {DBGFIELD("IIC_fpCVTID")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #185
  {DBGFIELD("IIC_fpCVTIS")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #186
  {DBGFIELD("IIC_fpSQRT64")       1, 0, 0,  3, 2, 43, 1,  0, 0}, // #187
  {DBGFIELD("IIC_fpSQRT32")       1, 0, 0,  3, 2, 44, 1,  0, 0}, // #188
  {DBGFIELD("IIC_VST1ln")         1, 0, 0, 28, 3, 18, 2,  0, 0}, // #189
  {DBGFIELD("IIC_VST1lnu")        1, 0, 0, 28, 3, 18, 2,  0, 0}, // #190
  {DBGFIELD("IIC_VST1")           1, 0, 0, 28, 3, 18, 2,  0, 0}, // #191
  {DBGFIELD("IIC_VST1x4")         1, 0, 0, 31, 3, 35, 2,  0, 0}, // #192
  {DBGFIELD("IIC_VLD1x4u")        1, 0, 0, 31, 3, 35, 2,  0, 0}, // #193
  {DBGFIELD("IIC_VST1x3")         1, 0, 0, 31, 3, 35, 2,  0, 0}, // #194
  {DBGFIELD("IIC_VLD1x3u")        1, 0, 0, 31, 3, 35, 2,  0, 0}, // #195
  {DBGFIELD("IIC_VST1x4u")        1, 0, 0, 31, 3, 35, 2,  0, 0}, // #196
  {DBGFIELD("IIC_VST1x3u")        1, 0, 0, 31, 3, 35, 2,  0, 0}, // #197
  {DBGFIELD("IIC_VST1x2")         1, 0, 0, 28, 3, 18, 2,  0, 0}, // #198
  {DBGFIELD("IIC_VST2ln")         1, 0, 0, 28, 3, 18, 2,  0, 0}, // #199
  {DBGFIELD("IIC_VST2lnu")        1, 0, 0, 28, 3, 18, 2,  0, 0}, // #200
  {DBGFIELD("IIC_VST2")           1, 0, 0, 28, 3, 18, 2,  0, 0}, // #201
  {DBGFIELD("IIC_VST2x2")         1, 0, 0, 28, 3, 18, 2,  0, 0}, // #202
  {DBGFIELD("IIC_VST2x2u")        1, 0, 0, 28, 3, 18, 2,  0, 0}, // #203
  {DBGFIELD("IIC_VST3ln")         1, 0, 0, 31, 3, 35, 2,  0, 0}, // #204
  {DBGFIELD("IIC_VST3lnu")        1, 0, 0, 31, 3, 35, 2,  0, 0}, // #205
  {DBGFIELD("IIC_VST3")           1, 0, 0, 31, 3, 35, 2,  0, 0}, // #206
  {DBGFIELD("IIC_VST3u")          1, 0, 0, 31, 3, 35, 2,  0, 0}, // #207
  {DBGFIELD("IIC_VST4ln")         1, 0, 0, 31, 3, 35, 2,  0, 0}, // #208
  {DBGFIELD("IIC_VST4lnu")        1, 0, 0, 31, 3, 35, 2,  0, 0}, // #209
  {DBGFIELD("IIC_VST4")           1, 0, 0, 31, 3, 35, 2,  0, 0}, // #210
  {DBGFIELD("IIC_VST4u")          1, 0, 0, 31, 3, 35, 2,  0, 0}, // #211
  {DBGFIELD("IIC_fpStore_m")      1, 0, 0, 28, 3, 18, 2,  0, 0}, // #212
  {DBGFIELD("IIC_fpStore64")      1, 0, 0, 28, 3, 18, 2,  0, 0}, // #213
  {DBGFIELD("IIC_fpStore32")      1, 0, 0, 28, 3, 18, 2,  0, 0}, // #214
  {DBGFIELD("IIC_VSUBiQ")         1, 0, 0,  3, 2,  3, 1, 66, 1}, // #215
  {DBGFIELD("IIC_VTB1")           1, 0, 0,  3, 2,  3, 1, 66, 1}, // #216
  {DBGFIELD("IIC_VTB2")           1, 0, 0,  3, 2,  3, 1, 67, 2}, // #217
  {DBGFIELD("IIC_VTB3")           1, 0, 0,  3, 2, 15, 1, 72, 3}, // #218
  {DBGFIELD("IIC_VTB4")           1, 0, 0,  3, 2, 15, 1, 75, 4}, // #219
  {DBGFIELD("IIC_VTBX1")          1, 0, 0,  3, 2,  3, 1, 65, 1}, // #220
  {DBGFIELD("IIC_VTBX2")          1, 0, 0,  3, 2,  3, 1, 70, 2}, // #221
  {DBGFIELD("IIC_VTBX3")          1, 0, 0,  3, 2, 15, 1, 79, 3}, // #222
  {DBGFIELD("IIC_VTBX4")          1, 0, 0,  3, 2, 15, 1, 82, 4}, // #223
  {DBGFIELD("IIC_fpCVTDI")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #224
  {DBGFIELD("IIC_fpCVTSI")        1, 0, 0,  3, 2, 15, 1,  0, 0}, // #225
  {DBGFIELD("IIC_VPERMD")         1, 0, 0,  3, 2,  2, 1,  0, 0}, // #226
  {DBGFIELD("IIC_VPERMQ")         1, 0, 0,  3, 2,  2, 1,  0, 0}, // #227
  {DBGFIELD("IIC_VPERMQ3")        2, 0, 0, 20, 2, 22, 2, 65, 1}, // #228
  {DBGFIELD("IIC_iALUsi")         1, 0, 0,  1, 1,  2, 1,  1, 21}, // #229
  {DBGFIELD("IIC_iBITi")          1, 0, 0,  1, 1,  1, 1,  0, 0}, // #230
  {DBGFIELD("IIC_iBITr")          1, 0, 0,  1, 1,  1, 1,  0, 0}, // #231
  {DBGFIELD("IIC_iBITsi")         1, 0, 0,  1, 1,  2, 1,  0, 0}, // #232
  {DBGFIELD("IIC_iUNAr")          1, 0, 0,  1, 1,  1, 1,  0, 0}, // #233
  {DBGFIELD("IIC_iCMPsi")         1, 0, 0,  1, 1,  1, 1,  1, 21}, // #234
  {DBGFIELD("IIC_iALUx")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #235
  {DBGFIELD("IIC_iLoad_bh_i")     1, 0, 0,  5, 2,  4, 2,  0, 0}, // #236
  {DBGFIELD("IIC_iLoad_d_i")      1, 0, 0,  7, 2,  8, 3,  0, 0}, // #237
  {DBGFIELD("IIC_iLoad_i")        1, 0, 0,  7, 2, 11, 2,  0, 0}, // #238
  {DBGFIELD("IIC_iLoadiALU")      2, 0, 0, 43, 3, 45, 3,  0, 0}, // #239
  {DBGFIELD("IIC_iCMOVsi")        1, 0, 0,  1, 1,  1, 1,  0, 0}, // #240
  {DBGFIELD("IIC_iMVNsi")         1, 0, 0,  1, 1,  1, 1,  0, 0}, // #241
  {DBGFIELD("IIC_iALUsir")        1, 0, 0,  1, 1,  2, 1, 43, 21}, // #242
  {DBGFIELD("IIC_iStore_bh_i")    1, 0, 0,  5, 2, 20, 2,  0, 0}, // #243
  {DBGFIELD("IIC_iStore_i")       1, 0, 0,  7, 2, 18, 2,  0, 0}, // #244
  {DBGFIELD("IIC_iEXTAsr")        1, 0, 0,  1, 1,  3, 1,  0, 0}, // #245
  {DBGFIELD("IIC_iTSTi")          1, 0, 0,  1, 1,  1, 1,  0, 0}, // #246
  {DBGFIELD("IIC_iTSTr")          1, 0, 0,  1, 1,  1, 1,  0, 0}, // #247
  {DBGFIELD("IIC_iTSTsi")         1, 0, 0,  1, 1,  2, 1,  0, 0}, // #248
  {DBGFIELD("IIC_iPop")           65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #249
  {DBGFIELD("IIC_iPop_Br")        65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #250
  {DBGFIELD("SwiftWriteP01TwoCycle_ReadALU") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #251
  {DBGFIELD("WriteALU_ReadALU")   0, 0, 0,  0, 0,  0, 0,  0, 0}, // #252
  {DBGFIELD("SwiftWriteP01ThreeCycleTwoUops_anonymous.val.3453") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #253
  {DBGFIELD("SwiftWriteP01TwoCycle_NoReadAdvance") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #254
  {DBGFIELD("SwiftWriteP0ThreeCycleThreeUops_anonymous.val.3453") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #255
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_A9WriteAdr_A9WriteIssue") 1, 0, 0,  7, 2, 48, 4,  0, 0}, // #256
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteIssue") 1, 0, 0, 46, 2, 52, 6,  0, 0}, // #257
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 1, 0, 0, 48, 2, 58, 8,  0, 0}, // #258
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 1, 0, 0, 50, 2, 66, 10,  0, 0}, // #259
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 1, 0, 0, 52, 2, 76, 12,  0, 0}, // #260
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 1, 0, 0, 54, 2, 88, 14,  0, 0}, // #261
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 1, 0, 0, 56, 2, 102, 16,  0, 0}, // #262
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 1, 0, 0, 58, 2, 118, 18,  0, 0}, // #263
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteIssue") 1, 0, 0, 46, 2, 136, 18,  0, 0}, // #264
  {DBGFIELD("A9WriteAdr_A9WriteL1_A9WriteL1Hi_A9WriteIssue") 1, 0, 0,  7, 2, 154, 4,  0, 0}, // #265
  {DBGFIELD("(A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 1, 0, 0, 46, 2, 158, 6,  0, 0}, // #266
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 1, 0, 0, 48, 2, 164, 8,  0, 0}, // #267
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 1, 0, 0, 50, 2, 172, 10,  0, 0}, // #268
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 1, 0, 0, 52, 2, 182, 12,  0, 0}, // #269
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 1, 0, 0, 54, 2, 194, 14,  0, 0}, // #270
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 1, 0, 0, 56, 2, 208, 16,  0, 0}, // #271
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 1, 0, 0, 58, 2, 224, 18,  0, 0}, // #272
  {DBGFIELD("(A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 1, 0, 0, 46, 2, 242, 18,  0, 0}, // #273
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_A9WriteAdr_A9WriteB") 1, 0, 0, 60, 3, 260, 4,  0, 0}, // #274
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteB") 1, 0, 0, 63, 3, 264, 6,  0, 0}, // #275
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 1, 0, 0, 66, 3, 270, 8,  0, 0}, // #276
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 1, 0, 0, 69, 3, 278, 10,  0, 0}, // #277
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 1, 0, 0, 72, 3, 288, 12,  0, 0}, // #278
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 1, 0, 0, 75, 3, 300, 14,  0, 0}, // #279
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 1, 0, 0, 78, 3, 314, 16,  0, 0}, // #280
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 1, 0, 0, 81, 3, 330, 18,  0, 0}, // #281
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteB") 1, 0, 0, 63, 3, 348, 18,  0, 0}, // #282
  {DBGFIELD("A9WriteAdr_(A9WriteIssue_A9WriteLfpOp)") 1, 0, 0, 28, 3, 18, 2,  0, 0}, // #283
  {DBGFIELD("(A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)") 1, 0, 0, 31, 3, 35, 2,  0, 0}, // #284
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 1, 0, 0, 84, 3, 48, 2,  0, 0}, // #285
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 1, 0, 0, 87, 3, 54, 2,  0, 0}, // #286
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 1, 0, 0, 90, 3, 62, 2,  0, 0}, // #287
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 1, 0, 0, 93, 3, 72, 2,  0, 0}, // #288
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 1, 0, 0, 96, 3, 84, 2,  0, 0}, // #289
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 1, 0, 0, 99, 3, 98, 2,  0, 0}, // #290
  {DBGFIELD("A9WriteAdr_A9WriteLMfp1_A9WriteL1Hi") 1, 0, 0, 28, 3, 46, 3,  0, 0}, // #291
  {DBGFIELD("(A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)") 2, 0, 0, 31, 3, 366, 5,  0, 0}, // #292
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 3, 0, 0, 84, 3, 371, 7,  0, 0}, // #293
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 4, 0, 0, 87, 3, 378, 9,  0, 0}, // #294
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 5, 0, 0, 90, 3, 387, 11,  0, 0}, // #295
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 6, 0, 0, 93, 3, 398, 13,  0, 0}, // #296
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 7, 0, 0, 96, 3, 411, 15,  0, 0}, // #297
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 8, 0, 0, 99, 3, 426, 17,  0, 0}, // #298
  {DBGFIELD("(A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 2, 0, 0, 31, 3, 443, 17,  0, 0}, // #299
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp)_A9WriteAdr") 1, 0, 0, 28, 3, 18, 2,  0, 0}, // #300
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_A9WriteAdr") 1, 0, 0, 28, 3, 460, 3,  0, 0}, // #301
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr)") 1, 0, 0, 31, 3, 35, 2,  0, 0}, // #302
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)") 1, 0, 0, 84, 3, 48, 2,  0, 0}, // #303
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 1, 0, 0, 87, 3, 54, 2,  0, 0}, // #304
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 1, 0, 0, 90, 3, 62, 2,  0, 0}, // #305
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 1, 0, 0, 93, 3, 72, 2,  0, 0}, // #306
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 1, 0, 0, 96, 3, 84, 2,  0, 0}, // #307
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 1, 0, 0, 99, 3, 98, 2,  0, 0}, // #308
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)") 2, 0, 0, 31, 3, 463, 5,  0, 0}, // #309
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)") 3, 0, 0, 84, 3, 468, 7,  0, 0}, // #310
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 4, 0, 0, 87, 3, 475, 9,  0, 0}, // #311
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 5, 0, 0, 90, 3, 484, 11,  0, 0}, // #312
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 6, 0, 0, 93, 3, 495, 13,  0, 0}, // #313
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 7, 0, 0, 96, 3, 508, 15,  0, 0}, // #314
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 8, 0, 0, 99, 3, 523, 17,  0, 0}, // #315
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)") 2, 0, 0, 31, 3, 540, 17,  0, 0} // #316
}; // CortexA9ModelSchedClasses

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc SwiftModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, 0, 0,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("IIC_iALUi_WriteALU_ReadALU") 1, 0, 0,  1, 1,  1, 1,  0, 1}, // #1
  {DBGFIELD("IIC_iALUr_WriteALU_ReadALU_ReadALU") 1, 0, 0,  1, 1,  1, 1, 86, 2}, // #2
  {DBGFIELD("IIC_iALUsr_WriteALUsi_ReadALU") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #3
  {DBGFIELD("IIC_iALUsr_WriteALUsr_ReadALUsr") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #4
  {DBGFIELD("IIC_iALUsr_WriteALUSsr_ReadALUsr") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #5
  {DBGFIELD("IIC_iBITi_WriteALU_ReadALU") 1, 0, 0,  1, 1,  1, 1,  0, 1}, // #6
  {DBGFIELD("IIC_iBITr_WriteALU_ReadALU_ReadALU") 1, 0, 0,  1, 1,  1, 1, 86, 2}, // #7
  {DBGFIELD("IIC_iBITsr_WriteALUsi_ReadALU") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #8
  {DBGFIELD("IIC_iBITsr_WriteALUsr_ReadALUsr") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #9
  {DBGFIELD("IIC_Br")             0, 0, 0,  0, 0,  0, 0,  0, 0}, // #10
  {DBGFIELD("IIC_iUNAsi")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #11
  {DBGFIELD("IIC_iUNAr_WriteALU") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #12
  {DBGFIELD("IIC_iCMPi")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #13
  {DBGFIELD("IIC_iCMPr")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #14
  {DBGFIELD("IIC_iCMPsr")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #15
  {DBGFIELD("IIC_iCMPi_WriteCMP_ReadALU") 1, 0, 0,  1, 1,  1, 1,  0, 1}, // #16
  {DBGFIELD("IIC_iCMPr_WriteCMP_ReadALU_ReadALU") 1, 0, 0,  1, 1,  1, 1, 86, 2}, // #17
  {DBGFIELD("IIC_iCMPsr_WriteCMPsi_ReadALU") 1, 0, 0,  1, 1,  1, 1,  0, 1}, // #18
  {DBGFIELD("IIC_iCMPsr_WriteCMPsr_ReadALU") 1, 0, 0,  1, 1,  1, 1,  0, 1}, // #19
  {DBGFIELD("IIC_fpUNA64")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #20
  {DBGFIELD("IIC_fpUNA32")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #21
  {DBGFIELD("IIC_fpSTAT")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #22
  {DBGFIELD("IIC_iLoad_m")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #23
  {DBGFIELD("IIC_iLoad_mu")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #24
  {DBGFIELD("IIC_iLoad_mBr")      0, 0, 0,  0, 0,  0, 0,  0, 0}, // #25
  {DBGFIELD("IIC_iLoad_bh_ru")    0, 0, 0,  0, 0,  0, 0,  0, 0}, // #26
  {DBGFIELD("IIC_iLoad_bh_iu")    0, 0, 0,  0, 0,  0, 0,  0, 0}, // #27
  {DBGFIELD("IIC_iLoad_bh_r")     0, 0, 0,  0, 0,  0, 0,  0, 0}, // #28
  {DBGFIELD("IIC_iLoad_bh_si")    0, 0, 0,  0, 0,  0, 0,  0, 0}, // #29
  {DBGFIELD("IIC_iLoad_d_r")      0, 0, 0,  0, 0,  0, 0,  0, 0}, // #30
  {DBGFIELD("IIC_iLoad_d_ru")     0, 0, 0,  0, 0,  0, 0,  0, 0}, // #31
  {DBGFIELD("IIC_iLoad_ru")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #32
  {DBGFIELD("IIC_iLoad_iu")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #33
  {DBGFIELD("IIC_iLoad_r")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #34
  {DBGFIELD("IIC_iLoad_si")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #35
  {DBGFIELD("IIC_iALUi")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #36
  {DBGFIELD("IIC_iMAC32")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #37
  {DBGFIELD("IIC_iCMOVi")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #38
  {DBGFIELD("IIC_iMOVi")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #39
  {DBGFIELD("IIC_iCMOVix2")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #40
  {DBGFIELD("IIC_iCMOVr")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #41
  {DBGFIELD("IIC_iCMOVsr")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #42
  {DBGFIELD("IIC_iMOVix2")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #43
  {DBGFIELD("IIC_iMOVix2addpc")   0, 0, 0,  0, 0,  0, 0,  0, 0}, // #44
  {DBGFIELD("IIC_iMOVix2ld")      0, 0, 0,  0, 0,  0, 0,  0, 0}, // #45
  {DBGFIELD("IIC_iMOVr")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #46
  {DBGFIELD("IIC_iMOVsr")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #47
  {DBGFIELD("IIC_iMOVsi")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #48
  {DBGFIELD("IIC_iMUL32")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #49
  {DBGFIELD("IIC_iMVNi")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #50
  {DBGFIELD("IIC_iMVNr")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #51
  {DBGFIELD("IIC_iMVNsr")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #52
  {DBGFIELD("IIC_iALUr")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #53
  {DBGFIELD("IIC_iStore_r")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #54
  {DBGFIELD("IIC_iStore_bh_r")    0, 0, 0,  0, 0,  0, 0,  0, 0}, // #55
  {DBGFIELD("IIC_iALUsi_WriteALUsi_ReadALU") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #56
  {DBGFIELD("IIC_iBITsi_WriteALUsi_ReadALU") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #57
  {DBGFIELD("IIC_Preload")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #58
  {DBGFIELD("IIC_iDIV")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #59
  {DBGFIELD("IIC_iMAC16")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #60
  {DBGFIELD("IIC_iMAC64")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #61
  {DBGFIELD("IIC_iMUL16")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #62
  {DBGFIELD("IIC_iMUL64")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #63
  {DBGFIELD("IIC_iStore_m")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #64
  {DBGFIELD("IIC_iStore_mu")      0, 0, 0,  0, 0,  0, 0,  0, 0}, // #65
  {DBGFIELD("IIC_iStore_bh_ru")   0, 0, 0,  0, 0,  0, 0,  0, 0}, // #66
  {DBGFIELD("IIC_iStore_bh_iu")   0, 0, 0,  0, 0,  0, 0,  0, 0}, // #67
  {DBGFIELD("IIC_iStore_ru")      0, 0, 0,  0, 0,  0, 0,  0, 0}, // #68
  {DBGFIELD("IIC_iStore_bh_si")   0, 0, 0,  0, 0,  0, 0,  0, 0}, // #69
  {DBGFIELD("IIC_iStore_d_r")     0, 0, 0,  0, 0,  0, 0,  0, 0}, // #70
  {DBGFIELD("IIC_iStore_d_ru")    0, 0, 0,  0, 0,  0, 0,  0, 0}, // #71
  {DBGFIELD("IIC_iStore_iu")      0, 0, 0,  0, 0,  0, 0,  0, 0}, // #72
  {DBGFIELD("IIC_iStore_si")      0, 0, 0,  0, 0,  0, 0,  0, 0}, // #73
  {DBGFIELD("IIC_iEXTAr")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #74
  {DBGFIELD("IIC_iEXTr")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #75
  {DBGFIELD("IIC_iTSTi_WriteCMP_ReadALU") 1, 0, 0,  1, 1,  1, 1,  0, 1}, // #76
  {DBGFIELD("IIC_iTSTr_WriteCMP_ReadALU_ReadALU") 1, 0, 0,  1, 1,  1, 1, 86, 2}, // #77
  {DBGFIELD("IIC_iTSTsr_WriteCMPsi_ReadALU") 1, 0, 0,  1, 1,  1, 1,  0, 1}, // #78
  {DBGFIELD("IIC_iTSTsr_WriteCMPsr_ReadALU") 1, 0, 0,  1, 1,  1, 1,  0, 1}, // #79
  {DBGFIELD("IIC_VABAD")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #80
  {DBGFIELD("IIC_VABAQ")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #81
  {DBGFIELD("IIC_VSUBi4Q")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #82
  {DBGFIELD("IIC_VBIND")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #83
  {DBGFIELD("IIC_VBINQ")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #84
  {DBGFIELD("IIC_VSUBi4D")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #85
  {DBGFIELD("IIC_VUNAD")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #86
  {DBGFIELD("IIC_VUNAQ")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #87
  {DBGFIELD("IIC_VUNAiQ")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #88
  {DBGFIELD("IIC_VUNAiD")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #89
  {DBGFIELD("IIC_fpALU64")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #90
  {DBGFIELD("IIC_VBINi4D")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #91
  {DBGFIELD("IIC_VSHLiD")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #92
  {DBGFIELD("IIC_fpALU32")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #93
  {DBGFIELD("IIC_VSUBiD")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #94
  {DBGFIELD("IIC_VBINiQ")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #95
  {DBGFIELD("IIC_VBINiD")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #96
  {DBGFIELD("IIC_VMOVImm")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #97
  {DBGFIELD("IIC_VCNTiD")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #98
  {DBGFIELD("IIC_VCNTiQ")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #99
  {DBGFIELD("IIC_fpCMP64")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #100
  {DBGFIELD("IIC_fpCMP32")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #101
  {DBGFIELD("IIC_fpCVTSH")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #102
  {DBGFIELD("IIC_fpCVTHS")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #103
  {DBGFIELD("IIC_fpCVTDS")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #104
  {DBGFIELD("IIC_fpCVTSD")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #105
  {DBGFIELD("IIC_fpDIV64")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #106
  {DBGFIELD("IIC_fpDIV32")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #107
  {DBGFIELD("IIC_VMOVIS")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #108
  {DBGFIELD("IIC_VMOVD")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #109
  {DBGFIELD("IIC_VMOVQ")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #110
  {DBGFIELD("IIC_VEXTD")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #111
  {DBGFIELD("IIC_VEXTQ")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #112
  {DBGFIELD("IIC_fpFMAC64")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #113
  {DBGFIELD("IIC_fpFMAC32")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #114
  {DBGFIELD("IIC_VFMACD")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #115
  {DBGFIELD("IIC_VFMACQ")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #116
  {DBGFIELD("IIC_VMOVSI")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #117
  {DBGFIELD("IIC_VBINi4Q")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #118
  {DBGFIELD("IIC_VLD1dup")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #119
  {DBGFIELD("IIC_VLD1dupu")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #120
  {DBGFIELD("IIC_VLD1ln")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #121
  {DBGFIELD("IIC_VLD1lnu")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #122
  {DBGFIELD("IIC_VLD1")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #123
  {DBGFIELD("IIC_VLD1x4")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #124
  {DBGFIELD("IIC_VLD1x2u")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #125
  {DBGFIELD("IIC_VLD1x3")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #126
  {DBGFIELD("IIC_VLD1u")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #127
  {DBGFIELD("IIC_VLD1x2")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #128
  {DBGFIELD("IIC_VLD2dup")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #129
  {DBGFIELD("IIC_VLD2dupu")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #130
  {DBGFIELD("IIC_VLD2ln")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #131
  {DBGFIELD("IIC_VLD2lnu")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #132
  {DBGFIELD("IIC_VLD2")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #133
  {DBGFIELD("IIC_VLD2u")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #134
  {DBGFIELD("IIC_VLD2x2")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #135
  {DBGFIELD("IIC_VLD2x2u")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #136
  {DBGFIELD("IIC_VLD3dup")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #137
  {DBGFIELD("IIC_VLD3dupu")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #138
  {DBGFIELD("IIC_VLD3ln")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #139
  {DBGFIELD("IIC_VLD3lnu")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #140
  {DBGFIELD("IIC_VLD3")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #141
  {DBGFIELD("IIC_VLD3u")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #142
  {DBGFIELD("IIC_VLD4dup")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #143
  {DBGFIELD("IIC_VLD4dupu")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #144
  {DBGFIELD("IIC_VLD4ln")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #145
  {DBGFIELD("IIC_VLD4lnu")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #146
  {DBGFIELD("IIC_VLD4")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #147
  {DBGFIELD("IIC_VLD4u")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #148
  {DBGFIELD("IIC_fpLoad_mu")      0, 0, 0,  0, 0,  0, 0,  0, 0}, // #149
  {DBGFIELD("IIC_fpLoad_m")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #150
  {DBGFIELD("IIC_fpLoad64")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #151
  {DBGFIELD("IIC_fpLoad32")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #152
  {DBGFIELD("IIC_fpMAC64")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #153
  {DBGFIELD("IIC_VMACi32D")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #154
  {DBGFIELD("IIC_VMACi16D")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #155
  {DBGFIELD("IIC_fpMAC32")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #156
  {DBGFIELD("IIC_VMACD")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #157
  {DBGFIELD("IIC_VMACQ")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #158
  {DBGFIELD("IIC_VMACi32Q")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #159
  {DBGFIELD("IIC_VMACi16Q")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #160
  {DBGFIELD("IIC_fpMOVID")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #161
  {DBGFIELD("IIC_VQUNAiD")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #162
  {DBGFIELD("IIC_VMOVN")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #163
  {DBGFIELD("IIC_fpMOVDI")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #164
  {DBGFIELD("IIC_fpMOVSI")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #165
  {DBGFIELD("IIC_fpMOVIS")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #166
  {DBGFIELD("IIC_fpMUL64")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #167
  {DBGFIELD("IIC_VMULi16D")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #168
  {DBGFIELD("IIC_VMULi32D")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #169
  {DBGFIELD("IIC_fpMUL32")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #170
  {DBGFIELD("IIC_VFMULD")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #171
  {DBGFIELD("IIC_VFMULQ")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #172
  {DBGFIELD("IIC_VMULi16Q")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #173
  {DBGFIELD("IIC_VMULi32Q")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #174
  {DBGFIELD("IIC_VSHLiQ")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #175
  {DBGFIELD("IIC_VPALiQ")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #176
  {DBGFIELD("IIC_VPALiD")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #177
  {DBGFIELD("IIC_VPBIND")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #178
  {DBGFIELD("IIC_VQUNAiQ")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #179
  {DBGFIELD("IIC_VSHLi4Q")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #180
  {DBGFIELD("IIC_VSHLi4D")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #181
  {DBGFIELD("IIC_VRECSD")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #182
  {DBGFIELD("IIC_VRECSQ")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #183
  {DBGFIELD("IIC_VMOVISL")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #184
  {DBGFIELD("IIC_fpCVTID")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #185
  {DBGFIELD("IIC_fpCVTIS")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #186
  {DBGFIELD("IIC_fpSQRT64")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #187
  {DBGFIELD("IIC_fpSQRT32")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #188
  {DBGFIELD("IIC_VST1ln")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #189
  {DBGFIELD("IIC_VST1lnu")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #190
  {DBGFIELD("IIC_VST1")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #191
  {DBGFIELD("IIC_VST1x4")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #192
  {DBGFIELD("IIC_VLD1x4u")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #193
  {DBGFIELD("IIC_VST1x3")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #194
  {DBGFIELD("IIC_VLD1x3u")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #195
  {DBGFIELD("IIC_VST1x4u")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #196
  {DBGFIELD("IIC_VST1x3u")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #197
  {DBGFIELD("IIC_VST1x2")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #198
  {DBGFIELD("IIC_VST2ln")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #199
  {DBGFIELD("IIC_VST2lnu")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #200
  {DBGFIELD("IIC_VST2")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #201
  {DBGFIELD("IIC_VST2x2")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #202
  {DBGFIELD("IIC_VST2x2u")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #203
  {DBGFIELD("IIC_VST3ln")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #204
  {DBGFIELD("IIC_VST3lnu")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #205
  {DBGFIELD("IIC_VST3")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #206
  {DBGFIELD("IIC_VST3u")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #207
  {DBGFIELD("IIC_VST4ln")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #208
  {DBGFIELD("IIC_VST4lnu")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #209
  {DBGFIELD("IIC_VST4")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #210
  {DBGFIELD("IIC_VST4u")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #211
  {DBGFIELD("IIC_fpStore_m")      0, 0, 0,  0, 0,  0, 0,  0, 0}, // #212
  {DBGFIELD("IIC_fpStore64")      0, 0, 0,  0, 0,  0, 0,  0, 0}, // #213
  {DBGFIELD("IIC_fpStore32")      0, 0, 0,  0, 0,  0, 0,  0, 0}, // #214
  {DBGFIELD("IIC_VSUBiQ")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #215
  {DBGFIELD("IIC_VTB1")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #216
  {DBGFIELD("IIC_VTB2")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #217
  {DBGFIELD("IIC_VTB3")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #218
  {DBGFIELD("IIC_VTB4")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #219
  {DBGFIELD("IIC_VTBX1")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #220
  {DBGFIELD("IIC_VTBX2")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #221
  {DBGFIELD("IIC_VTBX3")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #222
  {DBGFIELD("IIC_VTBX4")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #223
  {DBGFIELD("IIC_fpCVTDI")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #224
  {DBGFIELD("IIC_fpCVTSI")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #225
  {DBGFIELD("IIC_VPERMD")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #226
  {DBGFIELD("IIC_VPERMQ")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #227
  {DBGFIELD("IIC_VPERMQ3")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #228
  {DBGFIELD("IIC_iALUsi")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #229
  {DBGFIELD("IIC_iBITi")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #230
  {DBGFIELD("IIC_iBITr")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #231
  {DBGFIELD("IIC_iBITsi")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #232
  {DBGFIELD("IIC_iUNAr")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #233
  {DBGFIELD("IIC_iCMPsi")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #234
  {DBGFIELD("IIC_iALUx")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #235
  {DBGFIELD("IIC_iLoad_bh_i")     0, 0, 0,  0, 0,  0, 0,  0, 0}, // #236
  {DBGFIELD("IIC_iLoad_d_i")      0, 0, 0,  0, 0,  0, 0,  0, 0}, // #237
  {DBGFIELD("IIC_iLoad_i")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #238
  {DBGFIELD("IIC_iLoadiALU")      0, 0, 0,  0, 0,  0, 0,  0, 0}, // #239
  {DBGFIELD("IIC_iCMOVsi")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #240
  {DBGFIELD("IIC_iMVNsi")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #241
  {DBGFIELD("IIC_iALUsir")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #242
  {DBGFIELD("IIC_iStore_bh_i")    0, 0, 0,  0, 0,  0, 0,  0, 0}, // #243
  {DBGFIELD("IIC_iStore_i")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #244
  {DBGFIELD("IIC_iEXTAsr")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #245
  {DBGFIELD("IIC_iTSTi")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #246
  {DBGFIELD("IIC_iTSTr")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #247
  {DBGFIELD("IIC_iTSTsi")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #248
  {DBGFIELD("IIC_iPop")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #249
  {DBGFIELD("IIC_iPop_Br")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #250
  {DBGFIELD("SwiftWriteP01TwoCycle_ReadALU") 1, 0, 0,  1, 1,  2, 1,  0, 1}, // #251
  {DBGFIELD("WriteALU_ReadALU")   1, 0, 0,  1, 1,  1, 1,  0, 1}, // #252
  {DBGFIELD("SwiftWriteP01ThreeCycleTwoUops_anonymous.val.3453") 2, 0, 0, 11, 1,  3, 1, 64, 1}, // #253
  {DBGFIELD("SwiftWriteP01TwoCycle_NoReadAdvance") 1, 0, 0,  1, 1,  2, 1,  0, 1}, // #254
  {DBGFIELD("SwiftWriteP0ThreeCycleThreeUops_anonymous.val.3453") 3, 0, 0, 102, 2,  3, 1, 64, 1}, // #255
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_A9WriteAdr_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #256
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #257
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #258
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #259
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #260
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #261
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #262
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #263
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #264
  {DBGFIELD("A9WriteAdr_A9WriteL1_A9WriteL1Hi_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #265
  {DBGFIELD("(A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #266
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #267
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #268
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #269
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #270
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #271
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #272
  {DBGFIELD("(A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #273
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_A9WriteAdr_A9WriteB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #274
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #275
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #276
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #277
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #278
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #279
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #280
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #281
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteB") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #282
  {DBGFIELD("A9WriteAdr_(A9WriteIssue_A9WriteLfpOp)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #283
  {DBGFIELD("(A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #284
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #285
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #286
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #287
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #288
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #289
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #290
  {DBGFIELD("A9WriteAdr_A9WriteLMfp1_A9WriteL1Hi") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #291
  {DBGFIELD("(A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #292
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #293
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #294
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #295
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #296
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #297
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #298
  {DBGFIELD("(A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #299
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp)_A9WriteAdr") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #300
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_A9WriteAdr") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #301
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #302
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #303
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #304
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #305
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #306
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #307
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #308
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #309
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #310
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #311
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #312
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #313
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #314
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #315
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)") 0, 0, 0,  0, 0,  0, 0,  0, 0} // #316
}; // SwiftModelSchedClasses

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

static const llvm::MCSchedModel ARMV6ItinerariesModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMinLatency,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultILPWindow,
  MCSchedModel::DefaultMispredictPenalty,
  1, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  ARMV6Itineraries);

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc CortexA9ModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("A9UnitAGU")       1, 0, 1}, // #1
  {DBGFIELD("A9UnitALU")       2, 0, 1}, // #2
  {DBGFIELD("A9UnitB")         1, 0, 1}, // #3
  {DBGFIELD("A9UnitFP")        1, 0, 0}, // #4
  {DBGFIELD("A9UnitLS")        1, 0, 1}, // #5
  {DBGFIELD("A9UnitMul")       1, 2, 1}  // #6, Super=A9UnitALU
};

static const llvm::MCSchedModel CortexA9Model(
  2, // IssueWidth
  0, // MinLatency
  2, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  10, // ILPWindow
  8, // MispredictPenalty
  2, // Processor ID
  CortexA9ModelProcResources,
  CortexA9ModelSchedClasses,
  7,
  317,
  CortexA9Itineraries);

static const llvm::MCSchedModel CortexA8Model(
  2, // IssueWidth
  MCSchedModel::DefaultMinLatency,
  2, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultILPWindow,
  13, // MispredictPenalty
  3, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  CortexA8Itineraries);

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc SwiftModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("SwiftUnitP0")     1, 2, 1}, // #1, Super=SwiftUnitP01
  {DBGFIELD("SwiftUnitP01")    2, 0, 1}  // #2
};

static const llvm::MCSchedModel SwiftModel(
  3, // IssueWidth
  0, // MinLatency
  3, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultILPWindow,
  14, // MispredictPenalty
  4, // Processor ID
  SwiftModelProcResources,
  SwiftModelSchedClasses,
  3,
  317,
  SwiftItineraries);

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV ARMProcSchedKV[] = {
  { "arm1020e", (const void *)&NoSchedModel },
  { "arm1020t", (const void *)&NoSchedModel },
  { "arm1022e", (const void *)&NoSchedModel },
  { "arm10e", (const void *)&NoSchedModel },
  { "arm10tdmi", (const void *)&NoSchedModel },
  { "arm1136j-s", (const void *)&ARMV6ItinerariesModel },
  { "arm1136jf-s", (const void *)&ARMV6ItinerariesModel },
  { "arm1156t2-s", (const void *)&ARMV6ItinerariesModel },
  { "arm1156t2f-s", (const void *)&ARMV6ItinerariesModel },
  { "arm1176jz-s", (const void *)&ARMV6ItinerariesModel },
  { "arm1176jzf-s", (const void *)&ARMV6ItinerariesModel },
  { "arm710t", (const void *)&NoSchedModel },
  { "arm720t", (const void *)&NoSchedModel },
  { "arm7tdmi", (const void *)&NoSchedModel },
  { "arm7tdmi-s", (const void *)&NoSchedModel },
  { "arm8", (const void *)&NoSchedModel },
  { "arm810", (const void *)&NoSchedModel },
  { "arm9", (const void *)&NoSchedModel },
  { "arm920", (const void *)&NoSchedModel },
  { "arm920t", (const void *)&NoSchedModel },
  { "arm922t", (const void *)&NoSchedModel },
  { "arm926ej-s", (const void *)&NoSchedModel },
  { "arm940t", (const void *)&NoSchedModel },
  { "arm946e-s", (const void *)&NoSchedModel },
  { "arm966e-s", (const void *)&NoSchedModel },
  { "arm968e-s", (const void *)&NoSchedModel },
  { "arm9e", (const void *)&NoSchedModel },
  { "arm9tdmi", (const void *)&NoSchedModel },
  { "cortex-a15", (const void *)&CortexA9Model },
  { "cortex-a5", (const void *)&CortexA8Model },
  { "cortex-a8", (const void *)&CortexA8Model },
  { "cortex-a9", (const void *)&CortexA9Model },
  { "cortex-a9-mp", (const void *)&CortexA9Model },
  { "cortex-m0", (const void *)&ARMV6ItinerariesModel },
  { "cortex-m3", (const void *)&NoSchedModel },
  { "cortex-m4", (const void *)&NoSchedModel },
  { "cortex-r5", (const void *)&CortexA8Model },
  { "ep9312", (const void *)&NoSchedModel },
  { "generic", (const void *)&NoSchedModel },
  { "iwmmxt", (const void *)&NoSchedModel },
  { "mpcore", (const void *)&ARMV6ItinerariesModel },
  { "mpcorenovfp", (const void *)&ARMV6ItinerariesModel },
  { "strongarm", (const void *)&NoSchedModel },
  { "strongarm110", (const void *)&NoSchedModel },
  { "strongarm1100", (const void *)&NoSchedModel },
  { "strongarm1110", (const void *)&NoSchedModel },
  { "swift", (const void *)&SwiftModel },
  { "xscale", (const void *)&NoSchedModel }
};
#undef DBGFIELD
static inline void InitARMMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, ARMFeatureKV, ARMSubTypeKV, 
                      ARMProcSchedKV, ARMWriteProcResTable, ARMWriteLatencyTable, ARMReadAdvanceTable, 
                      ARMStages, ARMOperandCycles, ARMForwardingPaths, 39, 48);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::ARMSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  uint64_t Bits = getFeatureBits();
  if ((Bits & ARM::FeatureAvoidMOVsShOp) != 0) AvoidMOVsShifterOperand = true;
  if ((Bits & ARM::FeatureAvoidPartialCPSR) != 0) AvoidCPSRPartialUpdate = true;
  if ((Bits & ARM::FeatureD16) != 0) HasD16 = true;
  if ((Bits & ARM::FeatureDB) != 0) HasDataBarrier = true;
  if ((Bits & ARM::FeatureDSPThumb2) != 0) Thumb2DSP = true;
  if ((Bits & ARM::FeatureFP16) != 0) HasFP16 = true;
  if ((Bits & ARM::FeatureHWDiv) != 0) HasHardwareDivide = true;
  if ((Bits & ARM::FeatureHWDivARM) != 0) HasHardwareDivideInARM = true;
  if ((Bits & ARM::FeatureHasRAS) != 0) HasRAS = true;
  if ((Bits & ARM::FeatureHasSlowFPVMLx) != 0) SlowFPVMLx = true;
  if ((Bits & ARM::FeatureMClass) != 0) IsMClass = true;
  if ((Bits & ARM::FeatureMP) != 0) HasMPExtension = true;
  if ((Bits & ARM::FeatureNEON) != 0) HasNEON = true;
  if ((Bits & ARM::FeatureNEONForFP) != 0) UseNEONForSinglePrecisionFP = true;
  if ((Bits & ARM::FeatureNaClTrap) != 0) UseNaClTrap = true;
  if ((Bits & ARM::FeatureNoARM) != 0) NoARM = true;
  if ((Bits & ARM::FeaturePref32BitThumb) != 0) Pref32BitThumb = true;
  if ((Bits & ARM::FeatureSlowFPBrcc) != 0) SlowFPBrcc = true;
  if ((Bits & ARM::FeatureT2XtPk) != 0) HasT2ExtractPack = true;
  if ((Bits & ARM::FeatureThumb2) != 0) HasThumb2 = true;
  if ((Bits & ARM::FeatureTrustZone) != 0) HasTrustZone = true;
  if ((Bits & ARM::FeatureVFP2) != 0) HasVFPv2 = true;
  if ((Bits & ARM::FeatureVFP3) != 0) HasVFPv3 = true;
  if ((Bits & ARM::FeatureVFP4) != 0) HasVFPv4 = true;
  if ((Bits & ARM::FeatureVFPOnlySP) != 0) FPOnlySP = true;
  if ((Bits & ARM::FeatureVMLxForwarding) != 0) HasVMLxForwarding = true;
  if ((Bits & ARM::HasV4TOps) != 0) HasV4TOps = true;
  if ((Bits & ARM::HasV5TEOps) != 0) HasV5TEOps = true;
  if ((Bits & ARM::HasV5TOps) != 0) HasV5TOps = true;
  if ((Bits & ARM::HasV6Ops) != 0) HasV6Ops = true;
  if ((Bits & ARM::HasV6T2Ops) != 0) HasV6T2Ops = true;
  if ((Bits & ARM::HasV7Ops) != 0) HasV7Ops = true;
  if ((Bits & ARM::ModeThumb) != 0) InThumbMode = true;
  if ((Bits & ARM::ProcA5) != 0 && ARMProcFamily < CortexA5) ARMProcFamily = CortexA5;
  if ((Bits & ARM::ProcA8) != 0 && ARMProcFamily < CortexA8) ARMProcFamily = CortexA8;
  if ((Bits & ARM::ProcA9) != 0 && ARMProcFamily < CortexA9) ARMProcFamily = CortexA9;
  if ((Bits & ARM::ProcA15) != 0 && ARMProcFamily < CortexA15) ARMProcFamily = CortexA15;
  if ((Bits & ARM::ProcR5) != 0 && ARMProcFamily < CortexR5) ARMProcFamily = CortexR5;
  if ((Bits & ARM::ProcSwift) != 0 && ARMProcFamily < Swift) ARMProcFamily = Swift;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct ARMGenSubtargetInfo : public TargetSubtargetInfo {
  explicit ARMGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV ARMFeatureKV[];
extern const llvm::SubtargetFeatureKV ARMSubTypeKV[];
extern const llvm::SubtargetInfoKV ARMProcSchedKV[];
extern const llvm::MCWriteProcResEntry ARMWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry ARMWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry ARMReadAdvanceTable[];
extern const llvm::InstrStage ARMStages[];
extern const unsigned ARMOperandCycles[];
extern const unsigned ARMForwardingPaths[];
ARMGenSubtargetInfo::ARMGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, ARMFeatureKV, ARMSubTypeKV, 
                      ARMProcSchedKV, ARMWriteProcResTable, ARMWriteLatencyTable, ARMReadAdvanceTable, 
                      ARMStages, ARMOperandCycles, ARMForwardingPaths, 39, 48);
}

unsigned ARMGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {

  const ARMBaseInstrInfo *TII =
    static_cast<const ARMBaseInstrInfo*>(SchedModel->getInstrInfo());
  (void)TII;

  switch (SchedClass) {
  case 3: // IIC_iALUsr_WriteALUsi_ReadALU
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isSwiftFastImmShift(MI)))
        return 251; // SwiftWriteP01TwoCycle_ReadALU
      if ((true))
        return 252; // WriteALU_ReadALU
    }
    break;
  case 4: // IIC_iALUsr_WriteALUsr_ReadALUsr
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isPredicated(MI)))
        return 253; // SwiftWriteP01ThreeCycleTwoUops_anonymous.val.3453
      if ((true))
        return 254; // SwiftWriteP01TwoCycle_NoReadAdvance
    }
    break;
  case 5: // IIC_iALUsr_WriteALUSsr_ReadALUsr
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isPredicated(MI)))
        return 255; // SwiftWriteP0ThreeCycleThreeUops_anonymous.val.3453
      if ((true))
        return 254; // SwiftWriteP01TwoCycle_NoReadAdvance
    }
    break;
  case 8: // IIC_iBITsr_WriteALUsi_ReadALU
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isSwiftFastImmShift(MI)))
        return 251; // SwiftWriteP01TwoCycle_ReadALU
      if ((true))
        return 252; // WriteALU_ReadALU
    }
    break;
  case 9: // IIC_iBITsr_WriteALUsr_ReadALUsr
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isPredicated(MI)))
        return 253; // SwiftWriteP01ThreeCycleTwoUops_anonymous.val.3453
      if ((true))
        return 254; // SwiftWriteP01TwoCycle_NoReadAdvance
    }
    break;
  case 23: // IIC_iLoad_m
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 256; // A9WriteL1_A9WriteL1Hi_A9WriteAdr_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 257; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 258; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 259; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 260; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 261; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 262; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 263; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 264; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteIssue
    }
    break;
  case 24: // IIC_iLoad_mu
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 265; // A9WriteAdr_A9WriteL1_A9WriteL1Hi_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 266; // (A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 267; // (A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 268; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 269; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 270; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 271; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 272; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 273; // (A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
    }
    break;
  case 25: // IIC_iLoad_mBr
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 274; // A9WriteL1_A9WriteL1Hi_A9WriteAdr_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 275; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 276; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 277; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 278; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 279; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 280; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 281; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 282; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteB
    }
    break;
  case 56: // IIC_iALUsi_WriteALUsi_ReadALU
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isSwiftFastImmShift(MI)))
        return 251; // SwiftWriteP01TwoCycle_ReadALU
      if ((true))
        return 252; // WriteALU_ReadALU
    }
    break;
  case 57: // IIC_iBITsi_WriteALUsi_ReadALU
    if (SchedModel->getProcessorID() == 4) { // SwiftModel
      if ((TII->isSwiftFastImmShift(MI)))
        return 251; // SwiftWriteP01TwoCycle_ReadALU
      if ((true))
        return 252; // WriteALU_ReadALU
    }
    break;
  case 64: // IIC_iStore_m
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 265; // A9WriteAdr_A9WriteL1_A9WriteL1Hi_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 266; // (A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 267; // (A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 268; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 269; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 270; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 271; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 272; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 273; // (A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
    }
    break;
  case 65: // IIC_iStore_mu
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 265; // A9WriteAdr_A9WriteL1_A9WriteL1Hi_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 266; // (A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 267; // (A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 268; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 269; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 270; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 271; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 272; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 273; // (A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
    }
    break;
  case 149: // IIC_fpLoad_mu
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 1))
        return 283; // A9WriteAdr_(A9WriteIssue_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 2)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 2))
        return 284; // (A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 3)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 3))
        return 285; // (A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 4)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 4))
        return 286; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 5)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 5))
        return 287; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 6)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 6))
        return 288; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 7)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 7))
        return 289; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 8)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 8))
        return 290; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 0)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 0))
        return 284; // (A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 1)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 1))
        return 291; // A9WriteAdr_A9WriteLMfp1_A9WriteL1Hi
      if ((TII->getNumLDMAddresses(MI) == 2)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 2))
        return 292; // (A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 3)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 3))
        return 293; // (A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 4)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 4))
        return 294; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 5)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 5))
        return 295; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 6)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 6))
        return 296; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 7)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 7))
        return 297; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 8)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 8))
        return 298; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 0)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 0))
        return 299; // (A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
    }
    break;
  case 150: // IIC_fpLoad_m
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 1))
        return 300; // (A9WriteIssue_A9WriteLfpOp)_A9WriteAdr
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 1))
        return 301; // A9WriteLMfp1_A9WriteL1Hi_A9WriteAdr
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 2))
        return 302; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 3))
        return 303; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 4))
        return 304; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 5))
        return 305; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 6))
        return 306; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 7))
        return 307; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 8))
        return 308; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 0))
        return 302; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 2))
        return 309; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 3))
        return 310; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 4))
        return 311; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 5))
        return 312; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 6))
        return 313; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 7))
        return 314; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 8))
        return 315; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 0))
        return 316; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)
    }
    break;
  case 249: // IIC_iPop
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 256; // A9WriteL1_A9WriteL1Hi_A9WriteAdr_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 257; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 258; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 259; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 260; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 261; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 262; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 263; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 264; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteIssue
    }
    break;
  case 250: // IIC_iPop_Br
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 274; // A9WriteL1_A9WriteL1Hi_A9WriteAdr_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 275; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 276; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 277; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 278; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 279; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 280; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 281; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 282; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteB
    }
    break;
  };
  report_fatal_error("Expected a variant SchedClass");
} // ARMGenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

