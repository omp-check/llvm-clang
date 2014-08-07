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
namespace MBlaze {
enum {
  FeatureBarrel =  1ULL << 0,
  FeatureDiv =  1ULL << 1,
  FeatureFPU =  1ULL << 2,
  FeatureMul =  1ULL << 3,
  FeatureMul64 =  1ULL << 4,
  FeaturePatCmp =  1ULL << 5,
  FeatureSqrt =  1ULL << 6
};
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV MBlazeFeatureKV[] = {
  { "barrel", "Implements barrel shifter", MBlaze::FeatureBarrel, 0ULL },
  { "div", "Implements hardware divider", MBlaze::FeatureDiv, 0ULL },
  { "fpu", "Implements floating point unit", MBlaze::FeatureFPU, 0ULL },
  { "mul", "Implements hardware multiplier", MBlaze::FeatureMul, 0ULL },
  { "mul64", "Implements multiplier with 64-bit result", MBlaze::FeatureMul64, 0ULL },
  { "patcmp", "Implements pattern compare instruction", MBlaze::FeaturePatCmp, 0ULL },
  { "sqrt", "Implements sqrt and floating point convert", MBlaze::FeatureSqrt, 0ULL }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV MBlazeSubTypeKV[] = {
  { "mblaze", "Select the mblaze processor", 0ULL, 0ULL },
  { "mblaze3", "Select the mblaze3 processor", 0ULL, 0ULL },
  { "mblaze5", "Select the mblaze5 processor", 0ULL, 0ULL }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "MBlazePipe3Itineraries"
namespace MBlazePipe3ItinerariesFU {
  const unsigned IF = 1 << 0;
  const unsigned ID = 1 << 1;
  const unsigned EX = 1 << 2;
}

// Functional units for "MBlazePipe5Itineraries"
namespace MBlazePipe5ItinerariesFU {
  const unsigned IF = 1 << 0;
  const unsigned ID = 1 << 1;
  const unsigned EX = 1 << 2;
  const unsigned MA = 1 << 3;
  const unsigned WB = 1 << 4;
}

extern const llvm::InstrStage MBlazeStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, MBlazePipe3ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe3ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe3ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1-3
  { 1, MBlazePipe3ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe3ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 2, MBlazePipe3ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4-6
  { 1, MBlazePipe3ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe3ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 6, MBlazePipe3ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7-9
  { 1, MBlazePipe3ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe3ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, MBlazePipe3ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 }, // 10-12
  { 1, MBlazePipe3ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe3ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 30, MBlazePipe3ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 }, // 13-15
  { 1, MBlazePipe3ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe3ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 7, MBlazePipe3ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 }, // 16-18
  { 1, MBlazePipe3ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe3ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 29, MBlazePipe3ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 }, // 19-21
  { 1, MBlazePipe3ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe3ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 34, MBlazePipe3ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 }, // 22-24
  { 1, MBlazePipe5ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::MA, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::WB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 25-29
  { 1, MBlazePipe5ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 },   { 2, MBlazePipe5ItinerariesFU::MA, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::WB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 30-34
  { 1, MBlazePipe5ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 },   { 26, MBlazePipe5ItinerariesFU::MA, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::WB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 35-39
  { 1, MBlazePipe5ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, MBlazePipe5ItinerariesFU::MA, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::WB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 40-44
  { 1, MBlazePipe5ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 },   { 25, MBlazePipe5ItinerariesFU::MA, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::WB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 45-49
  { 1, MBlazePipe5ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 },   { 31, MBlazePipe5ItinerariesFU::MA, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::WB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 50-54
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned MBlazeOperandCycles[] = {
  0, // No itinerary
  2,   1,   1, // 1-3
  3,   1, // 4-5
  1,   1, // 6-7
  1,   1, // 8-9
  1, // 10
  2,   1, // 11-12
  3,   1,   1, // 13-15
  7,   1,   1, // 16-18
  4,   1,   1, // 19-21
  31,   1,   1, // 22-24
  8,   1, // 25-26
  7,   1, // 27-28
  30,   1, // 29-30
  35,   1,   1, // 31-33
  3,   1,   1, // 34-36
  4,   1,   1, // 37-39
  1,   1,   1, // 40-42
  1,   1, // 43-44
  2,   1,   1, // 45-47
  2,   1, // 48-49
  1,   1, // 50-51
  1,   1, // 52-53
  1, // 54
  4,   1, // 55-56
  3,   1,   1, // 57-59
  5,   1,   1, // 60-62
  2,   1,   1, // 63-65
  29,   1,   1, // 66-68
  6,   1, // 69-70
  5,   1, // 71-72
  28,   1, // 73-74
  33,   1,   1, // 75-77
  4,   1,   1, // 78-80
  2,   1,   1, // 81-83
  1,   1,   1, // 84-86
  1,   1, // 87-88
  0 // End operand cycles
};
extern const unsigned MBlazeForwardingPaths[] = {
 0, // No itinerary
 0,  0,  0, // 1-3
 0,  0, // 4-5
 0,  0, // 6-7
 0,  0, // 8-9
 0, // 10
 0,  0, // 11-12
 0,  0,  0, // 13-15
 0,  0,  0, // 16-18
 0,  0,  0, // 19-21
 0,  0,  0, // 22-24
 0,  0, // 25-26
 0,  0, // 27-28
 0,  0, // 29-30
 0,  0,  0, // 31-33
 0,  0,  0, // 34-36
 0,  0,  0, // 37-39
 0,  0,  0, // 40-42
 0,  0, // 43-44
 0,  0,  0, // 45-47
 0,  0, // 48-49
 0,  0, // 50-51
 0,  0, // 52-53
 0, // 54
 0,  0, // 55-56
 0,  0,  0, // 57-59
 0,  0,  0, // 60-62
 0,  0,  0, // 63-65
 0,  0,  0, // 66-68
 0,  0, // 69-70
 0,  0, // 71-72
 0,  0, // 73-74
 0,  0,  0, // 75-77
 0,  0,  0, // 78-80
 0,  0,  0, // 81-83
 0,  0,  0, // 84-86
 0,  0, // 87-88
 0 // End bypass tables
};

static const llvm::InstrItinerary *NoItineraries = 0;

static const llvm::InstrItinerary MBlazePipe3Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 4, 1, 4 }, // 1 IIC_ALU
  { 0, 0, 0, 0, 0 }, // 2 IIC_Pseudo
  { 1, 4, 7, 4, 6 }, // 3 IIC_FSLg
  { 1, 4, 7, 6, 8 }, // 4 IIC_FSLp
  { 1, 1, 4, 8, 10 }, // 5 IIC_BRc
  { 1, 1, 4, 10, 11 }, // 6 IIC_BR
  { 1, 1, 4, 11, 13 }, // 7 IIC_BRl
  { 1, 4, 7, 13, 16 }, // 8 IIC_SHT
  { 1, 7, 10, 16, 19 }, // 9 IIC_FPU
  { 1, 10, 13, 19, 22 }, // 10 IIC_FPUc
  { 1, 13, 16, 22, 25 }, // 11 IIC_FPUd
  { 1, 16, 19, 25, 27 }, // 12 IIC_FPUi
  { 1, 7, 10, 27, 29 }, // 13 IIC_FPUf
  { 1, 19, 22, 29, 31 }, // 14 IIC_FPUs
  { 1, 22, 25, 31, 34 }, // 15 IIC_ALUd
  { 1, 4, 7, 34, 37 }, // 16 IIC_MEMl
  { 1, 10, 13, 37, 40 }, // 17 IIC_ALUm
  { 1, 4, 7, 40, 43 }, // 18 IIC_MEMs
  { 1, 4, 7, 43, 45 }, // 19 IIC_WDC
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary MBlazePipe5Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 25, 30, 45, 48 }, // 1 IIC_ALU
  { 0, 0, 0, 0, 0 }, // 2 IIC_Pseudo
  { 1, 25, 30, 48, 50 }, // 3 IIC_FSLg
  { 1, 25, 30, 50, 52 }, // 4 IIC_FSLp
  { 1, 25, 30, 52, 54 }, // 5 IIC_BRc
  { 1, 25, 30, 54, 55 }, // 6 IIC_BR
  { 1, 25, 30, 55, 57 }, // 7 IIC_BRl
  { 1, 25, 30, 57, 60 }, // 8 IIC_SHT
  { 1, 30, 35, 60, 63 }, // 9 IIC_FPU
  { 1, 25, 30, 63, 66 }, // 10 IIC_FPUc
  { 1, 35, 40, 66, 69 }, // 11 IIC_FPUd
  { 1, 40, 45, 69, 71 }, // 12 IIC_FPUi
  { 1, 30, 35, 71, 73 }, // 13 IIC_FPUf
  { 1, 45, 50, 73, 75 }, // 14 IIC_FPUs
  { 1, 50, 55, 75, 78 }, // 15 IIC_ALUd
  { 1, 25, 30, 78, 81 }, // 16 IIC_MEMl
  { 1, 25, 30, 81, 84 }, // 17 IIC_ALUm
  { 1, 25, 30, 84, 87 }, // 18 IIC_MEMs
  { 1, 30, 35, 87, 89 }, // 19 IIC_WDC
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry MBlazeWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // MBlazeWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry MBlazeWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // MBlazeWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry MBlazeReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // MBlazeReadAdvanceTable

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

static const llvm::MCSchedModel MBlazePipe3ItinerariesModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMinLatency,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultILPWindow,
  MCSchedModel::DefaultMispredictPenalty,
  1, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  MBlazePipe3Itineraries);

static const llvm::MCSchedModel MBlazePipe5ItinerariesModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMinLatency,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultILPWindow,
  MCSchedModel::DefaultMispredictPenalty,
  2, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  MBlazePipe5Itineraries);

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV MBlazeProcSchedKV[] = {
  { "mblaze", (const void *)&NoSchedModel },
  { "mblaze3", (const void *)&MBlazePipe3ItinerariesModel },
  { "mblaze5", (const void *)&MBlazePipe5ItinerariesModel }
};
#undef DBGFIELD
static inline void InitMBlazeMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, MBlazeFeatureKV, MBlazeSubTypeKV, 
                      MBlazeProcSchedKV, MBlazeWriteProcResTable, MBlazeWriteLatencyTable, MBlazeReadAdvanceTable, 
                      MBlazeStages, MBlazeOperandCycles, MBlazeForwardingPaths, 7, 3);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::MBlazeSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  uint64_t Bits = getFeatureBits();
  if ((Bits & MBlaze::FeatureBarrel) != 0) HasBarrel = true;
  if ((Bits & MBlaze::FeatureDiv) != 0) HasDiv = true;
  if ((Bits & MBlaze::FeatureFPU) != 0) HasFPU = true;
  if ((Bits & MBlaze::FeatureMul) != 0) HasMul = true;
  if ((Bits & MBlaze::FeatureMul64) != 0) HasMul64 = true;
  if ((Bits & MBlaze::FeaturePatCmp) != 0) HasPatCmp = true;
  if ((Bits & MBlaze::FeatureSqrt) != 0) HasSqrt = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct MBlazeGenSubtargetInfo : public TargetSubtargetInfo {
  explicit MBlazeGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV MBlazeFeatureKV[];
extern const llvm::SubtargetFeatureKV MBlazeSubTypeKV[];
extern const llvm::SubtargetInfoKV MBlazeProcSchedKV[];
extern const llvm::MCWriteProcResEntry MBlazeWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry MBlazeWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry MBlazeReadAdvanceTable[];
extern const llvm::InstrStage MBlazeStages[];
extern const unsigned MBlazeOperandCycles[];
extern const unsigned MBlazeForwardingPaths[];
MBlazeGenSubtargetInfo::MBlazeGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, MBlazeFeatureKV, MBlazeSubTypeKV, 
                      MBlazeProcSchedKV, MBlazeWriteProcResTable, MBlazeWriteLatencyTable, MBlazeReadAdvanceTable, 
                      MBlazeStages, MBlazeOperandCycles, MBlazeForwardingPaths, 7, 3);
}

unsigned MBlazeGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // MBlazeGenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

