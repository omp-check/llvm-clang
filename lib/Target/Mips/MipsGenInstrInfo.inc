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

namespace Mips {
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
    ABSQ_S_PH	= 17,
    ABSQ_S_QB	= 18,
    ABSQ_S_W	= 19,
    ADD	= 20,
    ADDQH_PH	= 21,
    ADDQH_R_PH	= 22,
    ADDQH_R_W	= 23,
    ADDQH_W	= 24,
    ADDQ_PH	= 25,
    ADDQ_S_PH	= 26,
    ADDQ_S_W	= 27,
    ADDSC	= 28,
    ADDUH_QB	= 29,
    ADDUH_R_QB	= 30,
    ADDU_PH	= 31,
    ADDU_QB	= 32,
    ADDU_S_PH	= 33,
    ADDU_S_QB	= 34,
    ADDWC	= 35,
    ADD_MM	= 36,
    ADDi	= 37,
    ADDi_MM	= 38,
    ADDiu	= 39,
    ADDiu_MM	= 40,
    ADDu	= 41,
    ADDu_MM	= 42,
    ADJCALLSTACKDOWN	= 43,
    ADJCALLSTACKUP	= 44,
    AND	= 45,
    AND64	= 46,
    AND_MM	= 47,
    ANDi	= 48,
    ANDi_MM	= 49,
    APPEND	= 50,
    ATOMIC_CMP_SWAP_I16	= 51,
    ATOMIC_CMP_SWAP_I16_P8	= 52,
    ATOMIC_CMP_SWAP_I32	= 53,
    ATOMIC_CMP_SWAP_I32_P8	= 54,
    ATOMIC_CMP_SWAP_I64	= 55,
    ATOMIC_CMP_SWAP_I64_P8	= 56,
    ATOMIC_CMP_SWAP_I8	= 57,
    ATOMIC_CMP_SWAP_I8_P8	= 58,
    ATOMIC_LOAD_ADD_I16	= 59,
    ATOMIC_LOAD_ADD_I16_P8	= 60,
    ATOMIC_LOAD_ADD_I32	= 61,
    ATOMIC_LOAD_ADD_I32_P8	= 62,
    ATOMIC_LOAD_ADD_I64	= 63,
    ATOMIC_LOAD_ADD_I64_P8	= 64,
    ATOMIC_LOAD_ADD_I8	= 65,
    ATOMIC_LOAD_ADD_I8_P8	= 66,
    ATOMIC_LOAD_AND_I16	= 67,
    ATOMIC_LOAD_AND_I16_P8	= 68,
    ATOMIC_LOAD_AND_I32	= 69,
    ATOMIC_LOAD_AND_I32_P8	= 70,
    ATOMIC_LOAD_AND_I64	= 71,
    ATOMIC_LOAD_AND_I64_P8	= 72,
    ATOMIC_LOAD_AND_I8	= 73,
    ATOMIC_LOAD_AND_I8_P8	= 74,
    ATOMIC_LOAD_NAND_I16	= 75,
    ATOMIC_LOAD_NAND_I16_P8	= 76,
    ATOMIC_LOAD_NAND_I32	= 77,
    ATOMIC_LOAD_NAND_I32_P8	= 78,
    ATOMIC_LOAD_NAND_I64	= 79,
    ATOMIC_LOAD_NAND_I64_P8	= 80,
    ATOMIC_LOAD_NAND_I8	= 81,
    ATOMIC_LOAD_NAND_I8_P8	= 82,
    ATOMIC_LOAD_OR_I16	= 83,
    ATOMIC_LOAD_OR_I16_P8	= 84,
    ATOMIC_LOAD_OR_I32	= 85,
    ATOMIC_LOAD_OR_I32_P8	= 86,
    ATOMIC_LOAD_OR_I64	= 87,
    ATOMIC_LOAD_OR_I64_P8	= 88,
    ATOMIC_LOAD_OR_I8	= 89,
    ATOMIC_LOAD_OR_I8_P8	= 90,
    ATOMIC_LOAD_SUB_I16	= 91,
    ATOMIC_LOAD_SUB_I16_P8	= 92,
    ATOMIC_LOAD_SUB_I32	= 93,
    ATOMIC_LOAD_SUB_I32_P8	= 94,
    ATOMIC_LOAD_SUB_I64	= 95,
    ATOMIC_LOAD_SUB_I64_P8	= 96,
    ATOMIC_LOAD_SUB_I8	= 97,
    ATOMIC_LOAD_SUB_I8_P8	= 98,
    ATOMIC_LOAD_XOR_I16	= 99,
    ATOMIC_LOAD_XOR_I16_P8	= 100,
    ATOMIC_LOAD_XOR_I32	= 101,
    ATOMIC_LOAD_XOR_I32_P8	= 102,
    ATOMIC_LOAD_XOR_I64	= 103,
    ATOMIC_LOAD_XOR_I64_P8	= 104,
    ATOMIC_LOAD_XOR_I8	= 105,
    ATOMIC_LOAD_XOR_I8_P8	= 106,
    ATOMIC_SWAP_I16	= 107,
    ATOMIC_SWAP_I16_P8	= 108,
    ATOMIC_SWAP_I32	= 109,
    ATOMIC_SWAP_I32_P8	= 110,
    ATOMIC_SWAP_I64	= 111,
    ATOMIC_SWAP_I64_P8	= 112,
    ATOMIC_SWAP_I8	= 113,
    ATOMIC_SWAP_I8_P8	= 114,
    AddiuRxImmX16	= 115,
    AddiuRxPcImmX16	= 116,
    AddiuRxRxImm16	= 117,
    AddiuRxRxImmX16	= 118,
    AddiuRxRyOffMemX16	= 119,
    AddiuSpImm16	= 120,
    AddiuSpImmX16	= 121,
    AdduRxRyRz16	= 122,
    AndRxRxRy16	= 123,
    B	= 124,
    BALIGN	= 125,
    BAL_BR	= 126,
    BC1F	= 127,
    BC1T	= 128,
    BEQ	= 129,
    BEQ64	= 130,
    BGEZ	= 131,
    BGEZ64	= 132,
    BGEZAL	= 133,
    BGTZ	= 134,
    BGTZ64	= 135,
    BITREV	= 136,
    BLEZ	= 137,
    BLEZ64	= 138,
    BLTZ	= 139,
    BLTZ64	= 140,
    BLTZAL	= 141,
    BNE	= 142,
    BNE64	= 143,
    BPOSGE32	= 144,
    BPOSGE32_PSEUDO	= 145,
    BeqzRxImm16	= 146,
    BeqzRxImmX16	= 147,
    BimmX16	= 148,
    BnezRxImm16	= 149,
    BnezRxImmX16	= 150,
    BteqzT8CmpX16	= 151,
    BteqzT8CmpiX16	= 152,
    BteqzT8SltX16	= 153,
    BteqzT8SltiX16	= 154,
    BteqzT8SltiuX16	= 155,
    BteqzT8SltuX16	= 156,
    BteqzX16	= 157,
    BtnezT8CmpX16	= 158,
    BtnezT8CmpiX16	= 159,
    BtnezT8SltX16	= 160,
    BtnezT8SltiX16	= 161,
    BtnezT8SltiuX16	= 162,
    BtnezT8SltuX16	= 163,
    BtnezX16	= 164,
    BuildPairF64	= 165,
    CEIL_L_D64	= 166,
    CEIL_L_S	= 167,
    CEIL_W_D32	= 168,
    CEIL_W_D64	= 169,
    CEIL_W_S	= 170,
    CFC1	= 171,
    CLO	= 172,
    CLZ	= 173,
    CMPGDU_EQ_QB	= 174,
    CMPGDU_LE_QB	= 175,
    CMPGDU_LT_QB	= 176,
    CMPGU_EQ_QB	= 177,
    CMPGU_LE_QB	= 178,
    CMPGU_LT_QB	= 179,
    CMPU_EQ_QB	= 180,
    CMPU_LE_QB	= 181,
    CMPU_LT_QB	= 182,
    CMP_EQ_PH	= 183,
    CMP_LE_PH	= 184,
    CMP_LT_PH	= 185,
    CTC1	= 186,
    CVT_D32_S	= 187,
    CVT_D32_W	= 188,
    CVT_D64_L	= 189,
    CVT_D64_S	= 190,
    CVT_D64_W	= 191,
    CVT_L_D64	= 192,
    CVT_L_S	= 193,
    CVT_S_D32	= 194,
    CVT_S_D64	= 195,
    CVT_S_L	= 196,
    CVT_S_W	= 197,
    CVT_W_D32	= 198,
    CVT_W_D64	= 199,
    CVT_W_S	= 200,
    CmpRxRy16	= 201,
    CmpiRxImm16	= 202,
    CmpiRxImmX16	= 203,
    Constant32	= 204,
    DADD	= 205,
    DADDi	= 206,
    DADDiu	= 207,
    DADDu	= 208,
    DANDi	= 209,
    DCLO	= 210,
    DCLZ	= 211,
    DEXT	= 212,
    DEXTM	= 213,
    DEXTU	= 214,
    DINS	= 215,
    DINSM	= 216,
    DINSU	= 217,
    DMFC0_3OP64	= 218,
    DMFC1	= 219,
    DMFC2_3OP64	= 220,
    DMTC0_3OP64	= 221,
    DMTC1	= 222,
    DMTC2_3OP64	= 223,
    DMULT	= 224,
    DMULTu	= 225,
    DPAQX_SA_W_PH	= 226,
    DPAQX_S_W_PH	= 227,
    DPAQ_SA_L_W	= 228,
    DPAQ_S_W_PH	= 229,
    DPAU_H_QBL	= 230,
    DPAU_H_QBR	= 231,
    DPAX_W_PH	= 232,
    DPA_W_PH	= 233,
    DPSQX_SA_W_PH	= 234,
    DPSQX_S_W_PH	= 235,
    DPSQ_SA_L_W	= 236,
    DPSQ_S_W_PH	= 237,
    DPSU_H_QBL	= 238,
    DPSU_H_QBR	= 239,
    DPSX_W_PH	= 240,
    DPS_W_PH	= 241,
    DROTR	= 242,
    DROTRV	= 243,
    DSBH	= 244,
    DSDIV	= 245,
    DSHD	= 246,
    DSLL	= 247,
    DSLL32	= 248,
    DSLL64_32	= 249,
    DSLLV	= 250,
    DSRA	= 251,
    DSRA32	= 252,
    DSRAV	= 253,
    DSRL	= 254,
    DSRL32	= 255,
    DSRLV	= 256,
    DSUBu	= 257,
    DUDIV	= 258,
    DivRxRy16	= 259,
    DivuRxRy16	= 260,
    EXT	= 261,
    EXTP	= 262,
    EXTPDP	= 263,
    EXTPDPV	= 264,
    EXTPV	= 265,
    EXTRV_RS_W	= 266,
    EXTRV_R_W	= 267,
    EXTRV_S_H	= 268,
    EXTRV_W	= 269,
    EXTR_RS_W	= 270,
    EXTR_R_W	= 271,
    EXTR_S_H	= 272,
    EXTR_W	= 273,
    ExtractElementF64	= 274,
    FABS_D32	= 275,
    FABS_D64	= 276,
    FABS_S	= 277,
    FADD_D32	= 278,
    FADD_D64	= 279,
    FADD_S	= 280,
    FCMP_D32	= 281,
    FCMP_D64	= 282,
    FCMP_S32	= 283,
    FDIV_D32	= 284,
    FDIV_D64	= 285,
    FDIV_S	= 286,
    FLOOR_L_D64	= 287,
    FLOOR_L_S	= 288,
    FLOOR_W_D32	= 289,
    FLOOR_W_D64	= 290,
    FLOOR_W_S	= 291,
    FMOV_D32	= 292,
    FMOV_D64	= 293,
    FMOV_S	= 294,
    FMUL_D32	= 295,
    FMUL_D64	= 296,
    FMUL_S	= 297,
    FNEG_D32	= 298,
    FNEG_D64	= 299,
    FNEG_S	= 300,
    FSQRT_D32	= 301,
    FSQRT_D64	= 302,
    FSQRT_S	= 303,
    FSUB_D32	= 304,
    FSUB_D64	= 305,
    FSUB_S	= 306,
    INS	= 307,
    INSV	= 308,
    J	= 309,
    JAL	= 310,
    JALR	= 311,
    JALR64	= 312,
    JALR64Pseudo	= 313,
    JALRPseudo	= 314,
    JR	= 315,
    JR64	= 316,
    Jal16	= 317,
    JrRa16	= 318,
    JrcRa16	= 319,
    JrcRx16	= 320,
    JumpLinkReg16	= 321,
    LB	= 322,
    LB64	= 323,
    LB64_P8	= 324,
    LBUX	= 325,
    LB_MM	= 326,
    LB_MM_P8	= 327,
    LB_P8	= 328,
    LBu	= 329,
    LBu64	= 330,
    LBu64_P8	= 331,
    LBu_MM	= 332,
    LBu_MM_P8	= 333,
    LBu_P8	= 334,
    LD	= 335,
    LDC1	= 336,
    LDC164	= 337,
    LDC164_P8	= 338,
    LDL	= 339,
    LDL_P8	= 340,
    LDR	= 341,
    LDR_P8	= 342,
    LDXC1	= 343,
    LDXC164	= 344,
    LDXC164_P8	= 345,
    LD_P8	= 346,
    LEA_ADDiu	= 347,
    LEA_ADDiu64	= 348,
    LH	= 349,
    LH64	= 350,
    LH64_P8	= 351,
    LHX	= 352,
    LH_MM	= 353,
    LH_MM_P8	= 354,
    LH_P8	= 355,
    LHu	= 356,
    LHu64	= 357,
    LHu64_P8	= 358,
    LHu_MM	= 359,
    LHu_MM_P8	= 360,
    LHu_P8	= 361,
    LL	= 362,
    LLD	= 363,
    LLD_P8	= 364,
    LL_P8	= 365,
    LOAD_AC128	= 366,
    LOAD_AC128_P8	= 367,
    LOAD_AC64	= 368,
    LOAD_AC64_P8	= 369,
    LOAD_AC_DSP	= 370,
    LOAD_AC_DSP_P8	= 371,
    LOAD_CCOND_DSP	= 372,
    LOAD_CCOND_DSP_P8	= 373,
    LUXC1	= 374,
    LUXC164	= 375,
    LUi	= 376,
    LUi64	= 377,
    LUi_MM	= 378,
    LW	= 379,
    LW64	= 380,
    LW64_P8	= 381,
    LWC1	= 382,
    LWC1_P8	= 383,
    LWL	= 384,
    LWL64	= 385,
    LWL64_P8	= 386,
    LWL_P8	= 387,
    LWR	= 388,
    LWR64	= 389,
    LWR64_P8	= 390,
    LWR_P8	= 391,
    LWX	= 392,
    LWXC1	= 393,
    LWXC1_P8	= 394,
    LW_MM	= 395,
    LW_MM_P8	= 396,
    LW_P8	= 397,
    LWu64	= 398,
    LWu64_P8	= 399,
    LbRxRyOffMemX16	= 400,
    LbuRxRyOffMemX16	= 401,
    LhRxRyOffMemX16	= 402,
    LhuRxRyOffMemX16	= 403,
    LiRxImm16	= 404,
    LiRxImmX16	= 405,
    LoadAddr32Imm	= 406,
    LoadAddr32Reg	= 407,
    LoadImm32Reg	= 408,
    LwConstant32	= 409,
    LwRxRyOffMemX16	= 410,
    LwRxSpImmX16	= 411,
    MADD	= 412,
    MADDU	= 413,
    MADDU_DSP	= 414,
    MADD_D32	= 415,
    MADD_D64	= 416,
    MADD_DSP	= 417,
    MADD_S	= 418,
    MAQ_SA_W_PHL	= 419,
    MAQ_SA_W_PHR	= 420,
    MAQ_S_W_PHL	= 421,
    MAQ_S_W_PHR	= 422,
    MFC0_3OP	= 423,
    MFC1	= 424,
    MFC2_3OP	= 425,
    MFHI	= 426,
    MFHI64	= 427,
    MFHI_DSP	= 428,
    MFLO	= 429,
    MFLO64	= 430,
    MFLO_DSP	= 431,
    MIPSeh_return32	= 432,
    MIPSeh_return64	= 433,
    MODSUB	= 434,
    MOVCCRToCCR	= 435,
    MOVF_D32	= 436,
    MOVF_D64	= 437,
    MOVF_I	= 438,
    MOVF_I64	= 439,
    MOVF_S	= 440,
    MOVN_I64_D64	= 441,
    MOVN_I64_I	= 442,
    MOVN_I64_I64	= 443,
    MOVN_I64_S	= 444,
    MOVN_I_D32	= 445,
    MOVN_I_D64	= 446,
    MOVN_I_I	= 447,
    MOVN_I_I64	= 448,
    MOVN_I_S	= 449,
    MOVT_D32	= 450,
    MOVT_D64	= 451,
    MOVT_I	= 452,
    MOVT_I64	= 453,
    MOVT_S	= 454,
    MOVZ_I64_D64	= 455,
    MOVZ_I64_I	= 456,
    MOVZ_I64_I64	= 457,
    MOVZ_I64_S	= 458,
    MOVZ_I_D32	= 459,
    MOVZ_I_D64	= 460,
    MOVZ_I_I	= 461,
    MOVZ_I_I64	= 462,
    MOVZ_I_S	= 463,
    MSUB	= 464,
    MSUBU	= 465,
    MSUBU_DSP	= 466,
    MSUB_D32	= 467,
    MSUB_D64	= 468,
    MSUB_DSP	= 469,
    MSUB_S	= 470,
    MTC0_3OP	= 471,
    MTC1	= 472,
    MTC2_3OP	= 473,
    MTHI	= 474,
    MTHI64	= 475,
    MTHI_DSP	= 476,
    MTHLIP	= 477,
    MTLO	= 478,
    MTLO64	= 479,
    MTLO_DSP	= 480,
    MUL	= 481,
    MULEQ_S_W_PHL	= 482,
    MULEQ_S_W_PHR	= 483,
    MULEU_S_PH_QBL	= 484,
    MULEU_S_PH_QBR	= 485,
    MULQ_RS_PH	= 486,
    MULQ_RS_W	= 487,
    MULQ_S_PH	= 488,
    MULQ_S_W	= 489,
    MULSAQ_S_W_PH	= 490,
    MULSA_W_PH	= 491,
    MULT	= 492,
    MULTU_DSP	= 493,
    MULT_DSP	= 494,
    MULT_MM	= 495,
    MULTu	= 496,
    MULTu_MM	= 497,
    MUL_MM	= 498,
    MUL_PH	= 499,
    MUL_S_PH	= 500,
    Mfhi16	= 501,
    Mflo16	= 502,
    Move32R16	= 503,
    MoveR3216	= 504,
    MultRxRy16	= 505,
    MultRxRyRz16	= 506,
    MultuRxRy16	= 507,
    MultuRxRyRz16	= 508,
    NMADD_D32	= 509,
    NMADD_D64	= 510,
    NMADD_S	= 511,
    NMSUB_D32	= 512,
    NMSUB_D64	= 513,
    NMSUB_S	= 514,
    NOP	= 515,
    NOR	= 516,
    NOR64	= 517,
    NOR_MM	= 518,
    NegRxRy16	= 519,
    NotRxRy16	= 520,
    OR	= 521,
    OR64	= 522,
    OR_MM	= 523,
    ORi	= 524,
    ORi64	= 525,
    ORi_MM	= 526,
    OrRxRxRy16	= 527,
    PACKRL_PH	= 528,
    PICK_PH	= 529,
    PICK_QB	= 530,
    PRECEQU_PH_QBL	= 531,
    PRECEQU_PH_QBLA	= 532,
    PRECEQU_PH_QBR	= 533,
    PRECEQU_PH_QBRA	= 534,
    PRECEQ_W_PHL	= 535,
    PRECEQ_W_PHR	= 536,
    PRECEU_PH_QBL	= 537,
    PRECEU_PH_QBLA	= 538,
    PRECEU_PH_QBR	= 539,
    PRECEU_PH_QBRA	= 540,
    PRECRQU_S_QB_PH	= 541,
    PRECRQ_PH_W	= 542,
    PRECRQ_QB_PH	= 543,
    PRECRQ_RS_PH_W	= 544,
    PRECR_QB_PH	= 545,
    PRECR_SRA_PH_W	= 546,
    PRECR_SRA_R_PH_W	= 547,
    PREPEND	= 548,
    PseudoCMPU_EQ_QB	= 549,
    PseudoCMPU_LE_QB	= 550,
    PseudoCMPU_LT_QB	= 551,
    PseudoCMP_EQ_PH	= 552,
    PseudoCMP_LE_PH	= 553,
    PseudoCMP_LT_PH	= 554,
    PseudoDMULT	= 555,
    PseudoDMULTu	= 556,
    PseudoDSDIV	= 557,
    PseudoDUDIV	= 558,
    PseudoMADD	= 559,
    PseudoMADDU	= 560,
    PseudoMSUB	= 561,
    PseudoMSUBU	= 562,
    PseudoMULT	= 563,
    PseudoMULTu	= 564,
    PseudoPICK_PH	= 565,
    PseudoPICK_QB	= 566,
    PseudoSDIV	= 567,
    PseudoUDIV	= 568,
    RADDU_W_QB	= 569,
    RDDSP	= 570,
    RDHWR	= 571,
    RDHWR64	= 572,
    REPLV_PH	= 573,
    REPLV_QB	= 574,
    REPL_PH	= 575,
    REPL_QB	= 576,
    RET	= 577,
    ROTR	= 578,
    ROTRV	= 579,
    ROTRV_MM	= 580,
    ROTR_MM	= 581,
    ROUND_L_D64	= 582,
    ROUND_L_S	= 583,
    ROUND_W_D32	= 584,
    ROUND_W_D64	= 585,
    ROUND_W_S	= 586,
    RestoreIncSpF16	= 587,
    RestoreRaF16	= 588,
    RetRA	= 589,
    RetRA16	= 590,
    SB	= 591,
    SB64	= 592,
    SB64_P8	= 593,
    SB_MM	= 594,
    SB_MM_P8	= 595,
    SB_P8	= 596,
    SC	= 597,
    SCD	= 598,
    SCD_P8	= 599,
    SC_P8	= 600,
    SD	= 601,
    SDC1	= 602,
    SDC164	= 603,
    SDC164_P8	= 604,
    SDIV	= 605,
    SDL	= 606,
    SDL_P8	= 607,
    SDR	= 608,
    SDR_P8	= 609,
    SDXC1	= 610,
    SDXC164	= 611,
    SDXC164_P8	= 612,
    SD_P8	= 613,
    SEB	= 614,
    SEB64	= 615,
    SEH	= 616,
    SEH64	= 617,
    SH	= 618,
    SH64	= 619,
    SH64_P8	= 620,
    SHILO	= 621,
    SHILOV	= 622,
    SHLLV_PH	= 623,
    SHLLV_QB	= 624,
    SHLLV_S_PH	= 625,
    SHLLV_S_W	= 626,
    SHLL_PH	= 627,
    SHLL_QB	= 628,
    SHLL_S_PH	= 629,
    SHLL_S_W	= 630,
    SHRAV_PH	= 631,
    SHRAV_QB	= 632,
    SHRAV_R_PH	= 633,
    SHRAV_R_QB	= 634,
    SHRAV_R_W	= 635,
    SHRA_PH	= 636,
    SHRA_QB	= 637,
    SHRA_R_PH	= 638,
    SHRA_R_QB	= 639,
    SHRA_R_W	= 640,
    SHRLV_PH	= 641,
    SHRLV_QB	= 642,
    SHRL_PH	= 643,
    SHRL_QB	= 644,
    SH_MM	= 645,
    SH_MM_P8	= 646,
    SH_P8	= 647,
    SLL	= 648,
    SLL64_32	= 649,
    SLL64_64	= 650,
    SLLV	= 651,
    SLLV_MM	= 652,
    SLL_MM	= 653,
    SLT	= 654,
    SLT64	= 655,
    SLT_MM	= 656,
    SLTi	= 657,
    SLTi64	= 658,
    SLTi_MM	= 659,
    SLTiu	= 660,
    SLTiu64	= 661,
    SLTiu_MM	= 662,
    SLTu	= 663,
    SLTu64	= 664,
    SLTu_MM	= 665,
    SRA	= 666,
    SRAV	= 667,
    SRAV_MM	= 668,
    SRA_MM	= 669,
    SRL	= 670,
    SRLV	= 671,
    SRLV_MM	= 672,
    SRL_MM	= 673,
    STORE_AC128	= 674,
    STORE_AC128_P8	= 675,
    STORE_AC64	= 676,
    STORE_AC64_P8	= 677,
    STORE_AC_DSP	= 678,
    STORE_AC_DSP_P8	= 679,
    STORE_CCOND_DSP	= 680,
    STORE_CCOND_DSP_P8	= 681,
    SUB	= 682,
    SUBQH_PH	= 683,
    SUBQH_R_PH	= 684,
    SUBQH_R_W	= 685,
    SUBQH_W	= 686,
    SUBQ_PH	= 687,
    SUBQ_S_PH	= 688,
    SUBQ_S_W	= 689,
    SUBUH_QB	= 690,
    SUBUH_R_QB	= 691,
    SUBU_PH	= 692,
    SUBU_QB	= 693,
    SUBU_S_PH	= 694,
    SUBU_S_QB	= 695,
    SUB_MM	= 696,
    SUBu	= 697,
    SUBu_MM	= 698,
    SUXC1	= 699,
    SUXC164	= 700,
    SW	= 701,
    SW64	= 702,
    SW64_P8	= 703,
    SWC1	= 704,
    SWC1_P8	= 705,
    SWL	= 706,
    SWL64	= 707,
    SWL64_P8	= 708,
    SWL_P8	= 709,
    SWR	= 710,
    SWR64	= 711,
    SWR64_P8	= 712,
    SWR_P8	= 713,
    SWXC1	= 714,
    SWXC1_P8	= 715,
    SW_MM	= 716,
    SW_MM_P8	= 717,
    SW_P8	= 718,
    SYNC	= 719,
    SaveDecSpF16	= 720,
    SaveRaF16	= 721,
    SbRxRyOffMemX16	= 722,
    SelBeqZ	= 723,
    SelBneZ	= 724,
    SelTBteqZCmp	= 725,
    SelTBteqZCmpi	= 726,
    SelTBteqZSlt	= 727,
    SelTBteqZSlti	= 728,
    SelTBteqZSltiu	= 729,
    SelTBteqZSltu	= 730,
    SelTBtneZCmp	= 731,
    SelTBtneZCmpi	= 732,
    SelTBtneZSlt	= 733,
    SelTBtneZSlti	= 734,
    SelTBtneZSltiu	= 735,
    SelTBtneZSltu	= 736,
    ShRxRyOffMemX16	= 737,
    SllX16	= 738,
    SllvRxRy16	= 739,
    SltCCRxRy16	= 740,
    SltRxRy16	= 741,
    SltiCCRxImmX16	= 742,
    SltiRxImm16	= 743,
    SltiRxImmX16	= 744,
    SltiuCCRxImmX16	= 745,
    SltiuRxImm16	= 746,
    SltiuRxImmX16	= 747,
    SltuCCRxRy16	= 748,
    SltuRxRy16	= 749,
    SltuRxRyRz16	= 750,
    SraX16	= 751,
    SravRxRy16	= 752,
    SrlX16	= 753,
    SrlvRxRy16	= 754,
    SubuRxRyRz16	= 755,
    SwRxRyOffMemX16	= 756,
    SwRxSpImmX16	= 757,
    TAILCALL	= 758,
    TAILCALL64_R	= 759,
    TAILCALL_R	= 760,
    TRUNC_L_D64	= 761,
    TRUNC_L_S	= 762,
    TRUNC_W_D32	= 763,
    TRUNC_W_D64	= 764,
    TRUNC_W_S	= 765,
    UDIV	= 766,
    WRDSP	= 767,
    WSBH	= 768,
    XOR	= 769,
    XOR64	= 770,
    XOR_MM	= 771,
    XORi	= 772,
    XORi64	= 773,
    XORi_MM	= 774,
    XorRxRxRy16	= 775,
    INSTRUCTION_LIST_END = 776
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

static const uint16_t ImplicitList1[] = { Mips::DSPOutFlag20, 0 };
static const uint16_t ImplicitList2[] = { Mips::DSPCarry, 0 };
static const uint16_t ImplicitList3[] = { Mips::SP, 0 };
static const uint16_t ImplicitList4[] = { Mips::AT, 0 };
static const uint16_t ImplicitList5[] = { Mips::RA, 0 };
static const uint16_t ImplicitList6[] = { Mips::FCR31, 0 };
static const uint16_t ImplicitList7[] = { Mips::DSPPos, 0 };
static const uint16_t ImplicitList8[] = { Mips::T8, 0 };
static const uint16_t ImplicitList9[] = { Mips::DSPCCond, 0 };
static const uint16_t ImplicitList10[] = { Mips::HI64, Mips::LO64, 0 };
static const uint16_t ImplicitList11[] = { Mips::DSPOutFlag16_19, 0 };
static const uint16_t ImplicitList12[] = { Mips::HI, Mips::LO, 0 };
static const uint16_t ImplicitList13[] = { Mips::DSPEFI, 0 };
static const uint16_t ImplicitList14[] = { Mips::DSPPos, Mips::DSPEFI, 0 };
static const uint16_t ImplicitList15[] = { Mips::DSPOutFlag23, 0 };
static const uint16_t ImplicitList16[] = { Mips::DSPPos, Mips::DSPSCount, 0 };
static const uint16_t ImplicitList17[] = { Mips::HI, 0 };
static const uint16_t ImplicitList18[] = { Mips::HI64, 0 };
static const uint16_t ImplicitList19[] = { Mips::LO, 0 };
static const uint16_t ImplicitList20[] = { Mips::LO64, 0 };
static const uint16_t ImplicitList21[] = { Mips::V0, Mips::V1, 0 };
static const uint16_t ImplicitList22[] = { Mips::DSPOutFlag21, 0 };
static const uint16_t ImplicitList23[] = { Mips::DSPOutFlag22, 0 };
static const uint16_t ImplicitList24[] = { Mips::S0, Mips::S1, Mips::RA, Mips::SP, 0 };
static const uint16_t ImplicitList25[] = { Mips::RA, Mips::SP, Mips::S0, Mips::S1, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo17[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CCRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { Mips::CCRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo55[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { Mips::ACRegsDSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACRegsDSPRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo59[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACRegsDSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACRegsDSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo73[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo85[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo86[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { Mips::ACRegs128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { Mips::ACRegs128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { Mips::ACRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { Mips::ACRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { Mips::ACRegsDSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { Mips::ACRegsDSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo105[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo106[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPUSPRegRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::HIRegsDSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::LORegsDSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { Mips::CCRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CCRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo119[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo120[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo121[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo122[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo123[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo124[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo125[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo126[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo127[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo128[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo129[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo130[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo131[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo132[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo134[] = { { Mips::HIRegsDSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { Mips::ACRegsDSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACRegsDSPRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo136[] = { { Mips::LORegsDSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo137[] = { { Mips::ACRegsDSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo138[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo139[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo140[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo141[] = { { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo142[] = { { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo143[] = { { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo144[] = { { Mips::ACRegs128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo145[] = { { Mips::ACRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo146[] = { { Mips::ACRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo147[] = { { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo148[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo149[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::HWRegs64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo150[] = { { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo151[] = { { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo152[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo153[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo154[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo155[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo156[] = { { Mips::ACRegsDSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACRegsDSPRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo157[] = { { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo158[] = { { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo159[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo160[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo161[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo162[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo163[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo164[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo165[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo166[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo167[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc MipsInsts[] = {
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
  { 17,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #17 = ABSQ_S_PH
  { 18,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #18 = ABSQ_S_QB
  { 19,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #19 = ABSQ_S_W
  { 20,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #20 = ADD
  { 21,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #21 = ADDQH_PH
  { 22,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #22 = ADDQH_R_PH
  { 23,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #23 = ADDQH_R_W
  { 24,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #24 = ADDQH_W
  { 25,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #25 = ADDQ_PH
  { 26,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #26 = ADDQ_S_PH
  { 27,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #27 = ADDQ_S_W
  { 28,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList2, OperandInfo12 },  // Inst #28 = ADDSC
  { 29,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #29 = ADDUH_QB
  { 30,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #30 = ADDUH_R_QB
  { 31,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #31 = ADDU_PH
  { 32,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #32 = ADDU_QB
  { 33,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #33 = ADDU_S_PH
  { 34,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #34 = ADDU_S_QB
  { 35,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList2, ImplicitList1, OperandInfo12 },  // Inst #35 = ADDWC
  { 36,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #36 = ADD_MM
  { 37,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo13 },  // Inst #37 = ADDi
  { 38,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo13 },  // Inst #38 = ADDi_MM
  { 39,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, NULL, NULL, OperandInfo13 },  // Inst #39 = ADDiu
  { 40,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo13 },  // Inst #40 = ADDiu_MM
  { 41,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #41 = ADDu
  { 42,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #42 = ADDu_MM
  { 43,	1,	0,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo2 },  // Inst #43 = ADJCALLSTACKDOWN
  { 44,	2,	0,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo14 },  // Inst #44 = ADJCALLSTACKUP
  { 45,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #45 = AND
  { 46,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo15 },  // Inst #46 = AND64
  { 47,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #47 = AND_MM
  { 48,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo13 },  // Inst #48 = ANDi
  { 49,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo13 },  // Inst #49 = ANDi_MM
  { 50,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #50 = APPEND
  { 51,	4,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo17 },  // Inst #51 = ATOMIC_CMP_SWAP_I16
  { 52,	4,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #52 = ATOMIC_CMP_SWAP_I16_P8
  { 53,	4,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo17 },  // Inst #53 = ATOMIC_CMP_SWAP_I32
  { 54,	4,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #54 = ATOMIC_CMP_SWAP_I32_P8
  { 55,	4,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #55 = ATOMIC_CMP_SWAP_I64
  { 56,	4,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #56 = ATOMIC_CMP_SWAP_I64_P8
  { 57,	4,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo17 },  // Inst #57 = ATOMIC_CMP_SWAP_I8
  { 58,	4,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #58 = ATOMIC_CMP_SWAP_I8_P8
  { 59,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #59 = ATOMIC_LOAD_ADD_I16
  { 60,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #60 = ATOMIC_LOAD_ADD_I16_P8
  { 61,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #61 = ATOMIC_LOAD_ADD_I32
  { 62,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #62 = ATOMIC_LOAD_ADD_I32_P8
  { 63,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #63 = ATOMIC_LOAD_ADD_I64
  { 64,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #64 = ATOMIC_LOAD_ADD_I64_P8
  { 65,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #65 = ATOMIC_LOAD_ADD_I8
  { 66,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #66 = ATOMIC_LOAD_ADD_I8_P8
  { 67,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #67 = ATOMIC_LOAD_AND_I16
  { 68,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #68 = ATOMIC_LOAD_AND_I16_P8
  { 69,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #69 = ATOMIC_LOAD_AND_I32
  { 70,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #70 = ATOMIC_LOAD_AND_I32_P8
  { 71,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #71 = ATOMIC_LOAD_AND_I64
  { 72,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #72 = ATOMIC_LOAD_AND_I64_P8
  { 73,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #73 = ATOMIC_LOAD_AND_I8
  { 74,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #74 = ATOMIC_LOAD_AND_I8_P8
  { 75,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #75 = ATOMIC_LOAD_NAND_I16
  { 76,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #76 = ATOMIC_LOAD_NAND_I16_P8
  { 77,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #77 = ATOMIC_LOAD_NAND_I32
  { 78,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #78 = ATOMIC_LOAD_NAND_I32_P8
  { 79,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #79 = ATOMIC_LOAD_NAND_I64
  { 80,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #80 = ATOMIC_LOAD_NAND_I64_P8
  { 81,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #81 = ATOMIC_LOAD_NAND_I8
  { 82,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #82 = ATOMIC_LOAD_NAND_I8_P8
  { 83,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #83 = ATOMIC_LOAD_OR_I16
  { 84,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #84 = ATOMIC_LOAD_OR_I16_P8
  { 85,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #85 = ATOMIC_LOAD_OR_I32
  { 86,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #86 = ATOMIC_LOAD_OR_I32_P8
  { 87,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #87 = ATOMIC_LOAD_OR_I64
  { 88,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #88 = ATOMIC_LOAD_OR_I64_P8
  { 89,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #89 = ATOMIC_LOAD_OR_I8
  { 90,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #90 = ATOMIC_LOAD_OR_I8_P8
  { 91,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #91 = ATOMIC_LOAD_SUB_I16
  { 92,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #92 = ATOMIC_LOAD_SUB_I16_P8
  { 93,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #93 = ATOMIC_LOAD_SUB_I32
  { 94,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #94 = ATOMIC_LOAD_SUB_I32_P8
  { 95,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #95 = ATOMIC_LOAD_SUB_I64
  { 96,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #96 = ATOMIC_LOAD_SUB_I64_P8
  { 97,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #97 = ATOMIC_LOAD_SUB_I8
  { 98,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #98 = ATOMIC_LOAD_SUB_I8_P8
  { 99,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #99 = ATOMIC_LOAD_XOR_I16
  { 100,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #100 = ATOMIC_LOAD_XOR_I16_P8
  { 101,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #101 = ATOMIC_LOAD_XOR_I32
  { 102,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #102 = ATOMIC_LOAD_XOR_I32_P8
  { 103,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #103 = ATOMIC_LOAD_XOR_I64
  { 104,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #104 = ATOMIC_LOAD_XOR_I64_P8
  { 105,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #105 = ATOMIC_LOAD_XOR_I8
  { 106,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #106 = ATOMIC_LOAD_XOR_I8_P8
  { 107,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #107 = ATOMIC_SWAP_I16
  { 108,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #108 = ATOMIC_SWAP_I16_P8
  { 109,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #109 = ATOMIC_SWAP_I32
  { 110,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #110 = ATOMIC_SWAP_I32_P8
  { 111,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #111 = ATOMIC_SWAP_I64
  { 112,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #112 = ATOMIC_SWAP_I64_P8
  { 113,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #113 = ATOMIC_SWAP_I8
  { 114,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #114 = ATOMIC_SWAP_I8_P8
  { 115,	2,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #115 = AddiuRxImmX16
  { 116,	2,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #116 = AddiuRxPcImmX16
  { 117,	3,	1,	1,	2,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #117 = AddiuRxRxImm16
  { 118,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #118 = AddiuRxRxImmX16
  { 119,	3,	1,	1,	4,	0, 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #119 = AddiuRxRyOffMemX16
  { 120,	1,	0,	1,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo5 },  // Inst #120 = AddiuSpImm16
  { 121,	1,	0,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo5 },  // Inst #121 = AddiuSpImmX16
  { 122,	3,	1,	1,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #122 = AdduRxRyRz16
  { 123,	3,	1,	1,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #123 = AndRxRxRy16
  { 124,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList4, OperandInfo29 },  // Inst #124 = B
  { 125,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #125 = BALIGN
  { 126,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, ImplicitList5, OperandInfo29 },  // Inst #126 = BAL_BR
  { 127,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x5ULL, ImplicitList6, ImplicitList4, OperandInfo29 },  // Inst #127 = BC1F
  { 128,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x5ULL, ImplicitList6, ImplicitList4, OperandInfo29 },  // Inst #128 = BC1T
  { 129,	3,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList4, OperandInfo30 },  // Inst #129 = BEQ
  { 130,	3,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList4, OperandInfo31 },  // Inst #130 = BEQ64
  { 131,	2,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList4, OperandInfo32 },  // Inst #131 = BGEZ
  { 132,	2,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList4, OperandInfo33 },  // Inst #132 = BGEZ64
  { 133,	2,	0,	3,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, ImplicitList5, OperandInfo34 },  // Inst #133 = BGEZAL
  { 134,	2,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList4, OperandInfo32 },  // Inst #134 = BGTZ
  { 135,	2,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList4, OperandInfo33 },  // Inst #135 = BGTZ64
  { 136,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo9 },  // Inst #136 = BITREV
  { 137,	2,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList4, OperandInfo32 },  // Inst #137 = BLEZ
  { 138,	2,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList4, OperandInfo33 },  // Inst #138 = BLEZ64
  { 139,	2,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList4, OperandInfo32 },  // Inst #139 = BLTZ
  { 140,	2,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList4, OperandInfo33 },  // Inst #140 = BLTZ64
  { 141,	2,	0,	3,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, ImplicitList5, OperandInfo34 },  // Inst #141 = BLTZAL
  { 142,	3,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList4, OperandInfo30 },  // Inst #142 = BNE
  { 143,	3,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList4, OperandInfo31 },  // Inst #143 = BNE64
  { 144,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo29 },  // Inst #144 = BPOSGE32
  { 145,	1,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList7, NULL, OperandInfo35 },  // Inst #145 = BPOSGE32_PSEUDO
  { 146,	2,	0,	1,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #146 = BeqzRxImm16
  { 147,	2,	0,	1,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #147 = BeqzRxImmX16
  { 148,	1,	0,	1,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #148 = BimmX16
  { 149,	2,	0,	1,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #149 = BnezRxImm16
  { 150,	2,	0,	1,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #150 = BnezRxImmX16
  { 151,	3,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo37 },  // Inst #151 = BteqzT8CmpX16
  { 152,	3,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo38 },  // Inst #152 = BteqzT8CmpiX16
  { 153,	3,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo37 },  // Inst #153 = BteqzT8SltX16
  { 154,	3,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo38 },  // Inst #154 = BteqzT8SltiX16
  { 155,	3,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo38 },  // Inst #155 = BteqzT8SltiuX16
  { 156,	3,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo37 },  // Inst #156 = BteqzT8SltuX16
  { 157,	1,	0,	1,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList8, NULL, OperandInfo5 },  // Inst #157 = BteqzX16
  { 158,	3,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo37 },  // Inst #158 = BtnezT8CmpX16
  { 159,	3,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo38 },  // Inst #159 = BtnezT8CmpiX16
  { 160,	3,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo37 },  // Inst #160 = BtnezT8SltX16
  { 161,	3,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo38 },  // Inst #161 = BtnezT8SltiX16
  { 162,	3,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo38 },  // Inst #162 = BtnezT8SltiuX16
  { 163,	3,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo37 },  // Inst #163 = BtnezT8SltuX16
  { 164,	1,	0,	1,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList8, NULL, OperandInfo5 },  // Inst #164 = BtnezX16
  { 165,	3,	1,	2,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo39 },  // Inst #165 = BuildPairF64
  { 166,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #166 = CEIL_L_D64
  { 167,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo41 },  // Inst #167 = CEIL_L_S
  { 168,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo42 },  // Inst #168 = CEIL_W_D32
  { 169,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo43 },  // Inst #169 = CEIL_W_D64
  { 170,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo44 },  // Inst #170 = CEIL_W_S
  { 171,	2,	1,	5,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo45 },  // Inst #171 = CFC1
  { 172,	2,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo46 },  // Inst #172 = CLO
  { 173,	2,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo46 },  // Inst #173 = CLZ
  { 174,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList9, OperandInfo47 },  // Inst #174 = CMPGDU_EQ_QB
  { 175,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList9, OperandInfo47 },  // Inst #175 = CMPGDU_LE_QB
  { 176,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList9, OperandInfo47 },  // Inst #176 = CMPGDU_LT_QB
  { 177,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo47 },  // Inst #177 = CMPGU_EQ_QB
  { 178,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo47 },  // Inst #178 = CMPGU_LE_QB
  { 179,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo47 },  // Inst #179 = CMPGU_LT_QB
  { 180,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList9, OperandInfo8 },  // Inst #180 = CMPU_EQ_QB
  { 181,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList9, OperandInfo8 },  // Inst #181 = CMPU_LE_QB
  { 182,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList9, OperandInfo8 },  // Inst #182 = CMPU_LT_QB
  { 183,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList9, OperandInfo8 },  // Inst #183 = CMP_EQ_PH
  { 184,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList9, OperandInfo8 },  // Inst #184 = CMP_LE_PH
  { 185,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList9, OperandInfo8 },  // Inst #185 = CMP_LT_PH
  { 186,	2,	1,	5,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo48 },  // Inst #186 = CTC1
  { 187,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo49 },  // Inst #187 = CVT_D32_S
  { 188,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo49 },  // Inst #188 = CVT_D32_W
  { 189,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #189 = CVT_D64_L
  { 190,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo41 },  // Inst #190 = CVT_D64_S
  { 191,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo41 },  // Inst #191 = CVT_D64_W
  { 192,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #192 = CVT_L_D64
  { 193,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo41 },  // Inst #193 = CVT_L_S
  { 194,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo42 },  // Inst #194 = CVT_S_D32
  { 195,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo43 },  // Inst #195 = CVT_S_D64
  { 196,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo43 },  // Inst #196 = CVT_S_L
  { 197,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo44 },  // Inst #197 = CVT_S_W
  { 198,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo42 },  // Inst #198 = CVT_W_D32
  { 199,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo43 },  // Inst #199 = CVT_W_D64
  { 200,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo44 },  // Inst #200 = CVT_W_S
  { 201,	2,	0,	1,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList8, OperandInfo50 },  // Inst #201 = CmpRxRy16
  { 202,	2,	0,	1,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList8, OperandInfo24 },  // Inst #202 = CmpiRxImm16
  { 203,	2,	0,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList8, OperandInfo24 },  // Inst #203 = CmpiRxImmX16
  { 204,	1,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #204 = Constant32
  { 205,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo15 },  // Inst #205 = DADD
  { 206,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo51 },  // Inst #206 = DADDi
  { 207,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, NULL, NULL, OperandInfo51 },  // Inst #207 = DADDiu
  { 208,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo15 },  // Inst #208 = DADDu
  { 209,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo51 },  // Inst #209 = DANDi
  { 210,	2,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo52 },  // Inst #210 = DCLO
  { 211,	2,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo52 },  // Inst #211 = DCLZ
  { 212,	4,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo53 },  // Inst #212 = DEXT
  { 213,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo53 },  // Inst #213 = DEXTM
  { 214,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo53 },  // Inst #214 = DEXTU
  { 215,	5,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo54 },  // Inst #215 = DINS
  { 216,	5,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo54 },  // Inst #216 = DINSM
  { 217,	5,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo54 },  // Inst #217 = DINSU
  { 218,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo51 },  // Inst #218 = DMFC0_3OP64
  { 219,	2,	1,	5,	4,	0|(1<<MCID::Bitcast), 0x4ULL, NULL, NULL, OperandInfo55 },  // Inst #219 = DMFC1
  { 220,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo51 },  // Inst #220 = DMFC2_3OP64
  { 221,	3,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo56 },  // Inst #221 = DMTC0_3OP64
  { 222,	2,	1,	5,	4,	0|(1<<MCID::Bitcast), 0x4ULL, NULL, NULL, OperandInfo57 },  // Inst #222 = DMTC1
  { 223,	3,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo56 },  // Inst #223 = DMTC2_3OP64
  { 224,	2,	0,	6,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, ImplicitList10, OperandInfo52 },  // Inst #224 = DMULT
  { 225,	2,	0,	6,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, ImplicitList10, OperandInfo52 },  // Inst #225 = DMULTu
  { 226,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList11, OperandInfo58 },  // Inst #226 = DPAQX_SA_W_PH
  { 227,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList11, OperandInfo58 },  // Inst #227 = DPAQX_S_W_PH
  { 228,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList11, OperandInfo58 },  // Inst #228 = DPAQ_SA_L_W
  { 229,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList11, OperandInfo58 },  // Inst #229 = DPAQ_S_W_PH
  { 230,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo58 },  // Inst #230 = DPAU_H_QBL
  { 231,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo58 },  // Inst #231 = DPAU_H_QBR
  { 232,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo58 },  // Inst #232 = DPAX_W_PH
  { 233,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo58 },  // Inst #233 = DPA_W_PH
  { 234,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList11, OperandInfo58 },  // Inst #234 = DPSQX_SA_W_PH
  { 235,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList11, OperandInfo58 },  // Inst #235 = DPSQX_S_W_PH
  { 236,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList11, OperandInfo58 },  // Inst #236 = DPSQ_SA_L_W
  { 237,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList11, OperandInfo58 },  // Inst #237 = DPSQ_S_W_PH
  { 238,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo58 },  // Inst #238 = DPSU_H_QBL
  { 239,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo58 },  // Inst #239 = DPSU_H_QBR
  { 240,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo58 },  // Inst #240 = DPSX_W_PH
  { 241,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo58 },  // Inst #241 = DPS_W_PH
  { 242,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo51 },  // Inst #242 = DROTR
  { 243,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo59 },  // Inst #243 = DROTRV
  { 244,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo52 },  // Inst #244 = DSBH
  { 245,	2,	0,	7,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, ImplicitList10, OperandInfo52 },  // Inst #245 = DSDIV
  { 246,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo52 },  // Inst #246 = DSHD
  { 247,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo51 },  // Inst #247 = DSLL
  { 248,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo51 },  // Inst #248 = DSLL32
  { 249,	2,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo60 },  // Inst #249 = DSLL64_32
  { 250,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo59 },  // Inst #250 = DSLLV
  { 251,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo51 },  // Inst #251 = DSRA
  { 252,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo51 },  // Inst #252 = DSRA32
  { 253,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo59 },  // Inst #253 = DSRAV
  { 254,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo51 },  // Inst #254 = DSRL
  { 255,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo51 },  // Inst #255 = DSRL32
  { 256,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo59 },  // Inst #256 = DSRLV
  { 257,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo15 },  // Inst #257 = DSUBu
  { 258,	2,	0,	7,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, ImplicitList10, OperandInfo52 },  // Inst #258 = DUDIV
  { 259,	2,	0,	1,	2,	0, 0x0ULL, NULL, ImplicitList12, OperandInfo50 },  // Inst #259 = DivRxRy16
  { 260,	2,	0,	1,	2,	0, 0x0ULL, NULL, ImplicitList12, OperandInfo50 },  // Inst #260 = DivuRxRy16
  { 261,	4,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo61 },  // Inst #261 = EXT
  { 262,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList7, ImplicitList13, OperandInfo62 },  // Inst #262 = EXTP
  { 263,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList7, ImplicitList14, OperandInfo62 },  // Inst #263 = EXTPDP
  { 264,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList7, ImplicitList14, OperandInfo63 },  // Inst #264 = EXTPDPV
  { 265,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList7, ImplicitList13, OperandInfo63 },  // Inst #265 = EXTPV
  { 266,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList15, OperandInfo63 },  // Inst #266 = EXTRV_RS_W
  { 267,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList15, OperandInfo63 },  // Inst #267 = EXTRV_R_W
  { 268,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList15, OperandInfo63 },  // Inst #268 = EXTRV_S_H
  { 269,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList15, OperandInfo63 },  // Inst #269 = EXTRV_W
  { 270,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList15, OperandInfo62 },  // Inst #270 = EXTR_RS_W
  { 271,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList15, OperandInfo62 },  // Inst #271 = EXTR_R_W
  { 272,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList15, OperandInfo62 },  // Inst #272 = EXTR_S_H
  { 273,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList15, OperandInfo62 },  // Inst #273 = EXTR_W
  { 274,	3,	1,	2,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo64 },  // Inst #274 = ExtractElementF64
  { 275,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo65 },  // Inst #275 = FABS_D32
  { 276,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #276 = FABS_D64
  { 277,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo44 },  // Inst #277 = FABS_S
  { 278,	3,	1,	8,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo66 },  // Inst #278 = FADD_D32
  { 279,	3,	1,	8,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo67 },  // Inst #279 = FADD_D64
  { 280,	3,	1,	8,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo68 },  // Inst #280 = FADD_S
  { 281,	3,	0,	9,	4,	0, 0x4ULL, NULL, ImplicitList6, OperandInfo69 },  // Inst #281 = FCMP_D32
  { 282,	3,	0,	9,	4,	0, 0x4ULL, NULL, ImplicitList6, OperandInfo70 },  // Inst #282 = FCMP_D64
  { 283,	3,	0,	9,	4,	0, 0x4ULL, NULL, ImplicitList6, OperandInfo71 },  // Inst #283 = FCMP_S32
  { 284,	3,	1,	10,	4,	0, 0x4ULL, NULL, NULL, OperandInfo66 },  // Inst #284 = FDIV_D32
  { 285,	3,	1,	10,	4,	0, 0x4ULL, NULL, NULL, OperandInfo67 },  // Inst #285 = FDIV_D64
  { 286,	3,	1,	11,	4,	0, 0x4ULL, NULL, NULL, OperandInfo68 },  // Inst #286 = FDIV_S
  { 287,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #287 = FLOOR_L_D64
  { 288,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo41 },  // Inst #288 = FLOOR_L_S
  { 289,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo42 },  // Inst #289 = FLOOR_W_D32
  { 290,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo43 },  // Inst #290 = FLOOR_W_D64
  { 291,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo44 },  // Inst #291 = FLOOR_W_S
  { 292,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo65 },  // Inst #292 = FMOV_D32
  { 293,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #293 = FMOV_D64
  { 294,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo44 },  // Inst #294 = FMOV_S
  { 295,	3,	1,	12,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo66 },  // Inst #295 = FMUL_D32
  { 296,	3,	1,	12,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo67 },  // Inst #296 = FMUL_D64
  { 297,	3,	1,	13,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo68 },  // Inst #297 = FMUL_S
  { 298,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo65 },  // Inst #298 = FNEG_D32
  { 299,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #299 = FNEG_D64
  { 300,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo44 },  // Inst #300 = FNEG_S
  { 301,	2,	1,	14,	4,	0, 0x4ULL, NULL, NULL, OperandInfo65 },  // Inst #301 = FSQRT_D32
  { 302,	2,	1,	14,	4,	0, 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #302 = FSQRT_D64
  { 303,	2,	1,	15,	4,	0, 0x4ULL, NULL, NULL, OperandInfo44 },  // Inst #303 = FSQRT_S
  { 304,	3,	1,	8,	4,	0, 0x4ULL, NULL, NULL, OperandInfo66 },  // Inst #304 = FSUB_D32
  { 305,	3,	1,	8,	4,	0, 0x4ULL, NULL, NULL, OperandInfo67 },  // Inst #305 = FSUB_D64
  { 306,	3,	1,	8,	4,	0, 0x4ULL, NULL, NULL, OperandInfo68 },  // Inst #306 = FSUB_S
  { 307,	5,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo72 },  // Inst #307 = INS
  { 308,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList16, NULL, OperandInfo73 },  // Inst #308 = INSV
  { 309,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x3ULL, NULL, ImplicitList4, OperandInfo5 },  // Inst #309 = J
  { 310,	1,	0,	3,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x3ULL, NULL, ImplicitList5, OperandInfo5 },  // Inst #310 = JAL
  { 311,	2,	1,	3,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, ImplicitList5, OperandInfo9 },  // Inst #311 = JALR
  { 312,	2,	1,	3,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, ImplicitList5, OperandInfo74 },  // Inst #312 = JALR64
  { 313,	1,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x0ULL, NULL, ImplicitList5, OperandInfo75 },  // Inst #313 = JALR64Pseudo
  { 314,	1,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x0ULL, NULL, ImplicitList5, OperandInfo35 },  // Inst #314 = JALRPseudo
  { 315,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x1ULL, NULL, NULL, OperandInfo35 },  // Inst #315 = JR
  { 316,	1,	0,	3,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x1ULL, NULL, NULL, OperandInfo75 },  // Inst #316 = JR64
  { 317,	1,	0,	1,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #317 = Jal16
  { 318,	0,	0,	1,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #318 = JrRa16
  { 319,	0,	0,	1,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #319 = JrcRa16
  { 320,	1,	0,	1,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo76 },  // Inst #320 = JrcRx16
  { 321,	1,	0,	3,	2,	0|(1<<MCID::Call), 0x0ULL, NULL, NULL, OperandInfo76 },  // Inst #321 = JumpLinkReg16
  { 322,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #322 = LB
  { 323,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #323 = LB64
  { 324,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #324 = LB64_P8
  { 325,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #325 = LBUX
  { 326,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #326 = LB_MM
  { 327,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #327 = LB_MM_P8
  { 328,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #328 = LB_P8
  { 329,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #329 = LBu
  { 330,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #330 = LBu64
  { 331,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #331 = LBu64_P8
  { 332,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #332 = LBu_MM
  { 333,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #333 = LBu_MM_P8
  { 334,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #334 = LBu_P8
  { 335,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #335 = LD
  { 336,	3,	1,	16,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo81 },  // Inst #336 = LDC1
  { 337,	3,	1,	16,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo82 },  // Inst #337 = LDC164
  { 338,	3,	1,	16,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo83 },  // Inst #338 = LDC164_P8
  { 339,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo84 },  // Inst #339 = LDL
  { 340,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo85 },  // Inst #340 = LDL_P8
  { 341,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo84 },  // Inst #341 = LDR
  { 342,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo85 },  // Inst #342 = LDR_P8
  { 343,	3,	1,	16,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo39 },  // Inst #343 = LDXC1
  { 344,	3,	1,	16,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo86 },  // Inst #344 = LDXC164
  { 345,	3,	1,	16,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo87 },  // Inst #345 = LDXC164_P8
  { 346,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #346 = LD_P8
  { 347,	3,	1,	0,	4,	0, 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #347 = LEA_ADDiu
  { 348,	3,	1,	0,	4,	0, 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #348 = LEA_ADDiu64
  { 349,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #349 = LH
  { 350,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #350 = LH64
  { 351,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #351 = LH64_P8
  { 352,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #352 = LHX
  { 353,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #353 = LH_MM
  { 354,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #354 = LH_MM_P8
  { 355,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #355 = LH_P8
  { 356,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #356 = LHu
  { 357,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #357 = LHu64
  { 358,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #358 = LHu64_P8
  { 359,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #359 = LHu_MM
  { 360,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #360 = LHu_MM_P8
  { 361,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #361 = LHu_P8
  { 362,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo88 },  // Inst #362 = LL
  { 363,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo89 },  // Inst #363 = LLD
  { 364,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo90 },  // Inst #364 = LLD_P8
  { 365,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo91 },  // Inst #365 = LL_P8
  { 366,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo92 },  // Inst #366 = LOAD_AC128
  { 367,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo93 },  // Inst #367 = LOAD_AC128_P8
  { 368,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo94 },  // Inst #368 = LOAD_AC64
  { 369,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo95 },  // Inst #369 = LOAD_AC64_P8
  { 370,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo96 },  // Inst #370 = LOAD_AC_DSP
  { 371,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo97 },  // Inst #371 = LOAD_AC_DSP_P8
  { 372,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo98 },  // Inst #372 = LOAD_CCOND_DSP
  { 373,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo99 },  // Inst #373 = LOAD_CCOND_DSP_P8
  { 374,	3,	1,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo39 },  // Inst #374 = LUXC1
  { 375,	3,	1,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo86 },  // Inst #375 = LUXC164
  { 376,	2,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, NULL, NULL, OperandInfo100 },  // Inst #376 = LUi
  { 377,	2,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, NULL, NULL, OperandInfo101 },  // Inst #377 = LUi64
  { 378,	2,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, NULL, NULL, OperandInfo100 },  // Inst #378 = LUi_MM
  { 379,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #379 = LW
  { 380,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #380 = LW64
  { 381,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #381 = LW64_P8
  { 382,	3,	1,	16,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo102 },  // Inst #382 = LWC1
  { 383,	3,	1,	16,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo103 },  // Inst #383 = LWC1_P8
  { 384,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo104 },  // Inst #384 = LWL
  { 385,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo84 },  // Inst #385 = LWL64
  { 386,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo85 },  // Inst #386 = LWL64_P8
  { 387,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo105 },  // Inst #387 = LWL_P8
  { 388,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo104 },  // Inst #388 = LWR
  { 389,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo84 },  // Inst #389 = LWR64
  { 390,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo85 },  // Inst #390 = LWR64_P8
  { 391,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo105 },  // Inst #391 = LWR_P8
  { 392,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #392 = LWX
  { 393,	3,	1,	16,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo106 },  // Inst #393 = LWXC1
  { 394,	3,	1,	16,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo107 },  // Inst #394 = LWXC1_P8
  { 395,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #395 = LW_MM
  { 396,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #396 = LW_MM_P8
  { 397,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #397 = LW_P8
  { 398,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #398 = LWu64
  { 399,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #399 = LWu64_P8
  { 400,	4,	1,	16,	4,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo108 },  // Inst #400 = LbRxRyOffMemX16
  { 401,	4,	1,	16,	4,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo108 },  // Inst #401 = LbuRxRyOffMemX16
  { 402,	4,	1,	16,	4,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo108 },  // Inst #402 = LhRxRyOffMemX16
  { 403,	4,	1,	16,	4,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo108 },  // Inst #403 = LhuRxRyOffMemX16
  { 404,	2,	1,	1,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #404 = LiRxImm16
  { 405,	2,	1,	1,	4,	0, 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #405 = LiRxImmX16
  { 406,	2,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo109 },  // Inst #406 = LoadAddr32Imm
  { 407,	3,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo88 },  // Inst #407 = LoadAddr32Reg
  { 408,	2,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo109 },  // Inst #408 = LoadImm32Reg
  { 409,	2,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #409 = LwConstant32
  { 410,	4,	1,	16,	4,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo108 },  // Inst #410 = LwRxRyOffMemX16
  { 411,	3,	1,	16,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, NULL, OperandInfo110 },  // Inst #411 = LwRxSpImmX16
  { 412,	2,	0,	6,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo46 },  // Inst #412 = MADD
  { 413,	2,	0,	6,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo46 },  // Inst #413 = MADDU
  { 414,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo58 },  // Inst #414 = MADDU_DSP
  { 415,	4,	1,	12,	4,	0, 0x4ULL, NULL, NULL, OperandInfo111 },  // Inst #415 = MADD_D32
  { 416,	4,	1,	12,	4,	0, 0x4ULL, NULL, NULL, OperandInfo112 },  // Inst #416 = MADD_D64
  { 417,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo58 },  // Inst #417 = MADD_DSP
  { 418,	4,	1,	13,	4,	0, 0x4ULL, NULL, NULL, OperandInfo113 },  // Inst #418 = MADD_S
  { 419,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList11, OperandInfo58 },  // Inst #419 = MAQ_SA_W_PHL
  { 420,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList11, OperandInfo58 },  // Inst #420 = MAQ_SA_W_PHR
  { 421,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList11, OperandInfo58 },  // Inst #421 = MAQ_S_W_PHL
  { 422,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList11, OperandInfo58 },  // Inst #422 = MAQ_S_W_PHR
  { 423,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo13 },  // Inst #423 = MFC0_3OP
  { 424,	2,	1,	5,	4,	0|(1<<MCID::Bitcast), 0x4ULL, NULL, NULL, OperandInfo114 },  // Inst #424 = MFC1
  { 425,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo13 },  // Inst #425 = MFC2_3OP
  { 426,	1,	1,	17,	4,	0, 0x1ULL, ImplicitList17, NULL, OperandInfo35 },  // Inst #426 = MFHI
  { 427,	1,	1,	17,	4,	0, 0x1ULL, ImplicitList18, NULL, OperandInfo75 },  // Inst #427 = MFHI64
  { 428,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo115 },  // Inst #428 = MFHI_DSP
  { 429,	1,	1,	17,	4,	0, 0x1ULL, ImplicitList19, NULL, OperandInfo35 },  // Inst #429 = MFLO
  { 430,	1,	1,	17,	4,	0, 0x1ULL, ImplicitList20, NULL, OperandInfo75 },  // Inst #430 = MFLO64
  { 431,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo116 },  // Inst #431 = MFLO_DSP
  { 432,	2,	0,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, ImplicitList21, NULL, OperandInfo9 },  // Inst #432 = MIPSeh_return32
  { 433,	2,	0,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, ImplicitList21, NULL, OperandInfo74 },  // Inst #433 = MIPSeh_return64
  { 434,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #434 = MODSUB
  { 435,	2,	1,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo117 },  // Inst #435 = MOVCCRToCCR
  { 436,	3,	1,	5,	4,	0, 0x4ULL, ImplicitList6, NULL, OperandInfo118 },  // Inst #436 = MOVF_D32
  { 437,	3,	1,	5,	4,	0, 0x4ULL, ImplicitList6, NULL, OperandInfo119 },  // Inst #437 = MOVF_D64
  { 438,	3,	1,	1,	4,	0, 0x4ULL, ImplicitList6, NULL, OperandInfo120 },  // Inst #438 = MOVF_I
  { 439,	3,	1,	1,	4,	0, 0x4ULL, ImplicitList6, NULL, OperandInfo121 },  // Inst #439 = MOVF_I64
  { 440,	3,	1,	5,	4,	0, 0x4ULL, ImplicitList6, NULL, OperandInfo122 },  // Inst #440 = MOVF_S
  { 441,	4,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo123 },  // Inst #441 = MOVN_I64_D64
  { 442,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo124 },  // Inst #442 = MOVN_I64_I
  { 443,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo125 },  // Inst #443 = MOVN_I64_I64
  { 444,	4,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo126 },  // Inst #444 = MOVN_I64_S
  { 445,	4,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo127 },  // Inst #445 = MOVN_I_D32
  { 446,	4,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo128 },  // Inst #446 = MOVN_I_D64
  { 447,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo129 },  // Inst #447 = MOVN_I_I
  { 448,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo130 },  // Inst #448 = MOVN_I_I64
  { 449,	4,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo131 },  // Inst #449 = MOVN_I_S
  { 450,	3,	1,	5,	4,	0, 0x4ULL, ImplicitList6, NULL, OperandInfo118 },  // Inst #450 = MOVT_D32
  { 451,	3,	1,	5,	4,	0, 0x4ULL, ImplicitList6, NULL, OperandInfo119 },  // Inst #451 = MOVT_D64
  { 452,	3,	1,	1,	4,	0, 0x4ULL, ImplicitList6, NULL, OperandInfo120 },  // Inst #452 = MOVT_I
  { 453,	3,	1,	1,	4,	0, 0x4ULL, ImplicitList6, NULL, OperandInfo121 },  // Inst #453 = MOVT_I64
  { 454,	3,	1,	5,	4,	0, 0x4ULL, ImplicitList6, NULL, OperandInfo122 },  // Inst #454 = MOVT_S
  { 455,	4,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo123 },  // Inst #455 = MOVZ_I64_D64
  { 456,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo124 },  // Inst #456 = MOVZ_I64_I
  { 457,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo125 },  // Inst #457 = MOVZ_I64_I64
  { 458,	4,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo126 },  // Inst #458 = MOVZ_I64_S
  { 459,	4,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo127 },  // Inst #459 = MOVZ_I_D32
  { 460,	4,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo128 },  // Inst #460 = MOVZ_I_D64
  { 461,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo129 },  // Inst #461 = MOVZ_I_I
  { 462,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo130 },  // Inst #462 = MOVZ_I_I64
  { 463,	4,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo131 },  // Inst #463 = MOVZ_I_S
  { 464,	2,	0,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo46 },  // Inst #464 = MSUB
  { 465,	2,	0,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo46 },  // Inst #465 = MSUBU
  { 466,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo58 },  // Inst #466 = MSUBU_DSP
  { 467,	4,	1,	12,	4,	0, 0x4ULL, NULL, NULL, OperandInfo111 },  // Inst #467 = MSUB_D32
  { 468,	4,	1,	12,	4,	0, 0x4ULL, NULL, NULL, OperandInfo112 },  // Inst #468 = MSUB_D64
  { 469,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo58 },  // Inst #469 = MSUB_DSP
  { 470,	4,	1,	13,	4,	0, 0x4ULL, NULL, NULL, OperandInfo113 },  // Inst #470 = MSUB_S
  { 471,	3,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo132 },  // Inst #471 = MTC0_3OP
  { 472,	2,	1,	5,	4,	0|(1<<MCID::Bitcast), 0x4ULL, NULL, NULL, OperandInfo133 },  // Inst #472 = MTC1
  { 473,	3,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo132 },  // Inst #473 = MTC2_3OP
  { 474,	1,	0,	17,	4,	0, 0x1ULL, NULL, ImplicitList17, OperandInfo35 },  // Inst #474 = MTHI
  { 475,	1,	0,	17,	4,	0, 0x1ULL, NULL, ImplicitList18, OperandInfo75 },  // Inst #475 = MTHI64
  { 476,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo134 },  // Inst #476 = MTHI_DSP
  { 477,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList7, OperandInfo135 },  // Inst #477 = MTHLIP
  { 478,	1,	0,	17,	4,	0, 0x1ULL, NULL, ImplicitList19, OperandInfo35 },  // Inst #478 = MTLO
  { 479,	1,	0,	17,	4,	0, 0x1ULL, NULL, ImplicitList20, OperandInfo75 },  // Inst #479 = MTLO64
  { 480,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo136 },  // Inst #480 = MTLO_DSP
  { 481,	3,	1,	6,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #481 = MUL
  { 482,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList22, OperandInfo47 },  // Inst #482 = MULEQ_S_W_PHL
  { 483,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList22, OperandInfo47 },  // Inst #483 = MULEQ_S_W_PHR
  { 484,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList22, OperandInfo11 },  // Inst #484 = MULEU_S_PH_QBL
  { 485,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList22, OperandInfo11 },  // Inst #485 = MULEU_S_PH_QBR
  { 486,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList22, OperandInfo11 },  // Inst #486 = MULQ_RS_PH
  { 487,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList22, OperandInfo12 },  // Inst #487 = MULQ_RS_W
  { 488,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList22, OperandInfo11 },  // Inst #488 = MULQ_S_PH
  { 489,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList22, OperandInfo12 },  // Inst #489 = MULQ_S_W
  { 490,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList11, OperandInfo58 },  // Inst #490 = MULSAQ_S_W_PH
  { 491,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo58 },  // Inst #491 = MULSA_W_PH
  { 492,	2,	0,	6,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, ImplicitList12, OperandInfo46 },  // Inst #492 = MULT
  { 493,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo137 },  // Inst #493 = MULTU_DSP
  { 494,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo137 },  // Inst #494 = MULT_DSP
  { 495,	2,	0,	6,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, ImplicitList12, OperandInfo46 },  // Inst #495 = MULT_MM
  { 496,	2,	0,	6,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, ImplicitList12, OperandInfo46 },  // Inst #496 = MULTu
  { 497,	2,	0,	6,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, ImplicitList12, OperandInfo46 },  // Inst #497 = MULTu_MM
  { 498,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #498 = MUL_MM
  { 499,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList22, OperandInfo11 },  // Inst #499 = MUL_PH
  { 500,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList22, OperandInfo11 },  // Inst #500 = MUL_S_PH
  { 501,	1,	1,	1,	2,	0, 0x0ULL, ImplicitList17, NULL, OperandInfo76 },  // Inst #501 = Mfhi16
  { 502,	1,	1,	1,	2,	0, 0x0ULL, ImplicitList19, NULL, OperandInfo76 },  // Inst #502 = Mflo16
  { 503,	2,	1,	1,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo138 },  // Inst #503 = Move32R16
  { 504,	2,	1,	1,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo139 },  // Inst #504 = MoveR3216
  { 505,	2,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList12, OperandInfo50 },  // Inst #505 = MultRxRy16
  { 506,	3,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList12, OperandInfo27 },  // Inst #506 = MultRxRyRz16
  { 507,	2,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList12, OperandInfo50 },  // Inst #507 = MultuRxRy16
  { 508,	3,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList12, OperandInfo27 },  // Inst #508 = MultuRxRyRz16
  { 509,	4,	1,	12,	4,	0, 0x4ULL, NULL, NULL, OperandInfo111 },  // Inst #509 = NMADD_D32
  { 510,	4,	1,	12,	4,	0, 0x4ULL, NULL, NULL, OperandInfo112 },  // Inst #510 = NMADD_D64
  { 511,	4,	1,	13,	4,	0, 0x4ULL, NULL, NULL, OperandInfo113 },  // Inst #511 = NMADD_S
  { 512,	4,	1,	12,	4,	0, 0x4ULL, NULL, NULL, OperandInfo111 },  // Inst #512 = NMSUB_D32
  { 513,	4,	1,	12,	4,	0, 0x4ULL, NULL, NULL, OperandInfo112 },  // Inst #513 = NMSUB_D64
  { 514,	4,	1,	13,	4,	0, 0x4ULL, NULL, NULL, OperandInfo113 },  // Inst #514 = NMSUB_S
  { 515,	0,	0,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #515 = NOP
  { 516,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #516 = NOR
  { 517,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, NULL, OperandInfo15 },  // Inst #517 = NOR64
  { 518,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #518 = NOR_MM
  { 519,	2,	1,	1,	2,	0, 0x0ULL, NULL, NULL, OperandInfo50 },  // Inst #519 = NegRxRy16
  { 520,	2,	1,	1,	2,	0, 0x0ULL, NULL, NULL, OperandInfo50 },  // Inst #520 = NotRxRy16
  { 521,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #521 = OR
  { 522,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo15 },  // Inst #522 = OR64
  { 523,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #523 = OR_MM
  { 524,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo13 },  // Inst #524 = ORi
  { 525,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo51 },  // Inst #525 = ORi64
  { 526,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo13 },  // Inst #526 = ORi_MM
  { 527,	3,	1,	1,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #527 = OrRxRxRy16
  { 528,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #528 = PACKRL_PH
  { 529,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList9, NULL, OperandInfo11 },  // Inst #529 = PICK_PH
  { 530,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList9, NULL, OperandInfo11 },  // Inst #530 = PICK_QB
  { 531,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #531 = PRECEQU_PH_QBL
  { 532,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #532 = PRECEQU_PH_QBLA
  { 533,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #533 = PRECEQU_PH_QBR
  { 534,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #534 = PRECEQU_PH_QBRA
  { 535,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo140 },  // Inst #535 = PRECEQ_W_PHL
  { 536,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo140 },  // Inst #536 = PRECEQ_W_PHR
  { 537,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #537 = PRECEU_PH_QBL
  { 538,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #538 = PRECEU_PH_QBLA
  { 539,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #539 = PRECEU_PH_QBR
  { 540,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #540 = PRECEU_PH_QBRA
  { 541,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList23, OperandInfo11 },  // Inst #541 = PRECRQU_S_QB_PH
  { 542,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo141 },  // Inst #542 = PRECRQ_PH_W
  { 543,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #543 = PRECRQ_QB_PH
  { 544,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList23, OperandInfo141 },  // Inst #544 = PRECRQ_RS_PH_W
  { 545,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #545 = PRECR_QB_PH
  { 546,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo142 },  // Inst #546 = PRECR_SRA_PH_W
  { 547,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo142 },  // Inst #547 = PRECR_SRA_R_PH_W
  { 548,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #548 = PREPEND
  { 549,	3,	1,	2,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo143 },  // Inst #549 = PseudoCMPU_EQ_QB
  { 550,	3,	1,	2,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo143 },  // Inst #550 = PseudoCMPU_LE_QB
  { 551,	3,	1,	2,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo143 },  // Inst #551 = PseudoCMPU_LT_QB
  { 552,	3,	1,	2,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo143 },  // Inst #552 = PseudoCMP_EQ_PH
  { 553,	3,	1,	2,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo143 },  // Inst #553 = PseudoCMP_LE_PH
  { 554,	3,	1,	2,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo143 },  // Inst #554 = PseudoCMP_LT_PH
  { 555,	3,	1,	6,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, NULL, OperandInfo144 },  // Inst #555 = PseudoDMULT
  { 556,	3,	1,	6,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, NULL, OperandInfo144 },  // Inst #556 = PseudoDMULTu
  { 557,	3,	1,	7,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo144 },  // Inst #557 = PseudoDSDIV
  { 558,	3,	1,	7,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo144 },  // Inst #558 = PseudoDUDIV
  { 559,	4,	1,	6,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo145 },  // Inst #559 = PseudoMADD
  { 560,	4,	1,	6,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo145 },  // Inst #560 = PseudoMADDU
  { 561,	4,	1,	6,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo145 },  // Inst #561 = PseudoMSUB
  { 562,	4,	1,	6,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo145 },  // Inst #562 = PseudoMSUBU
  { 563,	3,	1,	6,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, NULL, OperandInfo146 },  // Inst #563 = PseudoMULT
  { 564,	3,	1,	6,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, NULL, OperandInfo146 },  // Inst #564 = PseudoMULTu
  { 565,	4,	1,	2,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo147 },  // Inst #565 = PseudoPICK_PH
  { 566,	4,	1,	2,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo147 },  // Inst #566 = PseudoPICK_QB
  { 567,	3,	1,	7,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo146 },  // Inst #567 = PseudoSDIV
  { 568,	3,	1,	7,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo146 },  // Inst #568 = PseudoUDIV
  { 569,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo140 },  // Inst #569 = RADDU_W_QB
  { 570,	2,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo100 },  // Inst #570 = RDDSP
  { 571,	2,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo148 },  // Inst #571 = RDHWR
  { 572,	2,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo149 },  // Inst #572 = RDHWR64
  { 573,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo150 },  // Inst #573 = REPLV_PH
  { 574,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo150 },  // Inst #574 = REPLV_QB
  { 575,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo151 },  // Inst #575 = REPL_PH
  { 576,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo151 },  // Inst #576 = REPL_QB
  { 577,	1,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::ExtraSrcRegAllocReq), 0x1ULL, NULL, NULL, OperandInfo35 },  // Inst #577 = RET
  { 578,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo13 },  // Inst #578 = ROTR
  { 579,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #579 = ROTRV
  { 580,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #580 = ROTRV_MM
  { 581,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo13 },  // Inst #581 = ROTR_MM
  { 582,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #582 = ROUND_L_D64
  { 583,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo41 },  // Inst #583 = ROUND_L_S
  { 584,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo42 },  // Inst #584 = ROUND_W_D32
  { 585,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo43 },  // Inst #585 = ROUND_W_D64
  { 586,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo44 },  // Inst #586 = ROUND_W_S
  { 587,	1,	0,	16,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo5 },  // Inst #587 = RestoreIncSpF16
  { 588,	1,	0,	16,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList24, OperandInfo5 },  // Inst #588 = RestoreRaF16
  { 589,	0,	0,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, 0 },  // Inst #589 = RetRA
  { 590,	0,	0,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, NULL, NULL, 0 },  // Inst #590 = RetRA16
  { 591,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #591 = SB
  { 592,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #592 = SB64
  { 593,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #593 = SB64_P8
  { 594,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #594 = SB_MM
  { 595,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #595 = SB_MM_P8
  { 596,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #596 = SB_P8
  { 597,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo152 },  // Inst #597 = SC
  { 598,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo153 },  // Inst #598 = SCD
  { 599,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo154 },  // Inst #599 = SCD_P8
  { 600,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo155 },  // Inst #600 = SC_P8
  { 601,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #601 = SD
  { 602,	3,	0,	18,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo81 },  // Inst #602 = SDC1
  { 603,	3,	0,	18,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo82 },  // Inst #603 = SDC164
  { 604,	3,	0,	18,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo83 },  // Inst #604 = SDC164_P8
  { 605,	2,	0,	7,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, ImplicitList12, OperandInfo46 },  // Inst #605 = SDIV
  { 606,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #606 = SDL
  { 607,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #607 = SDL_P8
  { 608,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #608 = SDR
  { 609,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #609 = SDR_P8
  { 610,	3,	0,	18,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo39 },  // Inst #610 = SDXC1
  { 611,	3,	0,	18,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo86 },  // Inst #611 = SDXC164
  { 612,	3,	0,	18,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo87 },  // Inst #612 = SDXC164_P8
  { 613,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #613 = SD_P8
  { 614,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo9 },  // Inst #614 = SEB
  { 615,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo74 },  // Inst #615 = SEB64
  { 616,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo9 },  // Inst #616 = SEH
  { 617,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo74 },  // Inst #617 = SEH64
  { 618,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #618 = SH
  { 619,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #619 = SH64
  { 620,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #620 = SH64_P8
  { 621,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo156 },  // Inst #621 = SHILO
  { 622,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo135 },  // Inst #622 = SHILOV
  { 623,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList23, OperandInfo157 },  // Inst #623 = SHLLV_PH
  { 624,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList23, OperandInfo157 },  // Inst #624 = SHLLV_QB
  { 625,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList23, OperandInfo157 },  // Inst #625 = SHLLV_S_PH
  { 626,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList23, OperandInfo12 },  // Inst #626 = SHLLV_S_W
  { 627,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList23, OperandInfo158 },  // Inst #627 = SHLL_PH
  { 628,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList23, OperandInfo158 },  // Inst #628 = SHLL_QB
  { 629,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList23, OperandInfo158 },  // Inst #629 = SHLL_S_PH
  { 630,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList23, OperandInfo159 },  // Inst #630 = SHLL_S_W
  { 631,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo157 },  // Inst #631 = SHRAV_PH
  { 632,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo157 },  // Inst #632 = SHRAV_QB
  { 633,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo157 },  // Inst #633 = SHRAV_R_PH
  { 634,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo157 },  // Inst #634 = SHRAV_R_QB
  { 635,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #635 = SHRAV_R_W
  { 636,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo158 },  // Inst #636 = SHRA_PH
  { 637,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo158 },  // Inst #637 = SHRA_QB
  { 638,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo158 },  // Inst #638 = SHRA_R_PH
  { 639,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo158 },  // Inst #639 = SHRA_R_QB
  { 640,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo159 },  // Inst #640 = SHRA_R_W
  { 641,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo157 },  // Inst #641 = SHRLV_PH
  { 642,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo157 },  // Inst #642 = SHRLV_QB
  { 643,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo158 },  // Inst #643 = SHRL_PH
  { 644,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo158 },  // Inst #644 = SHRL_QB
  { 645,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #645 = SH_MM
  { 646,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #646 = SH_MM_P8
  { 647,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #647 = SH_P8
  { 648,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo13 },  // Inst #648 = SLL
  { 649,	2,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo60 },  // Inst #649 = SLL64_32
  { 650,	2,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo74 },  // Inst #650 = SLL64_64
  { 651,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #651 = SLLV
  { 652,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #652 = SLLV_MM
  { 653,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo13 },  // Inst #653 = SLL_MM
  { 654,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo160 },  // Inst #654 = SLT
  { 655,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo161 },  // Inst #655 = SLT64
  { 656,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo160 },  // Inst #656 = SLT_MM
  { 657,	3,	1,	1,	4,	0, 0x2ULL, NULL, NULL, OperandInfo162 },  // Inst #657 = SLTi
  { 658,	3,	1,	1,	4,	0, 0x2ULL, NULL, NULL, OperandInfo163 },  // Inst #658 = SLTi64
  { 659,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo162 },  // Inst #659 = SLTi_MM
  { 660,	3,	1,	1,	4,	0, 0x2ULL, NULL, NULL, OperandInfo162 },  // Inst #660 = SLTiu
  { 661,	3,	1,	1,	4,	0, 0x2ULL, NULL, NULL, OperandInfo163 },  // Inst #661 = SLTiu64
  { 662,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo162 },  // Inst #662 = SLTiu_MM
  { 663,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo160 },  // Inst #663 = SLTu
  { 664,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo161 },  // Inst #664 = SLTu64
  { 665,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo160 },  // Inst #665 = SLTu_MM
  { 666,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo13 },  // Inst #666 = SRA
  { 667,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #667 = SRAV
  { 668,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #668 = SRAV_MM
  { 669,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo13 },  // Inst #669 = SRA_MM
  { 670,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo13 },  // Inst #670 = SRL
  { 671,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #671 = SRLV
  { 672,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #672 = SRLV_MM
  { 673,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo13 },  // Inst #673 = SRL_MM
  { 674,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo92 },  // Inst #674 = STORE_AC128
  { 675,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo93 },  // Inst #675 = STORE_AC128_P8
  { 676,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo94 },  // Inst #676 = STORE_AC64
  { 677,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo95 },  // Inst #677 = STORE_AC64_P8
  { 678,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo96 },  // Inst #678 = STORE_AC_DSP
  { 679,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo97 },  // Inst #679 = STORE_AC_DSP_P8
  { 680,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo98 },  // Inst #680 = STORE_CCOND_DSP
  { 681,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo99 },  // Inst #681 = STORE_CCOND_DSP_P8
  { 682,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #682 = SUB
  { 683,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #683 = SUBQH_PH
  { 684,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #684 = SUBQH_R_PH
  { 685,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #685 = SUBQH_R_W
  { 686,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #686 = SUBQH_W
  { 687,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #687 = SUBQ_PH
  { 688,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #688 = SUBQ_S_PH
  { 689,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #689 = SUBQ_S_W
  { 690,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #690 = SUBUH_QB
  { 691,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #691 = SUBUH_R_QB
  { 692,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #692 = SUBU_PH
  { 693,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #693 = SUBU_QB
  { 694,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #694 = SUBU_S_PH
  { 695,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #695 = SUBU_S_QB
  { 696,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #696 = SUB_MM
  { 697,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #697 = SUBu
  { 698,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #698 = SUBu_MM
  { 699,	3,	0,	18,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo39 },  // Inst #699 = SUXC1
  { 700,	3,	0,	18,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo86 },  // Inst #700 = SUXC164
  { 701,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #701 = SW
  { 702,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #702 = SW64
  { 703,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #703 = SW64_P8
  { 704,	3,	0,	18,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo102 },  // Inst #704 = SWC1
  { 705,	3,	0,	18,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo103 },  // Inst #705 = SWC1_P8
  { 706,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #706 = SWL
  { 707,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #707 = SWL64
  { 708,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #708 = SWL64_P8
  { 709,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #709 = SWL_P8
  { 710,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #710 = SWR
  { 711,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #711 = SWR64
  { 712,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #712 = SWR64_P8
  { 713,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #713 = SWR_P8
  { 714,	3,	0,	18,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo106 },  // Inst #714 = SWXC1
  { 715,	3,	0,	18,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo107 },  // Inst #715 = SWXC1_P8
  { 716,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #716 = SW_MM
  { 717,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #717 = SW_MM_P8
  { 718,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #718 = SW_P8
  { 719,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo2 },  // Inst #719 = SYNC
  { 720,	1,	0,	18,	2,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo5 },  // Inst #720 = SaveDecSpF16
  { 721,	1,	0,	18,	2,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList25, ImplicitList3, OperandInfo5 },  // Inst #721 = SaveRaF16
  { 722,	4,	0,	18,	4,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo108 },  // Inst #722 = SbRxRyOffMemX16
  { 723,	4,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo164 },  // Inst #723 = SelBeqZ
  { 724,	4,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo164 },  // Inst #724 = SelBneZ
  { 725,	5,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo165 },  // Inst #725 = SelTBteqZCmp
  { 726,	5,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo166 },  // Inst #726 = SelTBteqZCmpi
  { 727,	5,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo165 },  // Inst #727 = SelTBteqZSlt
  { 728,	5,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo166 },  // Inst #728 = SelTBteqZSlti
  { 729,	5,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo166 },  // Inst #729 = SelTBteqZSltiu
  { 730,	5,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo165 },  // Inst #730 = SelTBteqZSltu
  { 731,	5,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo165 },  // Inst #731 = SelTBtneZCmp
  { 732,	5,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo166 },  // Inst #732 = SelTBtneZCmpi
  { 733,	5,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo165 },  // Inst #733 = SelTBtneZSlt
  { 734,	5,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo166 },  // Inst #734 = SelTBtneZSlti
  { 735,	5,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo166 },  // Inst #735 = SelTBtneZSltiu
  { 736,	5,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo165 },  // Inst #736 = SelTBtneZSltu
  { 737,	4,	0,	18,	4,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo108 },  // Inst #737 = ShRxRyOffMemX16
  { 738,	3,	1,	1,	4,	0, 0x0ULL, NULL, NULL, OperandInfo167 },  // Inst #738 = SllX16
  { 739,	3,	1,	1,	2,	0, 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #739 = SllvRxRy16
  { 740,	3,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #740 = SltCCRxRy16
  { 741,	2,	0,	1,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList8, OperandInfo50 },  // Inst #741 = SltRxRy16
  { 742,	3,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo167 },  // Inst #742 = SltiCCRxImmX16
  { 743,	2,	0,	1,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList8, OperandInfo24 },  // Inst #743 = SltiRxImm16
  { 744,	2,	0,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList8, OperandInfo24 },  // Inst #744 = SltiRxImmX16
  { 745,	3,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo167 },  // Inst #745 = SltiuCCRxImmX16
  { 746,	2,	0,	1,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList8, OperandInfo24 },  // Inst #746 = SltiuRxImm16
  { 747,	2,	0,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList8, OperandInfo24 },  // Inst #747 = SltiuRxImmX16
  { 748,	3,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #748 = SltuCCRxRy16
  { 749,	2,	0,	1,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList8, OperandInfo50 },  // Inst #749 = SltuRxRy16
  { 750,	3,	1,	2,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList8, OperandInfo27 },  // Inst #750 = SltuRxRyRz16
  { 751,	3,	1,	1,	4,	0, 0x0ULL, NULL, NULL, OperandInfo167 },  // Inst #751 = SraX16
  { 752,	3,	1,	1,	2,	0, 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #752 = SravRxRy16
  { 753,	3,	1,	1,	4,	0, 0x0ULL, NULL, NULL, OperandInfo167 },  // Inst #753 = SrlX16
  { 754,	3,	1,	1,	2,	0, 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #754 = SrlvRxRy16
  { 755,	3,	1,	1,	2,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #755 = SubuRxRyRz16
  { 756,	4,	0,	18,	4,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo108 },  // Inst #756 = SwRxRyOffMemX16
  { 757,	3,	1,	18,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo110 },  // Inst #757 = SwRxSpImmX16
  { 758,	1,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x3ULL, NULL, ImplicitList4, OperandInfo5 },  // Inst #758 = TAILCALL
  { 759,	1,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x1ULL, NULL, NULL, OperandInfo75 },  // Inst #759 = TAILCALL64_R
  { 760,	1,	0,	3,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x1ULL, NULL, NULL, OperandInfo35 },  // Inst #760 = TAILCALL_R
  { 761,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #761 = TRUNC_L_D64
  { 762,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo41 },  // Inst #762 = TRUNC_L_S
  { 763,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo42 },  // Inst #763 = TRUNC_W_D32
  { 764,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo43 },  // Inst #764 = TRUNC_W_D64
  { 765,	2,	1,	4,	4,	0, 0x4ULL, NULL, NULL, OperandInfo44 },  // Inst #765 = TRUNC_W_S
  { 766,	2,	0,	7,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, ImplicitList12, OperandInfo46 },  // Inst #766 = UDIV
  { 767,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo100 },  // Inst #767 = WRDSP
  { 768,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo46 },  // Inst #768 = WSBH
  { 769,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #769 = XOR
  { 770,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo15 },  // Inst #770 = XOR64
  { 771,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #771 = XOR_MM
  { 772,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo13 },  // Inst #772 = XORi
  { 773,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo51 },  // Inst #773 = XORi64
  { 774,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo13 },  // Inst #774 = XORi_MM
  { 775,	3,	1,	1,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #775 = XorRxRxRy16
};

extern const char MipsInstrNameData[] = {
  /* 0 */ 'L', 'D', 'C', '1', 0,
  /* 5 */ 'S', 'D', 'C', '1', 0,
  /* 10 */ 'C', 'F', 'C', '1', 0,
  /* 15 */ 'D', 'M', 'F', 'C', '1', 0,
  /* 21 */ 'C', 'T', 'C', '1', 0,
  /* 26 */ 'D', 'M', 'T', 'C', '1', 0,
  /* 32 */ 'L', 'W', 'C', '1', 0,
  /* 37 */ 'S', 'W', 'C', '1', 0,
  /* 42 */ 'L', 'D', 'X', 'C', '1', 0,
  /* 48 */ 'S', 'D', 'X', 'C', '1', 0,
  /* 54 */ 'L', 'U', 'X', 'C', '1', 0,
  /* 60 */ 'S', 'U', 'X', 'C', '1', 0,
  /* 66 */ 'L', 'W', 'X', 'C', '1', 0,
  /* 72 */ 'S', 'W', 'X', 'C', '1', 0,
  /* 78 */ 'D', 'S', 'R', 'A', '3', '2', 0,
  /* 85 */ 'F', 'S', 'U', 'B', '_', 'D', '3', '2', 0,
  /* 94 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '3', '2', 0,
  /* 104 */ 'F', 'A', 'D', 'D', '_', 'D', '3', '2', 0,
  /* 113 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '3', '2', 0,
  /* 123 */ 'M', 'O', 'V', 'F', '_', 'D', '3', '2', 0,
  /* 132 */ 'F', 'N', 'E', 'G', '_', 'D', '3', '2', 0,
  /* 141 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '3', '2', 0,
  /* 152 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '3', '2', 0,
  /* 163 */ 'F', 'M', 'U', 'L', '_', 'D', '3', '2', 0,
  /* 172 */ 'F', 'C', 'M', 'P', '_', 'D', '3', '2', 0,
  /* 181 */ 'F', 'A', 'B', 'S', '_', 'D', '3', '2', 0,
  /* 190 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '3', '2', 0,
  /* 200 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '3', '2', 0,
  /* 210 */ 'M', 'O', 'V', 'T', '_', 'D', '3', '2', 0,
  /* 219 */ 'F', 'D', 'I', 'V', '_', 'D', '3', '2', 0,
  /* 228 */ 'F', 'M', 'O', 'V', '_', 'D', '3', '2', 0,
  /* 237 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '3', '2', 0,
  /* 249 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '3', '2', 0,
  /* 261 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '3', '2', 0,
  /* 272 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '3', '2', 0,
  /* 284 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '3', '2', 0,
  /* 294 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', 0,
  /* 303 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', 0,
  /* 323 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', 0,
  /* 343 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 364 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 384 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 400 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 420 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 440 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 459 */ 'D', 'S', 'L', 'L', '3', '2', 0,
  /* 466 */ 'D', 'S', 'R', 'L', '3', '2', 0,
  /* 473 */ 'F', 'C', 'M', 'P', '_', 'S', '3', '2', 0,
  /* 482 */ 'D', 'S', 'L', 'L', '6', '4', '_', '3', '2', 0,
  /* 492 */ 'M', 'I', 'P', 'S', 'e', 'h', '_', 'r', 'e', 't', 'u', 'r', 'n', '3', '2', 0,
  /* 508 */ 'L', 'w', 'C', 'o', 'n', 's', 't', 'a', 'n', 't', '3', '2', 0,
  /* 521 */ 'L', 'D', 'C', '1', '6', '4', 0,
  /* 528 */ 'S', 'D', 'C', '1', '6', '4', 0,
  /* 535 */ 'L', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 543 */ 'S', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 551 */ 'L', 'U', 'X', 'C', '1', '6', '4', 0,
  /* 559 */ 'S', 'U', 'X', 'C', '1', '6', '4', 0,
  /* 567 */ 'S', 'E', 'B', '6', '4', 0,
  /* 573 */ 'L', 'B', '6', '4', 0,
  /* 578 */ 'S', 'B', '6', '4', 0,
  /* 583 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', '6', '4', 0,
  /* 593 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', '6', '4', 0,
  /* 604 */ 'A', 'N', 'D', '6', '4', 0,
  /* 610 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 623 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 636 */ 'F', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 645 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 655 */ 'F', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 664 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 674 */ 'M', 'O', 'V', 'F', '_', 'D', '6', '4', 0,
  /* 683 */ 'F', 'N', 'E', 'G', '_', 'D', '6', '4', 0,
  /* 692 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '6', '4', 0,
  /* 703 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '6', '4', 0,
  /* 714 */ 'F', 'M', 'U', 'L', '_', 'D', '6', '4', 0,
  /* 723 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'D', '6', '4', 0,
  /* 735 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'D', '6', '4', 0,
  /* 747 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'D', '6', '4', 0,
  /* 758 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'D', '6', '4', 0,
  /* 770 */ 'C', 'V', 'T', '_', 'L', '_', 'D', '6', '4', 0,
  /* 780 */ 'F', 'C', 'M', 'P', '_', 'D', '6', '4', 0,
  /* 789 */ 'F', 'A', 'B', 'S', '_', 'D', '6', '4', 0,
  /* 798 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '6', '4', 0,
  /* 808 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '6', '4', 0,
  /* 818 */ 'M', 'O', 'V', 'T', '_', 'D', '6', '4', 0,
  /* 827 */ 'F', 'D', 'I', 'V', '_', 'D', '6', '4', 0,
  /* 836 */ 'F', 'M', 'O', 'V', '_', 'D', '6', '4', 0,
  /* 845 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '6', '4', 0,
  /* 857 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '6', '4', 0,
  /* 869 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '6', '4', 0,
  /* 880 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '6', '4', 0,
  /* 892 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '6', '4', 0,
  /* 902 */ 'B', 'N', 'E', '6', '4', 0,
  /* 908 */ 'B', 'u', 'i', 'l', 'd', 'P', 'a', 'i', 'r', 'F', '6', '4', 0,
  /* 921 */ 'E', 'x', 't', 'r', 'a', 'c', 't', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'F', '6', '4', 0,
  /* 939 */ 'S', 'E', 'H', '6', '4', 0,
  /* 945 */ 'L', 'H', '6', '4', 0,
  /* 950 */ 'S', 'H', '6', '4', 0,
  /* 955 */ 'M', 'F', 'H', 'I', '6', '4', 0,
  /* 962 */ 'M', 'T', 'H', 'I', '6', '4', 0,
  /* 969 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 982 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 995 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 1015 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 1035 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 1056 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 1076 */ 'M', 'O', 'V', 'F', '_', 'I', '6', '4', 0,
  /* 1085 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', '6', '4', 0,
  /* 1096 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', '6', '4', 0,
  /* 1107 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 1123 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 1143 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 1163 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 1182 */ 'M', 'O', 'V', 'T', '_', 'I', '6', '4', 0,
  /* 1191 */ 'L', 'W', 'L', '6', '4', 0,
  /* 1197 */ 'S', 'W', 'L', '6', '4', 0,
  /* 1203 */ 'M', 'F', 'L', 'O', '6', '4', 0,
  /* 1210 */ 'M', 'T', 'L', 'O', '6', '4', 0,
  /* 1217 */ 'D', 'M', 'F', 'C', '0', '_', '3', 'O', 'P', '6', '4', 0,
  /* 1229 */ 'D', 'M', 'T', 'C', '0', '_', '3', 'O', 'P', '6', '4', 0,
  /* 1241 */ 'D', 'M', 'F', 'C', '2', '_', '3', 'O', 'P', '6', '4', 0,
  /* 1253 */ 'D', 'M', 'T', 'C', '2', '_', '3', 'O', 'P', '6', '4', 0,
  /* 1265 */ 'B', 'E', 'Q', '6', '4', 0,
  /* 1271 */ 'J', 'R', '6', '4', 0,
  /* 1276 */ 'J', 'A', 'L', 'R', '6', '4', 0,
  /* 1283 */ 'N', 'O', 'R', '6', '4', 0,
  /* 1289 */ 'X', 'O', 'R', '6', '4', 0,
  /* 1295 */ 'R', 'D', 'H', 'W', 'R', '6', '4', 0,
  /* 1303 */ 'L', 'W', 'R', '6', '4', 0,
  /* 1309 */ 'S', 'W', 'R', '6', '4', 0,
  /* 1315 */ 'S', 'L', 'T', '6', '4', 0,
  /* 1321 */ 'L', 'W', '6', '4', 0,
  /* 1326 */ 'S', 'W', '6', '4', 0,
  /* 1331 */ 'B', 'G', 'E', 'Z', '6', '4', 0,
  /* 1338 */ 'B', 'L', 'E', 'Z', '6', '4', 0,
  /* 1345 */ 'B', 'G', 'T', 'Z', '6', '4', 0,
  /* 1352 */ 'B', 'L', 'T', 'Z', '6', '4', 0,
  /* 1359 */ 'S', 'L', 'L', '6', '4', '_', '6', '4', 0,
  /* 1368 */ 'X', 'O', 'R', 'i', '6', '4', 0,
  /* 1375 */ 'S', 'L', 'T', 'i', '6', '4', 0,
  /* 1382 */ 'L', 'U', 'i', '6', '4', 0,
  /* 1388 */ 'M', 'I', 'P', 'S', 'e', 'h', '_', 'r', 'e', 't', 'u', 'r', 'n', '6', '4', 0,
  /* 1404 */ 'L', 'B', 'u', '6', '4', 0,
  /* 1410 */ 'L', 'H', 'u', '6', '4', 0,
  /* 1416 */ 'S', 'L', 'T', 'u', '6', '4', 0,
  /* 1423 */ 'L', 'W', 'u', '6', '4', 0,
  /* 1429 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', '6', '4', 0,
  /* 1441 */ 'S', 'L', 'T', 'i', 'u', '6', '4', 0,
  /* 1449 */ 'M', 'o', 'v', 'e', 'R', '3', '2', '1', '6', 0,
  /* 1459 */ 'R', 'e', 't', 'R', 'A', '1', '6', 0,
  /* 1467 */ 'R', 'e', 's', 't', 'o', 'r', 'e', 'R', 'a', 'F', '1', '6', 0,
  /* 1480 */ 'S', 'a', 'v', 'e', 'R', 'a', 'F', '1', '6', 0,
  /* 1490 */ 'S', 'a', 'v', 'e', 'D', 'e', 'c', 'S', 'p', 'F', '1', '6', 0,
  /* 1503 */ 'R', 'e', 's', 't', 'o', 'r', 'e', 'I', 'n', 'c', 'S', 'p', 'F', '1', '6', 0,
  /* 1519 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', 0,
  /* 1539 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', 0,
  /* 1559 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 1580 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 1600 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 1616 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 1636 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 1656 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 1675 */ 'M', 'o', 'v', 'e', '3', '2', 'R', '1', '6', 0,
  /* 1685 */ 'S', 'r', 'a', 'X', '1', '6', 0,
  /* 1692 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'C', 'm', 'p', 'i', 'X', '1', '6', 0,
  /* 1707 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'C', 'm', 'p', 'i', 'X', '1', '6', 0,
  /* 1722 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'i', 'X', '1', '6', 0,
  /* 1737 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'i', 'X', '1', '6', 0,
  /* 1752 */ 'S', 'l', 'l', 'X', '1', '6', 0,
  /* 1759 */ 'S', 'r', 'l', 'X', '1', '6', 0,
  /* 1766 */ 'L', 'b', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1782 */ 'S', 'b', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1798 */ 'L', 'h', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1814 */ 'S', 'h', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1830 */ 'L', 'b', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1847 */ 'L', 'h', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1864 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1883 */ 'L', 'w', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1899 */ 'S', 'w', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1915 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'P', 'c', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 1931 */ 'A', 'd', 'd', 'i', 'u', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 1945 */ 'L', 'w', 'R', 'x', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 1958 */ 'S', 'w', 'R', 'x', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 1971 */ 'S', 'l', 't', 'i', 'C', 'C', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 1986 */ 'S', 'l', 't', 'i', 'u', 'C', 'C', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2002 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2013 */ 'C', 'm', 'p', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2026 */ 'S', 'l', 't', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2039 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2053 */ 'S', 'l', 't', 'i', 'u', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2067 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2083 */ 'B', 'n', 'e', 'z', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2096 */ 'B', 'e', 'q', 'z', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2109 */ 'B', 'i', 'm', 'm', 'X', '1', '6', 0,
  /* 2117 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'C', 'm', 'p', 'X', '1', '6', 0,
  /* 2131 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'C', 'm', 'p', 'X', '1', '6', 0,
  /* 2145 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'X', '1', '6', 0,
  /* 2159 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'X', '1', '6', 0,
  /* 2173 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'i', 'u', 'X', '1', '6', 0,
  /* 2189 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'i', 'u', 'X', '1', '6', 0,
  /* 2205 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'u', 'X', '1', '6', 0,
  /* 2220 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'u', 'X', '1', '6', 0,
  /* 2235 */ 'B', 't', 'n', 'e', 'z', 'X', '1', '6', 0,
  /* 2244 */ 'B', 't', 'e', 'q', 'z', 'X', '1', '6', 0,
  /* 2253 */ 'J', 'r', 'c', 'R', 'a', '1', '6', 0,
  /* 2261 */ 'J', 'r', 'R', 'a', '1', '6', 0,
  /* 2268 */ 'J', 'u', 'm', 'p', 'L', 'i', 'n', 'k', 'R', 'e', 'g', '1', '6', 0,
  /* 2282 */ 'M', 'f', 'h', 'i', '1', '6', 0,
  /* 2289 */ 'J', 'a', 'l', '1', '6', 0,
  /* 2295 */ 'A', 'd', 'd', 'i', 'u', 'S', 'p', 'I', 'm', 'm', '1', '6', 0,
  /* 2308 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2318 */ 'C', 'm', 'p', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2330 */ 'S', 'l', 't', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2342 */ 'S', 'l', 't', 'i', 'u', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2355 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2370 */ 'B', 'n', 'e', 'z', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2382 */ 'B', 'e', 'q', 'z', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2394 */ 'M', 'f', 'l', 'o', '1', '6', 0,
  /* 2401 */ 'J', 'r', 'c', 'R', 'x', '1', '6', 0,
  /* 2409 */ 'S', 'l', 't', 'C', 'C', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2421 */ 'S', 'l', 't', 'u', 'C', 'C', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2434 */ 'N', 'e', 'g', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2444 */ 'C', 'm', 'p', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2454 */ 'S', 'l', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2464 */ 'M', 'u', 'l', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2475 */ 'N', 'o', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2485 */ 'S', 'l', 't', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2496 */ 'M', 'u', 'l', 't', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2508 */ 'D', 'i', 'v', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2519 */ 'S', 'r', 'a', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2530 */ 'D', 'i', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2540 */ 'S', 'l', 'l', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2551 */ 'S', 'r', 'l', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2562 */ 'A', 'n', 'd', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2574 */ 'O', 'r', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2585 */ 'X', 'o', 'r', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2597 */ 'M', 'u', 'l', 't', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 2610 */ 'S', 'u', 'b', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 2623 */ 'A', 'd', 'd', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 2636 */ 'S', 'l', 't', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 2649 */ 'M', 'u', 'l', 't', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 2663 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', '1', '2', '8', 0,
  /* 2674 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', '1', '2', '8', 0,
  /* 2686 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', 0,
  /* 2705 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', 0,
  /* 2724 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 2744 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 2763 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 2778 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 2797 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', 0,
  /* 2816 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', 0,
  /* 2834 */ 'L', 'W', 'C', '1', '_', 'P', '8', 0,
  /* 2842 */ 'S', 'W', 'C', '1', '_', 'P', '8', 0,
  /* 2850 */ 'L', 'W', 'X', 'C', '1', '_', 'P', '8', 0,
  /* 2859 */ 'S', 'W', 'X', 'C', '1', '_', 'P', '8', 0,
  /* 2868 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 2891 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 2914 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 2938 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 2961 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 2980 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 3003 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 3026 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 3048 */ 'L', 'D', 'C', '1', '6', '4', '_', 'P', '8', 0,
  /* 3058 */ 'S', 'D', 'C', '1', '6', '4', '_', 'P', '8', 0,
  /* 3068 */ 'L', 'D', 'X', 'C', '1', '6', '4', '_', 'P', '8', 0,
  /* 3079 */ 'S', 'D', 'X', 'C', '1', '6', '4', '_', 'P', '8', 0,
  /* 3090 */ 'L', 'B', '6', '4', '_', 'P', '8', 0,
  /* 3098 */ 'S', 'B', '6', '4', '_', 'P', '8', 0,
  /* 3106 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', '6', '4', '_', 'P', '8', 0,
  /* 3119 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', '6', '4', '_', 'P', '8', 0,
  /* 3133 */ 'L', 'H', '6', '4', '_', 'P', '8', 0,
  /* 3141 */ 'S', 'H', '6', '4', '_', 'P', '8', 0,
  /* 3149 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 3172 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 3195 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 3219 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 3242 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 3261 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 3284 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 3307 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 3329 */ 'L', 'W', 'L', '6', '4', '_', 'P', '8', 0,
  /* 3338 */ 'S', 'W', 'L', '6', '4', '_', 'P', '8', 0,
  /* 3347 */ 'L', 'W', 'R', '6', '4', '_', 'P', '8', 0,
  /* 3356 */ 'S', 'W', 'R', '6', '4', '_', 'P', '8', 0,
  /* 3365 */ 'L', 'W', '6', '4', '_', 'P', '8', 0,
  /* 3373 */ 'S', 'W', '6', '4', '_', 'P', '8', 0,
  /* 3381 */ 'L', 'B', 'u', '6', '4', '_', 'P', '8', 0,
  /* 3390 */ 'L', 'H', 'u', '6', '4', '_', 'P', '8', 0,
  /* 3399 */ 'L', 'W', 'u', '6', '4', '_', 'P', '8', 0,
  /* 3408 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 3431 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 3454 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 3478 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 3501 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 3520 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 3543 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 3566 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 3588 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', '1', '2', '8', '_', 'P', '8', 0,
  /* 3602 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', '1', '2', '8', '_', 'P', '8', 0,
  /* 3617 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', '_', 'P', '8', 0,
  /* 3639 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', '_', 'P', '8', 0,
  /* 3661 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', '_', 'P', '8', 0,
  /* 3684 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', '_', 'P', '8', 0,
  /* 3706 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', '_', 'P', '8', 0,
  /* 3724 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', '_', 'P', '8', 0,
  /* 3746 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', '_', 'P', '8', 0,
  /* 3768 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', '_', 'P', '8', 0,
  /* 3789 */ 'L', 'B', '_', 'P', '8', 0,
  /* 3795 */ 'S', 'B', '_', 'P', '8', 0,
  /* 3801 */ 'S', 'C', '_', 'P', '8', 0,
  /* 3807 */ 'S', 'C', 'D', '_', 'P', '8', 0,
  /* 3814 */ 'L', 'L', 'D', '_', 'P', '8', 0,
  /* 3821 */ 'S', 'D', '_', 'P', '8', 0,
  /* 3827 */ 'L', 'H', '_', 'P', '8', 0,
  /* 3833 */ 'S', 'H', '_', 'P', '8', 0,
  /* 3839 */ 'L', 'D', 'L', '_', 'P', '8', 0,
  /* 3846 */ 'S', 'D', 'L', '_', 'P', '8', 0,
  /* 3853 */ 'L', 'L', '_', 'P', '8', 0,
  /* 3859 */ 'L', 'W', 'L', '_', 'P', '8', 0,
  /* 3866 */ 'S', 'W', 'L', '_', 'P', '8', 0,
  /* 3873 */ 'L', 'B', '_', 'M', 'M', '_', 'P', '8', 0,
  /* 3882 */ 'S', 'B', '_', 'M', 'M', '_', 'P', '8', 0,
  /* 3891 */ 'L', 'H', '_', 'M', 'M', '_', 'P', '8', 0,
  /* 3900 */ 'S', 'H', '_', 'M', 'M', '_', 'P', '8', 0,
  /* 3909 */ 'L', 'W', '_', 'M', 'M', '_', 'P', '8', 0,
  /* 3918 */ 'S', 'W', '_', 'M', 'M', '_', 'P', '8', 0,
  /* 3927 */ 'L', 'B', 'u', '_', 'M', 'M', '_', 'P', '8', 0,
  /* 3937 */ 'L', 'H', 'u', '_', 'M', 'M', '_', 'P', '8', 0,
  /* 3947 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', '_', 'D', 'S', 'P', '_', 'P', '8', 0,
  /* 3962 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', '_', 'D', 'S', 'P', '_', 'P', '8', 0,
  /* 3978 */ 'L', 'O', 'A', 'D', '_', 'C', 'C', 'O', 'N', 'D', '_', 'D', 'S', 'P', '_', 'P', '8', 0,
  /* 3996 */ 'S', 'T', 'O', 'R', 'E', '_', 'C', 'C', 'O', 'N', 'D', '_', 'D', 'S', 'P', '_', 'P', '8', 0,
  /* 4015 */ 'L', 'D', 'R', '_', 'P', '8', 0,
  /* 4022 */ 'S', 'D', 'R', '_', 'P', '8', 0,
  /* 4029 */ 'L', 'W', 'R', '_', 'P', '8', 0,
  /* 4036 */ 'S', 'W', 'R', '_', 'P', '8', 0,
  /* 4043 */ 'L', 'W', '_', 'P', '8', 0,
  /* 4049 */ 'S', 'W', '_', 'P', '8', 0,
  /* 4055 */ 'L', 'B', 'u', '_', 'P', '8', 0,
  /* 4062 */ 'L', 'H', 'u', '_', 'P', '8', 0,
  /* 4069 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', 0,
  /* 4084 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', 0,
  /* 4100 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', 0,
  /* 4115 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', 0,
  /* 4131 */ 'D', 'S', 'R', 'A', 0,
  /* 4136 */ 'R', 'e', 't', 'R', 'A', 0,
  /* 4142 */ 'S', 'E', 'B', 0,
  /* 4146 */ 'L', 'B', 0,
  /* 4149 */ 'S', 'H', 'R', 'A', '_', 'Q', 'B', 0,
  /* 4157 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 4170 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 4182 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 4199 */ 'S', 'U', 'B', 'U', 'H', '_', 'Q', 'B', 0,
  /* 4208 */ 'A', 'D', 'D', 'U', 'H', '_', 'Q', 'B', 0,
  /* 4217 */ 'P', 's', 'e', 'u', 'd', 'o', 'P', 'I', 'C', 'K', '_', 'Q', 'B', 0,
  /* 4231 */ 'S', 'H', 'L', 'L', '_', 'Q', 'B', 0,
  /* 4239 */ 'R', 'E', 'P', 'L', '_', 'Q', 'B', 0,
  /* 4247 */ 'S', 'H', 'R', 'L', '_', 'Q', 'B', 0,
  /* 4255 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 4268 */ 'C', 'M', 'P', 'G', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 4280 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 4297 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'Q', 'B', 0,
  /* 4307 */ 'S', 'U', 'B', 'U', 'H', '_', 'R', '_', 'Q', 'B', 0,
  /* 4318 */ 'A', 'D', 'D', 'U', 'H', '_', 'R', '_', 'Q', 'B', 0,
  /* 4329 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'Q', 'B', 0,
  /* 4340 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'Q', 'B', 0,
  /* 4350 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'Q', 'B', 0,
  /* 4360 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'Q', 'B', 0,
  /* 4370 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 4383 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 4395 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 4412 */ 'S', 'U', 'B', 'U', '_', 'Q', 'B', 0,
  /* 4420 */ 'A', 'D', 'D', 'U', '_', 'Q', 'B', 0,
  /* 4428 */ 'S', 'H', 'R', 'A', 'V', '_', 'Q', 'B', 0,
  /* 4437 */ 'S', 'H', 'L', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4446 */ 'R', 'E', 'P', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4455 */ 'S', 'H', 'R', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4464 */ 'R', 'A', 'D', 'D', 'U', '_', 'W', '_', 'Q', 'B', 0,
  /* 4475 */ 'S', 'B', 0,
  /* 4478 */ 'M', 'O', 'D', 'S', 'U', 'B', 0,
  /* 4485 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'S', 'U', 'B', 0,
  /* 4496 */ 'S', 'Y', 'N', 'C', 0,
  /* 4501 */ 'A', 'D', 'D', 'S', 'C', 0,
  /* 4507 */ 'A', 'D', 'D', 'W', 'C', 0,
  /* 4513 */ 'S', 'C', 'D', 0,
  /* 4517 */ 'D', 'A', 'D', 'D', 0,
  /* 4522 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'A', 'D', 'D', 0,
  /* 4533 */ 'D', 'S', 'H', 'D', 0,
  /* 4538 */ 'L', 'L', 'D', 0,
  /* 4542 */ 'A', 'N', 'D', 0,
  /* 4546 */ 'P', 'R', 'E', 'P', 'E', 'N', 'D', 0,
  /* 4554 */ 'A', 'P', 'P', 'E', 'N', 'D', 0,
  /* 4561 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 4574 */ 'S', 'D', 0,
  /* 4577 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 4590 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 4597 */ 'B', 'N', 'E', 0,
  /* 4601 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 4611 */ 'B', 'C', '1', 'F', 0,
  /* 4616 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 4629 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 4644 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 4658 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 4672 */ 'D', 'S', 'B', 'H', 0,
  /* 4677 */ 'W', 'S', 'B', 'H', 0,
  /* 4682 */ 'S', 'E', 'H', 0,
  /* 4686 */ 'L', 'H', 0,
  /* 4689 */ 'S', 'H', 'R', 'A', '_', 'P', 'H', 0,
  /* 4697 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 4710 */ 'P', 'R', 'E', 'C', 'R', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 4722 */ 'P', 'R', 'E', 'C', 'R', 'Q', 'U', '_', 'S', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 4738 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'L', 'E', '_', 'P', 'H', 0,
  /* 4754 */ 'S', 'U', 'B', 'Q', 'H', '_', 'P', 'H', 0,
  /* 4763 */ 'A', 'D', 'D', 'Q', 'H', '_', 'P', 'H', 0,
  /* 4772 */ 'P', 's', 'e', 'u', 'd', 'o', 'P', 'I', 'C', 'K', '_', 'P', 'H', 0,
  /* 4786 */ 'S', 'H', 'L', 'L', '_', 'P', 'H', 0,
  /* 4794 */ 'R', 'E', 'P', 'L', '_', 'P', 'H', 0,
  /* 4802 */ 'S', 'H', 'R', 'L', '_', 'P', 'H', 0,
  /* 4810 */ 'P', 'A', 'C', 'K', 'R', 'L', '_', 'P', 'H', 0,
  /* 4820 */ 'M', 'U', 'L', '_', 'P', 'H', 0,
  /* 4827 */ 'S', 'U', 'B', 'Q', '_', 'P', 'H', 0,
  /* 4835 */ 'A', 'D', 'D', 'Q', '_', 'P', 'H', 0,
  /* 4843 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'E', 'Q', '_', 'P', 'H', 0,
  /* 4859 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'P', 'H', 0,
  /* 4869 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'P', 'H', 0,
  /* 4880 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'P', 'H', 0,
  /* 4891 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'P', 'H', 0,
  /* 4902 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'P', 'H', 0,
  /* 4913 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'P', 'H', 0,
  /* 4923 */ 'M', 'U', 'L', '_', 'S', '_', 'P', 'H', 0,
  /* 4932 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 4942 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 4952 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 4962 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 4972 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'P', 'H', 0,
  /* 4982 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'P', 'H', 0,
  /* 4992 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'P', 'H', 0,
  /* 5003 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'L', 'T', '_', 'P', 'H', 0,
  /* 5019 */ 'S', 'U', 'B', 'U', '_', 'P', 'H', 0,
  /* 5027 */ 'A', 'D', 'D', 'U', '_', 'P', 'H', 0,
  /* 5035 */ 'S', 'H', 'R', 'A', 'V', '_', 'P', 'H', 0,
  /* 5044 */ 'S', 'H', 'L', 'L', 'V', '_', 'P', 'H', 0,
  /* 5053 */ 'R', 'E', 'P', 'L', 'V', '_', 'P', 'H', 0,
  /* 5062 */ 'S', 'H', 'R', 'L', 'V', '_', 'P', 'H', 0,
  /* 5071 */ 'D', 'P', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 5080 */ 'M', 'U', 'L', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 5091 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 5105 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 5119 */ 'D', 'P', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 5128 */ 'D', 'P', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 5140 */ 'M', 'U', 'L', 'S', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 5154 */ 'D', 'P', 'S', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 5166 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 5179 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 5192 */ 'D', 'P', 'A', 'X', '_', 'W', '_', 'P', 'H', 0,
  /* 5202 */ 'D', 'P', 'S', 'X', '_', 'W', '_', 'P', 'H', 0,
  /* 5212 */ 'S', 'H', 0,
  /* 5215 */ 'E', 'X', 'T', 'R', '_', 'S', '_', 'H', 0,
  /* 5224 */ 'E', 'X', 'T', 'R', 'V', '_', 'S', '_', 'H', 0,
  /* 5234 */ 'M', 'F', 'H', 'I', 0,
  /* 5239 */ 'P', 'H', 'I', 0,
  /* 5243 */ 'M', 'T', 'H', 'I', 0,
  /* 5248 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', 0,
  /* 5259 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', 0,
  /* 5270 */ 'M', 'O', 'V', 'F', '_', 'I', 0,
  /* 5277 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', 0,
  /* 5286 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', 0,
  /* 5295 */ 'M', 'O', 'V', 'T', '_', 'I', 0,
  /* 5302 */ 'J', 0,
  /* 5304 */ 'J', 'A', 'L', 0,
  /* 5308 */ 'B', 'G', 'E', 'Z', 'A', 'L', 0,
  /* 5315 */ 'B', 'L', 'T', 'Z', 'A', 'L', 0,
  /* 5322 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 5337 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 5351 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 5366 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'L', 0,
  /* 5377 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'L', 0,
  /* 5388 */ 'L', 'D', 'L', 0,
  /* 5392 */ 'S', 'D', 'L', 0,
  /* 5396 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 5405 */ 'P', 'R', 'O', 'L', 'O', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 5418 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 5427 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 5440 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 5453 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 5465 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 5479 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', 0,
  /* 5488 */ 'K', 'I', 'L', 'L', 0,
  /* 5493 */ 'D', 'S', 'L', 'L', 0,
  /* 5498 */ 'D', 'S', 'R', 'L', 0,
  /* 5503 */ 'M', 'U', 'L', 0,
  /* 5507 */ 'L', 'W', 'L', 0,
  /* 5511 */ 'S', 'W', 'L', 0,
  /* 5515 */ 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'L', 0,
  /* 5525 */ 'C', 'V', 'T', '_', 'S', '_', 'L', 0,
  /* 5533 */ 'S', 'R', 'A', '_', 'M', 'M', 0,
  /* 5540 */ 'L', 'B', '_', 'M', 'M', 0,
  /* 5546 */ 'S', 'B', '_', 'M', 'M', 0,
  /* 5552 */ 'S', 'U', 'B', '_', 'M', 'M', 0,
  /* 5559 */ 'A', 'D', 'D', '_', 'M', 'M', 0,
  /* 5566 */ 'A', 'N', 'D', '_', 'M', 'M', 0,
  /* 5573 */ 'L', 'H', '_', 'M', 'M', 0,
  /* 5579 */ 'S', 'H', '_', 'M', 'M', 0,
  /* 5585 */ 'S', 'L', 'L', '_', 'M', 'M', 0,
  /* 5592 */ 'S', 'R', 'L', '_', 'M', 'M', 0,
  /* 5599 */ 'M', 'U', 'L', '_', 'M', 'M', 0,
  /* 5606 */ 'N', 'O', 'R', '_', 'M', 'M', 0,
  /* 5613 */ 'X', 'O', 'R', '_', 'M', 'M', 0,
  /* 5620 */ 'R', 'O', 'T', 'R', '_', 'M', 'M', 0,
  /* 5628 */ 'S', 'L', 'T', '_', 'M', 'M', 0,
  /* 5635 */ 'M', 'U', 'L', 'T', '_', 'M', 'M', 0,
  /* 5643 */ 'S', 'R', 'A', 'V', '_', 'M', 'M', 0,
  /* 5651 */ 'S', 'L', 'L', 'V', '_', 'M', 'M', 0,
  /* 5659 */ 'S', 'R', 'L', 'V', '_', 'M', 'M', 0,
  /* 5667 */ 'R', 'O', 'T', 'R', 'V', '_', 'M', 'M', 0,
  /* 5676 */ 'L', 'W', '_', 'M', 'M', 0,
  /* 5682 */ 'S', 'W', '_', 'M', 'M', 0,
  /* 5688 */ 'A', 'D', 'D', 'i', '_', 'M', 'M', 0,
  /* 5696 */ 'A', 'N', 'D', 'i', '_', 'M', 'M', 0,
  /* 5704 */ 'X', 'O', 'R', 'i', '_', 'M', 'M', 0,
  /* 5712 */ 'S', 'L', 'T', 'i', '_', 'M', 'M', 0,
  /* 5720 */ 'L', 'U', 'i', '_', 'M', 'M', 0,
  /* 5727 */ 'L', 'B', 'u', '_', 'M', 'M', 0,
  /* 5734 */ 'S', 'U', 'B', 'u', '_', 'M', 'M', 0,
  /* 5742 */ 'A', 'D', 'D', 'u', '_', 'M', 'M', 0,
  /* 5750 */ 'L', 'H', 'u', '_', 'M', 'M', 0,
  /* 5757 */ 'S', 'L', 'T', 'u', '_', 'M', 'M', 0,
  /* 5765 */ 'M', 'U', 'L', 'T', 'u', '_', 'M', 'M', 0,
  /* 5774 */ 'A', 'D', 'D', 'i', 'u', '_', 'M', 'M', 0,
  /* 5783 */ 'S', 'L', 'T', 'i', 'u', '_', 'M', 'M', 0,
  /* 5792 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 5802 */ 'D', 'I', 'N', 'S', 'M', 0,
  /* 5808 */ 'D', 'E', 'X', 'T', 'M', 0,
  /* 5814 */ 'B', 'A', 'L', 'I', 'G', 'N', 0,
  /* 5821 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 5838 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5854 */ 'D', 'C', 'L', 'O', 0,
  /* 5859 */ 'M', 'F', 'L', 'O', 0,
  /* 5864 */ 'S', 'H', 'I', 'L', 'O', 0,
  /* 5870 */ 'M', 'T', 'L', 'O', 0,
  /* 5875 */ 'E', 'X', 'T', 'P', 'D', 'P', 0,
  /* 5882 */ 'M', 'T', 'H', 'L', 'I', 'P', 0,
  /* 5889 */ 'M', 'F', 'C', '0', '_', '3', 'O', 'P', 0,
  /* 5898 */ 'M', 'T', 'C', '0', '_', '3', 'O', 'P', 0,
  /* 5907 */ 'M', 'F', 'C', '2', '_', '3', 'O', 'P', 0,
  /* 5916 */ 'M', 'T', 'C', '2', '_', '3', 'O', 'P', 0,
  /* 5925 */ 'N', 'O', 'P', 0,
  /* 5929 */ 'R', 'D', 'D', 'S', 'P', 0,
  /* 5935 */ 'W', 'R', 'D', 'S', 'P', 0,
  /* 5941 */ 'M', 'S', 'U', 'B', '_', 'D', 'S', 'P', 0,
  /* 5950 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', '_', 'D', 'S', 'P', 0,
  /* 5962 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', '_', 'D', 'S', 'P', 0,
  /* 5975 */ 'M', 'A', 'D', 'D', '_', 'D', 'S', 'P', 0,
  /* 5984 */ 'L', 'O', 'A', 'D', '_', 'C', 'C', 'O', 'N', 'D', '_', 'D', 'S', 'P', 0,
  /* 5999 */ 'S', 'T', 'O', 'R', 'E', '_', 'C', 'C', 'O', 'N', 'D', '_', 'D', 'S', 'P', 0,
  /* 6015 */ 'M', 'F', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 6024 */ 'M', 'T', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 6033 */ 'M', 'F', 'L', 'O', '_', 'D', 'S', 'P', 0,
  /* 6042 */ 'M', 'T', 'L', 'O', '_', 'D', 'S', 'P', 0,
  /* 6051 */ 'M', 'U', 'L', 'T', '_', 'D', 'S', 'P', 0,
  /* 6060 */ 'M', 'S', 'U', 'B', 'U', '_', 'D', 'S', 'P', 0,
  /* 6070 */ 'M', 'A', 'D', 'D', 'U', '_', 'D', 'S', 'P', 0,
  /* 6080 */ 'M', 'U', 'L', 'T', 'U', '_', 'D', 'S', 'P', 0,
  /* 6090 */ 'E', 'X', 'T', 'P', 0,
  /* 6095 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 6110 */ 'B', 'E', 'Q', 0,
  /* 6114 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 6129 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 6143 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 6158 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'R', 0,
  /* 6169 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'R', 0,
  /* 6180 */ 'B', 'A', 'L', '_', 'B', 'R', 0,
  /* 6187 */ 'M', 'O', 'V', 'C', 'C', 'R', 'T', 'o', 'C', 'C', 'R', 0,
  /* 6199 */ 'L', 'D', 'R', 0,
  /* 6203 */ 'S', 'D', 'R', 0,
  /* 6207 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 6220 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 6233 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 6245 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 6259 */ 'J', 'R', 0,
  /* 6262 */ 'J', 'A', 'L', 'R', 0,
  /* 6267 */ 'N', 'O', 'R', 0,
  /* 6271 */ 'X', 'O', 'R', 0,
  /* 6275 */ 'D', 'R', 'O', 'T', 'R', 0,
  /* 6281 */ 'R', 'D', 'H', 'W', 'R', 0,
  /* 6287 */ 'L', 'W', 'R', 0,
  /* 6291 */ 'S', 'W', 'R', 0,
  /* 6295 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', '6', '4', '_', 'R', 0,
  /* 6308 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', '_', 'R', 0,
  /* 6319 */ 'D', 'I', 'N', 'S', 0,
  /* 6324 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 6341 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'S', 0,
  /* 6351 */ 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'S', 0,
  /* 6361 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'S', 0,
  /* 6372 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'S', 0,
  /* 6383 */ 'F', 'S', 'U', 'B', '_', 'S', 0,
  /* 6390 */ 'N', 'M', 'S', 'U', 'B', '_', 'S', 0,
  /* 6398 */ 'F', 'A', 'D', 'D', '_', 'S', 0,
  /* 6405 */ 'N', 'M', 'A', 'D', 'D', '_', 'S', 0,
  /* 6413 */ 'M', 'O', 'V', 'F', '_', 'S', 0,
  /* 6420 */ 'F', 'N', 'E', 'G', '_', 'S', 0,
  /* 6427 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'S', 0,
  /* 6436 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'S', 0,
  /* 6445 */ 'F', 'M', 'U', 'L', '_', 'S', 0,
  /* 6452 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'S', 0,
  /* 6462 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'S', 0,
  /* 6472 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'S', 0,
  /* 6481 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'S', 0,
  /* 6491 */ 'C', 'V', 'T', '_', 'L', '_', 'S', 0,
  /* 6499 */ 'F', 'A', 'B', 'S', '_', 'S', 0,
  /* 6506 */ 'F', 'S', 'Q', 'R', 'T', '_', 'S', 0,
  /* 6514 */ 'M', 'O', 'V', 'T', '_', 'S', 0,
  /* 6521 */ 'F', 'D', 'I', 'V', '_', 'S', 0,
  /* 6528 */ 'F', 'M', 'O', 'V', '_', 'S', 0,
  /* 6535 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'S', 0,
  /* 6545 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'S', 0,
  /* 6555 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'S', 0,
  /* 6564 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'S', 0,
  /* 6574 */ 'C', 'V', 'T', '_', 'W', '_', 'S', 0,
  /* 6582 */ 'B', 'C', '1', 'T', 0,
  /* 6587 */ 'R', 'E', 'T', 0,
  /* 6591 */ 'S', 'L', 'T', 0,
  /* 6595 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'M', 'U', 'L', 'T', 0,
  /* 6607 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'U', 'L', 'T', 0,
  /* 6618 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 6633 */ 'D', 'E', 'X', 'T', 0,
  /* 6638 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'S', 'U', 'B', 'U', 0,
  /* 6650 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'A', 'D', 'D', 'U', 0,
  /* 6662 */ 'D', 'I', 'N', 'S', 'U', 0,
  /* 6668 */ 'D', 'E', 'X', 'T', 'U', 0,
  /* 6674 */ 'D', 'S', 'R', 'A', 'V', 0,
  /* 6680 */ 'B', 'I', 'T', 'R', 'E', 'V', 0,
  /* 6687 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'S', 'D', 'I', 'V', 0,
  /* 6699 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'D', 'I', 'V', 0,
  /* 6710 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'U', 'D', 'I', 'V', 0,
  /* 6722 */ 'P', 's', 'e', 'u', 'd', 'o', 'U', 'D', 'I', 'V', 0,
  /* 6733 */ 'D', 'S', 'L', 'L', 'V', 0,
  /* 6739 */ 'D', 'S', 'R', 'L', 'V', 0,
  /* 6745 */ 'S', 'H', 'I', 'L', 'O', 'V', 0,
  /* 6752 */ 'E', 'X', 'T', 'P', 'D', 'P', 'V', 0,
  /* 6760 */ 'E', 'X', 'T', 'P', 'V', 0,
  /* 6766 */ 'D', 'R', 'O', 'T', 'R', 'V', 0,
  /* 6773 */ 'I', 'N', 'S', 'V', 0,
  /* 6778 */ 'L', 'W', 0,
  /* 6781 */ 'S', 'W', 0,
  /* 6784 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'W', 0,
  /* 6794 */ 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'W', 0,
  /* 6804 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'P', 'H', '_', 'W', 0,
  /* 6819 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'P', 'H', '_', 'W', 0,
  /* 6831 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'R', '_', 'P', 'H', '_', 'W', 0,
  /* 6848 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'R', 'S', '_', 'P', 'H', '_', 'W', 0,
  /* 6863 */ 'S', 'U', 'B', 'Q', 'H', '_', 'W', 0,
  /* 6871 */ 'A', 'D', 'D', 'Q', 'H', '_', 'W', 0,
  /* 6879 */ 'D', 'P', 'A', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', 0,
  /* 6891 */ 'D', 'P', 'S', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', 0,
  /* 6903 */ 'E', 'X', 'T', 'R', '_', 'W', 0,
  /* 6910 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'W', 0,
  /* 6919 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'W', 0,
  /* 6929 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'W', 0,
  /* 6939 */ 'E', 'X', 'T', 'R', '_', 'R', '_', 'W', 0,
  /* 6948 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'W', 0,
  /* 6958 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', '_', 'W', 0,
  /* 6968 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'W', 0,
  /* 6978 */ 'E', 'X', 'T', 'R', '_', 'R', 'S', '_', 'W', 0,
  /* 6988 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', 'S', '_', 'W', 0,
  /* 6999 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'W', 0,
  /* 7008 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'W', 0,
  /* 7017 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'W', 0,
  /* 7026 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'W', 0,
  /* 7035 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'W', 0,
  /* 7044 */ 'C', 'V', 'T', '_', 'S', '_', 'W', 0,
  /* 7052 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'W', 0,
  /* 7062 */ 'E', 'X', 'T', 'R', 'V', '_', 'W', 0,
  /* 7070 */ 'L', 'H', 'X', 0,
  /* 7074 */ 'L', 'B', 'U', 'X', 0,
  /* 7079 */ 'L', 'W', 'X', 0,
  /* 7083 */ 'C', 'O', 'P', 'Y', 0,
  /* 7088 */ 'B', 'G', 'E', 'Z', 0,
  /* 7093 */ 'B', 'L', 'E', 'Z', 0,
  /* 7098 */ 'D', 'C', 'L', 'Z', 0,
  /* 7103 */ 'B', 'G', 'T', 'Z', 0,
  /* 7108 */ 'B', 'L', 'T', 'Z', 0,
  /* 7113 */ 'S', 'e', 'l', 'B', 'n', 'e', 'Z', 0,
  /* 7121 */ 'S', 'e', 'l', 'B', 'e', 'q', 'Z', 0,
  /* 7129 */ 'L', 'o', 'a', 'd', 'I', 'm', 'm', '3', '2', 'R', 'e', 'g', 0,
  /* 7142 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', '3', '2', 'R', 'e', 'g', 0,
  /* 7156 */ 'D', 'A', 'D', 'D', 'i', 0,
  /* 7162 */ 'D', 'A', 'N', 'D', 'i', 0,
  /* 7168 */ 'X', 'O', 'R', 'i', 0,
  /* 7173 */ 'S', 'L', 'T', 'i', 0,
  /* 7178 */ 'L', 'U', 'i', 0,
  /* 7182 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'C', 'm', 'p', 'i', 0,
  /* 7196 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'C', 'm', 'p', 'i', 0,
  /* 7210 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'i', 0,
  /* 7224 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'i', 0,
  /* 7238 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', '3', '2', 'I', 'm', 'm', 0,
  /* 7252 */ 'J', 'A', 'L', 'R', '6', '4', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 7265 */ 'J', 'A', 'L', 'R', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 7276 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'C', 'm', 'p', 0,
  /* 7289 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'C', 'm', 'p', 0,
  /* 7302 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 0,
  /* 7315 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 0,
  /* 7328 */ 'L', 'B', 'u', 0,
  /* 7332 */ 'D', 'S', 'U', 'B', 'u', 0,
  /* 7338 */ 'D', 'A', 'D', 'D', 'u', 0,
  /* 7344 */ 'L', 'H', 'u', 0,
  /* 7348 */ 'S', 'L', 'T', 'u', 0,
  /* 7353 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'M', 'U', 'L', 'T', 'u', 0,
  /* 7366 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'U', 'L', 'T', 'u', 0,
  /* 7378 */ 'D', 'A', 'D', 'D', 'i', 'u', 0,
  /* 7385 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', 0,
  /* 7395 */ 'S', 'L', 'T', 'i', 'u', 0,
  /* 7401 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'i', 'u', 0,
  /* 7416 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'i', 'u', 0,
  /* 7431 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'u', 0,
  /* 7445 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'u', 0,
};

extern const unsigned MipsInstrNameIndices[] = {
    5239U, 5792U, 5405U, 5418U, 5396U, 5488U, 4629U, 4644U, 
    4616U, 4658U, 6324U, 4601U, 4577U, 7083U, 4590U, 6618U, 
    4561U, 4962U, 4340U, 7035U, 4518U, 4763U, 4880U, 6929U, 
    6871U, 4835U, 4942U, 7017U, 4501U, 4208U, 4318U, 5027U, 
    4420U, 4982U, 4360U, 4507U, 5559U, 7157U, 5688U, 7379U, 
    5774U, 7339U, 5742U, 5821U, 6095U, 4542U, 604U, 5566U, 
    7163U, 5696U, 4554U, 1616U, 3520U, 400U, 2980U, 1123U, 
    3261U, 2778U, 3724U, 1539U, 3431U, 323U, 2891U, 1015U, 
    3172U, 2705U, 3639U, 1580U, 3478U, 364U, 2938U, 1056U, 
    3219U, 2744U, 3684U, 1559U, 3454U, 343U, 2914U, 1035U, 
    3195U, 2724U, 3661U, 1656U, 3566U, 440U, 3026U, 1163U, 
    3307U, 2816U, 3768U, 1519U, 3408U, 303U, 2868U, 995U, 
    3149U, 2686U, 3617U, 1636U, 3543U, 420U, 3003U, 1143U, 
    3284U, 2797U, 3746U, 1600U, 3501U, 384U, 2961U, 1107U, 
    3242U, 2763U, 3706U, 2039U, 1915U, 2355U, 2067U, 1864U, 
    2295U, 1931U, 2623U, 2562U, 4144U, 5814U, 6180U, 4611U, 
    6582U, 6110U, 1265U, 7088U, 1331U, 5308U, 7103U, 1345U, 
    6680U, 7093U, 1338U, 7108U, 1352U, 5315U, 4597U, 902U, 
    294U, 5838U, 2382U, 2096U, 2109U, 2370U, 2083U, 2131U, 
    1707U, 2159U, 1737U, 2189U, 2220U, 2244U, 2117U, 1692U, 
    2145U, 1722U, 2173U, 2205U, 2235U, 908U, 747U, 6472U, 
    261U, 869U, 6555U, 10U, 5855U, 7099U, 4255U, 4157U, 
    4370U, 4268U, 4170U, 4383U, 4286U, 4188U, 4401U, 4849U, 
    4744U, 5009U, 21U, 6341U, 6784U, 5515U, 6351U, 6794U, 
    770U, 6491U, 190U, 798U, 5525U, 7044U, 284U, 892U, 
    6574U, 2444U, 2318U, 2013U, 510U, 4517U, 7156U, 7378U, 
    7338U, 7162U, 5854U, 7098U, 6633U, 5808U, 6668U, 6319U, 
    5802U, 6662U, 1217U, 15U, 1241U, 1229U, 26U, 1253U, 
    6601U, 7359U, 5091U, 5166U, 6879U, 5128U, 5366U, 6158U, 
    5192U, 5071U, 5105U, 5179U, 6891U, 5154U, 5377U, 6169U, 
    5202U, 5119U, 6275U, 6766U, 4672U, 6693U, 4533U, 5493U, 
    459U, 482U, 6733U, 4131U, 78U, 6674U, 5498U, 466U, 
    6739U, 7332U, 6716U, 2530U, 2508U, 6634U, 6090U, 5875U, 
    6752U, 6760U, 6988U, 6958U, 5224U, 7062U, 6978U, 6939U, 
    5215U, 6903U, 921U, 181U, 789U, 6499U, 104U, 655U, 
    6398U, 172U, 780U, 473U, 219U, 827U, 6521U, 758U, 
    6481U, 272U, 880U, 6564U, 228U, 836U, 6528U, 163U, 
    714U, 6445U, 132U, 683U, 6420U, 200U, 808U, 6506U, 
    85U, 636U, 6383U, 6320U, 6773U, 5302U, 5304U, 6262U, 
    1276U, 7252U, 7265U, 6259U, 1271U, 2289U, 2261U, 2253U, 
    2401U, 2268U, 4146U, 573U, 3090U, 7074U, 5540U, 3873U, 
    3789U, 7328U, 1404U, 3381U, 5727U, 3927U, 4055U, 4539U, 
    0U, 521U, 3048U, 5388U, 3839U, 6199U, 4015U, 42U, 
    535U, 3068U, 3815U, 7385U, 1429U, 4686U, 945U, 3133U, 
    7070U, 5573U, 3891U, 3827U, 7344U, 1410U, 3390U, 5750U, 
    3937U, 4062U, 5485U, 4538U, 3814U, 3853U, 2663U, 3588U, 
    583U, 3106U, 5950U, 3947U, 5984U, 3978U, 54U, 551U, 
    7178U, 1382U, 5720U, 6778U, 1321U, 3365U, 32U, 2834U, 
    5507U, 1191U, 3329U, 3859U, 6287U, 1303U, 3347U, 4029U, 
    7079U, 66U, 2850U, 5676U, 3909U, 4043U, 1423U, 3399U, 
    1766U, 1830U, 1798U, 1847U, 2308U, 2002U, 7238U, 7142U, 
    7129U, 508U, 1883U, 1945U, 4528U, 6656U, 6070U, 114U, 
    665U, 5975U, 6406U, 5427U, 6207U, 5453U, 6233U, 5889U, 
    16U, 5907U, 5234U, 955U, 6015U, 5859U, 1203U, 6033U, 
    492U, 1388U, 4478U, 6187U, 123U, 674U, 5270U, 1076U, 
    6413U, 610U, 5248U, 969U, 6361U, 141U, 692U, 5277U, 
    1085U, 6427U, 210U, 818U, 5295U, 1182U, 6514U, 623U, 
    5259U, 982U, 6372U, 152U, 703U, 5286U, 1096U, 6436U, 
    4491U, 6644U, 6060U, 95U, 646U, 5941U, 6391U, 5898U, 
    27U, 5916U, 5243U, 962U, 6024U, 5882U, 5870U, 1210U, 
    6042U, 5503U, 5465U, 6245U, 5322U, 6114U, 4902U, 6968U, 
    4952U, 7026U, 5140U, 5080U, 6602U, 6080U, 6051U, 5635U, 
    7360U, 5765U, 5599U, 4820U, 4923U, 2282U, 2394U, 1675U, 
    1449U, 2464U, 2597U, 2496U, 2649U, 113U, 664U, 6405U, 
    94U, 645U, 6390U, 5925U, 6267U, 1283U, 5606U, 2434U, 
    2475U, 6268U, 1284U, 5607U, 7169U, 1369U, 5705U, 2574U, 
    4810U, 4778U, 4223U, 5351U, 4084U, 6143U, 4115U, 5440U, 
    6220U, 5337U, 4069U, 6129U, 4100U, 4722U, 6819U, 4697U, 
    6848U, 4710U, 6804U, 6831U, 4546U, 4280U, 4182U, 4395U, 
    4843U, 4738U, 5003U, 6595U, 7353U, 6687U, 6710U, 4522U, 
    6650U, 4485U, 6638U, 6607U, 7366U, 4772U, 4217U, 6699U, 
    6722U, 4464U, 5929U, 6281U, 1295U, 5053U, 4446U, 4794U, 
    4239U, 6587U, 6276U, 6767U, 5667U, 5620U, 735U, 6462U, 
    249U, 857U, 6545U, 1503U, 1467U, 4136U, 1459U, 4475U, 
    578U, 3098U, 5546U, 3882U, 3795U, 4504U, 4513U, 3807U, 
    3801U, 4574U, 5U, 528U, 3058U, 6694U, 5392U, 3846U, 
    6203U, 4022U, 48U, 543U, 3079U, 3821U, 4142U, 567U, 
    4682U, 939U, 5212U, 950U, 3141U, 5864U, 6745U, 5044U, 
    4437U, 4992U, 7052U, 4786U, 4231U, 4913U, 6999U, 5035U, 
    4428U, 4891U, 4329U, 6948U, 4689U, 4149U, 4859U, 4297U, 
    6910U, 5062U, 4455U, 4802U, 4247U, 5579U, 3900U, 3833U, 
    5494U, 483U, 1359U, 6734U, 5651U, 5585U, 6591U, 1315U, 
    5628U, 7173U, 1375U, 5712U, 7395U, 1441U, 5783U, 7348U, 
    1416U, 5757U, 4132U, 6675U, 5643U, 5533U, 5499U, 6740U, 
    5659U, 5592U, 2674U, 3602U, 593U, 3119U, 5962U, 3962U, 
    5999U, 3996U, 4481U, 4754U, 4869U, 6919U, 6863U, 4827U, 
    4932U, 7008U, 4199U, 4307U, 5019U, 4412U, 4972U, 4350U, 
    5552U, 7333U, 5734U, 60U, 559U, 6781U, 1326U, 3373U, 
    37U, 2842U, 5511U, 1197U, 3338U, 3866U, 6291U, 1309U, 
    3356U, 4036U, 72U, 2859U, 5682U, 3918U, 4049U, 4496U, 
    1490U, 1480U, 1782U, 7121U, 7113U, 7289U, 7196U, 7315U, 
    7224U, 7416U, 7445U, 7276U, 7182U, 7302U, 7210U, 7401U, 
    7431U, 1814U, 1752U, 2540U, 2409U, 2454U, 1971U, 2330U, 
    2026U, 1986U, 2342U, 2053U, 2421U, 2485U, 2636U, 1685U, 
    2519U, 1759U, 2551U, 2610U, 1899U, 1958U, 5479U, 6295U, 
    6308U, 723U, 6452U, 237U, 845U, 6535U, 6717U, 5935U, 
    4677U, 6271U, 1289U, 5613U, 7168U, 1368U, 5704U, 2585U, 
};

static inline void InitMipsMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 776);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct MipsGenInstrInfo : public TargetInstrInfo {
  explicit MipsGenInstrInfo(int SO = -1, int DO = -1);
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR
#undef GET_INSTRINFO_CTOR
namespace llvm {
extern const MCInstrDesc MipsInsts[];
extern const unsigned MipsInstrNameIndices[];
extern const char MipsInstrNameData[];
MipsGenInstrInfo::MipsGenInstrInfo(int SO, int DO)
  : TargetInstrInfo(SO, DO) {
  InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 776);
}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR

#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace Mips {

enum Arch {
	Arch_se,
	Arch_micromips
};

// Std2MicroMips
int Std2MicroMips(uint16_t Opcode, enum Arch inArch) {
static const uint16_t Std2MicroMipsTable[][3] = {
  { Mips::ADD, Mips::ADD, Mips::ADD_MM },
  { Mips::ADDi, Mips::ADDi, Mips::ADDi_MM },
  { Mips::ADDiu, Mips::ADDiu, Mips::ADDiu_MM },
  { Mips::ADDu, Mips::ADDu, Mips::ADDu_MM },
  { Mips::AND, Mips::AND, Mips::AND_MM },
  { Mips::ANDi, Mips::ANDi, Mips::ANDi_MM },
  { Mips::LB, Mips::LB, Mips::LB_MM },
  { Mips::LB_P8, Mips::LB_P8, Mips::LB_MM_P8 },
  { Mips::LBu, Mips::LBu, Mips::LBu_MM },
  { Mips::LBu_P8, Mips::LBu_P8, Mips::LBu_MM_P8 },
  { Mips::LH, Mips::LH, Mips::LH_MM },
  { Mips::LH_P8, Mips::LH_P8, Mips::LH_MM_P8 },
  { Mips::LHu, Mips::LHu, Mips::LHu_MM },
  { Mips::LHu_P8, Mips::LHu_P8, Mips::LHu_MM_P8 },
  { Mips::LW, Mips::LW, Mips::LW_MM },
  { Mips::LW_P8, Mips::LW_P8, Mips::LW_MM_P8 },
  { Mips::MUL, Mips::MUL, Mips::MUL_MM },
  { Mips::MULT, Mips::MULT, Mips::MULT_MM },
  { Mips::MULTu, Mips::MULTu, Mips::MULTu_MM },
  { Mips::NOR, Mips::NOR, Mips::NOR_MM },
  { Mips::OR, Mips::OR, Mips::OR_MM },
  { Mips::ORi, Mips::ORi, Mips::ORi_MM },
  { Mips::ROTR, Mips::ROTR, Mips::ROTR_MM },
  { Mips::ROTRV, Mips::ROTRV, Mips::ROTRV_MM },
  { Mips::SB, Mips::SB, Mips::SB_MM },
  { Mips::SB_P8, Mips::SB_P8, Mips::SB_MM_P8 },
  { Mips::SH, Mips::SH, Mips::SH_MM },
  { Mips::SH_P8, Mips::SH_P8, Mips::SH_MM_P8 },
  { Mips::SLL, Mips::SLL, Mips::SLL_MM },
  { Mips::SLLV, Mips::SLLV, Mips::SLLV_MM },
  { Mips::SLT, Mips::SLT, Mips::SLT_MM },
  { Mips::SLTi, Mips::SLTi, Mips::SLTi_MM },
  { Mips::SLTiu, Mips::SLTiu, Mips::SLTiu_MM },
  { Mips::SLTu, Mips::SLTu, Mips::SLTu_MM },
  { Mips::SRA, Mips::SRA, Mips::SRA_MM },
  { Mips::SRAV, Mips::SRAV, Mips::SRAV_MM },
  { Mips::SRL, Mips::SRL, Mips::SRL_MM },
  { Mips::SRLV, Mips::SRLV, Mips::SRLV_MM },
  { Mips::SUB, Mips::SUB, Mips::SUB_MM },
  { Mips::SUBu, Mips::SUBu, Mips::SUBu_MM },
  { Mips::SW, Mips::SW, Mips::SW_MM },
  { Mips::SW_P8, Mips::SW_P8, Mips::SW_MM_P8 },
  { Mips::XOR, Mips::XOR, Mips::XOR_MM },
  { Mips::XORi, Mips::XORi, Mips::XORi_MM },
}; // End of Std2MicroMipsTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 44;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == Std2MicroMipsTable[mid][0]) {
      break;
    }
    if (Opcode < Std2MicroMipsTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  if (inArch == Arch_se)
    return Std2MicroMipsTable[mid][1];
  if (inArch == Arch_micromips)
    return Std2MicroMipsTable[mid][2];
  return -1;}

} // End Mips namespace
} // End llvm namespace
#endif // GET_INSTRMAP_INFO

