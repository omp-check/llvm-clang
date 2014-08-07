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

namespace SystemZ {
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
    A	= 17,
    ADB	= 18,
    ADBR	= 19,
    ADJCALLSTACKDOWN	= 20,
    ADJCALLSTACKUP	= 21,
    ADJDYNALLOC	= 22,
    AEB	= 23,
    AEBR	= 24,
    AEXT128_64	= 25,
    AFI	= 26,
    AG	= 27,
    AGF	= 28,
    AGFI	= 29,
    AGFR	= 30,
    AGHI	= 31,
    AGR	= 32,
    AGSI	= 33,
    AH	= 34,
    AHI	= 35,
    AHY	= 36,
    AL	= 37,
    ALC	= 38,
    ALCG	= 39,
    ALCGR	= 40,
    ALCR	= 41,
    ALFI	= 42,
    ALG	= 43,
    ALGF	= 44,
    ALGFI	= 45,
    ALGFR	= 46,
    ALGR	= 47,
    ALR	= 48,
    ALY	= 49,
    AR	= 50,
    ASI	= 51,
    ATOMIC_CMP_SWAPW	= 52,
    ATOMIC_LOADW_AFI	= 53,
    ATOMIC_LOADW_AR	= 54,
    ATOMIC_LOADW_MAX	= 55,
    ATOMIC_LOADW_MIN	= 56,
    ATOMIC_LOADW_NILH	= 57,
    ATOMIC_LOADW_NILHi	= 58,
    ATOMIC_LOADW_NR	= 59,
    ATOMIC_LOADW_NRi	= 60,
    ATOMIC_LOADW_OILH	= 61,
    ATOMIC_LOADW_OR	= 62,
    ATOMIC_LOADW_SR	= 63,
    ATOMIC_LOADW_UMAX	= 64,
    ATOMIC_LOADW_UMIN	= 65,
    ATOMIC_LOADW_XILF	= 66,
    ATOMIC_LOADW_XR	= 67,
    ATOMIC_LOAD_AFI	= 68,
    ATOMIC_LOAD_AGFI	= 69,
    ATOMIC_LOAD_AGHI	= 70,
    ATOMIC_LOAD_AGR	= 71,
    ATOMIC_LOAD_AHI	= 72,
    ATOMIC_LOAD_AR	= 73,
    ATOMIC_LOAD_MAX_32	= 74,
    ATOMIC_LOAD_MAX_64	= 75,
    ATOMIC_LOAD_MIN_32	= 76,
    ATOMIC_LOAD_MIN_64	= 77,
    ATOMIC_LOAD_NGR	= 78,
    ATOMIC_LOAD_NGRi	= 79,
    ATOMIC_LOAD_NIHF	= 80,
    ATOMIC_LOAD_NIHFi	= 81,
    ATOMIC_LOAD_NIHH	= 82,
    ATOMIC_LOAD_NIHHi	= 83,
    ATOMIC_LOAD_NIHL	= 84,
    ATOMIC_LOAD_NIHLi	= 85,
    ATOMIC_LOAD_NILF	= 86,
    ATOMIC_LOAD_NILF32	= 87,
    ATOMIC_LOAD_NILF32i	= 88,
    ATOMIC_LOAD_NILFi	= 89,
    ATOMIC_LOAD_NILH	= 90,
    ATOMIC_LOAD_NILH32	= 91,
    ATOMIC_LOAD_NILH32i	= 92,
    ATOMIC_LOAD_NILHi	= 93,
    ATOMIC_LOAD_NILL	= 94,
    ATOMIC_LOAD_NILL32	= 95,
    ATOMIC_LOAD_NILL32i	= 96,
    ATOMIC_LOAD_NILLi	= 97,
    ATOMIC_LOAD_NR	= 98,
    ATOMIC_LOAD_NRi	= 99,
    ATOMIC_LOAD_OGR	= 100,
    ATOMIC_LOAD_OIHF	= 101,
    ATOMIC_LOAD_OIHH	= 102,
    ATOMIC_LOAD_OIHL	= 103,
    ATOMIC_LOAD_OILF	= 104,
    ATOMIC_LOAD_OILF32	= 105,
    ATOMIC_LOAD_OILH	= 106,
    ATOMIC_LOAD_OILH32	= 107,
    ATOMIC_LOAD_OILL	= 108,
    ATOMIC_LOAD_OILL32	= 109,
    ATOMIC_LOAD_OR	= 110,
    ATOMIC_LOAD_SGR	= 111,
    ATOMIC_LOAD_SR	= 112,
    ATOMIC_LOAD_UMAX_32	= 113,
    ATOMIC_LOAD_UMAX_64	= 114,
    ATOMIC_LOAD_UMIN_32	= 115,
    ATOMIC_LOAD_UMIN_64	= 116,
    ATOMIC_LOAD_XGR	= 117,
    ATOMIC_LOAD_XIHF	= 118,
    ATOMIC_LOAD_XILF	= 119,
    ATOMIC_LOAD_XILF32	= 120,
    ATOMIC_LOAD_XR	= 121,
    ATOMIC_SWAPW	= 122,
    ATOMIC_SWAP_32	= 123,
    ATOMIC_SWAP_64	= 124,
    AXBR	= 125,
    AY	= 126,
    AsmBASR	= 127,
    AsmBRAS	= 128,
    AsmBRASL	= 129,
    AsmBRC	= 130,
    AsmBRCL	= 131,
    AsmJ	= 132,
    AsmJE	= 133,
    AsmJEL	= 134,
    AsmJH	= 135,
    AsmJHE	= 136,
    AsmJHEL	= 137,
    AsmJHL	= 138,
    AsmJL	= 139,
    AsmJLE	= 140,
    AsmJLEL	= 141,
    AsmJLH	= 142,
    AsmJLHL	= 143,
    AsmJLL	= 144,
    AsmJNE	= 145,
    AsmJNEL	= 146,
    AsmJNH	= 147,
    AsmJNHE	= 148,
    AsmJNHEL	= 149,
    AsmJNHL	= 150,
    AsmJNL	= 151,
    AsmJNLE	= 152,
    AsmJNLEL	= 153,
    AsmJNLH	= 154,
    AsmJNLHL	= 155,
    AsmJNLL	= 156,
    AsmJNO	= 157,
    AsmJNOL	= 158,
    AsmJO	= 159,
    AsmJOL	= 160,
    BASR	= 161,
    BR	= 162,
    BRAS	= 163,
    BRASL	= 164,
    BRC	= 165,
    BRCL	= 166,
    C	= 167,
    CDB	= 168,
    CDBR	= 169,
    CDFBR	= 170,
    CDGBR	= 171,
    CEB	= 172,
    CEBR	= 173,
    CEFBR	= 174,
    CEGBR	= 175,
    CFDBR	= 176,
    CFEBR	= 177,
    CFI	= 178,
    CFXBR	= 179,
    CG	= 180,
    CGDBR	= 181,
    CGEBR	= 182,
    CGF	= 183,
    CGFI	= 184,
    CGFR	= 185,
    CGFRL	= 186,
    CGH	= 187,
    CGHI	= 188,
    CGHRL	= 189,
    CGHSI	= 190,
    CGR	= 191,
    CGRL	= 192,
    CGXBR	= 193,
    CH	= 194,
    CHHSI	= 195,
    CHI	= 196,
    CHRL	= 197,
    CHSI	= 198,
    CHY	= 199,
    CL	= 200,
    CLFHSI	= 201,
    CLFI	= 202,
    CLG	= 203,
    CLGF	= 204,
    CLGFI	= 205,
    CLGFR	= 206,
    CLGFRL	= 207,
    CLGHRL	= 208,
    CLGHSI	= 209,
    CLGR	= 210,
    CLGRL	= 211,
    CLHHSI	= 212,
    CLHRL	= 213,
    CLI	= 214,
    CLIY	= 215,
    CLR	= 216,
    CLRL	= 217,
    CLY	= 218,
    CPSDRdd	= 219,
    CPSDRds	= 220,
    CPSDRsd	= 221,
    CPSDRss	= 222,
    CR	= 223,
    CRL	= 224,
    CS	= 225,
    CSG	= 226,
    CSY	= 227,
    CXBR	= 228,
    CXFBR	= 229,
    CXGBR	= 230,
    CY	= 231,
    DDB	= 232,
    DDBR	= 233,
    DEB	= 234,
    DEBR	= 235,
    DL	= 236,
    DLG	= 237,
    DLGR	= 238,
    DLR	= 239,
    DSG	= 240,
    DSGF	= 241,
    DSGFR	= 242,
    DSGR	= 243,
    DXBR	= 244,
    EAR	= 245,
    FIDBR	= 246,
    FIEBR	= 247,
    FIXBR	= 248,
    FLOGR	= 249,
    IC	= 250,
    IC32	= 251,
    IC32Y	= 252,
    ICY	= 253,
    IIHF	= 254,
    IIHH	= 255,
    IIHL	= 256,
    IILF	= 257,
    IILF32	= 258,
    IILH	= 259,
    IILH32	= 260,
    IILL	= 261,
    IILL32	= 262,
    J	= 263,
    JG	= 264,
    L	= 265,
    L128	= 266,
    LA	= 267,
    LARL	= 268,
    LAY	= 269,
    LB	= 270,
    LBR	= 271,
    LCDBR	= 272,
    LCEBR	= 273,
    LCGFR	= 274,
    LCGR	= 275,
    LCR	= 276,
    LCXBR	= 277,
    LD	= 278,
    LDEB	= 279,
    LDEBR	= 280,
    LDGR	= 281,
    LDR	= 282,
    LDXBR	= 283,
    LDY	= 284,
    LE	= 285,
    LEDBR	= 286,
    LER	= 287,
    LEXBR	= 288,
    LEY	= 289,
    LG	= 290,
    LGB	= 291,
    LGBR	= 292,
    LGDR	= 293,
    LGF	= 294,
    LGFI	= 295,
    LGFR	= 296,
    LGFRL	= 297,
    LGH	= 298,
    LGHI	= 299,
    LGHR	= 300,
    LGHRL	= 301,
    LGR	= 302,
    LGRL	= 303,
    LH	= 304,
    LHI	= 305,
    LHR	= 306,
    LHRL	= 307,
    LHY	= 308,
    LLC	= 309,
    LLCR	= 310,
    LLGC	= 311,
    LLGCR	= 312,
    LLGF	= 313,
    LLGFR	= 314,
    LLGFRL	= 315,
    LLGH	= 316,
    LLGHR	= 317,
    LLGHRL	= 318,
    LLH	= 319,
    LLHR	= 320,
    LLHRL	= 321,
    LLIHF	= 322,
    LLIHH	= 323,
    LLIHL	= 324,
    LLILF	= 325,
    LLILH	= 326,
    LLILL	= 327,
    LMG	= 328,
    LNDBR	= 329,
    LNEBR	= 330,
    LNXBR	= 331,
    LPDBR	= 332,
    LPEBR	= 333,
    LPXBR	= 334,
    LR	= 335,
    LRL	= 336,
    LRV	= 337,
    LRVG	= 338,
    LRVGR	= 339,
    LRVR	= 340,
    LX	= 341,
    LXDB	= 342,
    LXDBR	= 343,
    LXEB	= 344,
    LXEBR	= 345,
    LXR	= 346,
    LY	= 347,
    LZDR	= 348,
    LZER	= 349,
    LZXR	= 350,
    MADB	= 351,
    MADBR	= 352,
    MAEB	= 353,
    MAEBR	= 354,
    MDB	= 355,
    MDBR	= 356,
    MDEB	= 357,
    MDEBR	= 358,
    MEEB	= 359,
    MEEBR	= 360,
    MGHI	= 361,
    MH	= 362,
    MHI	= 363,
    MHY	= 364,
    MLG	= 365,
    MLGR	= 366,
    MS	= 367,
    MSDB	= 368,
    MSDBR	= 369,
    MSEB	= 370,
    MSEBR	= 371,
    MSFI	= 372,
    MSG	= 373,
    MSGF	= 374,
    MSGFI	= 375,
    MSGFR	= 376,
    MSGR	= 377,
    MSR	= 378,
    MSY	= 379,
    MVGHI	= 380,
    MVHHI	= 381,
    MVHI	= 382,
    MVI	= 383,
    MVIY	= 384,
    MXBR	= 385,
    MXDB	= 386,
    MXDBR	= 387,
    N	= 388,
    NG	= 389,
    NGR	= 390,
    NI	= 391,
    NIHF	= 392,
    NIHH	= 393,
    NIHL	= 394,
    NILF	= 395,
    NILF32	= 396,
    NILH	= 397,
    NILH32	= 398,
    NILL	= 399,
    NILL32	= 400,
    NIY	= 401,
    NR	= 402,
    NY	= 403,
    O	= 404,
    OG	= 405,
    OGR	= 406,
    OI	= 407,
    OIHF	= 408,
    OIHH	= 409,
    OIHL	= 410,
    OILF	= 411,
    OILF32	= 412,
    OILH	= 413,
    OILH32	= 414,
    OILL	= 415,
    OILL32	= 416,
    OIY	= 417,
    OR	= 418,
    OY	= 419,
    RET	= 420,
    RISBG	= 421,
    RISBG32	= 422,
    RLL	= 423,
    RLLG	= 424,
    S	= 425,
    SDB	= 426,
    SDBR	= 427,
    SEB	= 428,
    SEBR	= 429,
    SG	= 430,
    SGF	= 431,
    SGFR	= 432,
    SGR	= 433,
    SL	= 434,
    SLB	= 435,
    SLBG	= 436,
    SLBR	= 437,
    SLFI	= 438,
    SLG	= 439,
    SLGBR	= 440,
    SLGF	= 441,
    SLGFI	= 442,
    SLGFR	= 443,
    SLGR	= 444,
    SLL	= 445,
    SLLG	= 446,
    SLR	= 447,
    SLY	= 448,
    SQDB	= 449,
    SQDBR	= 450,
    SQEB	= 451,
    SQEBR	= 452,
    SQXBR	= 453,
    SR	= 454,
    SRA	= 455,
    SRAG	= 456,
    SRL	= 457,
    SRLG	= 458,
    ST	= 459,
    ST128	= 460,
    ST32	= 461,
    ST32Y	= 462,
    STC	= 463,
    STC32	= 464,
    STC32Y	= 465,
    STCY	= 466,
    STD	= 467,
    STDY	= 468,
    STE	= 469,
    STEY	= 470,
    STG	= 471,
    STGRL	= 472,
    STH	= 473,
    STH32	= 474,
    STH32Y	= 475,
    STHRL	= 476,
    STHRL32	= 477,
    STHY	= 478,
    STMG	= 479,
    STRL	= 480,
    STRL32	= 481,
    STRV	= 482,
    STRVG	= 483,
    STX	= 484,
    STY	= 485,
    SXBR	= 486,
    SY	= 487,
    Select32	= 488,
    Select64	= 489,
    SelectF128	= 490,
    SelectF32	= 491,
    SelectF64	= 492,
    X	= 493,
    XG	= 494,
    XGR	= 495,
    XI	= 496,
    XIHF	= 497,
    XILF	= 498,
    XILF32	= 499,
    XIY	= 500,
    XR	= 501,
    XY	= 502,
    ZEXT128_32	= 503,
    ZEXT128_64	= 504,
    INSTRUCTION_LIST_END = 505
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

static const uint16_t ImplicitList1[] = { SystemZ::PSW, 0 };
static const uint16_t ImplicitList2[] = { SystemZ::R0D, SystemZ::R1D, SystemZ::R2D, SystemZ::R3D, SystemZ::R4D, SystemZ::R5D, SystemZ::R14D, SystemZ::F0D, SystemZ::F1D, SystemZ::F2D, SystemZ::F3D, SystemZ::F4D, SystemZ::F5D, SystemZ::F6D, SystemZ::F7D, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SystemZ::ADDR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::FP64BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { SystemZ::GR128BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SystemZ::GR32BitRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc SystemZInsts[] = {
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
  { 17,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #17 = A
  { 18,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #18 = ADB
  { 19,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #19 = ADBR
  { 20,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #20 = ADJCALLSTACKDOWN
  { 21,	2,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #21 = ADJCALLSTACKUP
  { 22,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #22 = ADJDYNALLOC
  { 23,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, ImplicitList1, OperandInfo13 },  // Inst #23 = AEB
  { 24,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList1, OperandInfo14 },  // Inst #24 = AEBR
  { 25,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #25 = AEXT128_64
  { 26,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #26 = AFI
  { 27,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #27 = AG
  { 28,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #28 = AGF
  { 29,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #29 = AGFI
  { 30,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #30 = AGFR
  { 31,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #31 = AGHI
  { 32,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList1, OperandInfo20 },  // Inst #32 = AGR
  { 33,	3,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #33 = AGSI
  { 34,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #34 = AH
  { 35,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #35 = AHI
  { 36,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #36 = AHY
  { 37,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #37 = AL
  { 38,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, ImplicitList1, ImplicitList1, OperandInfo8 },  // Inst #38 = ALC
  { 39,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, ImplicitList1, ImplicitList1, OperandInfo17 },  // Inst #39 = ALCG
  { 40,	3,	1,	0,	4,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo20 },  // Inst #40 = ALCGR
  { 41,	3,	1,	0,	4,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo22 },  // Inst #41 = ALCR
  { 42,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #42 = ALFI
  { 43,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #43 = ALG
  { 44,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #44 = ALGF
  { 45,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #45 = ALGFI
  { 46,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #46 = ALGFR
  { 47,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList1, OperandInfo20 },  // Inst #47 = ALGR
  { 48,	3,	1,	0,	2,	0|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList1, OperandInfo22 },  // Inst #48 = ALR
  { 49,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #49 = ALY
  { 50,	3,	1,	0,	2,	0|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList1, OperandInfo22 },  // Inst #50 = AR
  { 51,	3,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #51 = ASI
  { 52,	8,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo23 },  // Inst #52 = ATOMIC_CMP_SWAPW
  { 53,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo24 },  // Inst #53 = ATOMIC_LOADW_AFI
  { 54,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo25 },  // Inst #54 = ATOMIC_LOADW_AR
  { 55,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo25 },  // Inst #55 = ATOMIC_LOADW_MAX
  { 56,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo25 },  // Inst #56 = ATOMIC_LOADW_MIN
  { 57,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo24 },  // Inst #57 = ATOMIC_LOADW_NILH
  { 58,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo24 },  // Inst #58 = ATOMIC_LOADW_NILHi
  { 59,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo25 },  // Inst #59 = ATOMIC_LOADW_NR
  { 60,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo25 },  // Inst #60 = ATOMIC_LOADW_NRi
  { 61,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo24 },  // Inst #61 = ATOMIC_LOADW_OILH
  { 62,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo25 },  // Inst #62 = ATOMIC_LOADW_OR
  { 63,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo25 },  // Inst #63 = ATOMIC_LOADW_SR
  { 64,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo25 },  // Inst #64 = ATOMIC_LOADW_UMAX
  { 65,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo25 },  // Inst #65 = ATOMIC_LOADW_UMIN
  { 66,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo24 },  // Inst #66 = ATOMIC_LOADW_XILF
  { 67,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo25 },  // Inst #67 = ATOMIC_LOADW_XR
  { 68,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo26 },  // Inst #68 = ATOMIC_LOAD_AFI
  { 69,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo27 },  // Inst #69 = ATOMIC_LOAD_AGFI
  { 70,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo27 },  // Inst #70 = ATOMIC_LOAD_AGHI
  { 71,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo28 },  // Inst #71 = ATOMIC_LOAD_AGR
  { 72,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo26 },  // Inst #72 = ATOMIC_LOAD_AHI
  { 73,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #73 = ATOMIC_LOAD_AR
  { 74,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #74 = ATOMIC_LOAD_MAX_32
  { 75,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo28 },  // Inst #75 = ATOMIC_LOAD_MAX_64
  { 76,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #76 = ATOMIC_LOAD_MIN_32
  { 77,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo28 },  // Inst #77 = ATOMIC_LOAD_MIN_64
  { 78,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo28 },  // Inst #78 = ATOMIC_LOAD_NGR
  { 79,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo28 },  // Inst #79 = ATOMIC_LOAD_NGRi
  { 80,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo27 },  // Inst #80 = ATOMIC_LOAD_NIHF
  { 81,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo27 },  // Inst #81 = ATOMIC_LOAD_NIHFi
  { 82,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo27 },  // Inst #82 = ATOMIC_LOAD_NIHH
  { 83,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo27 },  // Inst #83 = ATOMIC_LOAD_NIHHi
  { 84,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo27 },  // Inst #84 = ATOMIC_LOAD_NIHL
  { 85,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo27 },  // Inst #85 = ATOMIC_LOAD_NIHLi
  { 86,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo27 },  // Inst #86 = ATOMIC_LOAD_NILF
  { 87,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo26 },  // Inst #87 = ATOMIC_LOAD_NILF32
  { 88,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo26 },  // Inst #88 = ATOMIC_LOAD_NILF32i
  { 89,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo27 },  // Inst #89 = ATOMIC_LOAD_NILFi
  { 90,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo27 },  // Inst #90 = ATOMIC_LOAD_NILH
  { 91,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo26 },  // Inst #91 = ATOMIC_LOAD_NILH32
  { 92,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo26 },  // Inst #92 = ATOMIC_LOAD_NILH32i
  { 93,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo27 },  // Inst #93 = ATOMIC_LOAD_NILHi
  { 94,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo27 },  // Inst #94 = ATOMIC_LOAD_NILL
  { 95,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo26 },  // Inst #95 = ATOMIC_LOAD_NILL32
  { 96,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo26 },  // Inst #96 = ATOMIC_LOAD_NILL32i
  { 97,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo27 },  // Inst #97 = ATOMIC_LOAD_NILLi
  { 98,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #98 = ATOMIC_LOAD_NR
  { 99,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #99 = ATOMIC_LOAD_NRi
  { 100,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo28 },  // Inst #100 = ATOMIC_LOAD_OGR
  { 101,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo27 },  // Inst #101 = ATOMIC_LOAD_OIHF
  { 102,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo27 },  // Inst #102 = ATOMIC_LOAD_OIHH
  { 103,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo27 },  // Inst #103 = ATOMIC_LOAD_OIHL
  { 104,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo27 },  // Inst #104 = ATOMIC_LOAD_OILF
  { 105,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo26 },  // Inst #105 = ATOMIC_LOAD_OILF32
  { 106,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo27 },  // Inst #106 = ATOMIC_LOAD_OILH
  { 107,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo26 },  // Inst #107 = ATOMIC_LOAD_OILH32
  { 108,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo27 },  // Inst #108 = ATOMIC_LOAD_OILL
  { 109,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo26 },  // Inst #109 = ATOMIC_LOAD_OILL32
  { 110,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #110 = ATOMIC_LOAD_OR
  { 111,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo28 },  // Inst #111 = ATOMIC_LOAD_SGR
  { 112,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #112 = ATOMIC_LOAD_SR
  { 113,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #113 = ATOMIC_LOAD_UMAX_32
  { 114,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo28 },  // Inst #114 = ATOMIC_LOAD_UMAX_64
  { 115,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #115 = ATOMIC_LOAD_UMIN_32
  { 116,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo28 },  // Inst #116 = ATOMIC_LOAD_UMIN_64
  { 117,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo28 },  // Inst #117 = ATOMIC_LOAD_XGR
  { 118,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo27 },  // Inst #118 = ATOMIC_LOAD_XIHF
  { 119,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo27 },  // Inst #119 = ATOMIC_LOAD_XILF
  { 120,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo26 },  // Inst #120 = ATOMIC_LOAD_XILF32
  { 121,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #121 = ATOMIC_LOAD_XR
  { 122,	7,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo25 },  // Inst #122 = ATOMIC_SWAPW
  { 123,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo29 },  // Inst #123 = ATOMIC_SWAP_32
  { 124,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x4ULL, NULL, ImplicitList1, OperandInfo28 },  // Inst #124 = ATOMIC_SWAP_64
  { 125,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList1, OperandInfo30 },  // Inst #125 = AXBR
  { 126,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #126 = AY
  { 127,	2,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #127 = AsmBASR
  { 128,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #128 = AsmBRAS
  { 129,	2,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #129 = AsmBRASL
  { 130,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, NULL, OperandInfo7 },  // Inst #130 = AsmBRC
  { 131,	2,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, NULL, OperandInfo7 },  // Inst #131 = AsmBRCL
  { 132,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #132 = AsmJ
  { 133,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #133 = AsmJE
  { 134,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #134 = AsmJEL
  { 135,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #135 = AsmJH
  { 136,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #136 = AsmJHE
  { 137,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #137 = AsmJHEL
  { 138,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #138 = AsmJHL
  { 139,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #139 = AsmJL
  { 140,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #140 = AsmJLE
  { 141,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #141 = AsmJLEL
  { 142,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #142 = AsmJLH
  { 143,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #143 = AsmJLHL
  { 144,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #144 = AsmJLL
  { 145,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #145 = AsmJNE
  { 146,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #146 = AsmJNEL
  { 147,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #147 = AsmJNH
  { 148,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #148 = AsmJNHE
  { 149,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #149 = AsmJNHEL
  { 150,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #150 = AsmJNHL
  { 151,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #151 = AsmJNL
  { 152,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #152 = AsmJNLE
  { 153,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #153 = AsmJNLEL
  { 154,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #154 = AsmJNLH
  { 155,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #155 = AsmJNLHL
  { 156,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #156 = AsmJNLL
  { 157,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #157 = AsmJNO
  { 158,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #158 = AsmJNOL
  { 159,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #159 = AsmJO
  { 160,	1,	0,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #160 = AsmJOL
  { 161,	1,	0,	0,	2,	0|(1<<MCID::Call)|(1<<MCID::Variadic), 0x0ULL, NULL, ImplicitList2, OperandInfo33 },  // Inst #161 = BASR
  { 162,	1,	0,	0,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #162 = BR
  { 163,	1,	0,	0,	4,	0|(1<<MCID::Call)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList2, OperandInfo5 },  // Inst #163 = BRAS
  { 164,	1,	0,	0,	6,	0|(1<<MCID::Call)|(1<<MCID::Variadic), 0x0ULL, NULL, ImplicitList2, OperandInfo5 },  // Inst #164 = BRASL
  { 165,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, NULL, OperandInfo7 },  // Inst #165 = BRC
  { 166,	2,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x0ULL, ImplicitList1, NULL, OperandInfo7 },  // Inst #166 = BRCL
  { 167,	4,	0,	0,	4,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, ImplicitList1, OperandInfo34 },  // Inst #167 = C
  { 168,	4,	0,	0,	6,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, ImplicitList1, OperandInfo35 },  // Inst #168 = CDB
  { 169,	2,	0,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #169 = CDBR
  { 170,	2,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo37 },  // Inst #170 = CDFBR
  { 171,	2,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo38 },  // Inst #171 = CDGBR
  { 172,	4,	0,	0,	6,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, ImplicitList1, OperandInfo39 },  // Inst #172 = CEB
  { 173,	2,	0,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo40 },  // Inst #173 = CEBR
  { 174,	2,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo41 },  // Inst #174 = CEFBR
  { 175,	2,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo42 },  // Inst #175 = CEGBR
  { 176,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo43 },  // Inst #176 = CFDBR
  { 177,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo44 },  // Inst #177 = CFEBR
  { 178,	2,	0,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo45 },  // Inst #178 = CFI
  { 179,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo46 },  // Inst #179 = CFXBR
  { 180,	4,	0,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #180 = CG
  { 181,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo47 },  // Inst #181 = CGDBR
  { 182,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo48 },  // Inst #182 = CGEBR
  { 183,	4,	0,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #183 = CGF
  { 184,	2,	0,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #184 = CGFI
  { 185,	2,	0,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo49 },  // Inst #185 = CGFR
  { 186,	2,	0,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #186 = CGFRL
  { 187,	4,	0,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #187 = CGH
  { 188,	2,	0,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #188 = CGHI
  { 189,	2,	0,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #189 = CGHRL
  { 190,	3,	0,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #190 = CGHSI
  { 191,	2,	0,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo50 },  // Inst #191 = CGR
  { 192,	2,	0,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #192 = CGRL
  { 193,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo51 },  // Inst #193 = CGXBR
  { 194,	4,	0,	0,	4,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, ImplicitList1, OperandInfo34 },  // Inst #194 = CH
  { 195,	3,	0,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #195 = CHHSI
  { 196,	2,	0,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo45 },  // Inst #196 = CHI
  { 197,	2,	0,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, ImplicitList1, OperandInfo45 },  // Inst #197 = CHRL
  { 198,	3,	0,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #198 = CHSI
  { 199,	4,	0,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo34 },  // Inst #199 = CHY
  { 200,	4,	0,	0,	4,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, ImplicitList1, OperandInfo34 },  // Inst #200 = CL
  { 201,	3,	0,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #201 = CLFHSI
  { 202,	2,	0,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo45 },  // Inst #202 = CLFI
  { 203,	4,	0,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #203 = CLG
  { 204,	4,	0,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #204 = CLGF
  { 205,	2,	0,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #205 = CLGFI
  { 206,	2,	0,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo49 },  // Inst #206 = CLGFR
  { 207,	2,	0,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #207 = CLGFRL
  { 208,	2,	0,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #208 = CLGHRL
  { 209,	3,	0,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #209 = CLGHSI
  { 210,	2,	0,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo50 },  // Inst #210 = CLGR
  { 211,	2,	0,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, ImplicitList1, OperandInfo32 },  // Inst #211 = CLGRL
  { 212,	3,	0,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #212 = CLHHSI
  { 213,	2,	0,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, ImplicitList1, OperandInfo45 },  // Inst #213 = CLHRL
  { 214,	3,	0,	0,	4,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #214 = CLI
  { 215,	3,	0,	0,	6,	0|(1<<MCID::MayLoad), 0x4ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #215 = CLIY
  { 216,	2,	0,	0,	2,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo52 },  // Inst #216 = CLR
  { 217,	2,	0,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, ImplicitList1, OperandInfo45 },  // Inst #217 = CLRL
  { 218,	4,	0,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo34 },  // Inst #218 = CLY
  { 219,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo53 },  // Inst #219 = CPSDRdd
  { 220,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo54 },  // Inst #220 = CPSDRds
  { 221,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo55 },  // Inst #221 = CPSDRsd
  { 222,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo56 },  // Inst #222 = CPSDRss
  { 223,	2,	0,	0,	2,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo52 },  // Inst #223 = CR
  { 224,	2,	0,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, ImplicitList1, OperandInfo45 },  // Inst #224 = CRL
  { 225,	5,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, NULL, ImplicitList1, OperandInfo57 },  // Inst #225 = CS
  { 226,	5,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, NULL, ImplicitList1, OperandInfo58 },  // Inst #226 = CSG
  { 227,	5,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, NULL, ImplicitList1, OperandInfo57 },  // Inst #227 = CSY
  { 228,	2,	0,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo59 },  // Inst #228 = CXBR
  { 229,	2,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo60 },  // Inst #229 = CXFBR
  { 230,	2,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo61 },  // Inst #230 = CXGBR
  { 231,	4,	0,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo34 },  // Inst #231 = CY
  { 232,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #232 = DDB
  { 233,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #233 = DDBR
  { 234,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #234 = DEB
  { 235,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #235 = DEBR
  { 236,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, NULL, OperandInfo62 },  // Inst #236 = DL
  { 237,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, NULL, OperandInfo62 },  // Inst #237 = DLG
  { 238,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo63 },  // Inst #238 = DLGR
  { 239,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo64 },  // Inst #239 = DLR
  { 240,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, NULL, OperandInfo62 },  // Inst #240 = DSG
  { 241,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, NULL, OperandInfo62 },  // Inst #241 = DSGF
  { 242,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo64 },  // Inst #242 = DSGFR
  { 243,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo63 },  // Inst #243 = DSGR
  { 244,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo30 },  // Inst #244 = DXBR
  { 245,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #245 = EAR
  { 246,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo65 },  // Inst #246 = FIDBR
  { 247,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo66 },  // Inst #247 = FIEBR
  { 248,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo67 },  // Inst #248 = FIXBR
  { 249,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo15 },  // Inst #249 = FLOGR
  { 250,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, NULL, OperandInfo17 },  // Inst #250 = IC
  { 251,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #251 = IC32
  { 252,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, NULL, OperandInfo8 },  // Inst #252 = IC32Y
  { 253,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, NULL, OperandInfo17 },  // Inst #253 = ICY
  { 254,	3,	1,	0,	6,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #254 = IIHF
  { 255,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #255 = IIHH
  { 256,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #256 = IIHL
  { 257,	3,	1,	0,	6,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #257 = IILF
  { 258,	2,	1,	0,	6,	0, 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #258 = IILF32
  { 259,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #259 = IILH
  { 260,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #260 = IILH32
  { 261,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #261 = IILL
  { 262,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #262 = IILL32
  { 263,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #263 = J
  { 264,	1,	0,	0,	6,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #264 = JG
  { 265,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x9ULL, NULL, NULL, OperandInfo34 },  // Inst #265 = L
  { 266,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x1dULL, NULL, NULL, OperandInfo68 },  // Inst #266 = L128
  { 267,	4,	1,	0,	4,	0, 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #267 = LA
  { 268,	2,	1,	0,	6,	0, 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #268 = LARL
  { 269,	4,	1,	0,	6,	0, 0xcULL, NULL, NULL, OperandInfo12 },  // Inst #269 = LAY
  { 270,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, NULL, OperandInfo34 },  // Inst #270 = LB
  { 271,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo52 },  // Inst #271 = LBR
  { 272,	2,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #272 = LCDBR
  { 273,	2,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo40 },  // Inst #273 = LCEBR
  { 274,	2,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo49 },  // Inst #274 = LCGFR
  { 275,	2,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo50 },  // Inst #275 = LCGR
  { 276,	2,	1,	0,	2,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo52 },  // Inst #276 = LCR
  { 277,	2,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo59 },  // Inst #277 = LCXBR
  { 278,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x9ULL, NULL, NULL, OperandInfo35 },  // Inst #278 = LD
  { 279,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, NULL, OperandInfo35 },  // Inst #279 = LDEB
  { 280,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo69 },  // Inst #280 = LDEBR
  { 281,	2,	1,	0,	4,	0|(1<<MCID::Bitcast), 0x0ULL, NULL, NULL, OperandInfo38 },  // Inst #281 = LDGR
  { 282,	2,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #282 = LDR
  { 283,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo59 },  // Inst #283 = LDXBR
  { 284,	4,	1,	0,	6,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0xdULL, NULL, NULL, OperandInfo35 },  // Inst #284 = LDY
  { 285,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x9ULL, NULL, NULL, OperandInfo39 },  // Inst #285 = LE
  { 286,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo70 },  // Inst #286 = LEDBR
  { 287,	2,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo40 },  // Inst #287 = LER
  { 288,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo59 },  // Inst #288 = LEXBR
  { 289,	4,	1,	0,	6,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0xdULL, NULL, NULL, OperandInfo39 },  // Inst #289 = LEY
  { 290,	4,	1,	0,	6,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0xdULL, NULL, NULL, OperandInfo12 },  // Inst #290 = LG
  { 291,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, NULL, OperandInfo12 },  // Inst #291 = LGB
  { 292,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo50 },  // Inst #292 = LGBR
  { 293,	2,	1,	0,	4,	0|(1<<MCID::Bitcast), 0x0ULL, NULL, NULL, OperandInfo71 },  // Inst #293 = LGDR
  { 294,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, NULL, OperandInfo12 },  // Inst #294 = LGF
  { 295,	2,	1,	0,	6,	0|(1<<MCID::MoveImm)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #295 = LGFI
  { 296,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo49 },  // Inst #296 = LGFR
  { 297,	2,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #297 = LGFRL
  { 298,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, NULL, OperandInfo12 },  // Inst #298 = LGH
  { 299,	2,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #299 = LGHI
  { 300,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo50 },  // Inst #300 = LGHR
  { 301,	2,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #301 = LGHRL
  { 302,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo50 },  // Inst #302 = LGR
  { 303,	2,	1,	0,	6,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x1ULL, NULL, NULL, OperandInfo32 },  // Inst #303 = LGRL
  { 304,	4,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, NULL, OperandInfo34 },  // Inst #304 = LH
  { 305,	2,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #305 = LHI
  { 306,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo52 },  // Inst #306 = LHR
  { 307,	2,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #307 = LHRL
  { 308,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, NULL, OperandInfo34 },  // Inst #308 = LHY
  { 309,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, NULL, OperandInfo34 },  // Inst #309 = LLC
  { 310,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo52 },  // Inst #310 = LLCR
  { 311,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, NULL, OperandInfo12 },  // Inst #311 = LLGC
  { 312,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo50 },  // Inst #312 = LLGCR
  { 313,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, NULL, OperandInfo12 },  // Inst #313 = LLGF
  { 314,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo49 },  // Inst #314 = LLGFR
  { 315,	2,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #315 = LLGFRL
  { 316,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, NULL, OperandInfo12 },  // Inst #316 = LLGH
  { 317,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo50 },  // Inst #317 = LLGHR
  { 318,	2,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #318 = LLGHRL
  { 319,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, NULL, OperandInfo34 },  // Inst #319 = LLH
  { 320,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo52 },  // Inst #320 = LLHR
  { 321,	2,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #321 = LLHRL
  { 322,	2,	1,	0,	6,	0|(1<<MCID::MoveImm)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #322 = LLIHF
  { 323,	2,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #323 = LLIHH
  { 324,	2,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #324 = LLIHL
  { 325,	2,	1,	0,	6,	0|(1<<MCID::MoveImm)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #325 = LLILF
  { 326,	2,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #326 = LLILH
  { 327,	2,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #327 = LLILL
  { 328,	4,	2,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo72 },  // Inst #328 = LMG
  { 329,	2,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #329 = LNDBR
  { 330,	2,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo40 },  // Inst #330 = LNEBR
  { 331,	2,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo59 },  // Inst #331 = LNXBR
  { 332,	2,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #332 = LPDBR
  { 333,	2,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo40 },  // Inst #333 = LPEBR
  { 334,	2,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo59 },  // Inst #334 = LPXBR
  { 335,	2,	1,	0,	2,	0, 0x0ULL, NULL, NULL, OperandInfo52 },  // Inst #335 = LR
  { 336,	2,	1,	0,	6,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x1ULL, NULL, NULL, OperandInfo45 },  // Inst #336 = LRL
  { 337,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, NULL, OperandInfo34 },  // Inst #337 = LRV
  { 338,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, NULL, OperandInfo12 },  // Inst #338 = LRVG
  { 339,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo50 },  // Inst #339 = LRVGR
  { 340,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo52 },  // Inst #340 = LRVR
  { 341,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x1dULL, NULL, NULL, OperandInfo73 },  // Inst #341 = LX
  { 342,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, NULL, OperandInfo73 },  // Inst #342 = LXDB
  { 343,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo74 },  // Inst #343 = LXDBR
  { 344,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, NULL, OperandInfo73 },  // Inst #344 = LXEB
  { 345,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo75 },  // Inst #345 = LXEBR
  { 346,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo59 },  // Inst #346 = LXR
  { 347,	4,	1,	0,	6,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0xdULL, NULL, NULL, OperandInfo34 },  // Inst #347 = LY
  { 348,	1,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo76 },  // Inst #348 = LZDR
  { 349,	1,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo77 },  // Inst #349 = LZER
  { 350,	1,	1,	0,	4,	0|(1<<MCID::MoveImm)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo78 },  // Inst #350 = LZXR
  { 351,	6,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, NULL, OperandInfo79 },  // Inst #351 = MADB
  { 352,	4,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo80 },  // Inst #352 = MADBR
  { 353,	6,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, NULL, OperandInfo81 },  // Inst #353 = MAEB
  { 354,	4,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo82 },  // Inst #354 = MAEBR
  { 355,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #355 = MDB
  { 356,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #356 = MDBR
  { 357,	5,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #357 = MDEB
  { 358,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo83 },  // Inst #358 = MDEBR
  { 359,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #359 = MEEB
  { 360,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #360 = MEEBR
  { 361,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #361 = MGHI
  { 362,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #362 = MH
  { 363,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #363 = MHI
  { 364,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, NULL, OperandInfo8 },  // Inst #364 = MHY
  { 365,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, NULL, OperandInfo62 },  // Inst #365 = MLG
  { 366,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo63 },  // Inst #366 = MLGR
  { 367,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #367 = MS
  { 368,	6,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, NULL, OperandInfo79 },  // Inst #368 = MSDB
  { 369,	4,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo80 },  // Inst #369 = MSDBR
  { 370,	6,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, NULL, OperandInfo81 },  // Inst #370 = MSEB
  { 371,	4,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo82 },  // Inst #371 = MSEBR
  { 372,	3,	1,	0,	6,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #372 = MSFI
  { 373,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, NULL, OperandInfo17 },  // Inst #373 = MSG
  { 374,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, NULL, OperandInfo17 },  // Inst #374 = MSGF
  { 375,	3,	1,	0,	6,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #375 = MSGFI
  { 376,	3,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #376 = MSGFR
  { 377,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #377 = MSGR
  { 378,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #378 = MSR
  { 379,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, NULL, OperandInfo8 },  // Inst #379 = MSY
  { 380,	3,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #380 = MVGHI
  { 381,	3,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #381 = MVHHI
  { 382,	3,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #382 = MVHI
  { 383,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #383 = MVI
  { 384,	3,	0,	0,	6,	0|(1<<MCID::MayStore), 0x4ULL, NULL, NULL, OperandInfo21 },  // Inst #384 = MVIY
  { 385,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, NULL, NULL, OperandInfo30 },  // Inst #385 = MXBR
  { 386,	5,	1,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo84 },  // Inst #386 = MXDB
  { 387,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo85 },  // Inst #387 = MXDBR
  { 388,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #388 = N
  { 389,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #389 = NG
  { 390,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList1, OperandInfo20 },  // Inst #390 = NGR
  { 391,	3,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #391 = NI
  { 392,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #392 = NIHF
  { 393,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #393 = NIHH
  { 394,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #394 = NIHL
  { 395,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #395 = NILF
  { 396,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #396 = NILF32
  { 397,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #397 = NILH
  { 398,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #398 = NILH32
  { 399,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #399 = NILL
  { 400,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #400 = NILL32
  { 401,	3,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #401 = NIY
  { 402,	3,	1,	0,	2,	0|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList1, OperandInfo22 },  // Inst #402 = NR
  { 403,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #403 = NY
  { 404,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #404 = O
  { 405,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #405 = OG
  { 406,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList1, OperandInfo20 },  // Inst #406 = OGR
  { 407,	3,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #407 = OI
  { 408,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #408 = OIHF
  { 409,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #409 = OIHH
  { 410,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #410 = OIHL
  { 411,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #411 = OILF
  { 412,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #412 = OILF32
  { 413,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #413 = OILH
  { 414,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #414 = OILH32
  { 415,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #415 = OILL
  { 416,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #416 = OILL32
  { 417,	3,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #417 = OIY
  { 418,	3,	1,	0,	2,	0|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList1, OperandInfo22 },  // Inst #418 = OR
  { 419,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #419 = OY
  { 420,	0,	0,	0,	2,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, 0 },  // Inst #420 = RET
  { 421,	6,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo86 },  // Inst #421 = RISBG
  { 422,	6,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo87 },  // Inst #422 = RISBG32
  { 423,	4,	1,	0,	6,	0, 0x4ULL, NULL, NULL, OperandInfo88 },  // Inst #423 = RLL
  { 424,	4,	1,	0,	6,	0, 0x4ULL, NULL, NULL, OperandInfo89 },  // Inst #424 = RLLG
  { 425,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #425 = S
  { 426,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #426 = SDB
  { 427,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #427 = SDBR
  { 428,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, ImplicitList1, OperandInfo13 },  // Inst #428 = SEB
  { 429,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo14 },  // Inst #429 = SEBR
  { 430,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #430 = SG
  { 431,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #431 = SGF
  { 432,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #432 = SGFR
  { 433,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo20 },  // Inst #433 = SGR
  { 434,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #434 = SL
  { 435,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, ImplicitList1, ImplicitList1, OperandInfo8 },  // Inst #435 = SLB
  { 436,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, ImplicitList1, ImplicitList1, OperandInfo17 },  // Inst #436 = SLBG
  { 437,	3,	1,	0,	4,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo22 },  // Inst #437 = SLBR
  { 438,	3,	1,	0,	6,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #438 = SLFI
  { 439,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #439 = SLG
  { 440,	3,	1,	0,	4,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo20 },  // Inst #440 = SLGBR
  { 441,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #441 = SLGF
  { 442,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #442 = SLGFI
  { 443,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #443 = SLGFR
  { 444,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo20 },  // Inst #444 = SLGR
  { 445,	4,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #445 = SLL
  { 446,	4,	1,	0,	6,	0, 0x4ULL, NULL, NULL, OperandInfo89 },  // Inst #446 = SLLG
  { 447,	3,	1,	0,	2,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo22 },  // Inst #447 = SLR
  { 448,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #448 = SLY
  { 449,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, NULL, OperandInfo35 },  // Inst #449 = SQDB
  { 450,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #450 = SQDBR
  { 451,	4,	1,	0,	6,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, NULL, OperandInfo39 },  // Inst #451 = SQEB
  { 452,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo40 },  // Inst #452 = SQEBR
  { 453,	2,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo59 },  // Inst #453 = SQXBR
  { 454,	3,	1,	0,	2,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo22 },  // Inst #454 = SR
  { 455,	4,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo90 },  // Inst #455 = SRA
  { 456,	4,	1,	0,	6,	0, 0x4ULL, NULL, ImplicitList1, OperandInfo89 },  // Inst #456 = SRAG
  { 457,	4,	1,	0,	4,	0, 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #457 = SRL
  { 458,	4,	1,	0,	6,	0, 0x4ULL, NULL, NULL, OperandInfo89 },  // Inst #458 = SRLG
  { 459,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #459 = ST
  { 460,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore), 0x1eULL, NULL, NULL, OperandInfo68 },  // Inst #460 = ST128
  { 461,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0xaULL, NULL, NULL, OperandInfo34 },  // Inst #461 = ST32
  { 462,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0xeULL, NULL, NULL, OperandInfo34 },  // Inst #462 = ST32Y
  { 463,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #463 = STC
  { 464,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0x8ULL, NULL, NULL, OperandInfo34 },  // Inst #464 = STC32
  { 465,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0xcULL, NULL, NULL, OperandInfo34 },  // Inst #465 = STC32Y
  { 466,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0xcULL, NULL, NULL, OperandInfo12 },  // Inst #466 = STCY
  { 467,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0xaULL, NULL, NULL, OperandInfo35 },  // Inst #467 = STD
  { 468,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0xeULL, NULL, NULL, OperandInfo35 },  // Inst #468 = STDY
  { 469,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0xaULL, NULL, NULL, OperandInfo39 },  // Inst #469 = STE
  { 470,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0xeULL, NULL, NULL, OperandInfo39 },  // Inst #470 = STEY
  { 471,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0xeULL, NULL, NULL, OperandInfo12 },  // Inst #471 = STG
  { 472,	2,	0,	0,	6,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo32 },  // Inst #472 = STGRL
  { 473,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #473 = STH
  { 474,	4,	0,	0,	4,	0|(1<<MCID::MayStore), 0x8ULL, NULL, NULL, OperandInfo34 },  // Inst #474 = STH32
  { 475,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0xcULL, NULL, NULL, OperandInfo34 },  // Inst #475 = STH32Y
  { 476,	2,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #476 = STHRL
  { 477,	2,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #477 = STHRL32
  { 478,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0xcULL, NULL, NULL, OperandInfo12 },  // Inst #478 = STHY
  { 479,	4,	0,	0,	6,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo72 },  // Inst #479 = STMG
  { 480,	2,	0,	0,	6,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #480 = STRL
  { 481,	2,	0,	0,	6,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo45 },  // Inst #481 = STRL32
  { 482,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0xcULL, NULL, NULL, OperandInfo34 },  // Inst #482 = STRV
  { 483,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0xcULL, NULL, NULL, OperandInfo12 },  // Inst #483 = STRVG
  { 484,	4,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore), 0x1eULL, NULL, NULL, OperandInfo73 },  // Inst #484 = STX
  { 485,	4,	0,	0,	6,	0|(1<<MCID::MayStore), 0xcULL, NULL, NULL, OperandInfo12 },  // Inst #485 = STY
  { 486,	3,	1,	0,	4,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo30 },  // Inst #486 = SXBR
  { 487,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #487 = SY
  { 488,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo91 },  // Inst #488 = Select32
  { 489,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo92 },  // Inst #489 = Select64
  { 490,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo93 },  // Inst #490 = SelectF128
  { 491,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo94 },  // Inst #491 = SelectF32
  { 492,	4,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo95 },  // Inst #492 = SelectF64
  { 493,	5,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #493 = X
  { 494,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #494 = XG
  { 495,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList1, OperandInfo20 },  // Inst #495 = XGR
  { 496,	3,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x0ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #496 = XI
  { 497,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #497 = XIHF
  { 498,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #498 = XILF
  { 499,	3,	1,	0,	6,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #499 = XILF32
  { 500,	3,	0,	0,	6,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x4ULL, NULL, ImplicitList1, OperandInfo21 },  // Inst #500 = XIY
  { 501,	3,	1,	0,	2,	0|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList1, OperandInfo22 },  // Inst #501 = XR
  { 502,	5,	1,	0,	6,	0|(1<<MCID::MayLoad), 0xcULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #502 = XY
  { 503,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo96 },  // Inst #503 = ZEXT128_32
  { 504,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #504 = ZEXT128_64
};

extern const char SystemZInstrNameData[] = {
  /* 0 */ 'I', 'C', '3', '2', 0,
  /* 5 */ 'S', 'T', 'C', '3', '2', 0,
  /* 11 */ 'I', 'I', 'L', 'F', '3', '2', 0,
  /* 18 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'F', '3', '2', 0,
  /* 37 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'L', 'F', '3', '2', 0,
  /* 56 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'I', 'L', 'F', '3', '2', 0,
  /* 75 */ 'S', 'e', 'l', 'e', 'c', 't', 'F', '3', '2', 0,
  /* 85 */ 'R', 'I', 'S', 'B', 'G', '3', '2', 0,
  /* 93 */ 'I', 'I', 'L', 'H', '3', '2', 0,
  /* 100 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'H', '3', '2', 0,
  /* 119 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'L', 'H', '3', '2', 0,
  /* 138 */ 'S', 'T', 'H', '3', '2', 0,
  /* 144 */ 'I', 'I', 'L', 'L', '3', '2', 0,
  /* 151 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'L', '3', '2', 0,
  /* 170 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'L', 'L', '3', '2', 0,
  /* 189 */ 'S', 'T', 'H', 'R', 'L', '3', '2', 0,
  /* 197 */ 'S', 'T', 'R', 'L', '3', '2', 0,
  /* 204 */ 'S', 'T', '3', '2', 0,
  /* 209 */ 'Z', 'E', 'X', 'T', '1', '2', '8', '_', '3', '2', 0,
  /* 220 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'U', 'M', 'I', 'N', '_', '3', '2', 0,
  /* 240 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'M', 'I', 'N', '_', '3', '2', 0,
  /* 259 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', '3', '2', 0,
  /* 274 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'U', 'M', 'A', 'X', '_', '3', '2', 0,
  /* 294 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'M', 'A', 'X', '_', '3', '2', 0,
  /* 313 */ 'S', 'e', 'l', 'e', 'c', 't', '3', '2', 0,
  /* 322 */ 'S', 'e', 'l', 'e', 'c', 't', 'F', '6', '4', 0,
  /* 332 */ 'A', 'E', 'X', 'T', '1', '2', '8', '_', '6', '4', 0,
  /* 343 */ 'Z', 'E', 'X', 'T', '1', '2', '8', '_', '6', '4', 0,
  /* 354 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'U', 'M', 'I', 'N', '_', '6', '4', 0,
  /* 374 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'M', 'I', 'N', '_', '6', '4', 0,
  /* 393 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', '6', '4', 0,
  /* 408 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'U', 'M', 'A', 'X', '_', '6', '4', 0,
  /* 428 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'M', 'A', 'X', '_', '6', '4', 0,
  /* 447 */ 'S', 'e', 'l', 'e', 'c', 't', '6', '4', 0,
  /* 456 */ 'S', 'e', 'l', 'e', 'c', 't', 'F', '1', '2', '8', 0,
  /* 467 */ 'L', '1', '2', '8', 0,
  /* 472 */ 'S', 'T', '1', '2', '8', 0,
  /* 478 */ 'L', 'A', 0,
  /* 481 */ 'S', 'R', 'A', 0,
  /* 485 */ 'M', 'A', 'D', 'B', 0,
  /* 490 */ 'C', 'D', 'B', 0,
  /* 494 */ 'D', 'D', 'B', 0,
  /* 498 */ 'M', 'D', 'B', 0,
  /* 502 */ 'S', 'Q', 'D', 'B', 0,
  /* 507 */ 'M', 'S', 'D', 'B', 0,
  /* 512 */ 'L', 'X', 'D', 'B', 0,
  /* 517 */ 'M', 'X', 'D', 'B', 0,
  /* 522 */ 'M', 'A', 'E', 'B', 0,
  /* 527 */ 'C', 'E', 'B', 0,
  /* 531 */ 'L', 'D', 'E', 'B', 0,
  /* 536 */ 'M', 'D', 'E', 'B', 0,
  /* 541 */ 'M', 'E', 'E', 'B', 0,
  /* 546 */ 'S', 'Q', 'E', 'B', 0,
  /* 551 */ 'M', 'S', 'E', 'B', 0,
  /* 556 */ 'L', 'X', 'E', 'B', 0,
  /* 561 */ 'L', 'G', 'B', 0,
  /* 565 */ 'S', 'L', 'B', 0,
  /* 569 */ 'L', 'L', 'G', 'C', 0,
  /* 574 */ 'I', 'C', 0,
  /* 577 */ 'A', 'L', 'C', 0,
  /* 581 */ 'L', 'L', 'C', 0,
  /* 585 */ 'A', 'D', 'J', 'D', 'Y', 'N', 'A', 'L', 'L', 'O', 'C', 0,
  /* 597 */ 'A', 's', 'm', 'B', 'R', 'C', 0,
  /* 604 */ 'S', 'T', 'C', 0,
  /* 608 */ 'L', 'D', 0,
  /* 611 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 624 */ 'S', 'T', 'D', 0,
  /* 628 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 641 */ 'A', 's', 'm', 'J', 'H', 'E', 0,
  /* 648 */ 'A', 's', 'm', 'J', 'N', 'H', 'E', 0,
  /* 656 */ 'A', 's', 'm', 'J', 'E', 0,
  /* 662 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 669 */ 'A', 's', 'm', 'J', 'L', 'E', 0,
  /* 676 */ 'A', 's', 'm', 'J', 'N', 'L', 'E', 0,
  /* 684 */ 'A', 's', 'm', 'J', 'N', 'E', 0,
  /* 691 */ 'S', 'T', 'E', 0,
  /* 695 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 705 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 718 */ 'A', 'G', 'F', 0,
  /* 722 */ 'C', 'G', 'F', 0,
  /* 726 */ 'A', 'L', 'G', 'F', 0,
  /* 731 */ 'C', 'L', 'G', 'F', 0,
  /* 736 */ 'L', 'L', 'G', 'F', 0,
  /* 741 */ 'S', 'L', 'G', 'F', 0,
  /* 746 */ 'D', 'S', 'G', 'F', 0,
  /* 751 */ 'M', 'S', 'G', 'F', 0,
  /* 756 */ 'I', 'I', 'H', 'F', 0,
  /* 761 */ 'L', 'L', 'I', 'H', 'F', 0,
  /* 767 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'H', 'F', 0,
  /* 784 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'H', 'F', 0,
  /* 801 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'I', 'H', 'F', 0,
  /* 818 */ 'I', 'I', 'L', 'F', 0,
  /* 823 */ 'L', 'L', 'I', 'L', 'F', 0,
  /* 829 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'F', 0,
  /* 846 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'L', 'F', 0,
  /* 863 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'I', 'L', 'F', 0,
  /* 880 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'X', 'I', 'L', 'F', 0,
  /* 898 */ 'S', 'R', 'A', 'G', 0,
  /* 903 */ 'S', 'L', 'B', 'G', 0,
  /* 908 */ 'R', 'I', 'S', 'B', 'G', 0,
  /* 914 */ 'A', 'L', 'C', 'G', 0,
  /* 919 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 934 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 948 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 962 */ 'J', 'G', 0,
  /* 965 */ 'A', 'L', 'G', 0,
  /* 969 */ 'C', 'L', 'G', 0,
  /* 973 */ 'D', 'L', 'G', 0,
  /* 977 */ 'R', 'L', 'L', 'G', 0,
  /* 982 */ 'S', 'L', 'L', 'G', 0,
  /* 987 */ 'M', 'L', 'G', 0,
  /* 991 */ 'S', 'R', 'L', 'G', 0,
  /* 996 */ 'S', 'L', 'G', 0,
  /* 1000 */ 'L', 'M', 'G', 0,
  /* 1004 */ 'S', 'T', 'M', 'G', 0,
  /* 1009 */ 'N', 'G', 0,
  /* 1012 */ 'O', 'G', 0,
  /* 1015 */ 'C', 'S', 'G', 0,
  /* 1019 */ 'D', 'S', 'G', 0,
  /* 1023 */ 'M', 'S', 'G', 0,
  /* 1027 */ 'S', 'T', 'G', 0,
  /* 1031 */ 'L', 'R', 'V', 'G', 0,
  /* 1036 */ 'S', 'T', 'R', 'V', 'G', 0,
  /* 1042 */ 'X', 'G', 0,
  /* 1045 */ 'A', 'H', 0,
  /* 1048 */ 'C', 'H', 0,
  /* 1051 */ 'C', 'G', 'H', 0,
  /* 1055 */ 'L', 'L', 'G', 'H', 0,
  /* 1060 */ 'I', 'I', 'H', 'H', 0,
  /* 1065 */ 'L', 'L', 'I', 'H', 'H', 0,
  /* 1071 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'H', 'H', 0,
  /* 1088 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'H', 'H', 0,
  /* 1105 */ 'A', 's', 'm', 'J', 'H', 0,
  /* 1111 */ 'I', 'I', 'L', 'H', 0,
  /* 1116 */ 'L', 'L', 'I', 'L', 'H', 0,
  /* 1122 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'H', 0,
  /* 1139 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'N', 'I', 'L', 'H', 0,
  /* 1157 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'L', 'H', 0,
  /* 1174 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'O', 'I', 'L', 'H', 0,
  /* 1192 */ 'A', 's', 'm', 'J', 'L', 'H', 0,
  /* 1199 */ 'L', 'L', 'H', 0,
  /* 1203 */ 'A', 's', 'm', 'J', 'N', 'L', 'H', 0,
  /* 1211 */ 'M', 'H', 0,
  /* 1214 */ 'A', 's', 'm', 'J', 'N', 'H', 0,
  /* 1221 */ 'S', 'T', 'H', 0,
  /* 1225 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'F', 'I', 0,
  /* 1241 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'A', 'F', 'I', 0,
  /* 1258 */ 'C', 'F', 'I', 0,
  /* 1262 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'G', 'F', 'I', 0,
  /* 1279 */ 'C', 'G', 'F', 'I', 0,
  /* 1284 */ 'A', 'L', 'G', 'F', 'I', 0,
  /* 1290 */ 'C', 'L', 'G', 'F', 'I', 0,
  /* 1296 */ 'S', 'L', 'G', 'F', 'I', 0,
  /* 1302 */ 'M', 'S', 'G', 'F', 'I', 0,
  /* 1308 */ 'A', 'L', 'F', 'I', 0,
  /* 1313 */ 'C', 'L', 'F', 'I', 0,
  /* 1318 */ 'S', 'L', 'F', 'I', 0,
  /* 1323 */ 'M', 'S', 'F', 'I', 0,
  /* 1328 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'H', 'I', 0,
  /* 1344 */ 'C', 'H', 'I', 0,
  /* 1348 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'G', 'H', 'I', 0,
  /* 1365 */ 'C', 'G', 'H', 'I', 0,
  /* 1370 */ 'L', 'G', 'H', 'I', 0,
  /* 1375 */ 'M', 'G', 'H', 'I', 0,
  /* 1380 */ 'M', 'V', 'G', 'H', 'I', 0,
  /* 1386 */ 'M', 'V', 'H', 'H', 'I', 0,
  /* 1392 */ 'L', 'H', 'I', 0,
  /* 1396 */ 'M', 'H', 'I', 0,
  /* 1400 */ 'P', 'H', 'I', 0,
  /* 1404 */ 'M', 'V', 'H', 'I', 0,
  /* 1409 */ 'C', 'L', 'I', 0,
  /* 1413 */ 'N', 'I', 0,
  /* 1416 */ 'O', 'I', 0,
  /* 1419 */ 'A', 'S', 'I', 0,
  /* 1423 */ 'A', 'G', 'S', 'I', 0,
  /* 1428 */ 'C', 'H', 'S', 'I', 0,
  /* 1433 */ 'C', 'L', 'F', 'H', 'S', 'I', 0,
  /* 1440 */ 'C', 'G', 'H', 'S', 'I', 0,
  /* 1446 */ 'C', 'L', 'G', 'H', 'S', 'I', 0,
  /* 1453 */ 'C', 'H', 'H', 'S', 'I', 0,
  /* 1459 */ 'C', 'L', 'H', 'H', 'S', 'I', 0,
  /* 1466 */ 'M', 'V', 'I', 0,
  /* 1470 */ 'X', 'I', 0,
  /* 1473 */ 'A', 's', 'm', 'J', 0,
  /* 1478 */ 'A', 'L', 0,
  /* 1481 */ 'A', 's', 'm', 'B', 'R', 'C', 'L', 0,
  /* 1489 */ 'D', 'L', 0,
  /* 1492 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1501 */ 'P', 'R', 'O', 'L', 'O', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1514 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1523 */ 'A', 's', 'm', 'J', 'H', 'E', 'L', 0,
  /* 1531 */ 'A', 's', 'm', 'J', 'N', 'H', 'E', 'L', 0,
  /* 1540 */ 'A', 's', 'm', 'J', 'E', 'L', 0,
  /* 1547 */ 'A', 's', 'm', 'J', 'L', 'E', 'L', 0,
  /* 1555 */ 'A', 's', 'm', 'J', 'N', 'L', 'E', 'L', 0,
  /* 1564 */ 'A', 's', 'm', 'J', 'N', 'E', 'L', 0,
  /* 1572 */ 'I', 'I', 'H', 'L', 0,
  /* 1577 */ 'L', 'L', 'I', 'H', 'L', 0,
  /* 1583 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'H', 'L', 0,
  /* 1600 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'H', 'L', 0,
  /* 1617 */ 'A', 's', 'm', 'J', 'H', 'L', 0,
  /* 1624 */ 'A', 's', 'm', 'J', 'L', 'H', 'L', 0,
  /* 1632 */ 'A', 's', 'm', 'J', 'N', 'L', 'H', 'L', 0,
  /* 1641 */ 'A', 's', 'm', 'J', 'N', 'H', 'L', 0,
  /* 1649 */ 'A', 's', 'm', 'J', 'L', 0,
  /* 1655 */ 'I', 'I', 'L', 'L', 0,
  /* 1660 */ 'K', 'I', 'L', 'L', 0,
  /* 1665 */ 'L', 'L', 'I', 'L', 'L', 0,
  /* 1671 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'L', 0,
  /* 1688 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'I', 'L', 'L', 0,
  /* 1705 */ 'A', 's', 'm', 'J', 'L', 'L', 0,
  /* 1712 */ 'A', 's', 'm', 'J', 'N', 'L', 'L', 0,
  /* 1720 */ 'R', 'L', 'L', 0,
  /* 1724 */ 'S', 'L', 'L', 0,
  /* 1728 */ 'A', 's', 'm', 'J', 'N', 'L', 0,
  /* 1735 */ 'A', 's', 'm', 'J', 'O', 'L', 0,
  /* 1742 */ 'A', 's', 'm', 'J', 'N', 'O', 'L', 0,
  /* 1750 */ 'L', 'A', 'R', 'L', 0,
  /* 1755 */ 'C', 'R', 'L', 0,
  /* 1759 */ 'C', 'G', 'F', 'R', 'L', 0,
  /* 1765 */ 'C', 'L', 'G', 'F', 'R', 'L', 0,
  /* 1772 */ 'L', 'L', 'G', 'F', 'R', 'L', 0,
  /* 1779 */ 'C', 'G', 'R', 'L', 0,
  /* 1784 */ 'C', 'L', 'G', 'R', 'L', 0,
  /* 1790 */ 'S', 'T', 'G', 'R', 'L', 0,
  /* 1796 */ 'C', 'H', 'R', 'L', 0,
  /* 1801 */ 'C', 'G', 'H', 'R', 'L', 0,
  /* 1807 */ 'C', 'L', 'G', 'H', 'R', 'L', 0,
  /* 1814 */ 'L', 'L', 'G', 'H', 'R', 'L', 0,
  /* 1821 */ 'C', 'L', 'H', 'R', 'L', 0,
  /* 1827 */ 'L', 'L', 'H', 'R', 'L', 0,
  /* 1833 */ 'S', 'T', 'H', 'R', 'L', 0,
  /* 1839 */ 'C', 'L', 'R', 'L', 0,
  /* 1844 */ 'S', 'R', 'L', 0,
  /* 1848 */ 'S', 'T', 'R', 'L', 0,
  /* 1853 */ 'A', 's', 'm', 'B', 'R', 'A', 'S', 'L', 0,
  /* 1862 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 1872 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'U', 'M', 'I', 'N', 0,
  /* 1890 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'M', 'I', 'N', 0,
  /* 1907 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 1924 */ 'A', 's', 'm', 'J', 'O', 0,
  /* 1930 */ 'A', 's', 'm', 'J', 'N', 'O', 0,
  /* 1937 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 1952 */ 'E', 'A', 'R', 0,
  /* 1956 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'R', 0,
  /* 1971 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'A', 'R', 0,
  /* 1987 */ 'M', 'A', 'D', 'B', 'R', 0,
  /* 1993 */ 'L', 'C', 'D', 'B', 'R', 0,
  /* 1999 */ 'D', 'D', 'B', 'R', 0,
  /* 2004 */ 'L', 'E', 'D', 'B', 'R', 0,
  /* 2010 */ 'C', 'F', 'D', 'B', 'R', 0,
  /* 2016 */ 'C', 'G', 'D', 'B', 'R', 0,
  /* 2022 */ 'F', 'I', 'D', 'B', 'R', 0,
  /* 2028 */ 'M', 'D', 'B', 'R', 0,
  /* 2033 */ 'L', 'N', 'D', 'B', 'R', 0,
  /* 2039 */ 'L', 'P', 'D', 'B', 'R', 0,
  /* 2045 */ 'S', 'Q', 'D', 'B', 'R', 0,
  /* 2051 */ 'M', 'S', 'D', 'B', 'R', 0,
  /* 2057 */ 'L', 'X', 'D', 'B', 'R', 0,
  /* 2063 */ 'M', 'X', 'D', 'B', 'R', 0,
  /* 2069 */ 'M', 'A', 'E', 'B', 'R', 0,
  /* 2075 */ 'L', 'C', 'E', 'B', 'R', 0,
  /* 2081 */ 'L', 'D', 'E', 'B', 'R', 0,
  /* 2087 */ 'M', 'D', 'E', 'B', 'R', 0,
  /* 2093 */ 'M', 'E', 'E', 'B', 'R', 0,
  /* 2099 */ 'C', 'F', 'E', 'B', 'R', 0,
  /* 2105 */ 'C', 'G', 'E', 'B', 'R', 0,
  /* 2111 */ 'F', 'I', 'E', 'B', 'R', 0,
  /* 2117 */ 'L', 'N', 'E', 'B', 'R', 0,
  /* 2123 */ 'L', 'P', 'E', 'B', 'R', 0,
  /* 2129 */ 'S', 'Q', 'E', 'B', 'R', 0,
  /* 2135 */ 'M', 'S', 'E', 'B', 'R', 0,
  /* 2141 */ 'L', 'X', 'E', 'B', 'R', 0,
  /* 2147 */ 'C', 'D', 'F', 'B', 'R', 0,
  /* 2153 */ 'C', 'E', 'F', 'B', 'R', 0,
  /* 2159 */ 'C', 'X', 'F', 'B', 'R', 0,
  /* 2165 */ 'C', 'D', 'G', 'B', 'R', 0,
  /* 2171 */ 'C', 'E', 'G', 'B', 'R', 0,
  /* 2177 */ 'S', 'L', 'G', 'B', 'R', 0,
  /* 2183 */ 'C', 'X', 'G', 'B', 'R', 0,
  /* 2189 */ 'S', 'L', 'B', 'R', 0,
  /* 2194 */ 'A', 'X', 'B', 'R', 0,
  /* 2199 */ 'L', 'C', 'X', 'B', 'R', 0,
  /* 2205 */ 'L', 'D', 'X', 'B', 'R', 0,
  /* 2211 */ 'L', 'E', 'X', 'B', 'R', 0,
  /* 2217 */ 'C', 'F', 'X', 'B', 'R', 0,
  /* 2223 */ 'C', 'G', 'X', 'B', 'R', 0,
  /* 2229 */ 'F', 'I', 'X', 'B', 'R', 0,
  /* 2235 */ 'M', 'X', 'B', 'R', 0,
  /* 2240 */ 'L', 'N', 'X', 'B', 'R', 0,
  /* 2246 */ 'L', 'P', 'X', 'B', 'R', 0,
  /* 2252 */ 'S', 'Q', 'X', 'B', 'R', 0,
  /* 2258 */ 'S', 'X', 'B', 'R', 0,
  /* 2263 */ 'L', 'L', 'G', 'C', 'R', 0,
  /* 2269 */ 'A', 'L', 'C', 'R', 0,
  /* 2274 */ 'L', 'L', 'C', 'R', 0,
  /* 2279 */ 'L', 'G', 'D', 'R', 0,
  /* 2284 */ 'L', 'D', 'R', 0,
  /* 2288 */ 'L', 'Z', 'D', 'R', 0,
  /* 2293 */ 'L', 'E', 'R', 0,
  /* 2297 */ 'L', 'Z', 'E', 'R', 0,
  /* 2302 */ 'A', 'G', 'F', 'R', 0,
  /* 2307 */ 'L', 'C', 'G', 'F', 'R', 0,
  /* 2313 */ 'A', 'L', 'G', 'F', 'R', 0,
  /* 2319 */ 'C', 'L', 'G', 'F', 'R', 0,
  /* 2325 */ 'L', 'L', 'G', 'F', 'R', 0,
  /* 2331 */ 'S', 'L', 'G', 'F', 'R', 0,
  /* 2337 */ 'D', 'S', 'G', 'F', 'R', 0,
  /* 2343 */ 'M', 'S', 'G', 'F', 'R', 0,
  /* 2349 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'G', 'R', 0,
  /* 2365 */ 'A', 'L', 'C', 'G', 'R', 0,
  /* 2371 */ 'L', 'D', 'G', 'R', 0,
  /* 2376 */ 'A', 'L', 'G', 'R', 0,
  /* 2381 */ 'C', 'L', 'G', 'R', 0,
  /* 2386 */ 'D', 'L', 'G', 'R', 0,
  /* 2391 */ 'M', 'L', 'G', 'R', 0,
  /* 2396 */ 'S', 'L', 'G', 'R', 0,
  /* 2401 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'G', 'R', 0,
  /* 2417 */ 'F', 'L', 'O', 'G', 'R', 0,
  /* 2423 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'G', 'R', 0,
  /* 2439 */ 'D', 'S', 'G', 'R', 0,
  /* 2444 */ 'M', 'S', 'G', 'R', 0,
  /* 2449 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'G', 'R', 0,
  /* 2465 */ 'L', 'R', 'V', 'G', 'R', 0,
  /* 2471 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'G', 'R', 0,
  /* 2487 */ 'L', 'L', 'G', 'H', 'R', 0,
  /* 2493 */ 'L', 'L', 'H', 'R', 0,
  /* 2498 */ 'A', 'L', 'R', 0,
  /* 2502 */ 'C', 'L', 'R', 0,
  /* 2506 */ 'D', 'L', 'R', 0,
  /* 2510 */ 'S', 'L', 'R', 0,
  /* 2514 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'R', 0,
  /* 2529 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'N', 'R', 0,
  /* 2545 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', 0,
  /* 2560 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'O', 'R', 0,
  /* 2576 */ 'A', 's', 'm', 'B', 'A', 'S', 'R', 0,
  /* 2584 */ 'M', 'S', 'R', 0,
  /* 2588 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'R', 0,
  /* 2603 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'S', 'R', 0,
  /* 2619 */ 'L', 'R', 'V', 'R', 0,
  /* 2624 */ 'L', 'X', 'R', 0,
  /* 2628 */ 'L', 'Z', 'X', 'R', 0,
  /* 2633 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'R', 0,
  /* 2648 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'X', 'R', 0,
  /* 2664 */ 'A', 's', 'm', 'B', 'R', 'A', 'S', 0,
  /* 2672 */ 'C', 'S', 0,
  /* 2675 */ 'M', 'S', 0,
  /* 2678 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 2695 */ 'R', 'E', 'T', 0,
  /* 2699 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 2714 */ 'S', 'T', 0,
  /* 2717 */ 'L', 'R', 'V', 0,
  /* 2721 */ 'S', 'T', 'R', 'V', 0,
  /* 2726 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', 'W', 0,
  /* 2739 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', 'W', 0,
  /* 2756 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'U', 'M', 'A', 'X', 0,
  /* 2774 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'M', 'A', 'X', 0,
  /* 2791 */ 'L', 'X', 0,
  /* 2794 */ 'S', 'T', 'X', 0,
  /* 2798 */ 'I', 'C', '3', '2', 'Y', 0,
  /* 2804 */ 'S', 'T', 'C', '3', '2', 'Y', 0,
  /* 2811 */ 'S', 'T', 'H', '3', '2', 'Y', 0,
  /* 2818 */ 'S', 'T', '3', '2', 'Y', 0,
  /* 2824 */ 'L', 'A', 'Y', 0,
  /* 2828 */ 'I', 'C', 'Y', 0,
  /* 2832 */ 'S', 'T', 'C', 'Y', 0,
  /* 2837 */ 'L', 'D', 'Y', 0,
  /* 2841 */ 'S', 'T', 'D', 'Y', 0,
  /* 2846 */ 'L', 'E', 'Y', 0,
  /* 2850 */ 'S', 'T', 'E', 'Y', 0,
  /* 2855 */ 'A', 'H', 'Y', 0,
  /* 2859 */ 'C', 'H', 'Y', 0,
  /* 2863 */ 'L', 'H', 'Y', 0,
  /* 2867 */ 'M', 'H', 'Y', 0,
  /* 2871 */ 'S', 'T', 'H', 'Y', 0,
  /* 2876 */ 'C', 'L', 'I', 'Y', 0,
  /* 2881 */ 'N', 'I', 'Y', 0,
  /* 2885 */ 'O', 'I', 'Y', 0,
  /* 2889 */ 'M', 'V', 'I', 'Y', 0,
  /* 2894 */ 'X', 'I', 'Y', 0,
  /* 2898 */ 'A', 'L', 'Y', 0,
  /* 2902 */ 'C', 'L', 'Y', 0,
  /* 2906 */ 'S', 'L', 'Y', 0,
  /* 2910 */ 'N', 'Y', 0,
  /* 2913 */ 'O', 'Y', 0,
  /* 2916 */ 'C', 'O', 'P', 'Y', 0,
  /* 2921 */ 'C', 'S', 'Y', 0,
  /* 2925 */ 'M', 'S', 'Y', 0,
  /* 2929 */ 'S', 'T', 'Y', 0,
  /* 2933 */ 'X', 'Y', 0,
  /* 2936 */ 'C', 'P', 'S', 'D', 'R', 'd', 'd', 0,
  /* 2944 */ 'C', 'P', 'S', 'D', 'R', 's', 'd', 0,
  /* 2952 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'F', '3', '2', 'i', 0,
  /* 2972 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'H', '3', '2', 'i', 0,
  /* 2992 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'L', '3', '2', 'i', 0,
  /* 3012 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'H', 'F', 'i', 0,
  /* 3030 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'F', 'i', 0,
  /* 3048 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'H', 'H', 'i', 0,
  /* 3066 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'H', 'i', 0,
  /* 3084 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'N', 'I', 'L', 'H', 'i', 0,
  /* 3103 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'H', 'L', 'i', 0,
  /* 3121 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'I', 'L', 'L', 'i', 0,
  /* 3139 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'G', 'R', 'i', 0,
  /* 3156 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'R', 'i', 0,
  /* 3172 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', 'W', '_', 'N', 'R', 'i', 0,
  /* 3189 */ 'C', 'P', 'S', 'D', 'R', 'd', 's', 0,
  /* 3197 */ 'C', 'P', 'S', 'D', 'R', 's', 's', 0,
};

extern const unsigned SystemZInstrNameIndices[] = {
    1400U, 1862U, 1501U, 1514U, 1492U, 1660U, 919U, 934U, 
    705U, 948U, 2678U, 695U, 628U, 2916U, 662U, 2699U, 
    611U, 479U, 486U, 1988U, 1907U, 1937U, 585U, 523U, 
    2070U, 332U, 1237U, 900U, 718U, 1274U, 2302U, 1360U, 
    2361U, 1423U, 1045U, 1340U, 2855U, 1478U, 577U, 914U, 
    2365U, 2269U, 1308U, 965U, 726U, 1284U, 2313U, 2376U, 
    2498U, 2898U, 1953U, 1419U, 2739U, 1241U, 1971U, 2774U, 
    1890U, 1139U, 3084U, 2529U, 3172U, 1174U, 2560U, 2603U, 
    2756U, 1872U, 880U, 2648U, 1225U, 1262U, 1348U, 2349U, 
    1328U, 1956U, 294U, 428U, 240U, 374U, 2401U, 3139U, 
    767U, 3012U, 1071U, 3048U, 1583U, 3103U, 829U, 18U, 
    2952U, 3030U, 1122U, 100U, 2972U, 3066U, 1671U, 151U, 
    2992U, 3121U, 2514U, 3156U, 2423U, 784U, 1088U, 1600U, 
    846U, 37U, 1157U, 119U, 1688U, 170U, 2545U, 2449U, 
    2588U, 274U, 408U, 220U, 354U, 2471U, 801U, 863U, 
    56U, 2633U, 2726U, 259U, 393U, 2194U, 2825U, 2576U, 
    2664U, 1853U, 597U, 1481U, 1473U, 656U, 1540U, 1105U, 
    641U, 1523U, 1617U, 1649U, 669U, 1547U, 1192U, 1624U, 
    1705U, 684U, 1564U, 1214U, 648U, 1531U, 1641U, 1728U, 
    676U, 1555U, 1203U, 1632U, 1712U, 1930U, 1742U, 1924U, 
    1735U, 2579U, 1990U, 2667U, 1856U, 600U, 1484U, 572U, 
    490U, 1994U, 2147U, 2165U, 527U, 2076U, 2153U, 2171U, 
    2010U, 2099U, 1258U, 2217U, 916U, 2016U, 2105U, 722U, 
    1279U, 2308U, 1759U, 1051U, 1365U, 1801U, 1440U, 2367U, 
    1779U, 2223U, 1048U, 1453U, 1344U, 1796U, 1428U, 2859U, 
    1486U, 1433U, 1313U, 969U, 731U, 1290U, 2319U, 1765U, 
    1807U, 1446U, 2381U, 1784U, 1459U, 1821U, 1409U, 2876U, 
    2502U, 1839U, 2902U, 2936U, 3189U, 2944U, 3197U, 2266U, 
    1755U, 2672U, 1015U, 2921U, 2200U, 2159U, 2183U, 2829U, 
    494U, 1999U, 532U, 2082U, 1489U, 973U, 2386U, 2506U, 
    1019U, 746U, 2337U, 2439U, 2206U, 1952U, 2022U, 2111U, 
    2229U, 2417U, 574U, 0U, 2798U, 2828U, 756U, 1060U, 
    1572U, 818U, 11U, 1111U, 93U, 1655U, 144U, 1476U, 
    962U, 1479U, 467U, 478U, 1750U, 2824U, 566U, 2190U, 
    1993U, 2075U, 2307U, 2366U, 2270U, 2199U, 608U, 531U, 
    2081U, 2371U, 2284U, 2205U, 2837U, 666U, 2004U, 2293U, 
    2211U, 2846U, 966U, 561U, 2178U, 2279U, 727U, 1285U, 
    2314U, 1766U, 1056U, 1370U, 2488U, 1808U, 2377U, 1785U, 
    1113U, 1392U, 2494U, 1822U, 2863U, 581U, 2274U, 569U, 
    2263U, 736U, 2325U, 1772U, 1055U, 2487U, 1814U, 1199U, 
    2493U, 1827U, 761U, 1065U, 1577U, 823U, 1116U, 1665U, 
    1000U, 2033U, 2117U, 2240U, 2039U, 2123U, 2246U, 2499U, 
    1840U, 2717U, 1031U, 2465U, 2619U, 2791U, 512U, 2057U, 
    556U, 2141U, 2624U, 2899U, 2288U, 2297U, 2628U, 485U, 
    1987U, 522U, 2069U, 498U, 2028U, 536U, 2087U, 541U, 
    2093U, 1375U, 1211U, 1396U, 2867U, 987U, 2391U, 2675U, 
    507U, 2051U, 551U, 2135U, 1323U, 1023U, 751U, 1302U, 
    2343U, 2444U, 2584U, 2925U, 1380U, 1386U, 1404U, 1466U, 
    2889U, 2235U, 517U, 2063U, 1888U, 1009U, 2413U, 1413U, 
    779U, 1083U, 1595U, 841U, 30U, 1134U, 112U, 1683U, 
    163U, 2881U, 2526U, 2910U, 1928U, 1012U, 2419U, 1416U, 
    796U, 1100U, 1612U, 858U, 49U, 1169U, 131U, 1700U, 
    182U, 2885U, 2557U, 2913U, 2695U, 908U, 85U, 1720U, 
    977U, 2670U, 508U, 2052U, 552U, 2136U, 1016U, 747U, 
    2338U, 2440U, 1859U, 565U, 903U, 2189U, 1318U, 996U, 
    2177U, 741U, 1296U, 2331U, 2396U, 1724U, 982U, 2510U, 
    2906U, 502U, 2045U, 546U, 2129U, 2252U, 2581U, 481U, 
    898U, 1844U, 991U, 2714U, 472U, 204U, 2818U, 604U, 
    5U, 2804U, 2832U, 624U, 2841U, 691U, 2850U, 1027U, 
    1790U, 1221U, 138U, 2811U, 1833U, 189U, 2871U, 1004U, 
    1848U, 197U, 2721U, 1036U, 2794U, 2929U, 2258U, 2922U, 
    313U, 447U, 456U, 75U, 322U, 2772U, 1042U, 2483U, 
    1470U, 813U, 875U, 68U, 2894U, 2625U, 2933U, 209U, 
    343U, 
};

static inline void InitSystemZMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(SystemZInsts, SystemZInstrNameIndices, SystemZInstrNameData, 505);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct SystemZGenInstrInfo : public TargetInstrInfo {
  explicit SystemZGenInstrInfo(int SO = -1, int DO = -1);
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR
#undef GET_INSTRINFO_CTOR
namespace llvm {
extern const MCInstrDesc SystemZInsts[];
extern const unsigned SystemZInstrNameIndices[];
extern const char SystemZInstrNameData[];
SystemZGenInstrInfo::SystemZGenInstrInfo(int SO, int DO)
  : TargetInstrInfo(SO, DO) {
  InitMCInstrInfo(SystemZInsts, SystemZInstrNameIndices, SystemZInstrNameData, 505);
}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR

#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace SystemZ {

enum PairType {
	PairType_12,
	PairType_20
};

// getDisp12Opcode
int getDisp12Opcode(uint16_t Opcode) {
static const uint16_t getDisp12OpcodeTable[][2] = {
  { SystemZ::AHY, SystemZ::AH },
  { SystemZ::ALY, SystemZ::AL },
  { SystemZ::AY, SystemZ::A },
  { SystemZ::CHY, SystemZ::CH },
  { SystemZ::CLIY, SystemZ::CLI },
  { SystemZ::CLY, SystemZ::CL },
  { SystemZ::CSY, SystemZ::CS },
  { SystemZ::CY, SystemZ::C },
  { SystemZ::IC32Y, SystemZ::IC32 },
  { SystemZ::ICY, SystemZ::IC },
  { SystemZ::LAY, SystemZ::LA },
  { SystemZ::LDY, SystemZ::LD },
  { SystemZ::LEY, SystemZ::LE },
  { SystemZ::LHY, SystemZ::LH },
  { SystemZ::LY, SystemZ::L },
  { SystemZ::MHY, SystemZ::MH },
  { SystemZ::MSY, SystemZ::MS },
  { SystemZ::MVIY, SystemZ::MVI },
  { SystemZ::NIY, SystemZ::NI },
  { SystemZ::NY, SystemZ::N },
  { SystemZ::OIY, SystemZ::OI },
  { SystemZ::OY, SystemZ::O },
  { SystemZ::SLY, SystemZ::SL },
  { SystemZ::ST32Y, SystemZ::ST32 },
  { SystemZ::STC32Y, SystemZ::STC32 },
  { SystemZ::STCY, SystemZ::STC },
  { SystemZ::STDY, SystemZ::STD },
  { SystemZ::STEY, SystemZ::STE },
  { SystemZ::STH32Y, SystemZ::STH32 },
  { SystemZ::STHY, SystemZ::STH },
  { SystemZ::STY, SystemZ::ST },
  { SystemZ::SY, SystemZ::S },
  { SystemZ::XIY, SystemZ::XI },
  { SystemZ::XY, SystemZ::X },
}; // End of getDisp12OpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 34;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getDisp12OpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getDisp12OpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getDisp12OpcodeTable[mid][1];
}

// getDisp20Opcode
int getDisp20Opcode(uint16_t Opcode) {
static const uint16_t getDisp20OpcodeTable[][2] = {
  { SystemZ::A, SystemZ::AY },
  { SystemZ::AH, SystemZ::AHY },
  { SystemZ::AL, SystemZ::ALY },
  { SystemZ::C, SystemZ::CY },
  { SystemZ::CH, SystemZ::CHY },
  { SystemZ::CL, SystemZ::CLY },
  { SystemZ::CLI, SystemZ::CLIY },
  { SystemZ::CS, SystemZ::CSY },
  { SystemZ::IC, SystemZ::ICY },
  { SystemZ::IC32, SystemZ::IC32Y },
  { SystemZ::L, SystemZ::LY },
  { SystemZ::LA, SystemZ::LAY },
  { SystemZ::LD, SystemZ::LDY },
  { SystemZ::LE, SystemZ::LEY },
  { SystemZ::LH, SystemZ::LHY },
  { SystemZ::MH, SystemZ::MHY },
  { SystemZ::MS, SystemZ::MSY },
  { SystemZ::MVI, SystemZ::MVIY },
  { SystemZ::N, SystemZ::NY },
  { SystemZ::NI, SystemZ::NIY },
  { SystemZ::O, SystemZ::OY },
  { SystemZ::OI, SystemZ::OIY },
  { SystemZ::S, SystemZ::SY },
  { SystemZ::SL, SystemZ::SLY },
  { SystemZ::ST, SystemZ::STY },
  { SystemZ::ST32, SystemZ::ST32Y },
  { SystemZ::STC, SystemZ::STCY },
  { SystemZ::STC32, SystemZ::STC32Y },
  { SystemZ::STD, SystemZ::STDY },
  { SystemZ::STE, SystemZ::STEY },
  { SystemZ::STH, SystemZ::STHY },
  { SystemZ::STH32, SystemZ::STH32Y },
  { SystemZ::X, SystemZ::XY },
  { SystemZ::XI, SystemZ::XIY },
}; // End of getDisp20OpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 34;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getDisp20OpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getDisp20OpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getDisp20OpcodeTable[mid][1];
}

} // End SystemZ namespace
} // End llvm namespace
#endif // GET_INSTRMAP_INFO

