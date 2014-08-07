/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Register Enum Values                                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_ENUM
#undef GET_REGINFO_ENUM
namespace llvm {

class MCRegisterClass;
extern const MCRegisterClass MipsMCRegisterClasses[];

namespace Mips {
enum {
  NoRegister,
  A0 = 1,
  A0_64 = 2,
  A1 = 3,
  A1_64 = 4,
  A2 = 5,
  A2_64 = 6,
  A3 = 7,
  A3_64 = 8,
  AC0 = 9,
  AC0_64 = 10,
  AC1 = 11,
  AC2 = 12,
  AC3 = 13,
  AT = 14,
  AT_64 = 15,
  D0 = 16,
  D0_64 = 17,
  D1 = 18,
  D1_64 = 19,
  D2 = 20,
  D2_64 = 21,
  D3 = 22,
  D3_64 = 23,
  D4 = 24,
  D4_64 = 25,
  D5 = 26,
  D5_64 = 27,
  D6 = 28,
  D6_64 = 29,
  D7 = 30,
  D7_64 = 31,
  D8 = 32,
  D8_64 = 33,
  D9 = 34,
  D9_64 = 35,
  D10 = 36,
  D10_64 = 37,
  D11 = 38,
  D11_64 = 39,
  D12 = 40,
  D12_64 = 41,
  D13 = 42,
  D13_64 = 43,
  D14 = 44,
  D14_64 = 45,
  D15 = 46,
  D15_64 = 47,
  D16_64 = 48,
  D17_64 = 49,
  D18_64 = 50,
  D19_64 = 51,
  D20_64 = 52,
  D21_64 = 53,
  D22_64 = 54,
  D23_64 = 55,
  D24_64 = 56,
  D25_64 = 57,
  D26_64 = 58,
  D27_64 = 59,
  D28_64 = 60,
  D29_64 = 61,
  D30_64 = 62,
  D31_64 = 63,
  DSPCCond = 64,
  DSPCarry = 65,
  DSPEFI = 66,
  DSPOutFlag = 67,
  DSPOutFlag16_19 = 68,
  DSPOutFlag20 = 69,
  DSPOutFlag21 = 70,
  DSPOutFlag22 = 71,
  DSPOutFlag23 = 72,
  DSPPos = 73,
  DSPSCount = 74,
  F0 = 75,
  F1 = 76,
  F2 = 77,
  F3 = 78,
  F4 = 79,
  F5 = 80,
  F6 = 81,
  F7 = 82,
  F8 = 83,
  F9 = 84,
  F10 = 85,
  F11 = 86,
  F12 = 87,
  F13 = 88,
  F14 = 89,
  F15 = 90,
  F16 = 91,
  F17 = 92,
  F18 = 93,
  F19 = 94,
  F20 = 95,
  F21 = 96,
  F22 = 97,
  F23 = 98,
  F24 = 99,
  F25 = 100,
  F26 = 101,
  F27 = 102,
  F28 = 103,
  F29 = 104,
  F30 = 105,
  F31 = 106,
  FCC0 = 107,
  FCR31 = 108,
  FP = 109,
  FP_64 = 110,
  GP = 111,
  GP_64 = 112,
  HI = 113,
  HI1 = 114,
  HI2 = 115,
  HI3 = 116,
  HI64 = 117,
  HWR29 = 118,
  HWR29_64 = 119,
  K0 = 120,
  K0_64 = 121,
  K1 = 122,
  K1_64 = 123,
  LO = 124,
  LO1 = 125,
  LO2 = 126,
  LO3 = 127,
  LO64 = 128,
  PC = 129,
  RA = 130,
  RA_64 = 131,
  S0 = 132,
  S0_64 = 133,
  S1 = 134,
  S1_64 = 135,
  S2 = 136,
  S2_64 = 137,
  S3 = 138,
  S3_64 = 139,
  S4 = 140,
  S4_64 = 141,
  S5 = 142,
  S5_64 = 143,
  S6 = 144,
  S6_64 = 145,
  S7 = 146,
  S7_64 = 147,
  SP = 148,
  SP_64 = 149,
  T0 = 150,
  T0_64 = 151,
  T1 = 152,
  T1_64 = 153,
  T2 = 154,
  T2_64 = 155,
  T3 = 156,
  T3_64 = 157,
  T4 = 158,
  T4_64 = 159,
  T5 = 160,
  T5_64 = 161,
  T6 = 162,
  T6_64 = 163,
  T7 = 164,
  T7_64 = 165,
  T8 = 166,
  T8_64 = 167,
  T9 = 168,
  T9_64 = 169,
  V0 = 170,
  V0_64 = 171,
  V1 = 172,
  V1_64 = 173,
  ZERO = 174,
  ZERO_64 = 175,
  NUM_TARGET_REGS 	// 176
};
}

// Register classes
namespace Mips {
enum {
  CPURegsRegClassID = 0,
  DSPRegsRegClassID = 1,
  FGR32RegClassID = 2,
  CPU16RegsRegClassID = 3,
  HIRegsDSPRegClassID = 4,
  LORegsDSPRegClassID = 5,
  CCRRegClassID = 6,
  CPURARegRegClassID = 7,
  CPUSPRegRegClassID = 8,
  DSPCCRegClassID = 9,
  HIRegsRegClassID = 10,
  HWRegsRegClassID = 11,
  LORegsRegClassID = 12,
  CPU64RegsRegClassID = 13,
  FGR64RegClassID = 14,
  AFGR64RegClassID = 15,
  CPU64Regs_with_sub_32_in_CPU16RegsRegClassID = 16,
  ACRegsDSPRegClassID = 17,
  ACRegsRegClassID = 18,
  CPU64Regs_with_sub_32_in_CPURARegRegClassID = 19,
  CPU64Regs_with_sub_32_in_CPUSPRegRegClassID = 20,
  HIRegs64RegClassID = 21,
  HWRegs64RegClassID = 22,
  LORegs64RegClassID = 23,
  ACRegs128RegClassID = 24
  };
}

// Subregister indices
namespace Mips {
enum {
  NoSubRegister,
  sub_32,	// 1
  sub_dsp16_19,	// 2
  sub_dsp20,	// 3
  sub_dsp21,	// 4
  sub_dsp22,	// 5
  sub_dsp23,	// 6
  sub_fpeven,	// 7
  sub_fpodd,	// 8
  sub_hi,	// 9
  sub_lo,	// 10
  sub_hi_then_sub_32,	// 11
  sub_32_sub_hi_then_sub_32,	// 12
  NUM_TARGET_SUBREGS
};
}
} // End llvm namespace 
#endif // GET_REGINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*MC Register Information                                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_MC_DESC
#undef GET_REGINFO_MC_DESC
namespace llvm {

extern const MCPhysReg MipsRegDiffLists[] = {
  /* 0 */ 0, 0,
  /* 2 */ 1, 1, 1, 1, 1, 0,
  /* 8 */ 48, 1, 1, 1, 1, 0,
  /* 14 */ 4, 1, 0,
  /* 17 */ 13, 1, 0,
  /* 20 */ 15, 1, 0,
  /* 23 */ 17, 1, 0,
  /* 26 */ 19, 1, 0,
  /* 29 */ 21, 1, 0,
  /* 32 */ 23, 1, 0,
  /* 35 */ 25, 1, 0,
  /* 38 */ 27, 1, 0,
  /* 41 */ 29, 1, 0,
  /* 44 */ 31, 1, 0,
  /* 47 */ 33, 1, 0,
  /* 50 */ 35, 1, 0,
  /* 53 */ 37, 1, 0,
  /* 56 */ 39, 1, 0,
  /* 59 */ 41, 1, 0,
  /* 62 */ 16, 1, 42, 1, 0,
  /* 67 */ 15, 2, 42, 1, 0,
  /* 72 */ 43, 1, 0,
  /* 75 */ 13, 2, 44, 1, 0,
  /* 80 */ 11, 2, 46, 1, 0,
  /* 85 */ 9, 2, 48, 1, 0,
  /* 90 */ 7, 2, 50, 1, 0,
  /* 95 */ 5, 2, 52, 1, 0,
  /* 100 */ 3, 2, 54, 1, 0,
  /* 105 */ 1, 2, 56, 1, 0,
  /* 110 */ 59, 1, 0,
  /* 113 */ 65477, 1, 0,
  /* 116 */ 65520, 1, 0,
  /* 119 */ 2, 0,
  /* 121 */ 65476, 3, 0,
  /* 124 */ 65477, 3, 0,
  /* 127 */ 1, 103, 4, 7, 4, 0,
  /* 133 */ 65535, 104, 4, 7, 4, 0,
  /* 139 */ 65476, 5, 0,
  /* 142 */ 65477, 5, 0,
  /* 145 */ 65476, 7, 0,
  /* 148 */ 65477, 7, 0,
  /* 151 */ 65476, 9, 0,
  /* 154 */ 65477, 9, 0,
  /* 157 */ 103, 11, 0,
  /* 160 */ 65476, 11, 0,
  /* 163 */ 65477, 11, 0,
  /* 166 */ 12, 0,
  /* 168 */ 65476, 13, 0,
  /* 171 */ 65477, 13, 0,
  /* 174 */ 14, 0,
  /* 176 */ 65476, 15, 0,
  /* 179 */ 65477, 15, 0,
  /* 182 */ 65477, 16, 0,
  /* 185 */ 65476, 17, 0,
  /* 188 */ 18, 0,
  /* 190 */ 19, 0,
  /* 192 */ 20, 0,
  /* 194 */ 21, 0,
  /* 196 */ 22, 0,
  /* 198 */ 23, 0,
  /* 200 */ 24, 0,
  /* 202 */ 25, 0,
  /* 204 */ 26, 0,
  /* 206 */ 27, 0,
  /* 208 */ 43, 0,
  /* 210 */ 44, 0,
  /* 212 */ 45, 0,
  /* 214 */ 46, 0,
  /* 216 */ 47, 0,
  /* 218 */ 48, 0,
  /* 220 */ 49, 0,
  /* 222 */ 50, 0,
  /* 224 */ 51, 0,
  /* 226 */ 52, 0,
  /* 228 */ 53, 0,
  /* 230 */ 54, 0,
  /* 232 */ 55, 0,
  /* 234 */ 56, 0,
  /* 236 */ 57, 0,
  /* 238 */ 58, 0,
  /* 240 */ 65520, 59, 0,
  /* 243 */ 65521, 59, 0,
  /* 246 */ 65523, 59, 0,
  /* 249 */ 65525, 59, 0,
  /* 252 */ 65527, 59, 0,
  /* 255 */ 65529, 59, 0,
  /* 258 */ 65531, 59, 0,
  /* 261 */ 65533, 59, 0,
  /* 264 */ 65535, 59, 0,
  /* 267 */ 65519, 60, 0,
  /* 270 */ 65521, 60, 0,
  /* 273 */ 65523, 60, 0,
  /* 276 */ 65525, 60, 0,
  /* 279 */ 65527, 60, 0,
  /* 282 */ 65529, 60, 0,
  /* 285 */ 65531, 60, 0,
  /* 288 */ 65533, 60, 0,
  /* 291 */ 61, 0,
  /* 293 */ 62, 0,
  /* 295 */ 64, 0,
  /* 297 */ 65, 0,
  /* 299 */ 66, 0,
  /* 301 */ 67, 0,
  /* 303 */ 68, 0,
  /* 305 */ 69, 0,
  /* 307 */ 70, 0,
  /* 309 */ 71, 0,
  /* 311 */ 72, 0,
  /* 313 */ 73, 0,
  /* 315 */ 74, 0,
  /* 317 */ 75, 0,
  /* 319 */ 76, 0,
  /* 321 */ 77, 0,
  /* 323 */ 78, 0,
  /* 325 */ 79, 0,
  /* 327 */ 80, 0,
  /* 329 */ 81, 0,
  /* 331 */ 82, 0,
  /* 333 */ 83, 0,
  /* 335 */ 84, 0,
  /* 337 */ 85, 0,
  /* 339 */ 86, 0,
  /* 341 */ 65428, 1, 103, 0,
  /* 345 */ 65432, 1, 107, 0,
  /* 349 */ 65417, 1, 114, 0,
  /* 353 */ 65421, 1, 118, 0,
  /* 357 */ 65292, 0,
  /* 359 */ 65315, 0,
  /* 361 */ 65421, 119, 65418, 0,
  /* 365 */ 65422, 0,
  /* 367 */ 65432, 108, 65429, 0,
  /* 371 */ 118, 65532, 65529, 65532, 65432, 0,
  /* 377 */ 65433, 0,
  /* 379 */ 65470, 0,
  /* 381 */ 65474, 0,
  /* 383 */ 65477, 0,
  /* 385 */ 65484, 0,
  /* 387 */ 65516, 0,
  /* 389 */ 65517, 0,
  /* 391 */ 114, 65525, 0,
  /* 394 */ 115, 65525, 0,
  /* 397 */ 65531, 0,
  /* 399 */ 65532, 0,
  /* 401 */ 65533, 0,
  /* 403 */ 65534, 0,
  /* 405 */ 65535, 0,
};

extern const uint16_t MipsSubRegIdxLists[] = {
  /* 0 */ 1, 0,
  /* 2 */ 2, 3, 4, 5, 6, 0,
  /* 8 */ 7, 8, 0,
  /* 11 */ 10, 9, 0,
  /* 14 */ 10, 1, 9, 11, 12, 0,
};

extern const char MipsRegStrings[] = {
  /* 0 */ 'D', '1', '0', 0,
  /* 4 */ 'F', '1', '0', 0,
  /* 8 */ 'F', '2', '0', 0,
  /* 12 */ 'D', 'S', 'P', 'O', 'u', 't', 'F', 'l', 'a', 'g', '2', '0', 0,
  /* 25 */ 'F', '3', '0', 0,
  /* 29 */ 'A', '0', 0,
  /* 32 */ 'A', 'C', '0', 0,
  /* 36 */ 'F', 'C', 'C', '0', 0,
  /* 41 */ 'D', '0', 0,
  /* 44 */ 'F', '0', 0,
  /* 47 */ 'K', '0', 0,
  /* 50 */ 'S', '0', 0,
  /* 53 */ 'T', '0', 0,
  /* 56 */ 'V', '0', 0,
  /* 59 */ 'D', '1', '1', 0,
  /* 63 */ 'F', '1', '1', 0,
  /* 67 */ 'F', '2', '1', 0,
  /* 71 */ 'D', 'S', 'P', 'O', 'u', 't', 'F', 'l', 'a', 'g', '2', '1', 0,
  /* 84 */ 'F', '3', '1', 0,
  /* 88 */ 'F', 'C', 'R', '3', '1', 0,
  /* 94 */ 'A', '1', 0,
  /* 97 */ 'A', 'C', '1', 0,
  /* 101 */ 'D', '1', 0,
  /* 104 */ 'F', '1', 0,
  /* 107 */ 'H', 'I', '1', 0,
  /* 111 */ 'K', '1', 0,
  /* 114 */ 'L', 'O', '1', 0,
  /* 118 */ 'S', '1', 0,
  /* 121 */ 'T', '1', 0,
  /* 124 */ 'V', '1', 0,
  /* 127 */ 'D', '1', '2', 0,
  /* 131 */ 'F', '1', '2', 0,
  /* 135 */ 'F', '2', '2', 0,
  /* 139 */ 'D', 'S', 'P', 'O', 'u', 't', 'F', 'l', 'a', 'g', '2', '2', 0,
  /* 152 */ 'A', '2', 0,
  /* 155 */ 'A', 'C', '2', 0,
  /* 159 */ 'D', '2', 0,
  /* 162 */ 'F', '2', 0,
  /* 165 */ 'H', 'I', '2', 0,
  /* 169 */ 'L', 'O', '2', 0,
  /* 173 */ 'S', '2', 0,
  /* 176 */ 'T', '2', 0,
  /* 179 */ 'D', '1', '3', 0,
  /* 183 */ 'F', '1', '3', 0,
  /* 187 */ 'F', '2', '3', 0,
  /* 191 */ 'D', 'S', 'P', 'O', 'u', 't', 'F', 'l', 'a', 'g', '2', '3', 0,
  /* 204 */ 'A', '3', 0,
  /* 207 */ 'A', 'C', '3', 0,
  /* 211 */ 'D', '3', 0,
  /* 214 */ 'F', '3', 0,
  /* 217 */ 'H', 'I', '3', 0,
  /* 221 */ 'L', 'O', '3', 0,
  /* 225 */ 'S', '3', 0,
  /* 228 */ 'T', '3', 0,
  /* 231 */ 'D', '1', '4', 0,
  /* 235 */ 'F', '1', '4', 0,
  /* 239 */ 'F', '2', '4', 0,
  /* 243 */ 'H', 'I', '6', '4', 0,
  /* 248 */ 'L', 'O', '6', '4', 0,
  /* 253 */ 'D', '1', '0', '_', '6', '4', 0,
  /* 260 */ 'D', '2', '0', '_', '6', '4', 0,
  /* 267 */ 'D', '3', '0', '_', '6', '4', 0,
  /* 274 */ 'A', '0', '_', '6', '4', 0,
  /* 280 */ 'A', 'C', '0', '_', '6', '4', 0,
  /* 287 */ 'D', '0', '_', '6', '4', 0,
  /* 293 */ 'K', '0', '_', '6', '4', 0,
  /* 299 */ 'S', '0', '_', '6', '4', 0,
  /* 305 */ 'T', '0', '_', '6', '4', 0,
  /* 311 */ 'V', '0', '_', '6', '4', 0,
  /* 317 */ 'D', '1', '1', '_', '6', '4', 0,
  /* 324 */ 'D', '2', '1', '_', '6', '4', 0,
  /* 331 */ 'D', '3', '1', '_', '6', '4', 0,
  /* 338 */ 'A', '1', '_', '6', '4', 0,
  /* 344 */ 'D', '1', '_', '6', '4', 0,
  /* 350 */ 'K', '1', '_', '6', '4', 0,
  /* 356 */ 'S', '1', '_', '6', '4', 0,
  /* 362 */ 'T', '1', '_', '6', '4', 0,
  /* 368 */ 'V', '1', '_', '6', '4', 0,
  /* 374 */ 'D', '1', '2', '_', '6', '4', 0,
  /* 381 */ 'D', '2', '2', '_', '6', '4', 0,
  /* 388 */ 'A', '2', '_', '6', '4', 0,
  /* 394 */ 'D', '2', '_', '6', '4', 0,
  /* 400 */ 'S', '2', '_', '6', '4', 0,
  /* 406 */ 'T', '2', '_', '6', '4', 0,
  /* 412 */ 'D', '1', '3', '_', '6', '4', 0,
  /* 419 */ 'D', '2', '3', '_', '6', '4', 0,
  /* 426 */ 'A', '3', '_', '6', '4', 0,
  /* 432 */ 'D', '3', '_', '6', '4', 0,
  /* 438 */ 'S', '3', '_', '6', '4', 0,
  /* 444 */ 'T', '3', '_', '6', '4', 0,
  /* 450 */ 'D', '1', '4', '_', '6', '4', 0,
  /* 457 */ 'D', '2', '4', '_', '6', '4', 0,
  /* 464 */ 'D', '4', '_', '6', '4', 0,
  /* 470 */ 'S', '4', '_', '6', '4', 0,
  /* 476 */ 'T', '4', '_', '6', '4', 0,
  /* 482 */ 'D', '1', '5', '_', '6', '4', 0,
  /* 489 */ 'D', '2', '5', '_', '6', '4', 0,
  /* 496 */ 'D', '5', '_', '6', '4', 0,
  /* 502 */ 'S', '5', '_', '6', '4', 0,
  /* 508 */ 'T', '5', '_', '6', '4', 0,
  /* 514 */ 'D', '1', '6', '_', '6', '4', 0,
  /* 521 */ 'D', '2', '6', '_', '6', '4', 0,
  /* 528 */ 'D', '6', '_', '6', '4', 0,
  /* 534 */ 'S', '6', '_', '6', '4', 0,
  /* 540 */ 'T', '6', '_', '6', '4', 0,
  /* 546 */ 'D', '1', '7', '_', '6', '4', 0,
  /* 553 */ 'D', '2', '7', '_', '6', '4', 0,
  /* 560 */ 'D', '7', '_', '6', '4', 0,
  /* 566 */ 'S', '7', '_', '6', '4', 0,
  /* 572 */ 'T', '7', '_', '6', '4', 0,
  /* 578 */ 'D', '1', '8', '_', '6', '4', 0,
  /* 585 */ 'D', '2', '8', '_', '6', '4', 0,
  /* 592 */ 'D', '8', '_', '6', '4', 0,
  /* 598 */ 'T', '8', '_', '6', '4', 0,
  /* 604 */ 'D', '1', '9', '_', '6', '4', 0,
  /* 611 */ 'D', '2', '9', '_', '6', '4', 0,
  /* 618 */ 'H', 'W', 'R', '2', '9', '_', '6', '4', 0,
  /* 627 */ 'D', '9', '_', '6', '4', 0,
  /* 633 */ 'T', '9', '_', '6', '4', 0,
  /* 639 */ 'R', 'A', '_', '6', '4', 0,
  /* 645 */ 'Z', 'E', 'R', 'O', '_', '6', '4', 0,
  /* 653 */ 'F', 'P', '_', '6', '4', 0,
  /* 659 */ 'G', 'P', '_', '6', '4', 0,
  /* 665 */ 'S', 'P', '_', '6', '4', 0,
  /* 671 */ 'A', 'T', '_', '6', '4', 0,
  /* 677 */ 'D', '4', 0,
  /* 680 */ 'F', '4', 0,
  /* 683 */ 'S', '4', 0,
  /* 686 */ 'T', '4', 0,
  /* 689 */ 'D', '1', '5', 0,
  /* 693 */ 'F', '1', '5', 0,
  /* 697 */ 'F', '2', '5', 0,
  /* 701 */ 'D', '5', 0,
  /* 704 */ 'F', '5', 0,
  /* 707 */ 'S', '5', 0,
  /* 710 */ 'T', '5', 0,
  /* 713 */ 'F', '1', '6', 0,
  /* 717 */ 'F', '2', '6', 0,
  /* 721 */ 'D', '6', 0,
  /* 724 */ 'F', '6', 0,
  /* 727 */ 'S', '6', 0,
  /* 730 */ 'T', '6', 0,
  /* 733 */ 'F', '1', '7', 0,
  /* 737 */ 'F', '2', '7', 0,
  /* 741 */ 'D', '7', 0,
  /* 744 */ 'F', '7', 0,
  /* 747 */ 'S', '7', 0,
  /* 750 */ 'T', '7', 0,
  /* 753 */ 'F', '1', '8', 0,
  /* 757 */ 'F', '2', '8', 0,
  /* 761 */ 'D', '8', 0,
  /* 764 */ 'F', '8', 0,
  /* 767 */ 'T', '8', 0,
  /* 770 */ 'F', '1', '9', 0,
  /* 774 */ 'D', 'S', 'P', 'O', 'u', 't', 'F', 'l', 'a', 'g', '1', '6', '_', '1', '9', 0,
  /* 790 */ 'F', '2', '9', 0,
  /* 794 */ 'H', 'W', 'R', '2', '9', 0,
  /* 800 */ 'D', '9', 0,
  /* 803 */ 'F', '9', 0,
  /* 806 */ 'T', '9', 0,
  /* 809 */ 'R', 'A', 0,
  /* 812 */ 'P', 'C', 0,
  /* 815 */ 'D', 'S', 'P', 'E', 'F', 'I', 0,
  /* 822 */ 'H', 'I', 0,
  /* 825 */ 'L', 'O', 0,
  /* 828 */ 'Z', 'E', 'R', 'O', 0,
  /* 833 */ 'F', 'P', 0,
  /* 836 */ 'G', 'P', 0,
  /* 839 */ 'S', 'P', 0,
  /* 842 */ 'A', 'T', 0,
  /* 845 */ 'D', 'S', 'P', 'C', 'C', 'o', 'n', 'd', 0,
  /* 854 */ 'D', 'S', 'P', 'O', 'u', 't', 'F', 'l', 'a', 'g', 0,
  /* 865 */ 'D', 'S', 'P', 'P', 'o', 's', 0,
  /* 872 */ 'D', 'S', 'P', 'S', 'C', 'o', 'u', 'n', 't', 0,
  /* 882 */ 'D', 'S', 'P', 'C', 'a', 'r', 'r', 'y', 0,
};

extern const MCRegisterDesc MipsRegDesc[] = { // Descriptors
  { 3, 0, 0, 0, 0, 0 },
  { 29, 6, 1, 6, 1, 0 },
  { 274, 405, 405, 1, 0, 0 },
  { 94, 6, 1, 6, 1, 96 },
  { 338, 405, 405, 1, 0, 96 },
  { 152, 6, 1, 6, 1, 1904 },
  { 388, 405, 405, 1, 0, 1904 },
  { 204, 6, 1, 6, 1, 1952 },
  { 426, 405, 405, 1, 0, 1952 },
  { 32, 127, 394, 6, 11, 224 },
  { 280, 133, 371, 1, 14, 224 },
  { 97, 157, 391, 1, 11, 1858 },
  { 155, 157, 391, 1, 11, 1858 },
  { 207, 157, 391, 1, 11, 1858 },
  { 842, 6, 1, 6, 1, 2656 },
  { 671, 405, 405, 1, 0, 2656 },
  { 41, 105, 110, 1, 8, 272 },
  { 287, 264, 238, 1, 0, 2704 },
  { 101, 100, 110, 1, 8, 320 },
  { 344, 288, 236, 1, 0, 2784 },
  { 159, 95, 110, 1, 8, 368 },
  { 394, 261, 234, 1, 0, 2832 },
  { 211, 90, 110, 1, 8, 416 },
  { 432, 285, 232, 1, 0, 2928 },
  { 677, 85, 110, 1, 8, 464 },
  { 464, 258, 230, 1, 0, 2976 },
  { 701, 80, 110, 1, 8, 512 },
  { 496, 282, 228, 1, 0, 3008 },
  { 721, 75, 110, 1, 8, 560 },
  { 528, 255, 226, 1, 0, 3040 },
  { 741, 67, 110, 1, 8, 608 },
  { 560, 279, 224, 1, 0, 3072 },
  { 761, 62, 110, 1, 8, 656 },
  { 592, 252, 222, 1, 0, 3104 },
  { 800, 62, 110, 1, 8, 704 },
  { 627, 276, 220, 1, 0, 3136 },
  { 0, 62, 110, 1, 8, 752 },
  { 253, 249, 218, 1, 0, 3168 },
  { 59, 62, 110, 1, 8, 800 },
  { 317, 273, 216, 1, 0, 3200 },
  { 127, 62, 110, 1, 8, 848 },
  { 374, 246, 214, 1, 0, 3232 },
  { 179, 62, 110, 1, 8, 896 },
  { 412, 270, 212, 1, 0, 3264 },
  { 231, 62, 110, 1, 8, 944 },
  { 450, 243, 210, 1, 0, 3296 },
  { 689, 62, 110, 1, 8, 1152 },
  { 482, 267, 208, 1, 0, 6225 },
  { 514, 240, 208, 1, 0, 6225 },
  { 546, 267, 208, 1, 0, 6225 },
  { 578, 240, 208, 1, 0, 6225 },
  { 604, 267, 208, 1, 0, 6225 },
  { 260, 240, 208, 1, 0, 6225 },
  { 324, 267, 208, 1, 0, 6225 },
  { 381, 240, 208, 1, 0, 6225 },
  { 419, 267, 208, 1, 0, 6225 },
  { 457, 240, 208, 1, 0, 6225 },
  { 489, 267, 208, 1, 0, 6225 },
  { 521, 240, 208, 1, 0, 6225 },
  { 553, 267, 208, 1, 0, 6225 },
  { 585, 240, 208, 1, 0, 6225 },
  { 611, 267, 208, 1, 0, 6225 },
  { 267, 240, 208, 1, 0, 6225 },
  { 331, 267, 208, 1, 0, 6225 },
  { 845, 1, 1, 1, 1, 6225 },
  { 882, 1, 1, 1, 1, 6225 },
  { 815, 1, 1, 1, 1, 6225 },
  { 854, 2, 2, 1, 2, 128 },
  { 774, 405, 1, 405, 1, 6193 },
  { 12, 403, 1, 403, 1, 6193 },
  { 71, 401, 1, 401, 1, 6193 },
  { 139, 399, 1, 399, 1, 6193 },
  { 191, 397, 1, 397, 1, 6193 },
  { 865, 1, 1, 1, 1, 6193 },
  { 872, 1, 1, 1, 1, 6193 },
  { 44, 113, 1, 113, 1, 6097 },
  { 104, 121, 1, 121, 1, 6097 },
  { 162, 124, 1, 124, 1, 6097 },
  { 214, 139, 1, 139, 1, 6097 },
  { 680, 142, 1, 142, 1, 6097 },
  { 704, 145, 1, 145, 1, 6097 },
  { 724, 148, 1, 148, 1, 6097 },
  { 744, 151, 1, 151, 1, 6097 },
  { 764, 154, 1, 154, 1, 6097 },
  { 803, 160, 1, 160, 1, 6097 },
  { 4, 163, 1, 163, 1, 6097 },
  { 63, 168, 1, 168, 1, 6097 },
  { 131, 171, 1, 171, 1, 6097 },
  { 183, 176, 1, 176, 1, 6097 },
  { 235, 179, 1, 179, 1, 6097 },
  { 693, 185, 1, 185, 1, 6097 },
  { 713, 182, 1, 182, 1, 6097 },
  { 733, 185, 1, 185, 1, 6097 },
  { 753, 182, 1, 182, 1, 6097 },
  { 770, 185, 1, 185, 1, 6097 },
  { 8, 182, 1, 182, 1, 6097 },
  { 67, 185, 1, 185, 1, 6097 },
  { 135, 182, 1, 182, 1, 6097 },
  { 187, 185, 1, 185, 1, 6097 },
  { 239, 182, 1, 182, 1, 6097 },
  { 697, 185, 1, 185, 1, 6097 },
  { 717, 182, 1, 182, 1, 6097 },
  { 737, 185, 1, 185, 1, 6097 },
  { 757, 182, 1, 182, 1, 6097 },
  { 790, 185, 1, 185, 1, 6097 },
  { 25, 182, 1, 182, 1, 6097 },
  { 84, 185, 1, 185, 1, 6097 },
  { 36, 1, 1, 1, 1, 6161 },
  { 88, 1, 1, 1, 1, 6161 },
  { 833, 6, 1, 6, 1, 3776 },
  { 653, 405, 405, 1, 0, 3776 },
  { 836, 6, 1, 6, 1, 3808 },
  { 659, 405, 405, 1, 0, 3808 },
  { 822, 345, 1, 367, 1, 5746 },
  { 107, 377, 1, 377, 1, 5746 },
  { 165, 377, 1, 377, 1, 5746 },
  { 217, 377, 1, 377, 1, 5746 },
  { 243, 341, 399, 369, 0, 2240 },
  { 794, 1, 1, 1, 1, 6129 },
  { 618, 1, 1, 1, 1, 6129 },
  { 47, 6, 1, 6, 1, 4656 },
  { 293, 405, 405, 1, 0, 4656 },
  { 111, 6, 1, 6, 1, 4688 },
  { 350, 405, 405, 1, 0, 4688 },
  { 825, 353, 1, 361, 1, 5714 },
  { 114, 365, 1, 365, 1, 5714 },
  { 169, 365, 1, 365, 1, 5714 },
  { 221, 365, 1, 365, 1, 5714 },
  { 248, 349, 399, 363, 0, 2096 },
  { 812, 1, 1, 1, 1, 6065 },
  { 809, 6, 1, 6, 1, 4720 },
  { 639, 405, 405, 1, 0, 4720 },
  { 50, 6, 1, 6, 1, 4752 },
  { 299, 405, 405, 1, 0, 4752 },
  { 118, 6, 1, 6, 1, 4784 },
  { 356, 405, 405, 1, 0, 4784 },
  { 173, 6, 1, 6, 1, 4816 },
  { 400, 405, 405, 1, 0, 4816 },
  { 225, 6, 1, 6, 1, 4848 },
  { 438, 405, 405, 1, 0, 4848 },
  { 683, 6, 1, 6, 1, 4880 },
  { 470, 405, 405, 1, 0, 4880 },
  { 707, 6, 1, 6, 1, 4912 },
  { 502, 405, 405, 1, 0, 4912 },
  { 727, 6, 1, 6, 1, 4944 },
  { 534, 405, 405, 1, 0, 4944 },
  { 747, 6, 1, 6, 1, 4976 },
  { 566, 405, 405, 1, 0, 4976 },
  { 839, 6, 1, 6, 1, 5008 },
  { 665, 405, 405, 1, 0, 5008 },
  { 53, 6, 1, 6, 1, 5040 },
  { 305, 405, 405, 1, 0, 5040 },
  { 121, 6, 1, 6, 1, 5072 },
  { 362, 405, 405, 1, 0, 5072 },
  { 176, 6, 1, 6, 1, 5104 },
  { 406, 405, 405, 1, 0, 5104 },
  { 228, 6, 1, 6, 1, 5136 },
  { 444, 405, 405, 1, 0, 5136 },
  { 686, 6, 1, 6, 1, 5168 },
  { 476, 405, 405, 1, 0, 5168 },
  { 710, 6, 1, 6, 1, 5200 },
  { 508, 405, 405, 1, 0, 5200 },
  { 730, 6, 1, 6, 1, 5232 },
  { 540, 405, 405, 1, 0, 5232 },
  { 750, 6, 1, 6, 1, 5264 },
  { 572, 405, 405, 1, 0, 5264 },
  { 767, 6, 1, 6, 1, 5296 },
  { 598, 405, 405, 1, 0, 5296 },
  { 806, 6, 1, 6, 1, 5328 },
  { 633, 405, 405, 1, 0, 5328 },
  { 56, 6, 1, 6, 1, 5360 },
  { 311, 405, 405, 1, 0, 5360 },
  { 124, 6, 1, 6, 1, 5392 },
  { 368, 405, 405, 1, 0, 5392 },
  { 828, 6, 1, 6, 1, 5424 },
  { 645, 405, 405, 1, 0, 5424 },
};

extern const uint16_t MipsRegUnitRoots[][2] = {
  { Mips::A0 },
  { Mips::A1 },
  { Mips::A2 },
  { Mips::A3 },
  { Mips::LO },
  { Mips::HI },
  { Mips::LO1 },
  { Mips::HI1 },
  { Mips::LO2 },
  { Mips::HI2 },
  { Mips::LO3 },
  { Mips::HI3 },
  { Mips::AT },
  { Mips::F0 },
  { Mips::F1 },
  { Mips::F2 },
  { Mips::F3 },
  { Mips::F4 },
  { Mips::F5 },
  { Mips::F6 },
  { Mips::F7 },
  { Mips::F8 },
  { Mips::F9 },
  { Mips::F10 },
  { Mips::F11 },
  { Mips::F12 },
  { Mips::F13 },
  { Mips::F14 },
  { Mips::F15 },
  { Mips::F16 },
  { Mips::F17 },
  { Mips::F18 },
  { Mips::F19 },
  { Mips::F20 },
  { Mips::F21 },
  { Mips::F22 },
  { Mips::F23 },
  { Mips::F24 },
  { Mips::F25 },
  { Mips::F26 },
  { Mips::F27 },
  { Mips::F28 },
  { Mips::F29 },
  { Mips::F30 },
  { Mips::F31 },
  { Mips::DSPCCond },
  { Mips::DSPCarry },
  { Mips::DSPEFI },
  { Mips::DSPOutFlag16_19 },
  { Mips::DSPOutFlag20 },
  { Mips::DSPOutFlag21 },
  { Mips::DSPOutFlag22 },
  { Mips::DSPOutFlag23 },
  { Mips::DSPPos },
  { Mips::DSPSCount },
  { Mips::FCC0 },
  { Mips::FCR31 },
  { Mips::FP },
  { Mips::GP },
  { Mips::HWR29 },
  { Mips::HWR29_64 },
  { Mips::K0 },
  { Mips::K1 },
  { Mips::PC },
  { Mips::RA },
  { Mips::S0 },
  { Mips::S1 },
  { Mips::S2 },
  { Mips::S3 },
  { Mips::S4 },
  { Mips::S5 },
  { Mips::S6 },
  { Mips::S7 },
  { Mips::SP },
  { Mips::T0 },
  { Mips::T1 },
  { Mips::T2 },
  { Mips::T3 },
  { Mips::T4 },
  { Mips::T5 },
  { Mips::T6 },
  { Mips::T7 },
  { Mips::T8 },
  { Mips::T9 },
  { Mips::V0 },
  { Mips::V1 },
  { Mips::ZERO },
};

namespace {     // Register classes...
  // CPURegs Register Class...
  const uint16_t CPURegs[] = {
    Mips::ZERO, Mips::AT, Mips::V0, Mips::V1, Mips::A0, Mips::A1, Mips::A2, Mips::A3, Mips::T0, Mips::T1, Mips::T2, Mips::T3, Mips::T4, Mips::T5, Mips::T6, Mips::T7, Mips::S0, Mips::S1, Mips::S2, Mips::S3, Mips::S4, Mips::S5, Mips::S6, Mips::S7, Mips::T8, Mips::T9, Mips::K0, Mips::K1, Mips::GP, Mips::SP, Mips::FP, Mips::RA, 
  };

  // CPURegs Bit set.
  const uint8_t CPURegsBits[] = {
    0xaa, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x05, 0x54, 0x55, 0x55, 0x55, 0x55, 0x55, 
  };

  // DSPRegs Register Class...
  const uint16_t DSPRegs[] = {
    Mips::ZERO, Mips::AT, Mips::V0, Mips::V1, Mips::A0, Mips::A1, Mips::A2, Mips::A3, Mips::T0, Mips::T1, Mips::T2, Mips::T3, Mips::T4, Mips::T5, Mips::T6, Mips::T7, Mips::S0, Mips::S1, Mips::S2, Mips::S3, Mips::S4, Mips::S5, Mips::S6, Mips::S7, Mips::T8, Mips::T9, Mips::K0, Mips::K1, Mips::GP, Mips::SP, Mips::FP, Mips::RA, 
  };

  // DSPRegs Bit set.
  const uint8_t DSPRegsBits[] = {
    0xaa, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x05, 0x54, 0x55, 0x55, 0x55, 0x55, 0x55, 
  };

  // FGR32 Register Class...
  const uint16_t FGR32[] = {
    Mips::F0, Mips::F1, Mips::F2, Mips::F3, Mips::F4, Mips::F5, Mips::F6, Mips::F7, Mips::F8, Mips::F9, Mips::F10, Mips::F11, Mips::F12, Mips::F13, Mips::F14, Mips::F15, Mips::F16, Mips::F17, Mips::F18, Mips::F19, Mips::F20, Mips::F21, Mips::F22, Mips::F23, Mips::F24, Mips::F25, Mips::F26, Mips::F27, Mips::F28, Mips::F29, Mips::F30, Mips::F31, 
  };

  // FGR32 Bit set.
  const uint8_t FGR32Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x07, 
  };

  // CPU16Regs Register Class...
  const uint16_t CPU16Regs[] = {
    Mips::V0, Mips::V1, Mips::A0, Mips::A1, Mips::A2, Mips::A3, Mips::S0, Mips::S1, 
  };

  // CPU16Regs Bit set.
  const uint8_t CPU16RegsBits[] = {
    0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x14, 
  };

  // HIRegsDSP Register Class...
  const uint16_t HIRegsDSP[] = {
    Mips::HI, Mips::HI1, Mips::HI2, Mips::HI3, 
  };

  // HIRegsDSP Bit set.
  const uint8_t HIRegsDSPBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  };

  // LORegsDSP Register Class...
  const uint16_t LORegsDSP[] = {
    Mips::LO, Mips::LO1, Mips::LO2, Mips::LO3, 
  };

  // LORegsDSP Bit set.
  const uint8_t LORegsDSPBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 
  };

  // CCR Register Class...
  const uint16_t CCR[] = {
    Mips::FCR31, Mips::FCC0, 
  };

  // CCR Bit set.
  const uint8_t CCRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 
  };

  // CPURAReg Register Class...
  const uint16_t CPURAReg[] = {
    Mips::RA, 
  };

  // CPURAReg Bit set.
  const uint8_t CPURARegBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
  };

  // CPUSPReg Register Class...
  const uint16_t CPUSPReg[] = {
    Mips::SP, 
  };

  // CPUSPReg Bit set.
  const uint8_t CPUSPRegBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 
  };

  // DSPCC Register Class...
  const uint16_t DSPCC[] = {
    Mips::DSPCCond, 
  };

  // DSPCC Bit set.
  const uint8_t DSPCCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
  };

  // HIRegs Register Class...
  const uint16_t HIRegs[] = {
    Mips::HI, 
  };

  // HIRegs Bit set.
  const uint8_t HIRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
  };

  // HWRegs Register Class...
  const uint16_t HWRegs[] = {
    Mips::HWR29, 
  };

  // HWRegs Bit set.
  const uint8_t HWRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 
  };

  // LORegs Register Class...
  const uint16_t LORegs[] = {
    Mips::LO, 
  };

  // LORegs Bit set.
  const uint8_t LORegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 
  };

  // CPU64Regs Register Class...
  const uint16_t CPU64Regs[] = {
    Mips::ZERO_64, Mips::AT_64, Mips::V0_64, Mips::V1_64, Mips::A0_64, Mips::A1_64, Mips::A2_64, Mips::A3_64, Mips::T0_64, Mips::T1_64, Mips::T2_64, Mips::T3_64, Mips::T4_64, Mips::T5_64, Mips::T6_64, Mips::T7_64, Mips::S0_64, Mips::S1_64, Mips::S2_64, Mips::S3_64, Mips::S4_64, Mips::S5_64, Mips::S6_64, Mips::S7_64, Mips::T8_64, Mips::T9_64, Mips::K0_64, Mips::K1_64, Mips::GP_64, Mips::SP_64, Mips::FP_64, Mips::RA_64, 
  };

  // CPU64Regs Bit set.
  const uint8_t CPU64RegsBits[] = {
    0x54, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x01, 0x0a, 0xa8, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
  };

  // FGR64 Register Class...
  const uint16_t FGR64[] = {
    Mips::D0_64, Mips::D1_64, Mips::D2_64, Mips::D3_64, Mips::D4_64, Mips::D5_64, Mips::D6_64, Mips::D7_64, Mips::D8_64, Mips::D9_64, Mips::D10_64, Mips::D11_64, Mips::D12_64, Mips::D13_64, Mips::D14_64, Mips::D15_64, Mips::D16_64, Mips::D17_64, Mips::D18_64, Mips::D19_64, Mips::D20_64, Mips::D21_64, Mips::D22_64, Mips::D23_64, Mips::D24_64, Mips::D25_64, Mips::D26_64, Mips::D27_64, Mips::D28_64, Mips::D29_64, Mips::D30_64, Mips::D31_64, 
  };

  // FGR64 Bit set.
  const uint8_t FGR64Bits[] = {
    0x00, 0x00, 0xaa, 0xaa, 0xaa, 0xaa, 0xff, 0xff, 
  };

  // AFGR64 Register Class...
  const uint16_t AFGR64[] = {
    Mips::D0, Mips::D1, Mips::D2, Mips::D3, Mips::D4, Mips::D5, Mips::D6, Mips::D7, Mips::D8, Mips::D9, Mips::D10, Mips::D11, Mips::D12, Mips::D13, Mips::D14, Mips::D15, 
  };

  // AFGR64 Bit set.
  const uint8_t AFGR64Bits[] = {
    0x00, 0x00, 0x55, 0x55, 0x55, 0x55, 
  };

  // CPU64Regs_with_sub_32_in_CPU16Regs Register Class...
  const uint16_t CPU64Regs_with_sub_32_in_CPU16Regs[] = {
    Mips::V0_64, Mips::V1_64, Mips::A0_64, Mips::A1_64, Mips::A2_64, Mips::A3_64, Mips::S0_64, Mips::S1_64, 
  };

  // CPU64Regs_with_sub_32_in_CPU16Regs Bit set.
  const uint8_t CPU64Regs_with_sub_32_in_CPU16RegsBits[] = {
    0x54, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x28, 
  };

  // ACRegsDSP Register Class...
  const uint16_t ACRegsDSP[] = {
    Mips::AC0, Mips::AC1, Mips::AC2, Mips::AC3, 
  };

  // ACRegsDSP Bit set.
  const uint8_t ACRegsDSPBits[] = {
    0x00, 0x3a, 
  };

  // ACRegs Register Class...
  const uint16_t ACRegs[] = {
    Mips::AC0, 
  };

  // ACRegs Bit set.
  const uint8_t ACRegsBits[] = {
    0x00, 0x02, 
  };

  // CPU64Regs_with_sub_32_in_CPURAReg Register Class...
  const uint16_t CPU64Regs_with_sub_32_in_CPURAReg[] = {
    Mips::RA_64, 
  };

  // CPU64Regs_with_sub_32_in_CPURAReg Bit set.
  const uint8_t CPU64Regs_with_sub_32_in_CPURARegBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
  };

  // CPU64Regs_with_sub_32_in_CPUSPReg Register Class...
  const uint16_t CPU64Regs_with_sub_32_in_CPUSPReg[] = {
    Mips::SP_64, 
  };

  // CPU64Regs_with_sub_32_in_CPUSPReg Bit set.
  const uint8_t CPU64Regs_with_sub_32_in_CPUSPRegBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 
  };

  // HIRegs64 Register Class...
  const uint16_t HIRegs64[] = {
    Mips::HI64, 
  };

  // HIRegs64 Bit set.
  const uint8_t HIRegs64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 
  };

  // HWRegs64 Register Class...
  const uint16_t HWRegs64[] = {
    Mips::HWR29_64, 
  };

  // HWRegs64 Bit set.
  const uint8_t HWRegs64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  };

  // LORegs64 Register Class...
  const uint16_t LORegs64[] = {
    Mips::LO64, 
  };

  // LORegs64 Bit set.
  const uint8_t LORegs64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
  };

  // ACRegs128 Register Class...
  const uint16_t ACRegs128[] = {
    Mips::AC0_64, 
  };

  // ACRegs128 Bit set.
  const uint8_t ACRegs128Bits[] = {
    0x00, 0x04, 
  };

}

extern const MCRegisterClass MipsMCRegisterClasses[] = {
  { "CPURegs", CPURegs, CPURegsBits, 32, sizeof(CPURegsBits), Mips::CPURegsRegClassID, 4, 4, 1, 1 },
  { "DSPRegs", DSPRegs, DSPRegsBits, 32, sizeof(DSPRegsBits), Mips::DSPRegsRegClassID, 4, 4, 1, 1 },
  { "FGR32", FGR32, FGR32Bits, 32, sizeof(FGR32Bits), Mips::FGR32RegClassID, 4, 4, 1, 1 },
  { "CPU16Regs", CPU16Regs, CPU16RegsBits, 8, sizeof(CPU16RegsBits), Mips::CPU16RegsRegClassID, 4, 4, 1, 1 },
  { "HIRegsDSP", HIRegsDSP, HIRegsDSPBits, 4, sizeof(HIRegsDSPBits), Mips::HIRegsDSPRegClassID, 4, 4, 1, 1 },
  { "LORegsDSP", LORegsDSP, LORegsDSPBits, 4, sizeof(LORegsDSPBits), Mips::LORegsDSPRegClassID, 4, 4, 1, 1 },
  { "CCR", CCR, CCRBits, 2, sizeof(CCRBits), Mips::CCRRegClassID, 4, 4, 1, 0 },
  { "CPURAReg", CPURAReg, CPURARegBits, 1, sizeof(CPURARegBits), Mips::CPURARegRegClassID, 4, 4, 1, 0 },
  { "CPUSPReg", CPUSPReg, CPUSPRegBits, 1, sizeof(CPUSPRegBits), Mips::CPUSPRegRegClassID, 4, 4, 1, 0 },
  { "DSPCC", DSPCC, DSPCCBits, 1, sizeof(DSPCCBits), Mips::DSPCCRegClassID, 4, 4, 1, 1 },
  { "HIRegs", HIRegs, HIRegsBits, 1, sizeof(HIRegsBits), Mips::HIRegsRegClassID, 4, 4, 1, 1 },
  { "HWRegs", HWRegs, HWRegsBits, 1, sizeof(HWRegsBits), Mips::HWRegsRegClassID, 4, 4, 1, 0 },
  { "LORegs", LORegs, LORegsBits, 1, sizeof(LORegsBits), Mips::LORegsRegClassID, 4, 4, 1, 1 },
  { "CPU64Regs", CPU64Regs, CPU64RegsBits, 32, sizeof(CPU64RegsBits), Mips::CPU64RegsRegClassID, 8, 8, 1, 1 },
  { "FGR64", FGR64, FGR64Bits, 32, sizeof(FGR64Bits), Mips::FGR64RegClassID, 8, 8, 1, 1 },
  { "AFGR64", AFGR64, AFGR64Bits, 16, sizeof(AFGR64Bits), Mips::AFGR64RegClassID, 8, 8, 1, 1 },
  { "CPU64Regs_with_sub_32_in_CPU16Regs", CPU64Regs_with_sub_32_in_CPU16Regs, CPU64Regs_with_sub_32_in_CPU16RegsBits, 8, sizeof(CPU64Regs_with_sub_32_in_CPU16RegsBits), Mips::CPU64Regs_with_sub_32_in_CPU16RegsRegClassID, 8, 8, 1, 1 },
  { "ACRegsDSP", ACRegsDSP, ACRegsDSPBits, 4, sizeof(ACRegsDSPBits), Mips::ACRegsDSPRegClassID, 8, 8, 1, 1 },
  { "ACRegs", ACRegs, ACRegsBits, 1, sizeof(ACRegsBits), Mips::ACRegsRegClassID, 8, 8, 1, 1 },
  { "CPU64Regs_with_sub_32_in_CPURAReg", CPU64Regs_with_sub_32_in_CPURAReg, CPU64Regs_with_sub_32_in_CPURARegBits, 1, sizeof(CPU64Regs_with_sub_32_in_CPURARegBits), Mips::CPU64Regs_with_sub_32_in_CPURARegRegClassID, 8, 8, 1, 1 },
  { "CPU64Regs_with_sub_32_in_CPUSPReg", CPU64Regs_with_sub_32_in_CPUSPReg, CPU64Regs_with_sub_32_in_CPUSPRegBits, 1, sizeof(CPU64Regs_with_sub_32_in_CPUSPRegBits), Mips::CPU64Regs_with_sub_32_in_CPUSPRegRegClassID, 8, 8, 1, 1 },
  { "HIRegs64", HIRegs64, HIRegs64Bits, 1, sizeof(HIRegs64Bits), Mips::HIRegs64RegClassID, 8, 8, 1, 1 },
  { "HWRegs64", HWRegs64, HWRegs64Bits, 1, sizeof(HWRegs64Bits), Mips::HWRegs64RegClassID, 8, 8, 1, 0 },
  { "LORegs64", LORegs64, LORegs64Bits, 1, sizeof(LORegs64Bits), Mips::LORegs64RegClassID, 8, 8, 1, 1 },
  { "ACRegs128", ACRegs128, ACRegs128Bits, 1, sizeof(ACRegs128Bits), Mips::ACRegs128RegClassID, 16, 16, 1, 1 },
};

// Mips Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair MipsDwarfFlavour0Dwarf2L[] = {
  { 0U, Mips::ZERO_64 },
  { 1U, Mips::AT_64 },
  { 2U, Mips::V0_64 },
  { 3U, Mips::V1_64 },
  { 4U, Mips::A0_64 },
  { 5U, Mips::A1_64 },
  { 6U, Mips::A2_64 },
  { 7U, Mips::A3_64 },
  { 8U, Mips::T0_64 },
  { 9U, Mips::T1_64 },
  { 10U, Mips::T2_64 },
  { 11U, Mips::T3_64 },
  { 12U, Mips::T4_64 },
  { 13U, Mips::T5_64 },
  { 14U, Mips::T6_64 },
  { 15U, Mips::T7_64 },
  { 16U, Mips::S0_64 },
  { 17U, Mips::S1_64 },
  { 18U, Mips::S2_64 },
  { 19U, Mips::S3_64 },
  { 20U, Mips::S4_64 },
  { 21U, Mips::S5_64 },
  { 22U, Mips::S6_64 },
  { 23U, Mips::S7_64 },
  { 24U, Mips::T8_64 },
  { 25U, Mips::T9_64 },
  { 26U, Mips::K0_64 },
  { 27U, Mips::K1_64 },
  { 28U, Mips::GP_64 },
  { 29U, Mips::SP_64 },
  { 30U, Mips::FP_64 },
  { 31U, Mips::RA_64 },
  { 32U, Mips::F0 },
  { 33U, Mips::F1 },
  { 34U, Mips::F2 },
  { 35U, Mips::F3 },
  { 36U, Mips::F4 },
  { 37U, Mips::F5 },
  { 38U, Mips::F6 },
  { 39U, Mips::F7 },
  { 40U, Mips::F8 },
  { 41U, Mips::F9 },
  { 42U, Mips::F10 },
  { 43U, Mips::F11 },
  { 44U, Mips::F12 },
  { 45U, Mips::F13 },
  { 46U, Mips::F14 },
  { 47U, Mips::F15 },
  { 48U, Mips::F16 },
  { 49U, Mips::F17 },
  { 50U, Mips::F18 },
  { 51U, Mips::F19 },
  { 52U, Mips::F20 },
  { 53U, Mips::F21 },
  { 54U, Mips::F22 },
  { 55U, Mips::F23 },
  { 56U, Mips::F24 },
  { 57U, Mips::F25 },
  { 58U, Mips::F26 },
  { 59U, Mips::F27 },
  { 60U, Mips::F28 },
  { 61U, Mips::F29 },
  { 62U, Mips::F30 },
  { 63U, Mips::F31 },
  { 64U, Mips::HI },
  { 65U, Mips::LO },
  { 176U, Mips::HI1 },
  { 177U, Mips::LO1 },
  { 178U, Mips::HI2 },
  { 179U, Mips::LO2 },
  { 180U, Mips::HI3 },
  { 181U, Mips::LO3 },
};
extern const unsigned MipsDwarfFlavour0Dwarf2LSize = sizeof(MipsDwarfFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair MipsEHFlavour0Dwarf2L[] = {
  { 0U, Mips::ZERO_64 },
  { 1U, Mips::AT_64 },
  { 2U, Mips::V0_64 },
  { 3U, Mips::V1_64 },
  { 4U, Mips::A0_64 },
  { 5U, Mips::A1_64 },
  { 6U, Mips::A2_64 },
  { 7U, Mips::A3_64 },
  { 8U, Mips::T0_64 },
  { 9U, Mips::T1_64 },
  { 10U, Mips::T2_64 },
  { 11U, Mips::T3_64 },
  { 12U, Mips::T4_64 },
  { 13U, Mips::T5_64 },
  { 14U, Mips::T6_64 },
  { 15U, Mips::T7_64 },
  { 16U, Mips::S0_64 },
  { 17U, Mips::S1_64 },
  { 18U, Mips::S2_64 },
  { 19U, Mips::S3_64 },
  { 20U, Mips::S4_64 },
  { 21U, Mips::S5_64 },
  { 22U, Mips::S6_64 },
  { 23U, Mips::S7_64 },
  { 24U, Mips::T8_64 },
  { 25U, Mips::T9_64 },
  { 26U, Mips::K0_64 },
  { 27U, Mips::K1_64 },
  { 28U, Mips::GP_64 },
  { 29U, Mips::SP_64 },
  { 30U, Mips::FP_64 },
  { 31U, Mips::RA_64 },
  { 32U, Mips::F0 },
  { 33U, Mips::F1 },
  { 34U, Mips::F2 },
  { 35U, Mips::F3 },
  { 36U, Mips::F4 },
  { 37U, Mips::F5 },
  { 38U, Mips::F6 },
  { 39U, Mips::F7 },
  { 40U, Mips::F8 },
  { 41U, Mips::F9 },
  { 42U, Mips::F10 },
  { 43U, Mips::F11 },
  { 44U, Mips::F12 },
  { 45U, Mips::F13 },
  { 46U, Mips::F14 },
  { 47U, Mips::F15 },
  { 48U, Mips::F16 },
  { 49U, Mips::F17 },
  { 50U, Mips::F18 },
  { 51U, Mips::F19 },
  { 52U, Mips::F20 },
  { 53U, Mips::F21 },
  { 54U, Mips::F22 },
  { 55U, Mips::F23 },
  { 56U, Mips::F24 },
  { 57U, Mips::F25 },
  { 58U, Mips::F26 },
  { 59U, Mips::F27 },
  { 60U, Mips::F28 },
  { 61U, Mips::F29 },
  { 62U, Mips::F30 },
  { 63U, Mips::F31 },
  { 64U, Mips::HI },
  { 65U, Mips::LO },
  { 176U, Mips::HI1 },
  { 177U, Mips::LO1 },
  { 178U, Mips::HI2 },
  { 179U, Mips::LO2 },
  { 180U, Mips::HI3 },
  { 181U, Mips::LO3 },
};
extern const unsigned MipsEHFlavour0Dwarf2LSize = sizeof(MipsEHFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair MipsDwarfFlavour0L2Dwarf[] = {
  { Mips::A0, 4U },
  { Mips::A0_64, 4U },
  { Mips::A1, 5U },
  { Mips::A1_64, 5U },
  { Mips::A2, 6U },
  { Mips::A2_64, 6U },
  { Mips::A3, 7U },
  { Mips::A3_64, 7U },
  { Mips::AT, 1U },
  { Mips::AT_64, 1U },
  { Mips::D0_64, 32U },
  { Mips::D1_64, 33U },
  { Mips::D2_64, 34U },
  { Mips::D3_64, 35U },
  { Mips::D4_64, 36U },
  { Mips::D5_64, 37U },
  { Mips::D6_64, 38U },
  { Mips::D7_64, 39U },
  { Mips::D8_64, 40U },
  { Mips::D9_64, 41U },
  { Mips::D10_64, 42U },
  { Mips::D11_64, 43U },
  { Mips::D12_64, 44U },
  { Mips::D13_64, 45U },
  { Mips::D14_64, 46U },
  { Mips::D15_64, 47U },
  { Mips::D16_64, 48U },
  { Mips::D17_64, 49U },
  { Mips::D18_64, 50U },
  { Mips::D19_64, 51U },
  { Mips::D20_64, 52U },
  { Mips::D21_64, 53U },
  { Mips::D22_64, 54U },
  { Mips::D23_64, 55U },
  { Mips::D24_64, 56U },
  { Mips::D25_64, 57U },
  { Mips::D26_64, 58U },
  { Mips::D27_64, 59U },
  { Mips::D28_64, 60U },
  { Mips::D29_64, 61U },
  { Mips::D30_64, 62U },
  { Mips::D31_64, 63U },
  { Mips::F0, 32U },
  { Mips::F1, 33U },
  { Mips::F2, 34U },
  { Mips::F3, 35U },
  { Mips::F4, 36U },
  { Mips::F5, 37U },
  { Mips::F6, 38U },
  { Mips::F7, 39U },
  { Mips::F8, 40U },
  { Mips::F9, 41U },
  { Mips::F10, 42U },
  { Mips::F11, 43U },
  { Mips::F12, 44U },
  { Mips::F13, 45U },
  { Mips::F14, 46U },
  { Mips::F15, 47U },
  { Mips::F16, 48U },
  { Mips::F17, 49U },
  { Mips::F18, 50U },
  { Mips::F19, 51U },
  { Mips::F20, 52U },
  { Mips::F21, 53U },
  { Mips::F22, 54U },
  { Mips::F23, 55U },
  { Mips::F24, 56U },
  { Mips::F25, 57U },
  { Mips::F26, 58U },
  { Mips::F27, 59U },
  { Mips::F28, 60U },
  { Mips::F29, 61U },
  { Mips::F30, 62U },
  { Mips::F31, 63U },
  { Mips::FP, 30U },
  { Mips::FP_64, 30U },
  { Mips::GP, 28U },
  { Mips::GP_64, 28U },
  { Mips::HI, 64U },
  { Mips::HI1, 176U },
  { Mips::HI2, 178U },
  { Mips::HI3, 180U },
  { Mips::K0, 26U },
  { Mips::K0_64, 26U },
  { Mips::K1, 27U },
  { Mips::K1_64, 27U },
  { Mips::LO, 65U },
  { Mips::LO1, 177U },
  { Mips::LO2, 179U },
  { Mips::LO3, 181U },
  { Mips::RA, 31U },
  { Mips::RA_64, 31U },
  { Mips::S0, 16U },
  { Mips::S0_64, 16U },
  { Mips::S1, 17U },
  { Mips::S1_64, 17U },
  { Mips::S2, 18U },
  { Mips::S2_64, 18U },
  { Mips::S3, 19U },
  { Mips::S3_64, 19U },
  { Mips::S4, 20U },
  { Mips::S4_64, 20U },
  { Mips::S5, 21U },
  { Mips::S5_64, 21U },
  { Mips::S6, 22U },
  { Mips::S6_64, 22U },
  { Mips::S7, 23U },
  { Mips::S7_64, 23U },
  { Mips::SP, 29U },
  { Mips::SP_64, 29U },
  { Mips::T0, 8U },
  { Mips::T0_64, 8U },
  { Mips::T1, 9U },
  { Mips::T1_64, 9U },
  { Mips::T2, 10U },
  { Mips::T2_64, 10U },
  { Mips::T3, 11U },
  { Mips::T3_64, 11U },
  { Mips::T4, 12U },
  { Mips::T4_64, 12U },
  { Mips::T5, 13U },
  { Mips::T5_64, 13U },
  { Mips::T6, 14U },
  { Mips::T6_64, 14U },
  { Mips::T7, 15U },
  { Mips::T7_64, 15U },
  { Mips::T8, 24U },
  { Mips::T8_64, 24U },
  { Mips::T9, 25U },
  { Mips::T9_64, 25U },
  { Mips::V0, 2U },
  { Mips::V0_64, 2U },
  { Mips::V1, 3U },
  { Mips::V1_64, 3U },
  { Mips::ZERO, 0U },
  { Mips::ZERO_64, 0U },
};
extern const unsigned MipsDwarfFlavour0L2DwarfSize = sizeof(MipsDwarfFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair MipsEHFlavour0L2Dwarf[] = {
  { Mips::A0, 4U },
  { Mips::A0_64, 4U },
  { Mips::A1, 5U },
  { Mips::A1_64, 5U },
  { Mips::A2, 6U },
  { Mips::A2_64, 6U },
  { Mips::A3, 7U },
  { Mips::A3_64, 7U },
  { Mips::AT, 1U },
  { Mips::AT_64, 1U },
  { Mips::D0_64, 32U },
  { Mips::D1_64, 33U },
  { Mips::D2_64, 34U },
  { Mips::D3_64, 35U },
  { Mips::D4_64, 36U },
  { Mips::D5_64, 37U },
  { Mips::D6_64, 38U },
  { Mips::D7_64, 39U },
  { Mips::D8_64, 40U },
  { Mips::D9_64, 41U },
  { Mips::D10_64, 42U },
  { Mips::D11_64, 43U },
  { Mips::D12_64, 44U },
  { Mips::D13_64, 45U },
  { Mips::D14_64, 46U },
  { Mips::D15_64, 47U },
  { Mips::D16_64, 48U },
  { Mips::D17_64, 49U },
  { Mips::D18_64, 50U },
  { Mips::D19_64, 51U },
  { Mips::D20_64, 52U },
  { Mips::D21_64, 53U },
  { Mips::D22_64, 54U },
  { Mips::D23_64, 55U },
  { Mips::D24_64, 56U },
  { Mips::D25_64, 57U },
  { Mips::D26_64, 58U },
  { Mips::D27_64, 59U },
  { Mips::D28_64, 60U },
  { Mips::D29_64, 61U },
  { Mips::D30_64, 62U },
  { Mips::D31_64, 63U },
  { Mips::F0, 32U },
  { Mips::F1, 33U },
  { Mips::F2, 34U },
  { Mips::F3, 35U },
  { Mips::F4, 36U },
  { Mips::F5, 37U },
  { Mips::F6, 38U },
  { Mips::F7, 39U },
  { Mips::F8, 40U },
  { Mips::F9, 41U },
  { Mips::F10, 42U },
  { Mips::F11, 43U },
  { Mips::F12, 44U },
  { Mips::F13, 45U },
  { Mips::F14, 46U },
  { Mips::F15, 47U },
  { Mips::F16, 48U },
  { Mips::F17, 49U },
  { Mips::F18, 50U },
  { Mips::F19, 51U },
  { Mips::F20, 52U },
  { Mips::F21, 53U },
  { Mips::F22, 54U },
  { Mips::F23, 55U },
  { Mips::F24, 56U },
  { Mips::F25, 57U },
  { Mips::F26, 58U },
  { Mips::F27, 59U },
  { Mips::F28, 60U },
  { Mips::F29, 61U },
  { Mips::F30, 62U },
  { Mips::F31, 63U },
  { Mips::FP, 30U },
  { Mips::FP_64, 30U },
  { Mips::GP, 28U },
  { Mips::GP_64, 28U },
  { Mips::HI, 64U },
  { Mips::HI1, 176U },
  { Mips::HI2, 178U },
  { Mips::HI3, 180U },
  { Mips::K0, 26U },
  { Mips::K0_64, 26U },
  { Mips::K1, 27U },
  { Mips::K1_64, 27U },
  { Mips::LO, 65U },
  { Mips::LO1, 177U },
  { Mips::LO2, 179U },
  { Mips::LO3, 181U },
  { Mips::RA, 31U },
  { Mips::RA_64, 31U },
  { Mips::S0, 16U },
  { Mips::S0_64, 16U },
  { Mips::S1, 17U },
  { Mips::S1_64, 17U },
  { Mips::S2, 18U },
  { Mips::S2_64, 18U },
  { Mips::S3, 19U },
  { Mips::S3_64, 19U },
  { Mips::S4, 20U },
  { Mips::S4_64, 20U },
  { Mips::S5, 21U },
  { Mips::S5_64, 21U },
  { Mips::S6, 22U },
  { Mips::S6_64, 22U },
  { Mips::S7, 23U },
  { Mips::S7_64, 23U },
  { Mips::SP, 29U },
  { Mips::SP_64, 29U },
  { Mips::T0, 8U },
  { Mips::T0_64, 8U },
  { Mips::T1, 9U },
  { Mips::T1_64, 9U },
  { Mips::T2, 10U },
  { Mips::T2_64, 10U },
  { Mips::T3, 11U },
  { Mips::T3_64, 11U },
  { Mips::T4, 12U },
  { Mips::T4_64, 12U },
  { Mips::T5, 13U },
  { Mips::T5_64, 13U },
  { Mips::T6, 14U },
  { Mips::T6_64, 14U },
  { Mips::T7, 15U },
  { Mips::T7_64, 15U },
  { Mips::T8, 24U },
  { Mips::T8_64, 24U },
  { Mips::T9, 25U },
  { Mips::T9_64, 25U },
  { Mips::V0, 2U },
  { Mips::V0_64, 2U },
  { Mips::V1, 3U },
  { Mips::V1_64, 3U },
  { Mips::ZERO, 0U },
  { Mips::ZERO_64, 0U },
};
extern const unsigned MipsEHFlavour0L2DwarfSize = sizeof(MipsEHFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const uint16_t MipsRegEncodingTable[] = {
  0,
  4,
  4,
  5,
  5,
  6,
  6,
  7,
  7,
  0,
  0,
  1,
  2,
  3,
  1,
  1,
  0,
  0,
  2,
  1,
  4,
  2,
  6,
  3,
  8,
  4,
  10,
  5,
  12,
  6,
  14,
  7,
  16,
  8,
  18,
  9,
  20,
  10,
  22,
  11,
  24,
  12,
  26,
  13,
  28,
  14,
  30,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  0,
  30,
  30,
  28,
  28,
  0,
  0,
  0,
  0,
  0,
  29,
  29,
  26,
  26,
  27,
  27,
  0,
  0,
  0,
  0,
  0,
  0,
  31,
  31,
  16,
  16,
  17,
  17,
  18,
  18,
  19,
  19,
  20,
  20,
  21,
  21,
  22,
  22,
  23,
  23,
  29,
  29,
  8,
  8,
  9,
  9,
  10,
  10,
  11,
  11,
  12,
  12,
  13,
  13,
  14,
  14,
  15,
  15,
  24,
  24,
  25,
  25,
  2,
  2,
  3,
  3,
  0,
  0,
};
static inline void InitMipsMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(MipsRegDesc, 176, RA, PC, MipsMCRegisterClasses, 25, MipsRegUnitRoots, 87, MipsRegDiffLists, MipsRegStrings, MipsSubRegIdxLists, 13,
  MipsRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(MipsDwarfFlavour0Dwarf2L, MipsDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(MipsEHFlavour0Dwarf2L, MipsEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(MipsDwarfFlavour0L2Dwarf, MipsDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(MipsEHFlavour0L2Dwarf, MipsEHFlavour0L2DwarfSize, true);
    break;
  }
}

} // End llvm namespace 
#endif // GET_REGINFO_MC_DESC

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Register Information Header Fragment                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_HEADER
#undef GET_REGINFO_HEADER
#include "llvm/Target/TargetRegisterInfo.h"

namespace llvm {

struct MipsGenRegisterInfo : public TargetRegisterInfo {
  explicit MipsGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0, unsigned PC = 0);
  virtual bool needsStackRealignment(const MachineFunction &) const
     { return false; }
  virtual unsigned composeSubRegIndicesImpl(unsigned, unsigned) const;
  virtual const TargetRegisterClass *getSubClassWithSubReg(const TargetRegisterClass*, unsigned) const;
  virtual const RegClassWeight &getRegClassWeight(const TargetRegisterClass *RC) const;
  virtual unsigned getRegUnitWeight(unsigned RegUnit) const;
  virtual unsigned getNumRegPressureSets() const;
  virtual const char *getRegPressureSetName(unsigned Idx) const;
  virtual unsigned getRegPressureSetLimit(unsigned Idx) const;
  virtual const int *getRegClassPressureSets(const TargetRegisterClass *RC) const;
  virtual const int *getRegUnitPressureSets(unsigned RegUnit) const;
};

namespace Mips { // Register classes
  extern const TargetRegisterClass CPURegsRegClass;
  extern const TargetRegisterClass DSPRegsRegClass;
  extern const TargetRegisterClass FGR32RegClass;
  extern const TargetRegisterClass CPU16RegsRegClass;
  extern const TargetRegisterClass HIRegsDSPRegClass;
  extern const TargetRegisterClass LORegsDSPRegClass;
  extern const TargetRegisterClass CCRRegClass;
  extern const TargetRegisterClass CPURARegRegClass;
  extern const TargetRegisterClass CPUSPRegRegClass;
  extern const TargetRegisterClass DSPCCRegClass;
  extern const TargetRegisterClass HIRegsRegClass;
  extern const TargetRegisterClass HWRegsRegClass;
  extern const TargetRegisterClass LORegsRegClass;
  extern const TargetRegisterClass CPU64RegsRegClass;
  extern const TargetRegisterClass FGR64RegClass;
  extern const TargetRegisterClass AFGR64RegClass;
  extern const TargetRegisterClass CPU64Regs_with_sub_32_in_CPU16RegsRegClass;
  extern const TargetRegisterClass ACRegsDSPRegClass;
  extern const TargetRegisterClass ACRegsRegClass;
  extern const TargetRegisterClass CPU64Regs_with_sub_32_in_CPURARegRegClass;
  extern const TargetRegisterClass CPU64Regs_with_sub_32_in_CPUSPRegRegClass;
  extern const TargetRegisterClass HIRegs64RegClass;
  extern const TargetRegisterClass HWRegs64RegClass;
  extern const TargetRegisterClass LORegs64RegClass;
  extern const TargetRegisterClass ACRegs128RegClass;
} // end of namespace Mips

} // End llvm namespace 
#endif // GET_REGINFO_HEADER

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Register and Register Classes Information                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_TARGET_DESC
#undef GET_REGINFO_TARGET_DESC
namespace llvm {

extern const MCRegisterClass MipsMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i32, MVT::Other,
  /* 2 */ MVT::i64, MVT::Other,
  /* 4 */ MVT::f32, MVT::Other,
  /* 6 */ MVT::f64, MVT::Other,
  /* 8 */ MVT::v4i8, MVT::v2i16, MVT::Other,
  /* 11 */ MVT::Untyped, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "sub_32", "sub_dsp16_19", "sub_dsp20", "sub_dsp21", "sub_dsp22", "sub_dsp23", "sub_fpeven", "sub_fpodd", "sub_hi", "sub_lo", "sub_hi_then_sub_32", "sub_32_sub_hi_then_sub_32" };


static const unsigned SubRegIndexLaneMaskTable[] = {
  ~0u,
  0x00000001, // sub_32
  0x00000002, // sub_dsp16_19
  0x00000004, // sub_dsp20
  0x00000008, // sub_dsp21
  0x00000010, // sub_dsp22
  0x00000020, // sub_dsp23
  0x00000040, // sub_fpeven
  0x00000080, // sub_fpodd
  0x00000100, // sub_hi
  0x00000001, // sub_lo
  0x00000100, // sub_hi_then_sub_32
  0x00000101, // sub_32_sub_hi_then_sub_32
 };



static const TargetRegisterClass *const NullRegClasses[] = { NULL };

static const uint32_t CPURegsSubClassMask[] = {
  0x0000018b, 
  0x00192000, // sub_32
};

static const uint32_t DSPRegsSubClassMask[] = {
  0x0000018b, 
  0x00192000, // sub_32
};

static const uint32_t FGR32SubClassMask[] = {
  0x00000004, 
  0x00004000, // sub_32
  0x00008000, // sub_fpeven
  0x00008000, // sub_fpodd
};

static const uint32_t CPU16RegsSubClassMask[] = {
  0x00000008, 
  0x00010000, // sub_32
};

static const uint32_t HIRegsDSPSubClassMask[] = {
  0x00000410, 
  0x00200000, // sub_32
  0x00060000, // sub_hi
  0x01000000, // sub_hi_then_sub_32
};

static const uint32_t LORegsDSPSubClassMask[] = {
  0x00001020, 
  0x01800000, // sub_32
  0x00060000, // sub_lo
};

static const uint32_t CCRSubClassMask[] = {
  0x00000040, 
};

static const uint32_t CPURARegSubClassMask[] = {
  0x00000080, 
  0x00080000, // sub_32
};

static const uint32_t CPUSPRegSubClassMask[] = {
  0x00000100, 
  0x00100000, // sub_32
};

static const uint32_t DSPCCSubClassMask[] = {
  0x00000200, 
};

static const uint32_t HIRegsSubClassMask[] = {
  0x00000400, 
  0x00200000, // sub_32
  0x00040000, // sub_hi
  0x01000000, // sub_hi_then_sub_32
};

static const uint32_t HWRegsSubClassMask[] = {
  0x00000800, 
};

static const uint32_t LORegsSubClassMask[] = {
  0x00001000, 
  0x01800000, // sub_32
  0x00040000, // sub_lo
};

static const uint32_t CPU64RegsSubClassMask[] = {
  0x00192000, 
};

static const uint32_t FGR64SubClassMask[] = {
  0x00004000, 
};

static const uint32_t AFGR64SubClassMask[] = {
  0x00008000, 
};

static const uint32_t CPU64Regs_with_sub_32_in_CPU16RegsSubClassMask[] = {
  0x00010000, 
};

static const uint32_t ACRegsDSPSubClassMask[] = {
  0x00060000, 
  0x01000000, // sub_32_sub_hi_then_sub_32
};

static const uint32_t ACRegsSubClassMask[] = {
  0x00040000, 
  0x01000000, // sub_32_sub_hi_then_sub_32
};

static const uint32_t CPU64Regs_with_sub_32_in_CPURARegSubClassMask[] = {
  0x00080000, 
};

static const uint32_t CPU64Regs_with_sub_32_in_CPUSPRegSubClassMask[] = {
  0x00100000, 
};

static const uint32_t HIRegs64SubClassMask[] = {
  0x00200000, 
  0x01000000, // sub_hi
};

static const uint32_t HWRegs64SubClassMask[] = {
  0x00400000, 
};

static const uint32_t LORegs64SubClassMask[] = {
  0x00800000, 
  0x01000000, // sub_lo
};

static const uint32_t ACRegs128SubClassMask[] = {
  0x01000000, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 1, 0,
  /* 2 */ 1, 7, 8, 0,
  /* 6 */ 9, 0,
  /* 8 */ 1, 10, 0,
  /* 11 */ 1, 9, 11, 0,
  /* 15 */ 12, 0,
};

static const TargetRegisterClass *const CPURegsSuperclasses[] = {
  &Mips::DSPRegsRegClass,
  NULL
};

static const TargetRegisterClass *const DSPRegsSuperclasses[] = {
  &Mips::CPURegsRegClass,
  NULL
};

static const TargetRegisterClass *const CPU16RegsSuperclasses[] = {
  &Mips::CPURegsRegClass,
  &Mips::DSPRegsRegClass,
  NULL
};

static const TargetRegisterClass *const CPURARegSuperclasses[] = {
  &Mips::CPURegsRegClass,
  &Mips::DSPRegsRegClass,
  NULL
};

static const TargetRegisterClass *const CPUSPRegSuperclasses[] = {
  &Mips::CPURegsRegClass,
  &Mips::DSPRegsRegClass,
  NULL
};

static const TargetRegisterClass *const HIRegsSuperclasses[] = {
  &Mips::HIRegsDSPRegClass,
  NULL
};

static const TargetRegisterClass *const LORegsSuperclasses[] = {
  &Mips::LORegsDSPRegClass,
  NULL
};

static const TargetRegisterClass *const CPU64Regs_with_sub_32_in_CPU16RegsSuperclasses[] = {
  &Mips::CPU64RegsRegClass,
  NULL
};

static const TargetRegisterClass *const ACRegsSuperclasses[] = {
  &Mips::ACRegsDSPRegClass,
  NULL
};

static const TargetRegisterClass *const CPU64Regs_with_sub_32_in_CPURARegSuperclasses[] = {
  &Mips::CPU64RegsRegClass,
  NULL
};

static const TargetRegisterClass *const CPU64Regs_with_sub_32_in_CPUSPRegSuperclasses[] = {
  &Mips::CPU64RegsRegClass,
  NULL
};

namespace Mips {   // Register class instances
  extern const TargetRegisterClass CPURegsRegClass = {
    &MipsMCRegisterClasses[CPURegsRegClassID],
    VTLists + 0,
    CPURegsSubClassMask,
    SuperRegIdxSeqs + 0,
    CPURegsSuperclasses,
    0
  };

  extern const TargetRegisterClass DSPRegsRegClass = {
    &MipsMCRegisterClasses[DSPRegsRegClassID],
    VTLists + 8,
    DSPRegsSubClassMask,
    SuperRegIdxSeqs + 0,
    DSPRegsSuperclasses,
    0
  };

  extern const TargetRegisterClass FGR32RegClass = {
    &MipsMCRegisterClasses[FGR32RegClassID],
    VTLists + 4,
    FGR32SubClassMask,
    SuperRegIdxSeqs + 2,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass CPU16RegsRegClass = {
    &MipsMCRegisterClasses[CPU16RegsRegClassID],
    VTLists + 0,
    CPU16RegsSubClassMask,
    SuperRegIdxSeqs + 0,
    CPU16RegsSuperclasses,
    0
  };

  extern const TargetRegisterClass HIRegsDSPRegClass = {
    &MipsMCRegisterClasses[HIRegsDSPRegClassID],
    VTLists + 0,
    HIRegsDSPSubClassMask,
    SuperRegIdxSeqs + 11,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass LORegsDSPRegClass = {
    &MipsMCRegisterClasses[LORegsDSPRegClassID],
    VTLists + 0,
    LORegsDSPSubClassMask,
    SuperRegIdxSeqs + 8,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass CCRRegClass = {
    &MipsMCRegisterClasses[CCRRegClassID],
    VTLists + 0,
    CCRSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass CPURARegRegClass = {
    &MipsMCRegisterClasses[CPURARegRegClassID],
    VTLists + 0,
    CPURARegSubClassMask,
    SuperRegIdxSeqs + 0,
    CPURARegSuperclasses,
    0
  };

  extern const TargetRegisterClass CPUSPRegRegClass = {
    &MipsMCRegisterClasses[CPUSPRegRegClassID],
    VTLists + 0,
    CPUSPRegSubClassMask,
    SuperRegIdxSeqs + 0,
    CPUSPRegSuperclasses,
    0
  };

  extern const TargetRegisterClass DSPCCRegClass = {
    &MipsMCRegisterClasses[DSPCCRegClassID],
    VTLists + 8,
    DSPCCSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass HIRegsRegClass = {
    &MipsMCRegisterClasses[HIRegsRegClassID],
    VTLists + 0,
    HIRegsSubClassMask,
    SuperRegIdxSeqs + 11,
    HIRegsSuperclasses,
    0
  };

  extern const TargetRegisterClass HWRegsRegClass = {
    &MipsMCRegisterClasses[HWRegsRegClassID],
    VTLists + 0,
    HWRegsSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass LORegsRegClass = {
    &MipsMCRegisterClasses[LORegsRegClassID],
    VTLists + 0,
    LORegsSubClassMask,
    SuperRegIdxSeqs + 8,
    LORegsSuperclasses,
    0
  };

  extern const TargetRegisterClass CPU64RegsRegClass = {
    &MipsMCRegisterClasses[CPU64RegsRegClassID],
    VTLists + 2,
    CPU64RegsSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass FGR64RegClass = {
    &MipsMCRegisterClasses[FGR64RegClassID],
    VTLists + 6,
    FGR64SubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass AFGR64RegClass = {
    &MipsMCRegisterClasses[AFGR64RegClassID],
    VTLists + 6,
    AFGR64SubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass CPU64Regs_with_sub_32_in_CPU16RegsRegClass = {
    &MipsMCRegisterClasses[CPU64Regs_with_sub_32_in_CPU16RegsRegClassID],
    VTLists + 2,
    CPU64Regs_with_sub_32_in_CPU16RegsSubClassMask,
    SuperRegIdxSeqs + 1,
    CPU64Regs_with_sub_32_in_CPU16RegsSuperclasses,
    0
  };

  extern const TargetRegisterClass ACRegsDSPRegClass = {
    &MipsMCRegisterClasses[ACRegsDSPRegClassID],
    VTLists + 11,
    ACRegsDSPSubClassMask,
    SuperRegIdxSeqs + 15,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass ACRegsRegClass = {
    &MipsMCRegisterClasses[ACRegsRegClassID],
    VTLists + 11,
    ACRegsSubClassMask,
    SuperRegIdxSeqs + 15,
    ACRegsSuperclasses,
    0
  };

  extern const TargetRegisterClass CPU64Regs_with_sub_32_in_CPURARegRegClass = {
    &MipsMCRegisterClasses[CPU64Regs_with_sub_32_in_CPURARegRegClassID],
    VTLists + 2,
    CPU64Regs_with_sub_32_in_CPURARegSubClassMask,
    SuperRegIdxSeqs + 1,
    CPU64Regs_with_sub_32_in_CPURARegSuperclasses,
    0
  };

  extern const TargetRegisterClass CPU64Regs_with_sub_32_in_CPUSPRegRegClass = {
    &MipsMCRegisterClasses[CPU64Regs_with_sub_32_in_CPUSPRegRegClassID],
    VTLists + 2,
    CPU64Regs_with_sub_32_in_CPUSPRegSubClassMask,
    SuperRegIdxSeqs + 1,
    CPU64Regs_with_sub_32_in_CPUSPRegSuperclasses,
    0
  };

  extern const TargetRegisterClass HIRegs64RegClass = {
    &MipsMCRegisterClasses[HIRegs64RegClassID],
    VTLists + 2,
    HIRegs64SubClassMask,
    SuperRegIdxSeqs + 6,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass HWRegs64RegClass = {
    &MipsMCRegisterClasses[HWRegs64RegClassID],
    VTLists + 2,
    HWRegs64SubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass LORegs64RegClass = {
    &MipsMCRegisterClasses[LORegs64RegClassID],
    VTLists + 2,
    LORegs64SubClassMask,
    SuperRegIdxSeqs + 9,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass ACRegs128RegClass = {
    &MipsMCRegisterClasses[ACRegs128RegClassID],
    VTLists + 11,
    ACRegs128SubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &Mips::CPURegsRegClass,
    &Mips::DSPRegsRegClass,
    &Mips::FGR32RegClass,
    &Mips::CPU16RegsRegClass,
    &Mips::HIRegsDSPRegClass,
    &Mips::LORegsDSPRegClass,
    &Mips::CCRRegClass,
    &Mips::CPURARegRegClass,
    &Mips::CPUSPRegRegClass,
    &Mips::DSPCCRegClass,
    &Mips::HIRegsRegClass,
    &Mips::HWRegsRegClass,
    &Mips::LORegsRegClass,
    &Mips::CPU64RegsRegClass,
    &Mips::FGR64RegClass,
    &Mips::AFGR64RegClass,
    &Mips::CPU64Regs_with_sub_32_in_CPU16RegsRegClass,
    &Mips::ACRegsDSPRegClass,
    &Mips::ACRegsRegClass,
    &Mips::CPU64Regs_with_sub_32_in_CPURARegRegClass,
    &Mips::CPU64Regs_with_sub_32_in_CPUSPRegRegClass,
    &Mips::HIRegs64RegClass,
    &Mips::HWRegs64RegClass,
    &Mips::LORegs64RegClass,
    &Mips::ACRegs128RegClass,
  };
}

static const TargetRegisterInfoDesc MipsRegInfoDesc[] = { // Extra Descriptors
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 0 },
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 0 },
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
};
unsigned MipsGenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t RowMap[12] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 
  };
  static const uint8_t Rows[2][12] = {
    { 11, 0, 0, 0, 0, 0, 0, 0, 11, 1, 0, 0, },
    { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
  };

  --IdxA; assert(IdxA < 12);
  --IdxB; assert(IdxB < 12);
  return Rows[RowMap[IdxA]][IdxB];
}

const TargetRegisterClass *MipsGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[25][12] = {
    {	// CPURegs
      0,	// sub_32
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// DSPRegs
      0,	// sub_32
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// FGR32
      0,	// sub_32
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// CPU16Regs
      0,	// sub_32
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// HIRegsDSP
      0,	// sub_32
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// LORegsDSP
      0,	// sub_32
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// CCR
      0,	// sub_32
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// CPURAReg
      0,	// sub_32
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// CPUSPReg
      0,	// sub_32
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// DSPCC
      0,	// sub_32
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// HIRegs
      0,	// sub_32
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// HWRegs
      0,	// sub_32
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// LORegs
      0,	// sub_32
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// CPU64Regs
      14,	// sub_32 -> CPU64Regs
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// FGR64
      15,	// sub_32 -> FGR64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// AFGR64
      0,	// sub_32
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      16,	// sub_fpeven -> AFGR64
      16,	// sub_fpodd -> AFGR64
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// CPU64Regs_with_sub_32_in_CPU16Regs
      17,	// sub_32 -> CPU64Regs_with_sub_32_in_CPU16Regs
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// ACRegsDSP
      0,	// sub_32
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      18,	// sub_hi -> ACRegsDSP
      18,	// sub_lo -> ACRegsDSP
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// ACRegs
      0,	// sub_32
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      19,	// sub_hi -> ACRegs
      19,	// sub_lo -> ACRegs
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// CPU64Regs_with_sub_32_in_CPURAReg
      20,	// sub_32 -> CPU64Regs_with_sub_32_in_CPURAReg
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// CPU64Regs_with_sub_32_in_CPUSPReg
      21,	// sub_32 -> CPU64Regs_with_sub_32_in_CPUSPReg
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// HIRegs64
      22,	// sub_32 -> HIRegs64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// HWRegs64
      0,	// sub_32
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// LORegs64
      24,	// sub_32 -> LORegs64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// ACRegs128
      25,	// sub_32 -> ACRegs128
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      25,	// sub_hi -> ACRegs128
      25,	// sub_lo -> ACRegs128
      25,	// sub_hi_then_sub_32 -> ACRegs128
      25,	// sub_32_sub_hi_then_sub_32 -> ACRegs128
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 12 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : 0;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &MipsGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 32},  	// CPURegs
    {1, 32},  	// DSPRegs
    {1, 32},  	// FGR32
    {1, 8},  	// CPU16Regs
    {1, 4},  	// HIRegsDSP
    {1, 4},  	// LORegsDSP
    {0, 0},  	// CCR
    {1, 1},  	// CPURAReg
    {1, 1},  	// CPUSPReg
    {1, 1},  	// DSPCC
    {1, 1},  	// HIRegs
    {0, 0},  	// HWRegs
    {1, 1},  	// LORegs
    {1, 32},  	// CPU64Regs
    {1, 32},  	// FGR64
    {2, 32},  	// AFGR64
    {1, 8},  	// CPU64Regs_with_sub_32_in_CPU16Regs
    {2, 8},  	// ACRegsDSP
    {2, 2},  	// ACRegs
    {1, 1},  	// CPU64Regs_with_sub_32_in_CPURAReg
    {1, 1},  	// CPU64Regs_with_sub_32_in_CPUSPReg
    {1, 1},  	// HIRegs64
    {0, 0},  	// HWRegs64
    {1, 1},  	// LORegs64
    {2, 2},  	// ACRegs128
    {0, 0} };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned MipsGenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 87 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned MipsGenRegisterInfo::getNumRegPressureSets() const {
  return 10;
}

// Get the name of this register unit pressure set.
const char *MipsGenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *PressureNameTable[] = {
    "CPURegs",
    "FGR32",
    "CPU16Regs",
    "DSPCC",
    "ACRegsDSP",
    "ACRegs",
    "CPU64Regs_with_sub_32_in_CPURAReg",
    "CPU64Regs_with_sub_32_in_CPUSPReg",
    "HIRegsDSP+ACRegs",
    "LORegsDSP+ACRegs",
    0 };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned MipsGenRegisterInfo::
getRegPressureSetLimit(unsigned Idx) const {
  static const unsigned PressureLimitTable[] = {
    32,  	// 0: CPURegs
    32,  	// 1: FGR32
    8,  	// 2: CPU16Regs
    1,  	// 3: DSPCC
    8,  	// 4: ACRegsDSP
    2,  	// 5: ACRegs
    1,  	// 6: CPU64Regs_with_sub_32_in_CPURAReg
    1,  	// 7: CPU64Regs_with_sub_32_in_CPUSPReg
    5,  	// 8: HIRegsDSP+ACRegs
    5,  	// 9: LORegsDSP+ACRegs
    0 };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
    0,  -1,  	// #0 CPURegs
    0,  -1,  	// #2 DSPRegs
    1,  -1,  	// #4 FGR32
    0,  2,  -1,  	// #6 CPU16Regs
    4,  8,  -1,  	// #9 HIRegsDSP
    4,  9,  -1,  	// #12 LORegsDSP
    -1,  	// #15 CCR
    -1,  	// #16 CPURAReg
    -1,  	// #17 CPUSPReg
    3,  -1,  	// #18 DSPCC
    4,  5,  8,  9,  -1,  	// #20 HIRegs
    -1,  	// #25 HWRegs
    4,  5,  8,  9,  -1,  	// #26 LORegs
    0,  -1,  	// #31 CPU64Regs
    1,  -1,  	// #33 FGR64
    1,  -1,  	// #35 AFGR64
    0,  2,  -1,  	// #37 CPU64Regs_with_sub_32_in_CPU16Regs
    4,  -1,  	// #40 ACRegsDSP
    4,  5,  8,  9,  -1,  	// #42 ACRegs
    0,  6,  -1,  	// #47 CPU64Regs_with_sub_32_in_CPURAReg
    0,  7,  -1,  	// #50 CPU64Regs_with_sub_32_in_CPUSPReg
    4,  5,  8,  9,  -1,  	// #53 HIRegs64
    -1,  	// #58 HWRegs64
    4,  5,  8,  9,  -1,  	// #59 LORegs64
    4,  5,  8,  9,  -1,  	// #64 ACRegs128
    -1 };

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* MipsGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const unsigned RCSetStartTable[] = {
    0,2,4,6,9,12,15,16,17,18,20,25,26,31,33,35,37,40,42,47,50,53,58,59,64,0 };
  unsigned SetListStart = RCSetStartTable[RC->getID()];
  return &RCSetsTable[SetListStart];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int* MipsGenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 87 && "invalid register unit");
  static const unsigned RUSetStartTable[] = {
    6,6,6,6,20,20,12,9,12,9,12,9,0,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,18,15,15,15,15,15,15,15,15,15,15,15,0,0,15,15,0,0,15,47,6,6,0,0,0,0,0,0,50,0,0,0,0,0,0,0,0,0,0,6,6,0,0 };
  unsigned SetListStart = RUSetStartTable[RegUnit];
  return &RCSetsTable[SetListStart];
}

extern const MCRegisterDesc MipsRegDesc[];
extern const MCPhysReg MipsRegDiffLists[];
extern const char MipsRegStrings[];
extern const uint16_t MipsRegUnitRoots[][2];
extern const uint16_t MipsSubRegIdxLists[];
extern const uint16_t MipsRegEncodingTable[];
// Mips Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair MipsDwarfFlavour0Dwarf2L[];
extern const unsigned MipsDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair MipsEHFlavour0Dwarf2L[];
extern const unsigned MipsEHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair MipsDwarfFlavour0L2Dwarf[];
extern const unsigned MipsDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair MipsEHFlavour0L2Dwarf[];
extern const unsigned MipsEHFlavour0L2DwarfSize;

MipsGenRegisterInfo::
MipsGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour, unsigned PC)
  : TargetRegisterInfo(MipsRegInfoDesc, RegisterClasses, RegisterClasses+25,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable) {
  InitMCRegisterInfo(MipsRegDesc, 176, RA, PC,
                     MipsMCRegisterClasses, 25,
                     MipsRegUnitRoots,
                     87,
                     MipsRegDiffLists,
                     MipsRegStrings,
                     MipsSubRegIdxLists,
                     13,
                     MipsRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(MipsDwarfFlavour0Dwarf2L, MipsDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(MipsEHFlavour0Dwarf2L, MipsEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(MipsDwarfFlavour0L2Dwarf, MipsDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(MipsEHFlavour0L2Dwarf, MipsEHFlavour0L2DwarfSize, true);
    break;
  }
}

static const MCPhysReg CSR_N32_SaveList[] = { Mips::D31_64, Mips::D29_64, Mips::D27_64, Mips::D25_64, Mips::D24_64, Mips::D23_64, Mips::D22_64, Mips::D21_64, Mips::RA_64, Mips::FP_64, Mips::GP_64, Mips::S7_64, Mips::S6_64, Mips::S5_64, Mips::S4_64, Mips::S3_64, Mips::S2_64, Mips::S1_64, Mips::S0_64, 0 };
static const uint32_t CSR_N32_RegMask[] = { 0x00000000, 0xabe00140, 0x00000000, 0x0001e55f, 0x000ffffc, 0x00000000, };
static const MCPhysReg CSR_N64_SaveList[] = { Mips::D31_64, Mips::D30_64, Mips::D29_64, Mips::D28_64, Mips::D27_64, Mips::D26_64, Mips::D25_64, Mips::D24_64, Mips::RA_64, Mips::FP_64, Mips::GP_64, Mips::S7_64, Mips::S6_64, Mips::S5_64, Mips::S4_64, Mips::S3_64, Mips::S2_64, Mips::S1_64, Mips::S0_64, 0 };
static const uint32_t CSR_N64_RegMask[] = { 0x00000000, 0xff005500, 0x00000000, 0x0001e7f8, 0x000ffffc, 0x00000000, };
static const MCPhysReg CSR_O32_SaveList[] = { Mips::D15, Mips::D14, Mips::D13, Mips::D12, Mips::D11, Mips::D10, Mips::RA, Mips::FP, Mips::S7, Mips::S6, Mips::S5, Mips::S4, Mips::S3, Mips::S2, Mips::S1, Mips::S0, 0 };
static const uint32_t CSR_O32_RegMask[] = { 0x00000000, 0x00005550, 0x80000000, 0x000027ff, 0x00055554, 0x00000000, };
static const MCPhysReg CSR_SingleFloatOnly_SaveList[] = { Mips::F31, Mips::F30, Mips::F29, Mips::F28, Mips::F27, Mips::F26, Mips::F25, Mips::F24, Mips::F23, Mips::F22, Mips::F21, Mips::F20, Mips::RA, Mips::FP, Mips::S7, Mips::S6, Mips::S5, Mips::S4, Mips::S3, Mips::S2, Mips::S1, Mips::S0, 0 };
static const uint32_t CSR_SingleFloatOnly_RegMask[] = { 0x00000000, 0x00005550, 0x80000000, 0x000027ff, 0x00055554, 0x00000000, };


} // End llvm namespace 
#endif // GET_REGINFO_TARGET_DESC

