/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* * Mips Disassembler                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper function for extracting fields from encoded instructions.
template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits) {
    assert(startBit + numBits <= (sizeof(InsnType)*8) &&
           "Instruction field out of bounds!");
    InsnType fieldMask;
    if (numBits == sizeof(InsnType)*8)
      fieldMask = (InsnType)(-1LL);
    else
      fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
    return (insn & fieldMask) >> startBit;
}

static const uint8_t DecoderTable16[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 15
/* 7 */       MCD::OPC_CheckPredicate, 0, 144, 1, // Skip to: 411
/* 11 */      MCD::OPC_Decode, 146, 1, 0, // Opcode: BeqzRxImm16
/* 15 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 27
/* 19 */      MCD::OPC_CheckPredicate, 0, 132, 1, // Skip to: 411
/* 23 */      MCD::OPC_Decode, 149, 1, 0, // Opcode: BnezRxImm16
/* 27 */      MCD::OPC_FilterValue, 9, 7, 0, // Skip to: 38
/* 31 */      MCD::OPC_CheckPredicate, 0, 120, 1, // Skip to: 411
/* 35 */      MCD::OPC_Decode, 117, 1, // Opcode: AddiuRxRxImm16
/* 38 */      MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 50
/* 42 */      MCD::OPC_CheckPredicate, 0, 109, 1, // Skip to: 411
/* 46 */      MCD::OPC_Decode, 231, 5, 0, // Opcode: SltiRxImm16
/* 50 */      MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 62
/* 54 */      MCD::OPC_CheckPredicate, 0, 97, 1, // Skip to: 411
/* 58 */      MCD::OPC_Decode, 234, 5, 0, // Opcode: SltiuRxImm16
/* 62 */      MCD::OPC_FilterValue, 12, 38, 0, // Skip to: 104
/* 66 */      MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 69 */      MCD::OPC_FilterValue, 3, 7, 0, // Skip to: 80
/* 73 */      MCD::OPC_CheckPredicate, 0, 78, 1, // Skip to: 411
/* 77 */      MCD::OPC_Decode, 120, 2, // Opcode: AddiuSpImm16
/* 80 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 92
/* 84 */      MCD::OPC_CheckPredicate, 0, 67, 1, // Skip to: 411
/* 88 */      MCD::OPC_Decode, 247, 3, 3, // Opcode: Move32R16
/* 92 */      MCD::OPC_FilterValue, 7, 59, 1, // Skip to: 411
/* 96 */      MCD::OPC_CheckPredicate, 0, 55, 1, // Skip to: 411
/* 100 */     MCD::OPC_Decode, 248, 3, 4, // Opcode: MoveR3216
/* 104 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 116
/* 108 */     MCD::OPC_CheckPredicate, 0, 43, 1, // Skip to: 411
/* 112 */     MCD::OPC_Decode, 148, 3, 0, // Opcode: LiRxImm16
/* 116 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 128
/* 120 */     MCD::OPC_CheckPredicate, 0, 31, 1, // Skip to: 411
/* 124 */     MCD::OPC_Decode, 202, 1, 0, // Opcode: CmpiRxImm16
/* 128 */     MCD::OPC_FilterValue, 28, 26, 0, // Skip to: 158
/* 132 */     MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 135 */     MCD::OPC_FilterValue, 1, 7, 0, // Skip to: 146
/* 139 */     MCD::OPC_CheckPredicate, 0, 12, 1, // Skip to: 411
/* 143 */     MCD::OPC_Decode, 122, 5, // Opcode: AdduRxRyRz16
/* 146 */     MCD::OPC_FilterValue, 3, 5, 1, // Skip to: 411
/* 150 */     MCD::OPC_CheckPredicate, 0, 1, 1, // Skip to: 411
/* 154 */     MCD::OPC_Decode, 243, 5, 5, // Opcode: SubuRxRyRz16
/* 158 */     MCD::OPC_FilterValue, 29, 249, 0, // Skip to: 411
/* 162 */     MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 165 */     MCD::OPC_FilterValue, 0, 63, 0, // Skip to: 232
/* 169 */     MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 172 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 184
/* 176 */     MCD::OPC_CheckPredicate, 0, 231, 0, // Skip to: 411
/* 180 */     MCD::OPC_Decode, 193, 2, 2, // Opcode: JumpLinkReg16
/* 184 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 202
/* 188 */     MCD::OPC_CheckPredicate, 0, 219, 0, // Skip to: 411
/* 192 */     MCD::OPC_CheckField, 8, 3, 0, 213, 0, // Skip to: 411
/* 198 */     MCD::OPC_Decode, 190, 2, 2, // Opcode: JrRa16
/* 202 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 214
/* 206 */     MCD::OPC_CheckPredicate, 0, 201, 0, // Skip to: 411
/* 210 */     MCD::OPC_Decode, 192, 2, 0, // Opcode: JrcRx16
/* 214 */     MCD::OPC_FilterValue, 7, 193, 0, // Skip to: 411
/* 218 */     MCD::OPC_CheckPredicate, 0, 189, 0, // Skip to: 411
/* 222 */     MCD::OPC_CheckField, 8, 3, 0, 183, 0, // Skip to: 411
/* 228 */     MCD::OPC_Decode, 191, 2, 2, // Opcode: JrcRa16
/* 232 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 244
/* 236 */     MCD::OPC_CheckPredicate, 0, 171, 0, // Skip to: 411
/* 240 */     MCD::OPC_Decode, 229, 5, 6, // Opcode: SltRxRy16
/* 244 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 256
/* 248 */     MCD::OPC_CheckPredicate, 0, 159, 0, // Skip to: 411
/* 252 */     MCD::OPC_Decode, 237, 5, 6, // Opcode: SltuRxRy16
/* 256 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 268
/* 260 */     MCD::OPC_CheckPredicate, 0, 147, 0, // Skip to: 411
/* 264 */     MCD::OPC_Decode, 227, 5, 7, // Opcode: SllvRxRy16
/* 268 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 280
/* 272 */     MCD::OPC_CheckPredicate, 0, 135, 0, // Skip to: 411
/* 276 */     MCD::OPC_Decode, 242, 5, 7, // Opcode: SrlvRxRy16
/* 280 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 292
/* 284 */     MCD::OPC_CheckPredicate, 0, 123, 0, // Skip to: 411
/* 288 */     MCD::OPC_Decode, 240, 5, 7, // Opcode: SravRxRy16
/* 292 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 304
/* 296 */     MCD::OPC_CheckPredicate, 0, 111, 0, // Skip to: 411
/* 300 */     MCD::OPC_Decode, 201, 1, 6, // Opcode: CmpRxRy16
/* 304 */     MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 315
/* 308 */     MCD::OPC_CheckPredicate, 0, 99, 0, // Skip to: 411
/* 312 */     MCD::OPC_Decode, 123, 7, // Opcode: AndRxRxRy16
/* 315 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 327
/* 319 */     MCD::OPC_CheckPredicate, 0, 88, 0, // Skip to: 411
/* 323 */     MCD::OPC_Decode, 143, 4, 7, // Opcode: OrRxRxRy16
/* 327 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 339
/* 331 */     MCD::OPC_CheckPredicate, 0, 76, 0, // Skip to: 411
/* 335 */     MCD::OPC_Decode, 135, 6, 7, // Opcode: XorRxRxRy16
/* 339 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 351
/* 343 */     MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 411
/* 347 */     MCD::OPC_Decode, 136, 4, 6, // Opcode: NotRxRy16
/* 351 */     MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 363
/* 355 */     MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 411
/* 359 */     MCD::OPC_Decode, 245, 3, 0, // Opcode: Mfhi16
/* 363 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 375
/* 367 */     MCD::OPC_CheckPredicate, 0, 40, 0, // Skip to: 411
/* 371 */     MCD::OPC_Decode, 246, 3, 0, // Opcode: Mflo16
/* 375 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 387
/* 379 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 411
/* 383 */     MCD::OPC_Decode, 131, 2, 6, // Opcode: DivRxRy16
/* 387 */     MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 399
/* 391 */     MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 411
/* 395 */     MCD::OPC_Decode, 132, 2, 6, // Opcode: DivuRxRy16
/* 399 */     MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 411
/* 403 */     MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 411
/* 407 */     MCD::OPC_Decode, 135, 4, 6, // Opcode: NegRxRy16
/* 411 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 26
/* 7 */       MCD::OPC_CheckPredicate, 0, 170, 1, // Skip to: 437
/* 11 */      MCD::OPC_CheckField, 27, 5, 30, 164, 1, // Skip to: 437
/* 17 */      MCD::OPC_CheckField, 5, 3, 0, 158, 1, // Skip to: 437
/* 23 */      MCD::OPC_Decode, 116, 0, // Opcode: AddiuRxPcImmX16
/* 26 */      MCD::OPC_FilterValue, 2, 20, 0, // Skip to: 50
/* 30 */      MCD::OPC_CheckPredicate, 0, 147, 1, // Skip to: 437
/* 34 */      MCD::OPC_CheckField, 27, 5, 30, 141, 1, // Skip to: 437
/* 40 */      MCD::OPC_CheckField, 5, 6, 0, 135, 1, // Skip to: 437
/* 46 */      MCD::OPC_Decode, 148, 1, 8, // Opcode: BimmX16
/* 50 */      MCD::OPC_FilterValue, 4, 20, 0, // Skip to: 74
/* 54 */      MCD::OPC_CheckPredicate, 0, 123, 1, // Skip to: 437
/* 58 */      MCD::OPC_CheckField, 27, 5, 30, 117, 1, // Skip to: 437
/* 64 */      MCD::OPC_CheckField, 5, 3, 0, 111, 1, // Skip to: 437
/* 70 */      MCD::OPC_Decode, 147, 1, 0, // Opcode: BeqzRxImmX16
/* 74 */      MCD::OPC_FilterValue, 5, 20, 0, // Skip to: 98
/* 78 */      MCD::OPC_CheckPredicate, 0, 99, 1, // Skip to: 437
/* 82 */      MCD::OPC_CheckField, 27, 5, 30, 93, 1, // Skip to: 437
/* 88 */      MCD::OPC_CheckField, 5, 3, 0, 87, 1, // Skip to: 437
/* 94 */      MCD::OPC_Decode, 150, 1, 0, // Opcode: BnezRxImmX16
/* 98 */      MCD::OPC_FilterValue, 6, 91, 0, // Skip to: 193
/* 102 */     MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 105 */     MCD::OPC_FilterValue, 30, 72, 1, // Skip to: 437
/* 109 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 112 */     MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 155
/* 116 */     MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 119 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 131
/* 123 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 155
/* 127 */     MCD::OPC_Decode, 226, 5, 6, // Opcode: SllX16
/* 131 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 143
/* 135 */     MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 155
/* 139 */     MCD::OPC_Decode, 241, 5, 6, // Opcode: SrlX16
/* 143 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 155
/* 147 */     MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 155
/* 151 */     MCD::OPC_Decode, 239, 5, 6, // Opcode: SraX16
/* 155 */     MCD::OPC_ExtractField, 5, 6,  // Inst{10-5} ...
/* 158 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 170
/* 162 */     MCD::OPC_CheckPredicate, 0, 15, 1, // Skip to: 437
/* 166 */     MCD::OPC_Decode, 157, 1, 2, // Opcode: BteqzX16
/* 170 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 182
/* 174 */     MCD::OPC_CheckPredicate, 0, 3, 1, // Skip to: 437
/* 178 */     MCD::OPC_Decode, 164, 1, 2, // Opcode: BtnezX16
/* 182 */     MCD::OPC_FilterValue, 24, 251, 0, // Skip to: 437
/* 186 */     MCD::OPC_CheckPredicate, 0, 247, 0, // Skip to: 437
/* 190 */     MCD::OPC_Decode, 121, 2, // Opcode: AddiuSpImmX16
/* 193 */     MCD::OPC_FilterValue, 8, 19, 0, // Skip to: 216
/* 197 */     MCD::OPC_CheckPredicate, 0, 236, 0, // Skip to: 437
/* 201 */     MCD::OPC_CheckField, 27, 5, 30, 230, 0, // Skip to: 437
/* 207 */     MCD::OPC_CheckField, 4, 1, 0, 224, 0, // Skip to: 437
/* 213 */     MCD::OPC_Decode, 119, 9, // Opcode: AddiuRxRyOffMemX16
/* 216 */     MCD::OPC_FilterValue, 9, 19, 0, // Skip to: 239
/* 220 */     MCD::OPC_CheckPredicate, 0, 213, 0, // Skip to: 437
/* 224 */     MCD::OPC_CheckField, 27, 5, 30, 207, 0, // Skip to: 437
/* 230 */     MCD::OPC_CheckField, 5, 3, 0, 201, 0, // Skip to: 437
/* 236 */     MCD::OPC_Decode, 115, 0, // Opcode: AddiuRxImmX16
/* 239 */     MCD::OPC_FilterValue, 10, 20, 0, // Skip to: 263
/* 243 */     MCD::OPC_CheckPredicate, 0, 190, 0, // Skip to: 437
/* 247 */     MCD::OPC_CheckField, 27, 5, 30, 184, 0, // Skip to: 437
/* 253 */     MCD::OPC_CheckField, 5, 3, 0, 178, 0, // Skip to: 437
/* 259 */     MCD::OPC_Decode, 232, 5, 0, // Opcode: SltiRxImmX16
/* 263 */     MCD::OPC_FilterValue, 11, 20, 0, // Skip to: 287
/* 267 */     MCD::OPC_CheckPredicate, 0, 166, 0, // Skip to: 437
/* 271 */     MCD::OPC_CheckField, 27, 5, 30, 160, 0, // Skip to: 437
/* 277 */     MCD::OPC_CheckField, 5, 3, 0, 154, 0, // Skip to: 437
/* 283 */     MCD::OPC_Decode, 235, 5, 0, // Opcode: SltiuRxImmX16
/* 287 */     MCD::OPC_FilterValue, 13, 20, 0, // Skip to: 311
/* 291 */     MCD::OPC_CheckPredicate, 0, 142, 0, // Skip to: 437
/* 295 */     MCD::OPC_CheckField, 27, 5, 30, 136, 0, // Skip to: 437
/* 301 */     MCD::OPC_CheckField, 5, 3, 0, 130, 0, // Skip to: 437
/* 307 */     MCD::OPC_Decode, 149, 3, 0, // Opcode: LiRxImmX16
/* 311 */     MCD::OPC_FilterValue, 14, 20, 0, // Skip to: 335
/* 315 */     MCD::OPC_CheckPredicate, 0, 118, 0, // Skip to: 437
/* 319 */     MCD::OPC_CheckField, 27, 5, 30, 112, 0, // Skip to: 437
/* 325 */     MCD::OPC_CheckField, 5, 3, 0, 106, 0, // Skip to: 437
/* 331 */     MCD::OPC_Decode, 203, 1, 0, // Opcode: CmpiRxImmX16
/* 335 */     MCD::OPC_FilterValue, 22, 20, 0, // Skip to: 359
/* 339 */     MCD::OPC_CheckPredicate, 0, 94, 0, // Skip to: 437
/* 343 */     MCD::OPC_CheckField, 27, 5, 30, 88, 0, // Skip to: 437
/* 349 */     MCD::OPC_CheckField, 5, 3, 0, 82, 0, // Skip to: 437
/* 355 */     MCD::OPC_Decode, 155, 3, 0, // Opcode: LwRxSpImmX16
/* 359 */     MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 377
/* 363 */     MCD::OPC_CheckPredicate, 0, 70, 0, // Skip to: 437
/* 367 */     MCD::OPC_CheckField, 27, 5, 30, 64, 0, // Skip to: 437
/* 373 */     MCD::OPC_Decode, 210, 5, 9, // Opcode: SbRxRyOffMemX16
/* 377 */     MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 395
/* 381 */     MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 437
/* 385 */     MCD::OPC_CheckField, 27, 5, 30, 46, 0, // Skip to: 437
/* 391 */     MCD::OPC_Decode, 225, 5, 9, // Opcode: ShRxRyOffMemX16
/* 395 */     MCD::OPC_FilterValue, 26, 20, 0, // Skip to: 419
/* 399 */     MCD::OPC_CheckPredicate, 0, 34, 0, // Skip to: 437
/* 403 */     MCD::OPC_CheckField, 27, 5, 30, 28, 0, // Skip to: 437
/* 409 */     MCD::OPC_CheckField, 5, 3, 0, 22, 0, // Skip to: 437
/* 415 */     MCD::OPC_Decode, 245, 5, 0, // Opcode: SwRxSpImmX16
/* 419 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 437
/* 423 */     MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 437
/* 427 */     MCD::OPC_CheckField, 27, 5, 30, 4, 0, // Skip to: 437
/* 433 */     MCD::OPC_Decode, 244, 5, 9, // Opcode: SwRxRyOffMemX16
/* 437 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 225, 2, // Skip to: 744
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 28
/* 14 */      MCD::OPC_CheckPredicate, 1, 15, 19, // Skip to: 4897
/* 18 */      MCD::OPC_CheckField, 21, 5, 0, 9, 19, // Skip to: 4897
/* 24 */      MCD::OPC_Decode, 136, 5, 10, // Opcode: SLL
/* 28 */      MCD::OPC_FilterValue, 1, 39, 0, // Skip to: 71
/* 32 */      MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 35 */      MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 53
/* 39 */      MCD::OPC_CheckPredicate, 1, 246, 18, // Skip to: 4897
/* 43 */      MCD::OPC_CheckField, 6, 5, 0, 240, 18, // Skip to: 4897
/* 49 */      MCD::OPC_Decode, 182, 3, 11, // Opcode: MOVF_I
/* 53 */      MCD::OPC_FilterValue, 1, 232, 18, // Skip to: 4897
/* 57 */      MCD::OPC_CheckPredicate, 1, 228, 18, // Skip to: 4897
/* 61 */      MCD::OPC_CheckField, 6, 5, 0, 222, 18, // Skip to: 4897
/* 67 */      MCD::OPC_Decode, 196, 3, 11, // Opcode: MOVT_I
/* 71 */      MCD::OPC_FilterValue, 2, 27, 0, // Skip to: 102
/* 75 */      MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 78 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 90
/* 82 */      MCD::OPC_CheckPredicate, 1, 203, 18, // Skip to: 4897
/* 86 */      MCD::OPC_Decode, 158, 5, 10, // Opcode: SRL
/* 90 */      MCD::OPC_FilterValue, 1, 195, 18, // Skip to: 4897
/* 94 */      MCD::OPC_CheckPredicate, 2, 191, 18, // Skip to: 4897
/* 98 */      MCD::OPC_Decode, 194, 4, 10, // Opcode: ROTR
/* 102 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 120
/* 106 */     MCD::OPC_CheckPredicate, 1, 179, 18, // Skip to: 4897
/* 110 */     MCD::OPC_CheckField, 21, 5, 0, 173, 18, // Skip to: 4897
/* 116 */     MCD::OPC_Decode, 154, 5, 10, // Opcode: SRA
/* 120 */     MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 138
/* 124 */     MCD::OPC_CheckPredicate, 1, 161, 18, // Skip to: 4897
/* 128 */     MCD::OPC_CheckField, 6, 5, 0, 155, 18, // Skip to: 4897
/* 134 */     MCD::OPC_Decode, 139, 5, 12, // Opcode: SLLV
/* 138 */     MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 169
/* 142 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 145 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 157
/* 149 */     MCD::OPC_CheckPredicate, 1, 136, 18, // Skip to: 4897
/* 153 */     MCD::OPC_Decode, 159, 5, 12, // Opcode: SRLV
/* 157 */     MCD::OPC_FilterValue, 1, 128, 18, // Skip to: 4897
/* 161 */     MCD::OPC_CheckPredicate, 2, 124, 18, // Skip to: 4897
/* 165 */     MCD::OPC_Decode, 195, 4, 12, // Opcode: ROTRV
/* 169 */     MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 187
/* 173 */     MCD::OPC_CheckPredicate, 1, 112, 18, // Skip to: 4897
/* 177 */     MCD::OPC_CheckField, 6, 5, 0, 106, 18, // Skip to: 4897
/* 183 */     MCD::OPC_Decode, 155, 5, 12, // Opcode: SRAV
/* 187 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 205
/* 191 */     MCD::OPC_CheckPredicate, 1, 94, 18, // Skip to: 4897
/* 195 */     MCD::OPC_CheckField, 6, 15, 0, 88, 18, // Skip to: 4897
/* 201 */     MCD::OPC_Decode, 187, 2, 13, // Opcode: JR
/* 205 */     MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 229
/* 209 */     MCD::OPC_CheckPredicate, 1, 76, 18, // Skip to: 4897
/* 213 */     MCD::OPC_CheckField, 16, 5, 0, 70, 18, // Skip to: 4897
/* 219 */     MCD::OPC_CheckField, 6, 5, 0, 64, 18, // Skip to: 4897
/* 225 */     MCD::OPC_Decode, 183, 2, 14, // Opcode: JALR
/* 229 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 247
/* 233 */     MCD::OPC_CheckPredicate, 1, 52, 18, // Skip to: 4897
/* 237 */     MCD::OPC_CheckField, 6, 5, 0, 46, 18, // Skip to: 4897
/* 243 */     MCD::OPC_Decode, 205, 3, 15, // Opcode: MOVZ_I_I
/* 247 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 265
/* 251 */     MCD::OPC_CheckPredicate, 1, 34, 18, // Skip to: 4897
/* 255 */     MCD::OPC_CheckField, 6, 5, 0, 28, 18, // Skip to: 4897
/* 261 */     MCD::OPC_Decode, 191, 3, 15, // Opcode: MOVN_I_I
/* 265 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 277
/* 269 */     MCD::OPC_CheckPredicate, 1, 16, 18, // Skip to: 4897
/* 273 */     MCD::OPC_Decode, 207, 5, 16, // Opcode: SYNC
/* 277 */     MCD::OPC_FilterValue, 16, 43, 0, // Skip to: 324
/* 281 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 284 */     MCD::OPC_FilterValue, 0, 1, 18, // Skip to: 4897
/* 288 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 291 */     MCD::OPC_FilterValue, 0, 250, 17, // Skip to: 4897
/* 295 */     MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 298 */     MCD::OPC_FilterValue, 0, 243, 17, // Skip to: 4897
/* 302 */     MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 316
/* 306 */     MCD::OPC_CheckField, 21, 2, 0, 4, 0, // Skip to: 316
/* 312 */     MCD::OPC_Decode, 170, 3, 17, // Opcode: MFHI
/* 316 */     MCD::OPC_CheckPredicate, 3, 225, 17, // Skip to: 4897
/* 320 */     MCD::OPC_Decode, 172, 3, 18, // Opcode: MFHI_DSP
/* 324 */     MCD::OPC_FilterValue, 17, 36, 0, // Skip to: 364
/* 328 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 331 */     MCD::OPC_FilterValue, 0, 210, 17, // Skip to: 4897
/* 335 */     MCD::OPC_ExtractField, 13, 8,  // Inst{20-13} ...
/* 338 */     MCD::OPC_FilterValue, 0, 203, 17, // Skip to: 4897
/* 342 */     MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 356
/* 346 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 356
/* 352 */     MCD::OPC_Decode, 218, 3, 13, // Opcode: MTHI
/* 356 */     MCD::OPC_CheckPredicate, 3, 185, 17, // Skip to: 4897
/* 360 */     MCD::OPC_Decode, 220, 3, 19, // Opcode: MTHI_DSP
/* 364 */     MCD::OPC_FilterValue, 18, 43, 0, // Skip to: 411
/* 368 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 371 */     MCD::OPC_FilterValue, 0, 170, 17, // Skip to: 4897
/* 375 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 378 */     MCD::OPC_FilterValue, 0, 163, 17, // Skip to: 4897
/* 382 */     MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 385 */     MCD::OPC_FilterValue, 0, 156, 17, // Skip to: 4897
/* 389 */     MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 403
/* 393 */     MCD::OPC_CheckField, 21, 2, 0, 4, 0, // Skip to: 403
/* 399 */     MCD::OPC_Decode, 173, 3, 17, // Opcode: MFLO
/* 403 */     MCD::OPC_CheckPredicate, 3, 138, 17, // Skip to: 4897
/* 407 */     MCD::OPC_Decode, 175, 3, 20, // Opcode: MFLO_DSP
/* 411 */     MCD::OPC_FilterValue, 19, 36, 0, // Skip to: 451
/* 415 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 418 */     MCD::OPC_FilterValue, 0, 123, 17, // Skip to: 4897
/* 422 */     MCD::OPC_ExtractField, 13, 8,  // Inst{20-13} ...
/* 425 */     MCD::OPC_FilterValue, 0, 116, 17, // Skip to: 4897
/* 429 */     MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 443
/* 433 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 443
/* 439 */     MCD::OPC_Decode, 222, 3, 13, // Opcode: MTLO
/* 443 */     MCD::OPC_CheckPredicate, 3, 98, 17, // Skip to: 4897
/* 447 */     MCD::OPC_Decode, 224, 3, 21, // Opcode: MTLO_DSP
/* 451 */     MCD::OPC_FilterValue, 24, 36, 0, // Skip to: 491
/* 455 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 458 */     MCD::OPC_FilterValue, 0, 83, 17, // Skip to: 4897
/* 462 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 465 */     MCD::OPC_FilterValue, 0, 76, 17, // Skip to: 4897
/* 469 */     MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 483
/* 473 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 483
/* 479 */     MCD::OPC_Decode, 236, 3, 22, // Opcode: MULT
/* 483 */     MCD::OPC_CheckPredicate, 3, 58, 17, // Skip to: 4897
/* 487 */     MCD::OPC_Decode, 238, 3, 23, // Opcode: MULT_DSP
/* 491 */     MCD::OPC_FilterValue, 25, 36, 0, // Skip to: 531
/* 495 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 498 */     MCD::OPC_FilterValue, 0, 43, 17, // Skip to: 4897
/* 502 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 505 */     MCD::OPC_FilterValue, 0, 36, 17, // Skip to: 4897
/* 509 */     MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 523
/* 513 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 523
/* 519 */     MCD::OPC_Decode, 240, 3, 22, // Opcode: MULTu
/* 523 */     MCD::OPC_CheckPredicate, 3, 18, 17, // Skip to: 4897
/* 527 */     MCD::OPC_Decode, 237, 3, 23, // Opcode: MULTU_DSP
/* 531 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 549
/* 535 */     MCD::OPC_CheckPredicate, 1, 6, 17, // Skip to: 4897
/* 539 */     MCD::OPC_CheckField, 6, 10, 0, 0, 17, // Skip to: 4897
/* 545 */     MCD::OPC_Decode, 221, 4, 22, // Opcode: SDIV
/* 549 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 567
/* 553 */     MCD::OPC_CheckPredicate, 1, 244, 16, // Skip to: 4897
/* 557 */     MCD::OPC_CheckField, 6, 10, 0, 238, 16, // Skip to: 4897
/* 563 */     MCD::OPC_Decode, 254, 5, 22, // Opcode: UDIV
/* 567 */     MCD::OPC_FilterValue, 32, 13, 0, // Skip to: 584
/* 571 */     MCD::OPC_CheckPredicate, 1, 226, 16, // Skip to: 4897
/* 575 */     MCD::OPC_CheckField, 6, 5, 0, 220, 16, // Skip to: 4897
/* 581 */     MCD::OPC_Decode, 20, 12, // Opcode: ADD
/* 584 */     MCD::OPC_FilterValue, 33, 13, 0, // Skip to: 601
/* 588 */     MCD::OPC_CheckPredicate, 1, 209, 16, // Skip to: 4897
/* 592 */     MCD::OPC_CheckField, 6, 5, 0, 203, 16, // Skip to: 4897
/* 598 */     MCD::OPC_Decode, 41, 12, // Opcode: ADDu
/* 601 */     MCD::OPC_FilterValue, 34, 14, 0, // Skip to: 619
/* 605 */     MCD::OPC_CheckPredicate, 1, 192, 16, // Skip to: 4897
/* 609 */     MCD::OPC_CheckField, 6, 5, 0, 186, 16, // Skip to: 4897
/* 615 */     MCD::OPC_Decode, 170, 5, 12, // Opcode: SUB
/* 619 */     MCD::OPC_FilterValue, 35, 14, 0, // Skip to: 637
/* 623 */     MCD::OPC_CheckPredicate, 1, 174, 16, // Skip to: 4897
/* 627 */     MCD::OPC_CheckField, 6, 5, 0, 168, 16, // Skip to: 4897
/* 633 */     MCD::OPC_Decode, 185, 5, 12, // Opcode: SUBu
/* 637 */     MCD::OPC_FilterValue, 36, 13, 0, // Skip to: 654
/* 641 */     MCD::OPC_CheckPredicate, 1, 156, 16, // Skip to: 4897
/* 645 */     MCD::OPC_CheckField, 6, 5, 0, 150, 16, // Skip to: 4897
/* 651 */     MCD::OPC_Decode, 45, 12, // Opcode: AND
/* 654 */     MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 672
/* 658 */     MCD::OPC_CheckPredicate, 1, 139, 16, // Skip to: 4897
/* 662 */     MCD::OPC_CheckField, 6, 5, 0, 133, 16, // Skip to: 4897
/* 668 */     MCD::OPC_Decode, 137, 4, 12, // Opcode: OR
/* 672 */     MCD::OPC_FilterValue, 38, 14, 0, // Skip to: 690
/* 676 */     MCD::OPC_CheckPredicate, 1, 121, 16, // Skip to: 4897
/* 680 */     MCD::OPC_CheckField, 6, 5, 0, 115, 16, // Skip to: 4897
/* 686 */     MCD::OPC_Decode, 129, 6, 12, // Opcode: XOR
/* 690 */     MCD::OPC_FilterValue, 39, 14, 0, // Skip to: 708
/* 694 */     MCD::OPC_CheckPredicate, 1, 103, 16, // Skip to: 4897
/* 698 */     MCD::OPC_CheckField, 6, 5, 0, 97, 16, // Skip to: 4897
/* 704 */     MCD::OPC_Decode, 132, 4, 12, // Opcode: NOR
/* 708 */     MCD::OPC_FilterValue, 42, 14, 0, // Skip to: 726
/* 712 */     MCD::OPC_CheckPredicate, 1, 85, 16, // Skip to: 4897
/* 716 */     MCD::OPC_CheckField, 6, 5, 0, 79, 16, // Skip to: 4897
/* 722 */     MCD::OPC_Decode, 142, 5, 12, // Opcode: SLT
/* 726 */     MCD::OPC_FilterValue, 43, 71, 16, // Skip to: 4897
/* 730 */     MCD::OPC_CheckPredicate, 1, 67, 16, // Skip to: 4897
/* 734 */     MCD::OPC_CheckField, 6, 5, 0, 61, 16, // Skip to: 4897
/* 740 */     MCD::OPC_Decode, 151, 5, 12, // Opcode: SLTu
/* 744 */     MCD::OPC_FilterValue, 1, 82, 0, // Skip to: 830
/* 748 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 751 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 763
/* 755 */     MCD::OPC_CheckPredicate, 1, 42, 16, // Skip to: 4897
/* 759 */     MCD::OPC_Decode, 139, 1, 24, // Opcode: BLTZ
/* 763 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 775
/* 767 */     MCD::OPC_CheckPredicate, 1, 30, 16, // Skip to: 4897
/* 771 */     MCD::OPC_Decode, 131, 1, 24, // Opcode: BGEZ
/* 775 */     MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 787
/* 779 */     MCD::OPC_CheckPredicate, 1, 18, 16, // Skip to: 4897
/* 783 */     MCD::OPC_Decode, 141, 1, 24, // Opcode: BLTZAL
/* 787 */     MCD::OPC_FilterValue, 17, 21, 0, // Skip to: 812
/* 791 */     MCD::OPC_CheckPredicate, 1, 9, 0, // Skip to: 804
/* 795 */     MCD::OPC_CheckField, 21, 5, 0, 3, 0, // Skip to: 804
/* 801 */     MCD::OPC_Decode, 126, 25, // Opcode: BAL_BR
/* 804 */     MCD::OPC_CheckPredicate, 1, 249, 15, // Skip to: 4897
/* 808 */     MCD::OPC_Decode, 133, 1, 24, // Opcode: BGEZAL
/* 812 */     MCD::OPC_FilterValue, 28, 241, 15, // Skip to: 4897
/* 816 */     MCD::OPC_CheckPredicate, 3, 237, 15, // Skip to: 4897
/* 820 */     MCD::OPC_CheckField, 21, 5, 0, 231, 15, // Skip to: 4897
/* 826 */     MCD::OPC_Decode, 144, 1, 25, // Opcode: BPOSGE32
/* 830 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 842
/* 834 */     MCD::OPC_CheckPredicate, 4, 219, 15, // Skip to: 4897
/* 838 */     MCD::OPC_Decode, 181, 2, 26, // Opcode: J
/* 842 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 854
/* 846 */     MCD::OPC_CheckPredicate, 1, 207, 15, // Skip to: 4897
/* 850 */     MCD::OPC_Decode, 182, 2, 26, // Opcode: JAL
/* 854 */     MCD::OPC_FilterValue, 4, 21, 0, // Skip to: 879
/* 858 */     MCD::OPC_CheckPredicate, 4, 9, 0, // Skip to: 871
/* 862 */     MCD::OPC_CheckField, 16, 10, 0, 3, 0, // Skip to: 871
/* 868 */     MCD::OPC_Decode, 124, 25, // Opcode: B
/* 871 */     MCD::OPC_CheckPredicate, 1, 182, 15, // Skip to: 4897
/* 875 */     MCD::OPC_Decode, 129, 1, 27, // Opcode: BEQ
/* 879 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 891
/* 883 */     MCD::OPC_CheckPredicate, 1, 170, 15, // Skip to: 4897
/* 887 */     MCD::OPC_Decode, 142, 1, 27, // Opcode: BNE
/* 891 */     MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 909
/* 895 */     MCD::OPC_CheckPredicate, 1, 158, 15, // Skip to: 4897
/* 899 */     MCD::OPC_CheckField, 16, 5, 0, 152, 15, // Skip to: 4897
/* 905 */     MCD::OPC_Decode, 137, 1, 24, // Opcode: BLEZ
/* 909 */     MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 927
/* 913 */     MCD::OPC_CheckPredicate, 1, 140, 15, // Skip to: 4897
/* 917 */     MCD::OPC_CheckField, 16, 5, 0, 134, 15, // Skip to: 4897
/* 923 */     MCD::OPC_Decode, 134, 1, 24, // Opcode: BGTZ
/* 927 */     MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 938
/* 931 */     MCD::OPC_CheckPredicate, 1, 122, 15, // Skip to: 4897
/* 935 */     MCD::OPC_Decode, 37, 28, // Opcode: ADDi
/* 938 */     MCD::OPC_FilterValue, 9, 7, 0, // Skip to: 949
/* 942 */     MCD::OPC_CheckPredicate, 1, 111, 15, // Skip to: 4897
/* 946 */     MCD::OPC_Decode, 39, 28, // Opcode: ADDiu
/* 949 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 961
/* 953 */     MCD::OPC_CheckPredicate, 1, 100, 15, // Skip to: 4897
/* 957 */     MCD::OPC_Decode, 145, 5, 28, // Opcode: SLTi
/* 961 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 973
/* 965 */     MCD::OPC_CheckPredicate, 1, 88, 15, // Skip to: 4897
/* 969 */     MCD::OPC_Decode, 148, 5, 28, // Opcode: SLTiu
/* 973 */     MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 984
/* 977 */     MCD::OPC_CheckPredicate, 1, 76, 15, // Skip to: 4897
/* 981 */     MCD::OPC_Decode, 48, 29, // Opcode: ANDi
/* 984 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 996
/* 988 */     MCD::OPC_CheckPredicate, 1, 65, 15, // Skip to: 4897
/* 992 */     MCD::OPC_Decode, 140, 4, 29, // Opcode: ORi
/* 996 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1008
/* 1000 */    MCD::OPC_CheckPredicate, 1, 53, 15, // Skip to: 4897
/* 1004 */    MCD::OPC_Decode, 132, 6, 29, // Opcode: XORi
/* 1008 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 1026
/* 1012 */    MCD::OPC_CheckPredicate, 1, 41, 15, // Skip to: 4897
/* 1016 */    MCD::OPC_CheckField, 21, 5, 0, 35, 15, // Skip to: 4897
/* 1022 */    MCD::OPC_Decode, 248, 2, 30, // Opcode: LUi
/* 1026 */    MCD::OPC_FilterValue, 16, 39, 0, // Skip to: 1069
/* 1030 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1033 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1051
/* 1037 */    MCD::OPC_CheckPredicate, 1, 16, 15, // Skip to: 4897
/* 1041 */    MCD::OPC_CheckField, 3, 8, 0, 10, 15, // Skip to: 4897
/* 1047 */    MCD::OPC_Decode, 167, 3, 31, // Opcode: MFC0_3OP
/* 1051 */    MCD::OPC_FilterValue, 4, 2, 15, // Skip to: 4897
/* 1055 */    MCD::OPC_CheckPredicate, 1, 254, 14, // Skip to: 4897
/* 1059 */    MCD::OPC_CheckField, 3, 8, 0, 248, 14, // Skip to: 4897
/* 1065 */    MCD::OPC_Decode, 215, 3, 32, // Opcode: MTC0_3OP
/* 1069 */    MCD::OPC_FilterValue, 17, 110, 3, // Skip to: 1951
/* 1073 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1076 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1094
/* 1080 */    MCD::OPC_CheckPredicate, 1, 229, 14, // Skip to: 4897
/* 1084 */    MCD::OPC_CheckField, 0, 11, 0, 223, 14, // Skip to: 4897
/* 1090 */    MCD::OPC_Decode, 168, 3, 33, // Opcode: MFC1
/* 1094 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1112
/* 1098 */    MCD::OPC_CheckPredicate, 1, 211, 14, // Skip to: 4897
/* 1102 */    MCD::OPC_CheckField, 0, 11, 0, 205, 14, // Skip to: 4897
/* 1108 */    MCD::OPC_Decode, 219, 1, 34, // Opcode: DMFC1
/* 1112 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1130
/* 1116 */    MCD::OPC_CheckPredicate, 1, 193, 14, // Skip to: 4897
/* 1120 */    MCD::OPC_CheckField, 0, 11, 0, 187, 14, // Skip to: 4897
/* 1126 */    MCD::OPC_Decode, 171, 1, 35, // Opcode: CFC1
/* 1130 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1148
/* 1134 */    MCD::OPC_CheckPredicate, 1, 175, 14, // Skip to: 4897
/* 1138 */    MCD::OPC_CheckField, 0, 11, 0, 169, 14, // Skip to: 4897
/* 1144 */    MCD::OPC_Decode, 216, 3, 36, // Opcode: MTC1
/* 1148 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1166
/* 1152 */    MCD::OPC_CheckPredicate, 1, 157, 14, // Skip to: 4897
/* 1156 */    MCD::OPC_CheckField, 0, 11, 0, 151, 14, // Skip to: 4897
/* 1162 */    MCD::OPC_Decode, 222, 1, 37, // Opcode: DMTC1
/* 1166 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1184
/* 1170 */    MCD::OPC_CheckPredicate, 1, 139, 14, // Skip to: 4897
/* 1174 */    MCD::OPC_CheckField, 0, 11, 0, 133, 14, // Skip to: 4897
/* 1180 */    MCD::OPC_Decode, 186, 1, 38, // Opcode: CTC1
/* 1184 */    MCD::OPC_FilterValue, 8, 26, 0, // Skip to: 1214
/* 1188 */    MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 1191 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 1202
/* 1195 */    MCD::OPC_CheckPredicate, 1, 114, 14, // Skip to: 4897
/* 1199 */    MCD::OPC_Decode, 127, 39, // Opcode: BC1F
/* 1202 */    MCD::OPC_FilterValue, 1, 107, 14, // Skip to: 4897
/* 1206 */    MCD::OPC_CheckPredicate, 1, 103, 14, // Skip to: 4897
/* 1210 */    MCD::OPC_Decode, 128, 1, 39, // Opcode: BC1T
/* 1214 */    MCD::OPC_FilterValue, 16, 87, 1, // Skip to: 1561
/* 1218 */    MCD::OPC_ExtractField, 4, 2,  // Inst{5-4} ...
/* 1221 */    MCD::OPC_FilterValue, 0, 195, 0, // Skip to: 1420
/* 1225 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1228 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1240
/* 1232 */    MCD::OPC_CheckPredicate, 1, 77, 14, // Skip to: 4897
/* 1236 */    MCD::OPC_Decode, 152, 2, 40, // Opcode: FADD_S
/* 1240 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1252
/* 1244 */    MCD::OPC_CheckPredicate, 1, 65, 14, // Skip to: 4897
/* 1248 */    MCD::OPC_Decode, 178, 2, 40, // Opcode: FSUB_S
/* 1252 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1264
/* 1256 */    MCD::OPC_CheckPredicate, 1, 53, 14, // Skip to: 4897
/* 1260 */    MCD::OPC_Decode, 169, 2, 40, // Opcode: FMUL_S
/* 1264 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1276
/* 1268 */    MCD::OPC_CheckPredicate, 1, 41, 14, // Skip to: 4897
/* 1272 */    MCD::OPC_Decode, 158, 2, 40, // Opcode: FDIV_S
/* 1276 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1294
/* 1280 */    MCD::OPC_CheckPredicate, 1, 29, 14, // Skip to: 4897
/* 1284 */    MCD::OPC_CheckField, 16, 5, 0, 23, 14, // Skip to: 4897
/* 1290 */    MCD::OPC_Decode, 175, 2, 41, // Opcode: FSQRT_S
/* 1294 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1312
/* 1298 */    MCD::OPC_CheckPredicate, 4, 11, 14, // Skip to: 4897
/* 1302 */    MCD::OPC_CheckField, 16, 5, 0, 5, 14, // Skip to: 4897
/* 1308 */    MCD::OPC_Decode, 149, 2, 41, // Opcode: FABS_S
/* 1312 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1330
/* 1316 */    MCD::OPC_CheckPredicate, 1, 249, 13, // Skip to: 4897
/* 1320 */    MCD::OPC_CheckField, 16, 5, 0, 243, 13, // Skip to: 4897
/* 1326 */    MCD::OPC_Decode, 166, 2, 41, // Opcode: FMOV_S
/* 1330 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 1348
/* 1334 */    MCD::OPC_CheckPredicate, 4, 231, 13, // Skip to: 4897
/* 1338 */    MCD::OPC_CheckField, 16, 5, 0, 225, 13, // Skip to: 4897
/* 1344 */    MCD::OPC_Decode, 172, 2, 41, // Opcode: FNEG_S
/* 1348 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 1366
/* 1352 */    MCD::OPC_CheckPredicate, 1, 213, 13, // Skip to: 4897
/* 1356 */    MCD::OPC_CheckField, 16, 5, 0, 207, 13, // Skip to: 4897
/* 1362 */    MCD::OPC_Decode, 202, 4, 41, // Opcode: ROUND_W_S
/* 1366 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 1384
/* 1370 */    MCD::OPC_CheckPredicate, 1, 195, 13, // Skip to: 4897
/* 1374 */    MCD::OPC_CheckField, 16, 5, 0, 189, 13, // Skip to: 4897
/* 1380 */    MCD::OPC_Decode, 253, 5, 41, // Opcode: TRUNC_W_S
/* 1384 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 1402
/* 1388 */    MCD::OPC_CheckPredicate, 1, 177, 13, // Skip to: 4897
/* 1392 */    MCD::OPC_CheckField, 16, 5, 0, 171, 13, // Skip to: 4897
/* 1398 */    MCD::OPC_Decode, 170, 1, 41, // Opcode: CEIL_W_S
/* 1402 */    MCD::OPC_FilterValue, 15, 163, 13, // Skip to: 4897
/* 1406 */    MCD::OPC_CheckPredicate, 1, 159, 13, // Skip to: 4897
/* 1410 */    MCD::OPC_CheckField, 16, 5, 0, 153, 13, // Skip to: 4897
/* 1416 */    MCD::OPC_Decode, 163, 2, 41, // Opcode: FLOOR_W_S
/* 1420 */    MCD::OPC_FilterValue, 1, 58, 0, // Skip to: 1482
/* 1424 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1427 */    MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 1458
/* 1431 */    MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 1434 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1446
/* 1438 */    MCD::OPC_CheckPredicate, 1, 127, 13, // Skip to: 4897
/* 1442 */    MCD::OPC_Decode, 184, 3, 42, // Opcode: MOVF_S
/* 1446 */    MCD::OPC_FilterValue, 1, 119, 13, // Skip to: 4897
/* 1450 */    MCD::OPC_CheckPredicate, 1, 115, 13, // Skip to: 4897
/* 1454 */    MCD::OPC_Decode, 198, 3, 42, // Opcode: MOVT_S
/* 1458 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1470
/* 1462 */    MCD::OPC_CheckPredicate, 1, 103, 13, // Skip to: 4897
/* 1466 */    MCD::OPC_Decode, 207, 3, 43, // Opcode: MOVZ_I_S
/* 1470 */    MCD::OPC_FilterValue, 3, 95, 13, // Skip to: 4897
/* 1474 */    MCD::OPC_CheckPredicate, 1, 91, 13, // Skip to: 4897
/* 1478 */    MCD::OPC_Decode, 193, 3, 43, // Opcode: MOVN_I_S
/* 1482 */    MCD::OPC_FilterValue, 2, 57, 0, // Skip to: 1543
/* 1486 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1489 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1507
/* 1493 */    MCD::OPC_CheckPredicate, 5, 72, 13, // Skip to: 4897
/* 1497 */    MCD::OPC_CheckField, 16, 5, 0, 66, 13, // Skip to: 4897
/* 1503 */    MCD::OPC_Decode, 187, 1, 44, // Opcode: CVT_D32_S
/* 1507 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1525
/* 1511 */    MCD::OPC_CheckPredicate, 1, 54, 13, // Skip to: 4897
/* 1515 */    MCD::OPC_CheckField, 16, 5, 0, 48, 13, // Skip to: 4897
/* 1521 */    MCD::OPC_Decode, 200, 1, 41, // Opcode: CVT_W_S
/* 1525 */    MCD::OPC_FilterValue, 5, 40, 13, // Skip to: 4897
/* 1529 */    MCD::OPC_CheckPredicate, 1, 36, 13, // Skip to: 4897
/* 1533 */    MCD::OPC_CheckField, 16, 5, 0, 30, 13, // Skip to: 4897
/* 1539 */    MCD::OPC_Decode, 193, 1, 45, // Opcode: CVT_L_S
/* 1543 */    MCD::OPC_FilterValue, 3, 22, 13, // Skip to: 4897
/* 1547 */    MCD::OPC_CheckPredicate, 1, 18, 13, // Skip to: 4897
/* 1551 */    MCD::OPC_CheckField, 6, 5, 0, 12, 13, // Skip to: 4897
/* 1557 */    MCD::OPC_Decode, 155, 2, 46, // Opcode: FCMP_S32
/* 1561 */    MCD::OPC_FilterValue, 17, 87, 1, // Skip to: 1908
/* 1565 */    MCD::OPC_ExtractField, 4, 2,  // Inst{5-4} ...
/* 1568 */    MCD::OPC_FilterValue, 0, 195, 0, // Skip to: 1767
/* 1572 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1575 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1587
/* 1579 */    MCD::OPC_CheckPredicate, 5, 242, 12, // Skip to: 4897
/* 1583 */    MCD::OPC_Decode, 150, 2, 47, // Opcode: FADD_D32
/* 1587 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1599
/* 1591 */    MCD::OPC_CheckPredicate, 5, 230, 12, // Skip to: 4897
/* 1595 */    MCD::OPC_Decode, 176, 2, 47, // Opcode: FSUB_D32
/* 1599 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1611
/* 1603 */    MCD::OPC_CheckPredicate, 5, 218, 12, // Skip to: 4897
/* 1607 */    MCD::OPC_Decode, 167, 2, 47, // Opcode: FMUL_D32
/* 1611 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1623
/* 1615 */    MCD::OPC_CheckPredicate, 5, 206, 12, // Skip to: 4897
/* 1619 */    MCD::OPC_Decode, 156, 2, 47, // Opcode: FDIV_D32
/* 1623 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1641
/* 1627 */    MCD::OPC_CheckPredicate, 5, 194, 12, // Skip to: 4897
/* 1631 */    MCD::OPC_CheckField, 16, 5, 0, 188, 12, // Skip to: 4897
/* 1637 */    MCD::OPC_Decode, 173, 2, 48, // Opcode: FSQRT_D32
/* 1641 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1659
/* 1645 */    MCD::OPC_CheckPredicate, 4, 176, 12, // Skip to: 4897
/* 1649 */    MCD::OPC_CheckField, 16, 5, 0, 170, 12, // Skip to: 4897
/* 1655 */    MCD::OPC_Decode, 147, 2, 48, // Opcode: FABS_D32
/* 1659 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1677
/* 1663 */    MCD::OPC_CheckPredicate, 5, 158, 12, // Skip to: 4897
/* 1667 */    MCD::OPC_CheckField, 16, 5, 0, 152, 12, // Skip to: 4897
/* 1673 */    MCD::OPC_Decode, 164, 2, 48, // Opcode: FMOV_D32
/* 1677 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 1695
/* 1681 */    MCD::OPC_CheckPredicate, 4, 140, 12, // Skip to: 4897
/* 1685 */    MCD::OPC_CheckField, 16, 5, 0, 134, 12, // Skip to: 4897
/* 1691 */    MCD::OPC_Decode, 170, 2, 48, // Opcode: FNEG_D32
/* 1695 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 1713
/* 1699 */    MCD::OPC_CheckPredicate, 5, 122, 12, // Skip to: 4897
/* 1703 */    MCD::OPC_CheckField, 16, 5, 0, 116, 12, // Skip to: 4897
/* 1709 */    MCD::OPC_Decode, 200, 4, 49, // Opcode: ROUND_W_D32
/* 1713 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 1731
/* 1717 */    MCD::OPC_CheckPredicate, 5, 104, 12, // Skip to: 4897
/* 1721 */    MCD::OPC_CheckField, 16, 5, 0, 98, 12, // Skip to: 4897
/* 1727 */    MCD::OPC_Decode, 251, 5, 49, // Opcode: TRUNC_W_D32
/* 1731 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 1749
/* 1735 */    MCD::OPC_CheckPredicate, 5, 86, 12, // Skip to: 4897
/* 1739 */    MCD::OPC_CheckField, 16, 5, 0, 80, 12, // Skip to: 4897
/* 1745 */    MCD::OPC_Decode, 168, 1, 49, // Opcode: CEIL_W_D32
/* 1749 */    MCD::OPC_FilterValue, 15, 72, 12, // Skip to: 4897
/* 1753 */    MCD::OPC_CheckPredicate, 5, 68, 12, // Skip to: 4897
/* 1757 */    MCD::OPC_CheckField, 16, 5, 0, 62, 12, // Skip to: 4897
/* 1763 */    MCD::OPC_Decode, 161, 2, 49, // Opcode: FLOOR_W_D32
/* 1767 */    MCD::OPC_FilterValue, 1, 58, 0, // Skip to: 1829
/* 1771 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1774 */    MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 1805
/* 1778 */    MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 1781 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1793
/* 1785 */    MCD::OPC_CheckPredicate, 5, 36, 12, // Skip to: 4897
/* 1789 */    MCD::OPC_Decode, 180, 3, 50, // Opcode: MOVF_D32
/* 1793 */    MCD::OPC_FilterValue, 1, 28, 12, // Skip to: 4897
/* 1797 */    MCD::OPC_CheckPredicate, 5, 24, 12, // Skip to: 4897
/* 1801 */    MCD::OPC_Decode, 194, 3, 50, // Opcode: MOVT_D32
/* 1805 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1817
/* 1809 */    MCD::OPC_CheckPredicate, 5, 12, 12, // Skip to: 4897
/* 1813 */    MCD::OPC_Decode, 203, 3, 51, // Opcode: MOVZ_I_D32
/* 1817 */    MCD::OPC_FilterValue, 3, 4, 12, // Skip to: 4897
/* 1821 */    MCD::OPC_CheckPredicate, 5, 0, 12, // Skip to: 4897
/* 1825 */    MCD::OPC_Decode, 189, 3, 51, // Opcode: MOVN_I_D32
/* 1829 */    MCD::OPC_FilterValue, 2, 57, 0, // Skip to: 1890
/* 1833 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1836 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1854
/* 1840 */    MCD::OPC_CheckPredicate, 5, 237, 11, // Skip to: 4897
/* 1844 */    MCD::OPC_CheckField, 16, 5, 0, 231, 11, // Skip to: 4897
/* 1850 */    MCD::OPC_Decode, 194, 1, 49, // Opcode: CVT_S_D32
/* 1854 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1872
/* 1858 */    MCD::OPC_CheckPredicate, 5, 219, 11, // Skip to: 4897
/* 1862 */    MCD::OPC_CheckField, 16, 5, 0, 213, 11, // Skip to: 4897
/* 1868 */    MCD::OPC_Decode, 198, 1, 49, // Opcode: CVT_W_D32
/* 1872 */    MCD::OPC_FilterValue, 5, 205, 11, // Skip to: 4897
/* 1876 */    MCD::OPC_CheckPredicate, 1, 201, 11, // Skip to: 4897
/* 1880 */    MCD::OPC_CheckField, 16, 5, 0, 195, 11, // Skip to: 4897
/* 1886 */    MCD::OPC_Decode, 192, 1, 52, // Opcode: CVT_L_D64
/* 1890 */    MCD::OPC_FilterValue, 3, 187, 11, // Skip to: 4897
/* 1894 */    MCD::OPC_CheckPredicate, 5, 183, 11, // Skip to: 4897
/* 1898 */    MCD::OPC_CheckField, 6, 5, 0, 177, 11, // Skip to: 4897
/* 1904 */    MCD::OPC_Decode, 153, 2, 53, // Opcode: FCMP_D32
/* 1908 */    MCD::OPC_FilterValue, 20, 169, 11, // Skip to: 4897
/* 1912 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1915 */    MCD::OPC_FilterValue, 32, 14, 0, // Skip to: 1933
/* 1919 */    MCD::OPC_CheckPredicate, 1, 158, 11, // Skip to: 4897
/* 1923 */    MCD::OPC_CheckField, 16, 5, 0, 152, 11, // Skip to: 4897
/* 1929 */    MCD::OPC_Decode, 197, 1, 41, // Opcode: CVT_S_W
/* 1933 */    MCD::OPC_FilterValue, 33, 144, 11, // Skip to: 4897
/* 1937 */    MCD::OPC_CheckPredicate, 5, 140, 11, // Skip to: 4897
/* 1941 */    MCD::OPC_CheckField, 16, 5, 0, 134, 11, // Skip to: 4897
/* 1947 */    MCD::OPC_Decode, 188, 1, 44, // Opcode: CVT_D32_W
/* 1951 */    MCD::OPC_FilterValue, 18, 39, 0, // Skip to: 1994
/* 1955 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1958 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1976
/* 1962 */    MCD::OPC_CheckPredicate, 1, 115, 11, // Skip to: 4897
/* 1966 */    MCD::OPC_CheckField, 3, 8, 0, 109, 11, // Skip to: 4897
/* 1972 */    MCD::OPC_Decode, 169, 3, 31, // Opcode: MFC2_3OP
/* 1976 */    MCD::OPC_FilterValue, 4, 101, 11, // Skip to: 4897
/* 1980 */    MCD::OPC_CheckPredicate, 1, 97, 11, // Skip to: 4897
/* 1984 */    MCD::OPC_CheckField, 3, 8, 0, 91, 11, // Skip to: 4897
/* 1990 */    MCD::OPC_Decode, 217, 3, 32, // Opcode: MTC2_3OP
/* 1994 */    MCD::OPC_FilterValue, 19, 207, 0, // Skip to: 2205
/* 1998 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2001 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 2019
/* 2005 */    MCD::OPC_CheckPredicate, 6, 72, 11, // Skip to: 4897
/* 2009 */    MCD::OPC_CheckField, 11, 5, 0, 66, 11, // Skip to: 4897
/* 2015 */    MCD::OPC_Decode, 137, 3, 54, // Opcode: LWXC1
/* 2019 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 2037
/* 2023 */    MCD::OPC_CheckPredicate, 7, 54, 11, // Skip to: 4897
/* 2027 */    MCD::OPC_CheckField, 11, 5, 0, 48, 11, // Skip to: 4897
/* 2033 */    MCD::OPC_Decode, 215, 2, 55, // Opcode: LDXC1
/* 2037 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 2055
/* 2041 */    MCD::OPC_CheckPredicate, 8, 36, 11, // Skip to: 4897
/* 2045 */    MCD::OPC_CheckField, 11, 5, 0, 30, 11, // Skip to: 4897
/* 2051 */    MCD::OPC_Decode, 246, 2, 55, // Opcode: LUXC1
/* 2055 */    MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 2073
/* 2059 */    MCD::OPC_CheckPredicate, 6, 18, 11, // Skip to: 4897
/* 2063 */    MCD::OPC_CheckField, 6, 5, 0, 12, 11, // Skip to: 4897
/* 2069 */    MCD::OPC_Decode, 202, 5, 56, // Opcode: SWXC1
/* 2073 */    MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 2091
/* 2077 */    MCD::OPC_CheckPredicate, 7, 0, 11, // Skip to: 4897
/* 2081 */    MCD::OPC_CheckField, 6, 5, 0, 250, 10, // Skip to: 4897
/* 2087 */    MCD::OPC_Decode, 226, 4, 57, // Opcode: SDXC1
/* 2091 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 2109
/* 2095 */    MCD::OPC_CheckPredicate, 8, 238, 10, // Skip to: 4897
/* 2099 */    MCD::OPC_CheckField, 6, 5, 0, 232, 10, // Skip to: 4897
/* 2105 */    MCD::OPC_Decode, 187, 5, 57, // Opcode: SUXC1
/* 2109 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 2121
/* 2113 */    MCD::OPC_CheckPredicate, 2, 220, 10, // Skip to: 4897
/* 2117 */    MCD::OPC_Decode, 162, 3, 58, // Opcode: MADD_S
/* 2121 */    MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 2133
/* 2125 */    MCD::OPC_CheckPredicate, 9, 208, 10, // Skip to: 4897
/* 2129 */    MCD::OPC_Decode, 159, 3, 59, // Opcode: MADD_D32
/* 2133 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 2145
/* 2137 */    MCD::OPC_CheckPredicate, 2, 196, 10, // Skip to: 4897
/* 2141 */    MCD::OPC_Decode, 214, 3, 58, // Opcode: MSUB_S
/* 2145 */    MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 2157
/* 2149 */    MCD::OPC_CheckPredicate, 9, 184, 10, // Skip to: 4897
/* 2153 */    MCD::OPC_Decode, 211, 3, 59, // Opcode: MSUB_D32
/* 2157 */    MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 2169
/* 2161 */    MCD::OPC_CheckPredicate, 10, 172, 10, // Skip to: 4897
/* 2165 */    MCD::OPC_Decode, 255, 3, 58, // Opcode: NMADD_S
/* 2169 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 2181
/* 2173 */    MCD::OPC_CheckPredicate, 11, 160, 10, // Skip to: 4897
/* 2177 */    MCD::OPC_Decode, 253, 3, 59, // Opcode: NMADD_D32
/* 2181 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 2193
/* 2185 */    MCD::OPC_CheckPredicate, 10, 148, 10, // Skip to: 4897
/* 2189 */    MCD::OPC_Decode, 130, 4, 58, // Opcode: NMSUB_S
/* 2193 */    MCD::OPC_FilterValue, 57, 140, 10, // Skip to: 4897
/* 2197 */    MCD::OPC_CheckPredicate, 11, 136, 10, // Skip to: 4897
/* 2201 */    MCD::OPC_Decode, 128, 4, 59, // Opcode: NMSUB_D32
/* 2205 */    MCD::OPC_FilterValue, 28, 171, 0, // Skip to: 2380
/* 2209 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 2212 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 2245
/* 2216 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2219 */    MCD::OPC_FilterValue, 0, 114, 10, // Skip to: 4897
/* 2223 */    MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 2237
/* 2227 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2237
/* 2233 */    MCD::OPC_Decode, 156, 3, 22, // Opcode: MADD
/* 2237 */    MCD::OPC_CheckPredicate, 3, 96, 10, // Skip to: 4897
/* 2241 */    MCD::OPC_Decode, 161, 3, 60, // Opcode: MADD_DSP
/* 2245 */    MCD::OPC_FilterValue, 1, 29, 0, // Skip to: 2278
/* 2249 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2252 */    MCD::OPC_FilterValue, 0, 81, 10, // Skip to: 4897
/* 2256 */    MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 2270
/* 2260 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2270
/* 2266 */    MCD::OPC_Decode, 157, 3, 22, // Opcode: MADDU
/* 2270 */    MCD::OPC_CheckPredicate, 3, 63, 10, // Skip to: 4897
/* 2274 */    MCD::OPC_Decode, 158, 3, 60, // Opcode: MADDU_DSP
/* 2278 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2290
/* 2282 */    MCD::OPC_CheckPredicate, 1, 51, 10, // Skip to: 4897
/* 2286 */    MCD::OPC_Decode, 225, 3, 12, // Opcode: MUL
/* 2290 */    MCD::OPC_FilterValue, 4, 29, 0, // Skip to: 2323
/* 2294 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2297 */    MCD::OPC_FilterValue, 0, 36, 10, // Skip to: 4897
/* 2301 */    MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 2315
/* 2305 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2315
/* 2311 */    MCD::OPC_Decode, 208, 3, 22, // Opcode: MSUB
/* 2315 */    MCD::OPC_CheckPredicate, 3, 18, 10, // Skip to: 4897
/* 2319 */    MCD::OPC_Decode, 213, 3, 60, // Opcode: MSUB_DSP
/* 2323 */    MCD::OPC_FilterValue, 5, 29, 0, // Skip to: 2356
/* 2327 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2330 */    MCD::OPC_FilterValue, 0, 3, 10, // Skip to: 4897
/* 2334 */    MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 2348
/* 2338 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2348
/* 2344 */    MCD::OPC_Decode, 209, 3, 22, // Opcode: MSUBU
/* 2348 */    MCD::OPC_CheckPredicate, 3, 241, 9, // Skip to: 4897
/* 2352 */    MCD::OPC_Decode, 210, 3, 60, // Opcode: MSUBU_DSP
/* 2356 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 2368
/* 2360 */    MCD::OPC_CheckPredicate, 12, 229, 9, // Skip to: 4897
/* 2364 */    MCD::OPC_Decode, 173, 1, 61, // Opcode: CLZ
/* 2368 */    MCD::OPC_FilterValue, 33, 221, 9, // Skip to: 4897
/* 2372 */    MCD::OPC_CheckPredicate, 12, 217, 9, // Skip to: 4897
/* 2376 */    MCD::OPC_Decode, 172, 1, 61, // Opcode: CLO
/* 2380 */    MCD::OPC_FilterValue, 31, 249, 8, // Skip to: 4681
/* 2384 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2387 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2399
/* 2391 */    MCD::OPC_CheckPredicate, 2, 198, 9, // Skip to: 4897
/* 2395 */    MCD::OPC_Decode, 133, 2, 62, // Opcode: EXT
/* 2399 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 2411
/* 2403 */    MCD::OPC_CheckPredicate, 2, 186, 9, // Skip to: 4897
/* 2407 */    MCD::OPC_Decode, 179, 2, 63, // Opcode: INS
/* 2411 */    MCD::OPC_FilterValue, 10, 39, 0, // Skip to: 2454
/* 2415 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2418 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2430
/* 2422 */    MCD::OPC_CheckPredicate, 3, 167, 9, // Skip to: 4897
/* 2426 */    MCD::OPC_Decode, 136, 3, 12, // Opcode: LWX
/* 2430 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 2442
/* 2434 */    MCD::OPC_CheckPredicate, 3, 155, 9, // Skip to: 4897
/* 2438 */    MCD::OPC_Decode, 224, 2, 12, // Opcode: LHX
/* 2442 */    MCD::OPC_FilterValue, 6, 147, 9, // Skip to: 4897
/* 2446 */    MCD::OPC_CheckPredicate, 3, 143, 9, // Skip to: 4897
/* 2450 */    MCD::OPC_Decode, 197, 2, 12, // Opcode: LBUX
/* 2454 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 2472
/* 2458 */    MCD::OPC_CheckPredicate, 3, 131, 9, // Skip to: 4897
/* 2462 */    MCD::OPC_CheckField, 6, 10, 0, 125, 9, // Skip to: 4897
/* 2468 */    MCD::OPC_Decode, 180, 2, 64, // Opcode: INSV
/* 2472 */    MCD::OPC_FilterValue, 16, 32, 1, // Skip to: 2764
/* 2476 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2479 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 2490
/* 2483 */    MCD::OPC_CheckPredicate, 3, 106, 9, // Skip to: 4897
/* 2487 */    MCD::OPC_Decode, 32, 65, // Opcode: ADDU_QB
/* 2490 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2502
/* 2494 */    MCD::OPC_CheckPredicate, 3, 95, 9, // Skip to: 4897
/* 2498 */    MCD::OPC_Decode, 181, 5, 65, // Opcode: SUBU_QB
/* 2502 */    MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 2513
/* 2506 */    MCD::OPC_CheckPredicate, 3, 83, 9, // Skip to: 4897
/* 2510 */    MCD::OPC_Decode, 34, 65, // Opcode: ADDU_S_QB
/* 2513 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 2525
/* 2517 */    MCD::OPC_CheckPredicate, 3, 72, 9, // Skip to: 4897
/* 2521 */    MCD::OPC_Decode, 183, 5, 65, // Opcode: SUBU_S_QB
/* 2525 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 2537
/* 2529 */    MCD::OPC_CheckPredicate, 3, 60, 9, // Skip to: 4897
/* 2533 */    MCD::OPC_Decode, 228, 3, 65, // Opcode: MULEU_S_PH_QBL
/* 2537 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 2549
/* 2541 */    MCD::OPC_CheckPredicate, 3, 48, 9, // Skip to: 4897
/* 2545 */    MCD::OPC_Decode, 229, 3, 65, // Opcode: MULEU_S_PH_QBR
/* 2549 */    MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 2560
/* 2553 */    MCD::OPC_CheckPredicate, 13, 36, 9, // Skip to: 4897
/* 2557 */    MCD::OPC_Decode, 31, 65, // Opcode: ADDU_PH
/* 2560 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 2572
/* 2564 */    MCD::OPC_CheckPredicate, 13, 25, 9, // Skip to: 4897
/* 2568 */    MCD::OPC_Decode, 180, 5, 65, // Opcode: SUBU_PH
/* 2572 */    MCD::OPC_FilterValue, 10, 7, 0, // Skip to: 2583
/* 2576 */    MCD::OPC_CheckPredicate, 3, 13, 9, // Skip to: 4897
/* 2580 */    MCD::OPC_Decode, 25, 65, // Opcode: ADDQ_PH
/* 2583 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 2595
/* 2587 */    MCD::OPC_CheckPredicate, 3, 2, 9, // Skip to: 4897
/* 2591 */    MCD::OPC_Decode, 175, 5, 65, // Opcode: SUBQ_PH
/* 2595 */    MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 2606
/* 2599 */    MCD::OPC_CheckPredicate, 13, 246, 8, // Skip to: 4897
/* 2603 */    MCD::OPC_Decode, 33, 65, // Opcode: ADDU_S_PH
/* 2606 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 2618
/* 2610 */    MCD::OPC_CheckPredicate, 13, 235, 8, // Skip to: 4897
/* 2614 */    MCD::OPC_Decode, 182, 5, 65, // Opcode: SUBU_S_PH
/* 2618 */    MCD::OPC_FilterValue, 14, 7, 0, // Skip to: 2629
/* 2622 */    MCD::OPC_CheckPredicate, 3, 223, 8, // Skip to: 4897
/* 2626 */    MCD::OPC_Decode, 26, 65, // Opcode: ADDQ_S_PH
/* 2629 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 2641
/* 2633 */    MCD::OPC_CheckPredicate, 3, 212, 8, // Skip to: 4897
/* 2637 */    MCD::OPC_Decode, 176, 5, 65, // Opcode: SUBQ_S_PH
/* 2641 */    MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 2652
/* 2645 */    MCD::OPC_CheckPredicate, 3, 200, 8, // Skip to: 4897
/* 2649 */    MCD::OPC_Decode, 28, 12, // Opcode: ADDSC
/* 2652 */    MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 2663
/* 2656 */    MCD::OPC_CheckPredicate, 3, 189, 8, // Skip to: 4897
/* 2660 */    MCD::OPC_Decode, 35, 12, // Opcode: ADDWC
/* 2663 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 2675
/* 2667 */    MCD::OPC_CheckPredicate, 3, 178, 8, // Skip to: 4897
/* 2671 */    MCD::OPC_Decode, 178, 3, 12, // Opcode: MODSUB
/* 2675 */    MCD::OPC_FilterValue, 20, 14, 0, // Skip to: 2693
/* 2679 */    MCD::OPC_CheckPredicate, 3, 166, 8, // Skip to: 4897
/* 2683 */    MCD::OPC_CheckField, 16, 5, 0, 160, 8, // Skip to: 4897
/* 2689 */    MCD::OPC_Decode, 185, 4, 66, // Opcode: RADDU_W_QB
/* 2693 */    MCD::OPC_FilterValue, 22, 7, 0, // Skip to: 2704
/* 2697 */    MCD::OPC_CheckPredicate, 3, 148, 8, // Skip to: 4897
/* 2701 */    MCD::OPC_Decode, 27, 12, // Opcode: ADDQ_S_W
/* 2704 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 2716
/* 2708 */    MCD::OPC_CheckPredicate, 3, 137, 8, // Skip to: 4897
/* 2712 */    MCD::OPC_Decode, 177, 5, 12, // Opcode: SUBQ_S_W
/* 2716 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 2728
/* 2720 */    MCD::OPC_CheckPredicate, 3, 125, 8, // Skip to: 4897
/* 2724 */    MCD::OPC_Decode, 226, 3, 67, // Opcode: MULEQ_S_W_PHL
/* 2728 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 2740
/* 2732 */    MCD::OPC_CheckPredicate, 3, 113, 8, // Skip to: 4897
/* 2736 */    MCD::OPC_Decode, 227, 3, 67, // Opcode: MULEQ_S_W_PHR
/* 2740 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 2752
/* 2744 */    MCD::OPC_CheckPredicate, 13, 101, 8, // Skip to: 4897
/* 2748 */    MCD::OPC_Decode, 232, 3, 65, // Opcode: MULQ_S_PH
/* 2752 */    MCD::OPC_FilterValue, 31, 93, 8, // Skip to: 4897
/* 2756 */    MCD::OPC_CheckPredicate, 3, 89, 8, // Skip to: 4897
/* 2760 */    MCD::OPC_Decode, 230, 3, 65, // Opcode: MULQ_RS_PH
/* 2764 */    MCD::OPC_FilterValue, 17, 47, 1, // Skip to: 3071
/* 2768 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2771 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 2789
/* 2775 */    MCD::OPC_CheckPredicate, 3, 70, 8, // Skip to: 4897
/* 2779 */    MCD::OPC_CheckField, 11, 5, 0, 64, 8, // Skip to: 4897
/* 2785 */    MCD::OPC_Decode, 180, 1, 68, // Opcode: CMPU_EQ_QB
/* 2789 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 2807
/* 2793 */    MCD::OPC_CheckPredicate, 3, 52, 8, // Skip to: 4897
/* 2797 */    MCD::OPC_CheckField, 11, 5, 0, 46, 8, // Skip to: 4897
/* 2803 */    MCD::OPC_Decode, 182, 1, 68, // Opcode: CMPU_LT_QB
/* 2807 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 2825
/* 2811 */    MCD::OPC_CheckPredicate, 3, 34, 8, // Skip to: 4897
/* 2815 */    MCD::OPC_CheckField, 11, 5, 0, 28, 8, // Skip to: 4897
/* 2821 */    MCD::OPC_Decode, 181, 1, 68, // Opcode: CMPU_LE_QB
/* 2825 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 2837
/* 2829 */    MCD::OPC_CheckPredicate, 3, 16, 8, // Skip to: 4897
/* 2833 */    MCD::OPC_Decode, 146, 4, 65, // Opcode: PICK_QB
/* 2837 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 2849
/* 2841 */    MCD::OPC_CheckPredicate, 3, 4, 8, // Skip to: 4897
/* 2845 */    MCD::OPC_Decode, 177, 1, 67, // Opcode: CMPGU_EQ_QB
/* 2849 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 2861
/* 2853 */    MCD::OPC_CheckPredicate, 3, 248, 7, // Skip to: 4897
/* 2857 */    MCD::OPC_Decode, 179, 1, 67, // Opcode: CMPGU_LT_QB
/* 2861 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 2873
/* 2865 */    MCD::OPC_CheckPredicate, 3, 236, 7, // Skip to: 4897
/* 2869 */    MCD::OPC_Decode, 178, 1, 67, // Opcode: CMPGU_LE_QB
/* 2873 */    MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 2891
/* 2877 */    MCD::OPC_CheckPredicate, 3, 224, 7, // Skip to: 4897
/* 2881 */    MCD::OPC_CheckField, 11, 5, 0, 218, 7, // Skip to: 4897
/* 2887 */    MCD::OPC_Decode, 183, 1, 68, // Opcode: CMP_EQ_PH
/* 2891 */    MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 2909
/* 2895 */    MCD::OPC_CheckPredicate, 3, 206, 7, // Skip to: 4897
/* 2899 */    MCD::OPC_CheckField, 11, 5, 0, 200, 7, // Skip to: 4897
/* 2905 */    MCD::OPC_Decode, 185, 1, 68, // Opcode: CMP_LT_PH
/* 2909 */    MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 2927
/* 2913 */    MCD::OPC_CheckPredicate, 3, 188, 7, // Skip to: 4897
/* 2917 */    MCD::OPC_CheckField, 11, 5, 0, 182, 7, // Skip to: 4897
/* 2923 */    MCD::OPC_Decode, 184, 1, 68, // Opcode: CMP_LE_PH
/* 2927 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 2939
/* 2931 */    MCD::OPC_CheckPredicate, 3, 170, 7, // Skip to: 4897
/* 2935 */    MCD::OPC_Decode, 145, 4, 65, // Opcode: PICK_PH
/* 2939 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 2951
/* 2943 */    MCD::OPC_CheckPredicate, 3, 158, 7, // Skip to: 4897
/* 2947 */    MCD::OPC_Decode, 159, 4, 65, // Opcode: PRECRQ_QB_PH
/* 2951 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 2963
/* 2955 */    MCD::OPC_CheckPredicate, 13, 146, 7, // Skip to: 4897
/* 2959 */    MCD::OPC_Decode, 161, 4, 65, // Opcode: PRECR_QB_PH
/* 2963 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 2975
/* 2967 */    MCD::OPC_CheckPredicate, 3, 134, 7, // Skip to: 4897
/* 2971 */    MCD::OPC_Decode, 144, 4, 65, // Opcode: PACKRL_PH
/* 2975 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 2987
/* 2979 */    MCD::OPC_CheckPredicate, 3, 122, 7, // Skip to: 4897
/* 2983 */    MCD::OPC_Decode, 157, 4, 65, // Opcode: PRECRQU_S_QB_PH
/* 2987 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 2999
/* 2991 */    MCD::OPC_CheckPredicate, 3, 110, 7, // Skip to: 4897
/* 2995 */    MCD::OPC_Decode, 158, 4, 69, // Opcode: PRECRQ_PH_W
/* 2999 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 3011
/* 3003 */    MCD::OPC_CheckPredicate, 3, 98, 7, // Skip to: 4897
/* 3007 */    MCD::OPC_Decode, 160, 4, 69, // Opcode: PRECRQ_RS_PH_W
/* 3011 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 3023
/* 3015 */    MCD::OPC_CheckPredicate, 13, 86, 7, // Skip to: 4897
/* 3019 */    MCD::OPC_Decode, 174, 1, 67, // Opcode: CMPGDU_EQ_QB
/* 3023 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 3035
/* 3027 */    MCD::OPC_CheckPredicate, 13, 74, 7, // Skip to: 4897
/* 3031 */    MCD::OPC_Decode, 176, 1, 67, // Opcode: CMPGDU_LT_QB
/* 3035 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 3047
/* 3039 */    MCD::OPC_CheckPredicate, 13, 62, 7, // Skip to: 4897
/* 3043 */    MCD::OPC_Decode, 175, 1, 67, // Opcode: CMPGDU_LE_QB
/* 3047 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 3059
/* 3051 */    MCD::OPC_CheckPredicate, 13, 50, 7, // Skip to: 4897
/* 3055 */    MCD::OPC_Decode, 162, 4, 70, // Opcode: PRECR_SRA_PH_W
/* 3059 */    MCD::OPC_FilterValue, 31, 42, 7, // Skip to: 4897
/* 3063 */    MCD::OPC_CheckPredicate, 13, 38, 7, // Skip to: 4897
/* 3067 */    MCD::OPC_Decode, 163, 4, 70, // Opcode: PRECR_SRA_R_PH_W
/* 3071 */    MCD::OPC_FilterValue, 18, 56, 1, // Skip to: 3387
/* 3075 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3078 */    MCD::OPC_FilterValue, 1, 13, 0, // Skip to: 3095
/* 3082 */    MCD::OPC_CheckPredicate, 13, 19, 7, // Skip to: 4897
/* 3086 */    MCD::OPC_CheckField, 21, 5, 0, 13, 7, // Skip to: 4897
/* 3092 */    MCD::OPC_Decode, 18, 71, // Opcode: ABSQ_S_QB
/* 3095 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3107
/* 3099 */    MCD::OPC_CheckPredicate, 3, 2, 7, // Skip to: 4897
/* 3103 */    MCD::OPC_Decode, 192, 4, 72, // Opcode: REPL_QB
/* 3107 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 3125
/* 3111 */    MCD::OPC_CheckPredicate, 3, 246, 6, // Skip to: 4897
/* 3115 */    MCD::OPC_CheckField, 21, 5, 0, 240, 6, // Skip to: 4897
/* 3121 */    MCD::OPC_Decode, 190, 4, 73, // Opcode: REPLV_QB
/* 3125 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 3143
/* 3129 */    MCD::OPC_CheckPredicate, 3, 228, 6, // Skip to: 4897
/* 3133 */    MCD::OPC_CheckField, 21, 5, 0, 222, 6, // Skip to: 4897
/* 3139 */    MCD::OPC_Decode, 147, 4, 71, // Opcode: PRECEQU_PH_QBL
/* 3143 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 3161
/* 3147 */    MCD::OPC_CheckPredicate, 3, 210, 6, // Skip to: 4897
/* 3151 */    MCD::OPC_CheckField, 21, 5, 0, 204, 6, // Skip to: 4897
/* 3157 */    MCD::OPC_Decode, 149, 4, 71, // Opcode: PRECEQU_PH_QBR
/* 3161 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 3179
/* 3165 */    MCD::OPC_CheckPredicate, 3, 192, 6, // Skip to: 4897
/* 3169 */    MCD::OPC_CheckField, 21, 5, 0, 186, 6, // Skip to: 4897
/* 3175 */    MCD::OPC_Decode, 148, 4, 71, // Opcode: PRECEQU_PH_QBLA
/* 3179 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 3197
/* 3183 */    MCD::OPC_CheckPredicate, 3, 174, 6, // Skip to: 4897
/* 3187 */    MCD::OPC_CheckField, 21, 5, 0, 168, 6, // Skip to: 4897
/* 3193 */    MCD::OPC_Decode, 150, 4, 71, // Opcode: PRECEQU_PH_QBRA
/* 3197 */    MCD::OPC_FilterValue, 9, 13, 0, // Skip to: 3214
/* 3201 */    MCD::OPC_CheckPredicate, 3, 156, 6, // Skip to: 4897
/* 3205 */    MCD::OPC_CheckField, 21, 5, 0, 150, 6, // Skip to: 4897
/* 3211 */    MCD::OPC_Decode, 17, 71, // Opcode: ABSQ_S_PH
/* 3214 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 3226
/* 3218 */    MCD::OPC_CheckPredicate, 3, 139, 6, // Skip to: 4897
/* 3222 */    MCD::OPC_Decode, 191, 4, 72, // Opcode: REPL_PH
/* 3226 */    MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 3244
/* 3230 */    MCD::OPC_CheckPredicate, 3, 127, 6, // Skip to: 4897
/* 3234 */    MCD::OPC_CheckField, 21, 5, 0, 121, 6, // Skip to: 4897
/* 3240 */    MCD::OPC_Decode, 189, 4, 73, // Opcode: REPLV_PH
/* 3244 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 3262
/* 3248 */    MCD::OPC_CheckPredicate, 3, 109, 6, // Skip to: 4897
/* 3252 */    MCD::OPC_CheckField, 21, 5, 0, 103, 6, // Skip to: 4897
/* 3258 */    MCD::OPC_Decode, 151, 4, 74, // Opcode: PRECEQ_W_PHL
/* 3262 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 3280
/* 3266 */    MCD::OPC_CheckPredicate, 3, 91, 6, // Skip to: 4897
/* 3270 */    MCD::OPC_CheckField, 21, 5, 0, 85, 6, // Skip to: 4897
/* 3276 */    MCD::OPC_Decode, 152, 4, 74, // Opcode: PRECEQ_W_PHR
/* 3280 */    MCD::OPC_FilterValue, 17, 13, 0, // Skip to: 3297
/* 3284 */    MCD::OPC_CheckPredicate, 3, 73, 6, // Skip to: 4897
/* 3288 */    MCD::OPC_CheckField, 21, 5, 0, 67, 6, // Skip to: 4897
/* 3294 */    MCD::OPC_Decode, 19, 75, // Opcode: ABSQ_S_W
/* 3297 */    MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 3315
/* 3301 */    MCD::OPC_CheckPredicate, 3, 56, 6, // Skip to: 4897
/* 3305 */    MCD::OPC_CheckField, 21, 5, 0, 50, 6, // Skip to: 4897
/* 3311 */    MCD::OPC_Decode, 136, 1, 75, // Opcode: BITREV
/* 3315 */    MCD::OPC_FilterValue, 28, 14, 0, // Skip to: 3333
/* 3319 */    MCD::OPC_CheckPredicate, 3, 38, 6, // Skip to: 4897
/* 3323 */    MCD::OPC_CheckField, 21, 5, 0, 32, 6, // Skip to: 4897
/* 3329 */    MCD::OPC_Decode, 153, 4, 71, // Opcode: PRECEU_PH_QBL
/* 3333 */    MCD::OPC_FilterValue, 29, 14, 0, // Skip to: 3351
/* 3337 */    MCD::OPC_CheckPredicate, 3, 20, 6, // Skip to: 4897
/* 3341 */    MCD::OPC_CheckField, 21, 5, 0, 14, 6, // Skip to: 4897
/* 3347 */    MCD::OPC_Decode, 155, 4, 71, // Opcode: PRECEU_PH_QBR
/* 3351 */    MCD::OPC_FilterValue, 30, 14, 0, // Skip to: 3369
/* 3355 */    MCD::OPC_CheckPredicate, 3, 2, 6, // Skip to: 4897
/* 3359 */    MCD::OPC_CheckField, 21, 5, 0, 252, 5, // Skip to: 4897
/* 3365 */    MCD::OPC_Decode, 154, 4, 71, // Opcode: PRECEU_PH_QBLA
/* 3369 */    MCD::OPC_FilterValue, 31, 244, 5, // Skip to: 4897
/* 3373 */    MCD::OPC_CheckPredicate, 3, 240, 5, // Skip to: 4897
/* 3377 */    MCD::OPC_CheckField, 21, 5, 0, 234, 5, // Skip to: 4897
/* 3383 */    MCD::OPC_Decode, 156, 4, 71, // Opcode: PRECEU_PH_QBRA
/* 3387 */    MCD::OPC_FilterValue, 19, 11, 1, // Skip to: 3658
/* 3391 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3394 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3406
/* 3398 */    MCD::OPC_CheckPredicate, 3, 215, 5, // Skip to: 4897
/* 3402 */    MCD::OPC_Decode, 244, 4, 76, // Opcode: SHLL_QB
/* 3406 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3418
/* 3410 */    MCD::OPC_CheckPredicate, 3, 203, 5, // Skip to: 4897
/* 3414 */    MCD::OPC_Decode, 132, 5, 76, // Opcode: SHRL_QB
/* 3418 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3430
/* 3422 */    MCD::OPC_CheckPredicate, 3, 191, 5, // Skip to: 4897
/* 3426 */    MCD::OPC_Decode, 240, 4, 77, // Opcode: SHLLV_QB
/* 3430 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3442
/* 3434 */    MCD::OPC_CheckPredicate, 3, 179, 5, // Skip to: 4897
/* 3438 */    MCD::OPC_Decode, 130, 5, 77, // Opcode: SHRLV_QB
/* 3442 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3454
/* 3446 */    MCD::OPC_CheckPredicate, 13, 167, 5, // Skip to: 4897
/* 3450 */    MCD::OPC_Decode, 253, 4, 76, // Opcode: SHRA_QB
/* 3454 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3466
/* 3458 */    MCD::OPC_CheckPredicate, 13, 155, 5, // Skip to: 4897
/* 3462 */    MCD::OPC_Decode, 255, 4, 76, // Opcode: SHRA_R_QB
/* 3466 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3478
/* 3470 */    MCD::OPC_CheckPredicate, 13, 143, 5, // Skip to: 4897
/* 3474 */    MCD::OPC_Decode, 248, 4, 77, // Opcode: SHRAV_QB
/* 3478 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3490
/* 3482 */    MCD::OPC_CheckPredicate, 13, 131, 5, // Skip to: 4897
/* 3486 */    MCD::OPC_Decode, 250, 4, 77, // Opcode: SHRAV_R_QB
/* 3490 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3502
/* 3494 */    MCD::OPC_CheckPredicate, 3, 119, 5, // Skip to: 4897
/* 3498 */    MCD::OPC_Decode, 243, 4, 76, // Opcode: SHLL_PH
/* 3502 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3514
/* 3506 */    MCD::OPC_CheckPredicate, 3, 107, 5, // Skip to: 4897
/* 3510 */    MCD::OPC_Decode, 252, 4, 76, // Opcode: SHRA_PH
/* 3514 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 3526
/* 3518 */    MCD::OPC_CheckPredicate, 3, 95, 5, // Skip to: 4897
/* 3522 */    MCD::OPC_Decode, 239, 4, 77, // Opcode: SHLLV_PH
/* 3526 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3538
/* 3530 */    MCD::OPC_CheckPredicate, 3, 83, 5, // Skip to: 4897
/* 3534 */    MCD::OPC_Decode, 247, 4, 77, // Opcode: SHRAV_PH
/* 3538 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 3550
/* 3542 */    MCD::OPC_CheckPredicate, 3, 71, 5, // Skip to: 4897
/* 3546 */    MCD::OPC_Decode, 245, 4, 76, // Opcode: SHLL_S_PH
/* 3550 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 3562
/* 3554 */    MCD::OPC_CheckPredicate, 3, 59, 5, // Skip to: 4897
/* 3558 */    MCD::OPC_Decode, 254, 4, 76, // Opcode: SHRA_R_PH
/* 3562 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 3574
/* 3566 */    MCD::OPC_CheckPredicate, 3, 47, 5, // Skip to: 4897
/* 3570 */    MCD::OPC_Decode, 241, 4, 77, // Opcode: SHLLV_S_PH
/* 3574 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 3586
/* 3578 */    MCD::OPC_CheckPredicate, 3, 35, 5, // Skip to: 4897
/* 3582 */    MCD::OPC_Decode, 249, 4, 77, // Opcode: SHRAV_R_PH
/* 3586 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 3598
/* 3590 */    MCD::OPC_CheckPredicate, 3, 23, 5, // Skip to: 4897
/* 3594 */    MCD::OPC_Decode, 246, 4, 78, // Opcode: SHLL_S_W
/* 3598 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 3610
/* 3602 */    MCD::OPC_CheckPredicate, 3, 11, 5, // Skip to: 4897
/* 3606 */    MCD::OPC_Decode, 128, 5, 78, // Opcode: SHRA_R_W
/* 3610 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 3622
/* 3614 */    MCD::OPC_CheckPredicate, 3, 255, 4, // Skip to: 4897
/* 3618 */    MCD::OPC_Decode, 242, 4, 79, // Opcode: SHLLV_S_W
/* 3622 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 3634
/* 3626 */    MCD::OPC_CheckPredicate, 3, 243, 4, // Skip to: 4897
/* 3630 */    MCD::OPC_Decode, 251, 4, 79, // Opcode: SHRAV_R_W
/* 3634 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 3646
/* 3638 */    MCD::OPC_CheckPredicate, 13, 231, 4, // Skip to: 4897
/* 3642 */    MCD::OPC_Decode, 131, 5, 76, // Opcode: SHRL_PH
/* 3646 */    MCD::OPC_FilterValue, 27, 223, 4, // Skip to: 4897
/* 3650 */    MCD::OPC_CheckPredicate, 13, 219, 4, // Skip to: 4897
/* 3654 */    MCD::OPC_Decode, 129, 5, 77, // Opcode: SHRLV_PH
/* 3658 */    MCD::OPC_FilterValue, 24, 189, 0, // Skip to: 3851
/* 3662 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3665 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 3676
/* 3669 */    MCD::OPC_CheckPredicate, 13, 200, 4, // Skip to: 4897
/* 3673 */    MCD::OPC_Decode, 29, 65, // Opcode: ADDUH_QB
/* 3676 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3688
/* 3680 */    MCD::OPC_CheckPredicate, 13, 189, 4, // Skip to: 4897
/* 3684 */    MCD::OPC_Decode, 178, 5, 65, // Opcode: SUBUH_QB
/* 3688 */    MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 3699
/* 3692 */    MCD::OPC_CheckPredicate, 13, 177, 4, // Skip to: 4897
/* 3696 */    MCD::OPC_Decode, 30, 65, // Opcode: ADDUH_R_QB
/* 3699 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3711
/* 3703 */    MCD::OPC_CheckPredicate, 13, 166, 4, // Skip to: 4897
/* 3707 */    MCD::OPC_Decode, 179, 5, 65, // Opcode: SUBUH_R_QB
/* 3711 */    MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 3722
/* 3715 */    MCD::OPC_CheckPredicate, 13, 154, 4, // Skip to: 4897
/* 3719 */    MCD::OPC_Decode, 21, 65, // Opcode: ADDQH_PH
/* 3722 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3734
/* 3726 */    MCD::OPC_CheckPredicate, 13, 143, 4, // Skip to: 4897
/* 3730 */    MCD::OPC_Decode, 171, 5, 65, // Opcode: SUBQH_PH
/* 3734 */    MCD::OPC_FilterValue, 10, 7, 0, // Skip to: 3745
/* 3738 */    MCD::OPC_CheckPredicate, 13, 131, 4, // Skip to: 4897
/* 3742 */    MCD::OPC_Decode, 22, 65, // Opcode: ADDQH_R_PH
/* 3745 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3757
/* 3749 */    MCD::OPC_CheckPredicate, 13, 120, 4, // Skip to: 4897
/* 3753 */    MCD::OPC_Decode, 172, 5, 65, // Opcode: SUBQH_R_PH
/* 3757 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 3769
/* 3761 */    MCD::OPC_CheckPredicate, 13, 108, 4, // Skip to: 4897
/* 3765 */    MCD::OPC_Decode, 243, 3, 65, // Opcode: MUL_PH
/* 3769 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 3781
/* 3773 */    MCD::OPC_CheckPredicate, 13, 96, 4, // Skip to: 4897
/* 3777 */    MCD::OPC_Decode, 244, 3, 65, // Opcode: MUL_S_PH
/* 3781 */    MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 3792
/* 3785 */    MCD::OPC_CheckPredicate, 13, 84, 4, // Skip to: 4897
/* 3789 */    MCD::OPC_Decode, 24, 12, // Opcode: ADDQH_W
/* 3792 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 3804
/* 3796 */    MCD::OPC_CheckPredicate, 13, 73, 4, // Skip to: 4897
/* 3800 */    MCD::OPC_Decode, 174, 5, 12, // Opcode: SUBQH_W
/* 3804 */    MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 3815
/* 3808 */    MCD::OPC_CheckPredicate, 13, 61, 4, // Skip to: 4897
/* 3812 */    MCD::OPC_Decode, 23, 12, // Opcode: ADDQH_R_W
/* 3815 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 3827
/* 3819 */    MCD::OPC_CheckPredicate, 13, 50, 4, // Skip to: 4897
/* 3823 */    MCD::OPC_Decode, 173, 5, 12, // Opcode: SUBQH_R_W
/* 3827 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 3839
/* 3831 */    MCD::OPC_CheckPredicate, 13, 38, 4, // Skip to: 4897
/* 3835 */    MCD::OPC_Decode, 233, 3, 12, // Opcode: MULQ_S_W
/* 3839 */    MCD::OPC_FilterValue, 23, 30, 4, // Skip to: 4897
/* 3843 */    MCD::OPC_CheckPredicate, 13, 26, 4, // Skip to: 4897
/* 3847 */    MCD::OPC_Decode, 231, 3, 12, // Opcode: MULQ_RS_W
/* 3851 */    MCD::OPC_FilterValue, 32, 57, 0, // Skip to: 3912
/* 3855 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3858 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 3876
/* 3862 */    MCD::OPC_CheckPredicate, 14, 7, 4, // Skip to: 4897
/* 3866 */    MCD::OPC_CheckField, 21, 5, 0, 1, 4, // Skip to: 4897
/* 3872 */    MCD::OPC_Decode, 128, 6, 75, // Opcode: WSBH
/* 3876 */    MCD::OPC_FilterValue, 16, 14, 0, // Skip to: 3894
/* 3880 */    MCD::OPC_CheckPredicate, 15, 245, 3, // Skip to: 4897
/* 3884 */    MCD::OPC_CheckField, 21, 5, 0, 239, 3, // Skip to: 4897
/* 3890 */    MCD::OPC_Decode, 230, 4, 75, // Opcode: SEB
/* 3894 */    MCD::OPC_FilterValue, 24, 231, 3, // Skip to: 4897
/* 3898 */    MCD::OPC_CheckPredicate, 15, 227, 3, // Skip to: 4897
/* 3902 */    MCD::OPC_CheckField, 21, 5, 0, 221, 3, // Skip to: 4897
/* 3908 */    MCD::OPC_Decode, 232, 4, 75, // Opcode: SEH
/* 3912 */    MCD::OPC_FilterValue, 48, 143, 1, // Skip to: 4315
/* 3916 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3919 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3937
/* 3923 */    MCD::OPC_CheckPredicate, 13, 202, 3, // Skip to: 4897
/* 3927 */    MCD::OPC_CheckField, 13, 3, 0, 196, 3, // Skip to: 4897
/* 3933 */    MCD::OPC_Decode, 233, 1, 60, // Opcode: DPA_W_PH
/* 3937 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 3955
/* 3941 */    MCD::OPC_CheckPredicate, 13, 184, 3, // Skip to: 4897
/* 3945 */    MCD::OPC_CheckField, 13, 3, 0, 178, 3, // Skip to: 4897
/* 3951 */    MCD::OPC_Decode, 241, 1, 60, // Opcode: DPS_W_PH
/* 3955 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 3973
/* 3959 */    MCD::OPC_CheckPredicate, 13, 166, 3, // Skip to: 4897
/* 3963 */    MCD::OPC_CheckField, 13, 3, 0, 160, 3, // Skip to: 4897
/* 3969 */    MCD::OPC_Decode, 235, 3, 60, // Opcode: MULSA_W_PH
/* 3973 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 3991
/* 3977 */    MCD::OPC_CheckPredicate, 3, 148, 3, // Skip to: 4897
/* 3981 */    MCD::OPC_CheckField, 13, 3, 0, 142, 3, // Skip to: 4897
/* 3987 */    MCD::OPC_Decode, 230, 1, 60, // Opcode: DPAU_H_QBL
/* 3991 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 4009
/* 3995 */    MCD::OPC_CheckPredicate, 3, 130, 3, // Skip to: 4897
/* 3999 */    MCD::OPC_CheckField, 13, 3, 0, 124, 3, // Skip to: 4897
/* 4005 */    MCD::OPC_Decode, 229, 1, 60, // Opcode: DPAQ_S_W_PH
/* 4009 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 4027
/* 4013 */    MCD::OPC_CheckPredicate, 3, 112, 3, // Skip to: 4897
/* 4017 */    MCD::OPC_CheckField, 13, 3, 0, 106, 3, // Skip to: 4897
/* 4023 */    MCD::OPC_Decode, 237, 1, 60, // Opcode: DPSQ_S_W_PH
/* 4027 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 4045
/* 4031 */    MCD::OPC_CheckPredicate, 3, 94, 3, // Skip to: 4897
/* 4035 */    MCD::OPC_CheckField, 13, 3, 0, 88, 3, // Skip to: 4897
/* 4041 */    MCD::OPC_Decode, 234, 3, 60, // Opcode: MULSAQ_S_W_PH
/* 4045 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 4063
/* 4049 */    MCD::OPC_CheckPredicate, 3, 76, 3, // Skip to: 4897
/* 4053 */    MCD::OPC_CheckField, 13, 3, 0, 70, 3, // Skip to: 4897
/* 4059 */    MCD::OPC_Decode, 231, 1, 60, // Opcode: DPAU_H_QBR
/* 4063 */    MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 4081
/* 4067 */    MCD::OPC_CheckPredicate, 13, 58, 3, // Skip to: 4897
/* 4071 */    MCD::OPC_CheckField, 13, 3, 0, 52, 3, // Skip to: 4897
/* 4077 */    MCD::OPC_Decode, 232, 1, 60, // Opcode: DPAX_W_PH
/* 4081 */    MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 4099
/* 4085 */    MCD::OPC_CheckPredicate, 13, 40, 3, // Skip to: 4897
/* 4089 */    MCD::OPC_CheckField, 13, 3, 0, 34, 3, // Skip to: 4897
/* 4095 */    MCD::OPC_Decode, 240, 1, 60, // Opcode: DPSX_W_PH
/* 4099 */    MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 4117
/* 4103 */    MCD::OPC_CheckPredicate, 3, 22, 3, // Skip to: 4897
/* 4107 */    MCD::OPC_CheckField, 13, 3, 0, 16, 3, // Skip to: 4897
/* 4113 */    MCD::OPC_Decode, 238, 1, 60, // Opcode: DPSU_H_QBL
/* 4117 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 4135
/* 4121 */    MCD::OPC_CheckPredicate, 3, 4, 3, // Skip to: 4897
/* 4125 */    MCD::OPC_CheckField, 13, 3, 0, 254, 2, // Skip to: 4897
/* 4131 */    MCD::OPC_Decode, 228, 1, 60, // Opcode: DPAQ_SA_L_W
/* 4135 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 4153
/* 4139 */    MCD::OPC_CheckPredicate, 3, 242, 2, // Skip to: 4897
/* 4143 */    MCD::OPC_CheckField, 13, 3, 0, 236, 2, // Skip to: 4897
/* 4149 */    MCD::OPC_Decode, 236, 1, 60, // Opcode: DPSQ_SA_L_W
/* 4153 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 4171
/* 4157 */    MCD::OPC_CheckPredicate, 3, 224, 2, // Skip to: 4897
/* 4161 */    MCD::OPC_CheckField, 13, 3, 0, 218, 2, // Skip to: 4897
/* 4167 */    MCD::OPC_Decode, 239, 1, 60, // Opcode: DPSU_H_QBR
/* 4171 */    MCD::OPC_FilterValue, 16, 14, 0, // Skip to: 4189
/* 4175 */    MCD::OPC_CheckPredicate, 3, 206, 2, // Skip to: 4897
/* 4179 */    MCD::OPC_CheckField, 13, 3, 0, 200, 2, // Skip to: 4897
/* 4185 */    MCD::OPC_Decode, 163, 3, 60, // Opcode: MAQ_SA_W_PHL
/* 4189 */    MCD::OPC_FilterValue, 18, 14, 0, // Skip to: 4207
/* 4193 */    MCD::OPC_CheckPredicate, 3, 188, 2, // Skip to: 4897
/* 4197 */    MCD::OPC_CheckField, 13, 3, 0, 182, 2, // Skip to: 4897
/* 4203 */    MCD::OPC_Decode, 164, 3, 60, // Opcode: MAQ_SA_W_PHR
/* 4207 */    MCD::OPC_FilterValue, 20, 14, 0, // Skip to: 4225
/* 4211 */    MCD::OPC_CheckPredicate, 3, 170, 2, // Skip to: 4897
/* 4215 */    MCD::OPC_CheckField, 13, 3, 0, 164, 2, // Skip to: 4897
/* 4221 */    MCD::OPC_Decode, 165, 3, 60, // Opcode: MAQ_S_W_PHL
/* 4225 */    MCD::OPC_FilterValue, 22, 14, 0, // Skip to: 4243
/* 4229 */    MCD::OPC_CheckPredicate, 3, 152, 2, // Skip to: 4897
/* 4233 */    MCD::OPC_CheckField, 13, 3, 0, 146, 2, // Skip to: 4897
/* 4239 */    MCD::OPC_Decode, 166, 3, 60, // Opcode: MAQ_S_W_PHR
/* 4243 */    MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 4261
/* 4247 */    MCD::OPC_CheckPredicate, 13, 134, 2, // Skip to: 4897
/* 4251 */    MCD::OPC_CheckField, 13, 3, 0, 128, 2, // Skip to: 4897
/* 4257 */    MCD::OPC_Decode, 227, 1, 60, // Opcode: DPAQX_S_W_PH
/* 4261 */    MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 4279
/* 4265 */    MCD::OPC_CheckPredicate, 13, 116, 2, // Skip to: 4897
/* 4269 */    MCD::OPC_CheckField, 13, 3, 0, 110, 2, // Skip to: 4897
/* 4275 */    MCD::OPC_Decode, 235, 1, 60, // Opcode: DPSQX_S_W_PH
/* 4279 */    MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 4297
/* 4283 */    MCD::OPC_CheckPredicate, 13, 98, 2, // Skip to: 4897
/* 4287 */    MCD::OPC_CheckField, 13, 3, 0, 92, 2, // Skip to: 4897
/* 4293 */    MCD::OPC_Decode, 226, 1, 60, // Opcode: DPAQX_SA_W_PH
/* 4297 */    MCD::OPC_FilterValue, 27, 84, 2, // Skip to: 4897
/* 4301 */    MCD::OPC_CheckPredicate, 13, 80, 2, // Skip to: 4897
/* 4305 */    MCD::OPC_CheckField, 13, 3, 0, 74, 2, // Skip to: 4897
/* 4311 */    MCD::OPC_Decode, 234, 1, 60, // Opcode: DPSQX_SA_W_PH
/* 4315 */    MCD::OPC_FilterValue, 49, 37, 0, // Skip to: 4356
/* 4319 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4322 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 4333
/* 4326 */    MCD::OPC_CheckPredicate, 13, 55, 2, // Skip to: 4897
/* 4330 */    MCD::OPC_Decode, 50, 80, // Opcode: APPEND
/* 4333 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 4345
/* 4337 */    MCD::OPC_CheckPredicate, 13, 44, 2, // Skip to: 4897
/* 4341 */    MCD::OPC_Decode, 164, 4, 80, // Opcode: PREPEND
/* 4345 */    MCD::OPC_FilterValue, 16, 36, 2, // Skip to: 4897
/* 4349 */    MCD::OPC_CheckPredicate, 13, 32, 2, // Skip to: 4897
/* 4353 */    MCD::OPC_Decode, 125, 80, // Opcode: BALIGN
/* 4356 */    MCD::OPC_FilterValue, 56, 41, 1, // Skip to: 4657
/* 4360 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4363 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 4381
/* 4367 */    MCD::OPC_CheckPredicate, 3, 14, 2, // Skip to: 4897
/* 4371 */    MCD::OPC_CheckField, 13, 3, 0, 8, 2, // Skip to: 4897
/* 4377 */    MCD::OPC_Decode, 145, 2, 81, // Opcode: EXTR_W
/* 4381 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 4399
/* 4385 */    MCD::OPC_CheckPredicate, 3, 252, 1, // Skip to: 4897
/* 4389 */    MCD::OPC_CheckField, 13, 3, 0, 246, 1, // Skip to: 4897
/* 4395 */    MCD::OPC_Decode, 141, 2, 82, // Opcode: EXTRV_W
/* 4399 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 4417
/* 4403 */    MCD::OPC_CheckPredicate, 3, 234, 1, // Skip to: 4897
/* 4407 */    MCD::OPC_CheckField, 13, 3, 0, 228, 1, // Skip to: 4897
/* 4413 */    MCD::OPC_Decode, 134, 2, 81, // Opcode: EXTP
/* 4417 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 4435
/* 4421 */    MCD::OPC_CheckPredicate, 3, 216, 1, // Skip to: 4897
/* 4425 */    MCD::OPC_CheckField, 13, 3, 0, 210, 1, // Skip to: 4897
/* 4431 */    MCD::OPC_Decode, 137, 2, 82, // Opcode: EXTPV
/* 4435 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 4453
/* 4439 */    MCD::OPC_CheckPredicate, 3, 198, 1, // Skip to: 4897
/* 4443 */    MCD::OPC_CheckField, 13, 3, 0, 192, 1, // Skip to: 4897
/* 4449 */    MCD::OPC_Decode, 143, 2, 81, // Opcode: EXTR_R_W
/* 4453 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 4471
/* 4457 */    MCD::OPC_CheckPredicate, 3, 180, 1, // Skip to: 4897
/* 4461 */    MCD::OPC_CheckField, 13, 3, 0, 174, 1, // Skip to: 4897
/* 4467 */    MCD::OPC_Decode, 139, 2, 82, // Opcode: EXTRV_R_W
/* 4471 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 4489
/* 4475 */    MCD::OPC_CheckPredicate, 3, 162, 1, // Skip to: 4897
/* 4479 */    MCD::OPC_CheckField, 13, 3, 0, 156, 1, // Skip to: 4897
/* 4485 */    MCD::OPC_Decode, 142, 2, 81, // Opcode: EXTR_RS_W
/* 4489 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 4507
/* 4493 */    MCD::OPC_CheckPredicate, 3, 144, 1, // Skip to: 4897
/* 4497 */    MCD::OPC_CheckField, 13, 3, 0, 138, 1, // Skip to: 4897
/* 4503 */    MCD::OPC_Decode, 138, 2, 82, // Opcode: EXTRV_RS_W
/* 4507 */    MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 4525
/* 4511 */    MCD::OPC_CheckPredicate, 3, 126, 1, // Skip to: 4897
/* 4515 */    MCD::OPC_CheckField, 13, 3, 0, 120, 1, // Skip to: 4897
/* 4521 */    MCD::OPC_Decode, 135, 2, 81, // Opcode: EXTPDP
/* 4525 */    MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 4543
/* 4529 */    MCD::OPC_CheckPredicate, 3, 108, 1, // Skip to: 4897
/* 4533 */    MCD::OPC_CheckField, 13, 3, 0, 102, 1, // Skip to: 4897
/* 4539 */    MCD::OPC_Decode, 136, 2, 82, // Opcode: EXTPDPV
/* 4543 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 4561
/* 4547 */    MCD::OPC_CheckPredicate, 3, 90, 1, // Skip to: 4897
/* 4551 */    MCD::OPC_CheckField, 13, 3, 0, 84, 1, // Skip to: 4897
/* 4557 */    MCD::OPC_Decode, 144, 2, 81, // Opcode: EXTR_S_H
/* 4561 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 4579
/* 4565 */    MCD::OPC_CheckPredicate, 3, 72, 1, // Skip to: 4897
/* 4569 */    MCD::OPC_CheckField, 13, 3, 0, 66, 1, // Skip to: 4897
/* 4575 */    MCD::OPC_Decode, 140, 2, 82, // Opcode: EXTRV_S_H
/* 4579 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 4591
/* 4583 */    MCD::OPC_CheckPredicate, 3, 54, 1, // Skip to: 4897
/* 4587 */    MCD::OPC_Decode, 186, 4, 83, // Opcode: RDDSP
/* 4591 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 4603
/* 4595 */    MCD::OPC_CheckPredicate, 3, 42, 1, // Skip to: 4897
/* 4599 */    MCD::OPC_Decode, 255, 5, 84, // Opcode: WRDSP
/* 4603 */    MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 4621
/* 4607 */    MCD::OPC_CheckPredicate, 3, 30, 1, // Skip to: 4897
/* 4611 */    MCD::OPC_CheckField, 13, 7, 0, 24, 1, // Skip to: 4897
/* 4617 */    MCD::OPC_Decode, 237, 4, 85, // Opcode: SHILO
/* 4621 */    MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 4639
/* 4625 */    MCD::OPC_CheckPredicate, 3, 12, 1, // Skip to: 4897
/* 4629 */    MCD::OPC_CheckField, 13, 8, 0, 6, 1, // Skip to: 4897
/* 4635 */    MCD::OPC_Decode, 238, 4, 86, // Opcode: SHILOV
/* 4639 */    MCD::OPC_FilterValue, 31, 254, 0, // Skip to: 4897
/* 4643 */    MCD::OPC_CheckPredicate, 3, 250, 0, // Skip to: 4897
/* 4647 */    MCD::OPC_CheckField, 13, 8, 0, 244, 0, // Skip to: 4897
/* 4653 */    MCD::OPC_Decode, 221, 3, 86, // Opcode: MTHLIP
/* 4657 */    MCD::OPC_FilterValue, 59, 236, 0, // Skip to: 4897
/* 4661 */    MCD::OPC_CheckPredicate, 1, 232, 0, // Skip to: 4897
/* 4665 */    MCD::OPC_CheckField, 21, 5, 0, 226, 0, // Skip to: 4897
/* 4671 */    MCD::OPC_CheckField, 6, 5, 0, 220, 0, // Skip to: 4897
/* 4677 */    MCD::OPC_Decode, 187, 4, 87, // Opcode: RDHWR
/* 4681 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 4693
/* 4685 */    MCD::OPC_CheckPredicate, 16, 208, 0, // Skip to: 4897
/* 4689 */    MCD::OPC_Decode, 194, 2, 88, // Opcode: LB
/* 4693 */    MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 4705
/* 4697 */    MCD::OPC_CheckPredicate, 16, 196, 0, // Skip to: 4897
/* 4701 */    MCD::OPC_Decode, 221, 2, 88, // Opcode: LH
/* 4705 */    MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 4717
/* 4709 */    MCD::OPC_CheckPredicate, 16, 184, 0, // Skip to: 4897
/* 4713 */    MCD::OPC_Decode, 128, 3, 88, // Opcode: LWL
/* 4717 */    MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 4729
/* 4721 */    MCD::OPC_CheckPredicate, 16, 172, 0, // Skip to: 4897
/* 4725 */    MCD::OPC_Decode, 251, 2, 88, // Opcode: LW
/* 4729 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 4741
/* 4733 */    MCD::OPC_CheckPredicate, 16, 160, 0, // Skip to: 4897
/* 4737 */    MCD::OPC_Decode, 201, 2, 88, // Opcode: LBu
/* 4741 */    MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 4753
/* 4745 */    MCD::OPC_CheckPredicate, 16, 148, 0, // Skip to: 4897
/* 4749 */    MCD::OPC_Decode, 228, 2, 88, // Opcode: LHu
/* 4753 */    MCD::OPC_FilterValue, 38, 8, 0, // Skip to: 4765
/* 4757 */    MCD::OPC_CheckPredicate, 16, 136, 0, // Skip to: 4897
/* 4761 */    MCD::OPC_Decode, 132, 3, 88, // Opcode: LWR
/* 4765 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 4777
/* 4769 */    MCD::OPC_CheckPredicate, 16, 124, 0, // Skip to: 4897
/* 4773 */    MCD::OPC_Decode, 207, 4, 88, // Opcode: SB
/* 4777 */    MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 4789
/* 4781 */    MCD::OPC_CheckPredicate, 16, 112, 0, // Skip to: 4897
/* 4785 */    MCD::OPC_Decode, 234, 4, 88, // Opcode: SH
/* 4789 */    MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 4801
/* 4793 */    MCD::OPC_CheckPredicate, 16, 100, 0, // Skip to: 4897
/* 4797 */    MCD::OPC_Decode, 194, 5, 88, // Opcode: SWL
/* 4801 */    MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 4813
/* 4805 */    MCD::OPC_CheckPredicate, 16, 88, 0, // Skip to: 4897
/* 4809 */    MCD::OPC_Decode, 189, 5, 88, // Opcode: SW
/* 4813 */    MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 4825
/* 4817 */    MCD::OPC_CheckPredicate, 16, 76, 0, // Skip to: 4897
/* 4821 */    MCD::OPC_Decode, 198, 5, 88, // Opcode: SWR
/* 4825 */    MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 4837
/* 4829 */    MCD::OPC_CheckPredicate, 16, 64, 0, // Skip to: 4897
/* 4833 */    MCD::OPC_Decode, 234, 2, 88, // Opcode: LL
/* 4837 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 4849
/* 4841 */    MCD::OPC_CheckPredicate, 16, 52, 0, // Skip to: 4897
/* 4845 */    MCD::OPC_Decode, 254, 2, 89, // Opcode: LWC1
/* 4849 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 4861
/* 4853 */    MCD::OPC_CheckPredicate, 17, 40, 0, // Skip to: 4897
/* 4857 */    MCD::OPC_Decode, 208, 2, 89, // Opcode: LDC1
/* 4861 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 4873
/* 4865 */    MCD::OPC_CheckPredicate, 16, 28, 0, // Skip to: 4897
/* 4869 */    MCD::OPC_Decode, 213, 4, 88, // Opcode: SC
/* 4873 */    MCD::OPC_FilterValue, 57, 8, 0, // Skip to: 4885
/* 4877 */    MCD::OPC_CheckPredicate, 16, 16, 0, // Skip to: 4897
/* 4881 */    MCD::OPC_Decode, 192, 5, 89, // Opcode: SWC1
/* 4885 */    MCD::OPC_FilterValue, 61, 8, 0, // Skip to: 4897
/* 4889 */    MCD::OPC_CheckPredicate, 17, 4, 0, // Skip to: 4897
/* 4893 */    MCD::OPC_Decode, 218, 4, 89, // Opcode: SDC1
/* 4897 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 117, 2, // Skip to: 636
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 1, 39, 0, // Skip to: 53
/* 14 */      MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 17 */      MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 35
/* 21 */      MCD::OPC_CheckPredicate, 18, 70, 8, // Skip to: 2143
/* 25 */      MCD::OPC_CheckField, 6, 5, 0, 64, 8, // Skip to: 2143
/* 31 */      MCD::OPC_Decode, 183, 3, 90, // Opcode: MOVF_I64
/* 35 */      MCD::OPC_FilterValue, 1, 56, 8, // Skip to: 2143
/* 39 */      MCD::OPC_CheckPredicate, 18, 52, 8, // Skip to: 2143
/* 43 */      MCD::OPC_CheckField, 6, 5, 0, 46, 8, // Skip to: 2143
/* 49 */      MCD::OPC_Decode, 197, 3, 90, // Opcode: MOVT_I64
/* 53 */      MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 71
/* 57 */      MCD::OPC_CheckPredicate, 1, 34, 8, // Skip to: 2143
/* 61 */      MCD::OPC_CheckField, 6, 15, 0, 28, 8, // Skip to: 2143
/* 67 */      MCD::OPC_Decode, 188, 2, 91, // Opcode: JR64
/* 71 */      MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 95
/* 75 */      MCD::OPC_CheckPredicate, 1, 16, 8, // Skip to: 2143
/* 79 */      MCD::OPC_CheckField, 16, 5, 0, 10, 8, // Skip to: 2143
/* 85 */      MCD::OPC_CheckField, 6, 5, 0, 4, 8, // Skip to: 2143
/* 91 */      MCD::OPC_Decode, 184, 2, 92, // Opcode: JALR64
/* 95 */      MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 113
/* 99 */      MCD::OPC_CheckPredicate, 1, 248, 7, // Skip to: 2143
/* 103 */     MCD::OPC_CheckField, 6, 5, 0, 242, 7, // Skip to: 2143
/* 109 */     MCD::OPC_Decode, 206, 3, 93, // Opcode: MOVZ_I_I64
/* 113 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 131
/* 117 */     MCD::OPC_CheckPredicate, 1, 230, 7, // Skip to: 2143
/* 121 */     MCD::OPC_CheckField, 6, 5, 0, 224, 7, // Skip to: 2143
/* 127 */     MCD::OPC_Decode, 192, 3, 93, // Opcode: MOVN_I_I64
/* 131 */     MCD::OPC_FilterValue, 16, 20, 0, // Skip to: 155
/* 135 */     MCD::OPC_CheckPredicate, 1, 212, 7, // Skip to: 2143
/* 139 */     MCD::OPC_CheckField, 16, 10, 0, 206, 7, // Skip to: 2143
/* 145 */     MCD::OPC_CheckField, 6, 5, 0, 200, 7, // Skip to: 2143
/* 151 */     MCD::OPC_Decode, 171, 3, 94, // Opcode: MFHI64
/* 155 */     MCD::OPC_FilterValue, 17, 14, 0, // Skip to: 173
/* 159 */     MCD::OPC_CheckPredicate, 1, 188, 7, // Skip to: 2143
/* 163 */     MCD::OPC_CheckField, 6, 15, 0, 182, 7, // Skip to: 2143
/* 169 */     MCD::OPC_Decode, 219, 3, 91, // Opcode: MTHI64
/* 173 */     MCD::OPC_FilterValue, 18, 20, 0, // Skip to: 197
/* 177 */     MCD::OPC_CheckPredicate, 1, 170, 7, // Skip to: 2143
/* 181 */     MCD::OPC_CheckField, 16, 10, 0, 164, 7, // Skip to: 2143
/* 187 */     MCD::OPC_CheckField, 6, 5, 0, 158, 7, // Skip to: 2143
/* 193 */     MCD::OPC_Decode, 174, 3, 94, // Opcode: MFLO64
/* 197 */     MCD::OPC_FilterValue, 19, 14, 0, // Skip to: 215
/* 201 */     MCD::OPC_CheckPredicate, 1, 146, 7, // Skip to: 2143
/* 205 */     MCD::OPC_CheckField, 6, 15, 0, 140, 7, // Skip to: 2143
/* 211 */     MCD::OPC_Decode, 223, 3, 91, // Opcode: MTLO64
/* 215 */     MCD::OPC_FilterValue, 20, 14, 0, // Skip to: 233
/* 219 */     MCD::OPC_CheckPredicate, 1, 128, 7, // Skip to: 2143
/* 223 */     MCD::OPC_CheckField, 6, 5, 0, 122, 7, // Skip to: 2143
/* 229 */     MCD::OPC_Decode, 250, 1, 95, // Opcode: DSLLV
/* 233 */     MCD::OPC_FilterValue, 22, 27, 0, // Skip to: 264
/* 237 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 240 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 252
/* 244 */     MCD::OPC_CheckPredicate, 1, 103, 7, // Skip to: 2143
/* 248 */     MCD::OPC_Decode, 128, 2, 95, // Opcode: DSRLV
/* 252 */     MCD::OPC_FilterValue, 1, 95, 7, // Skip to: 2143
/* 256 */     MCD::OPC_CheckPredicate, 19, 91, 7, // Skip to: 2143
/* 260 */     MCD::OPC_Decode, 243, 1, 95, // Opcode: DROTRV
/* 264 */     MCD::OPC_FilterValue, 23, 14, 0, // Skip to: 282
/* 268 */     MCD::OPC_CheckPredicate, 1, 79, 7, // Skip to: 2143
/* 272 */     MCD::OPC_CheckField, 6, 5, 0, 73, 7, // Skip to: 2143
/* 278 */     MCD::OPC_Decode, 253, 1, 95, // Opcode: DSRAV
/* 282 */     MCD::OPC_FilterValue, 28, 14, 0, // Skip to: 300
/* 286 */     MCD::OPC_CheckPredicate, 1, 61, 7, // Skip to: 2143
/* 290 */     MCD::OPC_CheckField, 6, 10, 0, 55, 7, // Skip to: 2143
/* 296 */     MCD::OPC_Decode, 224, 1, 96, // Opcode: DMULT
/* 300 */     MCD::OPC_FilterValue, 29, 14, 0, // Skip to: 318
/* 304 */     MCD::OPC_CheckPredicate, 1, 43, 7, // Skip to: 2143
/* 308 */     MCD::OPC_CheckField, 6, 10, 0, 37, 7, // Skip to: 2143
/* 314 */     MCD::OPC_Decode, 225, 1, 96, // Opcode: DMULTu
/* 318 */     MCD::OPC_FilterValue, 30, 14, 0, // Skip to: 336
/* 322 */     MCD::OPC_CheckPredicate, 1, 25, 7, // Skip to: 2143
/* 326 */     MCD::OPC_CheckField, 6, 10, 0, 19, 7, // Skip to: 2143
/* 332 */     MCD::OPC_Decode, 245, 1, 96, // Opcode: DSDIV
/* 336 */     MCD::OPC_FilterValue, 31, 14, 0, // Skip to: 354
/* 340 */     MCD::OPC_CheckPredicate, 1, 7, 7, // Skip to: 2143
/* 344 */     MCD::OPC_CheckField, 6, 10, 0, 1, 7, // Skip to: 2143
/* 350 */     MCD::OPC_Decode, 130, 2, 96, // Opcode: DUDIV
/* 354 */     MCD::OPC_FilterValue, 36, 13, 0, // Skip to: 371
/* 358 */     MCD::OPC_CheckPredicate, 1, 245, 6, // Skip to: 2143
/* 362 */     MCD::OPC_CheckField, 6, 5, 0, 239, 6, // Skip to: 2143
/* 368 */     MCD::OPC_Decode, 46, 97, // Opcode: AND64
/* 371 */     MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 389
/* 375 */     MCD::OPC_CheckPredicate, 1, 228, 6, // Skip to: 2143
/* 379 */     MCD::OPC_CheckField, 6, 5, 0, 222, 6, // Skip to: 2143
/* 385 */     MCD::OPC_Decode, 138, 4, 97, // Opcode: OR64
/* 389 */     MCD::OPC_FilterValue, 38, 14, 0, // Skip to: 407
/* 393 */     MCD::OPC_CheckPredicate, 1, 210, 6, // Skip to: 2143
/* 397 */     MCD::OPC_CheckField, 6, 5, 0, 204, 6, // Skip to: 2143
/* 403 */     MCD::OPC_Decode, 130, 6, 97, // Opcode: XOR64
/* 407 */     MCD::OPC_FilterValue, 39, 14, 0, // Skip to: 425
/* 411 */     MCD::OPC_CheckPredicate, 1, 192, 6, // Skip to: 2143
/* 415 */     MCD::OPC_CheckField, 6, 5, 0, 186, 6, // Skip to: 2143
/* 421 */     MCD::OPC_Decode, 133, 4, 97, // Opcode: NOR64
/* 425 */     MCD::OPC_FilterValue, 42, 14, 0, // Skip to: 443
/* 429 */     MCD::OPC_CheckPredicate, 1, 174, 6, // Skip to: 2143
/* 433 */     MCD::OPC_CheckField, 6, 5, 0, 168, 6, // Skip to: 2143
/* 439 */     MCD::OPC_Decode, 143, 5, 98, // Opcode: SLT64
/* 443 */     MCD::OPC_FilterValue, 43, 14, 0, // Skip to: 461
/* 447 */     MCD::OPC_CheckPredicate, 1, 156, 6, // Skip to: 2143
/* 451 */     MCD::OPC_CheckField, 6, 5, 0, 150, 6, // Skip to: 2143
/* 457 */     MCD::OPC_Decode, 152, 5, 98, // Opcode: SLTu64
/* 461 */     MCD::OPC_FilterValue, 44, 14, 0, // Skip to: 479
/* 465 */     MCD::OPC_CheckPredicate, 1, 138, 6, // Skip to: 2143
/* 469 */     MCD::OPC_CheckField, 6, 5, 0, 132, 6, // Skip to: 2143
/* 475 */     MCD::OPC_Decode, 205, 1, 97, // Opcode: DADD
/* 479 */     MCD::OPC_FilterValue, 45, 14, 0, // Skip to: 497
/* 483 */     MCD::OPC_CheckPredicate, 1, 120, 6, // Skip to: 2143
/* 487 */     MCD::OPC_CheckField, 6, 5, 0, 114, 6, // Skip to: 2143
/* 493 */     MCD::OPC_Decode, 208, 1, 97, // Opcode: DADDu
/* 497 */     MCD::OPC_FilterValue, 47, 14, 0, // Skip to: 515
/* 501 */     MCD::OPC_CheckPredicate, 1, 102, 6, // Skip to: 2143
/* 505 */     MCD::OPC_CheckField, 6, 5, 0, 96, 6, // Skip to: 2143
/* 511 */     MCD::OPC_Decode, 129, 2, 97, // Opcode: DSUBu
/* 515 */     MCD::OPC_FilterValue, 56, 14, 0, // Skip to: 533
/* 519 */     MCD::OPC_CheckPredicate, 1, 84, 6, // Skip to: 2143
/* 523 */     MCD::OPC_CheckField, 21, 5, 0, 78, 6, // Skip to: 2143
/* 529 */     MCD::OPC_Decode, 247, 1, 99, // Opcode: DSLL
/* 533 */     MCD::OPC_FilterValue, 58, 27, 0, // Skip to: 564
/* 537 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 540 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 552
/* 544 */     MCD::OPC_CheckPredicate, 1, 59, 6, // Skip to: 2143
/* 548 */     MCD::OPC_Decode, 254, 1, 99, // Opcode: DSRL
/* 552 */     MCD::OPC_FilterValue, 1, 51, 6, // Skip to: 2143
/* 556 */     MCD::OPC_CheckPredicate, 19, 47, 6, // Skip to: 2143
/* 560 */     MCD::OPC_Decode, 242, 1, 99, // Opcode: DROTR
/* 564 */     MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 582
/* 568 */     MCD::OPC_CheckPredicate, 1, 35, 6, // Skip to: 2143
/* 572 */     MCD::OPC_CheckField, 21, 5, 0, 29, 6, // Skip to: 2143
/* 578 */     MCD::OPC_Decode, 251, 1, 99, // Opcode: DSRA
/* 582 */     MCD::OPC_FilterValue, 60, 14, 0, // Skip to: 600
/* 586 */     MCD::OPC_CheckPredicate, 1, 17, 6, // Skip to: 2143
/* 590 */     MCD::OPC_CheckField, 21, 5, 0, 11, 6, // Skip to: 2143
/* 596 */     MCD::OPC_Decode, 248, 1, 99, // Opcode: DSLL32
/* 600 */     MCD::OPC_FilterValue, 62, 14, 0, // Skip to: 618
/* 604 */     MCD::OPC_CheckPredicate, 1, 255, 5, // Skip to: 2143
/* 608 */     MCD::OPC_CheckField, 21, 5, 0, 249, 5, // Skip to: 2143
/* 614 */     MCD::OPC_Decode, 255, 1, 99, // Opcode: DSRL32
/* 618 */     MCD::OPC_FilterValue, 63, 241, 5, // Skip to: 2143
/* 622 */     MCD::OPC_CheckPredicate, 1, 237, 5, // Skip to: 2143
/* 626 */     MCD::OPC_CheckField, 21, 5, 0, 231, 5, // Skip to: 2143
/* 632 */     MCD::OPC_Decode, 252, 1, 99, // Opcode: DSRA32
/* 636 */     MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 667
/* 640 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 643 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 655
/* 647 */     MCD::OPC_CheckPredicate, 1, 212, 5, // Skip to: 2143
/* 651 */     MCD::OPC_Decode, 140, 1, 100, // Opcode: BLTZ64
/* 655 */     MCD::OPC_FilterValue, 1, 204, 5, // Skip to: 2143
/* 659 */     MCD::OPC_CheckPredicate, 1, 200, 5, // Skip to: 2143
/* 663 */     MCD::OPC_Decode, 132, 1, 100, // Opcode: BGEZ64
/* 667 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 679
/* 671 */     MCD::OPC_CheckPredicate, 1, 188, 5, // Skip to: 2143
/* 675 */     MCD::OPC_Decode, 130, 1, 101, // Opcode: BEQ64
/* 679 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 691
/* 683 */     MCD::OPC_CheckPredicate, 1, 176, 5, // Skip to: 2143
/* 687 */     MCD::OPC_Decode, 143, 1, 101, // Opcode: BNE64
/* 691 */     MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 709
/* 695 */     MCD::OPC_CheckPredicate, 1, 164, 5, // Skip to: 2143
/* 699 */     MCD::OPC_CheckField, 16, 5, 0, 158, 5, // Skip to: 2143
/* 705 */     MCD::OPC_Decode, 138, 1, 100, // Opcode: BLEZ64
/* 709 */     MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 727
/* 713 */     MCD::OPC_CheckPredicate, 1, 146, 5, // Skip to: 2143
/* 717 */     MCD::OPC_CheckField, 16, 5, 0, 140, 5, // Skip to: 2143
/* 723 */     MCD::OPC_Decode, 135, 1, 100, // Opcode: BGTZ64
/* 727 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 739
/* 731 */     MCD::OPC_CheckPredicate, 1, 128, 5, // Skip to: 2143
/* 735 */     MCD::OPC_Decode, 146, 5, 102, // Opcode: SLTi64
/* 739 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 751
/* 743 */     MCD::OPC_CheckPredicate, 1, 116, 5, // Skip to: 2143
/* 747 */     MCD::OPC_Decode, 149, 5, 102, // Opcode: SLTiu64
/* 751 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 763
/* 755 */     MCD::OPC_CheckPredicate, 1, 104, 5, // Skip to: 2143
/* 759 */     MCD::OPC_Decode, 209, 1, 103, // Opcode: DANDi
/* 763 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 775
/* 767 */     MCD::OPC_CheckPredicate, 1, 92, 5, // Skip to: 2143
/* 771 */     MCD::OPC_Decode, 141, 4, 103, // Opcode: ORi64
/* 775 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 787
/* 779 */     MCD::OPC_CheckPredicate, 1, 80, 5, // Skip to: 2143
/* 783 */     MCD::OPC_Decode, 133, 6, 103, // Opcode: XORi64
/* 787 */     MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 805
/* 791 */     MCD::OPC_CheckPredicate, 1, 68, 5, // Skip to: 2143
/* 795 */     MCD::OPC_CheckField, 21, 5, 0, 62, 5, // Skip to: 2143
/* 801 */     MCD::OPC_Decode, 249, 2, 104, // Opcode: LUi64
/* 805 */     MCD::OPC_FilterValue, 16, 39, 0, // Skip to: 848
/* 809 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 812 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 830
/* 816 */     MCD::OPC_CheckPredicate, 1, 43, 5, // Skip to: 2143
/* 820 */     MCD::OPC_CheckField, 3, 8, 0, 37, 5, // Skip to: 2143
/* 826 */     MCD::OPC_Decode, 218, 1, 105, // Opcode: DMFC0_3OP64
/* 830 */     MCD::OPC_FilterValue, 5, 29, 5, // Skip to: 2143
/* 834 */     MCD::OPC_CheckPredicate, 1, 25, 5, // Skip to: 2143
/* 838 */     MCD::OPC_CheckField, 3, 8, 0, 19, 5, // Skip to: 2143
/* 844 */     MCD::OPC_Decode, 221, 1, 106, // Opcode: DMTC0_3OP64
/* 848 */     MCD::OPC_FilterValue, 17, 89, 2, // Skip to: 1453
/* 852 */     MCD::OPC_ExtractField, 4, 2,  // Inst{5-4} ...
/* 855 */     MCD::OPC_FilterValue, 0, 103, 1, // Skip to: 1218
/* 859 */     MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 862 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 880
/* 866 */     MCD::OPC_CheckPredicate, 20, 249, 4, // Skip to: 2143
/* 870 */     MCD::OPC_CheckField, 21, 5, 17, 243, 4, // Skip to: 2143
/* 876 */     MCD::OPC_Decode, 151, 2, 107, // Opcode: FADD_D64
/* 880 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 898
/* 884 */     MCD::OPC_CheckPredicate, 20, 231, 4, // Skip to: 2143
/* 888 */     MCD::OPC_CheckField, 21, 5, 17, 225, 4, // Skip to: 2143
/* 894 */     MCD::OPC_Decode, 177, 2, 107, // Opcode: FSUB_D64
/* 898 */     MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 916
/* 902 */     MCD::OPC_CheckPredicate, 20, 213, 4, // Skip to: 2143
/* 906 */     MCD::OPC_CheckField, 21, 5, 17, 207, 4, // Skip to: 2143
/* 912 */     MCD::OPC_Decode, 168, 2, 107, // Opcode: FMUL_D64
/* 916 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 934
/* 920 */     MCD::OPC_CheckPredicate, 20, 195, 4, // Skip to: 2143
/* 924 */     MCD::OPC_CheckField, 21, 5, 17, 189, 4, // Skip to: 2143
/* 930 */     MCD::OPC_Decode, 157, 2, 107, // Opcode: FDIV_D64
/* 934 */     MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 953
/* 938 */     MCD::OPC_CheckPredicate, 20, 177, 4, // Skip to: 2143
/* 942 */     MCD::OPC_CheckField, 16, 10, 160, 4, 170, 4, // Skip to: 2143
/* 949 */     MCD::OPC_Decode, 174, 2, 52, // Opcode: FSQRT_D64
/* 953 */     MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 972
/* 957 */     MCD::OPC_CheckPredicate, 4, 158, 4, // Skip to: 2143
/* 961 */     MCD::OPC_CheckField, 16, 10, 160, 4, 151, 4, // Skip to: 2143
/* 968 */     MCD::OPC_Decode, 148, 2, 52, // Opcode: FABS_D64
/* 972 */     MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 991
/* 976 */     MCD::OPC_CheckPredicate, 20, 139, 4, // Skip to: 2143
/* 980 */     MCD::OPC_CheckField, 16, 10, 160, 4, 132, 4, // Skip to: 2143
/* 987 */     MCD::OPC_Decode, 165, 2, 52, // Opcode: FMOV_D64
/* 991 */     MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 1010
/* 995 */     MCD::OPC_CheckPredicate, 4, 120, 4, // Skip to: 2143
/* 999 */     MCD::OPC_CheckField, 16, 10, 160, 4, 113, 4, // Skip to: 2143
/* 1006 */    MCD::OPC_Decode, 171, 2, 52, // Opcode: FNEG_D64
/* 1010 */    MCD::OPC_FilterValue, 8, 29, 0, // Skip to: 1043
/* 1014 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1017 */    MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 1030
/* 1022 */    MCD::OPC_CheckPredicate, 20, 93, 4, // Skip to: 2143
/* 1026 */    MCD::OPC_Decode, 199, 4, 45, // Opcode: ROUND_L_S
/* 1030 */    MCD::OPC_FilterValue, 160, 4, 84, 4, // Skip to: 2143
/* 1035 */    MCD::OPC_CheckPredicate, 20, 80, 4, // Skip to: 2143
/* 1039 */    MCD::OPC_Decode, 198, 4, 52, // Opcode: ROUND_L_D64
/* 1043 */    MCD::OPC_FilterValue, 9, 29, 0, // Skip to: 1076
/* 1047 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1050 */    MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 1063
/* 1055 */    MCD::OPC_CheckPredicate, 20, 60, 4, // Skip to: 2143
/* 1059 */    MCD::OPC_Decode, 250, 5, 45, // Opcode: TRUNC_L_S
/* 1063 */    MCD::OPC_FilterValue, 160, 4, 51, 4, // Skip to: 2143
/* 1068 */    MCD::OPC_CheckPredicate, 20, 47, 4, // Skip to: 2143
/* 1072 */    MCD::OPC_Decode, 249, 5, 52, // Opcode: TRUNC_L_D64
/* 1076 */    MCD::OPC_FilterValue, 10, 29, 0, // Skip to: 1109
/* 1080 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1083 */    MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 1096
/* 1088 */    MCD::OPC_CheckPredicate, 20, 27, 4, // Skip to: 2143
/* 1092 */    MCD::OPC_Decode, 167, 1, 45, // Opcode: CEIL_L_S
/* 1096 */    MCD::OPC_FilterValue, 160, 4, 18, 4, // Skip to: 2143
/* 1101 */    MCD::OPC_CheckPredicate, 20, 14, 4, // Skip to: 2143
/* 1105 */    MCD::OPC_Decode, 166, 1, 52, // Opcode: CEIL_L_D64
/* 1109 */    MCD::OPC_FilterValue, 11, 29, 0, // Skip to: 1142
/* 1113 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1116 */    MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 1129
/* 1121 */    MCD::OPC_CheckPredicate, 20, 250, 3, // Skip to: 2143
/* 1125 */    MCD::OPC_Decode, 160, 2, 45, // Opcode: FLOOR_L_S
/* 1129 */    MCD::OPC_FilterValue, 160, 4, 241, 3, // Skip to: 2143
/* 1134 */    MCD::OPC_CheckPredicate, 20, 237, 3, // Skip to: 2143
/* 1138 */    MCD::OPC_Decode, 159, 2, 52, // Opcode: FLOOR_L_D64
/* 1142 */    MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 1161
/* 1146 */    MCD::OPC_CheckPredicate, 20, 225, 3, // Skip to: 2143
/* 1150 */    MCD::OPC_CheckField, 16, 10, 160, 4, 218, 3, // Skip to: 2143
/* 1157 */    MCD::OPC_Decode, 201, 4, 108, // Opcode: ROUND_W_D64
/* 1161 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 1180
/* 1165 */    MCD::OPC_CheckPredicate, 20, 206, 3, // Skip to: 2143
/* 1169 */    MCD::OPC_CheckField, 16, 10, 160, 4, 199, 3, // Skip to: 2143
/* 1176 */    MCD::OPC_Decode, 252, 5, 108, // Opcode: TRUNC_W_D64
/* 1180 */    MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 1199
/* 1184 */    MCD::OPC_CheckPredicate, 20, 187, 3, // Skip to: 2143
/* 1188 */    MCD::OPC_CheckField, 16, 10, 160, 4, 180, 3, // Skip to: 2143
/* 1195 */    MCD::OPC_Decode, 169, 1, 108, // Opcode: CEIL_W_D64
/* 1199 */    MCD::OPC_FilterValue, 15, 172, 3, // Skip to: 2143
/* 1203 */    MCD::OPC_CheckPredicate, 20, 168, 3, // Skip to: 2143
/* 1207 */    MCD::OPC_CheckField, 16, 10, 160, 4, 161, 3, // Skip to: 2143
/* 1214 */    MCD::OPC_Decode, 162, 2, 108, // Opcode: FLOOR_W_D64
/* 1218 */    MCD::OPC_FilterValue, 1, 98, 0, // Skip to: 1320
/* 1222 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1225 */    MCD::OPC_FilterValue, 1, 29, 0, // Skip to: 1258
/* 1229 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1232 */    MCD::OPC_FilterValue, 160, 4, 8, 0, // Skip to: 1245
/* 1237 */    MCD::OPC_CheckPredicate, 20, 134, 3, // Skip to: 2143
/* 1241 */    MCD::OPC_Decode, 181, 3, 109, // Opcode: MOVF_D64
/* 1245 */    MCD::OPC_FilterValue, 161, 4, 125, 3, // Skip to: 2143
/* 1250 */    MCD::OPC_CheckPredicate, 20, 121, 3, // Skip to: 2143
/* 1254 */    MCD::OPC_Decode, 195, 3, 109, // Opcode: MOVT_D64
/* 1258 */    MCD::OPC_FilterValue, 2, 27, 0, // Skip to: 1289
/* 1262 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1265 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 1277
/* 1269 */    MCD::OPC_CheckPredicate, 18, 102, 3, // Skip to: 2143
/* 1273 */    MCD::OPC_Decode, 202, 3, 110, // Opcode: MOVZ_I64_S
/* 1277 */    MCD::OPC_FilterValue, 17, 94, 3, // Skip to: 2143
/* 1281 */    MCD::OPC_CheckPredicate, 20, 90, 3, // Skip to: 2143
/* 1285 */    MCD::OPC_Decode, 204, 3, 111, // Opcode: MOVZ_I_D64
/* 1289 */    MCD::OPC_FilterValue, 3, 82, 3, // Skip to: 2143
/* 1293 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1296 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 1308
/* 1300 */    MCD::OPC_CheckPredicate, 18, 71, 3, // Skip to: 2143
/* 1304 */    MCD::OPC_Decode, 188, 3, 110, // Opcode: MOVN_I64_S
/* 1308 */    MCD::OPC_FilterValue, 17, 63, 3, // Skip to: 2143
/* 1312 */    MCD::OPC_CheckPredicate, 20, 59, 3, // Skip to: 2143
/* 1316 */    MCD::OPC_Decode, 190, 3, 111, // Opcode: MOVN_I_D64
/* 1320 */    MCD::OPC_FilterValue, 2, 105, 0, // Skip to: 1429
/* 1324 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1327 */    MCD::OPC_FilterValue, 128, 4, 14, 0, // Skip to: 1346
/* 1332 */    MCD::OPC_CheckPredicate, 20, 39, 3, // Skip to: 2143
/* 1336 */    MCD::OPC_CheckField, 0, 4, 1, 33, 3, // Skip to: 2143
/* 1342 */    MCD::OPC_Decode, 190, 1, 45, // Opcode: CVT_D64_S
/* 1346 */    MCD::OPC_FilterValue, 160, 4, 27, 0, // Skip to: 1378
/* 1351 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1354 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1366
/* 1358 */    MCD::OPC_CheckPredicate, 20, 13, 3, // Skip to: 2143
/* 1362 */    MCD::OPC_Decode, 195, 1, 108, // Opcode: CVT_S_D64
/* 1366 */    MCD::OPC_FilterValue, 4, 5, 3, // Skip to: 2143
/* 1370 */    MCD::OPC_CheckPredicate, 20, 1, 3, // Skip to: 2143
/* 1374 */    MCD::OPC_Decode, 199, 1, 108, // Opcode: CVT_W_D64
/* 1378 */    MCD::OPC_FilterValue, 128, 5, 14, 0, // Skip to: 1397
/* 1383 */    MCD::OPC_CheckPredicate, 20, 244, 2, // Skip to: 2143
/* 1387 */    MCD::OPC_CheckField, 0, 4, 1, 238, 2, // Skip to: 2143
/* 1393 */    MCD::OPC_Decode, 191, 1, 45, // Opcode: CVT_D64_W
/* 1397 */    MCD::OPC_FilterValue, 160, 5, 229, 2, // Skip to: 2143
/* 1402 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1405 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1417
/* 1409 */    MCD::OPC_CheckPredicate, 20, 218, 2, // Skip to: 2143
/* 1413 */    MCD::OPC_Decode, 196, 1, 108, // Opcode: CVT_S_L
/* 1417 */    MCD::OPC_FilterValue, 1, 210, 2, // Skip to: 2143
/* 1421 */    MCD::OPC_CheckPredicate, 20, 206, 2, // Skip to: 2143
/* 1425 */    MCD::OPC_Decode, 189, 1, 52, // Opcode: CVT_D64_L
/* 1429 */    MCD::OPC_FilterValue, 3, 198, 2, // Skip to: 2143
/* 1433 */    MCD::OPC_CheckPredicate, 20, 194, 2, // Skip to: 2143
/* 1437 */    MCD::OPC_CheckField, 21, 5, 17, 188, 2, // Skip to: 2143
/* 1443 */    MCD::OPC_CheckField, 6, 5, 0, 182, 2, // Skip to: 2143
/* 1449 */    MCD::OPC_Decode, 154, 2, 112, // Opcode: FCMP_D64
/* 1453 */    MCD::OPC_FilterValue, 18, 39, 0, // Skip to: 1496
/* 1457 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1460 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1478
/* 1464 */    MCD::OPC_CheckPredicate, 1, 163, 2, // Skip to: 2143
/* 1468 */    MCD::OPC_CheckField, 3, 8, 0, 157, 2, // Skip to: 2143
/* 1474 */    MCD::OPC_Decode, 220, 1, 105, // Opcode: DMFC2_3OP64
/* 1478 */    MCD::OPC_FilterValue, 5, 149, 2, // Skip to: 2143
/* 1482 */    MCD::OPC_CheckPredicate, 1, 145, 2, // Skip to: 2143
/* 1486 */    MCD::OPC_CheckField, 3, 8, 0, 139, 2, // Skip to: 2143
/* 1492 */    MCD::OPC_Decode, 223, 1, 106, // Opcode: DMTC2_3OP64
/* 1496 */    MCD::OPC_FilterValue, 19, 75, 0, // Skip to: 1575
/* 1500 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1503 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1521
/* 1507 */    MCD::OPC_CheckPredicate, 21, 120, 2, // Skip to: 2143
/* 1511 */    MCD::OPC_CheckField, 11, 5, 0, 114, 2, // Skip to: 2143
/* 1517 */    MCD::OPC_Decode, 216, 2, 113, // Opcode: LDXC164
/* 1521 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1539
/* 1525 */    MCD::OPC_CheckPredicate, 18, 102, 2, // Skip to: 2143
/* 1529 */    MCD::OPC_CheckField, 11, 5, 0, 96, 2, // Skip to: 2143
/* 1535 */    MCD::OPC_Decode, 247, 2, 113, // Opcode: LUXC164
/* 1539 */    MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 1557
/* 1543 */    MCD::OPC_CheckPredicate, 21, 84, 2, // Skip to: 2143
/* 1547 */    MCD::OPC_CheckField, 6, 5, 0, 78, 2, // Skip to: 2143
/* 1553 */    MCD::OPC_Decode, 227, 4, 114, // Opcode: SDXC164
/* 1557 */    MCD::OPC_FilterValue, 13, 70, 2, // Skip to: 2143
/* 1561 */    MCD::OPC_CheckPredicate, 18, 66, 2, // Skip to: 2143
/* 1565 */    MCD::OPC_CheckField, 6, 5, 0, 60, 2, // Skip to: 2143
/* 1571 */    MCD::OPC_Decode, 188, 5, 114, // Opcode: SUXC164
/* 1575 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 1587
/* 1579 */    MCD::OPC_CheckPredicate, 1, 48, 2, // Skip to: 2143
/* 1583 */    MCD::OPC_Decode, 206, 1, 103, // Opcode: DADDi
/* 1587 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 1599
/* 1591 */    MCD::OPC_CheckPredicate, 1, 36, 2, // Skip to: 2143
/* 1595 */    MCD::OPC_Decode, 207, 1, 103, // Opcode: DADDiu
/* 1599 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 1611
/* 1603 */    MCD::OPC_CheckPredicate, 16, 24, 2, // Skip to: 2143
/* 1607 */    MCD::OPC_Decode, 211, 2, 88, // Opcode: LDL
/* 1611 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 1623
/* 1615 */    MCD::OPC_CheckPredicate, 16, 12, 2, // Skip to: 2143
/* 1619 */    MCD::OPC_Decode, 213, 2, 88, // Opcode: LDR
/* 1623 */    MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 1654
/* 1627 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 1630 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 1642
/* 1634 */    MCD::OPC_CheckPredicate, 12, 249, 1, // Skip to: 2143
/* 1638 */    MCD::OPC_Decode, 211, 1, 115, // Opcode: DCLZ
/* 1642 */    MCD::OPC_FilterValue, 37, 241, 1, // Skip to: 2143
/* 1646 */    MCD::OPC_CheckPredicate, 12, 237, 1, // Skip to: 2143
/* 1650 */    MCD::OPC_Decode, 210, 1, 115, // Opcode: DCLO
/* 1654 */    MCD::OPC_FilterValue, 31, 185, 0, // Skip to: 1843
/* 1658 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1661 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1673
/* 1665 */    MCD::OPC_CheckPredicate, 2, 218, 1, // Skip to: 2143
/* 1669 */    MCD::OPC_Decode, 213, 1, 116, // Opcode: DEXTM
/* 1673 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1685
/* 1677 */    MCD::OPC_CheckPredicate, 2, 206, 1, // Skip to: 2143
/* 1681 */    MCD::OPC_Decode, 214, 1, 116, // Opcode: DEXTU
/* 1685 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1697
/* 1689 */    MCD::OPC_CheckPredicate, 2, 194, 1, // Skip to: 2143
/* 1693 */    MCD::OPC_Decode, 212, 1, 116, // Opcode: DEXT
/* 1697 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1709
/* 1701 */    MCD::OPC_CheckPredicate, 2, 182, 1, // Skip to: 2143
/* 1705 */    MCD::OPC_Decode, 216, 1, 117, // Opcode: DINSM
/* 1709 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1721
/* 1713 */    MCD::OPC_CheckPredicate, 2, 170, 1, // Skip to: 2143
/* 1717 */    MCD::OPC_Decode, 217, 1, 117, // Opcode: DINSU
/* 1721 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1733
/* 1725 */    MCD::OPC_CheckPredicate, 2, 158, 1, // Skip to: 2143
/* 1729 */    MCD::OPC_Decode, 215, 1, 117, // Opcode: DINS
/* 1733 */    MCD::OPC_FilterValue, 32, 39, 0, // Skip to: 1776
/* 1737 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1740 */    MCD::OPC_FilterValue, 16, 14, 0, // Skip to: 1758
/* 1744 */    MCD::OPC_CheckPredicate, 15, 139, 1, // Skip to: 2143
/* 1748 */    MCD::OPC_CheckField, 21, 5, 0, 133, 1, // Skip to: 2143
/* 1754 */    MCD::OPC_Decode, 231, 4, 118, // Opcode: SEB64
/* 1758 */    MCD::OPC_FilterValue, 24, 125, 1, // Skip to: 2143
/* 1762 */    MCD::OPC_CheckPredicate, 15, 121, 1, // Skip to: 2143
/* 1766 */    MCD::OPC_CheckField, 21, 5, 0, 115, 1, // Skip to: 2143
/* 1772 */    MCD::OPC_Decode, 233, 4, 118, // Opcode: SEH64
/* 1776 */    MCD::OPC_FilterValue, 36, 39, 0, // Skip to: 1819
/* 1780 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1783 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1801
/* 1787 */    MCD::OPC_CheckPredicate, 14, 96, 1, // Skip to: 2143
/* 1791 */    MCD::OPC_CheckField, 21, 5, 0, 90, 1, // Skip to: 2143
/* 1797 */    MCD::OPC_Decode, 244, 1, 118, // Opcode: DSBH
/* 1801 */    MCD::OPC_FilterValue, 5, 82, 1, // Skip to: 2143
/* 1805 */    MCD::OPC_CheckPredicate, 14, 78, 1, // Skip to: 2143
/* 1809 */    MCD::OPC_CheckField, 21, 5, 0, 72, 1, // Skip to: 2143
/* 1815 */    MCD::OPC_Decode, 246, 1, 118, // Opcode: DSHD
/* 1819 */    MCD::OPC_FilterValue, 59, 64, 1, // Skip to: 2143
/* 1823 */    MCD::OPC_CheckPredicate, 1, 60, 1, // Skip to: 2143
/* 1827 */    MCD::OPC_CheckField, 21, 5, 0, 54, 1, // Skip to: 2143
/* 1833 */    MCD::OPC_CheckField, 6, 5, 0, 48, 1, // Skip to: 2143
/* 1839 */    MCD::OPC_Decode, 188, 4, 119, // Opcode: RDHWR64
/* 1843 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 1855
/* 1847 */    MCD::OPC_CheckPredicate, 16, 36, 1, // Skip to: 2143
/* 1851 */    MCD::OPC_Decode, 195, 2, 88, // Opcode: LB64
/* 1855 */    MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 1867
/* 1859 */    MCD::OPC_CheckPredicate, 16, 24, 1, // Skip to: 2143
/* 1863 */    MCD::OPC_Decode, 222, 2, 88, // Opcode: LH64
/* 1867 */    MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 1879
/* 1871 */    MCD::OPC_CheckPredicate, 16, 12, 1, // Skip to: 2143
/* 1875 */    MCD::OPC_Decode, 129, 3, 88, // Opcode: LWL64
/* 1879 */    MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 1891
/* 1883 */    MCD::OPC_CheckPredicate, 16, 0, 1, // Skip to: 2143
/* 1887 */    MCD::OPC_Decode, 252, 2, 88, // Opcode: LW64
/* 1891 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 1903
/* 1895 */    MCD::OPC_CheckPredicate, 16, 244, 0, // Skip to: 2143
/* 1899 */    MCD::OPC_Decode, 202, 2, 88, // Opcode: LBu64
/* 1903 */    MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 1915
/* 1907 */    MCD::OPC_CheckPredicate, 16, 232, 0, // Skip to: 2143
/* 1911 */    MCD::OPC_Decode, 229, 2, 88, // Opcode: LHu64
/* 1915 */    MCD::OPC_FilterValue, 38, 8, 0, // Skip to: 1927
/* 1919 */    MCD::OPC_CheckPredicate, 16, 220, 0, // Skip to: 2143
/* 1923 */    MCD::OPC_Decode, 133, 3, 88, // Opcode: LWR64
/* 1927 */    MCD::OPC_FilterValue, 39, 8, 0, // Skip to: 1939
/* 1931 */    MCD::OPC_CheckPredicate, 16, 208, 0, // Skip to: 2143
/* 1935 */    MCD::OPC_Decode, 142, 3, 88, // Opcode: LWu64
/* 1939 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 1951
/* 1943 */    MCD::OPC_CheckPredicate, 16, 196, 0, // Skip to: 2143
/* 1947 */    MCD::OPC_Decode, 208, 4, 88, // Opcode: SB64
/* 1951 */    MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 1963
/* 1955 */    MCD::OPC_CheckPredicate, 16, 184, 0, // Skip to: 2143
/* 1959 */    MCD::OPC_Decode, 235, 4, 88, // Opcode: SH64
/* 1963 */    MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 1975
/* 1967 */    MCD::OPC_CheckPredicate, 16, 172, 0, // Skip to: 2143
/* 1971 */    MCD::OPC_Decode, 195, 5, 88, // Opcode: SWL64
/* 1975 */    MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 1987
/* 1979 */    MCD::OPC_CheckPredicate, 16, 160, 0, // Skip to: 2143
/* 1983 */    MCD::OPC_Decode, 190, 5, 88, // Opcode: SW64
/* 1987 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 1999
/* 1991 */    MCD::OPC_CheckPredicate, 16, 148, 0, // Skip to: 2143
/* 1995 */    MCD::OPC_Decode, 222, 4, 88, // Opcode: SDL
/* 1999 */    MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 2011
/* 2003 */    MCD::OPC_CheckPredicate, 16, 136, 0, // Skip to: 2143
/* 2007 */    MCD::OPC_Decode, 224, 4, 88, // Opcode: SDR
/* 2011 */    MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 2023
/* 2015 */    MCD::OPC_CheckPredicate, 16, 124, 0, // Skip to: 2143
/* 2019 */    MCD::OPC_Decode, 199, 5, 88, // Opcode: SWR64
/* 2023 */    MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 2035
/* 2027 */    MCD::OPC_CheckPredicate, 22, 112, 0, // Skip to: 2143
/* 2031 */    MCD::OPC_Decode, 237, 2, 88, // Opcode: LL_P8
/* 2035 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 2047
/* 2039 */    MCD::OPC_CheckPredicate, 22, 100, 0, // Skip to: 2143
/* 2043 */    MCD::OPC_Decode, 255, 2, 89, // Opcode: LWC1_P8
/* 2047 */    MCD::OPC_FilterValue, 52, 8, 0, // Skip to: 2059
/* 2051 */    MCD::OPC_CheckPredicate, 16, 88, 0, // Skip to: 2143
/* 2055 */    MCD::OPC_Decode, 235, 2, 88, // Opcode: LLD
/* 2059 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 2071
/* 2063 */    MCD::OPC_CheckPredicate, 23, 76, 0, // Skip to: 2143
/* 2067 */    MCD::OPC_Decode, 209, 2, 89, // Opcode: LDC164
/* 2071 */    MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 2083
/* 2075 */    MCD::OPC_CheckPredicate, 16, 64, 0, // Skip to: 2143
/* 2079 */    MCD::OPC_Decode, 207, 2, 88, // Opcode: LD
/* 2083 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 2095
/* 2087 */    MCD::OPC_CheckPredicate, 22, 52, 0, // Skip to: 2143
/* 2091 */    MCD::OPC_Decode, 216, 4, 88, // Opcode: SC_P8
/* 2095 */    MCD::OPC_FilterValue, 57, 8, 0, // Skip to: 2107
/* 2099 */    MCD::OPC_CheckPredicate, 22, 40, 0, // Skip to: 2143
/* 2103 */    MCD::OPC_Decode, 193, 5, 89, // Opcode: SWC1_P8
/* 2107 */    MCD::OPC_FilterValue, 60, 8, 0, // Skip to: 2119
/* 2111 */    MCD::OPC_CheckPredicate, 16, 28, 0, // Skip to: 2143
/* 2115 */    MCD::OPC_Decode, 214, 4, 88, // Opcode: SCD
/* 2119 */    MCD::OPC_FilterValue, 61, 8, 0, // Skip to: 2131
/* 2123 */    MCD::OPC_CheckPredicate, 23, 16, 0, // Skip to: 2143
/* 2127 */    MCD::OPC_Decode, 219, 4, 89, // Opcode: SDC164
/* 2131 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 2143
/* 2135 */    MCD::OPC_CheckPredicate, 16, 4, 0, // Skip to: 2143
/* 2139 */    MCD::OPC_Decode, 217, 4, 88, // Opcode: SD
/* 2143 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, uint64_t Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return ((Bits & Mips::FeatureMips16));
  case 1:
    return (!(Bits & Mips::FeatureMips16));
  case 2:
    return ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureMips16));
  case 3:
    return ((Bits & Mips::FeatureDSP));
  case 4:
    return ((Bits & Mips::FeatureMips32) && !(Bits & Mips::FeatureMips16));
  case 5:
    return (!(Bits & Mips::FeatureFP64Bit) && !(Bits & Mips::FeatureMips16));
  case 6:
    return ((Bits & Mips::FeatureFPIdx) && !(Bits & Mips::FeatureMips16));
  case 7:
    return ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips16));
  case 8:
    return (!(Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips16));
  case 9:
    return ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureFP64Bit) && !(Bits & Mips::FeatureMips16));
  case 10:
    return ((Bits & Mips::FeatureMips32r2) && (Bits & Mips::FeatureMips32) && !(Bits & Mips::FeatureMips16));
  case 11:
    return ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureFP64Bit) && (Bits & Mips::FeatureMips32) && !(Bits & Mips::FeatureMips16));
  case 12:
    return ((Bits & Mips::FeatureBitCount) && !(Bits & Mips::FeatureMips16));
  case 13:
    return ((Bits & Mips::FeatureDSPR2));
  case 14:
    return ((Bits & Mips::FeatureSwap) && !(Bits & Mips::FeatureMips16));
  case 15:
    return ((Bits & Mips::FeatureSEInReg) && !(Bits & Mips::FeatureMips16));
  case 16:
    return (!(Bits & Mips::FeatureN64) && !(Bits & Mips::FeatureMips16));
  case 17:
    return (!(Bits & Mips::FeatureN64) && !(Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips16));
  case 18:
    return ((Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips16));
  case 19:
    return ((Bits & Mips::FeatureMips64r2) && !(Bits & Mips::FeatureMips16));
  case 20:
    return ((Bits & Mips::FeatureFP64Bit) && !(Bits & Mips::FeatureMips16));
  case 21:
    return ((Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureN64) && !(Bits & Mips::FeatureMips16));
  case 22:
    return ((Bits & Mips::FeatureN64) && !(Bits & Mips::FeatureMips16));
  case 23:
    return (!(Bits & Mips::FeatureN64) && (Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips16));
  }
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder) {
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 2:
    return S;
  case 3:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 3, 2) << 3);
    tmp |= (fieldFromInstruction(insn, 5, 3) << 0);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 2, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 8:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 5) << 0);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 11);
    tmp |= (fieldFromInstruction(insn, 21, 6) << 5);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 2);
    if (DecodeHIRegsDSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeHIRegsDSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 2);
    if (DecodeLORegsDSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeLORegsDSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsDSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 26:
    if (DecodeJumpTarget(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 39:
    if (DecodeBC1(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeCondCode(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeCondCode(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsDSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsDSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 61:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 0);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsDSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsDSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsDSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 6);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsDSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 86:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsDSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsDSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 88:
    if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 89:
    if (DecodeFMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 90:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 91:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 93:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 100:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 101:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 102:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 103:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 105:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 106:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 107:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 108:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 109:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 110:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 111:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 112:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeCondCode(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 113:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 114:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 115:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 0);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 116:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 117:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 118:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 119:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeHWRegs64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  }
}

template<typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const void *DisAsm,
                                      const MCSubtargetInfo &STI) {
  uint64_t Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  uint32_t CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  for (;;) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      InsnType Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      InsnType FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      uint32_t ExpectedValue = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << "\n" );
      DEBUG(dbgs() << "----- DECODE SUCCESSFUL -----\n");

      MI.setOpcode(Opc);
      return decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm);
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      InsnType PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      InsnType NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) || (~insn & NegativeMask);
      if (Fail)
        S = MCDisassembler::SoftFail;
      DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n":"PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // End llvm namespace
