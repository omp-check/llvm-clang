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

namespace PPC {
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
    ADD4	= 17,
    ADD4o	= 18,
    ADD8	= 19,
    ADD8TLS	= 20,
    ADD8o	= 21,
    ADDC	= 22,
    ADDC8	= 23,
    ADDC8o	= 24,
    ADDCo	= 25,
    ADDE	= 26,
    ADDE8	= 27,
    ADDE8o	= 28,
    ADDEo	= 29,
    ADDI	= 30,
    ADDI8	= 31,
    ADDIC	= 32,
    ADDIC8	= 33,
    ADDICo	= 34,
    ADDIS	= 35,
    ADDIS8	= 36,
    ADDISdtprelHA	= 37,
    ADDISgotTprelHA	= 38,
    ADDIStlsgdHA	= 39,
    ADDIStlsldHA	= 40,
    ADDIStocHA	= 41,
    ADDIdtprelL	= 42,
    ADDItlsgdL	= 43,
    ADDItlsldL	= 44,
    ADDItocL	= 45,
    ADDME	= 46,
    ADDME8	= 47,
    ADDME8o	= 48,
    ADDMEo	= 49,
    ADDZE	= 50,
    ADDZE8	= 51,
    ADDZE8o	= 52,
    ADDZEo	= 53,
    ADJCALLSTACKDOWN	= 54,
    ADJCALLSTACKUP	= 55,
    AND	= 56,
    AND8	= 57,
    AND8o	= 58,
    ANDC	= 59,
    ANDC8	= 60,
    ANDC8o	= 61,
    ANDCo	= 62,
    ANDISo	= 63,
    ANDISo8	= 64,
    ANDIo	= 65,
    ANDIo8	= 66,
    ANDo	= 67,
    ATOMIC_CMP_SWAP_I16	= 68,
    ATOMIC_CMP_SWAP_I32	= 69,
    ATOMIC_CMP_SWAP_I64	= 70,
    ATOMIC_CMP_SWAP_I8	= 71,
    ATOMIC_LOAD_ADD_I16	= 72,
    ATOMIC_LOAD_ADD_I32	= 73,
    ATOMIC_LOAD_ADD_I64	= 74,
    ATOMIC_LOAD_ADD_I8	= 75,
    ATOMIC_LOAD_AND_I16	= 76,
    ATOMIC_LOAD_AND_I32	= 77,
    ATOMIC_LOAD_AND_I64	= 78,
    ATOMIC_LOAD_AND_I8	= 79,
    ATOMIC_LOAD_NAND_I16	= 80,
    ATOMIC_LOAD_NAND_I32	= 81,
    ATOMIC_LOAD_NAND_I64	= 82,
    ATOMIC_LOAD_NAND_I8	= 83,
    ATOMIC_LOAD_OR_I16	= 84,
    ATOMIC_LOAD_OR_I32	= 85,
    ATOMIC_LOAD_OR_I64	= 86,
    ATOMIC_LOAD_OR_I8	= 87,
    ATOMIC_LOAD_SUB_I16	= 88,
    ATOMIC_LOAD_SUB_I32	= 89,
    ATOMIC_LOAD_SUB_I64	= 90,
    ATOMIC_LOAD_SUB_I8	= 91,
    ATOMIC_LOAD_XOR_I16	= 92,
    ATOMIC_LOAD_XOR_I32	= 93,
    ATOMIC_LOAD_XOR_I64	= 94,
    ATOMIC_LOAD_XOR_I8	= 95,
    ATOMIC_SWAP_I16	= 96,
    ATOMIC_SWAP_I32	= 97,
    ATOMIC_SWAP_I64	= 98,
    ATOMIC_SWAP_I8	= 99,
    B	= 100,
    BCC	= 101,
    BCCTR	= 102,
    BCCTR8	= 103,
    BCCTRL	= 104,
    BCCTRL8	= 105,
    BCLR	= 106,
    BCLalways	= 107,
    BCTR	= 108,
    BCTR8	= 109,
    BCTRL	= 110,
    BCTRL8	= 111,
    BDNZ	= 112,
    BDNZ8	= 113,
    BDNZLR	= 114,
    BDNZLR8	= 115,
    BDZ	= 116,
    BDZ8	= 117,
    BDZLR	= 118,
    BDZLR8	= 119,
    BL	= 120,
    BL8	= 121,
    BL8_NOP	= 122,
    BL8_NOP_TLSGD	= 123,
    BL8_NOP_TLSLD	= 124,
    BLA	= 125,
    BLA8	= 126,
    BLA8_NOP	= 127,
    BLR	= 128,
    CMPD	= 129,
    CMPDI	= 130,
    CMPLD	= 131,
    CMPLDI	= 132,
    CMPLW	= 133,
    CMPLWI	= 134,
    CMPW	= 135,
    CMPWI	= 136,
    CNTLZD	= 137,
    CNTLZDo	= 138,
    CNTLZW	= 139,
    CNTLZWo	= 140,
    CR6SET	= 141,
    CR6UNSET	= 142,
    CREQV	= 143,
    CROR	= 144,
    CRSET	= 145,
    CRUNSET	= 146,
    DCBA	= 147,
    DCBF	= 148,
    DCBI	= 149,
    DCBST	= 150,
    DCBT	= 151,
    DCBTST	= 152,
    DCBZ	= 153,
    DCBZL	= 154,
    DIVD	= 155,
    DIVDU	= 156,
    DIVDUo	= 157,
    DIVDo	= 158,
    DIVW	= 159,
    DIVWU	= 160,
    DIVWUo	= 161,
    DIVWo	= 162,
    DSS	= 163,
    DSSALL	= 164,
    DST	= 165,
    DST64	= 166,
    DSTST	= 167,
    DSTST64	= 168,
    DSTSTT	= 169,
    DSTSTT64	= 170,
    DSTT	= 171,
    DSTT64	= 172,
    DYNALLOC	= 173,
    DYNALLOC8	= 174,
    EH_SjLj_LongJmp32	= 175,
    EH_SjLj_LongJmp64	= 176,
    EH_SjLj_SetJmp32	= 177,
    EH_SjLj_SetJmp64	= 178,
    EH_SjLj_Setup	= 179,
    EQV	= 180,
    EQV8	= 181,
    EQV8o	= 182,
    EQVo	= 183,
    EXTSB	= 184,
    EXTSB8	= 185,
    EXTSB8o	= 186,
    EXTSBo	= 187,
    EXTSH	= 188,
    EXTSH8	= 189,
    EXTSH8o	= 190,
    EXTSHo	= 191,
    EXTSW	= 192,
    EXTSW_32_64	= 193,
    EXTSW_32_64o	= 194,
    EXTSWo	= 195,
    FABSD	= 196,
    FABSDo	= 197,
    FABSS	= 198,
    FABSSo	= 199,
    FADD	= 200,
    FADDS	= 201,
    FADDSo	= 202,
    FADDo	= 203,
    FADDrtz	= 204,
    FCFID	= 205,
    FCFIDS	= 206,
    FCFIDSo	= 207,
    FCFIDU	= 208,
    FCFIDUS	= 209,
    FCFIDUSo	= 210,
    FCFIDUo	= 211,
    FCFIDo	= 212,
    FCMPUD	= 213,
    FCMPUS	= 214,
    FCTIDUZ	= 215,
    FCTIDUZo	= 216,
    FCTIDZ	= 217,
    FCTIDZo	= 218,
    FCTIWUZ	= 219,
    FCTIWUZo	= 220,
    FCTIWZ	= 221,
    FCTIWZo	= 222,
    FDIV	= 223,
    FDIVS	= 224,
    FDIVSo	= 225,
    FDIVo	= 226,
    FMADD	= 227,
    FMADDS	= 228,
    FMADDSo	= 229,
    FMADDo	= 230,
    FMR	= 231,
    FMRo	= 232,
    FMSUB	= 233,
    FMSUBS	= 234,
    FMSUBSo	= 235,
    FMSUBo	= 236,
    FMUL	= 237,
    FMULS	= 238,
    FMULSo	= 239,
    FMULo	= 240,
    FNABSD	= 241,
    FNABSDo	= 242,
    FNABSS	= 243,
    FNABSSo	= 244,
    FNEGD	= 245,
    FNEGDo	= 246,
    FNEGS	= 247,
    FNEGSo	= 248,
    FNMADD	= 249,
    FNMADDS	= 250,
    FNMADDSo	= 251,
    FNMADDo	= 252,
    FNMSUB	= 253,
    FNMSUBS	= 254,
    FNMSUBSo	= 255,
    FNMSUBo	= 256,
    FRE	= 257,
    FRES	= 258,
    FRESo	= 259,
    FREo	= 260,
    FRIMD	= 261,
    FRIMDo	= 262,
    FRIMS	= 263,
    FRIMSo	= 264,
    FRIND	= 265,
    FRINDo	= 266,
    FRINDrint	= 267,
    FRINS	= 268,
    FRINSo	= 269,
    FRINSrint	= 270,
    FRIPD	= 271,
    FRIPDo	= 272,
    FRIPS	= 273,
    FRIPSo	= 274,
    FRIZD	= 275,
    FRIZDo	= 276,
    FRIZS	= 277,
    FRIZSo	= 278,
    FRSP	= 279,
    FRSPo	= 280,
    FRSQRTE	= 281,
    FRSQRTES	= 282,
    FRSQRTESo	= 283,
    FRSQRTEo	= 284,
    FSELD	= 285,
    FSELDo	= 286,
    FSELS	= 287,
    FSELSo	= 288,
    FSQRT	= 289,
    FSQRTS	= 290,
    FSQRTSo	= 291,
    FSQRTo	= 292,
    FSUB	= 293,
    FSUBS	= 294,
    FSUBSo	= 295,
    FSUBo	= 296,
    GETtlsADDR	= 297,
    GETtlsldADDR	= 298,
    ICBI	= 299,
    ISEL	= 300,
    ISEL8	= 301,
    ISYNC	= 302,
    LA	= 303,
    LBZ	= 304,
    LBZ8	= 305,
    LBZU	= 306,
    LBZU8	= 307,
    LBZUX	= 308,
    LBZUX8	= 309,
    LBZX	= 310,
    LBZX8	= 311,
    LD	= 312,
    LDARX	= 313,
    LDBRX	= 314,
    LDU	= 315,
    LDUX	= 316,
    LDX	= 317,
    LDgotTprelL	= 318,
    LDinto_toc	= 319,
    LDtoc	= 320,
    LDtocCPT	= 321,
    LDtocJTI	= 322,
    LDtocL	= 323,
    LDtoc_restore	= 324,
    LFD	= 325,
    LFDU	= 326,
    LFDUX	= 327,
    LFDX	= 328,
    LFIWAX	= 329,
    LFIWZX	= 330,
    LFS	= 331,
    LFSU	= 332,
    LFSUX	= 333,
    LFSX	= 334,
    LHA	= 335,
    LHA8	= 336,
    LHAU	= 337,
    LHAU8	= 338,
    LHAUX	= 339,
    LHAUX8	= 340,
    LHAX	= 341,
    LHAX8	= 342,
    LHBRX	= 343,
    LHZ	= 344,
    LHZ8	= 345,
    LHZU	= 346,
    LHZU8	= 347,
    LHZUX	= 348,
    LHZUX8	= 349,
    LHZX	= 350,
    LHZX8	= 351,
    LI	= 352,
    LI8	= 353,
    LIS	= 354,
    LIS8	= 355,
    LVEBX	= 356,
    LVEHX	= 357,
    LVEWX	= 358,
    LVSL	= 359,
    LVSR	= 360,
    LVX	= 361,
    LVXL	= 362,
    LWA	= 363,
    LWARX	= 364,
    LWAUX	= 365,
    LWAX	= 366,
    LWBRX	= 367,
    LWZ	= 368,
    LWZ8	= 369,
    LWZU	= 370,
    LWZU8	= 371,
    LWZUX	= 372,
    LWZUX8	= 373,
    LWZX	= 374,
    LWZX8	= 375,
    MCRF	= 376,
    MFCR	= 377,
    MFCR8	= 378,
    MFCR8pseud	= 379,
    MFCRpseud	= 380,
    MFCTR	= 381,
    MFCTR8	= 382,
    MFFS	= 383,
    MFLR	= 384,
    MFLR8	= 385,
    MFOCRF	= 386,
    MFTB8	= 387,
    MFVRSAVE	= 388,
    MFVRSAVEv	= 389,
    MFVSCR	= 390,
    MTCRF	= 391,
    MTCRF8	= 392,
    MTCTR	= 393,
    MTCTR8	= 394,
    MTFSB0	= 395,
    MTFSB1	= 396,
    MTFSF	= 397,
    MTLR	= 398,
    MTLR8	= 399,
    MTVRSAVE	= 400,
    MTVRSAVEv	= 401,
    MTVSCR	= 402,
    MULHD	= 403,
    MULHDU	= 404,
    MULHDUo	= 405,
    MULHDo	= 406,
    MULHW	= 407,
    MULHWU	= 408,
    MULHWUo	= 409,
    MULHWo	= 410,
    MULLD	= 411,
    MULLDo	= 412,
    MULLI	= 413,
    MULLW	= 414,
    MULLWo	= 415,
    MovePCtoLR	= 416,
    MovePCtoLR8	= 417,
    NAND	= 418,
    NAND8	= 419,
    NAND8o	= 420,
    NANDo	= 421,
    NEG	= 422,
    NEG8	= 423,
    NEG8o	= 424,
    NEGo	= 425,
    NOP	= 426,
    NOR	= 427,
    NOR8	= 428,
    NOR8o	= 429,
    NORo	= 430,
    OR	= 431,
    OR8	= 432,
    OR8o	= 433,
    ORC	= 434,
    ORC8	= 435,
    ORC8o	= 436,
    ORCo	= 437,
    ORI	= 438,
    ORI8	= 439,
    ORIS	= 440,
    ORIS8	= 441,
    ORo	= 442,
    POPCNTD	= 443,
    POPCNTDo	= 444,
    POPCNTW	= 445,
    POPCNTWo	= 446,
    RESTORE_CR	= 447,
    RESTORE_VRSAVE	= 448,
    RLDCL	= 449,
    RLDCLo	= 450,
    RLDICL	= 451,
    RLDICLo	= 452,
    RLDICR	= 453,
    RLDICRo	= 454,
    RLDIMI	= 455,
    RLDIMIo	= 456,
    RLWIMI	= 457,
    RLWIMIo	= 458,
    RLWINM	= 459,
    RLWINM8	= 460,
    RLWINM8o	= 461,
    RLWINMo	= 462,
    RLWNM	= 463,
    RLWNMo	= 464,
    SELECT_CC_F4	= 465,
    SELECT_CC_F8	= 466,
    SELECT_CC_I4	= 467,
    SELECT_CC_I8	= 468,
    SELECT_CC_VRRC	= 469,
    SLD	= 470,
    SLDI	= 471,
    SLDo	= 472,
    SLW	= 473,
    SLWI	= 474,
    SLWo	= 475,
    SPILL_CR	= 476,
    SPILL_VRSAVE	= 477,
    SRAD	= 478,
    SRADI	= 479,
    SRADIo	= 480,
    SRADo	= 481,
    SRAW	= 482,
    SRAWI	= 483,
    SRAWIo	= 484,
    SRAWo	= 485,
    SRD	= 486,
    SRDI	= 487,
    SRDo	= 488,
    SRW	= 489,
    SRWI	= 490,
    SRWo	= 491,
    STB	= 492,
    STB8	= 493,
    STBU	= 494,
    STBU8	= 495,
    STBUX	= 496,
    STBUX8	= 497,
    STBX	= 498,
    STBX8	= 499,
    STD	= 500,
    STDBRX	= 501,
    STDCX	= 502,
    STDU	= 503,
    STDUX	= 504,
    STDX	= 505,
    STFD	= 506,
    STFDU	= 507,
    STFDUX	= 508,
    STFDX	= 509,
    STFIWX	= 510,
    STFS	= 511,
    STFSU	= 512,
    STFSUX	= 513,
    STFSX	= 514,
    STH	= 515,
    STH8	= 516,
    STHBRX	= 517,
    STHU	= 518,
    STHU8	= 519,
    STHUX	= 520,
    STHUX8	= 521,
    STHX	= 522,
    STHX8	= 523,
    STVEBX	= 524,
    STVEHX	= 525,
    STVEWX	= 526,
    STVX	= 527,
    STVXL	= 528,
    STW	= 529,
    STW8	= 530,
    STWBRX	= 531,
    STWCX	= 532,
    STWU	= 533,
    STWU8	= 534,
    STWUX	= 535,
    STWUX8	= 536,
    STWX	= 537,
    STWX8	= 538,
    SUBF	= 539,
    SUBF8	= 540,
    SUBF8o	= 541,
    SUBFC	= 542,
    SUBFC8	= 543,
    SUBFC8o	= 544,
    SUBFCo	= 545,
    SUBFE	= 546,
    SUBFE8	= 547,
    SUBFE8o	= 548,
    SUBFEo	= 549,
    SUBFIC	= 550,
    SUBFIC8	= 551,
    SUBFME	= 552,
    SUBFME8	= 553,
    SUBFME8o	= 554,
    SUBFMEo	= 555,
    SUBFZE	= 556,
    SUBFZE8	= 557,
    SUBFZE8o	= 558,
    SUBFZEo	= 559,
    SUBFo	= 560,
    SYNC	= 561,
    TAILB	= 562,
    TAILB8	= 563,
    TAILBA	= 564,
    TAILBA8	= 565,
    TAILBCTR	= 566,
    TAILBCTR8	= 567,
    TCRETURNai	= 568,
    TCRETURNai8	= 569,
    TCRETURNdi	= 570,
    TCRETURNdi8	= 571,
    TCRETURNri	= 572,
    TCRETURNri8	= 573,
    TRAP	= 574,
    UPDATE_VRSAVE	= 575,
    VADDCUW	= 576,
    VADDFP	= 577,
    VADDSBS	= 578,
    VADDSHS	= 579,
    VADDSWS	= 580,
    VADDUBM	= 581,
    VADDUBS	= 582,
    VADDUHM	= 583,
    VADDUHS	= 584,
    VADDUWM	= 585,
    VADDUWS	= 586,
    VAND	= 587,
    VANDC	= 588,
    VAVGSB	= 589,
    VAVGSH	= 590,
    VAVGSW	= 591,
    VAVGUB	= 592,
    VAVGUH	= 593,
    VAVGUW	= 594,
    VCFSX	= 595,
    VCFSX_0	= 596,
    VCFUX	= 597,
    VCFUX_0	= 598,
    VCMPBFP	= 599,
    VCMPBFPo	= 600,
    VCMPEQFP	= 601,
    VCMPEQFPo	= 602,
    VCMPEQUB	= 603,
    VCMPEQUBo	= 604,
    VCMPEQUH	= 605,
    VCMPEQUHo	= 606,
    VCMPEQUW	= 607,
    VCMPEQUWo	= 608,
    VCMPGEFP	= 609,
    VCMPGEFPo	= 610,
    VCMPGTFP	= 611,
    VCMPGTFPo	= 612,
    VCMPGTSB	= 613,
    VCMPGTSBo	= 614,
    VCMPGTSH	= 615,
    VCMPGTSHo	= 616,
    VCMPGTSW	= 617,
    VCMPGTSWo	= 618,
    VCMPGTUB	= 619,
    VCMPGTUBo	= 620,
    VCMPGTUH	= 621,
    VCMPGTUHo	= 622,
    VCMPGTUW	= 623,
    VCMPGTUWo	= 624,
    VCTSXS	= 625,
    VCTSXS_0	= 626,
    VCTUXS	= 627,
    VCTUXS_0	= 628,
    VEXPTEFP	= 629,
    VLOGEFP	= 630,
    VMADDFP	= 631,
    VMAXFP	= 632,
    VMAXSB	= 633,
    VMAXSH	= 634,
    VMAXSW	= 635,
    VMAXUB	= 636,
    VMAXUH	= 637,
    VMAXUW	= 638,
    VMHADDSHS	= 639,
    VMHRADDSHS	= 640,
    VMINFP	= 641,
    VMINSB	= 642,
    VMINSH	= 643,
    VMINSW	= 644,
    VMINUB	= 645,
    VMINUH	= 646,
    VMINUW	= 647,
    VMLADDUHM	= 648,
    VMRGHB	= 649,
    VMRGHH	= 650,
    VMRGHW	= 651,
    VMRGLB	= 652,
    VMRGLH	= 653,
    VMRGLW	= 654,
    VMSUMMBM	= 655,
    VMSUMSHM	= 656,
    VMSUMSHS	= 657,
    VMSUMUBM	= 658,
    VMSUMUHM	= 659,
    VMSUMUHS	= 660,
    VMULESB	= 661,
    VMULESH	= 662,
    VMULEUB	= 663,
    VMULEUH	= 664,
    VMULOSB	= 665,
    VMULOSH	= 666,
    VMULOUB	= 667,
    VMULOUH	= 668,
    VNMSUBFP	= 669,
    VNOR	= 670,
    VOR	= 671,
    VPERM	= 672,
    VPKPX	= 673,
    VPKSHSS	= 674,
    VPKSHUS	= 675,
    VPKSWSS	= 676,
    VPKSWUS	= 677,
    VPKUHUM	= 678,
    VPKUHUS	= 679,
    VPKUWUM	= 680,
    VPKUWUS	= 681,
    VREFP	= 682,
    VRFIM	= 683,
    VRFIN	= 684,
    VRFIP	= 685,
    VRFIZ	= 686,
    VRLB	= 687,
    VRLH	= 688,
    VRLW	= 689,
    VRSQRTEFP	= 690,
    VSEL	= 691,
    VSL	= 692,
    VSLB	= 693,
    VSLDOI	= 694,
    VSLH	= 695,
    VSLO	= 696,
    VSLW	= 697,
    VSPLTB	= 698,
    VSPLTH	= 699,
    VSPLTISB	= 700,
    VSPLTISH	= 701,
    VSPLTISW	= 702,
    VSPLTW	= 703,
    VSR	= 704,
    VSRAB	= 705,
    VSRAH	= 706,
    VSRAW	= 707,
    VSRB	= 708,
    VSRH	= 709,
    VSRO	= 710,
    VSRW	= 711,
    VSUBCUW	= 712,
    VSUBFP	= 713,
    VSUBSBS	= 714,
    VSUBSHS	= 715,
    VSUBSWS	= 716,
    VSUBUBM	= 717,
    VSUBUBS	= 718,
    VSUBUHM	= 719,
    VSUBUHS	= 720,
    VSUBUWM	= 721,
    VSUBUWS	= 722,
    VSUM2SWS	= 723,
    VSUM4SBS	= 724,
    VSUM4SHS	= 725,
    VSUM4UBS	= 726,
    VSUMSWS	= 727,
    VUPKHPX	= 728,
    VUPKHSB	= 729,
    VUPKHSH	= 730,
    VUPKLPX	= 731,
    VUPKLSB	= 732,
    VUPKLSH	= 733,
    VXOR	= 734,
    V_SET0	= 735,
    V_SETALLONES	= 736,
    XOR	= 737,
    XOR8	= 738,
    XOR8o	= 739,
    XORI	= 740,
    XORI8	= 741,
    XORIS	= 742,
    XORIS8	= 743,
    XORo	= 744,
    INSTRUCTION_LIST_END = 745
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

static const uint16_t ImplicitList1[] = { PPC::CR0, 0 };
static const uint16_t ImplicitList2[] = { PPC::CARRY, 0 };
static const uint16_t ImplicitList3[] = { PPC::CARRY, PPC::CR0, 0 };
static const uint16_t ImplicitList4[] = { PPC::R1, 0 };
static const uint16_t ImplicitList5[] = { PPC::CTR, 0 };
static const uint16_t ImplicitList6[] = { PPC::CTR8, 0 };
static const uint16_t ImplicitList7[] = { PPC::CTR, PPC::RM, 0 };
static const uint16_t ImplicitList8[] = { PPC::LR, 0 };
static const uint16_t ImplicitList9[] = { PPC::CTR8, PPC::RM, 0 };
static const uint16_t ImplicitList10[] = { PPC::LR8, 0 };
static const uint16_t ImplicitList11[] = { PPC::LR, PPC::RM, 0 };
static const uint16_t ImplicitList12[] = { PPC::RM, 0 };
static const uint16_t ImplicitList13[] = { PPC::CTR, PPC::LR, PPC::RM, 0 };
static const uint16_t ImplicitList14[] = { PPC::CTR8, PPC::LR8, PPC::RM, 0 };
static const uint16_t ImplicitList15[] = { PPC::CR1EQ, 0 };
static const uint16_t ImplicitList16[] = { PPC::X1, 0 };
static const uint16_t ImplicitList17[] = { PPC::CR1, 0 };
static const uint16_t ImplicitList18[] = { PPC::CR6, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo52[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo53[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo62[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo66[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRSAVERCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { PPC::VRSAVERCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { PPC::VRSAVERCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRC_NOR0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RC_NOX0RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo96[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo97[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo100[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo102[] = { { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { PPC::CTRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { PPC::CTRRC8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc PPCInsts[] = {
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
  { 17,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #17 = ADD4
  { 18,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #18 = ADD4o
  { 19,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #19 = ADD8
  { 20,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #20 = ADD8TLS
  { 21,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #21 = ADD8o
  { 22,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList2, OperandInfo8 },  // Inst #22 = ADDC
  { 23,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList2, OperandInfo9 },  // Inst #23 = ADDC8
  { 24,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList3, OperandInfo9 },  // Inst #24 = ADDC8o
  { 25,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList3, OperandInfo8 },  // Inst #25 = ADDCo
  { 26,	3,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo8 },  // Inst #26 = ADDE
  { 27,	3,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo9 },  // Inst #27 = ADDE8
  { 28,	3,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo9 },  // Inst #28 = ADDE8o
  { 29,	3,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo8 },  // Inst #29 = ADDEo
  { 30,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #30 = ADDI
  { 31,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #31 = ADDI8
  { 32,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList2, OperandInfo13 },  // Inst #32 = ADDIC
  { 33,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList2, OperandInfo10 },  // Inst #33 = ADDIC8
  { 34,	3,	1,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, ImplicitList3, OperandInfo13 },  // Inst #34 = ADDICo
  { 35,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #35 = ADDIS
  { 36,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #36 = ADDIS8
  { 37,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #37 = ADDISdtprelHA
  { 38,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #38 = ADDISgotTprelHA
  { 39,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #39 = ADDIStlsgdHA
  { 40,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #40 = ADDIStlsldHA
  { 41,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #41 = ADDIStocHA
  { 42,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #42 = ADDIdtprelL
  { 43,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #43 = ADDItlsgdL
  { 44,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #44 = ADDItlsldL
  { 45,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #45 = ADDItocL
  { 46,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo14 },  // Inst #46 = ADDME
  { 47,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo15 },  // Inst #47 = ADDME8
  { 48,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo15 },  // Inst #48 = ADDME8o
  { 49,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo14 },  // Inst #49 = ADDMEo
  { 50,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo14 },  // Inst #50 = ADDZE
  { 51,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo15 },  // Inst #51 = ADDZE8
  { 52,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo15 },  // Inst #52 = ADDZE8o
  { 53,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo14 },  // Inst #53 = ADDZEo
  { 54,	1,	0,	0,	0,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo5 },  // Inst #54 = ADJCALLSTACKDOWN
  { 55,	2,	0,	0,	0,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo7 },  // Inst #55 = ADJCALLSTACKUP
  { 56,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #56 = AND
  { 57,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #57 = AND8
  { 58,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #58 = AND8o
  { 59,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #59 = ANDC
  { 60,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #60 = ANDC8
  { 61,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #61 = ANDC8o
  { 62,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #62 = ANDCo
  { 63,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo13 },  // Inst #63 = ANDISo
  { 64,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #64 = ANDISo8
  { 65,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo13 },  // Inst #65 = ANDIo
  { 66,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #66 = ANDIo8
  { 67,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #67 = ANDo
  { 68,	5,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #68 = ATOMIC_CMP_SWAP_I16
  { 69,	5,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #69 = ATOMIC_CMP_SWAP_I32
  { 70,	5,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo17 },  // Inst #70 = ATOMIC_CMP_SWAP_I64
  { 71,	5,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo16 },  // Inst #71 = ATOMIC_CMP_SWAP_I8
  { 72,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #72 = ATOMIC_LOAD_ADD_I16
  { 73,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #73 = ATOMIC_LOAD_ADD_I32
  { 74,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #74 = ATOMIC_LOAD_ADD_I64
  { 75,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #75 = ATOMIC_LOAD_ADD_I8
  { 76,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #76 = ATOMIC_LOAD_AND_I16
  { 77,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #77 = ATOMIC_LOAD_AND_I32
  { 78,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #78 = ATOMIC_LOAD_AND_I64
  { 79,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #79 = ATOMIC_LOAD_AND_I8
  { 80,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #80 = ATOMIC_LOAD_NAND_I16
  { 81,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #81 = ATOMIC_LOAD_NAND_I32
  { 82,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #82 = ATOMIC_LOAD_NAND_I64
  { 83,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #83 = ATOMIC_LOAD_NAND_I8
  { 84,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #84 = ATOMIC_LOAD_OR_I16
  { 85,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #85 = ATOMIC_LOAD_OR_I32
  { 86,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #86 = ATOMIC_LOAD_OR_I64
  { 87,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #87 = ATOMIC_LOAD_OR_I8
  { 88,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #88 = ATOMIC_LOAD_SUB_I16
  { 89,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #89 = ATOMIC_LOAD_SUB_I32
  { 90,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #90 = ATOMIC_LOAD_SUB_I64
  { 91,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #91 = ATOMIC_LOAD_SUB_I8
  { 92,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #92 = ATOMIC_LOAD_XOR_I16
  { 93,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #93 = ATOMIC_LOAD_XOR_I32
  { 94,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #94 = ATOMIC_LOAD_XOR_I64
  { 95,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #95 = ATOMIC_LOAD_XOR_I8
  { 96,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #96 = ATOMIC_SWAP_I16
  { 97,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #97 = ATOMIC_SWAP_I32
  { 98,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo19 },  // Inst #98 = ATOMIC_SWAP_I64
  { 99,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #99 = ATOMIC_SWAP_I8
  { 100,	1,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x38ULL, NULL, NULL, OperandInfo5 },  // Inst #100 = B
  { 101,	3,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, NULL, NULL, OperandInfo20 },  // Inst #101 = BCC
  { 102,	2,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, NULL, OperandInfo21 },  // Inst #102 = BCCTR
  { 103,	2,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList6, NULL, OperandInfo21 },  // Inst #103 = BCCTR8
  { 104,	2,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, ImplicitList8, OperandInfo21 },  // Inst #104 = BCCTRL
  { 105,	2,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, ImplicitList10, OperandInfo21 },  // Inst #105 = BCCTRL8
  { 106,	2,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, NULL, OperandInfo21 },  // Inst #106 = BCLR
  { 107,	1,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList12, ImplicitList8, OperandInfo5 },  // Inst #107 = BCLalways
  { 108,	0,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, NULL, 0 },  // Inst #108 = BCTR
  { 109,	0,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList6, NULL, 0 },  // Inst #109 = BCTR8
  { 110,	0,	0,	3,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList7, ImplicitList8, 0 },  // Inst #110 = BCTRL
  { 111,	0,	0,	3,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList9, ImplicitList10, 0 },  // Inst #111 = BCTRL8
  { 112,	1,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, ImplicitList5, OperandInfo5 },  // Inst #112 = BDNZ
  { 113,	1,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList6, ImplicitList6, OperandInfo5 },  // Inst #113 = BDNZ8
  { 114,	0,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList5, 0 },  // Inst #114 = BDNZLR
  { 115,	0,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList14, ImplicitList6, 0 },  // Inst #115 = BDNZLR8
  { 116,	1,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, ImplicitList5, OperandInfo5 },  // Inst #116 = BDZ
  { 117,	1,	0,	3,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList6, ImplicitList6, OperandInfo5 },  // Inst #117 = BDZ8
  { 118,	0,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList13, ImplicitList5, 0 },  // Inst #118 = BDZLR
  { 119,	0,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList14, ImplicitList6, 0 },  // Inst #119 = BDZLR8
  { 120,	1,	0,	3,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList12, ImplicitList8, OperandInfo5 },  // Inst #120 = BL
  { 121,	1,	0,	3,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList12, ImplicitList10, OperandInfo5 },  // Inst #121 = BL8
  { 122,	1,	0,	3,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList12, ImplicitList10, OperandInfo5 },  // Inst #122 = BL8_NOP
  { 123,	2,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList12, ImplicitList10, OperandInfo7 },  // Inst #123 = BL8_NOP_TLSGD
  { 124,	2,	0,	3,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList12, ImplicitList10, OperandInfo7 },  // Inst #124 = BL8_NOP_TLSLD
  { 125,	1,	0,	3,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList12, ImplicitList8, OperandInfo5 },  // Inst #125 = BLA
  { 126,	1,	0,	3,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList12, ImplicitList10, OperandInfo5 },  // Inst #126 = BLA8
  { 127,	1,	0,	3,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList12, ImplicitList10, OperandInfo5 },  // Inst #127 = BLA8_NOP
  { 128,	0,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x38ULL, ImplicitList11, NULL, 0 },  // Inst #128 = BLR
  { 129,	3,	1,	4,	0,	0|(1<<MCID::Compare), 0x8ULL, NULL, NULL, OperandInfo22 },  // Inst #129 = CMPD
  { 130,	3,	1,	4,	0,	0|(1<<MCID::Compare), 0x8ULL, NULL, NULL, OperandInfo23 },  // Inst #130 = CMPDI
  { 131,	3,	1,	4,	0,	0|(1<<MCID::Compare), 0x8ULL, NULL, NULL, OperandInfo22 },  // Inst #131 = CMPLD
  { 132,	3,	1,	4,	0,	0|(1<<MCID::Compare), 0x8ULL, NULL, NULL, OperandInfo23 },  // Inst #132 = CMPLDI
  { 133,	3,	1,	4,	0,	0|(1<<MCID::Compare), 0x8ULL, NULL, NULL, OperandInfo24 },  // Inst #133 = CMPLW
  { 134,	3,	1,	4,	0,	0|(1<<MCID::Compare), 0x8ULL, NULL, NULL, OperandInfo25 },  // Inst #134 = CMPLWI
  { 135,	3,	1,	4,	0,	0|(1<<MCID::Compare), 0x8ULL, NULL, NULL, OperandInfo24 },  // Inst #135 = CMPW
  { 136,	3,	1,	4,	0,	0|(1<<MCID::Compare), 0x8ULL, NULL, NULL, OperandInfo25 },  // Inst #136 = CMPWI
  { 137,	2,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo15 },  // Inst #137 = CNTLZD
  { 138,	2,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo15 },  // Inst #138 = CNTLZDo
  { 139,	2,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo14 },  // Inst #139 = CNTLZW
  { 140,	2,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo14 },  // Inst #140 = CNTLZWo
  { 141,	0,	0,	5,	0,	0, 0x0ULL, NULL, ImplicitList15, 0 },  // Inst #141 = CR6SET
  { 142,	0,	0,	5,	0,	0, 0x0ULL, NULL, ImplicitList15, 0 },  // Inst #142 = CR6UNSET
  { 143,	3,	1,	5,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #143 = CREQV
  { 144,	3,	1,	5,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #144 = CROR
  { 145,	1,	1,	5,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #145 = CRSET
  { 146,	1,	1,	5,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #146 = CRUNSET
  { 147,	2,	0,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo28 },  // Inst #147 = DCBA
  { 148,	2,	0,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo28 },  // Inst #148 = DCBF
  { 149,	2,	0,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo28 },  // Inst #149 = DCBI
  { 150,	2,	0,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo28 },  // Inst #150 = DCBST
  { 151,	2,	0,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo28 },  // Inst #151 = DCBT
  { 152,	2,	0,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo28 },  // Inst #152 = DCBTST
  { 153,	2,	0,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo28 },  // Inst #153 = DCBZ
  { 154,	2,	0,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo28 },  // Inst #154 = DCBZL
  { 155,	3,	1,	7,	0,	0, 0xdULL, NULL, NULL, OperandInfo9 },  // Inst #155 = DIVD
  { 156,	3,	1,	7,	0,	0, 0xdULL, NULL, NULL, OperandInfo9 },  // Inst #156 = DIVDU
  { 157,	3,	1,	7,	0,	0, 0xdULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #157 = DIVDUo
  { 158,	3,	1,	7,	0,	0, 0xdULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #158 = DIVDo
  { 159,	3,	1,	8,	0,	0, 0xdULL, NULL, NULL, OperandInfo8 },  // Inst #159 = DIVW
  { 160,	3,	1,	8,	0,	0, 0xdULL, NULL, NULL, OperandInfo8 },  // Inst #160 = DIVWU
  { 161,	3,	1,	8,	0,	0, 0xdULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #161 = DIVWUo
  { 162,	3,	1,	8,	0,	0, 0xdULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #162 = DIVWo
  { 163,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #163 = DSS
  { 164,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #164 = DSSALL
  { 165,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo30 },  // Inst #165 = DST
  { 166,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #166 = DST64
  { 167,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo30 },  // Inst #167 = DSTST
  { 168,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #168 = DSTST64
  { 169,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo30 },  // Inst #169 = DSTSTT
  { 170,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #170 = DSTSTT64
  { 171,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo30 },  // Inst #171 = DSTT
  { 172,	4,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #172 = DSTT64
  { 173,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo32 },  // Inst #173 = DYNALLOC
  { 174,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList16, ImplicitList16, OperandInfo33 },  // Inst #174 = DYNALLOC8
  { 175,	1,	0,	0,	0,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #175 = EH_SjLj_LongJmp32
  { 176,	1,	0,	0,	0,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #176 = EH_SjLj_LongJmp64
  { 177,	2,	1,	0,	0,	0|(1<<MCID::Barrier)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo35 },  // Inst #177 = EH_SjLj_SetJmp32
  { 178,	2,	1,	0,	0,	0|(1<<MCID::Barrier)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo35 },  // Inst #178 = EH_SjLj_SetJmp64
  { 179,	1,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #179 = EH_SjLj_Setup
  { 180,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #180 = EQV
  { 181,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #181 = EQV8
  { 182,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #182 = EQV8o
  { 183,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #183 = EQVo
  { 184,	2,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo14 },  // Inst #184 = EXTSB
  { 185,	2,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo15 },  // Inst #185 = EXTSB8
  { 186,	2,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo15 },  // Inst #186 = EXTSB8o
  { 187,	2,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo14 },  // Inst #187 = EXTSBo
  { 188,	2,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo14 },  // Inst #188 = EXTSH
  { 189,	2,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo15 },  // Inst #189 = EXTSH8
  { 190,	2,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo15 },  // Inst #190 = EXTSH8o
  { 191,	2,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo14 },  // Inst #191 = EXTSHo
  { 192,	2,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo15 },  // Inst #192 = EXTSW
  { 193,	2,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo36 },  // Inst #193 = EXTSW_32_64
  { 194,	2,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo36 },  // Inst #194 = EXTSW_32_64o
  { 195,	2,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo15 },  // Inst #195 = EXTSWo
  { 196,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo37 },  // Inst #196 = FABSD
  { 197,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo37 },  // Inst #197 = FABSDo
  { 198,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo38 },  // Inst #198 = FABSS
  { 199,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo38 },  // Inst #199 = FABSSo
  { 200,	3,	1,	11,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo39 },  // Inst #200 = FADD
  { 201,	3,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo40 },  // Inst #201 = FADDS
  { 202,	3,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo40 },  // Inst #202 = FADDSo
  { 203,	3,	1,	11,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo39 },  // Inst #203 = FADDo
  { 204,	3,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList12, NULL, OperandInfo39 },  // Inst #204 = FADDrtz
  { 205,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo37 },  // Inst #205 = FCFID
  { 206,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo41 },  // Inst #206 = FCFIDS
  { 207,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo41 },  // Inst #207 = FCFIDSo
  { 208,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo37 },  // Inst #208 = FCFIDU
  { 209,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo41 },  // Inst #209 = FCFIDUS
  { 210,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo41 },  // Inst #210 = FCFIDUSo
  { 211,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo37 },  // Inst #211 = FCFIDUo
  { 212,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo37 },  // Inst #212 = FCFIDo
  { 213,	3,	1,	12,	0,	0|(1<<MCID::Compare), 0x18ULL, NULL, NULL, OperandInfo42 },  // Inst #213 = FCMPUD
  { 214,	3,	1,	12,	0,	0|(1<<MCID::Compare), 0x18ULL, NULL, NULL, OperandInfo43 },  // Inst #214 = FCMPUS
  { 215,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo37 },  // Inst #215 = FCTIDUZ
  { 216,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo37 },  // Inst #216 = FCTIDUZo
  { 217,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo37 },  // Inst #217 = FCTIDZ
  { 218,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo37 },  // Inst #218 = FCTIDZo
  { 219,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo37 },  // Inst #219 = FCTIWUZ
  { 220,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo37 },  // Inst #220 = FCTIWUZo
  { 221,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo37 },  // Inst #221 = FCTIWZ
  { 222,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo37 },  // Inst #222 = FCTIWZo
  { 223,	3,	1,	13,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo39 },  // Inst #223 = FDIV
  { 224,	3,	1,	14,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo40 },  // Inst #224 = FDIVS
  { 225,	3,	1,	14,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo40 },  // Inst #225 = FDIVSo
  { 226,	3,	1,	13,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo39 },  // Inst #226 = FDIVo
  { 227,	4,	1,	15,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo44 },  // Inst #227 = FMADD
  { 228,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo45 },  // Inst #228 = FMADDS
  { 229,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo45 },  // Inst #229 = FMADDSo
  { 230,	4,	1,	15,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo44 },  // Inst #230 = FMADDo
  { 231,	2,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo38 },  // Inst #231 = FMR
  { 232,	2,	1,	10,	0,	0, 0x0ULL, NULL, ImplicitList17, OperandInfo38 },  // Inst #232 = FMRo
  { 233,	4,	1,	15,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo44 },  // Inst #233 = FMSUB
  { 234,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo45 },  // Inst #234 = FMSUBS
  { 235,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo45 },  // Inst #235 = FMSUBSo
  { 236,	4,	1,	15,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo44 },  // Inst #236 = FMSUBo
  { 237,	3,	1,	15,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo39 },  // Inst #237 = FMUL
  { 238,	3,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo40 },  // Inst #238 = FMULS
  { 239,	3,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo40 },  // Inst #239 = FMULSo
  { 240,	3,	1,	15,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo39 },  // Inst #240 = FMULo
  { 241,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo37 },  // Inst #241 = FNABSD
  { 242,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo37 },  // Inst #242 = FNABSDo
  { 243,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo38 },  // Inst #243 = FNABSS
  { 244,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo38 },  // Inst #244 = FNABSSo
  { 245,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo37 },  // Inst #245 = FNEGD
  { 246,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo37 },  // Inst #246 = FNEGDo
  { 247,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo38 },  // Inst #247 = FNEGS
  { 248,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo38 },  // Inst #248 = FNEGSo
  { 249,	4,	1,	15,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo44 },  // Inst #249 = FNMADD
  { 250,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo45 },  // Inst #250 = FNMADDS
  { 251,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo45 },  // Inst #251 = FNMADDSo
  { 252,	4,	1,	15,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo44 },  // Inst #252 = FNMADDo
  { 253,	4,	1,	15,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo44 },  // Inst #253 = FNMSUB
  { 254,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo45 },  // Inst #254 = FNMSUBS
  { 255,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo45 },  // Inst #255 = FNMSUBSo
  { 256,	4,	1,	15,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo44 },  // Inst #256 = FNMSUBo
  { 257,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo37 },  // Inst #257 = FRE
  { 258,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo38 },  // Inst #258 = FRES
  { 259,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo38 },  // Inst #259 = FRESo
  { 260,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo37 },  // Inst #260 = FREo
  { 261,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo37 },  // Inst #261 = FRIMD
  { 262,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo37 },  // Inst #262 = FRIMDo
  { 263,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo38 },  // Inst #263 = FRIMS
  { 264,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo38 },  // Inst #264 = FRIMSo
  { 265,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo37 },  // Inst #265 = FRIND
  { 266,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo37 },  // Inst #266 = FRINDo
  { 267,	2,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x18ULL, ImplicitList12, ImplicitList12, OperandInfo37 },  // Inst #267 = FRINDrint
  { 268,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo38 },  // Inst #268 = FRINS
  { 269,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo38 },  // Inst #269 = FRINSo
  { 270,	2,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x18ULL, ImplicitList12, ImplicitList12, OperandInfo38 },  // Inst #270 = FRINSrint
  { 271,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo37 },  // Inst #271 = FRIPD
  { 272,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo37 },  // Inst #272 = FRIPDo
  { 273,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo38 },  // Inst #273 = FRIPS
  { 274,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo38 },  // Inst #274 = FRIPSo
  { 275,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo37 },  // Inst #275 = FRIZD
  { 276,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo37 },  // Inst #276 = FRIZDo
  { 277,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo38 },  // Inst #277 = FRIZS
  { 278,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo38 },  // Inst #278 = FRIZSo
  { 279,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo41 },  // Inst #279 = FRSP
  { 280,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo41 },  // Inst #280 = FRSPo
  { 281,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo37 },  // Inst #281 = FRSQRTE
  { 282,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo38 },  // Inst #282 = FRSQRTES
  { 283,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo38 },  // Inst #283 = FRSQRTESo
  { 284,	2,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo37 },  // Inst #284 = FRSQRTEo
  { 285,	4,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo44 },  // Inst #285 = FSELD
  { 286,	4,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo44 },  // Inst #286 = FSELDo
  { 287,	4,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo46 },  // Inst #287 = FSELS
  { 288,	4,	1,	10,	0,	0, 0x18ULL, NULL, ImplicitList17, OperandInfo46 },  // Inst #288 = FSELSo
  { 289,	2,	1,	16,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo37 },  // Inst #289 = FSQRT
  { 290,	2,	1,	16,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo38 },  // Inst #290 = FSQRTS
  { 291,	2,	1,	16,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo38 },  // Inst #291 = FSQRTSo
  { 292,	2,	1,	16,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo37 },  // Inst #292 = FSQRTo
  { 293,	3,	1,	11,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo39 },  // Inst #293 = FSUB
  { 294,	3,	1,	10,	0,	0, 0x18ULL, ImplicitList12, NULL, OperandInfo40 },  // Inst #294 = FSUBS
  { 295,	3,	1,	10,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo40 },  // Inst #295 = FSUBSo
  { 296,	3,	1,	11,	0,	0, 0x18ULL, ImplicitList12, ImplicitList17, OperandInfo39 },  // Inst #296 = FSUBo
  { 297,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #297 = GETtlsADDR
  { 298,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #298 = GETtlsldADDR
  { 299,	2,	0,	17,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #299 = ICBI
  { 300,	4,	1,	2,	0,	0|(1<<MCID::Select), 0x8ULL, NULL, NULL, OperandInfo47 },  // Inst #300 = ISEL
  { 301,	4,	1,	2,	0,	0|(1<<MCID::Select), 0x8ULL, NULL, NULL, OperandInfo48 },  // Inst #301 = ISEL8
  { 302,	0,	0,	18,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #302 = ISYNC
  { 303,	3,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #303 = LA
  { 304,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo49 },  // Inst #304 = LBZ
  { 305,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #305 = LBZ8
  { 306,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo51 },  // Inst #306 = LBZU
  { 307,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #307 = LBZU8
  { 308,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo53 },  // Inst #308 = LBZUX
  { 309,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo54 },  // Inst #309 = LBZUX8
  { 310,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo55 },  // Inst #310 = LBZX
  { 311,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo56 },  // Inst #311 = LBZX8
  { 312,	3,	1,	20,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #312 = LD
  { 313,	3,	1,	21,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo56 },  // Inst #313 = LDARX
  { 314,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo56 },  // Inst #314 = LDBRX
  { 315,	4,	2,	22,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #315 = LDU
  { 316,	4,	2,	22,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo54 },  // Inst #316 = LDUX
  { 317,	3,	1,	20,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo56 },  // Inst #317 = LDX
  { 318,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo57 },  // Inst #318 = LDgotTprelL
  { 319,	1,	0,	20,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo58 },  // Inst #319 = LDinto_toc
  { 320,	3,	1,	0,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo59 },  // Inst #320 = LDtoc
  { 321,	3,	1,	0,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo59 },  // Inst #321 = LDtocCPT
  { 322,	3,	1,	0,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo59 },  // Inst #322 = LDtocJTI
  { 323,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo57 },  // Inst #323 = LDtocL
  { 324,	0,	0,	20,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, 0 },  // Inst #324 = LDtoc_restore
  { 325,	3,	1,	23,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo60 },  // Inst #325 = LFD
  { 326,	4,	2,	24,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo61 },  // Inst #326 = LFDU
  { 327,	4,	2,	24,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo62 },  // Inst #327 = LFDUX
  { 328,	3,	1,	23,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo63 },  // Inst #328 = LFDX
  { 329,	3,	1,	23,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo63 },  // Inst #329 = LFIWAX
  { 330,	3,	1,	23,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo63 },  // Inst #330 = LFIWZX
  { 331,	3,	1,	23,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo64 },  // Inst #331 = LFS
  { 332,	4,	2,	24,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #332 = LFSU
  { 333,	4,	2,	24,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo66 },  // Inst #333 = LFSUX
  { 334,	3,	1,	23,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo67 },  // Inst #334 = LFSX
  { 335,	3,	1,	25,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo49 },  // Inst #335 = LHA
  { 336,	3,	1,	25,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo50 },  // Inst #336 = LHA8
  { 337,	4,	2,	26,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo51 },  // Inst #337 = LHAU
  { 338,	4,	2,	26,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #338 = LHAU8
  { 339,	4,	2,	26,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo53 },  // Inst #339 = LHAUX
  { 340,	4,	2,	26,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo54 },  // Inst #340 = LHAUX8
  { 341,	3,	1,	25,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo55 },  // Inst #341 = LHAX
  { 342,	3,	1,	25,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo56 },  // Inst #342 = LHAX8
  { 343,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo55 },  // Inst #343 = LHBRX
  { 344,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo49 },  // Inst #344 = LHZ
  { 345,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #345 = LHZ8
  { 346,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo51 },  // Inst #346 = LHZU
  { 347,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #347 = LHZU8
  { 348,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo53 },  // Inst #348 = LHZUX
  { 349,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo54 },  // Inst #349 = LHZUX8
  { 350,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo55 },  // Inst #350 = LHZX
  { 351,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo56 },  // Inst #351 = LHZX8
  { 352,	2,	1,	1,	0,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, NULL, NULL, OperandInfo68 },  // Inst #352 = LI
  { 353,	2,	1,	1,	0,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, NULL, NULL, OperandInfo69 },  // Inst #353 = LI8
  { 354,	2,	1,	1,	0,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, NULL, NULL, OperandInfo68 },  // Inst #354 = LIS
  { 355,	2,	1,	1,	0,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, NULL, NULL, OperandInfo69 },  // Inst #355 = LIS8
  { 356,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo70 },  // Inst #356 = LVEBX
  { 357,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo70 },  // Inst #357 = LVEHX
  { 358,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo70 },  // Inst #358 = LVEWX
  { 359,	3,	1,	9,	0,	0, 0x10ULL, NULL, NULL, OperandInfo70 },  // Inst #359 = LVSL
  { 360,	3,	1,	9,	0,	0, 0x10ULL, NULL, NULL, OperandInfo70 },  // Inst #360 = LVSR
  { 361,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo70 },  // Inst #361 = LVX
  { 362,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo70 },  // Inst #362 = LVXL
  { 363,	3,	1,	27,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo50 },  // Inst #363 = LWA
  { 364,	3,	1,	28,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo55 },  // Inst #364 = LWARX
  { 365,	4,	2,	26,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo54 },  // Inst #365 = LWAUX
  { 366,	3,	1,	25,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo56 },  // Inst #366 = LWAX
  { 367,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo55 },  // Inst #367 = LWBRX
  { 368,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo49 },  // Inst #368 = LWZ
  { 369,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #369 = LWZ8
  { 370,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo51 },  // Inst #370 = LWZU
  { 371,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #371 = LWZU8
  { 372,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo53 },  // Inst #372 = LWZUX
  { 373,	4,	2,	19,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo54 },  // Inst #373 = LWZUX8
  { 374,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo55 },  // Inst #374 = LWZX
  { 375,	3,	1,	9,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo56 },  // Inst #375 = LWZX8
  { 376,	2,	1,	29,	0,	0, 0x21ULL, NULL, NULL, OperandInfo71 },  // Inst #376 = MCRF
  { 377,	1,	1,	30,	0,	0, 0x20ULL, NULL, NULL, OperandInfo72 },  // Inst #377 = MFCR
  { 378,	1,	1,	30,	0,	0, 0x20ULL, NULL, NULL, OperandInfo58 },  // Inst #378 = MFCR8
  { 379,	2,	1,	30,	0,	0, 0x20ULL, NULL, NULL, OperandInfo69 },  // Inst #379 = MFCR8pseud
  { 380,	2,	1,	30,	0,	0, 0x20ULL, NULL, NULL, OperandInfo68 },  // Inst #380 = MFCRpseud
  { 381,	1,	1,	31,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList5, NULL, OperandInfo72 },  // Inst #381 = MFCTR
  { 382,	1,	1,	31,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList6, NULL, OperandInfo58 },  // Inst #382 = MFCTR8
  { 383,	1,	1,	32,	0,	0, 0x1aULL, ImplicitList12, NULL, OperandInfo73 },  // Inst #383 = MFFS
  { 384,	1,	1,	31,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList8, NULL, OperandInfo72 },  // Inst #384 = MFLR
  { 385,	1,	1,	31,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList10, NULL, OperandInfo58 },  // Inst #385 = MFLR8
  { 386,	2,	1,	30,	0,	0, 0x21ULL, NULL, NULL, OperandInfo68 },  // Inst #386 = MFOCRF
  { 387,	1,	1,	33,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, NULL, OperandInfo58 },  // Inst #387 = MFTB8
  { 388,	1,	1,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, NULL, OperandInfo72 },  // Inst #388 = MFVRSAVE
  { 389,	2,	1,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, NULL, OperandInfo74 },  // Inst #389 = MFVRSAVEv
  { 390,	1,	1,	34,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo75 },  // Inst #390 = MFVSCR
  { 391,	2,	1,	35,	0,	0, 0x20ULL, NULL, NULL, OperandInfo76 },  // Inst #391 = MTCRF
  { 392,	2,	1,	35,	0,	0, 0x20ULL, NULL, NULL, OperandInfo77 },  // Inst #392 = MTCRF8
  { 393,	1,	0,	36,	0,	0, 0x9ULL, NULL, ImplicitList5, OperandInfo72 },  // Inst #393 = MTCTR
  { 394,	1,	0,	36,	0,	0, 0x9ULL, NULL, ImplicitList6, OperandInfo58 },  // Inst #394 = MTCTR8
  { 395,	1,	0,	37,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x1aULL, ImplicitList12, ImplicitList12, OperandInfo5 },  // Inst #395 = MTFSB0
  { 396,	1,	0,	37,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x1aULL, ImplicitList12, ImplicitList12, OperandInfo5 },  // Inst #396 = MTFSB1
  { 397,	2,	0,	37,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x1aULL, ImplicitList12, ImplicitList12, OperandInfo78 },  // Inst #397 = MTFSF
  { 398,	1,	0,	36,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, ImplicitList8, OperandInfo72 },  // Inst #398 = MTLR
  { 399,	1,	0,	36,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, ImplicitList10, OperandInfo58 },  // Inst #399 = MTLR8
  { 400,	1,	0,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0xaULL, NULL, NULL, OperandInfo72 },  // Inst #400 = MTVRSAVE
  { 401,	2,	1,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0xaULL, NULL, NULL, OperandInfo79 },  // Inst #401 = MTVRSAVEv
  { 402,	1,	0,	9,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo75 },  // Inst #402 = MTVSCR
  { 403,	3,	1,	38,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #403 = MULHD
  { 404,	3,	1,	39,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #404 = MULHDU
  { 405,	3,	1,	39,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #405 = MULHDUo
  { 406,	3,	1,	38,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #406 = MULHDo
  { 407,	3,	1,	38,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #407 = MULHW
  { 408,	3,	1,	39,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #408 = MULHWU
  { 409,	3,	1,	39,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #409 = MULHWUo
  { 410,	3,	1,	38,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #410 = MULHWo
  { 411,	3,	1,	40,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #411 = MULLD
  { 412,	3,	1,	40,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #412 = MULLDo
  { 413,	3,	1,	41,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #413 = MULLI
  { 414,	3,	1,	38,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #414 = MULLW
  { 415,	3,	1,	38,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #415 = MULLWo
  { 416,	0,	0,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, NULL, ImplicitList8, 0 },  // Inst #416 = MovePCtoLR
  { 417,	0,	0,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, NULL, ImplicitList10, 0 },  // Inst #417 = MovePCtoLR8
  { 418,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #418 = NAND
  { 419,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #419 = NAND8
  { 420,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #420 = NAND8o
  { 421,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #421 = NANDo
  { 422,	2,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo14 },  // Inst #422 = NEG
  { 423,	2,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo15 },  // Inst #423 = NEG8
  { 424,	2,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo15 },  // Inst #424 = NEG8o
  { 425,	2,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo14 },  // Inst #425 = NEGo
  { 426,	0,	0,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, 0 },  // Inst #426 = NOP
  { 427,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #427 = NOR
  { 428,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #428 = NOR8
  { 429,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #429 = NOR8o
  { 430,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #430 = NORo
  { 431,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #431 = OR
  { 432,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #432 = OR8
  { 433,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #433 = OR8o
  { 434,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #434 = ORC
  { 435,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #435 = ORC8
  { 436,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #436 = ORC8o
  { 437,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #437 = ORCo
  { 438,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #438 = ORI
  { 439,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #439 = ORI8
  { 440,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #440 = ORIS
  { 441,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #441 = ORIS8
  { 442,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #442 = ORo
  { 443,	2,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo15 },  // Inst #443 = POPCNTD
  { 444,	2,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo15 },  // Inst #444 = POPCNTDo
  { 445,	2,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo14 },  // Inst #445 = POPCNTW
  { 446,	2,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo14 },  // Inst #446 = POPCNTWo
  { 447,	3,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo80 },  // Inst #447 = RESTORE_CR
  { 448,	3,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo81 },  // Inst #448 = RESTORE_VRSAVE
  { 449,	4,	1,	42,	0,	0, 0x8ULL, NULL, NULL, OperandInfo82 },  // Inst #449 = RLDCL
  { 450,	4,	1,	42,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo82 },  // Inst #450 = RLDCLo
  { 451,	4,	1,	43,	0,	0, 0x8ULL, NULL, NULL, OperandInfo83 },  // Inst #451 = RLDICL
  { 452,	4,	1,	43,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo83 },  // Inst #452 = RLDICLo
  { 453,	4,	1,	43,	0,	0, 0x8ULL, NULL, NULL, OperandInfo83 },  // Inst #453 = RLDICR
  { 454,	4,	1,	43,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo83 },  // Inst #454 = RLDICRo
  { 455,	5,	1,	43,	0,	0|(1<<MCID::Commutable), 0x8ULL, NULL, NULL, OperandInfo84 },  // Inst #455 = RLDIMI
  { 456,	5,	1,	43,	0,	0|(1<<MCID::Commutable), 0x8ULL, NULL, ImplicitList1, OperandInfo84 },  // Inst #456 = RLDIMIo
  { 457,	6,	1,	44,	0,	0|(1<<MCID::Commutable), 0xcULL, NULL, NULL, OperandInfo85 },  // Inst #457 = RLWIMI
  { 458,	6,	1,	44,	0,	0|(1<<MCID::Commutable), 0xcULL, NULL, ImplicitList1, OperandInfo85 },  // Inst #458 = RLWIMIo
  { 459,	5,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo86 },  // Inst #459 = RLWINM
  { 460,	5,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo87 },  // Inst #460 = RLWINM8
  { 461,	5,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo87 },  // Inst #461 = RLWINM8o
  { 462,	5,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList1, OperandInfo86 },  // Inst #462 = RLWINMo
  { 463,	5,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo88 },  // Inst #463 = RLWNM
  { 464,	5,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo88 },  // Inst #464 = RLWNMo
  { 465,	5,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo89 },  // Inst #465 = SELECT_CC_F4
  { 466,	5,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo90 },  // Inst #466 = SELECT_CC_F8
  { 467,	5,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo91 },  // Inst #467 = SELECT_CC_I4
  { 468,	5,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo92 },  // Inst #468 = SELECT_CC_I8
  { 469,	5,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo93 },  // Inst #469 = SELECT_CC_VRRC
  { 470,	3,	1,	42,	0,	0, 0x8ULL, NULL, NULL, OperandInfo94 },  // Inst #470 = SLD
  { 471,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #471 = SLDI
  { 472,	3,	1,	42,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo94 },  // Inst #472 = SLDo
  { 473,	3,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #473 = SLW
  { 474,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #474 = SLWI
  { 475,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #475 = SLWo
  { 476,	3,	0,	0,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo80 },  // Inst #476 = SPILL_CR
  { 477,	3,	0,	0,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo81 },  // Inst #477 = SPILL_VRSAVE
  { 478,	3,	1,	42,	0,	0, 0x8ULL, NULL, ImplicitList2, OperandInfo94 },  // Inst #478 = SRAD
  { 479,	3,	1,	43,	0,	0, 0x8ULL, NULL, ImplicitList2, OperandInfo10 },  // Inst #479 = SRADI
  { 480,	3,	1,	43,	0,	0, 0x8ULL, NULL, ImplicitList3, OperandInfo10 },  // Inst #480 = SRADIo
  { 481,	3,	1,	42,	0,	0, 0x8ULL, NULL, ImplicitList3, OperandInfo94 },  // Inst #481 = SRADo
  { 482,	3,	1,	45,	0,	0, 0x8ULL, NULL, ImplicitList2, OperandInfo8 },  // Inst #482 = SRAW
  { 483,	3,	1,	45,	0,	0, 0x8ULL, NULL, ImplicitList2, OperandInfo13 },  // Inst #483 = SRAWI
  { 484,	3,	1,	45,	0,	0, 0x8ULL, NULL, ImplicitList3, OperandInfo13 },  // Inst #484 = SRAWIo
  { 485,	3,	1,	45,	0,	0, 0x8ULL, NULL, ImplicitList3, OperandInfo8 },  // Inst #485 = SRAWo
  { 486,	3,	1,	42,	0,	0, 0x8ULL, NULL, NULL, OperandInfo94 },  // Inst #486 = SRD
  { 487,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #487 = SRDI
  { 488,	3,	1,	42,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo94 },  // Inst #488 = SRDo
  { 489,	3,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #489 = SRW
  { 490,	3,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #490 = SRWI
  { 491,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #491 = SRWo
  { 492,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo49 },  // Inst #492 = STB
  { 493,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #493 = STB8
  { 494,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo95 },  // Inst #494 = STBU
  { 495,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo96 },  // Inst #495 = STBU8
  { 496,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo97 },  // Inst #496 = STBUX
  { 497,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo98 },  // Inst #497 = STBUX8
  { 498,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo55 },  // Inst #498 = STBX
  { 499,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo56 },  // Inst #499 = STBX8
  { 500,	3,	0,	47,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #500 = STD
  { 501,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo56 },  // Inst #501 = STDBRX
  { 502,	3,	0,	48,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, ImplicitList1, OperandInfo56 },  // Inst #502 = STDCX
  { 503,	4,	1,	49,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo96 },  // Inst #503 = STDU
  { 504,	4,	1,	49,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo98 },  // Inst #504 = STDUX
  { 505,	3,	0,	47,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo56 },  // Inst #505 = STDX
  { 506,	3,	0,	50,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo60 },  // Inst #506 = STFD
  { 507,	4,	1,	51,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo99 },  // Inst #507 = STFDU
  { 508,	4,	1,	51,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo100 },  // Inst #508 = STFDUX
  { 509,	3,	0,	50,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo63 },  // Inst #509 = STFDX
  { 510,	3,	0,	50,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo63 },  // Inst #510 = STFIWX
  { 511,	3,	0,	50,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo64 },  // Inst #511 = STFS
  { 512,	4,	1,	51,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo101 },  // Inst #512 = STFSU
  { 513,	4,	1,	51,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo102 },  // Inst #513 = STFSUX
  { 514,	3,	0,	50,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo67 },  // Inst #514 = STFSX
  { 515,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo49 },  // Inst #515 = STH
  { 516,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #516 = STH8
  { 517,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo55 },  // Inst #517 = STHBRX
  { 518,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo95 },  // Inst #518 = STHU
  { 519,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo96 },  // Inst #519 = STHU8
  { 520,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo97 },  // Inst #520 = STHUX
  { 521,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo98 },  // Inst #521 = STHUX8
  { 522,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo55 },  // Inst #522 = STHX
  { 523,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo56 },  // Inst #523 = STHX8
  { 524,	3,	0,	34,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo70 },  // Inst #524 = STVEBX
  { 525,	3,	0,	34,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo70 },  // Inst #525 = STVEHX
  { 526,	3,	0,	34,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo70 },  // Inst #526 = STVEWX
  { 527,	3,	0,	34,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo70 },  // Inst #527 = STVX
  { 528,	3,	0,	34,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo70 },  // Inst #528 = STVXL
  { 529,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo49 },  // Inst #529 = STW
  { 530,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #530 = STW8
  { 531,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo55 },  // Inst #531 = STWBRX
  { 532,	3,	0,	52,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, ImplicitList1, OperandInfo55 },  // Inst #532 = STWCX
  { 533,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo95 },  // Inst #533 = STWU
  { 534,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo96 },  // Inst #534 = STWU8
  { 535,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo97 },  // Inst #535 = STWUX
  { 536,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo98 },  // Inst #536 = STWUX8
  { 537,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo55 },  // Inst #537 = STWX
  { 538,	3,	0,	34,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo56 },  // Inst #538 = STWX8
  { 539,	3,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #539 = SUBF
  { 540,	3,	1,	2,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #540 = SUBF8
  { 541,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #541 = SUBF8o
  { 542,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList2, OperandInfo8 },  // Inst #542 = SUBFC
  { 543,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList2, OperandInfo9 },  // Inst #543 = SUBFC8
  { 544,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList2, OperandInfo9 },  // Inst #544 = SUBFC8o
  { 545,	3,	1,	2,	0,	0, 0xcULL, NULL, ImplicitList3, OperandInfo8 },  // Inst #545 = SUBFCo
  { 546,	3,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo8 },  // Inst #546 = SUBFE
  { 547,	3,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo9 },  // Inst #547 = SUBFE8
  { 548,	3,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo9 },  // Inst #548 = SUBFE8o
  { 549,	3,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo8 },  // Inst #549 = SUBFEo
  { 550,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList2, OperandInfo13 },  // Inst #550 = SUBFIC
  { 551,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList2, OperandInfo10 },  // Inst #551 = SUBFIC8
  { 552,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo14 },  // Inst #552 = SUBFME
  { 553,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo15 },  // Inst #553 = SUBFME8
  { 554,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo15 },  // Inst #554 = SUBFME8o
  { 555,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo14 },  // Inst #555 = SUBFMEo
  { 556,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo14 },  // Inst #556 = SUBFZE
  { 557,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList2, OperandInfo15 },  // Inst #557 = SUBFZE8
  { 558,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo15 },  // Inst #558 = SUBFZE8o
  { 559,	2,	1,	2,	0,	0, 0x8ULL, ImplicitList2, ImplicitList3, OperandInfo14 },  // Inst #559 = SUBFZEo
  { 560,	3,	1,	2,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #560 = SUBFo
  { 561,	0,	0,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #561 = SYNC
  { 562,	1,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList12, NULL, OperandInfo5 },  // Inst #562 = TAILB
  { 563,	1,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList12, NULL, OperandInfo5 },  // Inst #563 = TAILB8
  { 564,	1,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList12, NULL, OperandInfo5 },  // Inst #564 = TAILBA
  { 565,	1,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList12, NULL, OperandInfo5 },  // Inst #565 = TAILBA8
  { 566,	0,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList7, NULL, 0 },  // Inst #566 = TAILBCTR
  { 567,	0,	0,	3,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList9, NULL, 0 },  // Inst #567 = TAILBCTR8
  { 568,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList12, NULL, OperandInfo103 },  // Inst #568 = TCRETURNai
  { 569,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList12, NULL, OperandInfo103 },  // Inst #569 = TCRETURNai8
  { 570,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList12, NULL, OperandInfo103 },  // Inst #570 = TCRETURNdi
  { 571,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList12, NULL, OperandInfo103 },  // Inst #571 = TCRETURNdi8
  { 572,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList12, NULL, OperandInfo104 },  // Inst #572 = TCRETURNri
  { 573,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList12, NULL, OperandInfo105 },  // Inst #573 = TCRETURNri8
  { 574,	0,	0,	9,	0,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #574 = TRAP
  { 575,	2,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #575 = UPDATE_VRSAVE
  { 576,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #576 = VADDCUW
  { 577,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #577 = VADDFP
  { 578,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #578 = VADDSBS
  { 579,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #579 = VADDSHS
  { 580,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #580 = VADDSWS
  { 581,	3,	1,	55,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #581 = VADDUBM
  { 582,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #582 = VADDUBS
  { 583,	3,	1,	55,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #583 = VADDUHM
  { 584,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #584 = VADDUHS
  { 585,	3,	1,	55,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #585 = VADDUWM
  { 586,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #586 = VADDUWS
  { 587,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #587 = VAND
  { 588,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #588 = VANDC
  { 589,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #589 = VAVGSB
  { 590,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #590 = VAVGSH
  { 591,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #591 = VAVGSW
  { 592,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #592 = VAVGUB
  { 593,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #593 = VAVGUH
  { 594,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #594 = VAVGUW
  { 595,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo107 },  // Inst #595 = VCFSX
  { 596,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #596 = VCFSX_0
  { 597,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo107 },  // Inst #597 = VCFUX
  { 598,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #598 = VCFUX_0
  { 599,	3,	1,	56,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #599 = VCMPBFP
  { 600,	3,	1,	56,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo106 },  // Inst #600 = VCMPBFPo
  { 601,	3,	1,	56,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #601 = VCMPEQFP
  { 602,	3,	1,	56,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo106 },  // Inst #602 = VCMPEQFPo
  { 603,	3,	1,	56,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #603 = VCMPEQUB
  { 604,	3,	1,	56,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo106 },  // Inst #604 = VCMPEQUBo
  { 605,	3,	1,	56,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #605 = VCMPEQUH
  { 606,	3,	1,	56,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo106 },  // Inst #606 = VCMPEQUHo
  { 607,	3,	1,	56,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #607 = VCMPEQUW
  { 608,	3,	1,	56,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo106 },  // Inst #608 = VCMPEQUWo
  { 609,	3,	1,	56,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #609 = VCMPGEFP
  { 610,	3,	1,	56,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo106 },  // Inst #610 = VCMPGEFPo
  { 611,	3,	1,	56,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #611 = VCMPGTFP
  { 612,	3,	1,	56,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo106 },  // Inst #612 = VCMPGTFPo
  { 613,	3,	1,	56,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #613 = VCMPGTSB
  { 614,	3,	1,	56,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo106 },  // Inst #614 = VCMPGTSBo
  { 615,	3,	1,	56,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #615 = VCMPGTSH
  { 616,	3,	1,	56,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo106 },  // Inst #616 = VCMPGTSHo
  { 617,	3,	1,	56,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #617 = VCMPGTSW
  { 618,	3,	1,	56,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo106 },  // Inst #618 = VCMPGTSWo
  { 619,	3,	1,	56,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #619 = VCMPGTUB
  { 620,	3,	1,	56,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo106 },  // Inst #620 = VCMPGTUBo
  { 621,	3,	1,	56,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #621 = VCMPGTUH
  { 622,	3,	1,	56,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo106 },  // Inst #622 = VCMPGTUHo
  { 623,	3,	1,	56,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #623 = VCMPGTUW
  { 624,	3,	1,	56,	0,	0, 0x28ULL, NULL, ImplicitList18, OperandInfo106 },  // Inst #624 = VCMPGTUWo
  { 625,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo107 },  // Inst #625 = VCTSXS
  { 626,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #626 = VCTSXS_0
  { 627,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo107 },  // Inst #627 = VCTUXS
  { 628,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #628 = VCTUXS_0
  { 629,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #629 = VEXPTEFP
  { 630,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #630 = VLOGEFP
  { 631,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo109 },  // Inst #631 = VMADDFP
  { 632,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #632 = VMAXFP
  { 633,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #633 = VMAXSB
  { 634,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #634 = VMAXSH
  { 635,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #635 = VMAXSW
  { 636,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #636 = VMAXUB
  { 637,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #637 = VMAXUH
  { 638,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #638 = VMAXUW
  { 639,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo109 },  // Inst #639 = VMHADDSHS
  { 640,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo109 },  // Inst #640 = VMHRADDSHS
  { 641,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #641 = VMINFP
  { 642,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #642 = VMINSB
  { 643,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #643 = VMINSH
  { 644,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #644 = VMINSW
  { 645,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #645 = VMINUB
  { 646,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #646 = VMINUH
  { 647,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #647 = VMINUW
  { 648,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo109 },  // Inst #648 = VMLADDUHM
  { 649,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #649 = VMRGHB
  { 650,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #650 = VMRGHH
  { 651,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #651 = VMRGHW
  { 652,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #652 = VMRGLB
  { 653,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #653 = VMRGLH
  { 654,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #654 = VMRGLW
  { 655,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo109 },  // Inst #655 = VMSUMMBM
  { 656,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo109 },  // Inst #656 = VMSUMSHM
  { 657,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo109 },  // Inst #657 = VMSUMSHS
  { 658,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo109 },  // Inst #658 = VMSUMUBM
  { 659,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo109 },  // Inst #659 = VMSUMUHM
  { 660,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo109 },  // Inst #660 = VMSUMUHS
  { 661,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #661 = VMULESB
  { 662,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #662 = VMULESH
  { 663,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #663 = VMULEUB
  { 664,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #664 = VMULEUH
  { 665,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #665 = VMULOSB
  { 666,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #666 = VMULOSH
  { 667,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #667 = VMULOUB
  { 668,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #668 = VMULOUH
  { 669,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo109 },  // Inst #669 = VNMSUBFP
  { 670,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #670 = VNOR
  { 671,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #671 = VOR
  { 672,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo109 },  // Inst #672 = VPERM
  { 673,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #673 = VPKPX
  { 674,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #674 = VPKSHSS
  { 675,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #675 = VPKSHUS
  { 676,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #676 = VPKSWSS
  { 677,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #677 = VPKSWUS
  { 678,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #678 = VPKUHUM
  { 679,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #679 = VPKUHUS
  { 680,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #680 = VPKUWUM
  { 681,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #681 = VPKUWUS
  { 682,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #682 = VREFP
  { 683,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #683 = VRFIM
  { 684,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #684 = VRFIN
  { 685,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #685 = VRFIP
  { 686,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #686 = VRFIZ
  { 687,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #687 = VRLB
  { 688,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #688 = VRLH
  { 689,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #689 = VRLW
  { 690,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #690 = VRSQRTEFP
  { 691,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo109 },  // Inst #691 = VSEL
  { 692,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #692 = VSL
  { 693,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #693 = VSLB
  { 694,	4,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo110 },  // Inst #694 = VSLDOI
  { 695,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #695 = VSLH
  { 696,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #696 = VSLO
  { 697,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #697 = VSLW
  { 698,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo107 },  // Inst #698 = VSPLTB
  { 699,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo107 },  // Inst #699 = VSPLTH
  { 700,	2,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo111 },  // Inst #700 = VSPLTISB
  { 701,	2,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo111 },  // Inst #701 = VSPLTISH
  { 702,	2,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo111 },  // Inst #702 = VSPLTISW
  { 703,	3,	1,	57,	0,	0, 0x28ULL, NULL, NULL, OperandInfo107 },  // Inst #703 = VSPLTW
  { 704,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #704 = VSR
  { 705,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #705 = VSRAB
  { 706,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #706 = VSRAH
  { 707,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #707 = VSRAW
  { 708,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #708 = VSRB
  { 709,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #709 = VSRH
  { 710,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #710 = VSRO
  { 711,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #711 = VSRW
  { 712,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #712 = VSUBCUW
  { 713,	3,	1,	55,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #713 = VSUBFP
  { 714,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #714 = VSUBSBS
  { 715,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #715 = VSUBSHS
  { 716,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #716 = VSUBSWS
  { 717,	3,	1,	55,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #717 = VSUBUBM
  { 718,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #718 = VSUBUBS
  { 719,	3,	1,	55,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #719 = VSUBUHM
  { 720,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #720 = VSUBUHS
  { 721,	3,	1,	55,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #721 = VSUBUWM
  { 722,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #722 = VSUBUWS
  { 723,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #723 = VSUM2SWS
  { 724,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #724 = VSUM4SBS
  { 725,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #725 = VSUM4SHS
  { 726,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #726 = VSUM4UBS
  { 727,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #727 = VSUMSWS
  { 728,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #728 = VUPKHPX
  { 729,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #729 = VUPKHSB
  { 730,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #730 = VUPKHSH
  { 731,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #731 = VUPKLPX
  { 732,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #732 = VUPKLSB
  { 733,	2,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo108 },  // Inst #733 = VUPKLSH
  { 734,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo106 },  // Inst #734 = VXOR
  { 735,	1,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo75 },  // Inst #735 = V_SET0
  { 736,	1,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo75 },  // Inst #736 = V_SETALLONES
  { 737,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #737 = XOR
  { 738,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #738 = XOR8
  { 739,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #739 = XOR8o
  { 740,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #740 = XORI
  { 741,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #741 = XORI8
  { 742,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #742 = XORIS
  { 743,	3,	1,	1,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #743 = XORIS8
  { 744,	3,	1,	1,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #744 = XORo
};

extern const char PPCInstrNameData[] = {
  /* 0 */ 'M', 'T', 'F', 'S', 'B', '0', 0,
  /* 7 */ 'V', '_', 'S', 'E', 'T', '0', 0,
  /* 14 */ 'V', 'C', 'T', 'S', 'X', 'S', '_', '0', 0,
  /* 23 */ 'V', 'C', 'T', 'U', 'X', 'S', '_', '0', 0,
  /* 32 */ 'V', 'C', 'F', 'S', 'X', '_', '0', 0,
  /* 40 */ 'V', 'C', 'F', 'U', 'X', '_', '0', 0,
  /* 48 */ 'M', 'T', 'F', 'S', 'B', '1', 0,
  /* 55 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', 0,
  /* 75 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', 0,
  /* 95 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 116 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 136 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 152 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 172 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 192 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 211 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'L', 'o', 'n', 'g', 'J', 'm', 'p', '3', '2', 0,
  /* 229 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'S', 'e', 't', 'J', 'm', 'p', '3', '2', 0,
  /* 246 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 266 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 286 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 307 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 327 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 343 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 363 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 383 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 402 */ 'D', 'S', 'T', '6', '4', 0,
  /* 408 */ 'D', 'S', 'T', 'S', 'T', '6', '4', 0,
  /* 416 */ 'D', 'S', 'T', 'T', '6', '4', 0,
  /* 423 */ 'D', 'S', 'T', 'S', 'T', 'T', '6', '4', 0,
  /* 432 */ 'E', 'X', 'T', 'S', 'W', '_', '3', '2', '_', '6', '4', 0,
  /* 444 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'L', 'o', 'n', 'g', 'J', 'm', 'p', '6', '4', 0,
  /* 462 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'S', 'e', 't', 'J', 'm', 'p', '6', '4', 0,
  /* 479 */ 'A', 'D', 'D', '4', 0,
  /* 484 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', '4', 0,
  /* 497 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', '4', 0,
  /* 510 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', 0,
  /* 530 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', 0,
  /* 550 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 571 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 591 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 607 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 627 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 647 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 666 */ 'T', 'A', 'I', 'L', 'B', 'A', '8', 0,
  /* 674 */ 'L', 'H', 'A', '8', 0,
  /* 679 */ 'B', 'L', 'A', '8', 0,
  /* 684 */ 'T', 'A', 'I', 'L', 'B', '8', 0,
  /* 691 */ 'E', 'X', 'T', 'S', 'B', '8', 0,
  /* 698 */ 'M', 'F', 'T', 'B', '8', 0,
  /* 704 */ 'S', 'T', 'B', '8', 0,
  /* 709 */ 'A', 'D', 'D', 'C', '8', 0,
  /* 715 */ 'A', 'N', 'D', 'C', '8', 0,
  /* 721 */ 'S', 'U', 'B', 'F', 'C', '8', 0,
  /* 728 */ 'A', 'D', 'D', 'I', 'C', '8', 0,
  /* 735 */ 'S', 'U', 'B', 'F', 'I', 'C', '8', 0,
  /* 743 */ 'D', 'Y', 'N', 'A', 'L', 'L', 'O', 'C', '8', 0,
  /* 753 */ 'O', 'R', 'C', '8', 0,
  /* 758 */ 'A', 'D', 'D', '8', 0,
  /* 763 */ 'N', 'A', 'N', 'D', '8', 0,
  /* 769 */ 'A', 'D', 'D', 'E', '8', 0,
  /* 775 */ 'S', 'U', 'B', 'F', 'E', '8', 0,
  /* 782 */ 'A', 'D', 'D', 'M', 'E', '8', 0,
  /* 789 */ 'S', 'U', 'B', 'F', 'M', 'E', '8', 0,
  /* 797 */ 'A', 'D', 'D', 'Z', 'E', '8', 0,
  /* 804 */ 'S', 'U', 'B', 'F', 'Z', 'E', '8', 0,
  /* 812 */ 'S', 'U', 'B', 'F', '8', 0,
  /* 818 */ 'M', 'T', 'C', 'R', 'F', '8', 0,
  /* 825 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', '8', 0,
  /* 838 */ 'N', 'E', 'G', '8', 0,
  /* 843 */ 'E', 'X', 'T', 'S', 'H', '8', 0,
  /* 850 */ 'S', 'T', 'H', '8', 0,
  /* 855 */ 'A', 'D', 'D', 'I', '8', 0,
  /* 861 */ 'L', 'I', '8', 0,
  /* 865 */ 'X', 'O', 'R', 'I', '8', 0,
  /* 871 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', 0,
  /* 890 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', '8', 0,
  /* 903 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', 0,
  /* 922 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 942 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 961 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 976 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 995 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', 0,
  /* 1014 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', 0,
  /* 1032 */ 'B', 'L', '8', 0,
  /* 1036 */ 'I', 'S', 'E', 'L', '8', 0,
  /* 1042 */ 'B', 'C', 'T', 'R', 'L', '8', 0,
  /* 1049 */ 'B', 'C', 'C', 'T', 'R', 'L', '8', 0,
  /* 1057 */ 'R', 'L', 'W', 'I', 'N', 'M', '8', 0,
  /* 1065 */ 'M', 'F', 'C', 'R', '8', 0,
  /* 1071 */ 'M', 'F', 'L', 'R', '8', 0,
  /* 1077 */ 'M', 'T', 'L', 'R', '8', 0,
  /* 1083 */ 'B', 'D', 'Z', 'L', 'R', '8', 0,
  /* 1090 */ 'B', 'D', 'N', 'Z', 'L', 'R', '8', 0,
  /* 1098 */ 'M', 'o', 'v', 'e', 'P', 'C', 't', 'o', 'L', 'R', '8', 0,
  /* 1110 */ 'N', 'O', 'R', '8', 0,
  /* 1115 */ 'X', 'O', 'R', '8', 0,
  /* 1120 */ 'T', 'A', 'I', 'L', 'B', 'C', 'T', 'R', '8', 0,
  /* 1130 */ 'B', 'C', 'C', 'T', 'R', '8', 0,
  /* 1137 */ 'M', 'F', 'C', 'T', 'R', '8', 0,
  /* 1144 */ 'M', 'T', 'C', 'T', 'R', '8', 0,
  /* 1151 */ 'A', 'D', 'D', 'I', 'S', '8', 0,
  /* 1158 */ 'L', 'I', 'S', '8', 0,
  /* 1163 */ 'X', 'O', 'R', 'I', 'S', '8', 0,
  /* 1170 */ 'L', 'H', 'A', 'U', '8', 0,
  /* 1176 */ 'S', 'T', 'B', 'U', '8', 0,
  /* 1182 */ 'S', 'T', 'H', 'U', '8', 0,
  /* 1188 */ 'S', 'T', 'W', 'U', '8', 0,
  /* 1194 */ 'L', 'B', 'Z', 'U', '8', 0,
  /* 1200 */ 'L', 'H', 'Z', 'U', '8', 0,
  /* 1206 */ 'L', 'W', 'Z', 'U', '8', 0,
  /* 1212 */ 'E', 'Q', 'V', '8', 0,
  /* 1217 */ 'S', 'T', 'W', '8', 0,
  /* 1222 */ 'L', 'H', 'A', 'X', '8', 0,
  /* 1228 */ 'S', 'T', 'B', 'X', '8', 0,
  /* 1234 */ 'S', 'T', 'H', 'X', '8', 0,
  /* 1240 */ 'L', 'H', 'A', 'U', 'X', '8', 0,
  /* 1247 */ 'S', 'T', 'B', 'U', 'X', '8', 0,
  /* 1254 */ 'S', 'T', 'H', 'U', 'X', '8', 0,
  /* 1261 */ 'S', 'T', 'W', 'U', 'X', '8', 0,
  /* 1268 */ 'L', 'B', 'Z', 'U', 'X', '8', 0,
  /* 1275 */ 'L', 'H', 'Z', 'U', 'X', '8', 0,
  /* 1282 */ 'L', 'W', 'Z', 'U', 'X', '8', 0,
  /* 1289 */ 'S', 'T', 'W', 'X', '8', 0,
  /* 1295 */ 'L', 'B', 'Z', 'X', '8', 0,
  /* 1301 */ 'L', 'H', 'Z', 'X', '8', 0,
  /* 1307 */ 'L', 'W', 'Z', 'X', '8', 0,
  /* 1313 */ 'L', 'B', 'Z', '8', 0,
  /* 1318 */ 'B', 'D', 'Z', '8', 0,
  /* 1323 */ 'L', 'H', 'Z', '8', 0,
  /* 1328 */ 'B', 'D', 'N', 'Z', '8', 0,
  /* 1334 */ 'L', 'W', 'Z', '8', 0,
  /* 1339 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'a', 'i', '8', 0,
  /* 1351 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'd', 'i', '8', 0,
  /* 1363 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'r', 'i', '8', 0,
  /* 1375 */ 'A', 'N', 'D', 'I', 'o', '8', 0,
  /* 1382 */ 'A', 'N', 'D', 'I', 'S', 'o', '8', 0,
  /* 1390 */ 'D', 'C', 'B', 'A', 0,
  /* 1395 */ 'T', 'A', 'I', 'L', 'B', 'A', 0,
  /* 1402 */ 'L', 'H', 'A', 0,
  /* 1406 */ 'A', 'D', 'D', 'I', 'S', 't', 'o', 'c', 'H', 'A', 0,
  /* 1417 */ 'A', 'D', 'D', 'I', 'S', 't', 'l', 's', 'g', 'd', 'H', 'A', 0,
  /* 1430 */ 'A', 'D', 'D', 'I', 'S', 't', 'l', 's', 'l', 'd', 'H', 'A', 0,
  /* 1443 */ 'A', 'D', 'D', 'I', 'S', 'g', 'o', 't', 'T', 'p', 'r', 'e', 'l', 'H', 'A', 0,
  /* 1459 */ 'A', 'D', 'D', 'I', 'S', 'd', 't', 'p', 'r', 'e', 'l', 'H', 'A', 0,
  /* 1473 */ 'B', 'L', 'A', 0,
  /* 1477 */ 'L', 'W', 'A', 0,
  /* 1481 */ 'V', 'S', 'R', 'A', 'B', 0,
  /* 1487 */ 'V', 'M', 'R', 'G', 'H', 'B', 0,
  /* 1494 */ 'V', 'M', 'R', 'G', 'L', 'B', 0,
  /* 1501 */ 'T', 'A', 'I', 'L', 'B', 0,
  /* 1507 */ 'V', 'R', 'L', 'B', 0,
  /* 1512 */ 'V', 'S', 'L', 'B', 0,
  /* 1517 */ 'V', 'S', 'R', 'B', 0,
  /* 1522 */ 'V', 'M', 'U', 'L', 'E', 'S', 'B', 0,
  /* 1530 */ 'V', 'A', 'V', 'G', 'S', 'B', 0,
  /* 1537 */ 'V', 'U', 'P', 'K', 'H', 'S', 'B', 0,
  /* 1545 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'B', 0,
  /* 1554 */ 'V', 'U', 'P', 'K', 'L', 'S', 'B', 0,
  /* 1562 */ 'V', 'M', 'I', 'N', 'S', 'B', 0,
  /* 1569 */ 'V', 'M', 'U', 'L', 'O', 'S', 'B', 0,
  /* 1577 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'B', 0,
  /* 1586 */ 'E', 'X', 'T', 'S', 'B', 0,
  /* 1592 */ 'V', 'M', 'A', 'X', 'S', 'B', 0,
  /* 1599 */ 'V', 'S', 'P', 'L', 'T', 'B', 0,
  /* 1606 */ 'S', 'T', 'B', 0,
  /* 1610 */ 'V', 'M', 'U', 'L', 'E', 'U', 'B', 0,
  /* 1618 */ 'V', 'A', 'V', 'G', 'U', 'B', 0,
  /* 1625 */ 'V', 'M', 'I', 'N', 'U', 'B', 0,
  /* 1632 */ 'V', 'M', 'U', 'L', 'O', 'U', 'B', 0,
  /* 1640 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'B', 0,
  /* 1649 */ 'F', 'S', 'U', 'B', 0,
  /* 1654 */ 'F', 'M', 'S', 'U', 'B', 0,
  /* 1660 */ 'F', 'N', 'M', 'S', 'U', 'B', 0,
  /* 1667 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'B', 0,
  /* 1676 */ 'V', 'M', 'A', 'X', 'U', 'B', 0,
  /* 1683 */ 'B', 'C', 'C', 0,
  /* 1687 */ 'A', 'D', 'D', 'C', 0,
  /* 1692 */ 'V', 'A', 'N', 'D', 'C', 0,
  /* 1698 */ 'S', 'U', 'B', 'F', 'C', 0,
  /* 1704 */ 'A', 'D', 'D', 'I', 'C', 0,
  /* 1710 */ 'S', 'U', 'B', 'F', 'I', 'C', 0,
  /* 1717 */ 'I', 'S', 'Y', 'N', 'C', 0,
  /* 1723 */ 'D', 'Y', 'N', 'A', 'L', 'L', 'O', 'C', 0,
  /* 1732 */ 'O', 'R', 'C', 0,
  /* 1736 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'V', 'R', 'R', 'C', 0,
  /* 1751 */ 'S', 'R', 'A', 'D', 0,
  /* 1756 */ 'F', 'A', 'D', 'D', 0,
  /* 1761 */ 'F', 'M', 'A', 'D', 'D', 0,
  /* 1767 */ 'F', 'N', 'M', 'A', 'D', 'D', 0,
  /* 1774 */ 'L', 'F', 'D', 0,
  /* 1778 */ 'S', 'T', 'F', 'D', 0,
  /* 1783 */ 'F', 'N', 'E', 'G', 'D', 0,
  /* 1789 */ 'B', 'L', '8', '_', 'N', 'O', 'P', '_', 'T', 'L', 'S', 'G', 'D', 0,
  /* 1803 */ 'M', 'U', 'L', 'H', 'D', 0,
  /* 1809 */ 'F', 'C', 'F', 'I', 'D', 0,
  /* 1815 */ 'F', 'S', 'E', 'L', 'D', 0,
  /* 1821 */ 'M', 'U', 'L', 'L', 'D', 0,
  /* 1827 */ 'C', 'M', 'P', 'L', 'D', 0,
  /* 1833 */ 'B', 'L', '8', '_', 'N', 'O', 'P', '_', 'T', 'L', 'S', 'L', 'D', 0,
  /* 1847 */ 'F', 'R', 'I', 'M', 'D', 0,
  /* 1853 */ 'N', 'A', 'N', 'D', 0,
  /* 1858 */ 'V', 'A', 'N', 'D', 0,
  /* 1863 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 1876 */ 'F', 'R', 'I', 'N', 'D', 0,
  /* 1882 */ 'F', 'R', 'I', 'P', 'D', 0,
  /* 1888 */ 'C', 'M', 'P', 'D', 0,
  /* 1893 */ 'S', 'R', 'D', 0,
  /* 1897 */ 'F', 'A', 'B', 'S', 'D', 0,
  /* 1903 */ 'F', 'N', 'A', 'B', 'S', 'D', 0,
  /* 1910 */ 'P', 'O', 'P', 'C', 'N', 'T', 'D', 0,
  /* 1918 */ 'S', 'T', 'D', 0,
  /* 1922 */ 'F', 'C', 'M', 'P', 'U', 'D', 0,
  /* 1929 */ 'D', 'I', 'V', 'D', 0,
  /* 1934 */ 'F', 'R', 'I', 'Z', 'D', 0,
  /* 1940 */ 'C', 'N', 'T', 'L', 'Z', 'D', 0,
  /* 1947 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 1960 */ 'A', 'D', 'D', 'E', 0,
  /* 1965 */ 'S', 'U', 'B', 'F', 'E', 0,
  /* 1971 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 1978 */ 'A', 'D', 'D', 'M', 'E', 0,
  /* 1984 */ 'S', 'U', 'B', 'F', 'M', 'E', 0,
  /* 1991 */ 'F', 'R', 'E', 0,
  /* 1995 */ 'F', 'R', 'S', 'Q', 'R', 'T', 'E', 0,
  /* 2003 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 2013 */ 'M', 'F', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 2022 */ 'M', 'T', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 2031 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', '_', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 2046 */ 'U', 'P', 'D', 'A', 'T', 'E', '_', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 2060 */ 'S', 'P', 'I', 'L', 'L', '_', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 2073 */ 'A', 'D', 'D', 'Z', 'E', 0,
  /* 2079 */ 'S', 'U', 'B', 'F', 'Z', 'E', 0,
  /* 2086 */ 'D', 'C', 'B', 'F', 0,
  /* 2091 */ 'S', 'U', 'B', 'F', 0,
  /* 2096 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 2109 */ 'M', 'C', 'R', 'F', 0,
  /* 2114 */ 'M', 'F', 'O', 'C', 'R', 'F', 0,
  /* 2121 */ 'M', 'T', 'C', 'R', 'F', 0,
  /* 2127 */ 'M', 'T', 'F', 'S', 'F', 0,
  /* 2133 */ 'N', 'E', 'G', 0,
  /* 2137 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 2152 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 2166 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 2180 */ 'V', 'S', 'R', 'A', 'H', 0,
  /* 2186 */ 'V', 'M', 'R', 'G', 'H', 'H', 0,
  /* 2193 */ 'V', 'M', 'R', 'G', 'L', 'H', 0,
  /* 2200 */ 'V', 'R', 'L', 'H', 0,
  /* 2205 */ 'V', 'S', 'L', 'H', 0,
  /* 2210 */ 'V', 'S', 'R', 'H', 0,
  /* 2215 */ 'V', 'M', 'U', 'L', 'E', 'S', 'H', 0,
  /* 2223 */ 'V', 'A', 'V', 'G', 'S', 'H', 0,
  /* 2230 */ 'V', 'U', 'P', 'K', 'H', 'S', 'H', 0,
  /* 2238 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'H', 0,
  /* 2247 */ 'V', 'U', 'P', 'K', 'L', 'S', 'H', 0,
  /* 2255 */ 'V', 'M', 'I', 'N', 'S', 'H', 0,
  /* 2262 */ 'V', 'M', 'U', 'L', 'O', 'S', 'H', 0,
  /* 2270 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'H', 0,
  /* 2279 */ 'E', 'X', 'T', 'S', 'H', 0,
  /* 2285 */ 'V', 'M', 'A', 'X', 'S', 'H', 0,
  /* 2292 */ 'V', 'S', 'P', 'L', 'T', 'H', 0,
  /* 2299 */ 'S', 'T', 'H', 0,
  /* 2303 */ 'V', 'M', 'U', 'L', 'E', 'U', 'H', 0,
  /* 2311 */ 'V', 'A', 'V', 'G', 'U', 'H', 0,
  /* 2318 */ 'V', 'M', 'I', 'N', 'U', 'H', 0,
  /* 2325 */ 'V', 'M', 'U', 'L', 'O', 'U', 'H', 0,
  /* 2333 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'H', 0,
  /* 2342 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'H', 0,
  /* 2351 */ 'V', 'M', 'A', 'X', 'U', 'H', 0,
  /* 2358 */ 'D', 'C', 'B', 'I', 0,
  /* 2363 */ 'I', 'C', 'B', 'I', 0,
  /* 2368 */ 'S', 'R', 'A', 'D', 'I', 0,
  /* 2374 */ 'A', 'D', 'D', 'I', 0,
  /* 2379 */ 'C', 'M', 'P', 'L', 'D', 'I', 0,
  /* 2386 */ 'S', 'L', 'D', 'I', 0,
  /* 2391 */ 'C', 'M', 'P', 'D', 'I', 0,
  /* 2397 */ 'S', 'R', 'D', 'I', 0,
  /* 2402 */ 'P', 'H', 'I', 0,
  /* 2406 */ 'M', 'U', 'L', 'L', 'I', 0,
  /* 2412 */ 'R', 'L', 'D', 'I', 'M', 'I', 0,
  /* 2419 */ 'R', 'L', 'W', 'I', 'M', 'I', 0,
  /* 2426 */ 'V', 'S', 'L', 'D', 'O', 'I', 0,
  /* 2433 */ 'X', 'O', 'R', 'I', 0,
  /* 2438 */ 'L', 'D', 't', 'o', 'c', 'J', 'T', 'I', 0,
  /* 2447 */ 'S', 'R', 'A', 'W', 'I', 0,
  /* 2453 */ 'C', 'M', 'P', 'L', 'W', 'I', 0,
  /* 2460 */ 'S', 'L', 'W', 'I', 0,
  /* 2465 */ 'C', 'M', 'P', 'W', 'I', 0,
  /* 2471 */ 'S', 'R', 'W', 'I', 0,
  /* 2476 */ 'B', 'L', 0,
  /* 2479 */ 'R', 'L', 'D', 'C', 'L', 0,
  /* 2485 */ 'R', 'L', 'D', 'I', 'C', 'L', 0,
  /* 2492 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2501 */ 'P', 'R', 'O', 'L', 'O', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2514 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2523 */ 'I', 'S', 'E', 'L', 0,
  /* 2528 */ 'V', 'S', 'E', 'L', 0,
  /* 2533 */ 'D', 'S', 'S', 'A', 'L', 'L', 0,
  /* 2540 */ 'K', 'I', 'L', 'L', 0,
  /* 2545 */ 'B', 'C', 'T', 'R', 'L', 0,
  /* 2551 */ 'B', 'C', 'C', 'T', 'R', 'L', 0,
  /* 2558 */ 'L', 'V', 'S', 'L', 0,
  /* 2563 */ 'F', 'M', 'U', 'L', 0,
  /* 2568 */ 'L', 'V', 'X', 'L', 0,
  /* 2573 */ 'S', 'T', 'V', 'X', 'L', 0,
  /* 2579 */ 'D', 'C', 'B', 'Z', 'L', 0,
  /* 2585 */ 'L', 'D', 't', 'o', 'c', 'L', 0,
  /* 2592 */ 'A', 'D', 'D', 'I', 't', 'o', 'c', 'L', 0,
  /* 2601 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'g', 'd', 'L', 0,
  /* 2612 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'l', 'd', 'L', 0,
  /* 2623 */ 'L', 'D', 'g', 'o', 't', 'T', 'p', 'r', 'e', 'l', 'L', 0,
  /* 2635 */ 'A', 'D', 'D', 'I', 'd', 't', 'p', 'r', 'e', 'l', 'L', 0,
  /* 2647 */ 'V', 'M', 'S', 'U', 'M', 'M', 'B', 'M', 0,
  /* 2656 */ 'V', 'S', 'U', 'B', 'U', 'B', 'M', 0,
  /* 2664 */ 'V', 'A', 'D', 'D', 'U', 'B', 'M', 0,
  /* 2672 */ 'V', 'M', 'S', 'U', 'M', 'U', 'B', 'M', 0,
  /* 2681 */ 'V', 'M', 'S', 'U', 'M', 'S', 'H', 'M', 0,
  /* 2690 */ 'V', 'S', 'U', 'B', 'U', 'H', 'M', 0,
  /* 2698 */ 'V', 'M', 'L', 'A', 'D', 'D', 'U', 'H', 'M', 0,
  /* 2708 */ 'V', 'A', 'D', 'D', 'U', 'H', 'M', 0,
  /* 2716 */ 'V', 'M', 'S', 'U', 'M', 'U', 'H', 'M', 0,
  /* 2725 */ 'V', 'R', 'F', 'I', 'M', 0,
  /* 2731 */ 'R', 'L', 'W', 'I', 'N', 'M', 0,
  /* 2738 */ 'R', 'L', 'W', 'N', 'M', 0,
  /* 2744 */ 'V', 'P', 'E', 'R', 'M', 0,
  /* 2750 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 2760 */ 'V', 'P', 'K', 'U', 'H', 'U', 'M', 0,
  /* 2768 */ 'V', 'P', 'K', 'U', 'W', 'U', 'M', 0,
  /* 2776 */ 'V', 'S', 'U', 'B', 'U', 'W', 'M', 0,
  /* 2784 */ 'V', 'A', 'D', 'D', 'U', 'W', 'M', 0,
  /* 2792 */ 'V', 'R', 'F', 'I', 'N', 0,
  /* 2798 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 2815 */ 'V', 'S', 'L', 'O', 0,
  /* 2820 */ 'V', 'S', 'R', 'O', 0,
  /* 2825 */ 'T', 'R', 'A', 'P', 0,
  /* 2830 */ 'V', 'C', 'M', 'P', 'B', 'F', 'P', 0,
  /* 2838 */ 'V', 'N', 'M', 'S', 'U', 'B', 'F', 'P', 0,
  /* 2847 */ 'V', 'S', 'U', 'B', 'F', 'P', 0,
  /* 2854 */ 'V', 'M', 'A', 'D', 'D', 'F', 'P', 0,
  /* 2862 */ 'V', 'A', 'D', 'D', 'F', 'P', 0,
  /* 2869 */ 'V', 'L', 'O', 'G', 'E', 'F', 'P', 0,
  /* 2877 */ 'V', 'C', 'M', 'P', 'G', 'E', 'F', 'P', 0,
  /* 2886 */ 'V', 'R', 'E', 'F', 'P', 0,
  /* 2892 */ 'V', 'E', 'X', 'P', 'T', 'E', 'F', 'P', 0,
  /* 2901 */ 'V', 'R', 'S', 'Q', 'R', 'T', 'E', 'F', 'P', 0,
  /* 2911 */ 'V', 'M', 'I', 'N', 'F', 'P', 0,
  /* 2918 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'F', 'P', 0,
  /* 2927 */ 'V', 'C', 'M', 'P', 'G', 'T', 'F', 'P', 0,
  /* 2936 */ 'V', 'M', 'A', 'X', 'F', 'P', 0,
  /* 2943 */ 'V', 'R', 'F', 'I', 'P', 0,
  /* 2949 */ 'B', 'L', 'A', '8', '_', 'N', 'O', 'P', 0,
  /* 2958 */ 'B', 'L', '8', '_', 'N', 'O', 'P', 0,
  /* 2966 */ 'F', 'R', 'S', 'P', 0,
  /* 2971 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 2986 */ 'M', 'F', 'C', 'R', 0,
  /* 2991 */ 'R', 'L', 'D', 'I', 'C', 'R', 0,
  /* 2998 */ 'M', 'F', 'V', 'S', 'C', 'R', 0,
  /* 3005 */ 'M', 'T', 'V', 'S', 'C', 'R', 0,
  /* 3012 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', '_', 'C', 'R', 0,
  /* 3023 */ 'S', 'P', 'I', 'L', 'L', '_', 'C', 'R', 0,
  /* 3032 */ 'G', 'E', 'T', 't', 'l', 's', 'l', 'd', 'A', 'D', 'D', 'R', 0,
  /* 3045 */ 'G', 'E', 'T', 't', 'l', 's', 'A', 'D', 'D', 'R', 0,
  /* 3056 */ 'B', 'L', 'R', 0,
  /* 3060 */ 'B', 'C', 'L', 'R', 0,
  /* 3065 */ 'M', 'F', 'L', 'R', 0,
  /* 3070 */ 'M', 'T', 'L', 'R', 0,
  /* 3075 */ 'B', 'D', 'Z', 'L', 'R', 0,
  /* 3081 */ 'B', 'D', 'N', 'Z', 'L', 'R', 0,
  /* 3088 */ 'M', 'o', 'v', 'e', 'P', 'C', 't', 'o', 'L', 'R', 0,
  /* 3099 */ 'F', 'M', 'R', 0,
  /* 3103 */ 'V', 'N', 'O', 'R', 0,
  /* 3108 */ 'C', 'R', 'O', 'R', 0,
  /* 3113 */ 'V', 'O', 'R', 0,
  /* 3117 */ 'V', 'X', 'O', 'R', 0,
  /* 3122 */ 'L', 'V', 'S', 'R', 0,
  /* 3127 */ 'T', 'A', 'I', 'L', 'B', 'C', 'T', 'R', 0,
  /* 3136 */ 'B', 'C', 'C', 'T', 'R', 0,
  /* 3142 */ 'M', 'F', 'C', 'T', 'R', 0,
  /* 3148 */ 'M', 'T', 'C', 'T', 'R', 0,
  /* 3154 */ 'V', 'S', 'U', 'M', '4', 'S', 'B', 'S', 0,
  /* 3163 */ 'V', 'S', 'U', 'B', 'S', 'B', 'S', 0,
  /* 3171 */ 'V', 'A', 'D', 'D', 'S', 'B', 'S', 0,
  /* 3179 */ 'V', 'S', 'U', 'M', '4', 'U', 'B', 'S', 0,
  /* 3188 */ 'V', 'S', 'U', 'B', 'U', 'B', 'S', 0,
  /* 3196 */ 'V', 'A', 'D', 'D', 'U', 'B', 'S', 0,
  /* 3204 */ 'F', 'S', 'U', 'B', 'S', 0,
  /* 3210 */ 'F', 'M', 'S', 'U', 'B', 'S', 0,
  /* 3217 */ 'F', 'N', 'M', 'S', 'U', 'B', 'S', 0,
  /* 3225 */ 'F', 'A', 'D', 'D', 'S', 0,
  /* 3231 */ 'F', 'M', 'A', 'D', 'D', 'S', 0,
  /* 3238 */ 'F', 'N', 'M', 'A', 'D', 'D', 'S', 0,
  /* 3246 */ 'F', 'C', 'F', 'I', 'D', 'S', 0,
  /* 3253 */ 'V', '_', 'S', 'E', 'T', 'A', 'L', 'L', 'O', 'N', 'E', 'S', 0,
  /* 3266 */ 'F', 'R', 'E', 'S', 0,
  /* 3271 */ 'F', 'R', 'S', 'Q', 'R', 'T', 'E', 'S', 0,
  /* 3280 */ 'M', 'F', 'F', 'S', 0,
  /* 3285 */ 'L', 'F', 'S', 0,
  /* 3289 */ 'S', 'T', 'F', 'S', 0,
  /* 3294 */ 'F', 'N', 'E', 'G', 'S', 0,
  /* 3300 */ 'V', 'S', 'U', 'M', '4', 'S', 'H', 'S', 0,
  /* 3309 */ 'V', 'S', 'U', 'B', 'S', 'H', 'S', 0,
  /* 3317 */ 'V', 'M', 'H', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 3327 */ 'V', 'M', 'H', 'R', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 3338 */ 'V', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 3346 */ 'V', 'M', 'S', 'U', 'M', 'S', 'H', 'S', 0,
  /* 3355 */ 'V', 'S', 'U', 'B', 'U', 'H', 'S', 0,
  /* 3363 */ 'V', 'A', 'D', 'D', 'U', 'H', 'S', 0,
  /* 3371 */ 'V', 'M', 'S', 'U', 'M', 'U', 'H', 'S', 0,
  /* 3380 */ 'A', 'D', 'D', 'I', 'S', 0,
  /* 3386 */ 'L', 'I', 'S', 0,
  /* 3390 */ 'X', 'O', 'R', 'I', 'S', 0,
  /* 3396 */ 'F', 'S', 'E', 'L', 'S', 0,
  /* 3402 */ 'A', 'D', 'D', '8', 'T', 'L', 'S', 0,
  /* 3410 */ 'F', 'M', 'U', 'L', 'S', 0,
  /* 3416 */ 'F', 'R', 'I', 'M', 'S', 0,
  /* 3422 */ 'F', 'R', 'I', 'N', 'S', 0,
  /* 3428 */ 'F', 'R', 'I', 'P', 'S', 0,
  /* 3434 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 3451 */ 'F', 'A', 'B', 'S', 'S', 0,
  /* 3457 */ 'F', 'N', 'A', 'B', 'S', 'S', 0,
  /* 3464 */ 'D', 'S', 'S', 0,
  /* 3468 */ 'V', 'P', 'K', 'S', 'H', 'S', 'S', 0,
  /* 3476 */ 'V', 'P', 'K', 'S', 'W', 'S', 'S', 0,
  /* 3484 */ 'F', 'S', 'Q', 'R', 'T', 'S', 0,
  /* 3491 */ 'F', 'C', 'F', 'I', 'D', 'U', 'S', 0,
  /* 3499 */ 'V', 'P', 'K', 'S', 'H', 'U', 'S', 0,
  /* 3507 */ 'V', 'P', 'K', 'U', 'H', 'U', 'S', 0,
  /* 3515 */ 'F', 'C', 'M', 'P', 'U', 'S', 0,
  /* 3522 */ 'V', 'P', 'K', 'S', 'W', 'U', 'S', 0,
  /* 3530 */ 'V', 'P', 'K', 'U', 'W', 'U', 'S', 0,
  /* 3538 */ 'F', 'D', 'I', 'V', 'S', 0,
  /* 3544 */ 'V', 'S', 'U', 'M', '2', 'S', 'W', 'S', 0,
  /* 3553 */ 'V', 'S', 'U', 'B', 'S', 'W', 'S', 0,
  /* 3561 */ 'V', 'A', 'D', 'D', 'S', 'W', 'S', 0,
  /* 3569 */ 'V', 'S', 'U', 'M', 'S', 'W', 'S', 0,
  /* 3577 */ 'V', 'S', 'U', 'B', 'U', 'W', 'S', 0,
  /* 3585 */ 'V', 'A', 'D', 'D', 'U', 'W', 'S', 0,
  /* 3593 */ 'V', 'C', 'T', 'S', 'X', 'S', 0,
  /* 3600 */ 'V', 'C', 'T', 'U', 'X', 'S', 0,
  /* 3607 */ 'F', 'R', 'I', 'Z', 'S', 0,
  /* 3613 */ 'D', 'C', 'B', 'T', 0,
  /* 3618 */ 'C', 'R', '6', 'S', 'E', 'T', 0,
  /* 3625 */ 'C', 'R', '6', 'U', 'N', 'S', 'E', 'T', 0,
  /* 3634 */ 'C', 'R', 'U', 'N', 'S', 'E', 'T', 0,
  /* 3642 */ 'C', 'R', 'S', 'E', 'T', 0,
  /* 3648 */ 'L', 'D', 't', 'o', 'c', 'C', 'P', 'T', 0,
  /* 3657 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 3672 */ 'F', 'S', 'Q', 'R', 'T', 0,
  /* 3678 */ 'D', 'C', 'B', 'S', 'T', 0,
  /* 3684 */ 'D', 'S', 'T', 0,
  /* 3688 */ 'D', 'C', 'B', 'T', 'S', 'T', 0,
  /* 3695 */ 'D', 'S', 'T', 'S', 'T', 0,
  /* 3701 */ 'D', 'S', 'T', 'T', 0,
  /* 3706 */ 'D', 'S', 'T', 'S', 'T', 'T', 0,
  /* 3713 */ 'L', 'H', 'A', 'U', 0,
  /* 3718 */ 'S', 'T', 'B', 'U', 0,
  /* 3723 */ 'L', 'F', 'D', 'U', 0,
  /* 3728 */ 'S', 'T', 'F', 'D', 'U', 0,
  /* 3734 */ 'M', 'U', 'L', 'H', 'D', 'U', 0,
  /* 3741 */ 'F', 'C', 'F', 'I', 'D', 'U', 0,
  /* 3748 */ 'L', 'D', 'U', 0,
  /* 3752 */ 'S', 'T', 'D', 'U', 0,
  /* 3757 */ 'D', 'I', 'V', 'D', 'U', 0,
  /* 3763 */ 'S', 'T', 'H', 'U', 0,
  /* 3768 */ 'L', 'F', 'S', 'U', 0,
  /* 3773 */ 'S', 'T', 'F', 'S', 'U', 0,
  /* 3779 */ 'M', 'U', 'L', 'H', 'W', 'U', 0,
  /* 3786 */ 'S', 'T', 'W', 'U', 0,
  /* 3791 */ 'D', 'I', 'V', 'W', 'U', 0,
  /* 3797 */ 'L', 'B', 'Z', 'U', 0,
  /* 3802 */ 'L', 'H', 'Z', 'U', 0,
  /* 3807 */ 'L', 'W', 'Z', 'U', 0,
  /* 3812 */ 'F', 'D', 'I', 'V', 0,
  /* 3817 */ 'C', 'R', 'E', 'Q', 'V', 0,
  /* 3823 */ 'V', 'S', 'R', 'A', 'W', 0,
  /* 3829 */ 'V', 'M', 'R', 'G', 'H', 'W', 0,
  /* 3836 */ 'M', 'U', 'L', 'H', 'W', 0,
  /* 3842 */ 'V', 'M', 'R', 'G', 'L', 'W', 0,
  /* 3849 */ 'M', 'U', 'L', 'L', 'W', 0,
  /* 3855 */ 'C', 'M', 'P', 'L', 'W', 0,
  /* 3861 */ 'V', 'R', 'L', 'W', 0,
  /* 3866 */ 'V', 'S', 'L', 'W', 0,
  /* 3871 */ 'C', 'M', 'P', 'W', 0,
  /* 3876 */ 'V', 'S', 'R', 'W', 0,
  /* 3881 */ 'V', 'A', 'V', 'G', 'S', 'W', 0,
  /* 3888 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'W', 0,
  /* 3897 */ 'V', 'M', 'I', 'N', 'S', 'W', 0,
  /* 3904 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'W', 0,
  /* 3913 */ 'E', 'X', 'T', 'S', 'W', 0,
  /* 3919 */ 'V', 'M', 'A', 'X', 'S', 'W', 0,
  /* 3926 */ 'V', 'S', 'P', 'L', 'T', 'W', 0,
  /* 3933 */ 'P', 'O', 'P', 'C', 'N', 'T', 'W', 0,
  /* 3941 */ 'S', 'T', 'W', 0,
  /* 3945 */ 'V', 'S', 'U', 'B', 'C', 'U', 'W', 0,
  /* 3953 */ 'V', 'A', 'D', 'D', 'C', 'U', 'W', 0,
  /* 3961 */ 'V', 'A', 'V', 'G', 'U', 'W', 0,
  /* 3968 */ 'V', 'M', 'I', 'N', 'U', 'W', 0,
  /* 3975 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'W', 0,
  /* 3984 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'W', 0,
  /* 3993 */ 'V', 'M', 'A', 'X', 'U', 'W', 0,
  /* 4000 */ 'D', 'I', 'V', 'W', 0,
  /* 4005 */ 'C', 'N', 'T', 'L', 'Z', 'W', 0,
  /* 4012 */ 'L', 'H', 'A', 'X', 0,
  /* 4017 */ 'L', 'F', 'I', 'W', 'A', 'X', 0,
  /* 4024 */ 'L', 'W', 'A', 'X', 0,
  /* 4029 */ 'L', 'V', 'E', 'B', 'X', 0,
  /* 4035 */ 'S', 'T', 'V', 'E', 'B', 'X', 0,
  /* 4042 */ 'S', 'T', 'B', 'X', 0,
  /* 4047 */ 'S', 'T', 'D', 'C', 'X', 0,
  /* 4053 */ 'S', 'T', 'W', 'C', 'X', 0,
  /* 4059 */ 'L', 'F', 'D', 'X', 0,
  /* 4064 */ 'S', 'T', 'F', 'D', 'X', 0,
  /* 4070 */ 'L', 'D', 'X', 0,
  /* 4074 */ 'S', 'T', 'D', 'X', 0,
  /* 4079 */ 'L', 'V', 'E', 'H', 'X', 0,
  /* 4085 */ 'S', 'T', 'V', 'E', 'H', 'X', 0,
  /* 4092 */ 'S', 'T', 'H', 'X', 0,
  /* 4097 */ 'V', 'U', 'P', 'K', 'H', 'P', 'X', 0,
  /* 4105 */ 'V', 'P', 'K', 'P', 'X', 0,
  /* 4111 */ 'V', 'U', 'P', 'K', 'L', 'P', 'X', 0,
  /* 4119 */ 'L', 'D', 'A', 'R', 'X', 0,
  /* 4125 */ 'L', 'W', 'A', 'R', 'X', 0,
  /* 4131 */ 'L', 'D', 'B', 'R', 'X', 0,
  /* 4137 */ 'S', 'T', 'D', 'B', 'R', 'X', 0,
  /* 4144 */ 'L', 'H', 'B', 'R', 'X', 0,
  /* 4150 */ 'S', 'T', 'H', 'B', 'R', 'X', 0,
  /* 4157 */ 'L', 'W', 'B', 'R', 'X', 0,
  /* 4163 */ 'S', 'T', 'W', 'B', 'R', 'X', 0,
  /* 4170 */ 'V', 'C', 'F', 'S', 'X', 0,
  /* 4176 */ 'L', 'F', 'S', 'X', 0,
  /* 4181 */ 'S', 'T', 'F', 'S', 'X', 0,
  /* 4187 */ 'L', 'H', 'A', 'U', 'X', 0,
  /* 4193 */ 'L', 'W', 'A', 'U', 'X', 0,
  /* 4199 */ 'S', 'T', 'B', 'U', 'X', 0,
  /* 4205 */ 'L', 'F', 'D', 'U', 'X', 0,
  /* 4211 */ 'S', 'T', 'F', 'D', 'U', 'X', 0,
  /* 4218 */ 'L', 'D', 'U', 'X', 0,
  /* 4223 */ 'S', 'T', 'D', 'U', 'X', 0,
  /* 4229 */ 'V', 'C', 'F', 'U', 'X', 0,
  /* 4235 */ 'S', 'T', 'H', 'U', 'X', 0,
  /* 4241 */ 'L', 'F', 'S', 'U', 'X', 0,
  /* 4247 */ 'S', 'T', 'F', 'S', 'U', 'X', 0,
  /* 4254 */ 'S', 'T', 'W', 'U', 'X', 0,
  /* 4260 */ 'L', 'B', 'Z', 'U', 'X', 0,
  /* 4266 */ 'L', 'H', 'Z', 'U', 'X', 0,
  /* 4272 */ 'L', 'W', 'Z', 'U', 'X', 0,
  /* 4278 */ 'L', 'V', 'X', 0,
  /* 4282 */ 'S', 'T', 'V', 'X', 0,
  /* 4287 */ 'L', 'V', 'E', 'W', 'X', 0,
  /* 4293 */ 'S', 'T', 'V', 'E', 'W', 'X', 0,
  /* 4300 */ 'S', 'T', 'F', 'I', 'W', 'X', 0,
  /* 4307 */ 'S', 'T', 'W', 'X', 0,
  /* 4312 */ 'L', 'B', 'Z', 'X', 0,
  /* 4317 */ 'L', 'H', 'Z', 'X', 0,
  /* 4322 */ 'L', 'F', 'I', 'W', 'Z', 'X', 0,
  /* 4329 */ 'L', 'W', 'Z', 'X', 0,
  /* 4334 */ 'C', 'O', 'P', 'Y', 0,
  /* 4339 */ 'D', 'C', 'B', 'Z', 0,
  /* 4344 */ 'L', 'B', 'Z', 0,
  /* 4348 */ 'B', 'D', 'Z', 0,
  /* 4352 */ 'F', 'C', 'T', 'I', 'D', 'Z', 0,
  /* 4359 */ 'L', 'H', 'Z', 0,
  /* 4363 */ 'V', 'R', 'F', 'I', 'Z', 0,
  /* 4369 */ 'B', 'D', 'N', 'Z', 0,
  /* 4374 */ 'F', 'C', 'T', 'I', 'D', 'U', 'Z', 0,
  /* 4382 */ 'F', 'C', 'T', 'I', 'W', 'U', 'Z', 0,
  /* 4390 */ 'F', 'C', 'T', 'I', 'W', 'Z', 0,
  /* 4397 */ 'L', 'W', 'Z', 0,
  /* 4401 */ 'L', 'D', 't', 'o', 'c', 0,
  /* 4407 */ 'L', 'D', 'i', 'n', 't', 'o', '_', 't', 'o', 'c', 0,
  /* 4418 */ 'M', 'F', 'C', 'R', '8', 'p', 's', 'e', 'u', 'd', 0,
  /* 4429 */ 'M', 'F', 'C', 'R', 'p', 's', 'e', 'u', 'd', 0,
  /* 4439 */ 'L', 'D', 't', 'o', 'c', '_', 'r', 'e', 's', 't', 'o', 'r', 'e', 0,
  /* 4453 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'a', 'i', 0,
  /* 4464 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'd', 'i', 0,
  /* 4475 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'r', 'i', 0,
  /* 4486 */ 'E', 'X', 'T', 'S', 'W', '_', '3', '2', '_', '6', '4', 'o', 0,
  /* 4499 */ 'A', 'D', 'D', '4', 'o', 0,
  /* 4505 */ 'E', 'X', 'T', 'S', 'B', '8', 'o', 0,
  /* 4513 */ 'A', 'D', 'D', 'C', '8', 'o', 0,
  /* 4520 */ 'A', 'N', 'D', 'C', '8', 'o', 0,
  /* 4527 */ 'S', 'U', 'B', 'F', 'C', '8', 'o', 0,
  /* 4535 */ 'O', 'R', 'C', '8', 'o', 0,
  /* 4541 */ 'A', 'D', 'D', '8', 'o', 0,
  /* 4547 */ 'N', 'A', 'N', 'D', '8', 'o', 0,
  /* 4554 */ 'A', 'D', 'D', 'E', '8', 'o', 0,
  /* 4561 */ 'S', 'U', 'B', 'F', 'E', '8', 'o', 0,
  /* 4569 */ 'A', 'D', 'D', 'M', 'E', '8', 'o', 0,
  /* 4577 */ 'S', 'U', 'B', 'F', 'M', 'E', '8', 'o', 0,
  /* 4586 */ 'A', 'D', 'D', 'Z', 'E', '8', 'o', 0,
  /* 4594 */ 'S', 'U', 'B', 'F', 'Z', 'E', '8', 'o', 0,
  /* 4603 */ 'S', 'U', 'B', 'F', '8', 'o', 0,
  /* 4610 */ 'N', 'E', 'G', '8', 'o', 0,
  /* 4616 */ 'E', 'X', 'T', 'S', 'H', '8', 'o', 0,
  /* 4624 */ 'R', 'L', 'W', 'I', 'N', 'M', '8', 'o', 0,
  /* 4633 */ 'N', 'O', 'R', '8', 'o', 0,
  /* 4639 */ 'X', 'O', 'R', '8', 'o', 0,
  /* 4645 */ 'E', 'Q', 'V', '8', 'o', 0,
  /* 4651 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'B', 'o', 0,
  /* 4661 */ 'E', 'X', 'T', 'S', 'B', 'o', 0,
  /* 4668 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'B', 'o', 0,
  /* 4678 */ 'F', 'S', 'U', 'B', 'o', 0,
  /* 4684 */ 'F', 'M', 'S', 'U', 'B', 'o', 0,
  /* 4691 */ 'F', 'N', 'M', 'S', 'U', 'B', 'o', 0,
  /* 4699 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'B', 'o', 0,
  /* 4709 */ 'A', 'D', 'D', 'C', 'o', 0,
  /* 4715 */ 'A', 'N', 'D', 'C', 'o', 0,
  /* 4721 */ 'S', 'U', 'B', 'F', 'C', 'o', 0,
  /* 4728 */ 'A', 'D', 'D', 'I', 'C', 'o', 0,
  /* 4735 */ 'O', 'R', 'C', 'o', 0,
  /* 4740 */ 'S', 'R', 'A', 'D', 'o', 0,
  /* 4746 */ 'F', 'A', 'D', 'D', 'o', 0,
  /* 4752 */ 'F', 'M', 'A', 'D', 'D', 'o', 0,
  /* 4759 */ 'F', 'N', 'M', 'A', 'D', 'D', 'o', 0,
  /* 4767 */ 'F', 'N', 'E', 'G', 'D', 'o', 0,
  /* 4774 */ 'M', 'U', 'L', 'H', 'D', 'o', 0,
  /* 4781 */ 'F', 'C', 'F', 'I', 'D', 'o', 0,
  /* 4788 */ 'F', 'S', 'E', 'L', 'D', 'o', 0,
  /* 4795 */ 'M', 'U', 'L', 'L', 'D', 'o', 0,
  /* 4802 */ 'S', 'L', 'D', 'o', 0,
  /* 4807 */ 'F', 'R', 'I', 'M', 'D', 'o', 0,
  /* 4814 */ 'N', 'A', 'N', 'D', 'o', 0,
  /* 4820 */ 'F', 'R', 'I', 'N', 'D', 'o', 0,
  /* 4827 */ 'F', 'R', 'I', 'P', 'D', 'o', 0,
  /* 4834 */ 'S', 'R', 'D', 'o', 0,
  /* 4839 */ 'F', 'A', 'B', 'S', 'D', 'o', 0,
  /* 4846 */ 'F', 'N', 'A', 'B', 'S', 'D', 'o', 0,
  /* 4854 */ 'P', 'O', 'P', 'C', 'N', 'T', 'D', 'o', 0,
  /* 4863 */ 'D', 'I', 'V', 'D', 'o', 0,
  /* 4869 */ 'F', 'R', 'I', 'Z', 'D', 'o', 0,
  /* 4876 */ 'C', 'N', 'T', 'L', 'Z', 'D', 'o', 0,
  /* 4884 */ 'A', 'D', 'D', 'E', 'o', 0,
  /* 4890 */ 'S', 'U', 'B', 'F', 'E', 'o', 0,
  /* 4897 */ 'A', 'D', 'D', 'M', 'E', 'o', 0,
  /* 4904 */ 'S', 'U', 'B', 'F', 'M', 'E', 'o', 0,
  /* 4912 */ 'F', 'R', 'E', 'o', 0,
  /* 4917 */ 'F', 'R', 'S', 'Q', 'R', 'T', 'E', 'o', 0,
  /* 4926 */ 'A', 'D', 'D', 'Z', 'E', 'o', 0,
  /* 4933 */ 'S', 'U', 'B', 'F', 'Z', 'E', 'o', 0,
  /* 4941 */ 'S', 'U', 'B', 'F', 'o', 0,
  /* 4947 */ 'N', 'E', 'G', 'o', 0,
  /* 4952 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'H', 'o', 0,
  /* 4962 */ 'E', 'X', 'T', 'S', 'H', 'o', 0,
  /* 4969 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'H', 'o', 0,
  /* 4979 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'H', 'o', 0,
  /* 4989 */ 'S', 'R', 'A', 'D', 'I', 'o', 0,
  /* 4996 */ 'A', 'N', 'D', 'I', 'o', 0,
  /* 5002 */ 'R', 'L', 'D', 'I', 'M', 'I', 'o', 0,
  /* 5010 */ 'R', 'L', 'W', 'I', 'M', 'I', 'o', 0,
  /* 5018 */ 'S', 'R', 'A', 'W', 'I', 'o', 0,
  /* 5025 */ 'R', 'L', 'D', 'C', 'L', 'o', 0,
  /* 5032 */ 'R', 'L', 'D', 'I', 'C', 'L', 'o', 0,
  /* 5040 */ 'F', 'M', 'U', 'L', 'o', 0,
  /* 5046 */ 'R', 'L', 'W', 'I', 'N', 'M', 'o', 0,
  /* 5054 */ 'R', 'L', 'W', 'N', 'M', 'o', 0,
  /* 5061 */ 'V', 'C', 'M', 'P', 'B', 'F', 'P', 'o', 0,
  /* 5070 */ 'V', 'C', 'M', 'P', 'G', 'E', 'F', 'P', 'o', 0,
  /* 5080 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'F', 'P', 'o', 0,
  /* 5090 */ 'V', 'C', 'M', 'P', 'G', 'T', 'F', 'P', 'o', 0,
  /* 5100 */ 'F', 'R', 'S', 'P', 'o', 0,
  /* 5106 */ 'R', 'L', 'D', 'I', 'C', 'R', 'o', 0,
  /* 5114 */ 'F', 'M', 'R', 'o', 0,
  /* 5119 */ 'N', 'O', 'R', 'o', 0,
  /* 5124 */ 'X', 'O', 'R', 'o', 0,
  /* 5129 */ 'F', 'S', 'U', 'B', 'S', 'o', 0,
  /* 5136 */ 'F', 'M', 'S', 'U', 'B', 'S', 'o', 0,
  /* 5144 */ 'F', 'N', 'M', 'S', 'U', 'B', 'S', 'o', 0,
  /* 5153 */ 'F', 'A', 'D', 'D', 'S', 'o', 0,
  /* 5160 */ 'F', 'M', 'A', 'D', 'D', 'S', 'o', 0,
  /* 5168 */ 'F', 'N', 'M', 'A', 'D', 'D', 'S', 'o', 0,
  /* 5177 */ 'F', 'C', 'F', 'I', 'D', 'S', 'o', 0,
  /* 5185 */ 'F', 'R', 'E', 'S', 'o', 0,
  /* 5191 */ 'F', 'R', 'S', 'Q', 'R', 'T', 'E', 'S', 'o', 0,
  /* 5201 */ 'F', 'N', 'E', 'G', 'S', 'o', 0,
  /* 5208 */ 'A', 'N', 'D', 'I', 'S', 'o', 0,
  /* 5215 */ 'F', 'S', 'E', 'L', 'S', 'o', 0,
  /* 5222 */ 'F', 'M', 'U', 'L', 'S', 'o', 0,
  /* 5229 */ 'F', 'R', 'I', 'M', 'S', 'o', 0,
  /* 5236 */ 'F', 'R', 'I', 'N', 'S', 'o', 0,
  /* 5243 */ 'F', 'R', 'I', 'P', 'S', 'o', 0,
  /* 5250 */ 'F', 'A', 'B', 'S', 'S', 'o', 0,
  /* 5257 */ 'F', 'N', 'A', 'B', 'S', 'S', 'o', 0,
  /* 5265 */ 'F', 'S', 'Q', 'R', 'T', 'S', 'o', 0,
  /* 5273 */ 'F', 'C', 'F', 'I', 'D', 'U', 'S', 'o', 0,
  /* 5282 */ 'F', 'D', 'I', 'V', 'S', 'o', 0,
  /* 5289 */ 'F', 'R', 'I', 'Z', 'S', 'o', 0,
  /* 5296 */ 'F', 'S', 'Q', 'R', 'T', 'o', 0,
  /* 5303 */ 'M', 'U', 'L', 'H', 'D', 'U', 'o', 0,
  /* 5311 */ 'F', 'C', 'F', 'I', 'D', 'U', 'o', 0,
  /* 5319 */ 'D', 'I', 'V', 'D', 'U', 'o', 0,
  /* 5326 */ 'M', 'U', 'L', 'H', 'W', 'U', 'o', 0,
  /* 5334 */ 'D', 'I', 'V', 'W', 'U', 'o', 0,
  /* 5341 */ 'F', 'D', 'I', 'V', 'o', 0,
  /* 5347 */ 'E', 'Q', 'V', 'o', 0,
  /* 5352 */ 'S', 'R', 'A', 'W', 'o', 0,
  /* 5358 */ 'M', 'U', 'L', 'H', 'W', 'o', 0,
  /* 5365 */ 'M', 'U', 'L', 'L', 'W', 'o', 0,
  /* 5372 */ 'S', 'L', 'W', 'o', 0,
  /* 5377 */ 'S', 'R', 'W', 'o', 0,
  /* 5382 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'W', 'o', 0,
  /* 5392 */ 'E', 'X', 'T', 'S', 'W', 'o', 0,
  /* 5399 */ 'P', 'O', 'P', 'C', 'N', 'T', 'W', 'o', 0,
  /* 5408 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'W', 'o', 0,
  /* 5418 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'W', 'o', 0,
  /* 5428 */ 'D', 'I', 'V', 'W', 'o', 0,
  /* 5434 */ 'C', 'N', 'T', 'L', 'Z', 'W', 'o', 0,
  /* 5442 */ 'F', 'C', 'T', 'I', 'D', 'Z', 'o', 0,
  /* 5450 */ 'F', 'C', 'T', 'I', 'D', 'U', 'Z', 'o', 0,
  /* 5459 */ 'F', 'C', 'T', 'I', 'W', 'U', 'Z', 'o', 0,
  /* 5468 */ 'F', 'C', 'T', 'I', 'W', 'Z', 'o', 0,
  /* 5476 */ 'E', 'H', '_', 'S', 'j', 'L', 'j', '_', 'S', 'e', 't', 'u', 'p', 0,
  /* 5490 */ 'B', 'C', 'L', 'a', 'l', 'w', 'a', 'y', 's', 0,
  /* 5500 */ 'F', 'R', 'I', 'N', 'D', 'r', 'i', 'n', 't', 0,
  /* 5510 */ 'F', 'R', 'I', 'N', 'S', 'r', 'i', 'n', 't', 0,
  /* 5520 */ 'M', 'F', 'V', 'R', 'S', 'A', 'V', 'E', 'v', 0,
  /* 5530 */ 'M', 'T', 'V', 'R', 'S', 'A', 'V', 'E', 'v', 0,
  /* 5540 */ 'F', 'A', 'D', 'D', 'r', 't', 'z', 0,
};

extern const unsigned PPCInstrNameIndices[] = {
    2402U, 2750U, 2501U, 2514U, 2492U, 2540U, 2137U, 2152U, 
    2096U, 2166U, 3434U, 2003U, 1947U, 4334U, 1971U, 3657U, 
    1863U, 479U, 4499U, 758U, 3402U, 4541U, 1687U, 709U, 
    4513U, 4709U, 1960U, 769U, 4554U, 4884U, 2374U, 855U, 
    1704U, 728U, 4728U, 3380U, 1151U, 1459U, 1443U, 1417U, 
    1430U, 1406U, 2635U, 2601U, 2612U, 2592U, 1978U, 782U, 
    4569U, 4897U, 2073U, 797U, 4586U, 4926U, 2798U, 2971U, 
    1854U, 764U, 4548U, 1693U, 715U, 4520U, 4715U, 5208U, 
    1382U, 4996U, 1375U, 4815U, 607U, 152U, 343U, 976U, 
    530U, 75U, 266U, 903U, 571U, 116U, 307U, 942U, 
    550U, 95U, 286U, 922U, 647U, 192U, 383U, 1014U, 
    510U, 55U, 246U, 871U, 627U, 172U, 363U, 995U, 
    591U, 136U, 327U, 961U, 1485U, 1683U, 3136U, 1130U, 
    2551U, 1049U, 3060U, 5490U, 3131U, 1124U, 2545U, 1042U, 
    4369U, 1328U, 3081U, 1090U, 4348U, 1318U, 3075U, 1083U, 
    2476U, 1032U, 2958U, 1789U, 1833U, 1473U, 679U, 2949U, 
    3056U, 1888U, 2391U, 1827U, 2379U, 3855U, 2453U, 3871U, 
    2465U, 1940U, 4876U, 4005U, 5434U, 3618U, 3625U, 3817U, 
    3108U, 3642U, 3634U, 1390U, 2086U, 2358U, 3678U, 3613U, 
    3688U, 4339U, 2579U, 1929U, 3757U, 5319U, 4863U, 4000U, 
    3791U, 5334U, 5428U, 3464U, 2533U, 3684U, 402U, 3695U, 
    408U, 3706U, 423U, 3701U, 416U, 1723U, 743U, 211U, 
    444U, 229U, 462U, 5476U, 3819U, 1212U, 4645U, 5347U, 
    1586U, 691U, 4505U, 4661U, 2279U, 843U, 4616U, 4962U, 
    3913U, 432U, 4486U, 5392U, 1897U, 4839U, 3451U, 5250U, 
    1756U, 3225U, 5153U, 4746U, 5540U, 1809U, 3246U, 5177U, 
    3741U, 3491U, 5273U, 5311U, 4781U, 1922U, 3515U, 4374U, 
    5450U, 4352U, 5442U, 4382U, 5459U, 4390U, 5468U, 3812U, 
    3538U, 5282U, 5341U, 1761U, 3231U, 5160U, 4752U, 3099U, 
    5114U, 1654U, 3210U, 5136U, 4684U, 2563U, 3410U, 5222U, 
    5040U, 1903U, 4846U, 3457U, 5257U, 1783U, 4767U, 3294U, 
    5201U, 1767U, 3238U, 5168U, 4759U, 1660U, 3217U, 5144U, 
    4691U, 1991U, 3266U, 5185U, 4912U, 1847U, 4807U, 3416U, 
    5229U, 1876U, 4820U, 5500U, 3422U, 5236U, 5510U, 1882U, 
    4827U, 3428U, 5243U, 1934U, 4869U, 3607U, 5289U, 2966U, 
    5100U, 1995U, 3271U, 5191U, 4917U, 1815U, 4788U, 3396U, 
    5215U, 3672U, 3484U, 5265U, 5296U, 1649U, 3204U, 5129U, 
    4678U, 3045U, 3032U, 2363U, 2523U, 1036U, 1717U, 1474U, 
    4344U, 1313U, 3797U, 1194U, 4260U, 1268U, 4312U, 1295U, 
    1818U, 4119U, 4131U, 3748U, 4218U, 4070U, 2623U, 4407U, 
    4401U, 3648U, 2438U, 2585U, 4439U, 1774U, 3723U, 4205U, 
    4059U, 4017U, 4322U, 3285U, 3768U, 4241U, 4176U, 1402U, 
    674U, 3713U, 1170U, 4187U, 1240U, 4012U, 1222U, 4144U, 
    4359U, 1323U, 3802U, 1200U, 4266U, 1275U, 4317U, 1301U, 
    2409U, 861U, 3386U, 1158U, 4029U, 4079U, 4287U, 2558U, 
    3122U, 4278U, 2568U, 1477U, 4125U, 4193U, 4024U, 4157U, 
    4397U, 1334U, 3807U, 1206U, 4272U, 1282U, 4329U, 1307U, 
    2109U, 2986U, 1065U, 4418U, 4429U, 3142U, 1137U, 3280U, 
    3065U, 1071U, 2114U, 698U, 2013U, 5520U, 2998U, 2121U, 
    818U, 3148U, 1144U, 0U, 48U, 2127U, 3070U, 1077U, 
    2022U, 5530U, 3005U, 1803U, 3734U, 5303U, 4774U, 3836U, 
    3779U, 5326U, 5358U, 1821U, 4795U, 2406U, 3849U, 5365U, 
    3088U, 1098U, 1853U, 763U, 4547U, 4814U, 2133U, 838U, 
    4610U, 4947U, 2954U, 3104U, 1110U, 4633U, 5119U, 3105U, 
    1111U, 4634U, 1732U, 753U, 4535U, 4735U, 2434U, 866U, 
    3391U, 1164U, 5120U, 1910U, 4854U, 3933U, 5399U, 3012U, 
    2031U, 2479U, 5025U, 2485U, 5032U, 2991U, 5106U, 2412U, 
    5002U, 2419U, 5010U, 2731U, 1057U, 4624U, 5046U, 2738U, 
    5054U, 484U, 825U, 497U, 890U, 1736U, 1843U, 2386U, 
    4802U, 3867U, 2460U, 5372U, 3023U, 2060U, 1751U, 2368U, 
    4989U, 4740U, 3824U, 2447U, 5018U, 5352U, 1893U, 2397U, 
    4834U, 3877U, 2471U, 5377U, 1606U, 704U, 3718U, 1176U, 
    4199U, 1247U, 4042U, 1228U, 1918U, 4137U, 4047U, 3752U, 
    4223U, 4074U, 1778U, 3728U, 4211U, 4064U, 4300U, 3289U, 
    3773U, 4247U, 4181U, 2299U, 850U, 4150U, 3763U, 1182U, 
    4235U, 1254U, 4092U, 1234U, 4035U, 4085U, 4293U, 4282U, 
    2573U, 3941U, 1217U, 4163U, 4053U, 3786U, 1188U, 4254U, 
    1261U, 4307U, 1289U, 2091U, 812U, 4603U, 1698U, 721U, 
    4527U, 4721U, 1965U, 775U, 4561U, 4890U, 1710U, 735U, 
    1984U, 789U, 4577U, 4904U, 2079U, 804U, 4594U, 4933U, 
    4941U, 1718U, 1501U, 684U, 1395U, 666U, 3127U, 1120U, 
    4453U, 1339U, 4464U, 1351U, 4475U, 1363U, 2825U, 2046U, 
    3953U, 2862U, 3171U, 3338U, 3561U, 2664U, 3196U, 2708U, 
    3363U, 2784U, 3585U, 1858U, 1692U, 1530U, 2223U, 3881U, 
    1618U, 2311U, 3961U, 4170U, 32U, 4229U, 40U, 2830U, 
    5061U, 2918U, 5080U, 1640U, 4668U, 2333U, 4969U, 3975U, 
    5408U, 2877U, 5070U, 2927U, 5090U, 1577U, 4651U, 2270U, 
    4952U, 3904U, 5382U, 1667U, 4699U, 2342U, 4979U, 3984U, 
    5418U, 3593U, 14U, 3600U, 23U, 2892U, 2869U, 2854U, 
    2936U, 1592U, 2285U, 3919U, 1676U, 2351U, 3993U, 3317U, 
    3327U, 2911U, 1562U, 2255U, 3897U, 1625U, 2318U, 3968U, 
    2698U, 1487U, 2186U, 3829U, 1494U, 2193U, 3842U, 2647U, 
    2681U, 3346U, 2672U, 2716U, 3371U, 1522U, 2215U, 1610U, 
    2303U, 1569U, 2262U, 1632U, 2325U, 2838U, 3103U, 3113U, 
    2744U, 4105U, 3468U, 3499U, 3476U, 3522U, 2760U, 3507U, 
    2768U, 3530U, 2886U, 2725U, 2792U, 2943U, 4363U, 1507U, 
    2200U, 3861U, 2901U, 2528U, 2559U, 1512U, 2426U, 2205U, 
    2815U, 3866U, 1599U, 2292U, 1545U, 2238U, 3888U, 3926U, 
    3123U, 1481U, 2180U, 3823U, 1517U, 2210U, 2820U, 3876U, 
    3945U, 2847U, 3163U, 3309U, 3553U, 2656U, 3188U, 2690U, 
    3355U, 2776U, 3577U, 3544U, 3154U, 3300U, 3179U, 3569U, 
    4097U, 1537U, 2230U, 4111U, 1554U, 2247U, 3117U, 7U, 
    3253U, 3118U, 1115U, 4639U, 2433U, 865U, 3390U, 1163U, 
    5124U, 
};

static inline void InitPPCMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(PPCInsts, PPCInstrNameIndices, PPCInstrNameData, 745);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct PPCGenInstrInfo : public TargetInstrInfo {
  explicit PPCGenInstrInfo(int SO = -1, int DO = -1);
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR
#undef GET_INSTRINFO_CTOR
namespace llvm {
extern const MCInstrDesc PPCInsts[];
extern const unsigned PPCInstrNameIndices[];
extern const char PPCInstrNameData[];
PPCGenInstrInfo::PPCGenInstrInfo(int SO, int DO)
  : TargetInstrInfo(SO, DO) {
  InitMCInstrInfo(PPCInsts, PPCInstrNameIndices, PPCInstrNameData, 745);
}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR

#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace PPC {

enum RC {
	RC_0,
	RC_1
};

// getNonRecordFormOpcode
int getNonRecordFormOpcode(uint16_t Opcode) {
static const uint16_t getNonRecordFormOpcodeTable[][2] = {
  { PPC::ADD4o, PPC::ADD4 },
  { PPC::ADD8o, PPC::ADD8 },
  { PPC::ADDC8o, PPC::ADDC8 },
  { PPC::ADDCo, PPC::ADDC },
  { PPC::ADDE8o, PPC::ADDE8 },
  { PPC::ADDEo, PPC::ADDE },
  { PPC::ADDICo, PPC::ADDIC },
  { PPC::ADDME8o, PPC::ADDME8 },
  { PPC::ADDMEo, PPC::ADDME },
  { PPC::ADDZE8o, PPC::ADDZE8 },
  { PPC::ADDZEo, PPC::ADDZE },
  { PPC::AND8o, PPC::AND8 },
  { PPC::ANDC8o, PPC::ANDC8 },
  { PPC::ANDCo, PPC::ANDC },
  { PPC::ANDo, PPC::AND },
  { PPC::CNTLZDo, PPC::CNTLZD },
  { PPC::CNTLZWo, PPC::CNTLZW },
  { PPC::DIVDUo, PPC::DIVDU },
  { PPC::DIVDo, PPC::DIVD },
  { PPC::DIVWUo, PPC::DIVWU },
  { PPC::DIVWo, PPC::DIVW },
  { PPC::EQV8o, PPC::EQV8 },
  { PPC::EQVo, PPC::EQV },
  { PPC::EXTSB8o, PPC::EXTSB8 },
  { PPC::EXTSBo, PPC::EXTSB },
  { PPC::EXTSH8o, PPC::EXTSH8 },
  { PPC::EXTSHo, PPC::EXTSH },
  { PPC::EXTSW_32_64o, PPC::EXTSW_32_64 },
  { PPC::EXTSWo, PPC::EXTSW },
  { PPC::FABSDo, PPC::FABSD },
  { PPC::FABSSo, PPC::FABSS },
  { PPC::FADDSo, PPC::FADDS },
  { PPC::FADDo, PPC::FADD },
  { PPC::FCFIDSo, PPC::FCFIDS },
  { PPC::FCFIDUSo, PPC::FCFIDUS },
  { PPC::FCFIDUo, PPC::FCFIDU },
  { PPC::FCFIDo, PPC::FCFID },
  { PPC::FCTIDUZo, PPC::FCTIDUZ },
  { PPC::FCTIDZo, PPC::FCTIDZ },
  { PPC::FCTIWUZo, PPC::FCTIWUZ },
  { PPC::FCTIWZo, PPC::FCTIWZ },
  { PPC::FDIVSo, PPC::FDIVS },
  { PPC::FDIVo, PPC::FDIV },
  { PPC::FMADDSo, PPC::FMADDS },
  { PPC::FMADDo, PPC::FMADD },
  { PPC::FMRo, PPC::FMR },
  { PPC::FMSUBSo, PPC::FMSUBS },
  { PPC::FMSUBo, PPC::FMSUB },
  { PPC::FMULSo, PPC::FMULS },
  { PPC::FMULo, PPC::FMUL },
  { PPC::FNABSDo, PPC::FNABSD },
  { PPC::FNABSSo, PPC::FNABSS },
  { PPC::FNEGDo, PPC::FNEGD },
  { PPC::FNEGSo, PPC::FNEGS },
  { PPC::FNMADDSo, PPC::FNMADDS },
  { PPC::FNMADDo, PPC::FNMADD },
  { PPC::FNMSUBSo, PPC::FNMSUBS },
  { PPC::FNMSUBo, PPC::FNMSUB },
  { PPC::FRESo, PPC::FRES },
  { PPC::FREo, PPC::FRE },
  { PPC::FRIMDo, PPC::FRIMD },
  { PPC::FRIMSo, PPC::FRIMS },
  { PPC::FRINDo, PPC::FRIND },
  { PPC::FRINSo, PPC::FRINS },
  { PPC::FRIPDo, PPC::FRIPD },
  { PPC::FRIPSo, PPC::FRIPS },
  { PPC::FRIZDo, PPC::FRIZD },
  { PPC::FRIZSo, PPC::FRIZS },
  { PPC::FRSPo, PPC::FRSP },
  { PPC::FRSQRTESo, PPC::FRSQRTES },
  { PPC::FRSQRTEo, PPC::FRSQRTE },
  { PPC::FSELDo, PPC::FSELD },
  { PPC::FSELSo, PPC::FSELS },
  { PPC::FSQRTSo, PPC::FSQRTS },
  { PPC::FSQRTo, PPC::FSQRT },
  { PPC::FSUBSo, PPC::FSUBS },
  { PPC::FSUBo, PPC::FSUB },
  { PPC::MULHDUo, PPC::MULHDU },
  { PPC::MULHDo, PPC::MULHD },
  { PPC::MULHWUo, PPC::MULHWU },
  { PPC::MULHWo, PPC::MULHW },
  { PPC::MULLDo, PPC::MULLD },
  { PPC::MULLWo, PPC::MULLW },
  { PPC::NAND8o, PPC::NAND8 },
  { PPC::NANDo, PPC::NAND },
  { PPC::NEG8o, PPC::NEG8 },
  { PPC::NEGo, PPC::NEG },
  { PPC::NOR8o, PPC::NOR8 },
  { PPC::NORo, PPC::NOR },
  { PPC::OR8o, PPC::OR8 },
  { PPC::ORC8o, PPC::ORC8 },
  { PPC::ORCo, PPC::ORC },
  { PPC::ORo, PPC::OR },
  { PPC::POPCNTDo, PPC::POPCNTD },
  { PPC::POPCNTWo, PPC::POPCNTW },
  { PPC::RLDCLo, PPC::RLDCL },
  { PPC::RLDICLo, PPC::RLDICL },
  { PPC::RLDICRo, PPC::RLDICR },
  { PPC::RLDIMIo, PPC::RLDIMI },
  { PPC::RLWIMIo, PPC::RLWIMI },
  { PPC::RLWINM8o, PPC::RLWINM8 },
  { PPC::RLWINMo, PPC::RLWINM },
  { PPC::RLWNMo, PPC::RLWNM },
  { PPC::SLDo, PPC::SLD },
  { PPC::SLWo, PPC::SLW },
  { PPC::SRADIo, PPC::SRADI },
  { PPC::SRADo, PPC::SRAD },
  { PPC::SRAWIo, PPC::SRAWI },
  { PPC::SRAWo, PPC::SRAW },
  { PPC::SRDo, PPC::SRD },
  { PPC::SRWo, PPC::SRW },
  { PPC::SUBF8o, PPC::SUBF8 },
  { PPC::SUBFC8o, PPC::SUBFC8 },
  { PPC::SUBFCo, PPC::SUBFC },
  { PPC::SUBFE8o, PPC::SUBFE8 },
  { PPC::SUBFEo, PPC::SUBFE },
  { PPC::SUBFME8o, PPC::SUBFME8 },
  { PPC::SUBFMEo, PPC::SUBFME },
  { PPC::SUBFZE8o, PPC::SUBFZE8 },
  { PPC::SUBFZEo, PPC::SUBFZE },
  { PPC::SUBFo, PPC::SUBF },
  { PPC::XOR8o, PPC::XOR8 },
  { PPC::XORo, PPC::XOR },
}; // End of getNonRecordFormOpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 123;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getNonRecordFormOpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getNonRecordFormOpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getNonRecordFormOpcodeTable[mid][1];
}

// getRecordFormOpcode
int getRecordFormOpcode(uint16_t Opcode) {
static const uint16_t getRecordFormOpcodeTable[][2] = {
  { PPC::ADD4, PPC::ADD4o },
  { PPC::ADD8, PPC::ADD8o },
  { PPC::ADDC, PPC::ADDCo },
  { PPC::ADDC8, PPC::ADDC8o },
  { PPC::ADDE, PPC::ADDEo },
  { PPC::ADDE8, PPC::ADDE8o },
  { PPC::ADDIC, PPC::ADDICo },
  { PPC::ADDME, PPC::ADDMEo },
  { PPC::ADDME8, PPC::ADDME8o },
  { PPC::ADDZE, PPC::ADDZEo },
  { PPC::ADDZE8, PPC::ADDZE8o },
  { PPC::AND, PPC::ANDo },
  { PPC::AND8, PPC::AND8o },
  { PPC::ANDC, PPC::ANDCo },
  { PPC::ANDC8, PPC::ANDC8o },
  { PPC::CNTLZD, PPC::CNTLZDo },
  { PPC::CNTLZW, PPC::CNTLZWo },
  { PPC::DIVD, PPC::DIVDo },
  { PPC::DIVDU, PPC::DIVDUo },
  { PPC::DIVW, PPC::DIVWo },
  { PPC::DIVWU, PPC::DIVWUo },
  { PPC::EQV, PPC::EQVo },
  { PPC::EQV8, PPC::EQV8o },
  { PPC::EXTSB, PPC::EXTSBo },
  { PPC::EXTSB8, PPC::EXTSB8o },
  { PPC::EXTSH, PPC::EXTSHo },
  { PPC::EXTSH8, PPC::EXTSH8o },
  { PPC::EXTSW, PPC::EXTSWo },
  { PPC::EXTSW_32_64, PPC::EXTSW_32_64o },
  { PPC::FABSD, PPC::FABSDo },
  { PPC::FABSS, PPC::FABSSo },
  { PPC::FADD, PPC::FADDo },
  { PPC::FADDS, PPC::FADDSo },
  { PPC::FCFID, PPC::FCFIDo },
  { PPC::FCFIDS, PPC::FCFIDSo },
  { PPC::FCFIDU, PPC::FCFIDUo },
  { PPC::FCFIDUS, PPC::FCFIDUSo },
  { PPC::FCTIDUZ, PPC::FCTIDUZo },
  { PPC::FCTIDZ, PPC::FCTIDZo },
  { PPC::FCTIWUZ, PPC::FCTIWUZo },
  { PPC::FCTIWZ, PPC::FCTIWZo },
  { PPC::FDIV, PPC::FDIVo },
  { PPC::FDIVS, PPC::FDIVSo },
  { PPC::FMADD, PPC::FMADDo },
  { PPC::FMADDS, PPC::FMADDSo },
  { PPC::FMR, PPC::FMRo },
  { PPC::FMSUB, PPC::FMSUBo },
  { PPC::FMSUBS, PPC::FMSUBSo },
  { PPC::FMUL, PPC::FMULo },
  { PPC::FMULS, PPC::FMULSo },
  { PPC::FNABSD, PPC::FNABSDo },
  { PPC::FNABSS, PPC::FNABSSo },
  { PPC::FNEGD, PPC::FNEGDo },
  { PPC::FNEGS, PPC::FNEGSo },
  { PPC::FNMADD, PPC::FNMADDo },
  { PPC::FNMADDS, PPC::FNMADDSo },
  { PPC::FNMSUB, PPC::FNMSUBo },
  { PPC::FNMSUBS, PPC::FNMSUBSo },
  { PPC::FRE, PPC::FREo },
  { PPC::FRES, PPC::FRESo },
  { PPC::FRIMD, PPC::FRIMDo },
  { PPC::FRIMS, PPC::FRIMSo },
  { PPC::FRIND, PPC::FRINDo },
  { PPC::FRINS, PPC::FRINSo },
  { PPC::FRIPD, PPC::FRIPDo },
  { PPC::FRIPS, PPC::FRIPSo },
  { PPC::FRIZD, PPC::FRIZDo },
  { PPC::FRIZS, PPC::FRIZSo },
  { PPC::FRSP, PPC::FRSPo },
  { PPC::FRSQRTE, PPC::FRSQRTEo },
  { PPC::FRSQRTES, PPC::FRSQRTESo },
  { PPC::FSELD, PPC::FSELDo },
  { PPC::FSELS, PPC::FSELSo },
  { PPC::FSQRT, PPC::FSQRTo },
  { PPC::FSQRTS, PPC::FSQRTSo },
  { PPC::FSUB, PPC::FSUBo },
  { PPC::FSUBS, PPC::FSUBSo },
  { PPC::MULHD, PPC::MULHDo },
  { PPC::MULHDU, PPC::MULHDUo },
  { PPC::MULHW, PPC::MULHWo },
  { PPC::MULHWU, PPC::MULHWUo },
  { PPC::MULLD, PPC::MULLDo },
  { PPC::MULLW, PPC::MULLWo },
  { PPC::NAND, PPC::NANDo },
  { PPC::NAND8, PPC::NAND8o },
  { PPC::NEG, PPC::NEGo },
  { PPC::NEG8, PPC::NEG8o },
  { PPC::NOR, PPC::NORo },
  { PPC::NOR8, PPC::NOR8o },
  { PPC::OR, PPC::ORo },
  { PPC::OR8, PPC::OR8o },
  { PPC::ORC, PPC::ORCo },
  { PPC::ORC8, PPC::ORC8o },
  { PPC::POPCNTD, PPC::POPCNTDo },
  { PPC::POPCNTW, PPC::POPCNTWo },
  { PPC::RLDCL, PPC::RLDCLo },
  { PPC::RLDICL, PPC::RLDICLo },
  { PPC::RLDICR, PPC::RLDICRo },
  { PPC::RLDIMI, PPC::RLDIMIo },
  { PPC::RLWIMI, PPC::RLWIMIo },
  { PPC::RLWINM, PPC::RLWINMo },
  { PPC::RLWINM8, PPC::RLWINM8o },
  { PPC::RLWNM, PPC::RLWNMo },
  { PPC::SLD, PPC::SLDo },
  { PPC::SLW, PPC::SLWo },
  { PPC::SRAD, PPC::SRADo },
  { PPC::SRADI, PPC::SRADIo },
  { PPC::SRAW, PPC::SRAWo },
  { PPC::SRAWI, PPC::SRAWIo },
  { PPC::SRD, PPC::SRDo },
  { PPC::SRW, PPC::SRWo },
  { PPC::SUBF, PPC::SUBFo },
  { PPC::SUBF8, PPC::SUBF8o },
  { PPC::SUBFC, PPC::SUBFCo },
  { PPC::SUBFC8, PPC::SUBFC8o },
  { PPC::SUBFE, PPC::SUBFEo },
  { PPC::SUBFE8, PPC::SUBFE8o },
  { PPC::SUBFME, PPC::SUBFMEo },
  { PPC::SUBFME8, PPC::SUBFME8o },
  { PPC::SUBFZE, PPC::SUBFZEo },
  { PPC::SUBFZE8, PPC::SUBFZE8o },
  { PPC::XOR, PPC::XORo },
  { PPC::XOR8, PPC::XOR8o },
}; // End of getRecordFormOpcodeTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 123;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getRecordFormOpcodeTable[mid][0]) {
      break;
    }
    if (Opcode < getRecordFormOpcodeTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getRecordFormOpcodeTable[mid][1];
}

} // End PPC namespace
} // End llvm namespace
#endif // GET_INSTRMAP_INFO

