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
extern const MCRegisterClass PPCMCRegisterClasses[];

namespace PPC {
enum {
  NoRegister,
  CARRY = 1,
  CR0 = 2,
  CR0EQ = 3,
  CR0GT = 4,
  CR0LT = 5,
  CR0UN = 6,
  CR1 = 7,
  CR1EQ = 8,
  CR1GT = 9,
  CR1LT = 10,
  CR1UN = 11,
  CR2 = 12,
  CR2EQ = 13,
  CR2GT = 14,
  CR2LT = 15,
  CR2UN = 16,
  CR3 = 17,
  CR3EQ = 18,
  CR3GT = 19,
  CR3LT = 20,
  CR3UN = 21,
  CR4 = 22,
  CR4EQ = 23,
  CR4GT = 24,
  CR4LT = 25,
  CR4UN = 26,
  CR5 = 27,
  CR5EQ = 28,
  CR5GT = 29,
  CR5LT = 30,
  CR5UN = 31,
  CR6 = 32,
  CR6EQ = 33,
  CR6GT = 34,
  CR6LT = 35,
  CR6UN = 36,
  CR7 = 37,
  CR7EQ = 38,
  CR7GT = 39,
  CR7LT = 40,
  CR7UN = 41,
  CTR = 42,
  CTR8 = 43,
  F0 = 44,
  F1 = 45,
  F2 = 46,
  F3 = 47,
  F4 = 48,
  F5 = 49,
  F6 = 50,
  F7 = 51,
  F8 = 52,
  F9 = 53,
  F10 = 54,
  F11 = 55,
  F12 = 56,
  F13 = 57,
  F14 = 58,
  F15 = 59,
  F16 = 60,
  F17 = 61,
  F18 = 62,
  F19 = 63,
  F20 = 64,
  F21 = 65,
  F22 = 66,
  F23 = 67,
  F24 = 68,
  F25 = 69,
  F26 = 70,
  F27 = 71,
  F28 = 72,
  F29 = 73,
  F30 = 74,
  F31 = 75,
  FP = 76,
  FP8 = 77,
  LR = 78,
  LR8 = 79,
  R0 = 80,
  R1 = 81,
  R2 = 82,
  R3 = 83,
  R4 = 84,
  R5 = 85,
  R6 = 86,
  R7 = 87,
  R8 = 88,
  R9 = 89,
  R10 = 90,
  R11 = 91,
  R12 = 92,
  R13 = 93,
  R14 = 94,
  R15 = 95,
  R16 = 96,
  R17 = 97,
  R18 = 98,
  R19 = 99,
  R20 = 100,
  R21 = 101,
  R22 = 102,
  R23 = 103,
  R24 = 104,
  R25 = 105,
  R26 = 106,
  R27 = 107,
  R28 = 108,
  R29 = 109,
  R30 = 110,
  R31 = 111,
  RM = 112,
  V0 = 113,
  V1 = 114,
  V2 = 115,
  V3 = 116,
  V4 = 117,
  V5 = 118,
  V6 = 119,
  V7 = 120,
  V8 = 121,
  V9 = 122,
  V10 = 123,
  V11 = 124,
  V12 = 125,
  V13 = 126,
  V14 = 127,
  V15 = 128,
  V16 = 129,
  V17 = 130,
  V18 = 131,
  V19 = 132,
  V20 = 133,
  V21 = 134,
  V22 = 135,
  V23 = 136,
  V24 = 137,
  V25 = 138,
  V26 = 139,
  V27 = 140,
  V28 = 141,
  V29 = 142,
  V30 = 143,
  V31 = 144,
  VRSAVE = 145,
  X0 = 146,
  X1 = 147,
  X2 = 148,
  X3 = 149,
  X4 = 150,
  X5 = 151,
  X6 = 152,
  X7 = 153,
  X8 = 154,
  X9 = 155,
  X10 = 156,
  X11 = 157,
  X12 = 158,
  X13 = 159,
  X14 = 160,
  X15 = 161,
  X16 = 162,
  X17 = 163,
  X18 = 164,
  X19 = 165,
  X20 = 166,
  X21 = 167,
  X22 = 168,
  X23 = 169,
  X24 = 170,
  X25 = 171,
  X26 = 172,
  X27 = 173,
  X28 = 174,
  X29 = 175,
  X30 = 176,
  X31 = 177,
  ZERO = 178,
  ZERO8 = 179,
  NUM_TARGET_REGS 	// 180
};
}

// Register classes
namespace PPC {
enum {
  GPRCRegClassID = 0,
  GPRC_NOR0RegClassID = 1,
  CRBITRCRegClassID = 2,
  F4RCRegClassID = 3,
  GPRC_and_GPRC_NOR0RegClassID = 4,
  CRRCRegClassID = 5,
  CARRYRCRegClassID = 6,
  CTRRCRegClassID = 7,
  VRSAVERCRegClassID = 8,
  G8RCRegClassID = 9,
  G8RC_NOX0RegClassID = 10,
  F8RCRegClassID = 11,
  G8RC_and_G8RC_NOX0RegClassID = 12,
  CTRRC8RegClassID = 13,
  VRRCRegClassID = 14
  };
}

// Subregister indices
namespace PPC {
enum {
  NoSubRegister,
  sub_32,	// 1
  sub_eq,	// 2
  sub_gt,	// 3
  sub_lt,	// 4
  sub_un,	// 5
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

extern const MCPhysReg PPCRegDiffLists[] = {
  /* 0 */ 0, 0,
  /* 2 */ 1, 1, 1, 1, 0,
  /* 7 */ 5, 1, 1, 1, 0,
  /* 12 */ 9, 1, 1, 1, 0,
  /* 17 */ 13, 1, 1, 1, 0,
  /* 22 */ 17, 1, 1, 1, 0,
  /* 27 */ 21, 1, 1, 1, 0,
  /* 32 */ 25, 1, 1, 1, 0,
  /* 37 */ 29, 1, 1, 1, 0,
  /* 42 */ 2, 0,
  /* 44 */ 3, 65535, 65535, 3, 0,
  /* 49 */ 6, 0,
  /* 51 */ 7, 0,
  /* 53 */ 10, 0,
  /* 55 */ 11, 0,
  /* 57 */ 14, 0,
  /* 59 */ 15, 0,
  /* 61 */ 18, 0,
  /* 63 */ 19, 0,
  /* 65 */ 22, 0,
  /* 67 */ 23, 0,
  /* 69 */ 26, 0,
  /* 71 */ 27, 0,
  /* 73 */ 30, 0,
  /* 75 */ 31, 0,
  /* 77 */ 66, 0,
  /* 79 */ 67, 0,
  /* 81 */ 136, 0,
  /* 83 */ 65445, 0,
  /* 85 */ 65456, 0,
  /* 87 */ 65460, 0,
  /* 89 */ 65467, 0,
  /* 91 */ 65470, 0,
  /* 93 */ 65478, 0,
  /* 95 */ 65489, 0,
  /* 97 */ 65500, 0,
  /* 99 */ 65511, 0,
  /* 101 */ 65522, 0,
  /* 103 */ 65526, 0,
  /* 105 */ 65527, 0,
  /* 107 */ 65532, 0,
  /* 109 */ 65533, 0,
  /* 111 */ 65534, 0,
  /* 113 */ 65535, 0,
};

extern const uint16_t PPCSubRegIdxLists[] = {
  /* 0 */ 1, 0,
  /* 2 */ 4, 3, 2, 5, 0,
};

extern const char PPCRegStrings[] = {
  /* 0 */ 'F', '1', '0', 0,
  /* 4 */ 'R', '1', '0', 0,
  /* 8 */ 'V', '1', '0', 0,
  /* 12 */ 'X', '1', '0', 0,
  /* 16 */ 'F', '2', '0', 0,
  /* 20 */ 'R', '2', '0', 0,
  /* 24 */ 'V', '2', '0', 0,
  /* 28 */ 'X', '2', '0', 0,
  /* 32 */ 'F', '3', '0', 0,
  /* 36 */ 'R', '3', '0', 0,
  /* 40 */ 'V', '3', '0', 0,
  /* 44 */ 'X', '3', '0', 0,
  /* 48 */ 'F', '0', 0,
  /* 51 */ 'C', 'R', '0', 0,
  /* 55 */ 'V', '0', 0,
  /* 58 */ 'X', '0', 0,
  /* 61 */ 'F', '1', '1', 0,
  /* 65 */ 'R', '1', '1', 0,
  /* 69 */ 'V', '1', '1', 0,
  /* 73 */ 'X', '1', '1', 0,
  /* 77 */ 'F', '2', '1', 0,
  /* 81 */ 'R', '2', '1', 0,
  /* 85 */ 'V', '2', '1', 0,
  /* 89 */ 'X', '2', '1', 0,
  /* 93 */ 'F', '3', '1', 0,
  /* 97 */ 'R', '3', '1', 0,
  /* 101 */ 'V', '3', '1', 0,
  /* 105 */ 'X', '3', '1', 0,
  /* 109 */ 'F', '1', 0,
  /* 112 */ 'C', 'R', '1', 0,
  /* 116 */ 'V', '1', 0,
  /* 119 */ 'X', '1', 0,
  /* 122 */ 'F', '1', '2', 0,
  /* 126 */ 'R', '1', '2', 0,
  /* 130 */ 'V', '1', '2', 0,
  /* 134 */ 'X', '1', '2', 0,
  /* 138 */ 'F', '2', '2', 0,
  /* 142 */ 'R', '2', '2', 0,
  /* 146 */ 'V', '2', '2', 0,
  /* 150 */ 'X', '2', '2', 0,
  /* 154 */ 'F', '2', 0,
  /* 157 */ 'C', 'R', '2', 0,
  /* 161 */ 'V', '2', 0,
  /* 164 */ 'X', '2', 0,
  /* 167 */ 'F', '1', '3', 0,
  /* 171 */ 'R', '1', '3', 0,
  /* 175 */ 'V', '1', '3', 0,
  /* 179 */ 'X', '1', '3', 0,
  /* 183 */ 'F', '2', '3', 0,
  /* 187 */ 'R', '2', '3', 0,
  /* 191 */ 'V', '2', '3', 0,
  /* 195 */ 'X', '2', '3', 0,
  /* 199 */ 'F', '3', 0,
  /* 202 */ 'C', 'R', '3', 0,
  /* 206 */ 'V', '3', 0,
  /* 209 */ 'X', '3', 0,
  /* 212 */ 'F', '1', '4', 0,
  /* 216 */ 'R', '1', '4', 0,
  /* 220 */ 'V', '1', '4', 0,
  /* 224 */ 'X', '1', '4', 0,
  /* 228 */ 'F', '2', '4', 0,
  /* 232 */ 'R', '2', '4', 0,
  /* 236 */ 'V', '2', '4', 0,
  /* 240 */ 'X', '2', '4', 0,
  /* 244 */ 'F', '4', 0,
  /* 247 */ 'C', 'R', '4', 0,
  /* 251 */ 'V', '4', 0,
  /* 254 */ 'X', '4', 0,
  /* 257 */ 'F', '1', '5', 0,
  /* 261 */ 'R', '1', '5', 0,
  /* 265 */ 'V', '1', '5', 0,
  /* 269 */ 'X', '1', '5', 0,
  /* 273 */ 'F', '2', '5', 0,
  /* 277 */ 'R', '2', '5', 0,
  /* 281 */ 'V', '2', '5', 0,
  /* 285 */ 'X', '2', '5', 0,
  /* 289 */ 'F', '5', 0,
  /* 292 */ 'C', 'R', '5', 0,
  /* 296 */ 'V', '5', 0,
  /* 299 */ 'X', '5', 0,
  /* 302 */ 'F', '1', '6', 0,
  /* 306 */ 'R', '1', '6', 0,
  /* 310 */ 'V', '1', '6', 0,
  /* 314 */ 'X', '1', '6', 0,
  /* 318 */ 'F', '2', '6', 0,
  /* 322 */ 'R', '2', '6', 0,
  /* 326 */ 'V', '2', '6', 0,
  /* 330 */ 'X', '2', '6', 0,
  /* 334 */ 'F', '6', 0,
  /* 337 */ 'C', 'R', '6', 0,
  /* 341 */ 'V', '6', 0,
  /* 344 */ 'X', '6', 0,
  /* 347 */ 'F', '1', '7', 0,
  /* 351 */ 'R', '1', '7', 0,
  /* 355 */ 'V', '1', '7', 0,
  /* 359 */ 'X', '1', '7', 0,
  /* 363 */ 'F', '2', '7', 0,
  /* 367 */ 'R', '2', '7', 0,
  /* 371 */ 'V', '2', '7', 0,
  /* 375 */ 'X', '2', '7', 0,
  /* 379 */ 'F', '7', 0,
  /* 382 */ 'C', 'R', '7', 0,
  /* 386 */ 'V', '7', 0,
  /* 389 */ 'X', '7', 0,
  /* 392 */ 'F', '1', '8', 0,
  /* 396 */ 'R', '1', '8', 0,
  /* 400 */ 'V', '1', '8', 0,
  /* 404 */ 'X', '1', '8', 0,
  /* 408 */ 'F', '2', '8', 0,
  /* 412 */ 'R', '2', '8', 0,
  /* 416 */ 'V', '2', '8', 0,
  /* 420 */ 'X', '2', '8', 0,
  /* 424 */ 'F', '8', 0,
  /* 427 */ 'Z', 'E', 'R', 'O', '8', 0,
  /* 433 */ 'F', 'P', '8', 0,
  /* 437 */ 'L', 'R', '8', 0,
  /* 441 */ 'C', 'T', 'R', '8', 0,
  /* 446 */ 'V', '8', 0,
  /* 449 */ 'X', '8', 0,
  /* 452 */ 'F', '1', '9', 0,
  /* 456 */ 'R', '1', '9', 0,
  /* 460 */ 'V', '1', '9', 0,
  /* 464 */ 'X', '1', '9', 0,
  /* 468 */ 'F', '2', '9', 0,
  /* 472 */ 'R', '2', '9', 0,
  /* 476 */ 'V', '2', '9', 0,
  /* 480 */ 'X', '2', '9', 0,
  /* 484 */ 'F', '9', 0,
  /* 487 */ 'R', '9', 0,
  /* 490 */ 'V', '9', 0,
  /* 493 */ 'X', '9', 0,
  /* 496 */ 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 503 */ 'R', 'M', 0,
  /* 506 */ 'C', 'R', '0', 'U', 'N', 0,
  /* 512 */ 'C', 'R', '1', 'U', 'N', 0,
  /* 518 */ 'C', 'R', '2', 'U', 'N', 0,
  /* 524 */ 'C', 'R', '3', 'U', 'N', 0,
  /* 530 */ 'C', 'R', '4', 'U', 'N', 0,
  /* 536 */ 'C', 'R', '5', 'U', 'N', 0,
  /* 542 */ 'C', 'R', '6', 'U', 'N', 0,
  /* 548 */ 'C', 'R', '7', 'U', 'N', 0,
  /* 554 */ 'Z', 'E', 'R', 'O', 0,
  /* 559 */ 'F', 'P', 0,
  /* 562 */ 'C', 'R', '0', 'E', 'Q', 0,
  /* 568 */ 'C', 'R', '1', 'E', 'Q', 0,
  /* 574 */ 'C', 'R', '2', 'E', 'Q', 0,
  /* 580 */ 'C', 'R', '3', 'E', 'Q', 0,
  /* 586 */ 'C', 'R', '4', 'E', 'Q', 0,
  /* 592 */ 'C', 'R', '5', 'E', 'Q', 0,
  /* 598 */ 'C', 'R', '6', 'E', 'Q', 0,
  /* 604 */ 'C', 'R', '7', 'E', 'Q', 0,
  /* 610 */ 'L', 'R', 0,
  /* 613 */ 'C', 'T', 'R', 0,
  /* 617 */ 'C', 'R', '0', 'G', 'T', 0,
  /* 623 */ 'C', 'R', '1', 'G', 'T', 0,
  /* 629 */ 'C', 'R', '2', 'G', 'T', 0,
  /* 635 */ 'C', 'R', '3', 'G', 'T', 0,
  /* 641 */ 'C', 'R', '4', 'G', 'T', 0,
  /* 647 */ 'C', 'R', '5', 'G', 'T', 0,
  /* 653 */ 'C', 'R', '6', 'G', 'T', 0,
  /* 659 */ 'C', 'R', '7', 'G', 'T', 0,
  /* 665 */ 'C', 'R', '0', 'L', 'T', 0,
  /* 671 */ 'C', 'R', '1', 'L', 'T', 0,
  /* 677 */ 'C', 'R', '2', 'L', 'T', 0,
  /* 683 */ 'C', 'R', '3', 'L', 'T', 0,
  /* 689 */ 'C', 'R', '4', 'L', 'T', 0,
  /* 695 */ 'C', 'R', '5', 'L', 'T', 0,
  /* 701 */ 'C', 'R', '6', 'L', 'T', 0,
  /* 707 */ 'C', 'R', '7', 'L', 'T', 0,
  /* 713 */ 'C', 'A', 'R', 'R', 'Y', 0,
};

extern const MCRegisterDesc PPCRegDesc[] = { // Descriptors
  { 3, 0, 0, 0, 0, 0 },
  { 713, 1, 1, 1, 1, 0 },
  { 51, 2, 44, 1, 2, 32 },
  { 562, 113, 1, 113, 1, 752 },
  { 617, 111, 1, 111, 1, 672 },
  { 665, 109, 1, 109, 1, 1619 },
  { 506, 107, 1, 107, 1, 1619 },
  { 112, 2, 44, 1, 2, 112 },
  { 568, 113, 1, 113, 1, 816 },
  { 623, 111, 1, 111, 1, 784 },
  { 671, 109, 1, 109, 1, 1587 },
  { 512, 107, 1, 107, 1, 1587 },
  { 157, 2, 44, 1, 2, 192 },
  { 574, 113, 1, 113, 1, 880 },
  { 629, 111, 1, 111, 1, 848 },
  { 677, 109, 1, 109, 1, 1555 },
  { 518, 107, 1, 107, 1, 1555 },
  { 202, 2, 44, 1, 2, 272 },
  { 580, 113, 1, 113, 1, 944 },
  { 635, 111, 1, 111, 1, 912 },
  { 683, 109, 1, 109, 1, 1523 },
  { 524, 107, 1, 107, 1, 1523 },
  { 247, 2, 44, 1, 2, 352 },
  { 586, 113, 1, 113, 1, 1008 },
  { 641, 111, 1, 111, 1, 976 },
  { 689, 109, 1, 109, 1, 1491 },
  { 530, 107, 1, 107, 1, 1491 },
  { 292, 2, 44, 1, 2, 432 },
  { 592, 113, 1, 113, 1, 1072 },
  { 647, 111, 1, 111, 1, 1040 },
  { 695, 109, 1, 109, 1, 1427 },
  { 536, 107, 1, 107, 1, 1427 },
  { 337, 2, 44, 1, 2, 512 },
  { 598, 113, 1, 113, 1, 1136 },
  { 653, 111, 1, 111, 1, 1104 },
  { 701, 109, 1, 109, 1, 1363 },
  { 542, 107, 1, 107, 1, 1363 },
  { 382, 2, 44, 1, 2, 592 },
  { 604, 113, 1, 113, 1, 1200 },
  { 659, 111, 1, 111, 1, 1168 },
  { 707, 109, 1, 109, 1, 1331 },
  { 548, 107, 1, 107, 1, 1681 },
  { 613, 1, 1, 1, 1, 1681 },
  { 441, 1, 1, 1, 1, 1681 },
  { 48, 1, 1, 1, 1, 1681 },
  { 109, 1, 1, 1, 1, 1681 },
  { 154, 1, 1, 1, 1, 1681 },
  { 199, 1, 1, 1, 1, 1681 },
  { 244, 1, 1, 1, 1, 1681 },
  { 289, 1, 1, 1, 1, 1681 },
  { 334, 1, 1, 1, 1, 1681 },
  { 379, 1, 1, 1, 1, 1681 },
  { 424, 1, 1, 1, 1, 1681 },
  { 484, 1, 1, 1, 1, 1681 },
  { 0, 1, 1, 1, 1, 1681 },
  { 61, 1, 1, 1, 1, 1681 },
  { 122, 1, 1, 1, 1, 1681 },
  { 167, 1, 1, 1, 1, 1681 },
  { 212, 1, 1, 1, 1, 1681 },
  { 257, 1, 1, 1, 1, 1681 },
  { 302, 1, 1, 1, 1, 1681 },
  { 347, 1, 1, 1, 1, 1681 },
  { 392, 1, 1, 1, 1, 1681 },
  { 452, 1, 1, 1, 1, 1681 },
  { 16, 1, 1, 1, 1, 1681 },
  { 77, 1, 1, 1, 1, 1681 },
  { 138, 1, 1, 1, 1, 1681 },
  { 183, 1, 1, 1, 1, 1681 },
  { 228, 1, 1, 1, 1, 1681 },
  { 273, 1, 1, 1, 1, 1681 },
  { 318, 1, 1, 1, 1, 1681 },
  { 363, 1, 1, 1, 1, 1681 },
  { 408, 1, 1, 1, 1, 1681 },
  { 468, 1, 1, 1, 1, 1681 },
  { 32, 1, 1, 1, 1, 1681 },
  { 93, 1, 1, 1, 1, 1681 },
  { 559, 5, 1, 5, 1, 1264 },
  { 433, 113, 113, 1, 0, 1264 },
  { 610, 1, 1, 1, 1, 1649 },
  { 437, 1, 1, 1, 1, 1649 },
  { 52, 77, 1, 77, 1, 1649 },
  { 113, 77, 1, 77, 1, 1649 },
  { 158, 77, 1, 77, 1, 1649 },
  { 203, 77, 1, 77, 1, 1649 },
  { 248, 77, 1, 77, 1, 1649 },
  { 293, 77, 1, 77, 1, 1649 },
  { 338, 77, 1, 77, 1, 1649 },
  { 383, 77, 1, 77, 1, 1649 },
  { 438, 77, 1, 77, 1, 1649 },
  { 487, 77, 1, 77, 1, 1649 },
  { 4, 77, 1, 77, 1, 1649 },
  { 65, 77, 1, 77, 1, 1649 },
  { 126, 77, 1, 77, 1, 1649 },
  { 171, 77, 1, 77, 1, 1649 },
  { 216, 77, 1, 77, 1, 1649 },
  { 261, 77, 1, 77, 1, 1649 },
  { 306, 77, 1, 77, 1, 1649 },
  { 351, 77, 1, 77, 1, 1649 },
  { 396, 77, 1, 77, 1, 1649 },
  { 456, 77, 1, 77, 1, 1649 },
  { 20, 77, 1, 77, 1, 1649 },
  { 81, 77, 1, 77, 1, 1649 },
  { 142, 77, 1, 77, 1, 1649 },
  { 187, 77, 1, 77, 1, 1649 },
  { 232, 77, 1, 77, 1, 1649 },
  { 277, 77, 1, 77, 1, 1649 },
  { 322, 77, 1, 77, 1, 1649 },
  { 367, 77, 1, 77, 1, 1649 },
  { 412, 77, 1, 77, 1, 1649 },
  { 472, 77, 1, 77, 1, 1649 },
  { 36, 77, 1, 77, 1, 1649 },
  { 97, 77, 1, 77, 1, 1649 },
  { 503, 1, 1, 1, 1, 1649 },
  { 55, 1, 1, 1, 1, 1649 },
  { 116, 1, 1, 1, 1, 1649 },
  { 161, 1, 1, 1, 1, 1649 },
  { 206, 1, 1, 1, 1, 1649 },
  { 251, 1, 1, 1, 1, 1649 },
  { 296, 1, 1, 1, 1, 1649 },
  { 341, 1, 1, 1, 1, 1649 },
  { 386, 1, 1, 1, 1, 1649 },
  { 446, 1, 1, 1, 1, 1649 },
  { 490, 1, 1, 1, 1, 1649 },
  { 8, 1, 1, 1, 1, 1649 },
  { 69, 1, 1, 1, 1, 1649 },
  { 130, 1, 1, 1, 1, 1649 },
  { 175, 1, 1, 1, 1, 1649 },
  { 220, 1, 1, 1, 1, 1649 },
  { 265, 1, 1, 1, 1, 1649 },
  { 310, 1, 1, 1, 1, 1649 },
  { 355, 1, 1, 1, 1, 1649 },
  { 400, 1, 1, 1, 1, 1649 },
  { 460, 1, 1, 1, 1, 1649 },
  { 24, 1, 1, 1, 1, 1649 },
  { 85, 1, 1, 1, 1, 1649 },
  { 146, 1, 1, 1, 1, 1649 },
  { 191, 1, 1, 1, 1, 1649 },
  { 236, 1, 1, 1, 1, 1649 },
  { 281, 1, 1, 1, 1, 1649 },
  { 326, 1, 1, 1, 1, 1649 },
  { 371, 1, 1, 1, 1, 1649 },
  { 416, 1, 1, 1, 1, 1649 },
  { 476, 1, 1, 1, 1, 1649 },
  { 40, 1, 1, 1, 1, 1649 },
  { 101, 1, 1, 1, 1, 1649 },
  { 496, 1, 1, 1, 1, 1649 },
  { 58, 91, 91, 1, 0, 1393 },
  { 119, 91, 91, 1, 0, 1393 },
  { 164, 91, 91, 1, 0, 1393 },
  { 209, 91, 91, 1, 0, 1393 },
  { 254, 91, 91, 1, 0, 1393 },
  { 299, 91, 91, 1, 0, 1393 },
  { 344, 91, 91, 1, 0, 1393 },
  { 389, 91, 91, 1, 0, 1393 },
  { 449, 91, 91, 1, 0, 1393 },
  { 493, 91, 91, 1, 0, 1393 },
  { 12, 91, 91, 1, 0, 1393 },
  { 73, 91, 91, 1, 0, 1393 },
  { 134, 91, 91, 1, 0, 1393 },
  { 179, 91, 91, 1, 0, 1393 },
  { 224, 91, 91, 1, 0, 1393 },
  { 269, 91, 91, 1, 0, 1393 },
  { 314, 91, 91, 1, 0, 1393 },
  { 359, 91, 91, 1, 0, 1393 },
  { 404, 91, 91, 1, 0, 1393 },
  { 464, 91, 91, 1, 0, 1393 },
  { 28, 91, 91, 1, 0, 1393 },
  { 89, 91, 91, 1, 0, 1393 },
  { 150, 91, 91, 1, 0, 1393 },
  { 195, 91, 91, 1, 0, 1393 },
  { 240, 91, 91, 1, 0, 1393 },
  { 285, 91, 91, 1, 0, 1393 },
  { 330, 91, 91, 1, 0, 1393 },
  { 375, 91, 91, 1, 0, 1393 },
  { 420, 91, 91, 1, 0, 1393 },
  { 480, 91, 91, 1, 0, 1393 },
  { 44, 91, 91, 1, 0, 1393 },
  { 105, 91, 91, 1, 0, 1393 },
  { 554, 5, 1, 5, 1, 1296 },
  { 427, 113, 113, 1, 0, 1296 },
};

extern const uint16_t PPCRegUnitRoots[][2] = {
  { PPC::CARRY },
  { PPC::CR0LT },
  { PPC::CR0GT },
  { PPC::CR0EQ },
  { PPC::CR0UN },
  { PPC::CR1LT },
  { PPC::CR1GT },
  { PPC::CR1EQ },
  { PPC::CR1UN },
  { PPC::CR2LT },
  { PPC::CR2GT },
  { PPC::CR2EQ },
  { PPC::CR2UN },
  { PPC::CR3LT },
  { PPC::CR3GT },
  { PPC::CR3EQ },
  { PPC::CR3UN },
  { PPC::CR4LT },
  { PPC::CR4GT },
  { PPC::CR4EQ },
  { PPC::CR4UN },
  { PPC::CR5LT },
  { PPC::CR5GT },
  { PPC::CR5EQ },
  { PPC::CR5UN },
  { PPC::CR6LT },
  { PPC::CR6GT },
  { PPC::CR6EQ },
  { PPC::CR6UN },
  { PPC::CR7LT },
  { PPC::CR7GT },
  { PPC::CR7EQ },
  { PPC::CR7UN },
  { PPC::CTR },
  { PPC::CTR8 },
  { PPC::F0 },
  { PPC::F1 },
  { PPC::F2 },
  { PPC::F3 },
  { PPC::F4 },
  { PPC::F5 },
  { PPC::F6 },
  { PPC::F7 },
  { PPC::F8 },
  { PPC::F9 },
  { PPC::F10 },
  { PPC::F11 },
  { PPC::F12 },
  { PPC::F13 },
  { PPC::F14 },
  { PPC::F15 },
  { PPC::F16 },
  { PPC::F17 },
  { PPC::F18 },
  { PPC::F19 },
  { PPC::F20 },
  { PPC::F21 },
  { PPC::F22 },
  { PPC::F23 },
  { PPC::F24 },
  { PPC::F25 },
  { PPC::F26 },
  { PPC::F27 },
  { PPC::F28 },
  { PPC::F29 },
  { PPC::F30 },
  { PPC::F31 },
  { PPC::FP },
  { PPC::LR },
  { PPC::LR8 },
  { PPC::R0 },
  { PPC::R1 },
  { PPC::R2 },
  { PPC::R3 },
  { PPC::R4 },
  { PPC::R5 },
  { PPC::R6 },
  { PPC::R7 },
  { PPC::R8 },
  { PPC::R9 },
  { PPC::R10 },
  { PPC::R11 },
  { PPC::R12 },
  { PPC::R13 },
  { PPC::R14 },
  { PPC::R15 },
  { PPC::R16 },
  { PPC::R17 },
  { PPC::R18 },
  { PPC::R19 },
  { PPC::R20 },
  { PPC::R21 },
  { PPC::R22 },
  { PPC::R23 },
  { PPC::R24 },
  { PPC::R25 },
  { PPC::R26 },
  { PPC::R27 },
  { PPC::R28 },
  { PPC::R29 },
  { PPC::R30 },
  { PPC::R31 },
  { PPC::RM },
  { PPC::V0 },
  { PPC::V1 },
  { PPC::V2 },
  { PPC::V3 },
  { PPC::V4 },
  { PPC::V5 },
  { PPC::V6 },
  { PPC::V7 },
  { PPC::V8 },
  { PPC::V9 },
  { PPC::V10 },
  { PPC::V11 },
  { PPC::V12 },
  { PPC::V13 },
  { PPC::V14 },
  { PPC::V15 },
  { PPC::V16 },
  { PPC::V17 },
  { PPC::V18 },
  { PPC::V19 },
  { PPC::V20 },
  { PPC::V21 },
  { PPC::V22 },
  { PPC::V23 },
  { PPC::V24 },
  { PPC::V25 },
  { PPC::V26 },
  { PPC::V27 },
  { PPC::V28 },
  { PPC::V29 },
  { PPC::V30 },
  { PPC::V31 },
  { PPC::VRSAVE },
  { PPC::ZERO },
};

namespace {     // Register classes...
  // GPRC Register Class...
  const uint16_t GPRC[] = {
    PPC::R2, PPC::R3, PPC::R4, PPC::R5, PPC::R6, PPC::R7, PPC::R8, PPC::R9, PPC::R10, PPC::R11, PPC::R12, PPC::R30, PPC::R29, PPC::R28, PPC::R27, PPC::R26, PPC::R25, PPC::R24, PPC::R23, PPC::R22, PPC::R21, PPC::R20, PPC::R19, PPC::R18, PPC::R17, PPC::R16, PPC::R15, PPC::R14, PPC::R13, PPC::R31, PPC::R0, PPC::R1, PPC::FP, 
  };

  // GPRC Bit set.
  const uint8_t GPRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xff, 0xff, 0xff, 0xff, 
  };

  // GPRC_NOR0 Register Class...
  const uint16_t GPRC_NOR0[] = {
    PPC::R2, PPC::R3, PPC::R4, PPC::R5, PPC::R6, PPC::R7, PPC::R8, PPC::R9, PPC::R10, PPC::R11, PPC::R12, PPC::R30, PPC::R29, PPC::R28, PPC::R27, PPC::R26, PPC::R25, PPC::R24, PPC::R23, PPC::R22, PPC::R21, PPC::R20, PPC::R19, PPC::R18, PPC::R17, PPC::R16, PPC::R15, PPC::R14, PPC::R13, PPC::R31, PPC::R1, PPC::FP, PPC::ZERO, 
  };

  // GPRC_NOR0 Bit set.
  const uint8_t GPRC_NOR0Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xfe, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
  };

  // CRBITRC Register Class...
  const uint16_t CRBITRC[] = {
    PPC::CR0LT, PPC::CR0GT, PPC::CR0EQ, PPC::CR0UN, PPC::CR1LT, PPC::CR1GT, PPC::CR1EQ, PPC::CR1UN, PPC::CR2LT, PPC::CR2GT, PPC::CR2EQ, PPC::CR2UN, PPC::CR3LT, PPC::CR3GT, PPC::CR3EQ, PPC::CR3UN, PPC::CR4LT, PPC::CR4GT, PPC::CR4EQ, PPC::CR4UN, PPC::CR5LT, PPC::CR5GT, PPC::CR5EQ, PPC::CR5UN, PPC::CR6LT, PPC::CR6GT, PPC::CR6EQ, PPC::CR6UN, PPC::CR7LT, PPC::CR7GT, PPC::CR7EQ, PPC::CR7UN, 
  };

  // CRBITRC Bit set.
  const uint8_t CRBITRCBits[] = {
    0x78, 0xef, 0xbd, 0xf7, 0xde, 0x03, 
  };

  // F4RC Register Class...
  const uint16_t F4RC[] = {
    PPC::F0, PPC::F1, PPC::F2, PPC::F3, PPC::F4, PPC::F5, PPC::F6, PPC::F7, PPC::F8, PPC::F9, PPC::F10, PPC::F11, PPC::F12, PPC::F13, PPC::F31, PPC::F30, PPC::F29, PPC::F28, PPC::F27, PPC::F26, PPC::F25, PPC::F24, PPC::F23, PPC::F22, PPC::F21, PPC::F20, PPC::F19, PPC::F18, PPC::F17, PPC::F16, PPC::F15, PPC::F14, 
  };

  // F4RC Bit set.
  const uint8_t F4RCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0x0f, 
  };

  // GPRC_and_GPRC_NOR0 Register Class...
  const uint16_t GPRC_and_GPRC_NOR0[] = {
    PPC::R2, PPC::R3, PPC::R4, PPC::R5, PPC::R6, PPC::R7, PPC::R8, PPC::R9, PPC::R10, PPC::R11, PPC::R12, PPC::R30, PPC::R29, PPC::R28, PPC::R27, PPC::R26, PPC::R25, PPC::R24, PPC::R23, PPC::R22, PPC::R21, PPC::R20, PPC::R19, PPC::R18, PPC::R17, PPC::R16, PPC::R15, PPC::R14, PPC::R13, PPC::R31, PPC::R1, PPC::FP, 
  };

  // GPRC_and_GPRC_NOR0 Bit set.
  const uint8_t GPRC_and_GPRC_NOR0Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xfe, 0xff, 0xff, 0xff, 
  };

  // CRRC Register Class...
  const uint16_t CRRC[] = {
    PPC::CR0, PPC::CR1, PPC::CR5, PPC::CR6, PPC::CR7, PPC::CR2, PPC::CR3, PPC::CR4, 
  };

  // CRRC Bit set.
  const uint8_t CRRCBits[] = {
    0x84, 0x10, 0x42, 0x08, 0x21, 
  };

  // CARRYRC Register Class...
  const uint16_t CARRYRC[] = {
    PPC::CARRY, 
  };

  // CARRYRC Bit set.
  const uint8_t CARRYRCBits[] = {
    0x02, 
  };

  // CTRRC Register Class...
  const uint16_t CTRRC[] = {
    PPC::CTR, 
  };

  // CTRRC Bit set.
  const uint8_t CTRRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
  };

  // VRSAVERC Register Class...
  const uint16_t VRSAVERC[] = {
    PPC::VRSAVE, 
  };

  // VRSAVERC Bit set.
  const uint8_t VRSAVERCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
  };

  // G8RC Register Class...
  const uint16_t G8RC[] = {
    PPC::X2, PPC::X3, PPC::X4, PPC::X5, PPC::X6, PPC::X7, PPC::X8, PPC::X9, PPC::X10, PPC::X11, PPC::X12, PPC::X30, PPC::X29, PPC::X28, PPC::X27, PPC::X26, PPC::X25, PPC::X24, PPC::X23, PPC::X22, PPC::X21, PPC::X20, PPC::X19, PPC::X18, PPC::X17, PPC::X16, PPC::X15, PPC::X14, PPC::X31, PPC::X13, PPC::X0, PPC::X1, PPC::FP8, 
  };

  // G8RC Bit set.
  const uint8_t G8RCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x03, 
  };

  // G8RC_NOX0 Register Class...
  const uint16_t G8RC_NOX0[] = {
    PPC::X2, PPC::X3, PPC::X4, PPC::X5, PPC::X6, PPC::X7, PPC::X8, PPC::X9, PPC::X10, PPC::X11, PPC::X12, PPC::X30, PPC::X29, PPC::X28, PPC::X27, PPC::X26, PPC::X25, PPC::X24, PPC::X23, PPC::X22, PPC::X21, PPC::X20, PPC::X19, PPC::X18, PPC::X17, PPC::X16, PPC::X15, PPC::X14, PPC::X31, PPC::X13, PPC::X1, PPC::FP8, PPC::ZERO8, 
  };

  // G8RC_NOX0 Bit set.
  const uint8_t G8RC_NOX0Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x0b, 
  };

  // F8RC Register Class...
  const uint16_t F8RC[] = {
    PPC::F0, PPC::F1, PPC::F2, PPC::F3, PPC::F4, PPC::F5, PPC::F6, PPC::F7, PPC::F8, PPC::F9, PPC::F10, PPC::F11, PPC::F12, PPC::F13, PPC::F31, PPC::F30, PPC::F29, PPC::F28, PPC::F27, PPC::F26, PPC::F25, PPC::F24, PPC::F23, PPC::F22, PPC::F21, PPC::F20, PPC::F19, PPC::F18, PPC::F17, PPC::F16, PPC::F15, PPC::F14, 
  };

  // F8RC Bit set.
  const uint8_t F8RCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0x0f, 
  };

  // G8RC_and_G8RC_NOX0 Register Class...
  const uint16_t G8RC_and_G8RC_NOX0[] = {
    PPC::X2, PPC::X3, PPC::X4, PPC::X5, PPC::X6, PPC::X7, PPC::X8, PPC::X9, PPC::X10, PPC::X11, PPC::X12, PPC::X30, PPC::X29, PPC::X28, PPC::X27, PPC::X26, PPC::X25, PPC::X24, PPC::X23, PPC::X22, PPC::X21, PPC::X20, PPC::X19, PPC::X18, PPC::X17, PPC::X16, PPC::X15, PPC::X14, PPC::X31, PPC::X13, PPC::X1, PPC::FP8, 
  };

  // G8RC_and_G8RC_NOX0 Bit set.
  const uint8_t G8RC_and_G8RC_NOX0Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x03, 
  };

  // CTRRC8 Register Class...
  const uint16_t CTRRC8[] = {
    PPC::CTR8, 
  };

  // CTRRC8 Bit set.
  const uint8_t CTRRC8Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
  };

  // VRRC Register Class...
  const uint16_t VRRC[] = {
    PPC::V2, PPC::V3, PPC::V4, PPC::V5, PPC::V0, PPC::V1, PPC::V6, PPC::V7, PPC::V8, PPC::V9, PPC::V10, PPC::V11, PPC::V12, PPC::V13, PPC::V14, PPC::V15, PPC::V16, PPC::V17, PPC::V18, PPC::V19, PPC::V31, PPC::V30, PPC::V29, PPC::V28, PPC::V27, PPC::V26, PPC::V25, PPC::V24, PPC::V23, PPC::V22, PPC::V21, PPC::V20, 
  };

  // VRRC Bit set.
  const uint8_t VRRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0xff, 0x01, 
  };

}

extern const MCRegisterClass PPCMCRegisterClasses[] = {
  { "GPRC", GPRC, GPRCBits, 33, sizeof(GPRCBits), PPC::GPRCRegClassID, 4, 4, 1, 1 },
  { "GPRC_NOR0", GPRC_NOR0, GPRC_NOR0Bits, 33, sizeof(GPRC_NOR0Bits), PPC::GPRC_NOR0RegClassID, 4, 4, 1, 1 },
  { "CRBITRC", CRBITRC, CRBITRCBits, 32, sizeof(CRBITRCBits), PPC::CRBITRCRegClassID, 4, 4, -1, 1 },
  { "F4RC", F4RC, F4RCBits, 32, sizeof(F4RCBits), PPC::F4RCRegClassID, 4, 4, 1, 1 },
  { "GPRC_and_GPRC_NOR0", GPRC_and_GPRC_NOR0, GPRC_and_GPRC_NOR0Bits, 32, sizeof(GPRC_and_GPRC_NOR0Bits), PPC::GPRC_and_GPRC_NOR0RegClassID, 4, 4, 1, 1 },
  { "CRRC", CRRC, CRRCBits, 8, sizeof(CRRCBits), PPC::CRRCRegClassID, 4, 4, 1, 1 },
  { "CARRYRC", CARRYRC, CARRYRCBits, 1, sizeof(CARRYRCBits), PPC::CARRYRCRegClassID, 4, 4, -1, 1 },
  { "CTRRC", CTRRC, CTRRCBits, 1, sizeof(CTRRCBits), PPC::CTRRCRegClassID, 4, 4, 1, 0 },
  { "VRSAVERC", VRSAVERC, VRSAVERCBits, 1, sizeof(VRSAVERCBits), PPC::VRSAVERCRegClassID, 4, 4, 1, 1 },
  { "G8RC", G8RC, G8RCBits, 33, sizeof(G8RCBits), PPC::G8RCRegClassID, 8, 8, 1, 1 },
  { "G8RC_NOX0", G8RC_NOX0, G8RC_NOX0Bits, 33, sizeof(G8RC_NOX0Bits), PPC::G8RC_NOX0RegClassID, 8, 8, 1, 1 },
  { "F8RC", F8RC, F8RCBits, 32, sizeof(F8RCBits), PPC::F8RCRegClassID, 8, 8, 1, 1 },
  { "G8RC_and_G8RC_NOX0", G8RC_and_G8RC_NOX0, G8RC_and_G8RC_NOX0Bits, 32, sizeof(G8RC_and_G8RC_NOX0Bits), PPC::G8RC_and_G8RC_NOX0RegClassID, 8, 8, 1, 1 },
  { "CTRRC8", CTRRC8, CTRRC8Bits, 1, sizeof(CTRRC8Bits), PPC::CTRRC8RegClassID, 8, 8, 1, 0 },
  { "VRRC", VRRC, VRRCBits, 32, sizeof(VRRCBits), PPC::VRRCRegClassID, 16, 16, 1, 1 },
};

// PPC Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour0Dwarf2L[] = {
  { 0U, PPC::X0 },
  { 1U, PPC::X1 },
  { 2U, PPC::X2 },
  { 3U, PPC::X3 },
  { 4U, PPC::X4 },
  { 5U, PPC::X5 },
  { 6U, PPC::X6 },
  { 7U, PPC::X7 },
  { 8U, PPC::X8 },
  { 9U, PPC::X9 },
  { 10U, PPC::X10 },
  { 11U, PPC::X11 },
  { 12U, PPC::X12 },
  { 13U, PPC::X13 },
  { 14U, PPC::X14 },
  { 15U, PPC::X15 },
  { 16U, PPC::X16 },
  { 17U, PPC::X17 },
  { 18U, PPC::X18 },
  { 19U, PPC::X19 },
  { 20U, PPC::X20 },
  { 21U, PPC::X21 },
  { 22U, PPC::X22 },
  { 23U, PPC::X23 },
  { 24U, PPC::X24 },
  { 25U, PPC::X25 },
  { 26U, PPC::X26 },
  { 27U, PPC::X27 },
  { 28U, PPC::X28 },
  { 29U, PPC::X29 },
  { 30U, PPC::X30 },
  { 31U, PPC::X31 },
  { 32U, PPC::F0 },
  { 33U, PPC::F1 },
  { 34U, PPC::F2 },
  { 35U, PPC::F3 },
  { 36U, PPC::F4 },
  { 37U, PPC::F5 },
  { 38U, PPC::F6 },
  { 39U, PPC::F7 },
  { 40U, PPC::F8 },
  { 41U, PPC::F9 },
  { 42U, PPC::F10 },
  { 43U, PPC::F11 },
  { 44U, PPC::F12 },
  { 45U, PPC::F13 },
  { 46U, PPC::F14 },
  { 47U, PPC::F15 },
  { 48U, PPC::F16 },
  { 49U, PPC::F17 },
  { 50U, PPC::F18 },
  { 51U, PPC::F19 },
  { 52U, PPC::F20 },
  { 53U, PPC::F21 },
  { 54U, PPC::F22 },
  { 55U, PPC::F23 },
  { 56U, PPC::F24 },
  { 57U, PPC::F25 },
  { 58U, PPC::F26 },
  { 59U, PPC::F27 },
  { 60U, PPC::F28 },
  { 61U, PPC::F29 },
  { 62U, PPC::F30 },
  { 63U, PPC::F31 },
  { 65U, PPC::LR8 },
  { 66U, PPC::CTR8 },
  { 68U, PPC::CR0 },
  { 69U, PPC::CR1 },
  { 70U, PPC::CR2 },
  { 71U, PPC::CR3 },
  { 72U, PPC::CR4 },
  { 73U, PPC::CR5 },
  { 74U, PPC::CR6 },
  { 75U, PPC::CR7 },
  { 77U, PPC::V0 },
  { 78U, PPC::V1 },
  { 79U, PPC::V2 },
  { 80U, PPC::V3 },
  { 81U, PPC::V4 },
  { 82U, PPC::V5 },
  { 83U, PPC::V6 },
  { 84U, PPC::V7 },
  { 85U, PPC::V8 },
  { 86U, PPC::V9 },
  { 87U, PPC::V10 },
  { 88U, PPC::V11 },
  { 89U, PPC::V12 },
  { 90U, PPC::V13 },
  { 91U, PPC::V14 },
  { 92U, PPC::V15 },
  { 93U, PPC::V16 },
  { 94U, PPC::V17 },
  { 95U, PPC::V18 },
  { 96U, PPC::V19 },
  { 97U, PPC::V20 },
  { 98U, PPC::V21 },
  { 99U, PPC::V22 },
  { 100U, PPC::V23 },
  { 101U, PPC::V24 },
  { 102U, PPC::V25 },
  { 103U, PPC::V26 },
  { 104U, PPC::V27 },
  { 105U, PPC::V28 },
  { 106U, PPC::V29 },
  { 107U, PPC::V30 },
  { 108U, PPC::V31 },
  { 109U, PPC::VRSAVE },
};
extern const unsigned PPCDwarfFlavour0Dwarf2LSize = sizeof(PPCDwarfFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour1Dwarf2L[] = {
  { 0U, PPC::R0 },
  { 1U, PPC::R1 },
  { 2U, PPC::R2 },
  { 3U, PPC::R3 },
  { 4U, PPC::R4 },
  { 5U, PPC::R5 },
  { 6U, PPC::R6 },
  { 7U, PPC::R7 },
  { 8U, PPC::R8 },
  { 9U, PPC::R9 },
  { 10U, PPC::R10 },
  { 11U, PPC::R11 },
  { 12U, PPC::R12 },
  { 13U, PPC::R13 },
  { 14U, PPC::R14 },
  { 15U, PPC::R15 },
  { 16U, PPC::R16 },
  { 17U, PPC::R17 },
  { 18U, PPC::R18 },
  { 19U, PPC::R19 },
  { 20U, PPC::R20 },
  { 21U, PPC::R21 },
  { 22U, PPC::R22 },
  { 23U, PPC::R23 },
  { 24U, PPC::R24 },
  { 25U, PPC::R25 },
  { 26U, PPC::R26 },
  { 27U, PPC::R27 },
  { 28U, PPC::R28 },
  { 29U, PPC::R29 },
  { 30U, PPC::R30 },
  { 31U, PPC::R31 },
  { 32U, PPC::F0 },
  { 33U, PPC::F1 },
  { 34U, PPC::F2 },
  { 35U, PPC::F3 },
  { 36U, PPC::F4 },
  { 37U, PPC::F5 },
  { 38U, PPC::F6 },
  { 39U, PPC::F7 },
  { 40U, PPC::F8 },
  { 41U, PPC::F9 },
  { 42U, PPC::F10 },
  { 43U, PPC::F11 },
  { 44U, PPC::F12 },
  { 45U, PPC::F13 },
  { 46U, PPC::F14 },
  { 47U, PPC::F15 },
  { 48U, PPC::F16 },
  { 49U, PPC::F17 },
  { 50U, PPC::F18 },
  { 51U, PPC::F19 },
  { 52U, PPC::F20 },
  { 53U, PPC::F21 },
  { 54U, PPC::F22 },
  { 55U, PPC::F23 },
  { 56U, PPC::F24 },
  { 57U, PPC::F25 },
  { 58U, PPC::F26 },
  { 59U, PPC::F27 },
  { 60U, PPC::F28 },
  { 61U, PPC::F29 },
  { 62U, PPC::F30 },
  { 63U, PPC::F31 },
  { 65U, PPC::LR },
  { 66U, PPC::CTR },
  { 68U, PPC::CR0 },
  { 69U, PPC::CR1 },
  { 70U, PPC::CR2 },
  { 71U, PPC::CR3 },
  { 72U, PPC::CR4 },
  { 73U, PPC::CR5 },
  { 74U, PPC::CR6 },
  { 75U, PPC::CR7 },
  { 77U, PPC::V0 },
  { 78U, PPC::V1 },
  { 79U, PPC::V2 },
  { 80U, PPC::V3 },
  { 81U, PPC::V4 },
  { 82U, PPC::V5 },
  { 83U, PPC::V6 },
  { 84U, PPC::V7 },
  { 85U, PPC::V8 },
  { 86U, PPC::V9 },
  { 87U, PPC::V10 },
  { 88U, PPC::V11 },
  { 89U, PPC::V12 },
  { 90U, PPC::V13 },
  { 91U, PPC::V14 },
  { 92U, PPC::V15 },
  { 93U, PPC::V16 },
  { 94U, PPC::V17 },
  { 95U, PPC::V18 },
  { 96U, PPC::V19 },
  { 97U, PPC::V20 },
  { 98U, PPC::V21 },
  { 99U, PPC::V22 },
  { 100U, PPC::V23 },
  { 101U, PPC::V24 },
  { 102U, PPC::V25 },
  { 103U, PPC::V26 },
  { 104U, PPC::V27 },
  { 105U, PPC::V28 },
  { 106U, PPC::V29 },
  { 107U, PPC::V30 },
  { 108U, PPC::V31 },
};
extern const unsigned PPCDwarfFlavour1Dwarf2LSize = sizeof(PPCDwarfFlavour1Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour0Dwarf2L[] = {
  { 0U, PPC::X0 },
  { 1U, PPC::X1 },
  { 2U, PPC::X2 },
  { 3U, PPC::X3 },
  { 4U, PPC::X4 },
  { 5U, PPC::X5 },
  { 6U, PPC::X6 },
  { 7U, PPC::X7 },
  { 8U, PPC::X8 },
  { 9U, PPC::X9 },
  { 10U, PPC::X10 },
  { 11U, PPC::X11 },
  { 12U, PPC::X12 },
  { 13U, PPC::X13 },
  { 14U, PPC::X14 },
  { 15U, PPC::X15 },
  { 16U, PPC::X16 },
  { 17U, PPC::X17 },
  { 18U, PPC::X18 },
  { 19U, PPC::X19 },
  { 20U, PPC::X20 },
  { 21U, PPC::X21 },
  { 22U, PPC::X22 },
  { 23U, PPC::X23 },
  { 24U, PPC::X24 },
  { 25U, PPC::X25 },
  { 26U, PPC::X26 },
  { 27U, PPC::X27 },
  { 28U, PPC::X28 },
  { 29U, PPC::X29 },
  { 30U, PPC::X30 },
  { 31U, PPC::X31 },
  { 32U, PPC::F0 },
  { 33U, PPC::F1 },
  { 34U, PPC::F2 },
  { 35U, PPC::F3 },
  { 36U, PPC::F4 },
  { 37U, PPC::F5 },
  { 38U, PPC::F6 },
  { 39U, PPC::F7 },
  { 40U, PPC::F8 },
  { 41U, PPC::F9 },
  { 42U, PPC::F10 },
  { 43U, PPC::F11 },
  { 44U, PPC::F12 },
  { 45U, PPC::F13 },
  { 46U, PPC::F14 },
  { 47U, PPC::F15 },
  { 48U, PPC::F16 },
  { 49U, PPC::F17 },
  { 50U, PPC::F18 },
  { 51U, PPC::F19 },
  { 52U, PPC::F20 },
  { 53U, PPC::F21 },
  { 54U, PPC::F22 },
  { 55U, PPC::F23 },
  { 56U, PPC::F24 },
  { 57U, PPC::F25 },
  { 58U, PPC::F26 },
  { 59U, PPC::F27 },
  { 60U, PPC::F28 },
  { 61U, PPC::F29 },
  { 62U, PPC::F30 },
  { 63U, PPC::F31 },
  { 65U, PPC::LR8 },
  { 66U, PPC::CTR8 },
  { 68U, PPC::CR0 },
  { 69U, PPC::CR1 },
  { 70U, PPC::CR2 },
  { 71U, PPC::CR3 },
  { 72U, PPC::CR4 },
  { 73U, PPC::CR5 },
  { 74U, PPC::CR6 },
  { 75U, PPC::CR7 },
  { 77U, PPC::V0 },
  { 78U, PPC::V1 },
  { 79U, PPC::V2 },
  { 80U, PPC::V3 },
  { 81U, PPC::V4 },
  { 82U, PPC::V5 },
  { 83U, PPC::V6 },
  { 84U, PPC::V7 },
  { 85U, PPC::V8 },
  { 86U, PPC::V9 },
  { 87U, PPC::V10 },
  { 88U, PPC::V11 },
  { 89U, PPC::V12 },
  { 90U, PPC::V13 },
  { 91U, PPC::V14 },
  { 92U, PPC::V15 },
  { 93U, PPC::V16 },
  { 94U, PPC::V17 },
  { 95U, PPC::V18 },
  { 96U, PPC::V19 },
  { 97U, PPC::V20 },
  { 98U, PPC::V21 },
  { 99U, PPC::V22 },
  { 100U, PPC::V23 },
  { 101U, PPC::V24 },
  { 102U, PPC::V25 },
  { 103U, PPC::V26 },
  { 104U, PPC::V27 },
  { 105U, PPC::V28 },
  { 106U, PPC::V29 },
  { 107U, PPC::V30 },
  { 108U, PPC::V31 },
  { 109U, PPC::VRSAVE },
};
extern const unsigned PPCEHFlavour0Dwarf2LSize = sizeof(PPCEHFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour1Dwarf2L[] = {
  { 0U, PPC::R0 },
  { 1U, PPC::R1 },
  { 2U, PPC::R2 },
  { 3U, PPC::R3 },
  { 4U, PPC::R4 },
  { 5U, PPC::R5 },
  { 6U, PPC::R6 },
  { 7U, PPC::R7 },
  { 8U, PPC::R8 },
  { 9U, PPC::R9 },
  { 10U, PPC::R10 },
  { 11U, PPC::R11 },
  { 12U, PPC::R12 },
  { 13U, PPC::R13 },
  { 14U, PPC::R14 },
  { 15U, PPC::R15 },
  { 16U, PPC::R16 },
  { 17U, PPC::R17 },
  { 18U, PPC::R18 },
  { 19U, PPC::R19 },
  { 20U, PPC::R20 },
  { 21U, PPC::R21 },
  { 22U, PPC::R22 },
  { 23U, PPC::R23 },
  { 24U, PPC::R24 },
  { 25U, PPC::R25 },
  { 26U, PPC::R26 },
  { 27U, PPC::R27 },
  { 28U, PPC::R28 },
  { 29U, PPC::R29 },
  { 30U, PPC::R30 },
  { 31U, PPC::R31 },
  { 32U, PPC::F0 },
  { 33U, PPC::F1 },
  { 34U, PPC::F2 },
  { 35U, PPC::F3 },
  { 36U, PPC::F4 },
  { 37U, PPC::F5 },
  { 38U, PPC::F6 },
  { 39U, PPC::F7 },
  { 40U, PPC::F8 },
  { 41U, PPC::F9 },
  { 42U, PPC::F10 },
  { 43U, PPC::F11 },
  { 44U, PPC::F12 },
  { 45U, PPC::F13 },
  { 46U, PPC::F14 },
  { 47U, PPC::F15 },
  { 48U, PPC::F16 },
  { 49U, PPC::F17 },
  { 50U, PPC::F18 },
  { 51U, PPC::F19 },
  { 52U, PPC::F20 },
  { 53U, PPC::F21 },
  { 54U, PPC::F22 },
  { 55U, PPC::F23 },
  { 56U, PPC::F24 },
  { 57U, PPC::F25 },
  { 58U, PPC::F26 },
  { 59U, PPC::F27 },
  { 60U, PPC::F28 },
  { 61U, PPC::F29 },
  { 62U, PPC::F30 },
  { 63U, PPC::F31 },
  { 65U, PPC::LR },
  { 66U, PPC::CTR },
  { 68U, PPC::CR0 },
  { 69U, PPC::CR1 },
  { 70U, PPC::CR2 },
  { 71U, PPC::CR3 },
  { 72U, PPC::CR4 },
  { 73U, PPC::CR5 },
  { 74U, PPC::CR6 },
  { 75U, PPC::CR7 },
  { 77U, PPC::V0 },
  { 78U, PPC::V1 },
  { 79U, PPC::V2 },
  { 80U, PPC::V3 },
  { 81U, PPC::V4 },
  { 82U, PPC::V5 },
  { 83U, PPC::V6 },
  { 84U, PPC::V7 },
  { 85U, PPC::V8 },
  { 86U, PPC::V9 },
  { 87U, PPC::V10 },
  { 88U, PPC::V11 },
  { 89U, PPC::V12 },
  { 90U, PPC::V13 },
  { 91U, PPC::V14 },
  { 92U, PPC::V15 },
  { 93U, PPC::V16 },
  { 94U, PPC::V17 },
  { 95U, PPC::V18 },
  { 96U, PPC::V19 },
  { 97U, PPC::V20 },
  { 98U, PPC::V21 },
  { 99U, PPC::V22 },
  { 100U, PPC::V23 },
  { 101U, PPC::V24 },
  { 102U, PPC::V25 },
  { 103U, PPC::V26 },
  { 104U, PPC::V27 },
  { 105U, PPC::V28 },
  { 106U, PPC::V29 },
  { 107U, PPC::V30 },
  { 108U, PPC::V31 },
};
extern const unsigned PPCEHFlavour1Dwarf2LSize = sizeof(PPCEHFlavour1Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour0L2Dwarf[] = {
  { PPC::CR0, 68U },
  { PPC::CR1, 69U },
  { PPC::CR2, 70U },
  { PPC::CR3, 71U },
  { PPC::CR4, 72U },
  { PPC::CR5, 73U },
  { PPC::CR6, 74U },
  { PPC::CR7, 75U },
  { PPC::CTR, -2U },
  { PPC::CTR8, 66U },
  { PPC::F0, 32U },
  { PPC::F1, 33U },
  { PPC::F2, 34U },
  { PPC::F3, 35U },
  { PPC::F4, 36U },
  { PPC::F5, 37U },
  { PPC::F6, 38U },
  { PPC::F7, 39U },
  { PPC::F8, 40U },
  { PPC::F9, 41U },
  { PPC::F10, 42U },
  { PPC::F11, 43U },
  { PPC::F12, 44U },
  { PPC::F13, 45U },
  { PPC::F14, 46U },
  { PPC::F15, 47U },
  { PPC::F16, 48U },
  { PPC::F17, 49U },
  { PPC::F18, 50U },
  { PPC::F19, 51U },
  { PPC::F20, 52U },
  { PPC::F21, 53U },
  { PPC::F22, 54U },
  { PPC::F23, 55U },
  { PPC::F24, 56U },
  { PPC::F25, 57U },
  { PPC::F26, 58U },
  { PPC::F27, 59U },
  { PPC::F28, 60U },
  { PPC::F29, 61U },
  { PPC::F30, 62U },
  { PPC::F31, 63U },
  { PPC::LR, -2U },
  { PPC::LR8, 65U },
  { PPC::R0, -2U },
  { PPC::R1, -2U },
  { PPC::R2, -2U },
  { PPC::R3, -2U },
  { PPC::R4, -2U },
  { PPC::R5, -2U },
  { PPC::R6, -2U },
  { PPC::R7, -2U },
  { PPC::R8, -2U },
  { PPC::R9, -2U },
  { PPC::R10, -2U },
  { PPC::R11, -2U },
  { PPC::R12, -2U },
  { PPC::R13, -2U },
  { PPC::R14, -2U },
  { PPC::R15, -2U },
  { PPC::R16, -2U },
  { PPC::R17, -2U },
  { PPC::R18, -2U },
  { PPC::R19, -2U },
  { PPC::R20, -2U },
  { PPC::R21, -2U },
  { PPC::R22, -2U },
  { PPC::R23, -2U },
  { PPC::R24, -2U },
  { PPC::R25, -2U },
  { PPC::R26, -2U },
  { PPC::R27, -2U },
  { PPC::R28, -2U },
  { PPC::R29, -2U },
  { PPC::R30, -2U },
  { PPC::R31, -2U },
  { PPC::V0, 77U },
  { PPC::V1, 78U },
  { PPC::V2, 79U },
  { PPC::V3, 80U },
  { PPC::V4, 81U },
  { PPC::V5, 82U },
  { PPC::V6, 83U },
  { PPC::V7, 84U },
  { PPC::V8, 85U },
  { PPC::V9, 86U },
  { PPC::V10, 87U },
  { PPC::V11, 88U },
  { PPC::V12, 89U },
  { PPC::V13, 90U },
  { PPC::V14, 91U },
  { PPC::V15, 92U },
  { PPC::V16, 93U },
  { PPC::V17, 94U },
  { PPC::V18, 95U },
  { PPC::V19, 96U },
  { PPC::V20, 97U },
  { PPC::V21, 98U },
  { PPC::V22, 99U },
  { PPC::V23, 100U },
  { PPC::V24, 101U },
  { PPC::V25, 102U },
  { PPC::V26, 103U },
  { PPC::V27, 104U },
  { PPC::V28, 105U },
  { PPC::V29, 106U },
  { PPC::V30, 107U },
  { PPC::V31, 108U },
  { PPC::VRSAVE, 109U },
  { PPC::X0, 0U },
  { PPC::X1, 1U },
  { PPC::X2, 2U },
  { PPC::X3, 3U },
  { PPC::X4, 4U },
  { PPC::X5, 5U },
  { PPC::X6, 6U },
  { PPC::X7, 7U },
  { PPC::X8, 8U },
  { PPC::X9, 9U },
  { PPC::X10, 10U },
  { PPC::X11, 11U },
  { PPC::X12, 12U },
  { PPC::X13, 13U },
  { PPC::X14, 14U },
  { PPC::X15, 15U },
  { PPC::X16, 16U },
  { PPC::X17, 17U },
  { PPC::X18, 18U },
  { PPC::X19, 19U },
  { PPC::X20, 20U },
  { PPC::X21, 21U },
  { PPC::X22, 22U },
  { PPC::X23, 23U },
  { PPC::X24, 24U },
  { PPC::X25, 25U },
  { PPC::X26, 26U },
  { PPC::X27, 27U },
  { PPC::X28, 28U },
  { PPC::X29, 29U },
  { PPC::X30, 30U },
  { PPC::X31, 31U },
};
extern const unsigned PPCDwarfFlavour0L2DwarfSize = sizeof(PPCDwarfFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour1L2Dwarf[] = {
  { PPC::CR0, 68U },
  { PPC::CR1, 69U },
  { PPC::CR2, 70U },
  { PPC::CR3, 71U },
  { PPC::CR4, 72U },
  { PPC::CR5, 73U },
  { PPC::CR6, 74U },
  { PPC::CR7, 75U },
  { PPC::CTR, 66U },
  { PPC::CTR8, -2U },
  { PPC::F0, 32U },
  { PPC::F1, 33U },
  { PPC::F2, 34U },
  { PPC::F3, 35U },
  { PPC::F4, 36U },
  { PPC::F5, 37U },
  { PPC::F6, 38U },
  { PPC::F7, 39U },
  { PPC::F8, 40U },
  { PPC::F9, 41U },
  { PPC::F10, 42U },
  { PPC::F11, 43U },
  { PPC::F12, 44U },
  { PPC::F13, 45U },
  { PPC::F14, 46U },
  { PPC::F15, 47U },
  { PPC::F16, 48U },
  { PPC::F17, 49U },
  { PPC::F18, 50U },
  { PPC::F19, 51U },
  { PPC::F20, 52U },
  { PPC::F21, 53U },
  { PPC::F22, 54U },
  { PPC::F23, 55U },
  { PPC::F24, 56U },
  { PPC::F25, 57U },
  { PPC::F26, 58U },
  { PPC::F27, 59U },
  { PPC::F28, 60U },
  { PPC::F29, 61U },
  { PPC::F30, 62U },
  { PPC::F31, 63U },
  { PPC::LR, 65U },
  { PPC::LR8, -2U },
  { PPC::R0, 0U },
  { PPC::R1, 1U },
  { PPC::R2, 2U },
  { PPC::R3, 3U },
  { PPC::R4, 4U },
  { PPC::R5, 5U },
  { PPC::R6, 6U },
  { PPC::R7, 7U },
  { PPC::R8, 8U },
  { PPC::R9, 9U },
  { PPC::R10, 10U },
  { PPC::R11, 11U },
  { PPC::R12, 12U },
  { PPC::R13, 13U },
  { PPC::R14, 14U },
  { PPC::R15, 15U },
  { PPC::R16, 16U },
  { PPC::R17, 17U },
  { PPC::R18, 18U },
  { PPC::R19, 19U },
  { PPC::R20, 20U },
  { PPC::R21, 21U },
  { PPC::R22, 22U },
  { PPC::R23, 23U },
  { PPC::R24, 24U },
  { PPC::R25, 25U },
  { PPC::R26, 26U },
  { PPC::R27, 27U },
  { PPC::R28, 28U },
  { PPC::R29, 29U },
  { PPC::R30, 30U },
  { PPC::R31, 31U },
  { PPC::V0, 77U },
  { PPC::V1, 78U },
  { PPC::V2, 79U },
  { PPC::V3, 80U },
  { PPC::V4, 81U },
  { PPC::V5, 82U },
  { PPC::V6, 83U },
  { PPC::V7, 84U },
  { PPC::V8, 85U },
  { PPC::V9, 86U },
  { PPC::V10, 87U },
  { PPC::V11, 88U },
  { PPC::V12, 89U },
  { PPC::V13, 90U },
  { PPC::V14, 91U },
  { PPC::V15, 92U },
  { PPC::V16, 93U },
  { PPC::V17, 94U },
  { PPC::V18, 95U },
  { PPC::V19, 96U },
  { PPC::V20, 97U },
  { PPC::V21, 98U },
  { PPC::V22, 99U },
  { PPC::V23, 100U },
  { PPC::V24, 101U },
  { PPC::V25, 102U },
  { PPC::V26, 103U },
  { PPC::V27, 104U },
  { PPC::V28, 105U },
  { PPC::V29, 106U },
  { PPC::V30, 107U },
  { PPC::V31, 108U },
  { PPC::X0, -2U },
  { PPC::X1, -2U },
  { PPC::X2, -2U },
  { PPC::X3, -2U },
  { PPC::X4, -2U },
  { PPC::X5, -2U },
  { PPC::X6, -2U },
  { PPC::X7, -2U },
  { PPC::X8, -2U },
  { PPC::X9, -2U },
  { PPC::X10, -2U },
  { PPC::X11, -2U },
  { PPC::X12, -2U },
  { PPC::X13, -2U },
  { PPC::X14, -2U },
  { PPC::X15, -2U },
  { PPC::X16, -2U },
  { PPC::X17, -2U },
  { PPC::X18, -2U },
  { PPC::X19, -2U },
  { PPC::X20, -2U },
  { PPC::X21, -2U },
  { PPC::X22, -2U },
  { PPC::X23, -2U },
  { PPC::X24, -2U },
  { PPC::X25, -2U },
  { PPC::X26, -2U },
  { PPC::X27, -2U },
  { PPC::X28, -2U },
  { PPC::X29, -2U },
  { PPC::X30, -2U },
  { PPC::X31, -2U },
};
extern const unsigned PPCDwarfFlavour1L2DwarfSize = sizeof(PPCDwarfFlavour1L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour0L2Dwarf[] = {
  { PPC::CR0, 68U },
  { PPC::CR1, 69U },
  { PPC::CR2, 70U },
  { PPC::CR3, 71U },
  { PPC::CR4, 72U },
  { PPC::CR5, 73U },
  { PPC::CR6, 74U },
  { PPC::CR7, 75U },
  { PPC::CTR, -2U },
  { PPC::CTR8, 66U },
  { PPC::F0, 32U },
  { PPC::F1, 33U },
  { PPC::F2, 34U },
  { PPC::F3, 35U },
  { PPC::F4, 36U },
  { PPC::F5, 37U },
  { PPC::F6, 38U },
  { PPC::F7, 39U },
  { PPC::F8, 40U },
  { PPC::F9, 41U },
  { PPC::F10, 42U },
  { PPC::F11, 43U },
  { PPC::F12, 44U },
  { PPC::F13, 45U },
  { PPC::F14, 46U },
  { PPC::F15, 47U },
  { PPC::F16, 48U },
  { PPC::F17, 49U },
  { PPC::F18, 50U },
  { PPC::F19, 51U },
  { PPC::F20, 52U },
  { PPC::F21, 53U },
  { PPC::F22, 54U },
  { PPC::F23, 55U },
  { PPC::F24, 56U },
  { PPC::F25, 57U },
  { PPC::F26, 58U },
  { PPC::F27, 59U },
  { PPC::F28, 60U },
  { PPC::F29, 61U },
  { PPC::F30, 62U },
  { PPC::F31, 63U },
  { PPC::LR, -2U },
  { PPC::LR8, 65U },
  { PPC::R0, -2U },
  { PPC::R1, -2U },
  { PPC::R2, -2U },
  { PPC::R3, -2U },
  { PPC::R4, -2U },
  { PPC::R5, -2U },
  { PPC::R6, -2U },
  { PPC::R7, -2U },
  { PPC::R8, -2U },
  { PPC::R9, -2U },
  { PPC::R10, -2U },
  { PPC::R11, -2U },
  { PPC::R12, -2U },
  { PPC::R13, -2U },
  { PPC::R14, -2U },
  { PPC::R15, -2U },
  { PPC::R16, -2U },
  { PPC::R17, -2U },
  { PPC::R18, -2U },
  { PPC::R19, -2U },
  { PPC::R20, -2U },
  { PPC::R21, -2U },
  { PPC::R22, -2U },
  { PPC::R23, -2U },
  { PPC::R24, -2U },
  { PPC::R25, -2U },
  { PPC::R26, -2U },
  { PPC::R27, -2U },
  { PPC::R28, -2U },
  { PPC::R29, -2U },
  { PPC::R30, -2U },
  { PPC::R31, -2U },
  { PPC::V0, 77U },
  { PPC::V1, 78U },
  { PPC::V2, 79U },
  { PPC::V3, 80U },
  { PPC::V4, 81U },
  { PPC::V5, 82U },
  { PPC::V6, 83U },
  { PPC::V7, 84U },
  { PPC::V8, 85U },
  { PPC::V9, 86U },
  { PPC::V10, 87U },
  { PPC::V11, 88U },
  { PPC::V12, 89U },
  { PPC::V13, 90U },
  { PPC::V14, 91U },
  { PPC::V15, 92U },
  { PPC::V16, 93U },
  { PPC::V17, 94U },
  { PPC::V18, 95U },
  { PPC::V19, 96U },
  { PPC::V20, 97U },
  { PPC::V21, 98U },
  { PPC::V22, 99U },
  { PPC::V23, 100U },
  { PPC::V24, 101U },
  { PPC::V25, 102U },
  { PPC::V26, 103U },
  { PPC::V27, 104U },
  { PPC::V28, 105U },
  { PPC::V29, 106U },
  { PPC::V30, 107U },
  { PPC::V31, 108U },
  { PPC::VRSAVE, 109U },
  { PPC::X0, 0U },
  { PPC::X1, 1U },
  { PPC::X2, 2U },
  { PPC::X3, 3U },
  { PPC::X4, 4U },
  { PPC::X5, 5U },
  { PPC::X6, 6U },
  { PPC::X7, 7U },
  { PPC::X8, 8U },
  { PPC::X9, 9U },
  { PPC::X10, 10U },
  { PPC::X11, 11U },
  { PPC::X12, 12U },
  { PPC::X13, 13U },
  { PPC::X14, 14U },
  { PPC::X15, 15U },
  { PPC::X16, 16U },
  { PPC::X17, 17U },
  { PPC::X18, 18U },
  { PPC::X19, 19U },
  { PPC::X20, 20U },
  { PPC::X21, 21U },
  { PPC::X22, 22U },
  { PPC::X23, 23U },
  { PPC::X24, 24U },
  { PPC::X25, 25U },
  { PPC::X26, 26U },
  { PPC::X27, 27U },
  { PPC::X28, 28U },
  { PPC::X29, 29U },
  { PPC::X30, 30U },
  { PPC::X31, 31U },
};
extern const unsigned PPCEHFlavour0L2DwarfSize = sizeof(PPCEHFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour1L2Dwarf[] = {
  { PPC::CR0, 68U },
  { PPC::CR1, 69U },
  { PPC::CR2, 70U },
  { PPC::CR3, 71U },
  { PPC::CR4, 72U },
  { PPC::CR5, 73U },
  { PPC::CR6, 74U },
  { PPC::CR7, 75U },
  { PPC::CTR, 66U },
  { PPC::CTR8, -2U },
  { PPC::F0, 32U },
  { PPC::F1, 33U },
  { PPC::F2, 34U },
  { PPC::F3, 35U },
  { PPC::F4, 36U },
  { PPC::F5, 37U },
  { PPC::F6, 38U },
  { PPC::F7, 39U },
  { PPC::F8, 40U },
  { PPC::F9, 41U },
  { PPC::F10, 42U },
  { PPC::F11, 43U },
  { PPC::F12, 44U },
  { PPC::F13, 45U },
  { PPC::F14, 46U },
  { PPC::F15, 47U },
  { PPC::F16, 48U },
  { PPC::F17, 49U },
  { PPC::F18, 50U },
  { PPC::F19, 51U },
  { PPC::F20, 52U },
  { PPC::F21, 53U },
  { PPC::F22, 54U },
  { PPC::F23, 55U },
  { PPC::F24, 56U },
  { PPC::F25, 57U },
  { PPC::F26, 58U },
  { PPC::F27, 59U },
  { PPC::F28, 60U },
  { PPC::F29, 61U },
  { PPC::F30, 62U },
  { PPC::F31, 63U },
  { PPC::LR, 65U },
  { PPC::LR8, -2U },
  { PPC::R0, 0U },
  { PPC::R1, 1U },
  { PPC::R2, 2U },
  { PPC::R3, 3U },
  { PPC::R4, 4U },
  { PPC::R5, 5U },
  { PPC::R6, 6U },
  { PPC::R7, 7U },
  { PPC::R8, 8U },
  { PPC::R9, 9U },
  { PPC::R10, 10U },
  { PPC::R11, 11U },
  { PPC::R12, 12U },
  { PPC::R13, 13U },
  { PPC::R14, 14U },
  { PPC::R15, 15U },
  { PPC::R16, 16U },
  { PPC::R17, 17U },
  { PPC::R18, 18U },
  { PPC::R19, 19U },
  { PPC::R20, 20U },
  { PPC::R21, 21U },
  { PPC::R22, 22U },
  { PPC::R23, 23U },
  { PPC::R24, 24U },
  { PPC::R25, 25U },
  { PPC::R26, 26U },
  { PPC::R27, 27U },
  { PPC::R28, 28U },
  { PPC::R29, 29U },
  { PPC::R30, 30U },
  { PPC::R31, 31U },
  { PPC::V0, 77U },
  { PPC::V1, 78U },
  { PPC::V2, 79U },
  { PPC::V3, 80U },
  { PPC::V4, 81U },
  { PPC::V5, 82U },
  { PPC::V6, 83U },
  { PPC::V7, 84U },
  { PPC::V8, 85U },
  { PPC::V9, 86U },
  { PPC::V10, 87U },
  { PPC::V11, 88U },
  { PPC::V12, 89U },
  { PPC::V13, 90U },
  { PPC::V14, 91U },
  { PPC::V15, 92U },
  { PPC::V16, 93U },
  { PPC::V17, 94U },
  { PPC::V18, 95U },
  { PPC::V19, 96U },
  { PPC::V20, 97U },
  { PPC::V21, 98U },
  { PPC::V22, 99U },
  { PPC::V23, 100U },
  { PPC::V24, 101U },
  { PPC::V25, 102U },
  { PPC::V26, 103U },
  { PPC::V27, 104U },
  { PPC::V28, 105U },
  { PPC::V29, 106U },
  { PPC::V30, 107U },
  { PPC::V31, 108U },
  { PPC::X0, -2U },
  { PPC::X1, -2U },
  { PPC::X2, -2U },
  { PPC::X3, -2U },
  { PPC::X4, -2U },
  { PPC::X5, -2U },
  { PPC::X6, -2U },
  { PPC::X7, -2U },
  { PPC::X8, -2U },
  { PPC::X9, -2U },
  { PPC::X10, -2U },
  { PPC::X11, -2U },
  { PPC::X12, -2U },
  { PPC::X13, -2U },
  { PPC::X14, -2U },
  { PPC::X15, -2U },
  { PPC::X16, -2U },
  { PPC::X17, -2U },
  { PPC::X18, -2U },
  { PPC::X19, -2U },
  { PPC::X20, -2U },
  { PPC::X21, -2U },
  { PPC::X22, -2U },
  { PPC::X23, -2U },
  { PPC::X24, -2U },
  { PPC::X25, -2U },
  { PPC::X26, -2U },
  { PPC::X27, -2U },
  { PPC::X28, -2U },
  { PPC::X29, -2U },
  { PPC::X30, -2U },
  { PPC::X31, -2U },
};
extern const unsigned PPCEHFlavour1L2DwarfSize = sizeof(PPCEHFlavour1L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const uint16_t PPCRegEncodingTable[] = {
  0,
  1,
  0,
  2,
  1,
  0,
  3,
  1,
  6,
  5,
  4,
  7,
  2,
  10,
  9,
  8,
  11,
  3,
  14,
  13,
  12,
  15,
  4,
  18,
  17,
  16,
  19,
  5,
  22,
  21,
  20,
  23,
  6,
  26,
  25,
  24,
  27,
  7,
  30,
  29,
  28,
  31,
  9,
  9,
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
  8,
  8,
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
  512,
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
  256,
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
};
static inline void InitPPCMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(PPCRegDesc, 180, RA, PC, PPCMCRegisterClasses, 15, PPCRegUnitRoots, 137, PPCRegDiffLists, PPCRegStrings, PPCSubRegIdxLists, 6,
  PPCRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(PPCDwarfFlavour0Dwarf2L, PPCDwarfFlavour0Dwarf2LSize, false);
    break;
  case 1:
    RI->mapDwarfRegsToLLVMRegs(PPCDwarfFlavour1Dwarf2L, PPCDwarfFlavour1Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(PPCEHFlavour0Dwarf2L, PPCEHFlavour0Dwarf2LSize, true);
    break;
  case 1:
    RI->mapDwarfRegsToLLVMRegs(PPCEHFlavour1Dwarf2L, PPCEHFlavour1Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(PPCDwarfFlavour0L2Dwarf, PPCDwarfFlavour0L2DwarfSize, false);
    break;
  case 1:
    RI->mapLLVMRegsToDwarfRegs(PPCDwarfFlavour1L2Dwarf, PPCDwarfFlavour1L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(PPCEHFlavour0L2Dwarf, PPCEHFlavour0L2DwarfSize, true);
    break;
  case 1:
    RI->mapLLVMRegsToDwarfRegs(PPCEHFlavour1L2Dwarf, PPCEHFlavour1L2DwarfSize, true);
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

struct PPCGenRegisterInfo : public TargetRegisterInfo {
  explicit PPCGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0, unsigned PC = 0);
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

namespace PPC { // Register classes
  extern const TargetRegisterClass GPRCRegClass;
  extern const TargetRegisterClass GPRC_NOR0RegClass;
  extern const TargetRegisterClass CRBITRCRegClass;
  extern const TargetRegisterClass F4RCRegClass;
  extern const TargetRegisterClass GPRC_and_GPRC_NOR0RegClass;
  extern const TargetRegisterClass CRRCRegClass;
  extern const TargetRegisterClass CARRYRCRegClass;
  extern const TargetRegisterClass CTRRCRegClass;
  extern const TargetRegisterClass VRSAVERCRegClass;
  extern const TargetRegisterClass G8RCRegClass;
  extern const TargetRegisterClass G8RC_NOX0RegClass;
  extern const TargetRegisterClass F8RCRegClass;
  extern const TargetRegisterClass G8RC_and_G8RC_NOX0RegClass;
  extern const TargetRegisterClass CTRRC8RegClass;
  extern const TargetRegisterClass VRRCRegClass;
} // end of namespace PPC

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

extern const MCRegisterClass PPCMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i32, MVT::Other,
  /* 2 */ MVT::i64, MVT::Other,
  /* 4 */ MVT::f32, MVT::Other,
  /* 6 */ MVT::f64, MVT::Other,
  /* 8 */ MVT::v16i8, MVT::v8i16, MVT::v4i32, MVT::v4f32, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "sub_32", "sub_eq", "sub_gt", "sub_lt", "sub_un" };


static const unsigned SubRegIndexLaneMaskTable[] = {
  ~0u,
  0x00000001, // sub_32
  0x00000002, // sub_eq
  0x00000004, // sub_gt
  0x00000008, // sub_lt
  0x00000010, // sub_un
 };



static const TargetRegisterClass *const NullRegClasses[] = { NULL };

static const uint32_t GPRCSubClassMask[] = {
  0x00000011, 
  0x00001200, // sub_32
};

static const uint32_t GPRC_NOR0SubClassMask[] = {
  0x00000012, 
  0x00001400, // sub_32
};

static const uint32_t CRBITRCSubClassMask[] = {
  0x00000004, 
  0x00000020, // sub_eq
  0x00000020, // sub_gt
  0x00000020, // sub_lt
  0x00000020, // sub_un
};

static const uint32_t F4RCSubClassMask[] = {
  0x00000808, 
};

static const uint32_t GPRC_and_GPRC_NOR0SubClassMask[] = {
  0x00000010, 
  0x00001000, // sub_32
};

static const uint32_t CRRCSubClassMask[] = {
  0x00000020, 
};

static const uint32_t CARRYRCSubClassMask[] = {
  0x00000040, 
};

static const uint32_t CTRRCSubClassMask[] = {
  0x00000080, 
};

static const uint32_t VRSAVERCSubClassMask[] = {
  0x00000100, 
};

static const uint32_t G8RCSubClassMask[] = {
  0x00001200, 
};

static const uint32_t G8RC_NOX0SubClassMask[] = {
  0x00001400, 
};

static const uint32_t F8RCSubClassMask[] = {
  0x00000800, 
};

static const uint32_t G8RC_and_G8RC_NOX0SubClassMask[] = {
  0x00001000, 
};

static const uint32_t CTRRC8SubClassMask[] = {
  0x00002000, 
};

static const uint32_t VRRCSubClassMask[] = {
  0x00004000, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 1, 0,
  /* 2 */ 2, 3, 4, 5, 0,
};

static const TargetRegisterClass *const GPRC_and_GPRC_NOR0Superclasses[] = {
  &PPC::GPRCRegClass,
  &PPC::GPRC_NOR0RegClass,
  NULL
};

static const TargetRegisterClass *const F8RCSuperclasses[] = {
  &PPC::F4RCRegClass,
  NULL
};

static const TargetRegisterClass *const G8RC_and_G8RC_NOX0Superclasses[] = {
  &PPC::G8RCRegClass,
  &PPC::G8RC_NOX0RegClass,
  NULL
};

namespace PPC {   // Register class instances
  extern const TargetRegisterClass GPRCRegClass = {
    &PPCMCRegisterClasses[GPRCRegClassID],
    VTLists + 0,
    GPRCSubClassMask,
    SuperRegIdxSeqs + 0,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass GPRC_NOR0RegClass = {
    &PPCMCRegisterClasses[GPRC_NOR0RegClassID],
    VTLists + 0,
    GPRC_NOR0SubClassMask,
    SuperRegIdxSeqs + 0,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass CRBITRCRegClass = {
    &PPCMCRegisterClasses[CRBITRCRegClassID],
    VTLists + 0,
    CRBITRCSubClassMask,
    SuperRegIdxSeqs + 2,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass F4RCRegClass = {
    &PPCMCRegisterClasses[F4RCRegClassID],
    VTLists + 4,
    F4RCSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass GPRC_and_GPRC_NOR0RegClass = {
    &PPCMCRegisterClasses[GPRC_and_GPRC_NOR0RegClassID],
    VTLists + 0,
    GPRC_and_GPRC_NOR0SubClassMask,
    SuperRegIdxSeqs + 0,
    GPRC_and_GPRC_NOR0Superclasses,
    0
  };

  extern const TargetRegisterClass CRRCRegClass = {
    &PPCMCRegisterClasses[CRRCRegClassID],
    VTLists + 0,
    CRRCSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass CARRYRCRegClass = {
    &PPCMCRegisterClasses[CARRYRCRegClassID],
    VTLists + 0,
    CARRYRCSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass CTRRCRegClass = {
    &PPCMCRegisterClasses[CTRRCRegClassID],
    VTLists + 0,
    CTRRCSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass VRSAVERCRegClass = {
    &PPCMCRegisterClasses[VRSAVERCRegClassID],
    VTLists + 0,
    VRSAVERCSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass G8RCRegClass = {
    &PPCMCRegisterClasses[G8RCRegClassID],
    VTLists + 2,
    G8RCSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass G8RC_NOX0RegClass = {
    &PPCMCRegisterClasses[G8RC_NOX0RegClassID],
    VTLists + 2,
    G8RC_NOX0SubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass F8RCRegClass = {
    &PPCMCRegisterClasses[F8RCRegClassID],
    VTLists + 6,
    F8RCSubClassMask,
    SuperRegIdxSeqs + 1,
    F8RCSuperclasses,
    0
  };

  extern const TargetRegisterClass G8RC_and_G8RC_NOX0RegClass = {
    &PPCMCRegisterClasses[G8RC_and_G8RC_NOX0RegClassID],
    VTLists + 2,
    G8RC_and_G8RC_NOX0SubClassMask,
    SuperRegIdxSeqs + 1,
    G8RC_and_G8RC_NOX0Superclasses,
    0
  };

  extern const TargetRegisterClass CTRRC8RegClass = {
    &PPCMCRegisterClasses[CTRRC8RegClassID],
    VTLists + 2,
    CTRRC8SubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass VRRCRegClass = {
    &PPCMCRegisterClasses[VRRCRegClassID],
    VTLists + 8,
    VRRCSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &PPC::GPRCRegClass,
    &PPC::GPRC_NOR0RegClass,
    &PPC::CRBITRCRegClass,
    &PPC::F4RCRegClass,
    &PPC::GPRC_and_GPRC_NOR0RegClass,
    &PPC::CRRCRegClass,
    &PPC::CARRYRCRegClass,
    &PPC::CTRRCRegClass,
    &PPC::VRSAVERCRegClass,
    &PPC::G8RCRegClass,
    &PPC::G8RC_NOX0RegClass,
    &PPC::F8RCRegClass,
    &PPC::G8RC_and_G8RC_NOX0RegClass,
    &PPC::CTRRC8RegClass,
    &PPC::VRRCRegClass,
  };
}

static const TargetRegisterInfoDesc PPCRegInfoDesc[] = { // Extra Descriptors
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
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
};
unsigned PPCGenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t Rows[1][5] = {
    { 0, 0, 0, 0, 0, },
  };

  --IdxA; assert(IdxA < 5);
  --IdxB; assert(IdxB < 5);
  return Rows[0][IdxB];
}

const TargetRegisterClass *PPCGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[15][5] = {
    {	// GPRC
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// GPRC_NOR0
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// CRBITRC
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// F4RC
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// GPRC_and_GPRC_NOR0
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// CRRC
      0,	// sub_32
      6,	// sub_eq -> CRRC
      6,	// sub_gt -> CRRC
      6,	// sub_lt -> CRRC
      6,	// sub_un -> CRRC
    },
    {	// CARRYRC
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// CTRRC
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// VRSAVERC
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// G8RC
      10,	// sub_32 -> G8RC
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// G8RC_NOX0
      11,	// sub_32 -> G8RC_NOX0
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// F8RC
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// G8RC_and_G8RC_NOX0
      13,	// sub_32 -> G8RC_and_G8RC_NOX0
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// CTRRC8
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// VRRC
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 5 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : 0;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &PPCGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 33},  	// GPRC
    {1, 33},  	// GPRC_NOR0
    {1, 32},  	// CRBITRC
    {1, 32},  	// F4RC
    {1, 32},  	// GPRC_and_GPRC_NOR0
    {4, 32},  	// CRRC
    {1, 1},  	// CARRYRC
    {0, 0},  	// CTRRC
    {1, 1},  	// VRSAVERC
    {1, 33},  	// G8RC
    {1, 33},  	// G8RC_NOX0
    {1, 32},  	// F8RC
    {1, 32},  	// G8RC_and_G8RC_NOX0
    {0, 0},  	// CTRRC8
    {1, 32},  	// VRRC
    {0, 0} };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned PPCGenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 137 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned PPCGenRegisterInfo::getNumRegPressureSets() const {
  return 6;
}

// Get the name of this register unit pressure set.
const char *PPCGenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *PressureNameTable[] = {
    "CRBITRC",
    "F4RC",
    "CARRYRC",
    "VRSAVERC",
    "VRRC",
    "GPRC+GPRC_NOR0",
    0 };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned PPCGenRegisterInfo::
getRegPressureSetLimit(unsigned Idx) const {
  static const unsigned PressureLimitTable[] = {
    32,  	// 0: CRBITRC
    32,  	// 1: F4RC
    1,  	// 2: CARRYRC
    1,  	// 3: VRSAVERC
    32,  	// 4: VRRC
    34,  	// 5: GPRC+GPRC_NOR0
    0 };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
    5,  -1,  	// #0 GPRC
    5,  -1,  	// #2 GPRC_NOR0
    0,  -1,  	// #4 CRBITRC
    1,  -1,  	// #6 F4RC
    5,  -1,  	// #8 GPRC_and_GPRC_NOR0
    0,  -1,  	// #10 CRRC
    2,  -1,  	// #12 CARRYRC
    -1,  	// #14 CTRRC
    3,  -1,  	// #15 VRSAVERC
    5,  -1,  	// #17 G8RC
    5,  -1,  	// #19 G8RC_NOX0
    1,  -1,  	// #21 F8RC
    5,  -1,  	// #23 G8RC_and_G8RC_NOX0
    -1,  	// #25 CTRRC8
    4,  -1,  	// #26 VRRC
    -1 };

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* PPCGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const unsigned RCSetStartTable[] = {
    0,2,4,6,8,10,12,14,15,17,19,21,23,25,26,0 };
  unsigned SetListStart = RCSetStartTable[RC->getID()];
  return &RCSetsTable[SetListStart];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int* PPCGenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 137 && "invalid register unit");
  static const unsigned RUSetStartTable[] = {
    12,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,14,14,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,0,14,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,26,15,0,0 };
  unsigned SetListStart = RUSetStartTable[RegUnit];
  return &RCSetsTable[SetListStart];
}

extern const MCRegisterDesc PPCRegDesc[];
extern const MCPhysReg PPCRegDiffLists[];
extern const char PPCRegStrings[];
extern const uint16_t PPCRegUnitRoots[][2];
extern const uint16_t PPCSubRegIdxLists[];
extern const uint16_t PPCRegEncodingTable[];
// PPC Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour0Dwarf2L[];
extern const unsigned PPCDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour1Dwarf2L[];
extern const unsigned PPCDwarfFlavour1Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour0Dwarf2L[];
extern const unsigned PPCEHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour1Dwarf2L[];
extern const unsigned PPCEHFlavour1Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour0L2Dwarf[];
extern const unsigned PPCDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour1L2Dwarf[];
extern const unsigned PPCDwarfFlavour1L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour0L2Dwarf[];
extern const unsigned PPCEHFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour1L2Dwarf[];
extern const unsigned PPCEHFlavour1L2DwarfSize;

PPCGenRegisterInfo::
PPCGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour, unsigned PC)
  : TargetRegisterInfo(PPCRegInfoDesc, RegisterClasses, RegisterClasses+15,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable) {
  InitMCRegisterInfo(PPCRegDesc, 180, RA, PC,
                     PPCMCRegisterClasses, 15,
                     PPCRegUnitRoots,
                     137,
                     PPCRegDiffLists,
                     PPCRegStrings,
                     PPCSubRegIdxLists,
                     6,
                     PPCRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(PPCDwarfFlavour0Dwarf2L, PPCDwarfFlavour0Dwarf2LSize, false);
    break;
  case 1:
    mapDwarfRegsToLLVMRegs(PPCDwarfFlavour1Dwarf2L, PPCDwarfFlavour1Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(PPCEHFlavour0Dwarf2L, PPCEHFlavour0Dwarf2LSize, true);
    break;
  case 1:
    mapDwarfRegsToLLVMRegs(PPCEHFlavour1Dwarf2L, PPCEHFlavour1Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(PPCDwarfFlavour0L2Dwarf, PPCDwarfFlavour0L2DwarfSize, false);
    break;
  case 1:
    mapLLVMRegsToDwarfRegs(PPCDwarfFlavour1L2Dwarf, PPCDwarfFlavour1L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(PPCEHFlavour0L2Dwarf, PPCEHFlavour0L2DwarfSize, true);
    break;
  case 1:
    mapLLVMRegsToDwarfRegs(PPCEHFlavour1L2Dwarf, PPCEHFlavour1L2DwarfSize, true);
    break;
  }
}

static const MCPhysReg CSR_Darwin32_SaveList[] = { PPC::R13, PPC::R14, PPC::R15, PPC::R16, PPC::R17, PPC::R18, PPC::R19, PPC::R20, PPC::R21, PPC::R22, PPC::R23, PPC::R24, PPC::R25, PPC::R26, PPC::R27, PPC::R28, PPC::R29, PPC::R30, PPC::R31, PPC::F14, PPC::F15, PPC::F16, PPC::F17, PPC::F18, PPC::F19, PPC::F20, PPC::F21, PPC::F22, PPC::F23, PPC::F24, PPC::F25, PPC::F26, PPC::F27, PPC::F28, PPC::F29, PPC::F30, PPC::F31, PPC::CR2, PPC::CR3, PPC::CR4, PPC::V20, PPC::V21, PPC::V22, PPC::V23, PPC::V24, PPC::V25, PPC::V26, PPC::V27, PPC::V28, PPC::V29, PPC::V30, PPC::V31, 0 };
static const uint32_t CSR_Darwin32_RegMask[] = { 0x07fff000, 0xfc000000, 0xe0000fff, 0x0000ffff, 0x0001ffe0, 0x00000000, };
static const MCPhysReg CSR_Darwin64_SaveList[] = { PPC::X13, PPC::X14, PPC::X15, PPC::X16, PPC::X17, PPC::X18, PPC::X19, PPC::X20, PPC::X21, PPC::X22, PPC::X23, PPC::X24, PPC::X25, PPC::X26, PPC::X27, PPC::X28, PPC::X29, PPC::X30, PPC::X31, PPC::F14, PPC::F15, PPC::F16, PPC::F17, PPC::F18, PPC::F19, PPC::F20, PPC::F21, PPC::F22, PPC::F23, PPC::F24, PPC::F25, PPC::F26, PPC::F27, PPC::F28, PPC::F29, PPC::F30, PPC::F31, PPC::CR2, PPC::CR3, PPC::CR4, PPC::V20, PPC::V21, PPC::V22, PPC::V23, PPC::V24, PPC::V25, PPC::V26, PPC::V27, PPC::V28, PPC::V29, PPC::V30, PPC::V31, 0 };
static const uint32_t CSR_Darwin64_RegMask[] = { 0x07fff000, 0xfc000000, 0xe0000fff, 0x0000ffff, 0x8001ffe0, 0x0003ffff, };
static const MCPhysReg CSR_NoRegs_SaveList[] = { PPC::VRSAVE, 0 };
static const uint32_t CSR_NoRegs_RegMask[] = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00020000, 0x00000000, };
static const MCPhysReg CSR_NoRegs_Altivec_SaveList[] = { PPC::V0, PPC::V1, PPC::V2, PPC::V3, PPC::V4, PPC::V5, PPC::V6, PPC::V7, PPC::V8, PPC::V9, PPC::V10, PPC::V11, PPC::V12, PPC::V13, PPC::V14, PPC::V15, PPC::V16, PPC::V17, PPC::V18, PPC::V19, PPC::V20, PPC::V21, PPC::V22, PPC::V23, PPC::V24, PPC::V25, PPC::V26, PPC::V27, PPC::V28, PPC::V29, PPC::V30, PPC::V31, PPC::VRSAVE, 0 };
static const uint32_t CSR_NoRegs_Altivec_RegMask[] = { 0x00000000, 0x00000000, 0x00000000, 0xfffe0000, 0x0003ffff, 0x00000000, };
static const MCPhysReg CSR_NoRegs_Darwin_SaveList[] = { 0 };
static const uint32_t CSR_NoRegs_Darwin_RegMask[] = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_SVR432_SaveList[] = { PPC::R14, PPC::R15, PPC::R16, PPC::R17, PPC::R18, PPC::R19, PPC::R20, PPC::VRSAVE, PPC::R21, PPC::R22, PPC::R23, PPC::R24, PPC::R25, PPC::R26, PPC::R27, PPC::R28, PPC::R29, PPC::R30, PPC::R31, PPC::F14, PPC::F15, PPC::F16, PPC::F17, PPC::F18, PPC::F19, PPC::F20, PPC::F21, PPC::F22, PPC::F23, PPC::F24, PPC::F25, PPC::F26, PPC::F27, PPC::F28, PPC::F29, PPC::F30, PPC::F31, PPC::CR2, PPC::CR3, PPC::CR4, PPC::V20, PPC::V21, PPC::V22, PPC::V23, PPC::V24, PPC::V25, PPC::V26, PPC::V27, PPC::V28, PPC::V29, PPC::V30, PPC::V31, 0 };
static const uint32_t CSR_SVR432_RegMask[] = { 0x07fff000, 0xfc000000, 0xc0000fff, 0x0000ffff, 0x0003ffe0, 0x00000000, };
static const MCPhysReg CSR_SVR464_SaveList[] = { PPC::X14, PPC::X15, PPC::X16, PPC::X17, PPC::X18, PPC::X19, PPC::X20, PPC::VRSAVE, PPC::X21, PPC::X22, PPC::X23, PPC::X24, PPC::X25, PPC::X26, PPC::X27, PPC::X28, PPC::X29, PPC::X30, PPC::X31, PPC::F14, PPC::F15, PPC::F16, PPC::F17, PPC::F18, PPC::F19, PPC::F20, PPC::F21, PPC::F22, PPC::F23, PPC::F24, PPC::F25, PPC::F26, PPC::F27, PPC::F28, PPC::F29, PPC::F30, PPC::F31, PPC::CR2, PPC::CR3, PPC::CR4, PPC::V20, PPC::V21, PPC::V22, PPC::V23, PPC::V24, PPC::V25, PPC::V26, PPC::V27, PPC::V28, PPC::V29, PPC::V30, PPC::V31, 0 };
static const uint32_t CSR_SVR464_RegMask[] = { 0x07fff000, 0xfc000000, 0xc0000fff, 0x0000ffff, 0x0003ffe0, 0x0003ffff, };


} // End llvm namespace 
#endif // GET_REGINFO_TARGET_DESC

