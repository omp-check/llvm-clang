/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the Mips target                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// The main instruction selector code.
SDNode *SelectCode(SDNode *N) {
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*0*/     OPC_SwitchOpcode /*125 cases */, 54|128,11/*1462*/,  TARGET_VAL(ISD::LOAD),// ->1467
/*5*/       OPC_RecordMemRef,
/*6*/       OPC_RecordNode,   // #0 = 'ld' chained node
/*7*/       OPC_Scope, 123, /*->132*/ // 5 children in Scope
/*9*/         OPC_RecordChild1, // #1 = $a
/*10*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*12*/        OPC_CheckType, MVT::i32,
/*14*/        OPC_Scope, 19, /*->35*/ // 6 children in Scope
/*16*/          OPC_CheckPredicate, 1, // Predicate_zextload
/*18*/          OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*20*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*22*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*25*/          OPC_EmitMergeInputChains1_0,
/*26*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 53
                // Dst: (LBu:i32 addrRegImm:i32:$a)
/*35*/        /*Scope*/ 19, /*->55*/
/*36*/          OPC_CheckPredicate, 3, // Predicate_sextload
/*38*/          OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*40*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*42*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*45*/          OPC_EmitMergeInputChains1_0,
/*46*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 53
                // Dst: (LH:i32 addrRegImm:i32:$a)
/*55*/        /*Scope*/ 17, /*->73*/
/*56*/          OPC_CheckPredicate, 5, // Predicate_load
/*58*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*60*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*63*/          OPC_EmitMergeInputChains1_0,
/*64*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                // Dst: (LW:i32 addrRegImm:i32:$a)
/*73*/        /*Scope*/ 19, /*->93*/
/*74*/          OPC_CheckPredicate, 1, // Predicate_zextload
/*76*/          OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*78*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*80*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*83*/          OPC_EmitMergeInputChains1_0,
/*84*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 53
                // Dst: (LBu_P8:i32 addrRegImm:i64:$a)
/*93*/        /*Scope*/ 19, /*->113*/
/*94*/          OPC_CheckPredicate, 3, // Predicate_sextload
/*96*/          OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*98*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*100*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*103*/         OPC_EmitMergeInputChains1_0,
/*104*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LH_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 53
                // Dst: (LH_P8:i32 addrRegImm:i64:$a)
/*113*/       /*Scope*/ 17, /*->131*/
/*114*/         OPC_CheckPredicate, 5, // Predicate_load
/*116*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*118*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*121*/         OPC_EmitMergeInputChains1_0,
/*122*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                // Dst: (LW_P8:i32 addrRegImm:i64:$a)
/*131*/       0, /*End of Scope*/
/*132*/     /*Scope*/ 65, /*->198*/
/*133*/       OPC_MoveChild, 1,
/*135*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*138*/       OPC_RecordChild0, // #1 = $base
/*139*/       OPC_RecordChild1, // #2 = $index
/*140*/       OPC_CheckType, MVT::i32,
/*142*/       OPC_MoveParent,
/*143*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*145*/       OPC_CheckType, MVT::i32,
/*147*/       OPC_Scope, 16, /*->165*/ // 3 children in Scope
/*149*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*151*/         OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*153*/         OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*155*/         OPC_EmitMergeInputChains1_0,
/*156*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LBUX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:i32 (add:i32 i32:i32:$base, i32:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 27
                // Dst: (LBUX:i32 i32:i32:$base, i32:i32:$index)
/*165*/       /*Scope*/ 16, /*->182*/
/*166*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*168*/         OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*170*/         OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*172*/         OPC_EmitMergeInputChains1_0,
/*173*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LHX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:i32 (add:i32 i32:i32:$base, i32:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 27
                // Dst: (LHX:i32 i32:i32:$base, i32:i32:$index)
/*182*/       /*Scope*/ 14, /*->197*/
/*183*/         OPC_CheckPredicate, 5, // Predicate_load
/*185*/         OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*187*/         OPC_EmitMergeInputChains1_0,
/*188*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LWX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:i32 (add:i32 i32:i32:$base, i32:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                // Dst: (LWX:i32 i32:i32:$base, i32:i32:$index)
/*197*/       0, /*End of Scope*/
/*198*/     /*Scope*/ 115|128,7/*1011*/, /*->1211*/
/*200*/       OPC_RecordChild1, // #1 = $addr
/*201*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*203*/       OPC_Scope, 22, /*->227*/ // 21 children in Scope
/*205*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*207*/         OPC_CheckPredicate, 6, // Predicate_sextloadi8
/*209*/         OPC_CheckType, MVT::i32,
/*211*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*213*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$addr #2 #3 #4
/*216*/         OPC_EmitMergeInputChains1_0,
/*217*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LbRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                // Dst: (LbRxRyOffMemX16:i32 addr16:i32:$addr)
/*227*/       /*Scope*/ 22, /*->250*/
/*228*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*230*/         OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*232*/         OPC_CheckType, MVT::i32,
/*234*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*236*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$addr #2 #3 #4
/*239*/         OPC_EmitMergeInputChains1_0,
/*240*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LbuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                // Dst: (LbuRxRyOffMemX16:i32 addr16:i32:$addr)
/*250*/       /*Scope*/ 22, /*->273*/
/*251*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*253*/         OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*255*/         OPC_CheckType, MVT::i32,
/*257*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*259*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$addr #2 #3 #4
/*262*/         OPC_EmitMergeInputChains1_0,
/*263*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LhRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                // Dst: (LhRxRyOffMemX16:i32 addr16:i32:$addr)
/*273*/       /*Scope*/ 22, /*->296*/
/*274*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*276*/         OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*278*/         OPC_CheckType, MVT::i32,
/*280*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*282*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$addr #2 #3 #4
/*285*/         OPC_EmitMergeInputChains1_0,
/*286*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LhuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                // Dst: (LhuRxRyOffMemX16:i32 addr16:i32:$addr)
/*296*/       /*Scope*/ 20, /*->317*/
/*297*/         OPC_CheckPredicate, 5, // Predicate_load
/*299*/         OPC_CheckType, MVT::i32,
/*301*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*303*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$addr #2 #3 #4
/*306*/         OPC_EmitMergeInputChains1_0,
/*307*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LwRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                // Dst: (LwRxRyOffMemX16:i32 addr16:i32:$addr)
/*317*/       /*Scope*/ 44, /*->362*/
/*318*/         OPC_CheckPredicate, 8, // Predicate_extload
/*320*/         OPC_CheckType, MVT::i32,
/*322*/         OPC_Scope, 18, /*->342*/ // 2 children in Scope
/*324*/           OPC_CheckPredicate, 9, // Predicate_extloadi8
/*326*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*328*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$src #2 #3 #4
/*331*/           OPC_EmitMergeInputChains1_0,
/*332*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LbuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 addr16:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 16
                  // Dst: (LbuRxRyOffMemX16:i32 addr16:i32:$src)
/*342*/         /*Scope*/ 18, /*->361*/
/*343*/           OPC_CheckPredicate, 10, // Predicate_extloadi16
/*345*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*347*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$src #2 #3 #4
/*350*/           OPC_EmitMergeInputChains1_0,
/*351*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LhuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 addr16:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                  // Dst: (LhuRxRyOffMemX16:i32 addr16:i32:$src)
/*361*/         0, /*End of Scope*/
/*362*/       /*Scope*/ 40, /*->403*/
/*363*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*365*/         OPC_CheckPredicate, 6, // Predicate_sextloadi8
/*367*/         OPC_CheckType, MVT::i32,
/*369*/         OPC_Scope, 15, /*->386*/ // 2 children in Scope
/*371*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*373*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*376*/           OPC_EmitMergeInputChains1_0,
/*377*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB:i32 addr:i32:$addr)
/*386*/         /*Scope*/ 15, /*->402*/
/*387*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*389*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*392*/           OPC_EmitMergeInputChains1_0,
/*393*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB_P8:i32 addr:i64:$addr)
/*402*/         0, /*End of Scope*/
/*403*/       /*Scope*/ 40, /*->444*/
/*404*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*406*/         OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*408*/         OPC_CheckType, MVT::i32,
/*410*/         OPC_Scope, 15, /*->427*/ // 2 children in Scope
/*412*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*414*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*417*/           OPC_EmitMergeInputChains1_0,
/*418*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu:i32 addrDefault:i32:$addr)
/*427*/         /*Scope*/ 15, /*->443*/
/*428*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*430*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*433*/           OPC_EmitMergeInputChains1_0,
/*434*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu_P8:i32 addrDefault:i64:$addr)
/*443*/         0, /*End of Scope*/
/*444*/       /*Scope*/ 40, /*->485*/
/*445*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*447*/         OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*449*/         OPC_CheckType, MVT::i32,
/*451*/         OPC_Scope, 15, /*->468*/ // 2 children in Scope
/*453*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*455*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*458*/           OPC_EmitMergeInputChains1_0,
/*459*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH:i32 addrDefault:i32:$addr)
/*468*/         /*Scope*/ 15, /*->484*/
/*469*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*471*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*474*/           OPC_EmitMergeInputChains1_0,
/*475*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LH_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH_P8:i32 addrDefault:i64:$addr)
/*484*/         0, /*End of Scope*/
/*485*/       /*Scope*/ 40, /*->526*/
/*486*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*488*/         OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*490*/         OPC_CheckType, MVT::i32,
/*492*/         OPC_Scope, 15, /*->509*/ // 2 children in Scope
/*494*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*496*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*499*/           OPC_EmitMergeInputChains1_0,
/*500*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu:i32 addr:i32:$addr)
/*509*/         /*Scope*/ 15, /*->525*/
/*510*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*512*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*515*/           OPC_EmitMergeInputChains1_0,
/*516*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu_P8:i32 addr:i64:$addr)
/*525*/         0, /*End of Scope*/
/*526*/       /*Scope*/ 38, /*->565*/
/*527*/         OPC_CheckPredicate, 5, // Predicate_load
/*529*/         OPC_CheckType, MVT::i32,
/*531*/         OPC_Scope, 15, /*->548*/ // 2 children in Scope
/*533*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*535*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*538*/           OPC_EmitMergeInputChains1_0,
/*539*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LW:i32 addrDefault:i32:$addr)
/*548*/         /*Scope*/ 15, /*->564*/
/*549*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*551*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*554*/           OPC_EmitMergeInputChains1_0,
/*555*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LW_P8:i32 addrDefault:i64:$addr)
/*564*/         0, /*End of Scope*/
/*565*/       /*Scope*/ 114, /*->680*/
/*566*/         OPC_CheckPredicate, 8, // Predicate_extload
/*568*/         OPC_CheckType, MVT::i32,
/*570*/         OPC_Scope, 17, /*->589*/ // 6 children in Scope
/*572*/           OPC_CheckPredicate, 11, // Predicate_extloadi1
/*574*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*576*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*579*/           OPC_EmitMergeInputChains1_0,
/*580*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBu:i32 addr:i32:$src)
/*589*/         /*Scope*/ 17, /*->607*/
/*590*/           OPC_CheckPredicate, 9, // Predicate_extloadi8
/*592*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*594*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*597*/           OPC_EmitMergeInputChains1_0,
/*598*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBu:i32 addr:i32:$src)
/*607*/         /*Scope*/ 17, /*->625*/
/*608*/           OPC_CheckPredicate, 10, // Predicate_extloadi16
/*610*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*612*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*615*/           OPC_EmitMergeInputChains1_0,
/*616*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHu:i32 addr:i32:$src)
/*625*/         /*Scope*/ 17, /*->643*/
/*626*/           OPC_CheckPredicate, 11, // Predicate_extloadi1
/*628*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*630*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*633*/           OPC_EmitMergeInputChains1_0,
/*634*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBu_P8:i32 addr:i64:$src)
/*643*/         /*Scope*/ 17, /*->661*/
/*644*/           OPC_CheckPredicate, 9, // Predicate_extloadi8
/*646*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*648*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*651*/           OPC_EmitMergeInputChains1_0,
/*652*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBu_P8:i32 addr:i64:$src)
/*661*/         /*Scope*/ 17, /*->679*/
/*662*/           OPC_CheckPredicate, 10, // Predicate_extloadi16
/*664*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*666*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*669*/           OPC_EmitMergeInputChains1_0,
/*670*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHu_P8:i32 addr:i64:$src)
/*679*/         0, /*End of Scope*/
/*680*/       /*Scope*/ 40, /*->721*/
/*681*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*683*/         OPC_CheckPredicate, 6, // Predicate_sextloadi8
/*685*/         OPC_CheckType, MVT::i64,
/*687*/         OPC_Scope, 15, /*->704*/ // 2 children in Scope
/*689*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*691*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*694*/           OPC_EmitMergeInputChains1_0,
/*695*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB64:i64 addr:i32:$addr)
/*704*/         /*Scope*/ 15, /*->720*/
/*705*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*707*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*710*/           OPC_EmitMergeInputChains1_0,
/*711*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB64_P8:i64 addr:i64:$addr)
/*720*/         0, /*End of Scope*/
/*721*/       /*Scope*/ 40, /*->762*/
/*722*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*724*/         OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*726*/         OPC_CheckType, MVT::i64,
/*728*/         OPC_Scope, 15, /*->745*/ // 2 children in Scope
/*730*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*732*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*735*/           OPC_EmitMergeInputChains1_0,
/*736*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu64:i64 addr:i32:$addr)
/*745*/         /*Scope*/ 15, /*->761*/
/*746*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*748*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*751*/           OPC_EmitMergeInputChains1_0,
/*752*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu64_P8:i64 addr:i64:$addr)
/*761*/         0, /*End of Scope*/
/*762*/       /*Scope*/ 40, /*->803*/
/*763*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*765*/         OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*767*/         OPC_CheckType, MVT::i64,
/*769*/         OPC_Scope, 15, /*->786*/ // 2 children in Scope
/*771*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*773*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*776*/           OPC_EmitMergeInputChains1_0,
/*777*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LH64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH64:i64 addr:i32:$addr)
/*786*/         /*Scope*/ 15, /*->802*/
/*787*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*789*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*792*/           OPC_EmitMergeInputChains1_0,
/*793*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH64_P8:i64 addr:i64:$addr)
/*802*/         0, /*End of Scope*/
/*803*/       /*Scope*/ 40, /*->844*/
/*804*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*806*/         OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*808*/         OPC_CheckType, MVT::i64,
/*810*/         OPC_Scope, 15, /*->827*/ // 2 children in Scope
/*812*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*814*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*817*/           OPC_EmitMergeInputChains1_0,
/*818*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu64:i64 addr:i32:$addr)
/*827*/         /*Scope*/ 15, /*->843*/
/*828*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*830*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*833*/           OPC_EmitMergeInputChains1_0,
/*834*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu64_P8:i64 addr:i64:$addr)
/*843*/         0, /*End of Scope*/
/*844*/       /*Scope*/ 40, /*->885*/
/*845*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*847*/         OPC_CheckPredicate, 12, // Predicate_sextloadi32
/*849*/         OPC_CheckType, MVT::i64,
/*851*/         OPC_Scope, 15, /*->868*/ // 2 children in Scope
/*853*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*855*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*858*/           OPC_EmitMergeInputChains1_0,
/*859*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LW64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                  // Dst: (LW64:i64 addr:i32:$addr)
/*868*/         /*Scope*/ 15, /*->884*/
/*869*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*871*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*874*/           OPC_EmitMergeInputChains1_0,
/*875*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                  // Dst: (LW64_P8:i64 addr:i64:$addr)
/*884*/         0, /*End of Scope*/
/*885*/       /*Scope*/ 40, /*->926*/
/*886*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*888*/         OPC_CheckPredicate, 13, // Predicate_zextloadi32
/*890*/         OPC_CheckType, MVT::i64,
/*892*/         OPC_Scope, 15, /*->909*/ // 2 children in Scope
/*894*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*896*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*899*/           OPC_EmitMergeInputChains1_0,
/*900*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LWu64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                  // Dst: (LWu64:i64 addr:i32:$addr)
/*909*/         /*Scope*/ 15, /*->925*/
/*910*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*912*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*915*/           OPC_EmitMergeInputChains1_0,
/*916*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LWu64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                  // Dst: (LWu64_P8:i64 addr:i64:$addr)
/*925*/         0, /*End of Scope*/
/*926*/       /*Scope*/ 38, /*->965*/
/*927*/         OPC_CheckPredicate, 5, // Predicate_load
/*929*/         OPC_CheckType, MVT::i64,
/*931*/         OPC_Scope, 15, /*->948*/ // 2 children in Scope
/*933*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*935*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*938*/           OPC_EmitMergeInputChains1_0,
/*939*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LD), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LD:i64 addr:i32:$addr)
/*948*/         /*Scope*/ 15, /*->964*/
/*949*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*951*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*954*/           OPC_EmitMergeInputChains1_0,
/*955*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LD_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LD_P8:i64 addr:i64:$addr)
/*964*/         0, /*End of Scope*/
/*965*/       /*Scope*/ 22|128,1/*150*/, /*->1117*/
/*967*/         OPC_CheckPredicate, 8, // Predicate_extload
/*969*/         OPC_CheckType, MVT::i64,
/*971*/         OPC_Scope, 17, /*->990*/ // 8 children in Scope
/*973*/           OPC_CheckPredicate, 11, // Predicate_extloadi1
/*975*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*977*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*980*/           OPC_EmitMergeInputChains1_0,
/*981*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LB64:i64 addr:i32:$src)
/*990*/         /*Scope*/ 17, /*->1008*/
/*991*/           OPC_CheckPredicate, 9, // Predicate_extloadi8
/*993*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*995*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*998*/           OPC_EmitMergeInputChains1_0,
/*999*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LB64:i64 addr:i32:$src)
/*1008*/        /*Scope*/ 17, /*->1026*/
/*1009*/          OPC_CheckPredicate, 10, // Predicate_extloadi16
/*1011*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1013*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1016*/          OPC_EmitMergeInputChains1_0,
/*1017*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LH64:i64 addr:i32:$src)
/*1026*/        /*Scope*/ 17, /*->1044*/
/*1027*/          OPC_CheckPredicate, 14, // Predicate_extloadi32
/*1029*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1031*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1034*/          OPC_EmitMergeInputChains1_0,
/*1035*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LW64:i64 addr:i32:$src)
/*1044*/        /*Scope*/ 17, /*->1062*/
/*1045*/          OPC_CheckPredicate, 11, // Predicate_extloadi1
/*1047*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1049*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1052*/          OPC_EmitMergeInputChains1_0,
/*1053*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LB64_P8:i64 addr:i64:$src)
/*1062*/        /*Scope*/ 17, /*->1080*/
/*1063*/          OPC_CheckPredicate, 9, // Predicate_extloadi8
/*1065*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1067*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1070*/          OPC_EmitMergeInputChains1_0,
/*1071*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LB64_P8:i64 addr:i64:$src)
/*1080*/        /*Scope*/ 17, /*->1098*/
/*1081*/          OPC_CheckPredicate, 10, // Predicate_extloadi16
/*1083*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1085*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1088*/          OPC_EmitMergeInputChains1_0,
/*1089*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LH64_P8:i64 addr:i64:$src)
/*1098*/        /*Scope*/ 17, /*->1116*/
/*1099*/          OPC_CheckPredicate, 14, // Predicate_extloadi32
/*1101*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1103*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1106*/          OPC_EmitMergeInputChains1_0,
/*1107*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LW64_P8:i64 addr:i64:$src)
/*1116*/        0, /*End of Scope*/
/*1117*/      /*Scope*/ 92, /*->1210*/
/*1118*/        OPC_CheckPredicate, 5, // Predicate_load
/*1120*/        OPC_SwitchType /*2 cases */, 34,  MVT::f32,// ->1157
/*1123*/          OPC_Scope, 15, /*->1140*/ // 2 children in Scope
/*1125*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1127*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*1130*/            OPC_EmitMergeInputChains1_0,
/*1131*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                    // Dst: (LWC1_P8:f32 addrRegImm:i64:$a)
/*1140*/          /*Scope*/ 15, /*->1156*/
/*1141*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1143*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*1146*/            OPC_EmitMergeInputChains1_0,
/*1147*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                    // Dst: (LWC1:f32 addrRegImm:i32:$a)
/*1156*/          0, /*End of Scope*/
                /*SwitchType*/ 50,  MVT::f64,// ->1209
/*1159*/          OPC_Scope, 15, /*->1176*/ // 3 children in Scope
/*1161*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1163*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*1166*/            OPC_EmitMergeInputChains1_0,
/*1167*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                    // Dst: (LDC164_P8:f64 addrRegImm:i64:$a)
/*1176*/          /*Scope*/ 15, /*->1192*/
/*1177*/            OPC_CheckPatternPredicate, 4, // (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1179*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*1182*/            OPC_EmitMergeInputChains1_0,
/*1183*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDC164), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                    // Dst: (LDC164:f64 addrRegImm:i32:$a)
/*1192*/          /*Scope*/ 15, /*->1208*/
/*1193*/            OPC_CheckPatternPredicate, 5, // (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1195*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*1198*/            OPC_EmitMergeInputChains1_0,
/*1199*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDC1), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                    // Dst: (LDC1:f64 addrRegImm:i32:$a)
/*1208*/          0, /*End of Scope*/
                0, // EndSwitchType
/*1210*/      0, /*End of Scope*/
/*1211*/    /*Scope*/ 99, /*->1311*/
/*1212*/      OPC_MoveChild, 1,
/*1214*/      OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1217*/      OPC_RecordChild0, // #1 = $base
/*1218*/      OPC_RecordChild1, // #2 = $index
/*1219*/      OPC_SwitchType /*2 cases */, 51,  MVT::i32,// ->1273
/*1222*/        OPC_MoveParent,
/*1223*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1225*/        OPC_CheckPredicate, 5, // Predicate_load
/*1227*/        OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->1242
/*1230*/          OPC_CheckPatternPredicate, 6, // (Subtarget.hasFPIdx()) && (Subtarget.hasStandardEncoding())
/*1232*/          OPC_EmitMergeInputChains1_0,
/*1233*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWXC1), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:f32 (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                  // Dst: (LWXC1:f32 CPURegs:i32:$base, CPURegs:i32:$index)
                /*SwitchType*/ 28,  MVT::f64,// ->1272
/*1244*/          OPC_Scope, 12, /*->1258*/ // 2 children in Scope
/*1246*/            OPC_CheckPatternPredicate, 7, // (Subtarget.hasMips32r2()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1248*/            OPC_EmitMergeInputChains1_0,
/*1249*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDXC1), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:f64 (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                    // Dst: (LDXC1:f64 CPURegs:i32:$base, CPURegs:i32:$index)
/*1258*/          /*Scope*/ 12, /*->1271*/
/*1259*/            OPC_CheckPatternPredicate, 8, // (Subtarget.hasMips64()) && (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1261*/            OPC_EmitMergeInputChains1_0,
/*1262*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDXC164), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:f64 (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                    // Dst: (LDXC164:f64 CPURegs:i32:$base, CPURegs:i32:$index)
/*1271*/          0, /*End of Scope*/
                0, // EndSwitchType
              /*SwitchType*/ 35,  MVT::i64,// ->1310
/*1275*/        OPC_MoveParent,
/*1276*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1278*/        OPC_CheckPredicate, 5, // Predicate_load
/*1280*/        OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->1295
/*1283*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1285*/          OPC_EmitMergeInputChains1_0,
/*1286*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWXC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:f32 (add:i64 CPU64Regs:i64:$base, CPU64Regs:i64:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                  // Dst: (LWXC1_P8:f32 CPU64Regs:i64:$base, CPU64Regs:i64:$index)
                /*SwitchType*/ 12,  MVT::f64,// ->1309
/*1297*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1299*/          OPC_EmitMergeInputChains1_0,
/*1300*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LDXC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:f64 (add:i64 CPU64Regs:i64:$base, CPU64Regs:i64:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                  // Dst: (LDXC164_P8:f64 CPU64Regs:i64:$base, CPU64Regs:i64:$index)
                0, // EndSwitchType
              0, // EndSwitchType
/*1311*/    /*Scope*/ 25|128,1/*153*/, /*->1466*/
/*1313*/      OPC_RecordChild1, // #1 = $addr
/*1314*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1316*/      OPC_CheckPredicate, 5, // Predicate_load
/*1318*/      OPC_SwitchType /*4 cases */, 34,  MVT::f32,// ->1355
/*1321*/        OPC_Scope, 15, /*->1338*/ // 2 children in Scope
/*1323*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1325*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*1328*/          OPC_EmitMergeInputChains1_0,
/*1329*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LWC1_P8:f32 addrDefault:i64:$addr)
/*1338*/        /*Scope*/ 15, /*->1354*/
/*1339*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1341*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*1344*/          OPC_EmitMergeInputChains1_0,
/*1345*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LWC1:f32 addrDefault:i32:$addr)
/*1354*/        0, /*End of Scope*/
              /*SwitchType*/ 50,  MVT::f64,// ->1407
/*1357*/        OPC_Scope, 15, /*->1374*/ // 3 children in Scope
/*1359*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1361*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*1364*/          OPC_EmitMergeInputChains1_0,
/*1365*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LDC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDC164_P8:f64 addrDefault:i64:$addr)
/*1374*/        /*Scope*/ 15, /*->1390*/
/*1375*/          OPC_CheckPatternPredicate, 4, // (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1377*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*1380*/          OPC_EmitMergeInputChains1_0,
/*1381*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LDC164), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDC164:f64 addrDefault:i32:$addr)
/*1390*/        /*Scope*/ 15, /*->1406*/
/*1391*/          OPC_CheckPatternPredicate, 5, // (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1393*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*1396*/          OPC_EmitMergeInputChains1_0,
/*1397*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LDC1), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDC1:f64 addrDefault:i32:$addr)
/*1406*/        0, /*End of Scope*/
              /*SwitchType*/ 27,  MVT::v2i16,// ->1436
/*1409*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*1411*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$a #2 #3
/*1414*/        OPC_EmitMergeInputChains1_0,
/*1415*/        OPC_EmitNode, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*1424*/        OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*1427*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 4, 5, 
                // Src: (ld:v2i16 addr:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:v2i16 (LW:i32 addr:i32:$a), DSPRegs:i32)
              /*SwitchType*/ 27,  MVT::v4i8,// ->1465
/*1438*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*1440*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$a #2 #3
/*1443*/        OPC_EmitMergeInputChains1_0,
/*1444*/        OPC_EmitNode, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*1453*/        OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*1456*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 4, 5, 
                // Src: (ld:v4i8 addr:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:v4i8 (LW:i32 addr:i32:$a), DSPRegs:i32)
              0, // EndSwitchType
/*1466*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 36|128,6/*804*/,  TARGET_VAL(ISD::STORE),// ->2275
/*1471*/    OPC_RecordMemRef,
/*1472*/    OPC_RecordNode,   // #0 = 'st' chained node
/*1473*/    OPC_Scope, 93|128,1/*221*/, /*->1697*/ // 3 children in Scope
/*1476*/      OPC_RecordChild1, // #1 = $v
/*1477*/      OPC_Scope, 92, /*->1571*/ // 2 children in Scope
/*1479*/        OPC_CheckChild1Type, MVT::f32,
/*1481*/        OPC_Scope, 39, /*->1522*/ // 2 children in Scope
/*1483*/          OPC_RecordChild2, // #2 = $a
/*1484*/          OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1486*/          OPC_CheckPredicate, 16, // Predicate_store
/*1488*/          OPC_Scope, 15, /*->1505*/ // 2 children in Scope
/*1490*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1492*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRegImm:$a #3 #4
/*1495*/            OPC_EmitMergeInputChains1_0,
/*1496*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st f32:f32:$v, addrRegImm:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 53
                    // Dst: (SWC1_P8 f32:f32:$v, addrRegImm:i64:$a)
/*1505*/          /*Scope*/ 15, /*->1521*/
/*1506*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1508*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRegImm:$a #3 #4
/*1511*/            OPC_EmitMergeInputChains1_0,
/*1512*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st f32:f32:$v, addrRegImm:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 53
                    // Dst: (SWC1 f32:f32:$v, addrRegImm:i32:$a)
/*1521*/          0, /*End of Scope*/
/*1522*/        /*Scope*/ 47, /*->1570*/
/*1523*/          OPC_MoveChild, 2,
/*1525*/          OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1528*/          OPC_RecordChild0, // #2 = $base
/*1529*/          OPC_RecordChild1, // #3 = $index
/*1530*/          OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->1550
/*1533*/            OPC_MoveParent,
/*1534*/            OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1536*/            OPC_CheckPredicate, 16, // Predicate_store
/*1538*/            OPC_CheckPatternPredicate, 6, // (Subtarget.hasFPIdx()) && (Subtarget.hasStandardEncoding())
/*1540*/            OPC_EmitMergeInputChains1_0,
/*1541*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SWXC1), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st FGR32:f32:$fs, (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 27
                    // Dst: (SWXC1 FGR32:f32:$fs, CPURegs:i32:$base, CPURegs:i32:$index)
                  /*SwitchType*/ 17,  MVT::i64,// ->1569
/*1552*/            OPC_MoveParent,
/*1553*/            OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1555*/            OPC_CheckPredicate, 16, // Predicate_store
/*1557*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1559*/            OPC_EmitMergeInputChains1_0,
/*1560*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SWXC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st FGR32:f32:$fs, (add:i64 CPU64Regs:i64:$base, CPU64Regs:i64:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 27
                    // Dst: (SWXC1_P8 FGR32:f32:$fs, CPU64Regs:i64:$base, CPU64Regs:i64:$index)
                  0, // EndSwitchType
/*1570*/        0, /*End of Scope*/
/*1571*/      /*Scope*/ 124, /*->1696*/
/*1572*/        OPC_CheckChild1Type, MVT::f64,
/*1574*/        OPC_Scope, 55, /*->1631*/ // 2 children in Scope
/*1576*/          OPC_RecordChild2, // #2 = $a
/*1577*/          OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1579*/          OPC_CheckPredicate, 16, // Predicate_store
/*1581*/          OPC_Scope, 15, /*->1598*/ // 3 children in Scope
/*1583*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1585*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRegImm:$a #3 #4
/*1588*/            OPC_EmitMergeInputChains1_0,
/*1589*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SDC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st f64:f64:$v, addrRegImm:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 53
                    // Dst: (SDC164_P8 f64:f64:$v, addrRegImm:i64:$a)
/*1598*/          /*Scope*/ 15, /*->1614*/
/*1599*/            OPC_CheckPatternPredicate, 4, // (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1601*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRegImm:$a #3 #4
/*1604*/            OPC_EmitMergeInputChains1_0,
/*1605*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SDC164), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st f64:f64:$v, addrRegImm:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 53
                    // Dst: (SDC164 f64:f64:$v, addrRegImm:i32:$a)
/*1614*/          /*Scope*/ 15, /*->1630*/
/*1615*/            OPC_CheckPatternPredicate, 5, // (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1617*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRegImm:$a #3 #4
/*1620*/            OPC_EmitMergeInputChains1_0,
/*1621*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SDC1), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st f64:f64:$v, addrRegImm:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 53
                    // Dst: (SDC1 f64:f64:$v, addrRegImm:i32:$a)
/*1630*/          0, /*End of Scope*/
/*1631*/        /*Scope*/ 63, /*->1695*/
/*1632*/          OPC_MoveChild, 2,
/*1634*/          OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1637*/          OPC_RecordChild0, // #2 = $base
/*1638*/          OPC_RecordChild1, // #3 = $index
/*1639*/          OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->1675
/*1642*/            OPC_MoveParent,
/*1643*/            OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1645*/            OPC_CheckPredicate, 16, // Predicate_store
/*1647*/            OPC_Scope, 12, /*->1661*/ // 2 children in Scope
/*1649*/              OPC_CheckPatternPredicate, 7, // (Subtarget.hasMips32r2()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1651*/              OPC_EmitMergeInputChains1_0,
/*1652*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SDXC1), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (st AFGR64:f64:$fs, (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 27
                      // Dst: (SDXC1 AFGR64:f64:$fs, CPURegs:i32:$base, CPURegs:i32:$index)
/*1661*/            /*Scope*/ 12, /*->1674*/
/*1662*/              OPC_CheckPatternPredicate, 8, // (Subtarget.hasMips64()) && (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1664*/              OPC_EmitMergeInputChains1_0,
/*1665*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SDXC164), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (st FGR64:f64:$fs, (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 27
                      // Dst: (SDXC164 FGR64:f64:$fs, CPURegs:i32:$base, CPURegs:i32:$index)
/*1674*/            0, /*End of Scope*/
                  /*SwitchType*/ 17,  MVT::i64,// ->1694
/*1677*/            OPC_MoveParent,
/*1678*/            OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1680*/            OPC_CheckPredicate, 16, // Predicate_store
/*1682*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1684*/            OPC_EmitMergeInputChains1_0,
/*1685*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SDXC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st FGR64:f64:$fs, (add:i64 CPU64Regs:i64:$base, CPU64Regs:i64:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 27
                    // Dst: (SDXC164_P8 FGR64:f64:$fs, CPU64Regs:i64:$base, CPU64Regs:i64:$index)
                  0, // EndSwitchType
/*1695*/        0, /*End of Scope*/
/*1696*/      0, /*End of Scope*/
/*1697*/    /*Scope*/ 52, /*->1750*/
/*1698*/      OPC_MoveChild, 1,
/*1700*/      OPC_CheckInteger, 0, 
/*1702*/      OPC_CheckType, MVT::i32,
/*1704*/      OPC_MoveParent,
/*1705*/      OPC_RecordChild2, // #1 = $dst
/*1706*/      OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1708*/      OPC_CheckPredicate, 16, // Predicate_store
/*1710*/      OPC_Scope, 18, /*->1730*/ // 2 children in Scope
/*1712*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1714*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$dst #2 #3
/*1717*/        OPC_EmitMergeInputChains1_0,
/*1718*/        OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*1721*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 4, 2, 3, 
                // Src: (st 0:i32, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                // Dst: (SW ZERO:i32, addr:i32:$dst)
/*1730*/      /*Scope*/ 18, /*->1749*/
/*1731*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1733*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$dst #2 #3
/*1736*/        OPC_EmitMergeInputChains1_0,
/*1737*/        OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*1740*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 4, 2, 3, 
                // Src: (st 0:i32, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                // Dst: (SW_P8 ZERO:i32, addr:i64:$dst)
/*1749*/      0, /*End of Scope*/
/*1750*/    /*Scope*/ 10|128,4/*522*/, /*->2274*/
/*1752*/      OPC_RecordChild1, // #1 = $r
/*1753*/      OPC_Scope, 57|128,1/*185*/, /*->1941*/ // 6 children in Scope
/*1756*/        OPC_CheckChild1Type, MVT::i32,
/*1758*/        OPC_RecordChild2, // #2 = $addr
/*1759*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1761*/        OPC_Scope, 42, /*->1805*/ // 4 children in Scope
/*1763*/          OPC_CheckPredicate, 17, // Predicate_truncstore
/*1765*/          OPC_Scope, 18, /*->1785*/ // 2 children in Scope
/*1767*/            OPC_CheckPredicate, 18, // Predicate_truncstorei8
/*1769*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*1771*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddr16:$addr #3 #4 #5
/*1774*/            OPC_EmitMergeInputChains1_0,
/*1775*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SbRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st CPU16Regs:i32:$r, addr16:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (SbRxRyOffMemX16 CPU16Regs:i32:$r, addr16:i32:$addr)
/*1785*/          /*Scope*/ 18, /*->1804*/
/*1786*/            OPC_CheckPredicate, 19, // Predicate_truncstorei16
/*1788*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*1790*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddr16:$addr #3 #4 #5
/*1793*/            OPC_EmitMergeInputChains1_0,
/*1794*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ShRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st CPU16Regs:i32:$r, addr16:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (ShRxRyOffMemX16 CPU16Regs:i32:$r, addr16:i32:$addr)
/*1804*/          0, /*End of Scope*/
/*1805*/        /*Scope*/ 18, /*->1824*/
/*1806*/          OPC_CheckPredicate, 16, // Predicate_store
/*1808*/          OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*1810*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddr16:$addr #3 #4 #5
/*1813*/          OPC_EmitMergeInputChains1_0,
/*1814*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SwRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st CPU16Regs:i32:$r, addr16:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (SwRxRyOffMemX16 CPU16Regs:i32:$r, addr16:i32:$addr)
/*1824*/        /*Scope*/ 78, /*->1903*/
/*1825*/          OPC_CheckPredicate, 17, // Predicate_truncstore
/*1827*/          OPC_Scope, 36, /*->1865*/ // 2 children in Scope
/*1829*/            OPC_CheckPredicate, 18, // Predicate_truncstorei8
/*1831*/            OPC_Scope, 15, /*->1848*/ // 2 children in Scope
/*1833*/              OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1835*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1838*/              OPC_EmitMergeInputChains1_0,
/*1839*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SB), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB CPURegs:i32:$rt, addr:i32:$addr)
/*1848*/            /*Scope*/ 15, /*->1864*/
/*1849*/              OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1851*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1854*/              OPC_EmitMergeInputChains1_0,
/*1855*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SB_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*1864*/            0, /*End of Scope*/
/*1865*/          /*Scope*/ 36, /*->1902*/
/*1866*/            OPC_CheckPredicate, 19, // Predicate_truncstorei16
/*1868*/            OPC_Scope, 15, /*->1885*/ // 2 children in Scope
/*1870*/              OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1872*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1875*/              OPC_EmitMergeInputChains1_0,
/*1876*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SH), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH CPURegs:i32:$rt, addr:i32:$addr)
/*1885*/            /*Scope*/ 15, /*->1901*/
/*1886*/              OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1888*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1891*/              OPC_EmitMergeInputChains1_0,
/*1892*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SH_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*1901*/            0, /*End of Scope*/
/*1902*/          0, /*End of Scope*/
/*1903*/        /*Scope*/ 36, /*->1940*/
/*1904*/          OPC_CheckPredicate, 16, // Predicate_store
/*1906*/          OPC_Scope, 15, /*->1923*/ // 2 children in Scope
/*1908*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1910*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1913*/            OPC_EmitMergeInputChains1_0,
/*1914*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SW CPURegs:i32:$rt, addr:i32:$addr)
/*1923*/          /*Scope*/ 15, /*->1939*/
/*1924*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1926*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1929*/            OPC_EmitMergeInputChains1_0,
/*1930*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SW_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*1939*/          0, /*End of Scope*/
/*1940*/        0, /*End of Scope*/
/*1941*/      /*Scope*/ 41, /*->1983*/
/*1942*/        OPC_CheckChild1Type, MVT::f32,
/*1944*/        OPC_RecordChild2, // #2 = $addr
/*1945*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1947*/        OPC_CheckPredicate, 16, // Predicate_store
/*1949*/        OPC_Scope, 15, /*->1966*/ // 2 children in Scope
/*1951*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1953*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrDefault:$addr #3 #4
/*1956*/          OPC_EmitMergeInputChains1_0,
/*1957*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st FGR32:f32:$rt, addrDefault:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SWC1_P8 FGR32:f32:$rt, addrDefault:i64:$addr)
/*1966*/        /*Scope*/ 15, /*->1982*/
/*1967*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1969*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrDefault:$addr #3 #4
/*1972*/          OPC_EmitMergeInputChains1_0,
/*1973*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st FGR32:f32:$rt, addrDefault:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SWC1 FGR32:f32:$rt, addrDefault:i32:$addr)
/*1982*/        0, /*End of Scope*/
/*1983*/      /*Scope*/ 57, /*->2041*/
/*1984*/        OPC_CheckChild1Type, MVT::f64,
/*1986*/        OPC_RecordChild2, // #2 = $addr
/*1987*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1989*/        OPC_CheckPredicate, 16, // Predicate_store
/*1991*/        OPC_Scope, 15, /*->2008*/ // 3 children in Scope
/*1993*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1995*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrDefault:$addr #3 #4
/*1998*/          OPC_EmitMergeInputChains1_0,
/*1999*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SDC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st FGR64:f64:$rt, addrDefault:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SDC164_P8 FGR64:f64:$rt, addrDefault:i64:$addr)
/*2008*/        /*Scope*/ 15, /*->2024*/
/*2009*/          OPC_CheckPatternPredicate, 4, // (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*2011*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrDefault:$addr #3 #4
/*2014*/          OPC_EmitMergeInputChains1_0,
/*2015*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SDC164), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st FGR64:f64:$rt, addrDefault:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SDC164 FGR64:f64:$rt, addrDefault:i32:$addr)
/*2024*/        /*Scope*/ 15, /*->2040*/
/*2025*/          OPC_CheckPatternPredicate, 5, // (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*2027*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrDefault:$addr #3 #4
/*2030*/          OPC_EmitMergeInputChains1_0,
/*2031*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SDC1), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st AFGR64:f64:$rt, addrDefault:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SDC1 AFGR64:f64:$rt, addrDefault:i32:$addr)
/*2040*/        0, /*End of Scope*/
/*2041*/      /*Scope*/ 32|128,1/*160*/, /*->2203*/
/*2043*/        OPC_CheckChild1Type, MVT::i64,
/*2045*/        OPC_RecordChild2, // #2 = $addr
/*2046*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*2048*/        OPC_Scope, 115, /*->2165*/ // 2 children in Scope
/*2050*/          OPC_CheckPredicate, 17, // Predicate_truncstore
/*2052*/          OPC_Scope, 36, /*->2090*/ // 3 children in Scope
/*2054*/            OPC_CheckPredicate, 18, // Predicate_truncstorei8
/*2056*/            OPC_Scope, 15, /*->2073*/ // 2 children in Scope
/*2058*/              OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2060*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2063*/              OPC_EmitMergeInputChains1_0,
/*2064*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SB64), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*2073*/            /*Scope*/ 15, /*->2089*/
/*2074*/              OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2076*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2079*/              OPC_EmitMergeInputChains1_0,
/*2080*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*2089*/            0, /*End of Scope*/
/*2090*/          /*Scope*/ 36, /*->2127*/
/*2091*/            OPC_CheckPredicate, 19, // Predicate_truncstorei16
/*2093*/            OPC_Scope, 15, /*->2110*/ // 2 children in Scope
/*2095*/              OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2097*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2100*/              OPC_EmitMergeInputChains1_0,
/*2101*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SH64), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*2110*/            /*Scope*/ 15, /*->2126*/
/*2111*/              OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2113*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2116*/              OPC_EmitMergeInputChains1_0,
/*2117*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*2126*/            0, /*End of Scope*/
/*2127*/          /*Scope*/ 36, /*->2164*/
/*2128*/            OPC_CheckPredicate, 20, // Predicate_truncstorei32
/*2130*/            OPC_Scope, 15, /*->2147*/ // 2 children in Scope
/*2132*/              OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2134*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2137*/              OPC_EmitMergeInputChains1_0,
/*2138*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SW64), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                      // Dst: (SW64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*2147*/            /*Scope*/ 15, /*->2163*/
/*2148*/              OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2150*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2153*/              OPC_EmitMergeInputChains1_0,
/*2154*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                      // Dst: (SW64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*2163*/            0, /*End of Scope*/
/*2164*/          0, /*End of Scope*/
/*2165*/        /*Scope*/ 36, /*->2202*/
/*2166*/          OPC_CheckPredicate, 16, // Predicate_store
/*2168*/          OPC_Scope, 15, /*->2185*/ // 2 children in Scope
/*2170*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2172*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2175*/            OPC_EmitMergeInputChains1_0,
/*2176*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SD), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SD CPU64Regs:i64:$rt, addr:i32:$addr)
/*2185*/          /*Scope*/ 15, /*->2201*/
/*2186*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2188*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2191*/            OPC_EmitMergeInputChains1_0,
/*2192*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SD_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SD_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*2201*/          0, /*End of Scope*/
/*2202*/        0, /*End of Scope*/
/*2203*/      /*Scope*/ 34, /*->2238*/
/*2204*/        OPC_CheckChild1Type, MVT::v2i16,
/*2206*/        OPC_RecordChild2, // #2 = $a
/*2207*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*2209*/        OPC_CheckPredicate, 16, // Predicate_store
/*2211*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2213*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$a #3 #4
/*2216*/        OPC_EmitMergeInputChains1_0,
/*2217*/        OPC_EmitInteger, MVT::i32, Mips::CPURegsRegClassID,
/*2220*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*2229*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 6, 3, 4, 
                // Src: (st DSPRegs:v2i16:$val, addr:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (SW (COPY_TO_REGCLASS:i32 DSPRegs:v2i16:$val, CPURegs:i32), addr:i32:$a)
/*2238*/      /*Scope*/ 34, /*->2273*/
/*2239*/        OPC_CheckChild1Type, MVT::v4i8,
/*2241*/        OPC_RecordChild2, // #2 = $a
/*2242*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*2244*/        OPC_CheckPredicate, 16, // Predicate_store
/*2246*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2248*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$a #3 #4
/*2251*/        OPC_EmitMergeInputChains1_0,
/*2252*/        OPC_EmitInteger, MVT::i32, Mips::CPURegsRegClassID,
/*2255*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*2264*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 6, 3, 4, 
                // Src: (st DSPRegs:v4i8:$val, addr:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (SW (COPY_TO_REGCLASS:i32 DSPRegs:v4i8:$val, CPURegs:i32), addr:i32:$a)
/*2273*/      0, /*End of Scope*/
/*2274*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 57,  TARGET_VAL(MipsISD::ExtractLOHI),// ->2335
/*2278*/    OPC_RecordChild0, // #0 = $ac
/*2279*/    OPC_RecordChild1, // #1 = $lohi_idx
/*2280*/    OPC_MoveChild, 1,
/*2282*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2285*/    OPC_MoveParent,
/*2286*/    OPC_SwitchType /*2 cases */, 30,  MVT::i32,// ->2319
/*2289*/      OPC_Scope, 13, /*->2304*/ // 2 children in Scope
/*2291*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2293*/        OPC_EmitConvertToTarget, 1,
/*2295*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (ExtractLOHI:i32 ACRegsDSP:Untyped:$ac, (imm:i32):$lohi_idx) - Complexity = 26
                // Dst: (EXTRACT_SUBREG:i32 ACRegsDSP:Untyped:$ac, (imm:i32):$lohi_idx)
/*2304*/      /*Scope*/ 13, /*->2318*/
/*2305*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2307*/        OPC_EmitConvertToTarget, 1,
/*2309*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (ExtractLOHI:i32 ACRegs:Untyped:$ac, (imm:i32):$lohi_idx) - Complexity = 6
                // Dst: (EXTRACT_SUBREG:i32 ACRegs:Untyped:$ac, (imm:i32):$lohi_idx)
/*2318*/      0, /*End of Scope*/
            /*SwitchType*/ 13,  MVT::i64,// ->2334
/*2321*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2323*/      OPC_EmitConvertToTarget, 1,
/*2325*/      OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
              // Src: (ExtractLOHI:i64 ACRegs128:Untyped:$ac, (imm:i32):$lohi_idx) - Complexity = 6
              // Dst: (EXTRACT_SUBREG:i64 ACRegs128:Untyped:$ac, (imm:i32):$lohi_idx)
            0, // EndSwitchType
          /*SwitchOpcode*/ 48,  TARGET_VAL(MipsISD::Mult),// ->2386
/*2338*/    OPC_RecordChild0, // #0 = $rs
/*2339*/    OPC_Scope, 29, /*->2370*/ // 2 children in Scope
/*2341*/      OPC_CheckChild0Type, MVT::i32,
/*2343*/      OPC_RecordChild1, // #1 = $rt
/*2344*/      OPC_Scope, 11, /*->2357*/ // 2 children in Scope
/*2346*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2348*/        OPC_MorphNodeTo, TARGET_VAL(Mips::MULT_DSP), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (MipsMult:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 23
                // Dst: (MULT_DSP:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt)
/*2357*/      /*Scope*/ 11, /*->2369*/
/*2358*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2360*/        OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMULT), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (MipsMult:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                // Dst: (PseudoMULT:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*2369*/      0, /*End of Scope*/
/*2370*/    /*Scope*/ 14, /*->2385*/
/*2371*/      OPC_CheckChild0Type, MVT::i64,
/*2373*/      OPC_RecordChild1, // #1 = $rt
/*2374*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2376*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoDMULT), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsMult:Untyped CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
              // Dst: (PseudoDMULT:Untyped CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*2385*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 48,  TARGET_VAL(MipsISD::Multu),// ->2437
/*2389*/    OPC_RecordChild0, // #0 = $rs
/*2390*/    OPC_Scope, 29, /*->2421*/ // 2 children in Scope
/*2392*/      OPC_CheckChild0Type, MVT::i32,
/*2394*/      OPC_RecordChild1, // #1 = $rt
/*2395*/      OPC_Scope, 11, /*->2408*/ // 2 children in Scope
/*2397*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2399*/        OPC_MorphNodeTo, TARGET_VAL(Mips::MULTU_DSP), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (MipsMultu:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 23
                // Dst: (MULTU_DSP:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt)
/*2408*/      /*Scope*/ 11, /*->2420*/
/*2409*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2411*/        OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMULTu), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (MipsMultu:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                // Dst: (PseudoMULTu:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*2420*/      0, /*End of Scope*/
/*2421*/    /*Scope*/ 14, /*->2436*/
/*2422*/      OPC_CheckChild0Type, MVT::i64,
/*2424*/      OPC_RecordChild1, // #1 = $rt
/*2425*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2427*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoDMULTu), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsMultu:Untyped CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
              // Dst: (PseudoDMULTu:Untyped CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*2436*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 31,  TARGET_VAL(MipsISD::MAdd),// ->2471
/*2440*/    OPC_RecordChild0, // #0 = $rs
/*2441*/    OPC_RecordChild1, // #1 = $rt
/*2442*/    OPC_RecordChild2, // #2 = $acin
/*2443*/    OPC_Scope, 12, /*->2457*/ // 2 children in Scope
/*2445*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2447*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_DSP), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMAdd:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 23
              // Dst: (MADD_DSP:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
/*2457*/    /*Scope*/ 12, /*->2470*/
/*2458*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2460*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMADD), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMAdd:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, ACRegs:Untyped:$acin) - Complexity = 3
              // Dst: (PseudoMADD:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, ACRegs:Untyped:$acin)
/*2470*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 31,  TARGET_VAL(MipsISD::MAddu),// ->2505
/*2474*/    OPC_RecordChild0, // #0 = $rs
/*2475*/    OPC_RecordChild1, // #1 = $rt
/*2476*/    OPC_RecordChild2, // #2 = $acin
/*2477*/    OPC_Scope, 12, /*->2491*/ // 2 children in Scope
/*2479*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2481*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MADDU_DSP), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMAddu:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 23
              // Dst: (MADDU_DSP:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
/*2491*/    /*Scope*/ 12, /*->2504*/
/*2492*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2494*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMADDU), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMAddu:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, ACRegs:Untyped:$acin) - Complexity = 3
              // Dst: (PseudoMADDU:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, ACRegs:Untyped:$acin)
/*2504*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 31,  TARGET_VAL(MipsISD::MSub),// ->2539
/*2508*/    OPC_RecordChild0, // #0 = $rs
/*2509*/    OPC_RecordChild1, // #1 = $rt
/*2510*/    OPC_RecordChild2, // #2 = $acin
/*2511*/    OPC_Scope, 12, /*->2525*/ // 2 children in Scope
/*2513*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2515*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_DSP), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMSub:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 23
              // Dst: (MSUB_DSP:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
/*2525*/    /*Scope*/ 12, /*->2538*/
/*2526*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2528*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMSUB), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMSub:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, ACRegs:Untyped:$acin) - Complexity = 3
              // Dst: (PseudoMSUB:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, ACRegs:Untyped:$acin)
/*2538*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 31,  TARGET_VAL(MipsISD::MSubu),// ->2573
/*2542*/    OPC_RecordChild0, // #0 = $rs
/*2543*/    OPC_RecordChild1, // #1 = $rt
/*2544*/    OPC_RecordChild2, // #2 = $acin
/*2545*/    OPC_Scope, 12, /*->2559*/ // 2 children in Scope
/*2547*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2549*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MSUBU_DSP), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMSubu:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 23
              // Dst: (MSUBU_DSP:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
/*2559*/    /*Scope*/ 12, /*->2572*/
/*2560*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2562*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMSUBU), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMSubu:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, ACRegs:Untyped:$acin) - Complexity = 3
              // Dst: (PseudoMSUBU:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, ACRegs:Untyped:$acin)
/*2572*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 82,  TARGET_VAL(MipsISD::LWL),// ->2658
/*2576*/    OPC_RecordMemRef,
/*2577*/    OPC_RecordNode,   // #0 = 'MipsLWL' chained node
/*2578*/    OPC_RecordChild1, // #1 = $addr
/*2579*/    OPC_RecordChild2, // #2 = $src
/*2580*/    OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->2619
/*2583*/      OPC_Scope, 16, /*->2601*/ // 2 children in Scope
/*2585*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2587*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2590*/        OPC_EmitMergeInputChains1_0,
/*2591*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i32 addr:iPTR:$addr, CPURegs:i32:$src) - Complexity = 12
                // Dst: (LWL:i32 addr:i32:$addr, CPURegs:i32:$src)
/*2601*/      /*Scope*/ 16, /*->2618*/
/*2602*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2604*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2607*/        OPC_EmitMergeInputChains1_0,
/*2608*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i32 addr:iPTR:$addr, CPURegs:i32:$src) - Complexity = 12
                // Dst: (LWL_P8:i32 addr:i64:$addr, CPURegs:i32:$src)
/*2618*/      0, /*End of Scope*/
            /*SwitchType*/ 36,  MVT::i64,// ->2657
/*2621*/      OPC_Scope, 16, /*->2639*/ // 2 children in Scope
/*2623*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2625*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2628*/        OPC_EmitMergeInputChains1_0,
/*2629*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
                // Dst: (LWL64:i64 addr:i32:$addr, CPU64Regs:i64:$src)
/*2639*/      /*Scope*/ 16, /*->2656*/
/*2640*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2642*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2645*/        OPC_EmitMergeInputChains1_0,
/*2646*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
                // Dst: (LWL64_P8:i64 addr:i64:$addr, CPU64Regs:i64:$src)
/*2656*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 82,  TARGET_VAL(MipsISD::LWR),// ->2743
/*2661*/    OPC_RecordMemRef,
/*2662*/    OPC_RecordNode,   // #0 = 'MipsLWR' chained node
/*2663*/    OPC_RecordChild1, // #1 = $addr
/*2664*/    OPC_RecordChild2, // #2 = $src
/*2665*/    OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->2704
/*2668*/      OPC_Scope, 16, /*->2686*/ // 2 children in Scope
/*2670*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2672*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2675*/        OPC_EmitMergeInputChains1_0,
/*2676*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i32 addr:iPTR:$addr, CPURegs:i32:$src) - Complexity = 12
                // Dst: (LWR:i32 addr:i32:$addr, CPURegs:i32:$src)
/*2686*/      /*Scope*/ 16, /*->2703*/
/*2687*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2689*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2692*/        OPC_EmitMergeInputChains1_0,
/*2693*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i32 addr:iPTR:$addr, CPURegs:i32:$src) - Complexity = 12
                // Dst: (LWR_P8:i32 addr:i64:$addr, CPURegs:i32:$src)
/*2703*/      0, /*End of Scope*/
            /*SwitchType*/ 36,  MVT::i64,// ->2742
/*2706*/      OPC_Scope, 16, /*->2724*/ // 2 children in Scope
/*2708*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2710*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2713*/        OPC_EmitMergeInputChains1_0,
/*2714*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
                // Dst: (LWR64:i64 addr:i32:$addr, CPU64Regs:i64:$src)
/*2724*/      /*Scope*/ 16, /*->2741*/
/*2725*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2727*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2730*/        OPC_EmitMergeInputChains1_0,
/*2731*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
                // Dst: (LWR64_P8:i64 addr:i64:$addr, CPU64Regs:i64:$src)
/*2741*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 81,  TARGET_VAL(MipsISD::SWL),// ->2827
/*2746*/    OPC_RecordMemRef,
/*2747*/    OPC_RecordNode,   // #0 = 'MipsSWL' chained node
/*2748*/    OPC_RecordChild1, // #1 = $rt
/*2749*/    OPC_Scope, 37, /*->2788*/ // 2 children in Scope
/*2751*/      OPC_CheckChild1Type, MVT::i32,
/*2753*/      OPC_RecordChild2, // #2 = $addr
/*2754*/      OPC_Scope, 15, /*->2771*/ // 2 children in Scope
/*2756*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2758*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2761*/        OPC_EmitMergeInputChains1_0,
/*2762*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL CPURegs:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL CPURegs:i32:$rt, addr:i32:$addr)
/*2771*/      /*Scope*/ 15, /*->2787*/
/*2772*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2774*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2777*/        OPC_EmitMergeInputChains1_0,
/*2778*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL CPURegs:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*2787*/      0, /*End of Scope*/
/*2788*/    /*Scope*/ 37, /*->2826*/
/*2789*/      OPC_CheckChild1Type, MVT::i64,
/*2791*/      OPC_RecordChild2, // #2 = $addr
/*2792*/      OPC_Scope, 15, /*->2809*/ // 2 children in Scope
/*2794*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2796*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2799*/        OPC_EmitMergeInputChains1_0,
/*2800*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL64), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*2809*/      /*Scope*/ 15, /*->2825*/
/*2810*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2812*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2815*/        OPC_EmitMergeInputChains1_0,
/*2816*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*2825*/      0, /*End of Scope*/
/*2826*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 81,  TARGET_VAL(MipsISD::SWR),// ->2911
/*2830*/    OPC_RecordMemRef,
/*2831*/    OPC_RecordNode,   // #0 = 'MipsSWR' chained node
/*2832*/    OPC_RecordChild1, // #1 = $rt
/*2833*/    OPC_Scope, 37, /*->2872*/ // 2 children in Scope
/*2835*/      OPC_CheckChild1Type, MVT::i32,
/*2837*/      OPC_RecordChild2, // #2 = $addr
/*2838*/      OPC_Scope, 15, /*->2855*/ // 2 children in Scope
/*2840*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2842*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2845*/        OPC_EmitMergeInputChains1_0,
/*2846*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR CPURegs:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR CPURegs:i32:$rt, addr:i32:$addr)
/*2855*/      /*Scope*/ 15, /*->2871*/
/*2856*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2858*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2861*/        OPC_EmitMergeInputChains1_0,
/*2862*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR CPURegs:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*2871*/      0, /*End of Scope*/
/*2872*/    /*Scope*/ 37, /*->2910*/
/*2873*/      OPC_CheckChild1Type, MVT::i64,
/*2875*/      OPC_RecordChild2, // #2 = $addr
/*2876*/      OPC_Scope, 15, /*->2893*/ // 2 children in Scope
/*2878*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2880*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2883*/        OPC_EmitMergeInputChains1_0,
/*2884*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR64), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*2893*/      /*Scope*/ 15, /*->2909*/
/*2894*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2896*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2899*/        OPC_EmitMergeInputChains1_0,
/*2900*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*2909*/      0, /*End of Scope*/
/*2910*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::LDL),// ->2956
/*2914*/    OPC_RecordMemRef,
/*2915*/    OPC_RecordNode,   // #0 = 'MipsLDL' chained node
/*2916*/    OPC_RecordChild1, // #1 = $addr
/*2917*/    OPC_RecordChild2, // #2 = $src
/*2918*/    OPC_CheckType, MVT::i64,
/*2920*/    OPC_Scope, 16, /*->2938*/ // 2 children in Scope
/*2922*/      OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2924*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2927*/      OPC_EmitMergeInputChains1_0,
/*2928*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDL), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDL:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
              // Dst: (LDL:i64 addr:i32:$addr, CPU64Regs:i64:$src)
/*2938*/    /*Scope*/ 16, /*->2955*/
/*2939*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2941*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2944*/      OPC_EmitMergeInputChains1_0,
/*2945*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDL:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
              // Dst: (LDL_P8:i64 addr:i64:$addr, CPU64Regs:i64:$src)
/*2955*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::LDR),// ->3001
/*2959*/    OPC_RecordMemRef,
/*2960*/    OPC_RecordNode,   // #0 = 'MipsLDR' chained node
/*2961*/    OPC_RecordChild1, // #1 = $addr
/*2962*/    OPC_RecordChild2, // #2 = $src
/*2963*/    OPC_CheckType, MVT::i64,
/*2965*/    OPC_Scope, 16, /*->2983*/ // 2 children in Scope
/*2967*/      OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2969*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2972*/      OPC_EmitMergeInputChains1_0,
/*2973*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDR:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
              // Dst: (LDR:i64 addr:i32:$addr, CPU64Regs:i64:$src)
/*2983*/    /*Scope*/ 16, /*->3000*/
/*2984*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2986*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2989*/      OPC_EmitMergeInputChains1_0,
/*2990*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDR:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
              // Dst: (LDR_P8:i64 addr:i64:$addr, CPU64Regs:i64:$src)
/*3000*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SDL),// ->3044
/*3004*/    OPC_RecordMemRef,
/*3005*/    OPC_RecordNode,   // #0 = 'MipsSDL' chained node
/*3006*/    OPC_RecordChild1, // #1 = $rt
/*3007*/    OPC_CheckChild1Type, MVT::i64,
/*3009*/    OPC_RecordChild2, // #2 = $addr
/*3010*/    OPC_Scope, 15, /*->3027*/ // 2 children in Scope
/*3012*/      OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*3014*/      OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*3017*/      OPC_EmitMergeInputChains1_0,
/*3018*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDL), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDL CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDL CPU64Regs:i64:$rt, addr:i32:$addr)
/*3027*/    /*Scope*/ 15, /*->3043*/
/*3028*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*3030*/      OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*3033*/      OPC_EmitMergeInputChains1_0,
/*3034*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDL CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDL_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*3043*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SDR),// ->3087
/*3047*/    OPC_RecordMemRef,
/*3048*/    OPC_RecordNode,   // #0 = 'MipsSDR' chained node
/*3049*/    OPC_RecordChild1, // #1 = $rt
/*3050*/    OPC_CheckChild1Type, MVT::i64,
/*3052*/    OPC_RecordChild2, // #2 = $addr
/*3053*/    OPC_Scope, 15, /*->3070*/ // 2 children in Scope
/*3055*/      OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*3057*/      OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*3060*/      OPC_EmitMergeInputChains1_0,
/*3061*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDR), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDR CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDR CPU64Regs:i64:$rt, addr:i32:$addr)
/*3070*/    /*Scope*/ 15, /*->3086*/
/*3071*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*3073*/      OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*3076*/      OPC_EmitMergeInputChains1_0,
/*3077*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDR CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDR_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*3086*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 54,  TARGET_VAL(ISD::FrameIndex),// ->3144
/*3090*/    OPC_RecordNode,   // #0 = $addr
/*3091*/    OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->3127
/*3094*/      OPC_Scope, 15, /*->3111*/ // 2 children in Scope
/*3096*/        OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*3098*/        OPC_CheckComplexPat, /*CP*/1, /*#*/0, // selectAddr16:$addr #1 #2 #3
/*3101*/        OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRyOffMemX16), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                // Src: addr16:i32:$addr - Complexity = 12
                // Dst: (AddiuRxRyOffMemX16:i32 addr16:i32:$addr)
/*3111*/      /*Scope*/ 14, /*->3126*/
/*3112*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*3114*/        OPC_CheckComplexPat, /*CP*/2, /*#*/0, // selectIntAddr:$addr #1 #2
/*3117*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LEA_ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: addr:i32:$addr - Complexity = 9
                // Dst: (LEA_ADDiu:i32 addr:i32:$addr)
/*3126*/      0, /*End of Scope*/
            /*SwitchType*/ 14,  MVT::i64,// ->3143
/*3129*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*3131*/      OPC_CheckComplexPat, /*CP*/2, /*#*/0, // selectIntAddr:$addr #1 #2
/*3134*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LEA_ADDiu64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: addr:i64:$addr - Complexity = 9
              // Dst: (LEA_ADDiu64:i64 addr:i64:$addr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 37|128,8/*1061*/,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->4209
/*3148*/    OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*3149*/    OPC_MoveChild, 1,
/*3151*/    OPC_Scope, 44, /*->3197*/ // 50 children in Scope
/*3153*/      OPC_CheckInteger, 124|128,8/*1148*/, 
/*3156*/      OPC_MoveParent,
/*3157*/      OPC_RecordChild2, // #1 = $rt
/*3158*/      OPC_RecordChild3, // #2 = $rs_sa
/*3159*/      OPC_Scope, 22, /*->3183*/ // 2 children in Scope
/*3161*/        OPC_MoveChild, 3,
/*3163*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3166*/        OPC_CheckPredicate, 21, // Predicate_immZExt5
/*3168*/        OPC_MoveParent,
/*3169*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3171*/        OPC_EmitMergeInputChains1_0,
/*3172*/        OPC_EmitConvertToTarget, 2,
/*3174*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_S_W), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:i32 1148:iPTR, CPURegs:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$rs_sa) - Complexity = 12
                // Dst: (SHLL_S_W:i32 CPURegs:i32:$rt, (imm:i32):$rs_sa)
/*3183*/      /*Scope*/ 12, /*->3196*/
/*3184*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3186*/        OPC_EmitMergeInputChains1_0,
/*3187*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_S_W), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:i32 1148:iPTR, CPURegs:i32:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_S_W:i32 CPURegs:i32:$rt, CPURegs:i32:$rs_sa)
/*3196*/      0, /*End of Scope*/
/*3197*/    /*Scope*/ 26, /*->3224*/
/*3198*/      OPC_CheckInteger, 117|128,8/*1141*/, 
/*3201*/      OPC_MoveParent,
/*3202*/      OPC_RecordChild2, // #1 = $mask
/*3203*/      OPC_MoveChild, 2,
/*3205*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3208*/      OPC_CheckPredicate, 22, // Predicate_immZExt10
/*3210*/      OPC_MoveParent,
/*3211*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3213*/      OPC_EmitMergeInputChains1_0,
/*3214*/      OPC_EmitConvertToTarget, 1,
/*3216*/      OPC_MorphNodeTo, TARGET_VAL(Mips::RDDSP), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (intrinsic_w_chain:i32 1141:iPTR, (imm:i32)<<P:Predicate_immZExt10>>:$mask) - Complexity = 12
              // Dst: (RDDSP:i32 (imm:i32):$mask)
/*3224*/    /*Scope*/ 18, /*->3243*/
/*3225*/      OPC_CheckInteger, 16|128,8/*1040*/, 
/*3228*/      OPC_MoveParent,
/*3229*/      OPC_RecordChild2, // #1 = $rs
/*3230*/      OPC_RecordChild3, // #2 = $rt
/*3231*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3233*/      OPC_EmitMergeInputChains1_0,
/*3234*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1040:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (ADDQ_S_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3243*/    /*Scope*/ 18, /*->3262*/
/*3244*/      OPC_CheckInteger, 6|128,9/*1158*/, 
/*3247*/      OPC_MoveParent,
/*3248*/      OPC_RecordChild2, // #1 = $rs
/*3249*/      OPC_RecordChild3, // #2 = $rt
/*3250*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3252*/      OPC_EmitMergeInputChains1_0,
/*3253*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1158:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (SUBQ_S_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3262*/    /*Scope*/ 16, /*->3279*/
/*3263*/      OPC_CheckInteger, 13|128,8/*1037*/, 
/*3266*/      OPC_MoveParent,
/*3267*/      OPC_RecordChild2, // #1 = $rt
/*3268*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3270*/      OPC_EmitMergeInputChains1_0,
/*3271*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ABSQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 1037:iPTR, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (ABSQ_S_W:i32 CPURegs:i32:$rt)
/*3279*/    /*Scope*/ 18, /*->3298*/
/*3280*/      OPC_CheckInteger, 83|128,8/*1107*/, 
/*3283*/      OPC_MoveParent,
/*3284*/      OPC_RecordChild2, // #1 = $rs
/*3285*/      OPC_RecordChild3, // #2 = $rt
/*3286*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3288*/      OPC_EmitMergeInputChains1_0,
/*3289*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEQ_S_W_PHL), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1107:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULEQ_S_W_PHL:i32 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3298*/    /*Scope*/ 18, /*->3317*/
/*3299*/      OPC_CheckInteger, 84|128,8/*1108*/, 
/*3302*/      OPC_MoveParent,
/*3303*/      OPC_RecordChild2, // #1 = $rs
/*3304*/      OPC_RecordChild3, // #2 = $rt
/*3305*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3307*/      OPC_EmitMergeInputChains1_0,
/*3308*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEQ_S_W_PHR), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1108:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULEQ_S_W_PHR:i32 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3317*/    /*Scope*/ 18, /*->3336*/
/*3318*/      OPC_CheckInteger, 39|128,8/*1063*/, 
/*3321*/      OPC_MoveParent,
/*3322*/      OPC_RecordChild2, // #1 = $rs
/*3323*/      OPC_RecordChild3, // #2 = $rt
/*3324*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3326*/      OPC_EmitMergeInputChains1_0,
/*3327*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGU_EQ_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1063:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGU_EQ_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3336*/    /*Scope*/ 18, /*->3355*/
/*3337*/      OPC_CheckInteger, 41|128,8/*1065*/, 
/*3340*/      OPC_MoveParent,
/*3341*/      OPC_RecordChild2, // #1 = $rs
/*3342*/      OPC_RecordChild3, // #2 = $rt
/*3343*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3345*/      OPC_EmitMergeInputChains1_0,
/*3346*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGU_LT_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1065:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGU_LT_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3355*/    /*Scope*/ 18, /*->3374*/
/*3356*/      OPC_CheckInteger, 40|128,8/*1064*/, 
/*3359*/      OPC_MoveParent,
/*3360*/      OPC_RecordChild2, // #1 = $rs
/*3361*/      OPC_RecordChild3, // #2 = $rt
/*3362*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3364*/      OPC_EmitMergeInputChains1_0,
/*3365*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGU_LE_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1064:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGU_LE_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3374*/    /*Scope*/ 20, /*->3395*/
/*3375*/      OPC_CheckInteger, 70|128,8/*1094*/, 
/*3378*/      OPC_MoveParent,
/*3379*/      OPC_RecordChild2, // #1 = $base
/*3380*/      OPC_CheckChild2Type, MVT::i32,
/*3382*/      OPC_RecordChild3, // #2 = $index
/*3383*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3385*/      OPC_EmitMergeInputChains1_0,
/*3386*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LWX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1094:iPTR, CPURegs:i32:$base, CPURegs:i32:$index) - Complexity = 8
              // Dst: (LWX:i32 CPURegs:i32:$base, CPURegs:i32:$index)
/*3395*/    /*Scope*/ 20, /*->3416*/
/*3396*/      OPC_CheckInteger, 69|128,8/*1093*/, 
/*3399*/      OPC_MoveParent,
/*3400*/      OPC_RecordChild2, // #1 = $base
/*3401*/      OPC_CheckChild2Type, MVT::i32,
/*3403*/      OPC_RecordChild3, // #2 = $index
/*3404*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3406*/      OPC_EmitMergeInputChains1_0,
/*3407*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LHX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1093:iPTR, CPURegs:i32:$base, CPURegs:i32:$index) - Complexity = 8
              // Dst: (LHX:i32 CPURegs:i32:$base, CPURegs:i32:$index)
/*3416*/    /*Scope*/ 20, /*->3437*/
/*3417*/      OPC_CheckInteger, 68|128,8/*1092*/, 
/*3420*/      OPC_MoveParent,
/*3421*/      OPC_RecordChild2, // #1 = $base
/*3422*/      OPC_CheckChild2Type, MVT::i32,
/*3424*/      OPC_RecordChild3, // #2 = $index
/*3425*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3427*/      OPC_EmitMergeInputChains1_0,
/*3428*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LBUX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1092:iPTR, CPURegs:i32:$base, CPURegs:i32:$index) - Complexity = 8
              // Dst: (LBUX:i32 CPURegs:i32:$base, CPURegs:i32:$index)
/*3437*/    /*Scope*/ 18, /*->3456*/
/*3438*/      OPC_CheckInteger, 67|128,8/*1091*/, 
/*3441*/      OPC_MoveParent,
/*3442*/      OPC_RecordChild2, // #1 = $src
/*3443*/      OPC_RecordChild3, // #2 = $rs
/*3444*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3446*/      OPC_EmitMergeInputChains1_0,
/*3447*/      OPC_MorphNodeTo, TARGET_VAL(Mips::INSV), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1091:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs) - Complexity = 8
              // Dst: (INSV:i32 CPURegs:i32:$src, CPURegs:i32:$rs)
/*3456*/    /*Scope*/ 18, /*->3475*/
/*3457*/      OPC_CheckInteger, 36|128,8/*1060*/, 
/*3460*/      OPC_MoveParent,
/*3461*/      OPC_RecordChild2, // #1 = $rs
/*3462*/      OPC_RecordChild3, // #2 = $rt
/*3463*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3465*/      OPC_EmitMergeInputChains1_0,
/*3466*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGDU_EQ_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1060:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGDU_EQ_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3475*/    /*Scope*/ 18, /*->3494*/
/*3476*/      OPC_CheckInteger, 38|128,8/*1062*/, 
/*3479*/      OPC_MoveParent,
/*3480*/      OPC_RecordChild2, // #1 = $rs
/*3481*/      OPC_RecordChild3, // #2 = $rt
/*3482*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3484*/      OPC_EmitMergeInputChains1_0,
/*3485*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGDU_LT_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1062:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGDU_LT_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3494*/    /*Scope*/ 18, /*->3513*/
/*3495*/      OPC_CheckInteger, 37|128,8/*1061*/, 
/*3498*/      OPC_MoveParent,
/*3499*/      OPC_RecordChild2, // #1 = $rs
/*3500*/      OPC_RecordChild3, // #2 = $rt
/*3501*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3503*/      OPC_EmitMergeInputChains1_0,
/*3504*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGDU_LE_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1061:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGDU_LE_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3513*/    /*Scope*/ 18, /*->3532*/
/*3514*/      OPC_CheckInteger, 90|128,8/*1114*/, 
/*3517*/      OPC_MoveParent,
/*3518*/      OPC_RecordChild2, // #1 = $rs
/*3519*/      OPC_RecordChild3, // #2 = $rt
/*3520*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3522*/      OPC_EmitMergeInputChains1_0,
/*3523*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1114:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (MULQ_S_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3532*/    /*Scope*/ 18, /*->3551*/
/*3533*/      OPC_CheckInteger, 88|128,8/*1112*/, 
/*3536*/      OPC_MoveParent,
/*3537*/      OPC_RecordChild2, // #1 = $rs
/*3538*/      OPC_RecordChild3, // #2 = $rt
/*3539*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3541*/      OPC_EmitMergeInputChains1_0,
/*3542*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_RS_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1112:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (MULQ_RS_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3551*/    /*Scope*/ 18, /*->3570*/
/*3552*/      OPC_CheckInteger, 21|128,8/*1045*/, 
/*3555*/      OPC_MoveParent,
/*3556*/      OPC_RecordChild2, // #1 = $a
/*3557*/      OPC_RecordChild3, // #2 = $b
/*3558*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3560*/      OPC_EmitMergeInputChains1_0,
/*3561*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDSC), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1045:iPTR, i32:i32:$a, i32:i32:$b) - Complexity = 8
              // Dst: (ADDSC:i32 i32:i32:$a, i32:i32:$b)
/*3570*/    /*Scope*/ 18, /*->3589*/
/*3571*/      OPC_CheckInteger, 28|128,8/*1052*/, 
/*3574*/      OPC_MoveParent,
/*3575*/      OPC_RecordChild2, // #1 = $a
/*3576*/      OPC_RecordChild3, // #2 = $b
/*3577*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3579*/      OPC_EmitMergeInputChains1_0,
/*3580*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDWC), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1052:iPTR, i32:i32:$a, i32:i32:$b) - Complexity = 8
              // Dst: (ADDWC:i32 i32:i32:$a, i32:i32:$b)
/*3589*/    /*Scope*/ 12, /*->3602*/
/*3590*/      OPC_CheckInteger, 32|128,8/*1056*/, 
/*3593*/      OPC_MoveParent,
/*3594*/      OPC_EmitMergeInputChains1_0,
/*3595*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BPOSGE32_PSEUDO), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:i32 1056:iPTR) - Complexity = 8
              // Dst: (BPOSGE32_PSEUDO:i32)
/*3602*/    /*Scope*/ 44, /*->3647*/
/*3603*/      OPC_CheckInteger, 123|128,8/*1147*/, 
/*3606*/      OPC_MoveParent,
/*3607*/      OPC_RecordChild2, // #1 = $rt
/*3608*/      OPC_RecordChild3, // #2 = $rs_sa
/*3609*/      OPC_Scope, 22, /*->3633*/ // 2 children in Scope
/*3611*/        OPC_MoveChild, 3,
/*3613*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3616*/        OPC_CheckPredicate, 23, // Predicate_immZExt4
/*3618*/        OPC_MoveParent,
/*3619*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3621*/        OPC_EmitMergeInputChains1_0,
/*3622*/        OPC_EmitConvertToTarget, 2,
/*3624*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_S_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v2i16 1147:iPTR, DSPRegs:v2i16:$rt, (imm:i32)<<P:Predicate_immZExt4>>:$rs_sa) - Complexity = 12
                // Dst: (SHLL_S_PH:v2i16 DSPRegs:v2i16:$rt, (imm:i32):$rs_sa)
/*3633*/      /*Scope*/ 12, /*->3646*/
/*3634*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3636*/        OPC_EmitMergeInputChains1_0,
/*3637*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_S_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v2i16 1147:iPTR, DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_S_PH:v2i16 DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa)
/*3646*/      0, /*End of Scope*/
/*3647*/    /*Scope*/ 44, /*->3692*/
/*3648*/      OPC_CheckInteger, 121|128,8/*1145*/, 
/*3651*/      OPC_MoveParent,
/*3652*/      OPC_RecordChild2, // #1 = $a
/*3653*/      OPC_RecordChild3, // #2 = $shamt
/*3654*/      OPC_Scope, 22, /*->3678*/ // 2 children in Scope
/*3656*/        OPC_MoveChild, 3,
/*3658*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3661*/        OPC_CheckPredicate, 23, // Predicate_immZExt4
/*3663*/        OPC_MoveParent,
/*3664*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3666*/        OPC_EmitMergeInputChains1_0,
/*3667*/        OPC_EmitConvertToTarget, 2,
/*3669*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v2i16 1145:iPTR, v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt) - Complexity = 12
                // Dst: (SHLL_PH:v2i16 v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt)
/*3678*/      /*Scope*/ 12, /*->3691*/
/*3679*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3681*/        OPC_EmitMergeInputChains1_0,
/*3682*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v2i16 1145:iPTR, DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_PH:v2i16 DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa)
/*3691*/      0, /*End of Scope*/
/*3692*/    /*Scope*/ 44, /*->3737*/
/*3693*/      OPC_CheckInteger, 122|128,8/*1146*/, 
/*3696*/      OPC_MoveParent,
/*3697*/      OPC_RecordChild2, // #1 = $a
/*3698*/      OPC_RecordChild3, // #2 = $shamt
/*3699*/      OPC_Scope, 22, /*->3723*/ // 2 children in Scope
/*3701*/        OPC_MoveChild, 3,
/*3703*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3706*/        OPC_CheckPredicate, 24, // Predicate_immZExt3
/*3708*/        OPC_MoveParent,
/*3709*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3711*/        OPC_EmitMergeInputChains1_0,
/*3712*/        OPC_EmitConvertToTarget, 2,
/*3714*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_QB), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v4i8 1146:iPTR, v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt) - Complexity = 12
                // Dst: (SHLL_QB:v4i8 v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt)
/*3723*/      /*Scope*/ 12, /*->3736*/
/*3724*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3726*/        OPC_EmitMergeInputChains1_0,
/*3727*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_QB), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v4i8 1146:iPTR, DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_QB:v4i8 DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa)
/*3736*/      0, /*End of Scope*/
/*3737*/    /*Scope*/ 18, /*->3756*/
/*3738*/      OPC_CheckInteger, 25|128,8/*1049*/, 
/*3741*/      OPC_MoveParent,
/*3742*/      OPC_RecordChild2, // #1 = $rs
/*3743*/      OPC_RecordChild3, // #2 = $rt
/*3744*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3746*/      OPC_EmitMergeInputChains1_0,
/*3747*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_S_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1049:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (ADDU_S_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3756*/    /*Scope*/ 18, /*->3775*/
/*3757*/      OPC_CheckInteger, 14|128,9/*1166*/, 
/*3760*/      OPC_MoveParent,
/*3761*/      OPC_RecordChild2, // #1 = $rs
/*3762*/      OPC_RecordChild3, // #2 = $rt
/*3763*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3765*/      OPC_EmitMergeInputChains1_0,
/*3766*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_S_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1166:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (SUBU_S_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3775*/    /*Scope*/ 18, /*->3794*/
/*3776*/      OPC_CheckInteger, 15|128,8/*1039*/, 
/*3779*/      OPC_MoveParent,
/*3780*/      OPC_RecordChild2, // #1 = $rs
/*3781*/      OPC_RecordChild3, // #2 = $rt
/*3782*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3784*/      OPC_EmitMergeInputChains1_0,
/*3785*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1039:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDQ_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3794*/    /*Scope*/ 18, /*->3813*/
/*3795*/      OPC_CheckInteger, 5|128,9/*1157*/, 
/*3798*/      OPC_MoveParent,
/*3799*/      OPC_RecordChild2, // #1 = $rs
/*3800*/      OPC_RecordChild3, // #2 = $rt
/*3801*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3803*/      OPC_EmitMergeInputChains1_0,
/*3804*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1157:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBQ_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3813*/    /*Scope*/ 16, /*->3830*/
/*3814*/      OPC_CheckInteger, 11|128,8/*1035*/, 
/*3817*/      OPC_MoveParent,
/*3818*/      OPC_RecordChild2, // #1 = $rt
/*3819*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3821*/      OPC_EmitMergeInputChains1_0,
/*3822*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ABSQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:v2i16 1035:iPTR, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ABSQ_S_PH:v2i16 DSPRegs:v2i16:$rt)
/*3830*/    /*Scope*/ 18, /*->3849*/
/*3831*/      OPC_CheckInteger, 113|128,8/*1137*/, 
/*3834*/      OPC_MoveParent,
/*3835*/      OPC_RecordChild2, // #1 = $rs
/*3836*/      OPC_RecordChild3, // #2 = $rt
/*3837*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3839*/      OPC_EmitMergeInputChains1_0,
/*3840*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQ_RS_PH_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1137:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (PRECRQ_RS_PH_W:v2i16 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3849*/    /*Scope*/ 18, /*->3868*/
/*3850*/      OPC_CheckInteger, 114|128,8/*1138*/, 
/*3853*/      OPC_MoveParent,
/*3854*/      OPC_RecordChild2, // #1 = $rs
/*3855*/      OPC_RecordChild3, // #2 = $rt
/*3856*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3858*/      OPC_EmitMergeInputChains1_0,
/*3859*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQU_S_QB_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1138:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECRQU_S_QB_PH:v4i8 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3868*/    /*Scope*/ 18, /*->3887*/
/*3869*/      OPC_CheckInteger, 85|128,8/*1109*/, 
/*3872*/      OPC_MoveParent,
/*3873*/      OPC_RecordChild2, // #1 = $rs
/*3874*/      OPC_RecordChild3, // #2 = $rt
/*3875*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3877*/      OPC_EmitMergeInputChains1_0,
/*3878*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEU_S_PH_QBL), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1109:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULEU_S_PH_QBL:v2i16 DSPRegs:v4i8:$rs, DSPRegs:v2i16:$rt)
/*3887*/    /*Scope*/ 18, /*->3906*/
/*3888*/      OPC_CheckInteger, 86|128,8/*1110*/, 
/*3891*/      OPC_MoveParent,
/*3892*/      OPC_RecordChild2, // #1 = $rs
/*3893*/      OPC_RecordChild3, // #2 = $rt
/*3894*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3896*/      OPC_EmitMergeInputChains1_0,
/*3897*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEU_S_PH_QBR), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1110:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULEU_S_PH_QBR:v2i16 DSPRegs:v4i8:$rs, DSPRegs:v2i16:$rt)
/*3906*/    /*Scope*/ 18, /*->3925*/
/*3907*/      OPC_CheckInteger, 87|128,8/*1111*/, 
/*3910*/      OPC_MoveParent,
/*3911*/      OPC_RecordChild2, // #1 = $rs
/*3912*/      OPC_RecordChild3, // #2 = $rt
/*3913*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3915*/      OPC_EmitMergeInputChains1_0,
/*3916*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_RS_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1111:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULQ_RS_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3925*/    /*Scope*/ 18, /*->3944*/
/*3926*/      OPC_CheckInteger, 97|128,8/*1121*/, 
/*3929*/      OPC_MoveParent,
/*3930*/      OPC_RecordChild2, // #1 = $rs
/*3931*/      OPC_RecordChild3, // #2 = $rt
/*3932*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3934*/      OPC_EmitMergeInputChains1_0,
/*3935*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PICK_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1121:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PICK_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3944*/    /*Scope*/ 18, /*->3963*/
/*3945*/      OPC_CheckInteger, 96|128,8/*1120*/, 
/*3948*/      OPC_MoveParent,
/*3949*/      OPC_RecordChild2, // #1 = $rs
/*3950*/      OPC_RecordChild3, // #2 = $rt
/*3951*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3953*/      OPC_EmitMergeInputChains1_0,
/*3954*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PICK_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1120:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PICK_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3963*/    /*Scope*/ 18, /*->3982*/
/*3964*/      OPC_CheckInteger, 22|128,8/*1046*/, 
/*3967*/      OPC_MoveParent,
/*3968*/      OPC_RecordChild2, // #1 = $rs
/*3969*/      OPC_RecordChild3, // #2 = $rt
/*3970*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3972*/      OPC_EmitMergeInputChains1_0,
/*3973*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1046:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDU_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3982*/    /*Scope*/ 18, /*->4001*/
/*3983*/      OPC_CheckInteger, 24|128,8/*1048*/, 
/*3986*/      OPC_MoveParent,
/*3987*/      OPC_RecordChild2, // #1 = $rs
/*3988*/      OPC_RecordChild3, // #2 = $rt
/*3989*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3991*/      OPC_EmitMergeInputChains1_0,
/*3992*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1048:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDU_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4001*/    /*Scope*/ 18, /*->4020*/
/*4002*/      OPC_CheckInteger, 11|128,9/*1163*/, 
/*4005*/      OPC_MoveParent,
/*4006*/      OPC_RecordChild2, // #1 = $rs
/*4007*/      OPC_RecordChild3, // #2 = $rt
/*4008*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4010*/      OPC_EmitMergeInputChains1_0,
/*4011*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1163:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBU_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4020*/    /*Scope*/ 18, /*->4039*/
/*4021*/      OPC_CheckInteger, 13|128,9/*1165*/, 
/*4024*/      OPC_MoveParent,
/*4025*/      OPC_RecordChild2, // #1 = $rs
/*4026*/      OPC_RecordChild3, // #2 = $rt
/*4027*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4029*/      OPC_EmitMergeInputChains1_0,
/*4030*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1165:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBU_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4039*/    /*Scope*/ 16, /*->4056*/
/*4040*/      OPC_CheckInteger, 12|128,8/*1036*/, 
/*4043*/      OPC_MoveParent,
/*4044*/      OPC_RecordChild2, // #1 = $rt
/*4045*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4047*/      OPC_EmitMergeInputChains1_0,
/*4048*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ABSQ_S_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:v4i8 1036:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (ABSQ_S_QB:v4i8 DSPRegs:v4i8:$rt)
/*4056*/    /*Scope*/ 18, /*->4075*/
/*4057*/      OPC_CheckInteger, 82|128,8/*1106*/, 
/*4060*/      OPC_MoveParent,
/*4061*/      OPC_RecordChild2, // #1 = $rs
/*4062*/      OPC_RecordChild3, // #2 = $rt
/*4063*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4065*/      OPC_EmitMergeInputChains1_0,
/*4066*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MUL_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1106:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MUL_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4075*/    /*Scope*/ 18, /*->4094*/
/*4076*/      OPC_CheckInteger, 89|128,8/*1113*/, 
/*4079*/      OPC_MoveParent,
/*4080*/      OPC_RecordChild2, // #1 = $rs
/*4081*/      OPC_RecordChild3, // #2 = $rt
/*4082*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4084*/      OPC_EmitMergeInputChains1_0,
/*4085*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1113:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULQ_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4094*/    /*Scope*/ 18, /*->4113*/
/*4095*/      OPC_CheckInteger, 108|128,8/*1132*/, 
/*4098*/      OPC_MoveParent,
/*4099*/      OPC_RecordChild2, // #1 = $rs
/*4100*/      OPC_RecordChild3, // #2 = $rt
/*4101*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4103*/      OPC_EmitMergeInputChains1_0,
/*4104*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECR_QB_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1132:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECR_QB_PH:v4i8 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4113*/    /*Scope*/ 18, /*->4132*/
/*4114*/      OPC_CheckInteger, 14|128,8/*1038*/, 
/*4117*/      OPC_MoveParent,
/*4118*/      OPC_RecordChild2, // #1 = $a
/*4119*/      OPC_RecordChild3, // #2 = $b
/*4120*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4122*/      OPC_EmitMergeInputChains1_0,
/*4123*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQ_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1038:iPTR, v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 8
              // Dst: (ADDQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
/*4132*/    /*Scope*/ 18, /*->4151*/
/*4133*/      OPC_CheckInteger, 4|128,9/*1156*/, 
/*4136*/      OPC_MoveParent,
/*4137*/      OPC_RecordChild2, // #1 = $a
/*4138*/      OPC_RecordChild3, // #2 = $b
/*4139*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4141*/      OPC_EmitMergeInputChains1_0,
/*4142*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQ_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1156:iPTR, v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 8
              // Dst: (SUBQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
/*4151*/    /*Scope*/ 18, /*->4170*/
/*4152*/      OPC_CheckInteger, 81|128,8/*1105*/, 
/*4155*/      OPC_MoveParent,
/*4156*/      OPC_RecordChild2, // #1 = $a
/*4157*/      OPC_RecordChild3, // #2 = $b
/*4158*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4160*/      OPC_EmitMergeInputChains1_0,
/*4161*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MUL_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1105:iPTR, v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 8
              // Dst: (MUL_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
/*4170*/    /*Scope*/ 18, /*->4189*/
/*4171*/      OPC_CheckInteger, 23|128,8/*1047*/, 
/*4174*/      OPC_MoveParent,
/*4175*/      OPC_RecordChild2, // #1 = $a
/*4176*/      OPC_RecordChild3, // #2 = $b
/*4177*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4179*/      OPC_EmitMergeInputChains1_0,
/*4180*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1047:iPTR, v4i8:v4i8:$a, v4i8:v4i8:$b) - Complexity = 8
              // Dst: (ADDU_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b)
/*4189*/    /*Scope*/ 18, /*->4208*/
/*4190*/      OPC_CheckInteger, 12|128,9/*1164*/, 
/*4193*/      OPC_MoveParent,
/*4194*/      OPC_RecordChild2, // #1 = $a
/*4195*/      OPC_RecordChild3, // #2 = $b
/*4196*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4198*/      OPC_EmitMergeInputChains1_0,
/*4199*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1164:iPTR, v4i8:v4i8:$a, v4i8:v4i8:$b) - Complexity = 8
              // Dst: (SUBU_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b)
/*4208*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 119|128,7/*1015*/,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->5228
/*4213*/    OPC_MoveChild, 0,
/*4215*/    OPC_Scope, 42, /*->4259*/ // 42 children in Scope
/*4217*/      OPC_CheckInteger, 1|128,9/*1153*/, 
/*4220*/      OPC_MoveParent,
/*4221*/      OPC_RecordChild1, // #0 = $rt
/*4222*/      OPC_RecordChild2, // #1 = $rs_sa
/*4223*/      OPC_Scope, 21, /*->4246*/ // 2 children in Scope
/*4225*/        OPC_MoveChild, 2,
/*4227*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4230*/        OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4232*/        OPC_MoveParent,
/*4233*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4235*/        OPC_EmitConvertToTarget, 1,
/*4237*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_R_W), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:i32 1153:iPTR, CPURegs:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$rs_sa) - Complexity = 12
                // Dst: (SHRA_R_W:i32 CPURegs:i32:$rt, (imm:i32):$rs_sa)
/*4246*/      /*Scope*/ 11, /*->4258*/
/*4247*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4249*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_R_W), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:i32 1153:iPTR, CPURegs:i32:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_R_W:i32 CPURegs:i32:$rt, CPURegs:i32:$rs_sa)
/*4258*/      0, /*End of Scope*/
/*4259*/    /*Scope*/ 29, /*->4289*/
/*4260*/      OPC_CheckInteger, 29|128,8/*1053*/, 
/*4263*/      OPC_MoveParent,
/*4264*/      OPC_RecordChild1, // #0 = $src
/*4265*/      OPC_RecordChild2, // #1 = $rs
/*4266*/      OPC_RecordChild3, // #2 = $sa
/*4267*/      OPC_MoveChild, 3,
/*4269*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4272*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4274*/      OPC_MoveParent,
/*4275*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4277*/      OPC_EmitConvertToTarget, 2,
/*4279*/      OPC_MorphNodeTo, TARGET_VAL(Mips::APPEND), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:i32 1053:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (APPEND:i32 CPURegs:i32:$rs, (imm:i32):$sa, CPURegs:i32:$src)
/*4289*/    /*Scope*/ 29, /*->4319*/
/*4290*/      OPC_CheckInteger, 30|128,8/*1054*/, 
/*4293*/      OPC_MoveParent,
/*4294*/      OPC_RecordChild1, // #0 = $src
/*4295*/      OPC_RecordChild2, // #1 = $rs
/*4296*/      OPC_RecordChild3, // #2 = $sa
/*4297*/      OPC_MoveChild, 3,
/*4299*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4302*/      OPC_CheckPredicate, 25, // Predicate_immZExt2
/*4304*/      OPC_MoveParent,
/*4305*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4307*/      OPC_EmitConvertToTarget, 2,
/*4309*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BALIGN), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:i32 1054:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt2>>:$sa) - Complexity = 12
              // Dst: (BALIGN:i32 CPURegs:i32:$rs, (imm:i32):$sa, CPURegs:i32:$src)
/*4319*/    /*Scope*/ 29, /*->4349*/
/*4320*/      OPC_CheckInteger, 115|128,8/*1139*/, 
/*4323*/      OPC_MoveParent,
/*4324*/      OPC_RecordChild1, // #0 = $src
/*4325*/      OPC_RecordChild2, // #1 = $rs
/*4326*/      OPC_RecordChild3, // #2 = $sa
/*4327*/      OPC_MoveChild, 3,
/*4329*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4332*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4334*/      OPC_MoveParent,
/*4335*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4337*/      OPC_EmitConvertToTarget, 2,
/*4339*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PREPEND), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:i32 1139:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (PREPEND:i32 CPURegs:i32:$rs, (imm:i32):$sa, CPURegs:i32:$src)
/*4349*/    /*Scope*/ 17, /*->4367*/
/*4350*/      OPC_CheckInteger, 77|128,8/*1101*/, 
/*4353*/      OPC_MoveParent,
/*4354*/      OPC_RecordChild1, // #0 = $rs
/*4355*/      OPC_RecordChild2, // #1 = $rt
/*4356*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4358*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MODSUB), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1101:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (MODSUB:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*4367*/    /*Scope*/ 15, /*->4383*/
/*4368*/      OPC_CheckInteger, 116|128,8/*1140*/, 
/*4371*/      OPC_MoveParent,
/*4372*/      OPC_RecordChild1, // #0 = $rs
/*4373*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4375*/      OPC_MorphNodeTo, TARGET_VAL(Mips::RADDU_W_QB), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1140:iPTR, DSPRegs:v4i8:$rs) - Complexity = 8
              // Dst: (RADDU_W_QB:i32 DSPRegs:v4i8:$rs)
/*4383*/    /*Scope*/ 15, /*->4399*/
/*4384*/      OPC_CheckInteger, 98|128,8/*1122*/, 
/*4387*/      OPC_MoveParent,
/*4388*/      OPC_RecordChild1, // #0 = $rt
/*4389*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4391*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQ_W_PHL), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1122:iPTR, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECEQ_W_PHL:i32 DSPRegs:v2i16:$rt)
/*4399*/    /*Scope*/ 15, /*->4415*/
/*4400*/      OPC_CheckInteger, 99|128,8/*1123*/, 
/*4403*/      OPC_MoveParent,
/*4404*/      OPC_RecordChild1, // #0 = $rt
/*4405*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4407*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQ_W_PHR), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1123:iPTR, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECEQ_W_PHR:i32 DSPRegs:v2i16:$rt)
/*4415*/    /*Scope*/ 15, /*->4431*/
/*4416*/      OPC_CheckInteger, 31|128,8/*1055*/, 
/*4419*/      OPC_MoveParent,
/*4420*/      OPC_RecordChild1, // #0 = $rt
/*4421*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4423*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BITREV), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1055:iPTR, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (BITREV:i32 CPURegs:i32:$rt)
/*4431*/    /*Scope*/ 17, /*->4449*/
/*4432*/      OPC_CheckInteger, 20|128,8/*1044*/, 
/*4435*/      OPC_MoveParent,
/*4436*/      OPC_RecordChild1, // #0 = $rs
/*4437*/      OPC_RecordChild2, // #1 = $rt
/*4438*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4440*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1044:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (ADDQH_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*4449*/    /*Scope*/ 17, /*->4467*/
/*4450*/      OPC_CheckInteger, 19|128,8/*1043*/, 
/*4453*/      OPC_MoveParent,
/*4454*/      OPC_RecordChild1, // #0 = $rs
/*4455*/      OPC_RecordChild2, // #1 = $rt
/*4456*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4458*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_R_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1043:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (ADDQH_R_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*4467*/    /*Scope*/ 17, /*->4485*/
/*4468*/      OPC_CheckInteger, 10|128,9/*1162*/, 
/*4471*/      OPC_MoveParent,
/*4472*/      OPC_RecordChild1, // #0 = $rs
/*4473*/      OPC_RecordChild2, // #1 = $rt
/*4474*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4476*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1162:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (SUBQH_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*4485*/    /*Scope*/ 17, /*->4503*/
/*4486*/      OPC_CheckInteger, 9|128,9/*1161*/, 
/*4489*/      OPC_MoveParent,
/*4490*/      OPC_RecordChild1, // #0 = $rs
/*4491*/      OPC_RecordChild2, // #1 = $rt
/*4492*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4494*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_R_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1161:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (SUBQH_R_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*4503*/    /*Scope*/ 42, /*->4546*/
/*4504*/      OPC_CheckInteger, 127|128,8/*1151*/, 
/*4507*/      OPC_MoveParent,
/*4508*/      OPC_RecordChild1, // #0 = $rt
/*4509*/      OPC_RecordChild2, // #1 = $rs_sa
/*4510*/      OPC_Scope, 21, /*->4533*/ // 2 children in Scope
/*4512*/        OPC_MoveChild, 2,
/*4514*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4517*/        OPC_CheckPredicate, 23, // Predicate_immZExt4
/*4519*/        OPC_MoveParent,
/*4520*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4522*/        OPC_EmitConvertToTarget, 1,
/*4524*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_R_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v2i16 1151:iPTR, DSPRegs:v2i16:$rt, (imm:i32)<<P:Predicate_immZExt4>>:$rs_sa) - Complexity = 12
                // Dst: (SHRA_R_PH:v2i16 DSPRegs:v2i16:$rt, (imm:i32):$rs_sa)
/*4533*/      /*Scope*/ 11, /*->4545*/
/*4534*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4536*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_R_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1151:iPTR, DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_R_PH:v2i16 DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa)
/*4545*/      0, /*End of Scope*/
/*4546*/    /*Scope*/ 39, /*->4586*/
/*4547*/      OPC_CheckInteger, 119|128,8/*1143*/, 
/*4550*/      OPC_MoveParent,
/*4551*/      OPC_RecordChild1, // #0 = $imm
/*4552*/      OPC_Scope, 20, /*->4574*/ // 2 children in Scope
/*4554*/        OPC_MoveChild, 1,
/*4556*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4559*/        OPC_CheckPredicate, 26, // Predicate_immZExt8
/*4561*/        OPC_MoveParent,
/*4562*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4564*/        OPC_EmitConvertToTarget, 0,
/*4566*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPL_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 1/*#Ops*/, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1143:iPTR, (imm:i32)<<P:Predicate_immZExt8>>:$imm) - Complexity = 12
                // Dst: (REPL_QB:v4i8 (imm:i32):$imm)
/*4574*/      /*Scope*/ 10, /*->4585*/
/*4575*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4577*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPLV_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i8 1143:iPTR, CPURegs:i32:$rt) - Complexity = 8
                // Dst: (REPLV_QB:v4i8 CPURegs:i32:$rt)
/*4585*/      0, /*End of Scope*/
/*4586*/    /*Scope*/ 39, /*->4626*/
/*4587*/      OPC_CheckInteger, 118|128,8/*1142*/, 
/*4590*/      OPC_MoveParent,
/*4591*/      OPC_RecordChild1, // #0 = $imm
/*4592*/      OPC_Scope, 20, /*->4614*/ // 2 children in Scope
/*4594*/        OPC_MoveChild, 1,
/*4596*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4599*/        OPC_CheckPredicate, 22, // Predicate_immZExt10
/*4601*/        OPC_MoveParent,
/*4602*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4604*/        OPC_EmitConvertToTarget, 0,
/*4606*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPL_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1142:iPTR, (imm:i32)<<P:Predicate_immZExt10>>:$imm) - Complexity = 12
                // Dst: (REPL_PH:v2i16 (imm:i32):$imm)
/*4614*/      /*Scope*/ 10, /*->4625*/
/*4615*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4617*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPLV_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v2i16 1142:iPTR, CPURegs:i32:$rt) - Complexity = 8
                // Dst: (REPLV_PH:v2i16 CPURegs:i32:$rt)
/*4625*/      0, /*End of Scope*/
/*4626*/    /*Scope*/ 29, /*->4656*/
/*4627*/      OPC_CheckInteger, 109|128,8/*1133*/, 
/*4630*/      OPC_MoveParent,
/*4631*/      OPC_RecordChild1, // #0 = $src
/*4632*/      OPC_RecordChild2, // #1 = $rs
/*4633*/      OPC_RecordChild3, // #2 = $sa
/*4634*/      OPC_MoveChild, 3,
/*4636*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4639*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4641*/      OPC_MoveParent,
/*4642*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4644*/      OPC_EmitConvertToTarget, 2,
/*4646*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECR_SRA_PH_W), 0,
                  1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1133:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (PRECR_SRA_PH_W:v2i16 CPURegs:i32:$rs, (imm:i32):$sa, CPURegs:i32:$src)
/*4656*/    /*Scope*/ 29, /*->4686*/
/*4657*/      OPC_CheckInteger, 110|128,8/*1134*/, 
/*4660*/      OPC_MoveParent,
/*4661*/      OPC_RecordChild1, // #0 = $src
/*4662*/      OPC_RecordChild2, // #1 = $rs
/*4663*/      OPC_RecordChild3, // #2 = $sa
/*4664*/      OPC_MoveChild, 3,
/*4666*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4669*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4671*/      OPC_MoveParent,
/*4672*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4674*/      OPC_EmitConvertToTarget, 2,
/*4676*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECR_SRA_R_PH_W), 0,
                  1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1134:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (PRECR_SRA_R_PH_W:v2i16 CPURegs:i32:$rs, (imm:i32):$sa, CPURegs:i32:$src)
/*4686*/    /*Scope*/ 42, /*->4729*/
/*4687*/      OPC_CheckInteger, 0|128,9/*1152*/, 
/*4690*/      OPC_MoveParent,
/*4691*/      OPC_RecordChild1, // #0 = $rt
/*4692*/      OPC_RecordChild2, // #1 = $rs_sa
/*4693*/      OPC_Scope, 21, /*->4716*/ // 2 children in Scope
/*4695*/        OPC_MoveChild, 2,
/*4697*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4700*/        OPC_CheckPredicate, 24, // Predicate_immZExt3
/*4702*/        OPC_MoveParent,
/*4703*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4705*/        OPC_EmitConvertToTarget, 1,
/*4707*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_R_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v4i8 1152:iPTR, DSPRegs:v4i8:$rt, (imm:i32)<<P:Predicate_immZExt3>>:$rs_sa) - Complexity = 12
                // Dst: (SHRA_R_QB:v4i8 DSPRegs:v4i8:$rt, (imm:i32):$rs_sa)
/*4716*/      /*Scope*/ 11, /*->4728*/
/*4717*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4719*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_R_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1152:iPTR, DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_R_QB:v4i8 DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa)
/*4728*/      0, /*End of Scope*/
/*4729*/    /*Scope*/ 42, /*->4772*/
/*4730*/      OPC_CheckInteger, 125|128,8/*1149*/, 
/*4733*/      OPC_MoveParent,
/*4734*/      OPC_RecordChild1, // #0 = $a
/*4735*/      OPC_RecordChild2, // #1 = $shamt
/*4736*/      OPC_Scope, 21, /*->4759*/ // 2 children in Scope
/*4738*/        OPC_MoveChild, 2,
/*4740*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4743*/        OPC_CheckPredicate, 23, // Predicate_immZExt4
/*4745*/        OPC_MoveParent,
/*4746*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4748*/        OPC_EmitConvertToTarget, 1,
/*4750*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v2i16 1149:iPTR, v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt) - Complexity = 12
                // Dst: (SHRA_PH:v2i16 v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt)
/*4759*/      /*Scope*/ 11, /*->4771*/
/*4760*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4762*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1149:iPTR, DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_PH:v2i16 DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa)
/*4771*/      0, /*End of Scope*/
/*4772*/    /*Scope*/ 42, /*->4815*/
/*4773*/      OPC_CheckInteger, 2|128,9/*1154*/, 
/*4776*/      OPC_MoveParent,
/*4777*/      OPC_RecordChild1, // #0 = $a
/*4778*/      OPC_RecordChild2, // #1 = $shamt
/*4779*/      OPC_Scope, 21, /*->4802*/ // 2 children in Scope
/*4781*/        OPC_MoveChild, 2,
/*4783*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4786*/        OPC_CheckPredicate, 23, // Predicate_immZExt4
/*4788*/        OPC_MoveParent,
/*4789*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4791*/        OPC_EmitConvertToTarget, 1,
/*4793*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRL_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v2i16 1154:iPTR, v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt) - Complexity = 12
                // Dst: (SHRL_PH:v2i16 v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt)
/*4802*/      /*Scope*/ 11, /*->4814*/
/*4803*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4805*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRLV_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1154:iPTR, DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRLV_PH:v2i16 DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa)
/*4814*/      0, /*End of Scope*/
/*4815*/    /*Scope*/ 42, /*->4858*/
/*4816*/      OPC_CheckInteger, 126|128,8/*1150*/, 
/*4819*/      OPC_MoveParent,
/*4820*/      OPC_RecordChild1, // #0 = $a
/*4821*/      OPC_RecordChild2, // #1 = $shamt
/*4822*/      OPC_Scope, 21, /*->4845*/ // 2 children in Scope
/*4824*/        OPC_MoveChild, 2,
/*4826*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4829*/        OPC_CheckPredicate, 24, // Predicate_immZExt3
/*4831*/        OPC_MoveParent,
/*4832*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4834*/        OPC_EmitConvertToTarget, 1,
/*4836*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v4i8 1150:iPTR, v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt) - Complexity = 12
                // Dst: (SHRA_QB:v4i8 v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt)
/*4845*/      /*Scope*/ 11, /*->4857*/
/*4846*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4848*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1150:iPTR, DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_QB:v4i8 DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa)
/*4857*/      0, /*End of Scope*/
/*4858*/    /*Scope*/ 42, /*->4901*/
/*4859*/      OPC_CheckInteger, 3|128,9/*1155*/, 
/*4862*/      OPC_MoveParent,
/*4863*/      OPC_RecordChild1, // #0 = $a
/*4864*/      OPC_RecordChild2, // #1 = $shamt
/*4865*/      OPC_Scope, 21, /*->4888*/ // 2 children in Scope
/*4867*/        OPC_MoveChild, 2,
/*4869*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4872*/        OPC_CheckPredicate, 24, // Predicate_immZExt3
/*4874*/        OPC_MoveParent,
/*4875*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4877*/        OPC_EmitConvertToTarget, 1,
/*4879*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRL_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v4i8 1155:iPTR, v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt) - Complexity = 12
                // Dst: (SHRL_QB:v4i8 v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt)
/*4888*/      /*Scope*/ 11, /*->4900*/
/*4889*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4891*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRLV_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1155:iPTR, DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRLV_QB:v4i8 DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa)
/*4900*/      0, /*End of Scope*/
/*4901*/    /*Scope*/ 17, /*->4919*/
/*4902*/      OPC_CheckInteger, 112|128,8/*1136*/, 
/*4905*/      OPC_MoveParent,
/*4906*/      OPC_RecordChild1, // #0 = $rs
/*4907*/      OPC_RecordChild2, // #1 = $rt
/*4908*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4910*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQ_QB_PH), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1136:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECRQ_QB_PH:v4i8 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4919*/    /*Scope*/ 17, /*->4937*/
/*4920*/      OPC_CheckInteger, 111|128,8/*1135*/, 
/*4923*/      OPC_MoveParent,
/*4924*/      OPC_RecordChild1, // #0 = $rs
/*4925*/      OPC_RecordChild2, // #1 = $rt
/*4926*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4928*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQ_PH_W), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1135:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (PRECRQ_PH_W:v2i16 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*4937*/    /*Scope*/ 15, /*->4953*/
/*4938*/      OPC_CheckInteger, 100|128,8/*1124*/, 
/*4941*/      OPC_MoveParent,
/*4942*/      OPC_RecordChild1, // #0 = $rt
/*4943*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4945*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBL), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1124:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBL:v2i16 DSPRegs:v4i8:$rt)
/*4953*/    /*Scope*/ 15, /*->4969*/
/*4954*/      OPC_CheckInteger, 102|128,8/*1126*/, 
/*4957*/      OPC_MoveParent,
/*4958*/      OPC_RecordChild1, // #0 = $rt
/*4959*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4961*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBR), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1126:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBR:v2i16 DSPRegs:v4i8:$rt)
/*4969*/    /*Scope*/ 15, /*->4985*/
/*4970*/      OPC_CheckInteger, 101|128,8/*1125*/, 
/*4973*/      OPC_MoveParent,
/*4974*/      OPC_RecordChild1, // #0 = $rt
/*4975*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4977*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBLA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1125:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBLA:v2i16 DSPRegs:v4i8:$rt)
/*4985*/    /*Scope*/ 15, /*->5001*/
/*4986*/      OPC_CheckInteger, 103|128,8/*1127*/, 
/*4989*/      OPC_MoveParent,
/*4990*/      OPC_RecordChild1, // #0 = $rt
/*4991*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4993*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBRA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1127:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBRA:v2i16 DSPRegs:v4i8:$rt)
/*5001*/    /*Scope*/ 15, /*->5017*/
/*5002*/      OPC_CheckInteger, 104|128,8/*1128*/, 
/*5005*/      OPC_MoveParent,
/*5006*/      OPC_RecordChild1, // #0 = $rt
/*5007*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5009*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBL), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1128:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBL:v2i16 DSPRegs:v4i8:$rt)
/*5017*/    /*Scope*/ 15, /*->5033*/
/*5018*/      OPC_CheckInteger, 106|128,8/*1130*/, 
/*5021*/      OPC_MoveParent,
/*5022*/      OPC_RecordChild1, // #0 = $rt
/*5023*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5025*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBR), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1130:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBR:v2i16 DSPRegs:v4i8:$rt)
/*5033*/    /*Scope*/ 15, /*->5049*/
/*5034*/      OPC_CheckInteger, 105|128,8/*1129*/, 
/*5037*/      OPC_MoveParent,
/*5038*/      OPC_RecordChild1, // #0 = $rt
/*5039*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5041*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBLA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1129:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBLA:v2i16 DSPRegs:v4i8:$rt)
/*5049*/    /*Scope*/ 15, /*->5065*/
/*5050*/      OPC_CheckInteger, 107|128,8/*1131*/, 
/*5053*/      OPC_MoveParent,
/*5054*/      OPC_RecordChild1, // #0 = $rt
/*5055*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5057*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBRA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1131:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBRA:v2i16 DSPRegs:v4i8:$rt)
/*5065*/    /*Scope*/ 17, /*->5083*/
/*5066*/      OPC_CheckInteger, 95|128,8/*1119*/, 
/*5069*/      OPC_MoveParent,
/*5070*/      OPC_RecordChild1, // #0 = $rs
/*5071*/      OPC_RecordChild2, // #1 = $rt
/*5072*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5074*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PACKRL_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1119:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PACKRL_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5083*/    /*Scope*/ 17, /*->5101*/
/*5084*/      OPC_CheckInteger, 26|128,8/*1050*/, 
/*5087*/      OPC_MoveParent,
/*5088*/      OPC_RecordChild1, // #0 = $rs
/*5089*/      OPC_RecordChild2, // #1 = $rt
/*5090*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5092*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDUH_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1050:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (ADDUH_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5101*/    /*Scope*/ 17, /*->5119*/
/*5102*/      OPC_CheckInteger, 27|128,8/*1051*/, 
/*5105*/      OPC_MoveParent,
/*5106*/      OPC_RecordChild1, // #0 = $rs
/*5107*/      OPC_RecordChild2, // #1 = $rt
/*5108*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5110*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDUH_R_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1051:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (ADDUH_R_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5119*/    /*Scope*/ 17, /*->5137*/
/*5120*/      OPC_CheckInteger, 15|128,9/*1167*/, 
/*5123*/      OPC_MoveParent,
/*5124*/      OPC_RecordChild1, // #0 = $rs
/*5125*/      OPC_RecordChild2, // #1 = $rt
/*5126*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5128*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBUH_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1167:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (SUBUH_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5137*/    /*Scope*/ 17, /*->5155*/
/*5138*/      OPC_CheckInteger, 16|128,9/*1168*/, 
/*5141*/      OPC_MoveParent,
/*5142*/      OPC_RecordChild1, // #0 = $rs
/*5143*/      OPC_RecordChild2, // #1 = $rt
/*5144*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5146*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBUH_R_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1168:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (SUBUH_R_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5155*/    /*Scope*/ 17, /*->5173*/
/*5156*/      OPC_CheckInteger, 17|128,8/*1041*/, 
/*5159*/      OPC_MoveParent,
/*5160*/      OPC_RecordChild1, // #0 = $rs
/*5161*/      OPC_RecordChild2, // #1 = $rt
/*5162*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5164*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1041:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDQH_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5173*/    /*Scope*/ 17, /*->5191*/
/*5174*/      OPC_CheckInteger, 18|128,8/*1042*/, 
/*5177*/      OPC_MoveParent,
/*5178*/      OPC_RecordChild1, // #0 = $rs
/*5179*/      OPC_RecordChild2, // #1 = $rt
/*5180*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5182*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_R_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1042:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDQH_R_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5191*/    /*Scope*/ 17, /*->5209*/
/*5192*/      OPC_CheckInteger, 7|128,9/*1159*/, 
/*5195*/      OPC_MoveParent,
/*5196*/      OPC_RecordChild1, // #0 = $rs
/*5197*/      OPC_RecordChild2, // #1 = $rt
/*5198*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5200*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1159:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBQH_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5209*/    /*Scope*/ 17, /*->5227*/
/*5210*/      OPC_CheckInteger, 8|128,9/*1160*/, 
/*5213*/      OPC_MoveParent,
/*5214*/      OPC_RecordChild1, // #0 = $rs
/*5215*/      OPC_RecordChild2, // #1 = $rt
/*5216*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5218*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_R_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1160:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBQH_R_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5227*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 13|128,1/*141*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->5373
/*5232*/    OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*5233*/    OPC_MoveChild, 1,
/*5235*/    OPC_Scope, 27, /*->5264*/ // 7 children in Scope
/*5237*/      OPC_CheckInteger, 17|128,9/*1169*/, 
/*5240*/      OPC_MoveParent,
/*5241*/      OPC_RecordChild2, // #1 = $rs
/*5242*/      OPC_RecordChild3, // #2 = $mask
/*5243*/      OPC_MoveChild, 3,
/*5245*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5248*/      OPC_CheckPredicate, 22, // Predicate_immZExt10
/*5250*/      OPC_MoveParent,
/*5251*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5253*/      OPC_EmitMergeInputChains1_0,
/*5254*/      OPC_EmitConvertToTarget, 2,
/*5256*/      OPC_MorphNodeTo, TARGET_VAL(Mips::WRDSP), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (intrinsic_void 1169:iPTR, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt10>>:$mask) - Complexity = 12
              // Dst: (WRDSP CPURegs:i32:$rs, (imm:i32):$mask)
/*5264*/    /*Scope*/ 17, /*->5282*/
/*5265*/      OPC_CheckInteger, 42|128,8/*1066*/, 
/*5268*/      OPC_MoveParent,
/*5269*/      OPC_RecordChild2, // #1 = $rs
/*5270*/      OPC_RecordChild3, // #2 = $rt
/*5271*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5273*/      OPC_EmitMergeInputChains1_0,
/*5274*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPU_EQ_QB), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1066:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPU_EQ_QB DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5282*/    /*Scope*/ 17, /*->5300*/
/*5283*/      OPC_CheckInteger, 44|128,8/*1068*/, 
/*5286*/      OPC_MoveParent,
/*5287*/      OPC_RecordChild2, // #1 = $rs
/*5288*/      OPC_RecordChild3, // #2 = $rt
/*5289*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5291*/      OPC_EmitMergeInputChains1_0,
/*5292*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPU_LT_QB), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1068:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPU_LT_QB DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5300*/    /*Scope*/ 17, /*->5318*/
/*5301*/      OPC_CheckInteger, 43|128,8/*1067*/, 
/*5304*/      OPC_MoveParent,
/*5305*/      OPC_RecordChild2, // #1 = $rs
/*5306*/      OPC_RecordChild3, // #2 = $rt
/*5307*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5309*/      OPC_EmitMergeInputChains1_0,
/*5310*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPU_LE_QB), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1067:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPU_LE_QB DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5318*/    /*Scope*/ 17, /*->5336*/
/*5319*/      OPC_CheckInteger, 33|128,8/*1057*/, 
/*5322*/      OPC_MoveParent,
/*5323*/      OPC_RecordChild2, // #1 = $rs
/*5324*/      OPC_RecordChild3, // #2 = $rt
/*5325*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5327*/      OPC_EmitMergeInputChains1_0,
/*5328*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMP_EQ_PH), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1057:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (CMP_EQ_PH DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5336*/    /*Scope*/ 17, /*->5354*/
/*5337*/      OPC_CheckInteger, 35|128,8/*1059*/, 
/*5340*/      OPC_MoveParent,
/*5341*/      OPC_RecordChild2, // #1 = $rs
/*5342*/      OPC_RecordChild3, // #2 = $rt
/*5343*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5345*/      OPC_EmitMergeInputChains1_0,
/*5346*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMP_LT_PH), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1059:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (CMP_LT_PH DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5354*/    /*Scope*/ 17, /*->5372*/
/*5355*/      OPC_CheckInteger, 34|128,8/*1058*/, 
/*5358*/      OPC_MoveParent,
/*5359*/      OPC_RecordChild2, // #1 = $rs
/*5360*/      OPC_RecordChild3, // #2 = $rt
/*5361*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5363*/      OPC_EmitMergeInputChains1_0,
/*5364*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMP_LE_PH), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1058:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (CMP_LE_PH DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5372*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 69|128,1/*197*/,  TARGET_VAL(ISD::XOR),// ->5574
/*5377*/    OPC_Scope, 50, /*->5429*/ // 2 children in Scope
/*5379*/      OPC_MoveChild, 0,
/*5381*/      OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*5384*/      OPC_RecordChild0, // #0 = $rs
/*5385*/      OPC_RecordChild1, // #1 = $rt
/*5386*/      OPC_MoveParent,
/*5387*/      OPC_MoveChild, 1,
/*5389*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5400*/      OPC_MoveParent,
/*5401*/      OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->5415
/*5404*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5406*/        OPC_MorphNodeTo, TARGET_VAL(Mips::NOR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i32 (or:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt), -1:i32) - Complexity = 11
                // Dst: (NOR:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
              /*SwitchType*/ 11,  MVT::i64,// ->5428
/*5417*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5419*/        OPC_MorphNodeTo, TARGET_VAL(Mips::NOR64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i64 (or:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt), -1:i64) - Complexity = 11
                // Dst: (NOR64:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
              0, // EndSwitchType
/*5429*/    /*Scope*/ 14|128,1/*142*/, /*->5573*/
/*5431*/      OPC_RecordChild0, // #0 = $in
/*5432*/      OPC_Scope, 44, /*->5478*/ // 2 children in Scope
/*5434*/        OPC_MoveChild, 1,
/*5436*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5447*/        OPC_MoveParent,
/*5448*/        OPC_CheckType, MVT::i32,
/*5450*/        OPC_Scope, 14, /*->5466*/ // 2 children in Scope
/*5452*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5454*/          OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5457*/          OPC_MorphNodeTo, TARGET_VAL(Mips::NOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 CPURegs:i32:$in, -1:i32) - Complexity = 8
                  // Dst: (NOR:i32 CPURegsOpnd:i32:$in, ZERO:i32)
/*5466*/        /*Scope*/ 10, /*->5477*/
/*5467*/          OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*5469*/          OPC_MorphNodeTo, TARGET_VAL(Mips::NotRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (xor:i32 CPU16Regs:i32:$r, -1:i32) - Complexity = 8
                  // Dst: (NotRxRy16:i32 CPU16Regs:i32:$r)
/*5477*/        0, /*End of Scope*/
/*5478*/      /*Scope*/ 93, /*->5572*/
/*5479*/        OPC_RecordChild1, // #1 = $imm16
/*5480*/        OPC_Scope, 46, /*->5528*/ // 3 children in Scope
/*5482*/          OPC_MoveChild, 1,
/*5484*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5487*/          OPC_CheckPredicate, 27, // Predicate_immZExt16
/*5489*/          OPC_MoveParent,
/*5490*/          OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->5509
/*5493*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5495*/            OPC_EmitConvertToTarget, 1,
/*5497*/            OPC_EmitNodeXForm, 0, 2, // LO16
/*5500*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 CPURegsOpnd:i32:$rs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                    // Dst: (XORi:i32 CPURegsOpnd:i32:$rs, (LO16:i32 (imm:i32):$imm16))
                  /*SwitchType*/ 16,  MVT::i64,// ->5527
/*5511*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5513*/            OPC_EmitConvertToTarget, 1,
/*5515*/            OPC_EmitNodeXForm, 0, 2, // LO16
/*5518*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XORi64), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 CPU64RegsOpnd:i64:$rs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                    // Dst: (XORi64:i64 CPU64RegsOpnd:i64:$rs, (LO16:i64 (imm:i64):$imm16))
                  0, // EndSwitchType
/*5528*/        /*Scope*/ 28, /*->5557*/
/*5529*/          OPC_CheckType, MVT::i32,
/*5531*/          OPC_Scope, 11, /*->5544*/ // 2 children in Scope
/*5533*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5535*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XOR), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                    // Dst: (XOR:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*5544*/          /*Scope*/ 11, /*->5556*/
/*5545*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*5547*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*5556*/          0, /*End of Scope*/
/*5557*/        /*Scope*/ 13, /*->5571*/
/*5558*/          OPC_CheckType, MVT::i64,
/*5560*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5562*/          OPC_MorphNodeTo, TARGET_VAL(Mips::XOR64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
                  // Dst: (XOR64:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*5571*/        0, /*End of Scope*/
/*5572*/      0, /*End of Scope*/
/*5573*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 98|128,10/*1378*/,  TARGET_VAL(ISD::BRCOND),// ->6956
/*5578*/    OPC_RecordNode,   // #0 = 'brcond' chained node
/*5579*/    OPC_Scope, 24|128,10/*1304*/, /*->6886*/ // 2 children in Scope
/*5582*/      OPC_MoveChild, 1,
/*5584*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*5587*/      OPC_RecordChild0, // #1 = $rs
/*5588*/      OPC_Scope, 43|128,6/*811*/, /*->6402*/ // 2 children in Scope
/*5591*/        OPC_CheckChild0Type, MVT::i32,
/*5593*/        OPC_Scope, 79|128,1/*207*/, /*->5803*/ // 2 children in Scope
/*5596*/          OPC_MoveChild, 1,
/*5598*/          OPC_CheckInteger, 0, 
/*5600*/          OPC_MoveParent,
/*5601*/          OPC_MoveChild, 2,
/*5603*/          OPC_Scope, 24, /*->5629*/ // 7 children in Scope
/*5605*/            OPC_CheckCondCode, ISD::SETGE,
/*5607*/            OPC_MoveParent,
/*5608*/            OPC_CheckType, MVT::i32,
/*5610*/            OPC_MoveParent,
/*5611*/            OPC_RecordChild2, // #2 = $offset
/*5612*/            OPC_MoveChild, 2,
/*5614*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5617*/            OPC_MoveParent,
/*5618*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5620*/            OPC_EmitMergeInputChains1_0,
/*5621*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BGEZ), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$rs, 0:i32, SETGE:Other), (bb:Other):$offset) - Complexity = 11
                    // Dst: (BGEZ CPURegs:i32:$rs, (bb:Other):$offset)
/*5629*/          /*Scope*/ 24, /*->5654*/
/*5630*/            OPC_CheckCondCode, ISD::SETGT,
/*5632*/            OPC_MoveParent,
/*5633*/            OPC_CheckType, MVT::i32,
/*5635*/            OPC_MoveParent,
/*5636*/            OPC_RecordChild2, // #2 = $offset
/*5637*/            OPC_MoveChild, 2,
/*5639*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5642*/            OPC_MoveParent,
/*5643*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5645*/            OPC_EmitMergeInputChains1_0,
/*5646*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BGTZ), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$rs, 0:i32, SETGT:Other), (bb:Other):$offset) - Complexity = 11
                    // Dst: (BGTZ CPURegs:i32:$rs, (bb:Other):$offset)
/*5654*/          /*Scope*/ 24, /*->5679*/
/*5655*/            OPC_CheckCondCode, ISD::SETLE,
/*5657*/            OPC_MoveParent,
/*5658*/            OPC_CheckType, MVT::i32,
/*5660*/            OPC_MoveParent,
/*5661*/            OPC_RecordChild2, // #2 = $offset
/*5662*/            OPC_MoveChild, 2,
/*5664*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5667*/            OPC_MoveParent,
/*5668*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5670*/            OPC_EmitMergeInputChains1_0,
/*5671*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BLEZ), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$rs, 0:i32, SETLE:Other), (bb:Other):$offset) - Complexity = 11
                    // Dst: (BLEZ CPURegs:i32:$rs, (bb:Other):$offset)
/*5679*/          /*Scope*/ 24, /*->5704*/
/*5680*/            OPC_CheckCondCode, ISD::SETLT,
/*5682*/            OPC_MoveParent,
/*5683*/            OPC_CheckType, MVT::i32,
/*5685*/            OPC_MoveParent,
/*5686*/            OPC_RecordChild2, // #2 = $offset
/*5687*/            OPC_MoveChild, 2,
/*5689*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5692*/            OPC_MoveParent,
/*5693*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5695*/            OPC_EmitMergeInputChains1_0,
/*5696*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BLTZ), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$rs, 0:i32, SETLT:Other), (bb:Other):$offset) - Complexity = 11
                    // Dst: (BLTZ CPURegs:i32:$rs, (bb:Other):$offset)
/*5704*/          /*Scope*/ 28, /*->5733*/
/*5705*/            OPC_CheckCondCode, ISD::SETNE,
/*5707*/            OPC_MoveParent,
/*5708*/            OPC_CheckType, MVT::i32,
/*5710*/            OPC_MoveParent,
/*5711*/            OPC_RecordChild2, // #2 = $dst
/*5712*/            OPC_MoveChild, 2,
/*5714*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5717*/            OPC_MoveParent,
/*5718*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5720*/            OPC_EmitMergeInputChains1_0,
/*5721*/            OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5724*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BNE CPURegs:i32:$lhs, ZERO:i32, (bb:Other):$dst)
/*5733*/          /*Scope*/ 43, /*->5777*/
/*5734*/            OPC_CheckCondCode, ISD::SETEQ,
/*5736*/            OPC_MoveParent,
/*5737*/            OPC_CheckType, MVT::i32,
/*5739*/            OPC_MoveParent,
/*5740*/            OPC_RecordChild2, // #2 = $dst
/*5741*/            OPC_MoveChild, 2,
/*5743*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5746*/            OPC_MoveParent,
/*5747*/            OPC_Scope, 15, /*->5764*/ // 2 children in Scope
/*5749*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5751*/              OPC_EmitMergeInputChains1_0,
/*5752*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5755*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), (bb:Other):$dst) - Complexity = 11
                      // Dst: (BEQ CPURegs:i32:$lhs, ZERO:i32, (bb:Other):$dst)
/*5764*/            /*Scope*/ 11, /*->5776*/
/*5765*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*5767*/              OPC_EmitMergeInputChains1_0,
/*5768*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BeqzRxImmX16), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, 0:i32, SETEQ:Other), (bb:Other):$targ16) - Complexity = 11
                      // Dst: (BeqzRxImmX16 CPU16Regs:i32:$rx, (bb:Other):$targ16)
/*5776*/            0, /*End of Scope*/
/*5777*/          /*Scope*/ 24, /*->5802*/
/*5778*/            OPC_CheckCondCode, ISD::SETNE,
/*5780*/            OPC_MoveParent,
/*5781*/            OPC_CheckType, MVT::i32,
/*5783*/            OPC_MoveParent,
/*5784*/            OPC_RecordChild2, // #2 = $targ16
/*5785*/            OPC_MoveChild, 2,
/*5787*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5790*/            OPC_MoveParent,
/*5791*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*5793*/            OPC_EmitMergeInputChains1_0,
/*5794*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BnezRxImmX16), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, 0:i32, SETNE:Other), (bb:Other):$targ16) - Complexity = 11
                    // Dst: (BnezRxImmX16 CPU16Regs:i32:$rx, (bb:Other):$targ16)
/*5802*/          0, /*End of Scope*/
/*5803*/        /*Scope*/ 84|128,4/*596*/, /*->6401*/
/*5805*/          OPC_RecordChild1, // #2 = $rhs
/*5806*/          OPC_Scope, 97|128,1/*225*/, /*->6034*/ // 2 children in Scope
/*5809*/            OPC_MoveChild, 1,
/*5811*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5814*/            OPC_Scope, 87, /*->5903*/ // 4 children in Scope
/*5816*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*5818*/              OPC_MoveParent,
/*5819*/              OPC_MoveChild, 2,
/*5821*/              OPC_Scope, 39, /*->5862*/ // 2 children in Scope
/*5823*/                OPC_CheckCondCode, ISD::SETGE,
/*5825*/                OPC_MoveParent,
/*5826*/                OPC_CheckType, MVT::i32,
/*5828*/                OPC_MoveParent,
/*5829*/                OPC_RecordChild2, // #3 = $dst
/*5830*/                OPC_MoveChild, 2,
/*5832*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5835*/                OPC_MoveParent,
/*5836*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5838*/                OPC_EmitMergeInputChains1_0,
/*5839*/                OPC_EmitConvertToTarget, 2,
/*5841*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*5850*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5853*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                        // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 10
                        // Dst: (BEQ (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*5862*/              /*Scope*/ 39, /*->5902*/
/*5863*/                OPC_CheckCondCode, ISD::SETUGE,
/*5865*/                OPC_MoveParent,
/*5866*/                OPC_CheckType, MVT::i32,
/*5868*/                OPC_MoveParent,
/*5869*/                OPC_RecordChild2, // #3 = $dst
/*5870*/                OPC_MoveChild, 2,
/*5872*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5875*/                OPC_MoveParent,
/*5876*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5878*/                OPC_EmitMergeInputChains1_0,
/*5879*/                OPC_EmitConvertToTarget, 2,
/*5881*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*5890*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5893*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                        // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 10
                        // Dst: (BEQ (SLTiu:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*5902*/              0, /*End of Scope*/
/*5903*/            /*Scope*/ 32, /*->5936*/
/*5904*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*5906*/              OPC_MoveParent,
/*5907*/              OPC_MoveChild, 2,
/*5909*/              OPC_CheckCondCode, ISD::SETEQ,
/*5911*/              OPC_MoveParent,
/*5912*/              OPC_CheckType, MVT::i32,
/*5914*/              OPC_MoveParent,
/*5915*/              OPC_RecordChild2, // #3 = $targ16
/*5916*/              OPC_MoveChild, 2,
/*5918*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5921*/              OPC_MoveParent,
/*5922*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*5924*/              OPC_EmitMergeInputChains1_0,
/*5925*/              OPC_EmitConvertToTarget, 2,
/*5927*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8CmpiX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm, SETEQ:Other), (bb:Other):$targ16) - Complexity = 10
                      // Dst: (BteqzT8CmpiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$targ16)
/*5936*/            /*Scope*/ 63, /*->6000*/
/*5937*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*5939*/              OPC_MoveParent,
/*5940*/              OPC_MoveChild, 2,
/*5942*/              OPC_Scope, 27, /*->5971*/ // 2 children in Scope
/*5944*/                OPC_CheckCondCode, ISD::SETGE,
/*5946*/                OPC_MoveParent,
/*5947*/                OPC_CheckType, MVT::i32,
/*5949*/                OPC_MoveParent,
/*5950*/                OPC_RecordChild2, // #3 = $imm16
/*5951*/                OPC_MoveChild, 2,
/*5953*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5956*/                OPC_MoveParent,
/*5957*/                OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*5959*/                OPC_EmitMergeInputChains1_0,
/*5960*/                OPC_EmitConvertToTarget, 2,
/*5962*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8SltiX16), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                        // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, SETGE:Other), (bb:Other):$imm16) - Complexity = 10
                        // Dst: (BteqzT8SltiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$imm16)
/*5971*/              /*Scope*/ 27, /*->5999*/
/*5972*/                OPC_CheckCondCode, ISD::SETLT,
/*5974*/                OPC_MoveParent,
/*5975*/                OPC_CheckType, MVT::i32,
/*5977*/                OPC_MoveParent,
/*5978*/                OPC_RecordChild2, // #3 = $imm16
/*5979*/                OPC_MoveChild, 2,
/*5981*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5984*/                OPC_MoveParent,
/*5985*/                OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*5987*/                OPC_EmitMergeInputChains1_0,
/*5988*/                OPC_EmitConvertToTarget, 2,
/*5990*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8SltiX16), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                        // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, SETLT:Other), (bb:Other):$imm16) - Complexity = 10
                        // Dst: (BtnezT8SltiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$imm16)
/*5999*/              0, /*End of Scope*/
/*6000*/            /*Scope*/ 32, /*->6033*/
/*6001*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*6003*/              OPC_MoveParent,
/*6004*/              OPC_MoveChild, 2,
/*6006*/              OPC_CheckCondCode, ISD::SETNE,
/*6008*/              OPC_MoveParent,
/*6009*/              OPC_CheckType, MVT::i32,
/*6011*/              OPC_MoveParent,
/*6012*/              OPC_RecordChild2, // #3 = $targ16
/*6013*/              OPC_MoveChild, 2,
/*6015*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6018*/              OPC_MoveParent,
/*6019*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6021*/              OPC_EmitMergeInputChains1_0,
/*6022*/              OPC_EmitConvertToTarget, 2,
/*6024*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8CmpiX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm, SETNE:Other), (bb:Other):$targ16) - Complexity = 10
                      // Dst: (BtnezT8CmpiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$targ16)
/*6033*/            0, /*End of Scope*/
/*6034*/          /*Scope*/ 108|128,2/*364*/, /*->6400*/
/*6036*/            OPC_MoveChild, 2,
/*6038*/            OPC_Scope, 25, /*->6065*/ // 12 children in Scope
/*6040*/              OPC_CheckCondCode, ISD::SETEQ,
/*6042*/              OPC_MoveParent,
/*6043*/              OPC_CheckType, MVT::i32,
/*6045*/              OPC_MoveParent,
/*6046*/              OPC_RecordChild2, // #3 = $offset
/*6047*/              OPC_MoveChild, 2,
/*6049*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6052*/              OPC_MoveParent,
/*6053*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6055*/              OPC_EmitMergeInputChains1_0,
/*6056*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$rs, CPURegs:i32:$rt, SETEQ:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (BEQ CPURegs:i32:$rs, CPURegs:i32:$rt, (bb:Other):$offset)
/*6065*/            /*Scope*/ 25, /*->6091*/
/*6066*/              OPC_CheckCondCode, ISD::SETNE,
/*6068*/              OPC_MoveParent,
/*6069*/              OPC_CheckType, MVT::i32,
/*6071*/              OPC_MoveParent,
/*6072*/              OPC_RecordChild2, // #3 = $offset
/*6073*/              OPC_MoveChild, 2,
/*6075*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6078*/              OPC_MoveParent,
/*6079*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6081*/              OPC_EmitMergeInputChains1_0,
/*6082*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$rs, CPURegs:i32:$rt, SETNE:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (BNE CPURegs:i32:$rs, CPURegs:i32:$rt, (bb:Other):$offset)
/*6091*/            /*Scope*/ 37, /*->6129*/
/*6092*/              OPC_CheckCondCode, ISD::SETGE,
/*6094*/              OPC_MoveParent,
/*6095*/              OPC_CheckType, MVT::i32,
/*6097*/              OPC_MoveParent,
/*6098*/              OPC_RecordChild2, // #3 = $dst
/*6099*/              OPC_MoveChild, 2,
/*6101*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6104*/              OPC_MoveParent,
/*6105*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6107*/              OPC_EmitMergeInputChains1_0,
/*6108*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*6117*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6120*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), ZERO:i32, (bb:Other):$dst)
/*6129*/            /*Scope*/ 37, /*->6167*/
/*6130*/              OPC_CheckCondCode, ISD::SETUGE,
/*6132*/              OPC_MoveParent,
/*6133*/              OPC_CheckType, MVT::i32,
/*6135*/              OPC_MoveParent,
/*6136*/              OPC_RecordChild2, // #3 = $dst
/*6137*/              OPC_MoveChild, 2,
/*6139*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6142*/              OPC_MoveParent,
/*6143*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6145*/              OPC_EmitMergeInputChains1_0,
/*6146*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*6155*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6158*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), ZERO:i32, (bb:Other):$dst)
/*6167*/            /*Scope*/ 37, /*->6205*/
/*6168*/              OPC_CheckCondCode, ISD::SETLE,
/*6170*/              OPC_MoveParent,
/*6171*/              OPC_CheckType, MVT::i32,
/*6173*/              OPC_MoveParent,
/*6174*/              OPC_RecordChild2, // #3 = $dst
/*6175*/              OPC_MoveChild, 2,
/*6177*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6180*/              OPC_MoveParent,
/*6181*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6183*/              OPC_EmitMergeInputChains1_0,
/*6184*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*6193*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6196*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), ZERO:i32, (bb:Other):$dst)
/*6205*/            /*Scope*/ 37, /*->6243*/
/*6206*/              OPC_CheckCondCode, ISD::SETULE,
/*6208*/              OPC_MoveParent,
/*6209*/              OPC_CheckType, MVT::i32,
/*6211*/              OPC_MoveParent,
/*6212*/              OPC_RecordChild2, // #3 = $dst
/*6213*/              OPC_MoveChild, 2,
/*6215*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6218*/              OPC_MoveParent,
/*6219*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6221*/              OPC_EmitMergeInputChains1_0,
/*6222*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*6231*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6234*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), ZERO:i32, (bb:Other):$dst)
/*6243*/            /*Scope*/ 25, /*->6269*/
/*6244*/              OPC_CheckCondCode, ISD::SETEQ,
/*6246*/              OPC_MoveParent,
/*6247*/              OPC_CheckType, MVT::i32,
/*6249*/              OPC_MoveParent,
/*6250*/              OPC_RecordChild2, // #3 = $imm16
/*6251*/              OPC_MoveChild, 2,
/*6253*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6256*/              OPC_MoveParent,
/*6257*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6259*/              OPC_EmitMergeInputChains1_0,
/*6260*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8CmpX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETEQ:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BteqzT8CmpX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*6269*/            /*Scope*/ 25, /*->6295*/
/*6270*/              OPC_CheckCondCode, ISD::SETGT,
/*6272*/              OPC_MoveParent,
/*6273*/              OPC_CheckType, MVT::i32,
/*6275*/              OPC_MoveParent,
/*6276*/              OPC_RecordChild2, // #3 = $imm16
/*6277*/              OPC_MoveChild, 2,
/*6279*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6282*/              OPC_MoveParent,
/*6283*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6285*/              OPC_EmitMergeInputChains1_0,
/*6286*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 2, 1, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETGT:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BtnezT8SltX16 CPU16Regs:i32:$ry, CPU16Regs:i32:$rx, (bb:Other):$imm16)
/*6295*/            /*Scope*/ 25, /*->6321*/
/*6296*/              OPC_CheckCondCode, ISD::SETGE,
/*6298*/              OPC_MoveParent,
/*6299*/              OPC_CheckType, MVT::i32,
/*6301*/              OPC_MoveParent,
/*6302*/              OPC_RecordChild2, // #3 = $imm16
/*6303*/              OPC_MoveChild, 2,
/*6305*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6308*/              OPC_MoveParent,
/*6309*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6311*/              OPC_EmitMergeInputChains1_0,
/*6312*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETGE:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BteqzT8SltX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*6321*/            /*Scope*/ 25, /*->6347*/
/*6322*/              OPC_CheckCondCode, ISD::SETLT,
/*6324*/              OPC_MoveParent,
/*6325*/              OPC_CheckType, MVT::i32,
/*6327*/              OPC_MoveParent,
/*6328*/              OPC_RecordChild2, // #3 = $imm16
/*6329*/              OPC_MoveChild, 2,
/*6331*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6334*/              OPC_MoveParent,
/*6335*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6337*/              OPC_EmitMergeInputChains1_0,
/*6338*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETLT:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BtnezT8SltX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*6347*/            /*Scope*/ 25, /*->6373*/
/*6348*/              OPC_CheckCondCode, ISD::SETLE,
/*6350*/              OPC_MoveParent,
/*6351*/              OPC_CheckType, MVT::i32,
/*6353*/              OPC_MoveParent,
/*6354*/              OPC_RecordChild2, // #3 = $imm16
/*6355*/              OPC_MoveChild, 2,
/*6357*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6360*/              OPC_MoveParent,
/*6361*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6363*/              OPC_EmitMergeInputChains1_0,
/*6364*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 2, 1, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETLE:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BteqzT8SltX16 CPU16Regs:i32:$ry, CPU16Regs:i32:$rx, (bb:Other):$imm16)
/*6373*/            /*Scope*/ 25, /*->6399*/
/*6374*/              OPC_CheckCondCode, ISD::SETNE,
/*6376*/              OPC_MoveParent,
/*6377*/              OPC_CheckType, MVT::i32,
/*6379*/              OPC_MoveParent,
/*6380*/              OPC_RecordChild2, // #3 = $imm16
/*6381*/              OPC_MoveChild, 2,
/*6383*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6386*/              OPC_MoveParent,
/*6387*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6389*/              OPC_EmitMergeInputChains1_0,
/*6390*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8CmpX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETNE:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BtnezT8CmpX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*6399*/            0, /*End of Scope*/
/*6400*/          0, /*End of Scope*/
/*6401*/        0, /*End of Scope*/
/*6402*/      /*Scope*/ 97|128,3/*481*/, /*->6885*/
/*6404*/        OPC_CheckChild0Type, MVT::i64,
/*6406*/        OPC_Scope, 39|128,1/*167*/, /*->6576*/ // 2 children in Scope
/*6409*/          OPC_MoveChild, 1,
/*6411*/          OPC_CheckInteger, 0, 
/*6413*/          OPC_MoveParent,
/*6414*/          OPC_MoveChild, 2,
/*6416*/          OPC_Scope, 24, /*->6442*/ // 6 children in Scope
/*6418*/            OPC_CheckCondCode, ISD::SETGE,
/*6420*/            OPC_MoveParent,
/*6421*/            OPC_CheckType, MVT::i32,
/*6423*/            OPC_MoveParent,
/*6424*/            OPC_RecordChild2, // #2 = $offset
/*6425*/            OPC_MoveChild, 2,
/*6427*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6430*/            OPC_MoveParent,
/*6431*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6433*/            OPC_EmitMergeInputChains1_0,
/*6434*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BGEZ64), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, 0:i64, SETGE:Other), (bb:Other):$offset) - Complexity = 11
                    // Dst: (BGEZ64 CPU64Regs:i64:$rs, (bb:Other):$offset)
/*6442*/          /*Scope*/ 24, /*->6467*/
/*6443*/            OPC_CheckCondCode, ISD::SETGT,
/*6445*/            OPC_MoveParent,
/*6446*/            OPC_CheckType, MVT::i32,
/*6448*/            OPC_MoveParent,
/*6449*/            OPC_RecordChild2, // #2 = $offset
/*6450*/            OPC_MoveChild, 2,
/*6452*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6455*/            OPC_MoveParent,
/*6456*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6458*/            OPC_EmitMergeInputChains1_0,
/*6459*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BGTZ64), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, 0:i64, SETGT:Other), (bb:Other):$offset) - Complexity = 11
                    // Dst: (BGTZ64 CPU64Regs:i64:$rs, (bb:Other):$offset)
/*6467*/          /*Scope*/ 24, /*->6492*/
/*6468*/            OPC_CheckCondCode, ISD::SETLE,
/*6470*/            OPC_MoveParent,
/*6471*/            OPC_CheckType, MVT::i32,
/*6473*/            OPC_MoveParent,
/*6474*/            OPC_RecordChild2, // #2 = $offset
/*6475*/            OPC_MoveChild, 2,
/*6477*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6480*/            OPC_MoveParent,
/*6481*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6483*/            OPC_EmitMergeInputChains1_0,
/*6484*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BLEZ64), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, 0:i64, SETLE:Other), (bb:Other):$offset) - Complexity = 11
                    // Dst: (BLEZ64 CPU64Regs:i64:$rs, (bb:Other):$offset)
/*6492*/          /*Scope*/ 24, /*->6517*/
/*6493*/            OPC_CheckCondCode, ISD::SETLT,
/*6495*/            OPC_MoveParent,
/*6496*/            OPC_CheckType, MVT::i32,
/*6498*/            OPC_MoveParent,
/*6499*/            OPC_RecordChild2, // #2 = $offset
/*6500*/            OPC_MoveChild, 2,
/*6502*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6505*/            OPC_MoveParent,
/*6506*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6508*/            OPC_EmitMergeInputChains1_0,
/*6509*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BLTZ64), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, 0:i64, SETLT:Other), (bb:Other):$offset) - Complexity = 11
                    // Dst: (BLTZ64 CPU64Regs:i64:$rs, (bb:Other):$offset)
/*6517*/          /*Scope*/ 28, /*->6546*/
/*6518*/            OPC_CheckCondCode, ISD::SETNE,
/*6520*/            OPC_MoveParent,
/*6521*/            OPC_CheckType, MVT::i32,
/*6523*/            OPC_MoveParent,
/*6524*/            OPC_RecordChild2, // #2 = $dst
/*6525*/            OPC_MoveChild, 2,
/*6527*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6530*/            OPC_MoveParent,
/*6531*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6533*/            OPC_EmitMergeInputChains1_0,
/*6534*/            OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*6537*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BNE64), 0|OPFL_Chain,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BNE64 CPU64Regs:i64:$lhs, ZERO_64:i64, (bb:Other):$dst)
/*6546*/          /*Scope*/ 28, /*->6575*/
/*6547*/            OPC_CheckCondCode, ISD::SETEQ,
/*6549*/            OPC_MoveParent,
/*6550*/            OPC_CheckType, MVT::i32,
/*6552*/            OPC_MoveParent,
/*6553*/            OPC_RecordChild2, // #2 = $dst
/*6554*/            OPC_MoveChild, 2,
/*6556*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6559*/            OPC_MoveParent,
/*6560*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6562*/            OPC_EmitMergeInputChains1_0,
/*6563*/            OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*6566*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ64), 0|OPFL_Chain,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BEQ64 CPU64Regs:i64:$lhs, ZERO_64:i64, (bb:Other):$dst)
/*6575*/          0, /*End of Scope*/
/*6576*/        /*Scope*/ 50|128,2/*306*/, /*->6884*/
/*6578*/          OPC_RecordChild1, // #2 = $rhs
/*6579*/          OPC_Scope, 92, /*->6673*/ // 2 children in Scope
/*6581*/            OPC_MoveChild, 1,
/*6583*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6586*/            OPC_CheckPredicate, 28, // Predicate_immSExt16
/*6588*/            OPC_MoveParent,
/*6589*/            OPC_MoveChild, 2,
/*6591*/            OPC_Scope, 39, /*->6632*/ // 2 children in Scope
/*6593*/              OPC_CheckCondCode, ISD::SETGE,
/*6595*/              OPC_MoveParent,
/*6596*/              OPC_CheckType, MVT::i32,
/*6598*/              OPC_MoveParent,
/*6599*/              OPC_RecordChild2, // #3 = $dst
/*6600*/              OPC_MoveChild, 2,
/*6602*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6605*/              OPC_MoveParent,
/*6606*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6608*/              OPC_EmitMergeInputChains1_0,
/*6609*/              OPC_EmitConvertToTarget, 2,
/*6611*/              OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*6620*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6623*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 10
                      // Dst: (BEQ (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*6632*/            /*Scope*/ 39, /*->6672*/
/*6633*/              OPC_CheckCondCode, ISD::SETUGE,
/*6635*/              OPC_MoveParent,
/*6636*/              OPC_CheckType, MVT::i32,
/*6638*/              OPC_MoveParent,
/*6639*/              OPC_RecordChild2, // #3 = $dst
/*6640*/              OPC_MoveChild, 2,
/*6642*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6645*/              OPC_MoveParent,
/*6646*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6648*/              OPC_EmitMergeInputChains1_0,
/*6649*/              OPC_EmitConvertToTarget, 2,
/*6651*/              OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*6660*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6663*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 10
                      // Dst: (BEQ (SLTiu64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*6672*/            0, /*End of Scope*/
/*6673*/          /*Scope*/ 80|128,1/*208*/, /*->6883*/
/*6675*/            OPC_MoveChild, 2,
/*6677*/            OPC_Scope, 25, /*->6704*/ // 6 children in Scope
/*6679*/              OPC_CheckCondCode, ISD::SETEQ,
/*6681*/              OPC_MoveParent,
/*6682*/              OPC_CheckType, MVT::i32,
/*6684*/              OPC_MoveParent,
/*6685*/              OPC_RecordChild2, // #3 = $offset
/*6686*/              OPC_MoveChild, 2,
/*6688*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6691*/              OPC_MoveParent,
/*6692*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6694*/              OPC_EmitMergeInputChains1_0,
/*6695*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ64), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, SETEQ:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (BEQ64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, (bb:Other):$offset)
/*6704*/            /*Scope*/ 25, /*->6730*/
/*6705*/              OPC_CheckCondCode, ISD::SETNE,
/*6707*/              OPC_MoveParent,
/*6708*/              OPC_CheckType, MVT::i32,
/*6710*/              OPC_MoveParent,
/*6711*/              OPC_RecordChild2, // #3 = $offset
/*6712*/              OPC_MoveChild, 2,
/*6714*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6717*/              OPC_MoveParent,
/*6718*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6720*/              OPC_EmitMergeInputChains1_0,
/*6721*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BNE64), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, SETNE:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (BNE64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, (bb:Other):$offset)
/*6730*/            /*Scope*/ 37, /*->6768*/
/*6731*/              OPC_CheckCondCode, ISD::SETGE,
/*6733*/              OPC_MoveParent,
/*6734*/              OPC_CheckType, MVT::i32,
/*6736*/              OPC_MoveParent,
/*6737*/              OPC_RecordChild2, // #3 = $dst
/*6738*/              OPC_MoveChild, 2,
/*6740*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6743*/              OPC_MoveParent,
/*6744*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6746*/              OPC_EmitMergeInputChains1_0,
/*6747*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*6756*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6759*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), ZERO:i32, (bb:Other):$dst)
/*6768*/            /*Scope*/ 37, /*->6806*/
/*6769*/              OPC_CheckCondCode, ISD::SETUGE,
/*6771*/              OPC_MoveParent,
/*6772*/              OPC_CheckType, MVT::i32,
/*6774*/              OPC_MoveParent,
/*6775*/              OPC_RecordChild2, // #3 = $dst
/*6776*/              OPC_MoveChild, 2,
/*6778*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6781*/              OPC_MoveParent,
/*6782*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6784*/              OPC_EmitMergeInputChains1_0,
/*6785*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*6794*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6797*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), ZERO:i32, (bb:Other):$dst)
/*6806*/            /*Scope*/ 37, /*->6844*/
/*6807*/              OPC_CheckCondCode, ISD::SETLE,
/*6809*/              OPC_MoveParent,
/*6810*/              OPC_CheckType, MVT::i32,
/*6812*/              OPC_MoveParent,
/*6813*/              OPC_RecordChild2, // #3 = $dst
/*6814*/              OPC_MoveChild, 2,
/*6816*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6819*/              OPC_MoveParent,
/*6820*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6822*/              OPC_EmitMergeInputChains1_0,
/*6823*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*6832*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6835*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), ZERO:i32, (bb:Other):$dst)
/*6844*/            /*Scope*/ 37, /*->6882*/
/*6845*/              OPC_CheckCondCode, ISD::SETULE,
/*6847*/              OPC_MoveParent,
/*6848*/              OPC_CheckType, MVT::i32,
/*6850*/              OPC_MoveParent,
/*6851*/              OPC_RecordChild2, // #3 = $dst
/*6852*/              OPC_MoveChild, 2,
/*6854*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6857*/              OPC_MoveParent,
/*6858*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6860*/              OPC_EmitMergeInputChains1_0,
/*6861*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*6870*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6873*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), ZERO:i32, (bb:Other):$dst)
/*6882*/            0, /*End of Scope*/
/*6883*/          0, /*End of Scope*/
/*6884*/        0, /*End of Scope*/
/*6885*/      0, /*End of Scope*/
/*6886*/    /*Scope*/ 68, /*->6955*/
/*6887*/      OPC_RecordChild1, // #1 = $cond
/*6888*/      OPC_Scope, 39, /*->6929*/ // 2 children in Scope
/*6890*/        OPC_CheckChild1Type, MVT::i32,
/*6892*/        OPC_RecordChild2, // #2 = $dst
/*6893*/        OPC_MoveChild, 2,
/*6895*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6898*/        OPC_MoveParent,
/*6899*/        OPC_Scope, 15, /*->6916*/ // 2 children in Scope
/*6901*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6903*/          OPC_EmitMergeInputChains1_0,
/*6904*/          OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6907*/          OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                  // Src: (brcond CPURegs:i32:$cond, (bb:Other):$dst) - Complexity = 3
                  // Dst: (BNE CPURegs:i32:$cond, ZERO:i32, (bb:Other):$dst)
/*6916*/        /*Scope*/ 11, /*->6928*/
/*6917*/          OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6919*/          OPC_EmitMergeInputChains1_0,
/*6920*/          OPC_MorphNodeTo, TARGET_VAL(Mips::BnezRxImmX16), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond CPU16Regs:i32:$rx, (bb:Other):$targ16) - Complexity = 3
                  // Dst: (BnezRxImmX16 CPU16Regs:i32:$rx, (bb:Other):$targ16)
/*6928*/        0, /*End of Scope*/
/*6929*/      /*Scope*/ 24, /*->6954*/
/*6930*/        OPC_CheckChild1Type, MVT::i64,
/*6932*/        OPC_RecordChild2, // #2 = $dst
/*6933*/        OPC_MoveChild, 2,
/*6935*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6938*/        OPC_MoveParent,
/*6939*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6941*/        OPC_EmitMergeInputChains1_0,
/*6942*/        OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*6945*/        OPC_MorphNodeTo, TARGET_VAL(Mips::BNE64), 0|OPFL_Chain,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                // Src: (brcond CPU64Regs:i64:$cond, (bb:Other):$dst) - Complexity = 3
                // Dst: (BNE64 CPU64Regs:i64:$cond, ZERO_64:i64, (bb:Other):$dst)
/*6954*/      0, /*End of Scope*/
/*6955*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 78,  TARGET_VAL(ISD::CTLZ),// ->7037
/*6959*/    OPC_Scope, 47, /*->7008*/ // 2 children in Scope
/*6961*/      OPC_MoveChild, 0,
/*6963*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*6966*/      OPC_RecordChild0, // #0 = $rs
/*6967*/      OPC_MoveChild, 1,
/*6969*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6980*/      OPC_MoveParent,
/*6981*/      OPC_MoveParent,
/*6982*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->6995
/*6985*/        OPC_CheckPatternPredicate, 11, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*6987*/        OPC_MorphNodeTo, TARGET_VAL(Mips::CLO), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (ctlz:i32 (xor:i32 CPURegsOpnd:i32:$rs, -1:i32)) - Complexity = 11
                // Dst: (CLO:i32 CPURegsOpnd:i32:$rs)
              /*SwitchType*/ 10,  MVT::i64,// ->7007
/*6997*/        OPC_CheckPatternPredicate, 11, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*6999*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DCLO), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (ctlz:i64 (xor:i64 CPU64RegsOpnd:i64:$rs, -1:i64)) - Complexity = 11
                // Dst: (DCLO:i64 CPU64RegsOpnd:i64:$rs)
              0, // EndSwitchType
/*7008*/    /*Scope*/ 27, /*->7036*/
/*7009*/      OPC_RecordChild0, // #0 = $rs
/*7010*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->7023
/*7013*/        OPC_CheckPatternPredicate, 11, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*7015*/        OPC_MorphNodeTo, TARGET_VAL(Mips::CLZ), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (ctlz:i32 CPURegsOpnd:i32:$rs) - Complexity = 3
                // Dst: (CLZ:i32 CPURegsOpnd:i32:$rs)
              /*SwitchType*/ 10,  MVT::i64,// ->7035
/*7025*/        OPC_CheckPatternPredicate, 11, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*7027*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DCLZ), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (ctlz:i64 CPU64RegsOpnd:i64:$rs) - Complexity = 3
                // Dst: (DCLZ:i64 CPU64RegsOpnd:i64:$rs)
              0, // EndSwitchType
/*7036*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 118|128,33/*4342*/,  TARGET_VAL(ISD::SELECT),// ->11383
/*7041*/    OPC_Scope, 47|128,16/*2095*/, /*->9139*/ // 4 children in Scope
/*7044*/      OPC_MoveChild, 0,
/*7046*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*7049*/      OPC_RecordChild0, // #0 = $lhs
/*7050*/      OPC_Scope, 67|128,9/*1219*/, /*->8272*/ // 2 children in Scope
/*7053*/        OPC_CheckChild0Type, MVT::i32,
/*7055*/        OPC_Scope, 5|128,1/*133*/, /*->7191*/ // 2 children in Scope
/*7058*/          OPC_MoveChild, 1,
/*7060*/          OPC_CheckInteger, 0, 
/*7062*/          OPC_MoveParent,
/*7063*/          OPC_MoveChild, 2,
/*7065*/          OPC_Scope, 38, /*->7105*/ // 4 children in Scope
/*7067*/            OPC_CheckCondCode, ISD::SETEQ,
/*7069*/            OPC_MoveParent,
/*7070*/            OPC_CheckType, MVT::i32,
/*7072*/            OPC_MoveParent,
/*7073*/            OPC_RecordChild1, // #1 = $T
/*7074*/            OPC_RecordChild2, // #2 = $F
/*7075*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->7090
/*7078*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7080*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 11
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, CPURegs:i32:$lhs, CPURegs:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->7104
/*7092*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7094*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 11
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, CPURegs:i32:$lhs, CPU64Regs:i64:$F)
                    0, // EndSwitchType
/*7105*/          /*Scope*/ 38, /*->7144*/
/*7106*/            OPC_CheckCondCode, ISD::SETNE,
/*7108*/            OPC_MoveParent,
/*7109*/            OPC_CheckType, MVT::i32,
/*7111*/            OPC_MoveParent,
/*7112*/            OPC_RecordChild1, // #1 = $T
/*7113*/            OPC_RecordChild2, // #2 = $F
/*7114*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->7129
/*7117*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7119*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 11
                      // Dst: (MOVN_I_I:i32 CPURegs:i32:$T, CPURegs:i32:$lhs, CPURegs:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->7143
/*7131*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7133*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 11
                      // Dst: (MOVN_I_I64:i64 CPU64Regs:i64:$T, CPURegs:i32:$lhs, CPU64Regs:i64:$F)
                    0, // EndSwitchType
/*7144*/          /*Scope*/ 22, /*->7167*/
/*7145*/            OPC_CheckCondCode, ISD::SETEQ,
/*7147*/            OPC_MoveParent,
/*7148*/            OPC_CheckType, MVT::i32,
/*7150*/            OPC_MoveParent,
/*7151*/            OPC_RecordChild1, // #1 = $x
/*7152*/            OPC_RecordChild2, // #2 = $y
/*7153*/            OPC_CheckType, MVT::i32,
/*7155*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*7157*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SelBeqZ), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, 0:i32, SETEQ:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 11
                    // Dst: (SelBeqZ:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a)
/*7167*/          /*Scope*/ 22, /*->7190*/
/*7168*/            OPC_CheckCondCode, ISD::SETNE,
/*7170*/            OPC_MoveParent,
/*7171*/            OPC_CheckType, MVT::i32,
/*7173*/            OPC_MoveParent,
/*7174*/            OPC_RecordChild1, // #1 = $x
/*7175*/            OPC_RecordChild2, // #2 = $y
/*7176*/            OPC_CheckType, MVT::i32,
/*7178*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*7180*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SelBneZ), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, 0:i32, SETNE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 11
                    // Dst: (SelBneZ:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a)
/*7190*/          0, /*End of Scope*/
/*7191*/        /*Scope*/ 54|128,8/*1078*/, /*->8271*/
/*7193*/          OPC_RecordChild1, // #1 = $rhs
/*7194*/          OPC_Scope, 114|128,3/*498*/, /*->7695*/ // 2 children in Scope
/*7197*/            OPC_MoveChild, 1,
/*7199*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7202*/            OPC_Scope, 75, /*->7279*/ // 8 children in Scope
/*7204*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*7206*/              OPC_MoveParent,
/*7207*/              OPC_MoveChild, 2,
/*7209*/              OPC_Scope, 33, /*->7244*/ // 2 children in Scope
/*7211*/                OPC_CheckCondCode, ISD::SETGE,
/*7213*/                OPC_MoveParent,
/*7214*/                OPC_CheckType, MVT::i32,
/*7216*/                OPC_MoveParent,
/*7217*/                OPC_RecordChild1, // #2 = $T
/*7218*/                OPC_RecordChild2, // #3 = $F
/*7219*/                OPC_CheckType, MVT::i32,
/*7221*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7223*/                OPC_EmitConvertToTarget, 1,
/*7225*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7234*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), CPURegs:i32:$F)
/*7244*/              /*Scope*/ 33, /*->7278*/
/*7245*/                OPC_CheckCondCode, ISD::SETUGE,
/*7247*/                OPC_MoveParent,
/*7248*/                OPC_CheckType, MVT::i32,
/*7250*/                OPC_MoveParent,
/*7251*/                OPC_RecordChild1, // #2 = $T
/*7252*/                OPC_RecordChild2, // #3 = $F
/*7253*/                OPC_CheckType, MVT::i32,
/*7255*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7257*/                OPC_EmitConvertToTarget, 1,
/*7259*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7268*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), CPURegs:i32:$F)
/*7278*/              0, /*End of Scope*/
/*7279*/            /*Scope*/ 81, /*->7361*/
/*7280*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*7282*/              OPC_MoveParent,
/*7283*/              OPC_MoveChild, 2,
/*7285*/              OPC_Scope, 36, /*->7323*/ // 2 children in Scope
/*7287*/                OPC_CheckCondCode, ISD::SETGT,
/*7289*/                OPC_MoveParent,
/*7290*/                OPC_CheckType, MVT::i32,
/*7292*/                OPC_MoveParent,
/*7293*/                OPC_RecordChild1, // #2 = $T
/*7294*/                OPC_RecordChild2, // #3 = $F
/*7295*/                OPC_CheckType, MVT::i32,
/*7297*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7299*/                OPC_EmitConvertToTarget, 1,
/*7301*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*7304*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*7313*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTi:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), CPURegs:i32:$F)
/*7323*/              /*Scope*/ 36, /*->7360*/
/*7324*/                OPC_CheckCondCode, ISD::SETUGT,
/*7326*/                OPC_MoveParent,
/*7327*/                OPC_CheckType, MVT::i32,
/*7329*/                OPC_MoveParent,
/*7330*/                OPC_RecordChild1, // #2 = $T
/*7331*/                OPC_RecordChild2, // #3 = $F
/*7332*/                OPC_CheckType, MVT::i32,
/*7334*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7336*/                OPC_EmitConvertToTarget, 1,
/*7338*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*7341*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*7350*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTiu:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), CPURegs:i32:$F)
/*7360*/              0, /*End of Scope*/
/*7361*/            /*Scope*/ 38, /*->7400*/
/*7362*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*7364*/              OPC_MoveParent,
/*7365*/              OPC_MoveChild, 2,
/*7367*/              OPC_CheckCondCode, ISD::SETEQ,
/*7369*/              OPC_MoveParent,
/*7370*/              OPC_CheckType, MVT::i32,
/*7372*/              OPC_MoveParent,
/*7373*/              OPC_RecordChild1, // #2 = $T
/*7374*/              OPC_RecordChild2, // #3 = $F
/*7375*/              OPC_CheckType, MVT::i32,
/*7377*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7379*/              OPC_EmitConvertToTarget, 1,
/*7381*/              OPC_EmitNode, TARGET_VAL(Mips::XORi), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7390*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (XORi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), CPURegs:i32:$F)
/*7400*/            /*Scope*/ 75, /*->7476*/
/*7401*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*7403*/              OPC_MoveParent,
/*7404*/              OPC_MoveChild, 2,
/*7406*/              OPC_Scope, 33, /*->7441*/ // 2 children in Scope
/*7408*/                OPC_CheckCondCode, ISD::SETGE,
/*7410*/                OPC_MoveParent,
/*7411*/                OPC_CheckType, MVT::i32,
/*7413*/                OPC_MoveParent,
/*7414*/                OPC_RecordChild1, // #2 = $T
/*7415*/                OPC_RecordChild2, // #3 = $F
/*7416*/                OPC_CheckType, MVT::i64,
/*7418*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7420*/                OPC_EmitConvertToTarget, 1,
/*7422*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7431*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), CPU64Regs:i64:$F)
/*7441*/              /*Scope*/ 33, /*->7475*/
/*7442*/                OPC_CheckCondCode, ISD::SETUGE,
/*7444*/                OPC_MoveParent,
/*7445*/                OPC_CheckType, MVT::i32,
/*7447*/                OPC_MoveParent,
/*7448*/                OPC_RecordChild1, // #2 = $T
/*7449*/                OPC_RecordChild2, // #3 = $F
/*7450*/                OPC_CheckType, MVT::i64,
/*7452*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7454*/                OPC_EmitConvertToTarget, 1,
/*7456*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7465*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), CPU64Regs:i64:$F)
/*7475*/              0, /*End of Scope*/
/*7476*/            /*Scope*/ 81, /*->7558*/
/*7477*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*7479*/              OPC_MoveParent,
/*7480*/              OPC_MoveChild, 2,
/*7482*/              OPC_Scope, 36, /*->7520*/ // 2 children in Scope
/*7484*/                OPC_CheckCondCode, ISD::SETGT,
/*7486*/                OPC_MoveParent,
/*7487*/                OPC_CheckType, MVT::i32,
/*7489*/                OPC_MoveParent,
/*7490*/                OPC_RecordChild1, // #2 = $T
/*7491*/                OPC_RecordChild2, // #3 = $F
/*7492*/                OPC_CheckType, MVT::i64,
/*7494*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7496*/                OPC_EmitConvertToTarget, 1,
/*7498*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*7501*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*7510*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTi:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), CPU64Regs:i64:$F)
/*7520*/              /*Scope*/ 36, /*->7557*/
/*7521*/                OPC_CheckCondCode, ISD::SETUGT,
/*7523*/                OPC_MoveParent,
/*7524*/                OPC_CheckType, MVT::i32,
/*7526*/                OPC_MoveParent,
/*7527*/                OPC_RecordChild1, // #2 = $T
/*7528*/                OPC_RecordChild2, // #3 = $F
/*7529*/                OPC_CheckType, MVT::i64,
/*7531*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7533*/                OPC_EmitConvertToTarget, 1,
/*7535*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*7538*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*7547*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTiu:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), CPU64Regs:i64:$F)
/*7557*/              0, /*End of Scope*/
/*7558*/            /*Scope*/ 38, /*->7597*/
/*7559*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*7561*/              OPC_MoveParent,
/*7562*/              OPC_MoveChild, 2,
/*7564*/              OPC_CheckCondCode, ISD::SETEQ,
/*7566*/              OPC_MoveParent,
/*7567*/              OPC_CheckType, MVT::i32,
/*7569*/              OPC_MoveParent,
/*7570*/              OPC_RecordChild1, // #2 = $T
/*7571*/              OPC_RecordChild2, // #3 = $F
/*7572*/              OPC_CheckType, MVT::i64,
/*7574*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7576*/              OPC_EmitConvertToTarget, 1,
/*7578*/              OPC_EmitNode, TARGET_VAL(Mips::XORi), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7587*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (XORi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), CPU64Regs:i64:$F)
/*7597*/            /*Scope*/ 30, /*->7628*/
/*7598*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*7600*/              OPC_MoveParent,
/*7601*/              OPC_MoveChild, 2,
/*7603*/              OPC_CheckCondCode, ISD::SETLT,
/*7605*/              OPC_MoveParent,
/*7606*/              OPC_CheckType, MVT::i32,
/*7608*/              OPC_MoveParent,
/*7609*/              OPC_RecordChild1, // #2 = $x
/*7610*/              OPC_RecordChild2, // #3 = $y
/*7611*/              OPC_CheckType, MVT::i32,
/*7613*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*7615*/              OPC_EmitConvertToTarget, 1,
/*7617*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZSlti), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 4, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immSExt16>>:$b, SETLT:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 10
                      // Dst: (SelTBtneZSlti:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immSExt16>>:$b)
/*7628*/            /*Scope*/ 65, /*->7694*/
/*7629*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*7631*/              OPC_MoveParent,
/*7632*/              OPC_MoveChild, 2,
/*7634*/              OPC_Scope, 28, /*->7664*/ // 2 children in Scope
/*7636*/                OPC_CheckCondCode, ISD::SETEQ,
/*7638*/                OPC_MoveParent,
/*7639*/                OPC_CheckType, MVT::i32,
/*7641*/                OPC_MoveParent,
/*7642*/                OPC_RecordChild1, // #2 = $x
/*7643*/                OPC_RecordChild2, // #3 = $y
/*7644*/                OPC_CheckType, MVT::i32,
/*7646*/                OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*7648*/                OPC_EmitConvertToTarget, 1,
/*7650*/                OPC_EmitNodeXForm, 0, 4, // LO16
/*7653*/                OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZCmpi), 0,
                            1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 5, 
                        // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$k, SETEQ:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 10
                        // Dst: (SelTBteqZCmpi:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, (LO16:i32 (imm:i32)<<P:Predicate_immZExt16>>:$k))
/*7664*/              /*Scope*/ 28, /*->7693*/
/*7665*/                OPC_CheckCondCode, ISD::SETNE,
/*7667*/                OPC_MoveParent,
/*7668*/                OPC_CheckType, MVT::i32,
/*7670*/                OPC_MoveParent,
/*7671*/                OPC_RecordChild1, // #2 = $x
/*7672*/                OPC_RecordChild2, // #3 = $y
/*7673*/                OPC_CheckType, MVT::i32,
/*7675*/                OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*7677*/                OPC_EmitConvertToTarget, 1,
/*7679*/                OPC_EmitNodeXForm, 0, 4, // LO16
/*7682*/                OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZCmpi), 0,
                            1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 5, 
                        // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$k, SETNE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 10
                        // Dst: (SelTBtneZCmpi:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, (LO16:i32 (imm:i32)<<P:Predicate_immZExt16>>:$k))
/*7693*/              0, /*End of Scope*/
/*7694*/            0, /*End of Scope*/
/*7695*/          /*Scope*/ 61|128,4/*573*/, /*->8270*/
/*7697*/            OPC_MoveChild, 2,
/*7699*/            OPC_Scope, 31, /*->7732*/ // 19 children in Scope
/*7701*/              OPC_CheckCondCode, ISD::SETGE,
/*7703*/              OPC_MoveParent,
/*7704*/              OPC_CheckType, MVT::i32,
/*7706*/              OPC_MoveParent,
/*7707*/              OPC_RecordChild1, // #2 = $T
/*7708*/              OPC_RecordChild2, // #3 = $F
/*7709*/              OPC_CheckType, MVT::i32,
/*7711*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7713*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7722*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
/*7732*/            /*Scope*/ 31, /*->7764*/
/*7733*/              OPC_CheckCondCode, ISD::SETUGE,
/*7735*/              OPC_MoveParent,
/*7736*/              OPC_CheckType, MVT::i32,
/*7738*/              OPC_MoveParent,
/*7739*/              OPC_RecordChild1, // #2 = $T
/*7740*/              OPC_RecordChild2, // #3 = $F
/*7741*/              OPC_CheckType, MVT::i32,
/*7743*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7745*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7754*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
/*7764*/            /*Scope*/ 31, /*->7796*/
/*7765*/              OPC_CheckCondCode, ISD::SETLE,
/*7767*/              OPC_MoveParent,
/*7768*/              OPC_CheckType, MVT::i32,
/*7770*/              OPC_MoveParent,
/*7771*/              OPC_RecordChild1, // #2 = $T
/*7772*/              OPC_RecordChild2, // #3 = $F
/*7773*/              OPC_CheckType, MVT::i32,
/*7775*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7777*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*7786*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), CPURegs:i32:$F)
/*7796*/            /*Scope*/ 31, /*->7828*/
/*7797*/              OPC_CheckCondCode, ISD::SETULE,
/*7799*/              OPC_MoveParent,
/*7800*/              OPC_CheckType, MVT::i32,
/*7802*/              OPC_MoveParent,
/*7803*/              OPC_RecordChild1, // #2 = $T
/*7804*/              OPC_RecordChild2, // #3 = $F
/*7805*/              OPC_CheckType, MVT::i32,
/*7807*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7809*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*7818*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), CPURegs:i32:$F)
/*7828*/            /*Scope*/ 31, /*->7860*/
/*7829*/              OPC_CheckCondCode, ISD::SETEQ,
/*7831*/              OPC_MoveParent,
/*7832*/              OPC_CheckType, MVT::i32,
/*7834*/              OPC_MoveParent,
/*7835*/              OPC_RecordChild1, // #2 = $T
/*7836*/              OPC_RecordChild2, // #3 = $F
/*7837*/              OPC_CheckType, MVT::i32,
/*7839*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7841*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7850*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
/*7860*/            /*Scope*/ 31, /*->7892*/
/*7861*/              OPC_CheckCondCode, ISD::SETGE,
/*7863*/              OPC_MoveParent,
/*7864*/              OPC_CheckType, MVT::i32,
/*7866*/              OPC_MoveParent,
/*7867*/              OPC_RecordChild1, // #2 = $T
/*7868*/              OPC_RecordChild2, // #3 = $F
/*7869*/              OPC_CheckType, MVT::i64,
/*7871*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7873*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7882*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPU64Regs:i64:$F)
/*7892*/            /*Scope*/ 31, /*->7924*/
/*7893*/              OPC_CheckCondCode, ISD::SETUGE,
/*7895*/              OPC_MoveParent,
/*7896*/              OPC_CheckType, MVT::i32,
/*7898*/              OPC_MoveParent,
/*7899*/              OPC_RecordChild1, // #2 = $T
/*7900*/              OPC_RecordChild2, // #3 = $F
/*7901*/              OPC_CheckType, MVT::i64,
/*7903*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7905*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7914*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPU64Regs:i64:$F)
/*7924*/            /*Scope*/ 31, /*->7956*/
/*7925*/              OPC_CheckCondCode, ISD::SETLE,
/*7927*/              OPC_MoveParent,
/*7928*/              OPC_CheckType, MVT::i32,
/*7930*/              OPC_MoveParent,
/*7931*/              OPC_RecordChild1, // #2 = $T
/*7932*/              OPC_RecordChild2, // #3 = $F
/*7933*/              OPC_CheckType, MVT::i64,
/*7935*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7937*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*7946*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), CPU64Regs:i64:$F)
/*7956*/            /*Scope*/ 31, /*->7988*/
/*7957*/              OPC_CheckCondCode, ISD::SETULE,
/*7959*/              OPC_MoveParent,
/*7960*/              OPC_CheckType, MVT::i32,
/*7962*/              OPC_MoveParent,
/*7963*/              OPC_RecordChild1, // #2 = $T
/*7964*/              OPC_RecordChild2, // #3 = $F
/*7965*/              OPC_CheckType, MVT::i64,
/*7967*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7969*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*7978*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), CPU64Regs:i64:$F)
/*7988*/            /*Scope*/ 31, /*->8020*/
/*7989*/              OPC_CheckCondCode, ISD::SETEQ,
/*7991*/              OPC_MoveParent,
/*7992*/              OPC_CheckType, MVT::i32,
/*7994*/              OPC_MoveParent,
/*7995*/              OPC_RecordChild1, // #2 = $T
/*7996*/              OPC_RecordChild2, // #3 = $F
/*7997*/              OPC_CheckType, MVT::i64,
/*7999*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8001*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8010*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPU64Regs:i64:$F)
/*8020*/            /*Scope*/ 56, /*->8077*/
/*8021*/              OPC_CheckCondCode, ISD::SETNE,
/*8023*/              OPC_MoveParent,
/*8024*/              OPC_CheckType, MVT::i32,
/*8026*/              OPC_MoveParent,
/*8027*/              OPC_RecordChild1, // #2 = $T
/*8028*/              OPC_RecordChild2, // #3 = $F
/*8029*/              OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->8053
/*8032*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8034*/                OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8043*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                        // Dst: (MOVN_I_I:i32 CPURegs:i32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
                      /*SwitchType*/ 21,  MVT::i64,// ->8076
/*8055*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8057*/                OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8066*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                        // Dst: (MOVN_I_I64:i64 CPU64Regs:i64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPU64Regs:i64:$F)
                      0, // EndSwitchType
/*8077*/            /*Scope*/ 23, /*->8101*/
/*8078*/              OPC_CheckCondCode, ISD::SETGE,
/*8080*/              OPC_MoveParent,
/*8081*/              OPC_CheckType, MVT::i32,
/*8083*/              OPC_MoveParent,
/*8084*/              OPC_RecordChild1, // #2 = $x
/*8085*/              OPC_RecordChild2, // #3 = $y
/*8086*/              OPC_CheckType, MVT::i32,
/*8088*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8090*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSlt), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 1, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETGE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSlt:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, CPU16Regs:i32:$b)
/*8101*/            /*Scope*/ 23, /*->8125*/
/*8102*/              OPC_CheckCondCode, ISD::SETGT,
/*8104*/              OPC_MoveParent,
/*8105*/              OPC_CheckType, MVT::i32,
/*8107*/              OPC_MoveParent,
/*8108*/              OPC_RecordChild1, // #2 = $x
/*8109*/              OPC_RecordChild2, // #3 = $y
/*8110*/              OPC_CheckType, MVT::i32,
/*8112*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8114*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZSlt), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETGT:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBtneZSlt:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8125*/            /*Scope*/ 23, /*->8149*/
/*8126*/              OPC_CheckCondCode, ISD::SETUGE,
/*8128*/              OPC_MoveParent,
/*8129*/              OPC_CheckType, MVT::i32,
/*8131*/              OPC_MoveParent,
/*8132*/              OPC_RecordChild1, // #2 = $x
/*8133*/              OPC_RecordChild2, // #3 = $y
/*8134*/              OPC_CheckType, MVT::i32,
/*8136*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8138*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSltu), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 1, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETUGE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSltu:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, CPU16Regs:i32:$b)
/*8149*/            /*Scope*/ 23, /*->8173*/
/*8150*/              OPC_CheckCondCode, ISD::SETUGT,
/*8152*/              OPC_MoveParent,
/*8153*/              OPC_CheckType, MVT::i32,
/*8155*/              OPC_MoveParent,
/*8156*/              OPC_RecordChild1, // #2 = $x
/*8157*/              OPC_RecordChild2, // #3 = $y
/*8158*/              OPC_CheckType, MVT::i32,
/*8160*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8162*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZSltu), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETUGT:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBtneZSltu:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8173*/            /*Scope*/ 23, /*->8197*/
/*8174*/              OPC_CheckCondCode, ISD::SETLE,
/*8176*/              OPC_MoveParent,
/*8177*/              OPC_CheckType, MVT::i32,
/*8179*/              OPC_MoveParent,
/*8180*/              OPC_RecordChild1, // #2 = $x
/*8181*/              OPC_RecordChild2, // #3 = $y
/*8182*/              OPC_CheckType, MVT::i32,
/*8184*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8186*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSlt), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETLE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSlt:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8197*/            /*Scope*/ 23, /*->8221*/
/*8198*/              OPC_CheckCondCode, ISD::SETULE,
/*8200*/              OPC_MoveParent,
/*8201*/              OPC_CheckType, MVT::i32,
/*8203*/              OPC_MoveParent,
/*8204*/              OPC_RecordChild1, // #2 = $x
/*8205*/              OPC_RecordChild2, // #3 = $y
/*8206*/              OPC_CheckType, MVT::i32,
/*8208*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8210*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSltu), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETULE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSltu:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8221*/            /*Scope*/ 23, /*->8245*/
/*8222*/              OPC_CheckCondCode, ISD::SETEQ,
/*8224*/              OPC_MoveParent,
/*8225*/              OPC_CheckType, MVT::i32,
/*8227*/              OPC_MoveParent,
/*8228*/              OPC_RecordChild1, // #2 = $x
/*8229*/              OPC_RecordChild2, // #3 = $y
/*8230*/              OPC_CheckType, MVT::i32,
/*8232*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8234*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZCmp), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETEQ:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZCmp:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8245*/            /*Scope*/ 23, /*->8269*/
/*8246*/              OPC_CheckCondCode, ISD::SETNE,
/*8248*/              OPC_MoveParent,
/*8249*/              OPC_CheckType, MVT::i32,
/*8251*/              OPC_MoveParent,
/*8252*/              OPC_RecordChild1, // #2 = $x
/*8253*/              OPC_RecordChild2, // #3 = $y
/*8254*/              OPC_CheckType, MVT::i32,
/*8256*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8258*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZCmp), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETNE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBtneZCmp:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8269*/            0, /*End of Scope*/
/*8270*/          0, /*End of Scope*/
/*8271*/        0, /*End of Scope*/
/*8272*/      /*Scope*/ 96|128,6/*864*/, /*->9138*/
/*8274*/        OPC_CheckChild0Type, MVT::i64,
/*8276*/        OPC_Scope, 87, /*->8365*/ // 2 children in Scope
/*8278*/          OPC_MoveChild, 1,
/*8280*/          OPC_CheckInteger, 0, 
/*8282*/          OPC_MoveParent,
/*8283*/          OPC_MoveChild, 2,
/*8285*/          OPC_Scope, 38, /*->8325*/ // 2 children in Scope
/*8287*/            OPC_CheckCondCode, ISD::SETEQ,
/*8289*/            OPC_MoveParent,
/*8290*/            OPC_CheckType, MVT::i32,
/*8292*/            OPC_MoveParent,
/*8293*/            OPC_RecordChild1, // #1 = $T
/*8294*/            OPC_RecordChild2, // #2 = $F
/*8295*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->8310
/*8298*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8300*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 11
                      // Dst: (MOVZ_I64_I:i32 CPURegs:i32:$T, CPU64Regs:i64:$lhs, CPURegs:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->8324
/*8312*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8314*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 11
                      // Dst: (MOVZ_I64_I64:i64 CPU64Regs:i64:$T, CPU64Regs:i64:$lhs, CPU64Regs:i64:$F)
                    0, // EndSwitchType
/*8325*/          /*Scope*/ 38, /*->8364*/
/*8326*/            OPC_CheckCondCode, ISD::SETNE,
/*8328*/            OPC_MoveParent,
/*8329*/            OPC_CheckType, MVT::i32,
/*8331*/            OPC_MoveParent,
/*8332*/            OPC_RecordChild1, // #1 = $T
/*8333*/            OPC_RecordChild2, // #2 = $F
/*8334*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->8349
/*8337*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8339*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 11
                      // Dst: (MOVN_I64_I:i32 CPURegs:i32:$T, CPU64Regs:i64:$lhs, CPURegs:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->8363
/*8351*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8353*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 11
                      // Dst: (MOVN_I64_I64:i64 CPU64Regs:i64:$T, CPU64Regs:i64:$lhs, CPU64Regs:i64:$F)
                    0, // EndSwitchType
/*8364*/          0, /*End of Scope*/
/*8365*/        /*Scope*/ 2|128,6/*770*/, /*->9137*/
/*8367*/          OPC_RecordChild1, // #1 = $rhs
/*8368*/          OPC_Scope, 5|128,3/*389*/, /*->8760*/ // 2 children in Scope
/*8371*/            OPC_MoveChild, 1,
/*8373*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8376*/            OPC_Scope, 75, /*->8453*/ // 5 children in Scope
/*8378*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*8380*/              OPC_MoveParent,
/*8381*/              OPC_MoveChild, 2,
/*8383*/              OPC_Scope, 33, /*->8418*/ // 2 children in Scope
/*8385*/                OPC_CheckCondCode, ISD::SETGE,
/*8387*/                OPC_MoveParent,
/*8388*/                OPC_CheckType, MVT::i32,
/*8390*/                OPC_MoveParent,
/*8391*/                OPC_RecordChild1, // #2 = $T
/*8392*/                OPC_RecordChild2, // #3 = $F
/*8393*/                OPC_CheckType, MVT::i32,
/*8395*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8397*/                OPC_EmitConvertToTarget, 1,
/*8399*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8408*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), CPURegs:i32:$F)
/*8418*/              /*Scope*/ 33, /*->8452*/
/*8419*/                OPC_CheckCondCode, ISD::SETUGE,
/*8421*/                OPC_MoveParent,
/*8422*/                OPC_CheckType, MVT::i32,
/*8424*/                OPC_MoveParent,
/*8425*/                OPC_RecordChild1, // #2 = $T
/*8426*/                OPC_RecordChild2, // #3 = $F
/*8427*/                OPC_CheckType, MVT::i32,
/*8429*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8431*/                OPC_EmitConvertToTarget, 1,
/*8433*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8442*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTiu64:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), CPURegs:i32:$F)
/*8452*/              0, /*End of Scope*/
/*8453*/            /*Scope*/ 81, /*->8535*/
/*8454*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*8456*/              OPC_MoveParent,
/*8457*/              OPC_MoveChild, 2,
/*8459*/              OPC_Scope, 36, /*->8497*/ // 2 children in Scope
/*8461*/                OPC_CheckCondCode, ISD::SETGT,
/*8463*/                OPC_MoveParent,
/*8464*/                OPC_CheckType, MVT::i32,
/*8466*/                OPC_MoveParent,
/*8467*/                OPC_RecordChild1, // #2 = $T
/*8468*/                OPC_RecordChild2, // #3 = $F
/*8469*/                OPC_CheckType, MVT::i32,
/*8471*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8473*/                OPC_EmitConvertToTarget, 1,
/*8475*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*8478*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*8487*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), CPURegs:i32:$F)
/*8497*/              /*Scope*/ 36, /*->8534*/
/*8498*/                OPC_CheckCondCode, ISD::SETUGT,
/*8500*/                OPC_MoveParent,
/*8501*/                OPC_CheckType, MVT::i32,
/*8503*/                OPC_MoveParent,
/*8504*/                OPC_RecordChild1, // #2 = $T
/*8505*/                OPC_RecordChild2, // #3 = $F
/*8506*/                OPC_CheckType, MVT::i32,
/*8508*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8510*/                OPC_EmitConvertToTarget, 1,
/*8512*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*8515*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*8524*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTiu64:i32 CPU64Regs:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), CPURegs:i32:$F)
/*8534*/              0, /*End of Scope*/
/*8535*/            /*Scope*/ 75, /*->8611*/
/*8536*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*8538*/              OPC_MoveParent,
/*8539*/              OPC_MoveChild, 2,
/*8541*/              OPC_Scope, 33, /*->8576*/ // 2 children in Scope
/*8543*/                OPC_CheckCondCode, ISD::SETGE,
/*8545*/                OPC_MoveParent,
/*8546*/                OPC_CheckType, MVT::i32,
/*8548*/                OPC_MoveParent,
/*8549*/                OPC_RecordChild1, // #2 = $T
/*8550*/                OPC_RecordChild2, // #3 = $F
/*8551*/                OPC_CheckType, MVT::i64,
/*8553*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8555*/                OPC_EmitConvertToTarget, 1,
/*8557*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8566*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), CPU64Regs:i64:$F)
/*8576*/              /*Scope*/ 33, /*->8610*/
/*8577*/                OPC_CheckCondCode, ISD::SETUGE,
/*8579*/                OPC_MoveParent,
/*8580*/                OPC_CheckType, MVT::i32,
/*8582*/                OPC_MoveParent,
/*8583*/                OPC_RecordChild1, // #2 = $T
/*8584*/                OPC_RecordChild2, // #3 = $F
/*8585*/                OPC_CheckType, MVT::i64,
/*8587*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8589*/                OPC_EmitConvertToTarget, 1,
/*8591*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8600*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTiu64:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), CPU64Regs:i64:$F)
/*8610*/              0, /*End of Scope*/
/*8611*/            /*Scope*/ 81, /*->8693*/
/*8612*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*8614*/              OPC_MoveParent,
/*8615*/              OPC_MoveChild, 2,
/*8617*/              OPC_Scope, 36, /*->8655*/ // 2 children in Scope
/*8619*/                OPC_CheckCondCode, ISD::SETGT,
/*8621*/                OPC_MoveParent,
/*8622*/                OPC_CheckType, MVT::i32,
/*8624*/                OPC_MoveParent,
/*8625*/                OPC_RecordChild1, // #2 = $T
/*8626*/                OPC_RecordChild2, // #3 = $F
/*8627*/                OPC_CheckType, MVT::i64,
/*8629*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8631*/                OPC_EmitConvertToTarget, 1,
/*8633*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*8636*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*8645*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), CPU64Regs:i64:$F)
/*8655*/              /*Scope*/ 36, /*->8692*/
/*8656*/                OPC_CheckCondCode, ISD::SETUGT,
/*8658*/                OPC_MoveParent,
/*8659*/                OPC_CheckType, MVT::i32,
/*8661*/                OPC_MoveParent,
/*8662*/                OPC_RecordChild1, // #2 = $T
/*8663*/                OPC_RecordChild2, // #3 = $F
/*8664*/                OPC_CheckType, MVT::i64,
/*8666*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8668*/                OPC_EmitConvertToTarget, 1,
/*8670*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*8673*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*8682*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTiu64:i32 CPU64Regs:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), CPU64Regs:i64:$F)
/*8692*/              0, /*End of Scope*/
/*8693*/            /*Scope*/ 65, /*->8759*/
/*8694*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*8696*/              OPC_MoveParent,
/*8697*/              OPC_MoveChild, 2,
/*8699*/              OPC_CheckCondCode, ISD::SETEQ,
/*8701*/              OPC_MoveParent,
/*8702*/              OPC_CheckType, MVT::i32,
/*8704*/              OPC_MoveParent,
/*8705*/              OPC_RecordChild1, // #2 = $T
/*8706*/              OPC_RecordChild2, // #3 = $F
/*8707*/              OPC_SwitchType /*2 cases */, 23,  MVT::i32,// ->8733
/*8710*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8712*/                OPC_EmitConvertToTarget, 1,
/*8714*/                OPC_EmitNode, TARGET_VAL(Mips::XORi64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 4,  // Results = #5
/*8723*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I64_I:i32 CPURegs:i32:$T, (XORi64:i64 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), CPURegs:i32:$F)
                      /*SwitchType*/ 23,  MVT::i64,// ->8758
/*8735*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8737*/                OPC_EmitConvertToTarget, 1,
/*8739*/                OPC_EmitNode, TARGET_VAL(Mips::XORi64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 4,  // Results = #5
/*8748*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I64_I64:i64 CPU64Regs:i64:$T, (XORi64:i64 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), CPU64Regs:i64:$F)
                      0, // EndSwitchType
/*8759*/            0, /*End of Scope*/
/*8760*/          /*Scope*/ 118|128,2/*374*/, /*->9136*/
/*8762*/            OPC_MoveChild, 2,
/*8764*/            OPC_Scope, 31, /*->8797*/ // 10 children in Scope
/*8766*/              OPC_CheckCondCode, ISD::SETGE,
/*8768*/              OPC_MoveParent,
/*8769*/              OPC_CheckType, MVT::i32,
/*8771*/              OPC_MoveParent,
/*8772*/              OPC_RecordChild1, // #2 = $T
/*8773*/              OPC_RecordChild2, // #3 = $F
/*8774*/              OPC_CheckType, MVT::i32,
/*8776*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8778*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8787*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPURegs:i32:$F)
/*8797*/            /*Scope*/ 31, /*->8829*/
/*8798*/              OPC_CheckCondCode, ISD::SETUGE,
/*8800*/              OPC_MoveParent,
/*8801*/              OPC_CheckType, MVT::i32,
/*8803*/              OPC_MoveParent,
/*8804*/              OPC_RecordChild1, // #2 = $T
/*8805*/              OPC_RecordChild2, // #3 = $F
/*8806*/              OPC_CheckType, MVT::i32,
/*8808*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8810*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8819*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPURegs:i32:$F)
/*8829*/            /*Scope*/ 31, /*->8861*/
/*8830*/              OPC_CheckCondCode, ISD::SETLE,
/*8832*/              OPC_MoveParent,
/*8833*/              OPC_CheckType, MVT::i32,
/*8835*/              OPC_MoveParent,
/*8836*/              OPC_RecordChild1, // #2 = $T
/*8837*/              OPC_RecordChild2, // #3 = $F
/*8838*/              OPC_CheckType, MVT::i32,
/*8840*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8842*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*8851*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), CPURegs:i32:$F)
/*8861*/            /*Scope*/ 31, /*->8893*/
/*8862*/              OPC_CheckCondCode, ISD::SETULE,
/*8864*/              OPC_MoveParent,
/*8865*/              OPC_CheckType, MVT::i32,
/*8867*/              OPC_MoveParent,
/*8868*/              OPC_RecordChild1, // #2 = $T
/*8869*/              OPC_RecordChild2, // #3 = $F
/*8870*/              OPC_CheckType, MVT::i32,
/*8872*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8874*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*8883*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), CPURegs:i32:$F)
/*8893*/            /*Scope*/ 31, /*->8925*/
/*8894*/              OPC_CheckCondCode, ISD::SETGE,
/*8896*/              OPC_MoveParent,
/*8897*/              OPC_CheckType, MVT::i32,
/*8899*/              OPC_MoveParent,
/*8900*/              OPC_RecordChild1, // #2 = $T
/*8901*/              OPC_RecordChild2, // #3 = $F
/*8902*/              OPC_CheckType, MVT::i64,
/*8904*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8906*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8915*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPU64Regs:i64:$F)
/*8925*/            /*Scope*/ 31, /*->8957*/
/*8926*/              OPC_CheckCondCode, ISD::SETUGE,
/*8928*/              OPC_MoveParent,
/*8929*/              OPC_CheckType, MVT::i32,
/*8931*/              OPC_MoveParent,
/*8932*/              OPC_RecordChild1, // #2 = $T
/*8933*/              OPC_RecordChild2, // #3 = $F
/*8934*/              OPC_CheckType, MVT::i64,
/*8936*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8938*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8947*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPU64Regs:i64:$F)
/*8957*/            /*Scope*/ 31, /*->8989*/
/*8958*/              OPC_CheckCondCode, ISD::SETLE,
/*8960*/              OPC_MoveParent,
/*8961*/              OPC_CheckType, MVT::i32,
/*8963*/              OPC_MoveParent,
/*8964*/              OPC_RecordChild1, // #2 = $T
/*8965*/              OPC_RecordChild2, // #3 = $F
/*8966*/              OPC_CheckType, MVT::i64,
/*8968*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8970*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*8979*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), CPU64Regs:i64:$F)
/*8989*/            /*Scope*/ 31, /*->9021*/
/*8990*/              OPC_CheckCondCode, ISD::SETULE,
/*8992*/              OPC_MoveParent,
/*8993*/              OPC_CheckType, MVT::i32,
/*8995*/              OPC_MoveParent,
/*8996*/              OPC_RecordChild1, // #2 = $T
/*8997*/              OPC_RecordChild2, // #3 = $F
/*8998*/              OPC_CheckType, MVT::i64,
/*9000*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9002*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*9011*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), CPU64Regs:i64:$F)
/*9021*/            /*Scope*/ 56, /*->9078*/
/*9022*/              OPC_CheckCondCode, ISD::SETEQ,
/*9024*/              OPC_MoveParent,
/*9025*/              OPC_CheckType, MVT::i32,
/*9027*/              OPC_MoveParent,
/*9028*/              OPC_RecordChild1, // #2 = $T
/*9029*/              OPC_RecordChild2, // #3 = $F
/*9030*/              OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->9054
/*9033*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9035*/                OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*9044*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                        // Dst: (MOVZ_I64_I:i32 CPURegs:i32:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPURegs:i32:$F)
                      /*SwitchType*/ 21,  MVT::i64,// ->9077
/*9056*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9058*/                OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*9067*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                        // Dst: (MOVZ_I64_I64:i64 CPU64Regs:i64:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPU64Regs:i64:$F)
                      0, // EndSwitchType
/*9078*/            /*Scope*/ 56, /*->9135*/
/*9079*/              OPC_CheckCondCode, ISD::SETNE,
/*9081*/              OPC_MoveParent,
/*9082*/              OPC_CheckType, MVT::i32,
/*9084*/              OPC_MoveParent,
/*9085*/              OPC_RecordChild1, // #2 = $T
/*9086*/              OPC_RecordChild2, // #3 = $F
/*9087*/              OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->9111
/*9090*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9092*/                OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*9101*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                        // Dst: (MOVN_I64_I:i32 CPURegs:i32:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPURegs:i32:$F)
                      /*SwitchType*/ 21,  MVT::i64,// ->9134
/*9113*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9115*/                OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*9124*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                        // Dst: (MOVN_I64_I64:i64 CPU64Regs:i64:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPU64Regs:i64:$F)
                      0, // EndSwitchType
/*9135*/            0, /*End of Scope*/
/*9136*/          0, /*End of Scope*/
/*9137*/        0, /*End of Scope*/
/*9138*/      0, /*End of Scope*/
/*9139*/    /*Scope*/ 89, /*->9229*/
/*9140*/      OPC_RecordChild0, // #0 = $cond
/*9141*/      OPC_Scope, 50, /*->9193*/ // 2 children in Scope
/*9143*/        OPC_CheckChild0Type, MVT::i32,
/*9145*/        OPC_RecordChild1, // #1 = $T
/*9146*/        OPC_RecordChild2, // #2 = $F
/*9147*/        OPC_SwitchType /*2 cases */, 28,  MVT::i32,// ->9178
/*9150*/          OPC_Scope, 12, /*->9164*/ // 2 children in Scope
/*9152*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9154*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:i32 CPURegs:i32:$cond, CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 3
                    // Dst: (MOVN_I_I:i32 CPURegs:i32:$T, CPURegs:i32:$cond, CPURegs:i32:$F)
/*9164*/          /*Scope*/ 12, /*->9177*/
/*9165*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*9167*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SelBneZ), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (select:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 3
                    // Dst: (SelBneZ:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a)
/*9177*/          0, /*End of Scope*/
                /*SwitchType*/ 12,  MVT::i64,// ->9192
/*9180*/          OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9182*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I64), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i64 CPURegs:i32:$cond, CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 3
                  // Dst: (MOVN_I_I64:i64 CPU64Regs:i64:$T, CPURegs:i32:$cond, CPU64Regs:i64:$F)
                0, // EndSwitchType
/*9193*/      /*Scope*/ 34, /*->9228*/
/*9194*/        OPC_CheckChild0Type, MVT::i64,
/*9196*/        OPC_RecordChild1, // #1 = $T
/*9197*/        OPC_RecordChild2, // #2 = $F
/*9198*/        OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9213
/*9201*/          OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9203*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i32 CPU64Regs:i64:$cond, CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 3
                  // Dst: (MOVN_I64_I:i32 CPURegs:i32:$T, CPU64Regs:i64:$cond, CPURegs:i32:$F)
                /*SwitchType*/ 12,  MVT::i64,// ->9227
/*9215*/          OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9217*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I64), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i64 CPU64Regs:i64:$cond, CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 3
                  // Dst: (MOVN_I64_I64:i64 CPU64Regs:i64:$T, CPU64Regs:i64:$cond, CPU64Regs:i64:$F)
                0, // EndSwitchType
/*9228*/      0, /*End of Scope*/
/*9229*/    /*Scope*/ 13|128,16/*2061*/, /*->11292*/
/*9231*/      OPC_MoveChild, 0,
/*9233*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*9236*/      OPC_RecordChild0, // #0 = $lhs
/*9237*/      OPC_Scope, 71|128,9/*1223*/, /*->10463*/ // 2 children in Scope
/*9240*/        OPC_CheckChild0Type, MVT::i32,
/*9242*/        OPC_Scope, 19|128,1/*147*/, /*->9392*/ // 2 children in Scope
/*9245*/          OPC_MoveChild, 1,
/*9247*/          OPC_CheckInteger, 0, 
/*9249*/          OPC_MoveParent,
/*9250*/          OPC_MoveChild, 2,
/*9252*/          OPC_Scope, 22, /*->9276*/ // 6 children in Scope
/*9254*/            OPC_CheckCondCode, ISD::SETEQ,
/*9256*/            OPC_MoveParent,
/*9257*/            OPC_CheckType, MVT::i32,
/*9259*/            OPC_MoveParent,
/*9260*/            OPC_RecordChild1, // #1 = $T
/*9261*/            OPC_RecordChild2, // #2 = $F
/*9262*/            OPC_CheckType, MVT::f32,
/*9264*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9266*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, CPURegs:i32:$lhs, FGR32:f32:$F)
/*9276*/          /*Scope*/ 22, /*->9299*/
/*9277*/            OPC_CheckCondCode, ISD::SETNE,
/*9279*/            OPC_MoveParent,
/*9280*/            OPC_CheckType, MVT::i32,
/*9282*/            OPC_MoveParent,
/*9283*/            OPC_RecordChild1, // #1 = $T
/*9284*/            OPC_RecordChild2, // #2 = $F
/*9285*/            OPC_CheckType, MVT::f32,
/*9287*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9289*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVN_I_S:f32 FGR32:f32:$T, CPURegs:i32:$lhs, FGR32:f32:$F)
/*9299*/          /*Scope*/ 22, /*->9322*/
/*9300*/            OPC_CheckCondCode, ISD::SETEQ,
/*9302*/            OPC_MoveParent,
/*9303*/            OPC_CheckType, MVT::i32,
/*9305*/            OPC_MoveParent,
/*9306*/            OPC_RecordChild1, // #1 = $T
/*9307*/            OPC_RecordChild2, // #2 = $F
/*9308*/            OPC_CheckType, MVT::f64,
/*9310*/            OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9312*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, CPURegs:i32:$lhs, AFGR64:f64:$F)
/*9322*/          /*Scope*/ 22, /*->9345*/
/*9323*/            OPC_CheckCondCode, ISD::SETNE,
/*9325*/            OPC_MoveParent,
/*9326*/            OPC_CheckType, MVT::i32,
/*9328*/            OPC_MoveParent,
/*9329*/            OPC_RecordChild1, // #1 = $T
/*9330*/            OPC_RecordChild2, // #2 = $F
/*9331*/            OPC_CheckType, MVT::f64,
/*9333*/            OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9335*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVN_I_D32:f64 AFGR64:f64:$T, CPURegs:i32:$lhs, AFGR64:f64:$F)
/*9345*/          /*Scope*/ 22, /*->9368*/
/*9346*/            OPC_CheckCondCode, ISD::SETEQ,
/*9348*/            OPC_MoveParent,
/*9349*/            OPC_CheckType, MVT::i32,
/*9351*/            OPC_MoveParent,
/*9352*/            OPC_RecordChild1, // #1 = $T
/*9353*/            OPC_RecordChild2, // #2 = $F
/*9354*/            OPC_CheckType, MVT::f64,
/*9356*/            OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9358*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, CPURegs:i32:$lhs, FGR64:f64:$F)
/*9368*/          /*Scope*/ 22, /*->9391*/
/*9369*/            OPC_CheckCondCode, ISD::SETNE,
/*9371*/            OPC_MoveParent,
/*9372*/            OPC_CheckType, MVT::i32,
/*9374*/            OPC_MoveParent,
/*9375*/            OPC_RecordChild1, // #1 = $T
/*9376*/            OPC_RecordChild2, // #2 = $F
/*9377*/            OPC_CheckType, MVT::f64,
/*9379*/            OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9381*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVN_I_D64:f64 FGR64:f64:$T, CPURegs:i32:$lhs, FGR64:f64:$F)
/*9391*/          0, /*End of Scope*/
/*9392*/        /*Scope*/ 44|128,8/*1068*/, /*->10462*/
/*9394*/          OPC_RecordChild1, // #1 = $rhs
/*9395*/          OPC_Scope, 97|128,3/*481*/, /*->9879*/ // 2 children in Scope
/*9398*/            OPC_MoveChild, 1,
/*9400*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9403*/            OPC_Scope, 75, /*->9480*/ // 6 children in Scope
/*9405*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*9407*/              OPC_MoveParent,
/*9408*/              OPC_MoveChild, 2,
/*9410*/              OPC_Scope, 33, /*->9445*/ // 2 children in Scope
/*9412*/                OPC_CheckCondCode, ISD::SETGE,
/*9414*/                OPC_MoveParent,
/*9415*/                OPC_CheckType, MVT::i32,
/*9417*/                OPC_MoveParent,
/*9418*/                OPC_RecordChild1, // #2 = $T
/*9419*/                OPC_RecordChild2, // #3 = $F
/*9420*/                OPC_CheckType, MVT::f32,
/*9422*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9424*/                OPC_EmitConvertToTarget, 1,
/*9426*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9435*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), FGR32:f32:$F)
/*9445*/              /*Scope*/ 33, /*->9479*/
/*9446*/                OPC_CheckCondCode, ISD::SETUGE,
/*9448*/                OPC_MoveParent,
/*9449*/                OPC_CheckType, MVT::i32,
/*9451*/                OPC_MoveParent,
/*9452*/                OPC_RecordChild1, // #2 = $T
/*9453*/                OPC_RecordChild2, // #3 = $F
/*9454*/                OPC_CheckType, MVT::f32,
/*9456*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9458*/                OPC_EmitConvertToTarget, 1,
/*9460*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9469*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f32 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), FGR32:f32:$F)
/*9479*/              0, /*End of Scope*/
/*9480*/            /*Scope*/ 81, /*->9562*/
/*9481*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*9483*/              OPC_MoveParent,
/*9484*/              OPC_MoveChild, 2,
/*9486*/              OPC_Scope, 36, /*->9524*/ // 2 children in Scope
/*9488*/                OPC_CheckCondCode, ISD::SETGT,
/*9490*/                OPC_MoveParent,
/*9491*/                OPC_CheckType, MVT::i32,
/*9493*/                OPC_MoveParent,
/*9494*/                OPC_RecordChild1, // #2 = $T
/*9495*/                OPC_RecordChild2, // #3 = $F
/*9496*/                OPC_CheckType, MVT::f32,
/*9498*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9500*/                OPC_EmitConvertToTarget, 1,
/*9502*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*9505*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*9514*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTi:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), FGR32:f32:$F)
/*9524*/              /*Scope*/ 36, /*->9561*/
/*9525*/                OPC_CheckCondCode, ISD::SETUGT,
/*9527*/                OPC_MoveParent,
/*9528*/                OPC_CheckType, MVT::i32,
/*9530*/                OPC_MoveParent,
/*9531*/                OPC_RecordChild1, // #2 = $T
/*9532*/                OPC_RecordChild2, // #3 = $F
/*9533*/                OPC_CheckType, MVT::f32,
/*9535*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9537*/                OPC_EmitConvertToTarget, 1,
/*9539*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*9542*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*9551*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTiu:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), FGR32:f32:$F)
/*9561*/              0, /*End of Scope*/
/*9562*/            /*Scope*/ 75, /*->9638*/
/*9563*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*9565*/              OPC_MoveParent,
/*9566*/              OPC_MoveChild, 2,
/*9568*/              OPC_Scope, 33, /*->9603*/ // 2 children in Scope
/*9570*/                OPC_CheckCondCode, ISD::SETGE,
/*9572*/                OPC_MoveParent,
/*9573*/                OPC_CheckType, MVT::i32,
/*9575*/                OPC_MoveParent,
/*9576*/                OPC_RecordChild1, // #2 = $T
/*9577*/                OPC_RecordChild2, // #3 = $F
/*9578*/                OPC_CheckType, MVT::f64,
/*9580*/                OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9582*/                OPC_EmitConvertToTarget, 1,
/*9584*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9593*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), AFGR64:f64:$F)
/*9603*/              /*Scope*/ 33, /*->9637*/
/*9604*/                OPC_CheckCondCode, ISD::SETUGE,
/*9606*/                OPC_MoveParent,
/*9607*/                OPC_CheckType, MVT::i32,
/*9609*/                OPC_MoveParent,
/*9610*/                OPC_RecordChild1, // #2 = $T
/*9611*/                OPC_RecordChild2, // #3 = $F
/*9612*/                OPC_CheckType, MVT::f64,
/*9614*/                OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9616*/                OPC_EmitConvertToTarget, 1,
/*9618*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9627*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), AFGR64:f64:$F)
/*9637*/              0, /*End of Scope*/
/*9638*/            /*Scope*/ 81, /*->9720*/
/*9639*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*9641*/              OPC_MoveParent,
/*9642*/              OPC_MoveChild, 2,
/*9644*/              OPC_Scope, 36, /*->9682*/ // 2 children in Scope
/*9646*/                OPC_CheckCondCode, ISD::SETGT,
/*9648*/                OPC_MoveParent,
/*9649*/                OPC_CheckType, MVT::i32,
/*9651*/                OPC_MoveParent,
/*9652*/                OPC_RecordChild1, // #2 = $T
/*9653*/                OPC_RecordChild2, // #3 = $F
/*9654*/                OPC_CheckType, MVT::f64,
/*9656*/                OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9658*/                OPC_EmitConvertToTarget, 1,
/*9660*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*9663*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*9672*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTi:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), AFGR64:f64:$F)
/*9682*/              /*Scope*/ 36, /*->9719*/
/*9683*/                OPC_CheckCondCode, ISD::SETUGT,
/*9685*/                OPC_MoveParent,
/*9686*/                OPC_CheckType, MVT::i32,
/*9688*/                OPC_MoveParent,
/*9689*/                OPC_RecordChild1, // #2 = $T
/*9690*/                OPC_RecordChild2, // #3 = $F
/*9691*/                OPC_CheckType, MVT::f64,
/*9693*/                OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9695*/                OPC_EmitConvertToTarget, 1,
/*9697*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*9700*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*9709*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTiu:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), AFGR64:f64:$F)
/*9719*/              0, /*End of Scope*/
/*9720*/            /*Scope*/ 75, /*->9796*/
/*9721*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*9723*/              OPC_MoveParent,
/*9724*/              OPC_MoveChild, 2,
/*9726*/              OPC_Scope, 33, /*->9761*/ // 2 children in Scope
/*9728*/                OPC_CheckCondCode, ISD::SETGE,
/*9730*/                OPC_MoveParent,
/*9731*/                OPC_CheckType, MVT::i32,
/*9733*/                OPC_MoveParent,
/*9734*/                OPC_RecordChild1, // #2 = $T
/*9735*/                OPC_RecordChild2, // #3 = $F
/*9736*/                OPC_CheckType, MVT::f64,
/*9738*/                OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9740*/                OPC_EmitConvertToTarget, 1,
/*9742*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9751*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), FGR64:f64:$F)
/*9761*/              /*Scope*/ 33, /*->9795*/
/*9762*/                OPC_CheckCondCode, ISD::SETUGE,
/*9764*/                OPC_MoveParent,
/*9765*/                OPC_CheckType, MVT::i32,
/*9767*/                OPC_MoveParent,
/*9768*/                OPC_RecordChild1, // #2 = $T
/*9769*/                OPC_RecordChild2, // #3 = $F
/*9770*/                OPC_CheckType, MVT::f64,
/*9772*/                OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9774*/                OPC_EmitConvertToTarget, 1,
/*9776*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9785*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), FGR64:f64:$F)
/*9795*/              0, /*End of Scope*/
/*9796*/            /*Scope*/ 81, /*->9878*/
/*9797*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*9799*/              OPC_MoveParent,
/*9800*/              OPC_MoveChild, 2,
/*9802*/              OPC_Scope, 36, /*->9840*/ // 2 children in Scope
/*9804*/                OPC_CheckCondCode, ISD::SETGT,
/*9806*/                OPC_MoveParent,
/*9807*/                OPC_CheckType, MVT::i32,
/*9809*/                OPC_MoveParent,
/*9810*/                OPC_RecordChild1, // #2 = $T
/*9811*/                OPC_RecordChild2, // #3 = $F
/*9812*/                OPC_CheckType, MVT::f64,
/*9814*/                OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9816*/                OPC_EmitConvertToTarget, 1,
/*9818*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*9821*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*9830*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTi:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), FGR64:f64:$F)
/*9840*/              /*Scope*/ 36, /*->9877*/
/*9841*/                OPC_CheckCondCode, ISD::SETUGT,
/*9843*/                OPC_MoveParent,
/*9844*/                OPC_CheckType, MVT::i32,
/*9846*/                OPC_MoveParent,
/*9847*/                OPC_RecordChild1, // #2 = $T
/*9848*/                OPC_RecordChild2, // #3 = $F
/*9849*/                OPC_CheckType, MVT::f64,
/*9851*/                OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9853*/                OPC_EmitConvertToTarget, 1,
/*9855*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*9858*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*9867*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTiu:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), FGR64:f64:$F)
/*9877*/              0, /*End of Scope*/
/*9878*/            0, /*End of Scope*/
/*9879*/          /*Scope*/ 68|128,4/*580*/, /*->10461*/
/*9881*/            OPC_MoveChild, 2,
/*9883*/            OPC_Scope, 31, /*->9916*/ // 18 children in Scope
/*9885*/              OPC_CheckCondCode, ISD::SETGE,
/*9887*/              OPC_MoveParent,
/*9888*/              OPC_CheckType, MVT::i32,
/*9890*/              OPC_MoveParent,
/*9891*/              OPC_RecordChild1, // #2 = $T
/*9892*/              OPC_RecordChild2, // #3 = $F
/*9893*/              OPC_CheckType, MVT::f32,
/*9895*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9897*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9906*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*9916*/            /*Scope*/ 31, /*->9948*/
/*9917*/              OPC_CheckCondCode, ISD::SETUGE,
/*9919*/              OPC_MoveParent,
/*9920*/              OPC_CheckType, MVT::i32,
/*9922*/              OPC_MoveParent,
/*9923*/              OPC_RecordChild1, // #2 = $T
/*9924*/              OPC_RecordChild2, // #3 = $F
/*9925*/              OPC_CheckType, MVT::f32,
/*9927*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9929*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9938*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*9948*/            /*Scope*/ 31, /*->9980*/
/*9949*/              OPC_CheckCondCode, ISD::SETLE,
/*9951*/              OPC_MoveParent,
/*9952*/              OPC_CheckType, MVT::i32,
/*9954*/              OPC_MoveParent,
/*9955*/              OPC_RecordChild1, // #2 = $T
/*9956*/              OPC_RecordChild2, // #3 = $F
/*9957*/              OPC_CheckType, MVT::f32,
/*9959*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9961*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*9970*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), FGR32:f32:$F)
/*9980*/            /*Scope*/ 31, /*->10012*/
/*9981*/              OPC_CheckCondCode, ISD::SETULE,
/*9983*/              OPC_MoveParent,
/*9984*/              OPC_CheckType, MVT::i32,
/*9986*/              OPC_MoveParent,
/*9987*/              OPC_RecordChild1, // #2 = $T
/*9988*/              OPC_RecordChild2, // #3 = $F
/*9989*/              OPC_CheckType, MVT::f32,
/*9991*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9993*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10002*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), FGR32:f32:$F)
/*10012*/           /*Scope*/ 31, /*->10044*/
/*10013*/             OPC_CheckCondCode, ISD::SETEQ,
/*10015*/             OPC_MoveParent,
/*10016*/             OPC_CheckType, MVT::i32,
/*10018*/             OPC_MoveParent,
/*10019*/             OPC_RecordChild1, // #2 = $T
/*10020*/             OPC_RecordChild2, // #3 = $F
/*10021*/             OPC_CheckType, MVT::f32,
/*10023*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10025*/             OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10034*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*10044*/           /*Scope*/ 31, /*->10076*/
/*10045*/             OPC_CheckCondCode, ISD::SETNE,
/*10047*/             OPC_MoveParent,
/*10048*/             OPC_CheckType, MVT::i32,
/*10050*/             OPC_MoveParent,
/*10051*/             OPC_RecordChild1, // #2 = $T
/*10052*/             OPC_RecordChild2, // #3 = $F
/*10053*/             OPC_CheckType, MVT::f32,
/*10055*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10057*/             OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10066*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVN_I_S:f32 FGR32:f32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*10076*/           /*Scope*/ 31, /*->10108*/
/*10077*/             OPC_CheckCondCode, ISD::SETGE,
/*10079*/             OPC_MoveParent,
/*10080*/             OPC_CheckType, MVT::i32,
/*10082*/             OPC_MoveParent,
/*10083*/             OPC_RecordChild1, // #2 = $T
/*10084*/             OPC_RecordChild2, // #3 = $F
/*10085*/             OPC_CheckType, MVT::f64,
/*10087*/             OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10089*/             OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10098*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*10108*/           /*Scope*/ 31, /*->10140*/
/*10109*/             OPC_CheckCondCode, ISD::SETUGE,
/*10111*/             OPC_MoveParent,
/*10112*/             OPC_CheckType, MVT::i32,
/*10114*/             OPC_MoveParent,
/*10115*/             OPC_RecordChild1, // #2 = $T
/*10116*/             OPC_RecordChild2, // #3 = $F
/*10117*/             OPC_CheckType, MVT::f64,
/*10119*/             OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10121*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10130*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*10140*/           /*Scope*/ 31, /*->10172*/
/*10141*/             OPC_CheckCondCode, ISD::SETLE,
/*10143*/             OPC_MoveParent,
/*10144*/             OPC_CheckType, MVT::i32,
/*10146*/             OPC_MoveParent,
/*10147*/             OPC_RecordChild1, // #2 = $T
/*10148*/             OPC_RecordChild2, // #3 = $F
/*10149*/             OPC_CheckType, MVT::f64,
/*10151*/             OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10153*/             OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10162*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), AFGR64:f64:$F)
/*10172*/           /*Scope*/ 31, /*->10204*/
/*10173*/             OPC_CheckCondCode, ISD::SETULE,
/*10175*/             OPC_MoveParent,
/*10176*/             OPC_CheckType, MVT::i32,
/*10178*/             OPC_MoveParent,
/*10179*/             OPC_RecordChild1, // #2 = $T
/*10180*/             OPC_RecordChild2, // #3 = $F
/*10181*/             OPC_CheckType, MVT::f64,
/*10183*/             OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10185*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10194*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), AFGR64:f64:$F)
/*10204*/           /*Scope*/ 31, /*->10236*/
/*10205*/             OPC_CheckCondCode, ISD::SETEQ,
/*10207*/             OPC_MoveParent,
/*10208*/             OPC_CheckType, MVT::i32,
/*10210*/             OPC_MoveParent,
/*10211*/             OPC_RecordChild1, // #2 = $T
/*10212*/             OPC_RecordChild2, // #3 = $F
/*10213*/             OPC_CheckType, MVT::f64,
/*10215*/             OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10217*/             OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10226*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*10236*/           /*Scope*/ 31, /*->10268*/
/*10237*/             OPC_CheckCondCode, ISD::SETNE,
/*10239*/             OPC_MoveParent,
/*10240*/             OPC_CheckType, MVT::i32,
/*10242*/             OPC_MoveParent,
/*10243*/             OPC_RecordChild1, // #2 = $T
/*10244*/             OPC_RecordChild2, // #3 = $F
/*10245*/             OPC_CheckType, MVT::f64,
/*10247*/             OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10249*/             OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10258*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVN_I_D32:f64 AFGR64:f64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*10268*/           /*Scope*/ 31, /*->10300*/
/*10269*/             OPC_CheckCondCode, ISD::SETGE,
/*10271*/             OPC_MoveParent,
/*10272*/             OPC_CheckType, MVT::i32,
/*10274*/             OPC_MoveParent,
/*10275*/             OPC_RecordChild1, // #2 = $T
/*10276*/             OPC_RecordChild2, // #3 = $F
/*10277*/             OPC_CheckType, MVT::f64,
/*10279*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10281*/             OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10290*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR64:f64:$F)
/*10300*/           /*Scope*/ 31, /*->10332*/
/*10301*/             OPC_CheckCondCode, ISD::SETUGE,
/*10303*/             OPC_MoveParent,
/*10304*/             OPC_CheckType, MVT::i32,
/*10306*/             OPC_MoveParent,
/*10307*/             OPC_RecordChild1, // #2 = $T
/*10308*/             OPC_RecordChild2, // #3 = $F
/*10309*/             OPC_CheckType, MVT::f64,
/*10311*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10313*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10322*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR64:f64:$F)
/*10332*/           /*Scope*/ 31, /*->10364*/
/*10333*/             OPC_CheckCondCode, ISD::SETLE,
/*10335*/             OPC_MoveParent,
/*10336*/             OPC_CheckType, MVT::i32,
/*10338*/             OPC_MoveParent,
/*10339*/             OPC_RecordChild1, // #2 = $T
/*10340*/             OPC_RecordChild2, // #3 = $F
/*10341*/             OPC_CheckType, MVT::f64,
/*10343*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10345*/             OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10354*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), FGR64:f64:$F)
/*10364*/           /*Scope*/ 31, /*->10396*/
/*10365*/             OPC_CheckCondCode, ISD::SETULE,
/*10367*/             OPC_MoveParent,
/*10368*/             OPC_CheckType, MVT::i32,
/*10370*/             OPC_MoveParent,
/*10371*/             OPC_RecordChild1, // #2 = $T
/*10372*/             OPC_RecordChild2, // #3 = $F
/*10373*/             OPC_CheckType, MVT::f64,
/*10375*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10377*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10386*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), FGR64:f64:$F)
/*10396*/           /*Scope*/ 31, /*->10428*/
/*10397*/             OPC_CheckCondCode, ISD::SETEQ,
/*10399*/             OPC_MoveParent,
/*10400*/             OPC_CheckType, MVT::i32,
/*10402*/             OPC_MoveParent,
/*10403*/             OPC_RecordChild1, // #2 = $T
/*10404*/             OPC_RecordChild2, // #3 = $F
/*10405*/             OPC_CheckType, MVT::f64,
/*10407*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10409*/             OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10418*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR64:f64:$F)
/*10428*/           /*Scope*/ 31, /*->10460*/
/*10429*/             OPC_CheckCondCode, ISD::SETNE,
/*10431*/             OPC_MoveParent,
/*10432*/             OPC_CheckType, MVT::i32,
/*10434*/             OPC_MoveParent,
/*10435*/             OPC_RecordChild1, // #2 = $T
/*10436*/             OPC_RecordChild2, // #3 = $F
/*10437*/             OPC_CheckType, MVT::f64,
/*10439*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10441*/             OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10450*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVN_I_D64:f64 FGR64:f64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR64:f64:$F)
/*10460*/           0, /*End of Scope*/
/*10461*/         0, /*End of Scope*/
/*10462*/       0, /*End of Scope*/
/*10463*/     /*Scope*/ 58|128,6/*826*/, /*->11291*/
/*10465*/       OPC_CheckChild0Type, MVT::i64,
/*10467*/       OPC_Scope, 101, /*->10570*/ // 2 children in Scope
/*10469*/         OPC_MoveChild, 1,
/*10471*/         OPC_CheckInteger, 0, 
/*10473*/         OPC_MoveParent,
/*10474*/         OPC_MoveChild, 2,
/*10476*/         OPC_Scope, 22, /*->10500*/ // 4 children in Scope
/*10478*/           OPC_CheckCondCode, ISD::SETEQ,
/*10480*/           OPC_MoveParent,
/*10481*/           OPC_CheckType, MVT::i32,
/*10483*/           OPC_MoveParent,
/*10484*/           OPC_RecordChild1, // #1 = $T
/*10485*/           OPC_RecordChild2, // #2 = $F
/*10486*/           OPC_CheckType, MVT::f32,
/*10488*/           OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10490*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVZ_I64_S:f32 FGR32:f32:$T, CPU64Regs:i64:$lhs, FGR32:f32:$F)
/*10500*/         /*Scope*/ 22, /*->10523*/
/*10501*/           OPC_CheckCondCode, ISD::SETNE,
/*10503*/           OPC_MoveParent,
/*10504*/           OPC_CheckType, MVT::i32,
/*10506*/           OPC_MoveParent,
/*10507*/           OPC_RecordChild1, // #1 = $T
/*10508*/           OPC_RecordChild2, // #2 = $F
/*10509*/           OPC_CheckType, MVT::f32,
/*10511*/           OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10513*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVN_I64_S:f32 FGR32:f32:$T, CPU64Regs:i64:$lhs, FGR32:f32:$F)
/*10523*/         /*Scope*/ 22, /*->10546*/
/*10524*/           OPC_CheckCondCode, ISD::SETEQ,
/*10526*/           OPC_MoveParent,
/*10527*/           OPC_CheckType, MVT::i32,
/*10529*/           OPC_MoveParent,
/*10530*/           OPC_RecordChild1, // #1 = $T
/*10531*/           OPC_RecordChild2, // #2 = $F
/*10532*/           OPC_CheckType, MVT::f64,
/*10534*/           OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10536*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVZ_I64_D64:f64 FGR64:f64:$T, CPU64Regs:i64:$lhs, FGR64:f64:$F)
/*10546*/         /*Scope*/ 22, /*->10569*/
/*10547*/           OPC_CheckCondCode, ISD::SETNE,
/*10549*/           OPC_MoveParent,
/*10550*/           OPC_CheckType, MVT::i32,
/*10552*/           OPC_MoveParent,
/*10553*/           OPC_RecordChild1, // #1 = $T
/*10554*/           OPC_RecordChild2, // #2 = $F
/*10555*/           OPC_CheckType, MVT::f64,
/*10557*/           OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10559*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVN_I64_D64:f64 FGR64:f64:$T, CPU64Regs:i64:$lhs, FGR64:f64:$F)
/*10569*/         0, /*End of Scope*/
/*10570*/       /*Scope*/ 78|128,5/*718*/, /*->11290*/
/*10572*/         OPC_RecordChild1, // #1 = $rhs
/*10573*/         OPC_Scope, 67|128,2/*323*/, /*->10899*/ // 2 children in Scope
/*10576*/           OPC_MoveChild, 1,
/*10578*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10581*/           OPC_Scope, 75, /*->10658*/ // 4 children in Scope
/*10583*/             OPC_CheckPredicate, 28, // Predicate_immSExt16
/*10585*/             OPC_MoveParent,
/*10586*/             OPC_MoveChild, 2,
/*10588*/             OPC_Scope, 33, /*->10623*/ // 2 children in Scope
/*10590*/               OPC_CheckCondCode, ISD::SETGE,
/*10592*/               OPC_MoveParent,
/*10593*/               OPC_CheckType, MVT::i32,
/*10595*/               OPC_MoveParent,
/*10596*/               OPC_RecordChild1, // #2 = $T
/*10597*/               OPC_RecordChild2, // #3 = $F
/*10598*/               OPC_CheckType, MVT::f32,
/*10600*/               OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10602*/               OPC_EmitConvertToTarget, 1,
/*10604*/               OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*10613*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), FGR32:f32:$F)
/*10623*/             /*Scope*/ 33, /*->10657*/
/*10624*/               OPC_CheckCondCode, ISD::SETUGE,
/*10626*/               OPC_MoveParent,
/*10627*/               OPC_CheckType, MVT::i32,
/*10629*/               OPC_MoveParent,
/*10630*/               OPC_RecordChild1, // #2 = $T
/*10631*/               OPC_RecordChild2, // #3 = $F
/*10632*/               OPC_CheckType, MVT::f32,
/*10634*/               OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10636*/               OPC_EmitConvertToTarget, 1,
/*10638*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*10647*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTiu64:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), FGR32:f32:$F)
/*10657*/             0, /*End of Scope*/
/*10658*/           /*Scope*/ 81, /*->10740*/
/*10659*/             OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*10661*/             OPC_MoveParent,
/*10662*/             OPC_MoveChild, 2,
/*10664*/             OPC_Scope, 36, /*->10702*/ // 2 children in Scope
/*10666*/               OPC_CheckCondCode, ISD::SETGT,
/*10668*/               OPC_MoveParent,
/*10669*/               OPC_CheckType, MVT::i32,
/*10671*/               OPC_MoveParent,
/*10672*/               OPC_RecordChild1, // #2 = $T
/*10673*/               OPC_RecordChild2, // #3 = $F
/*10674*/               OPC_CheckType, MVT::f32,
/*10676*/               OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10678*/               OPC_EmitConvertToTarget, 1,
/*10680*/               OPC_EmitNodeXForm, 1, 4, // Plus1
/*10683*/               OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*10692*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), FGR32:f32:$F)
/*10702*/             /*Scope*/ 36, /*->10739*/
/*10703*/               OPC_CheckCondCode, ISD::SETUGT,
/*10705*/               OPC_MoveParent,
/*10706*/               OPC_CheckType, MVT::i32,
/*10708*/               OPC_MoveParent,
/*10709*/               OPC_RecordChild1, // #2 = $T
/*10710*/               OPC_RecordChild2, // #3 = $F
/*10711*/               OPC_CheckType, MVT::f32,
/*10713*/               OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10715*/               OPC_EmitConvertToTarget, 1,
/*10717*/               OPC_EmitNodeXForm, 1, 4, // Plus1
/*10720*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*10729*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTiu64:i32 CPU64Regs:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), FGR32:f32:$F)
/*10739*/             0, /*End of Scope*/
/*10740*/           /*Scope*/ 75, /*->10816*/
/*10741*/             OPC_CheckPredicate, 28, // Predicate_immSExt16
/*10743*/             OPC_MoveParent,
/*10744*/             OPC_MoveChild, 2,
/*10746*/             OPC_Scope, 33, /*->10781*/ // 2 children in Scope
/*10748*/               OPC_CheckCondCode, ISD::SETGE,
/*10750*/               OPC_MoveParent,
/*10751*/               OPC_CheckType, MVT::i32,
/*10753*/               OPC_MoveParent,
/*10754*/               OPC_RecordChild1, // #2 = $T
/*10755*/               OPC_RecordChild2, // #3 = $F
/*10756*/               OPC_CheckType, MVT::f64,
/*10758*/               OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10760*/               OPC_EmitConvertToTarget, 1,
/*10762*/               OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*10771*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), FGR64:f64:$F)
/*10781*/             /*Scope*/ 33, /*->10815*/
/*10782*/               OPC_CheckCondCode, ISD::SETUGE,
/*10784*/               OPC_MoveParent,
/*10785*/               OPC_CheckType, MVT::i32,
/*10787*/               OPC_MoveParent,
/*10788*/               OPC_RecordChild1, // #2 = $T
/*10789*/               OPC_RecordChild2, // #3 = $F
/*10790*/               OPC_CheckType, MVT::f64,
/*10792*/               OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10794*/               OPC_EmitConvertToTarget, 1,
/*10796*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*10805*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTiu64:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), FGR64:f64:$F)
/*10815*/             0, /*End of Scope*/
/*10816*/           /*Scope*/ 81, /*->10898*/
/*10817*/             OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*10819*/             OPC_MoveParent,
/*10820*/             OPC_MoveChild, 2,
/*10822*/             OPC_Scope, 36, /*->10860*/ // 2 children in Scope
/*10824*/               OPC_CheckCondCode, ISD::SETGT,
/*10826*/               OPC_MoveParent,
/*10827*/               OPC_CheckType, MVT::i32,
/*10829*/               OPC_MoveParent,
/*10830*/               OPC_RecordChild1, // #2 = $T
/*10831*/               OPC_RecordChild2, // #3 = $F
/*10832*/               OPC_CheckType, MVT::f64,
/*10834*/               OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10836*/               OPC_EmitConvertToTarget, 1,
/*10838*/               OPC_EmitNodeXForm, 1, 4, // Plus1
/*10841*/               OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*10850*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), FGR64:f64:$F)
/*10860*/             /*Scope*/ 36, /*->10897*/
/*10861*/               OPC_CheckCondCode, ISD::SETUGT,
/*10863*/               OPC_MoveParent,
/*10864*/               OPC_CheckType, MVT::i32,
/*10866*/               OPC_MoveParent,
/*10867*/               OPC_RecordChild1, // #2 = $T
/*10868*/               OPC_RecordChild2, // #3 = $F
/*10869*/               OPC_CheckType, MVT::f64,
/*10871*/               OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10873*/               OPC_EmitConvertToTarget, 1,
/*10875*/               OPC_EmitNodeXForm, 1, 4, // Plus1
/*10878*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*10887*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTiu64:i32 CPU64Regs:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), FGR64:f64:$F)
/*10897*/             0, /*End of Scope*/
/*10898*/           0, /*End of Scope*/
/*10899*/         /*Scope*/ 4|128,3/*388*/, /*->11289*/
/*10901*/           OPC_MoveChild, 2,
/*10903*/           OPC_Scope, 31, /*->10936*/ // 12 children in Scope
/*10905*/             OPC_CheckCondCode, ISD::SETGE,
/*10907*/             OPC_MoveParent,
/*10908*/             OPC_CheckType, MVT::i32,
/*10910*/             OPC_MoveParent,
/*10911*/             OPC_RecordChild1, // #2 = $T
/*10912*/             OPC_RecordChild2, // #3 = $F
/*10913*/             OPC_CheckType, MVT::f32,
/*10915*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10917*/             OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10926*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR32:f32:$F)
/*10936*/           /*Scope*/ 31, /*->10968*/
/*10937*/             OPC_CheckCondCode, ISD::SETUGE,
/*10939*/             OPC_MoveParent,
/*10940*/             OPC_CheckType, MVT::i32,
/*10942*/             OPC_MoveParent,
/*10943*/             OPC_RecordChild1, // #2 = $T
/*10944*/             OPC_RecordChild2, // #3 = $F
/*10945*/             OPC_CheckType, MVT::f32,
/*10947*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10949*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10958*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR32:f32:$F)
/*10968*/           /*Scope*/ 31, /*->11000*/
/*10969*/             OPC_CheckCondCode, ISD::SETLE,
/*10971*/             OPC_MoveParent,
/*10972*/             OPC_CheckType, MVT::i32,
/*10974*/             OPC_MoveParent,
/*10975*/             OPC_RecordChild1, // #2 = $T
/*10976*/             OPC_RecordChild2, // #3 = $F
/*10977*/             OPC_CheckType, MVT::f32,
/*10979*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10981*/             OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10990*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), FGR32:f32:$F)
/*11000*/           /*Scope*/ 31, /*->11032*/
/*11001*/             OPC_CheckCondCode, ISD::SETULE,
/*11003*/             OPC_MoveParent,
/*11004*/             OPC_CheckType, MVT::i32,
/*11006*/             OPC_MoveParent,
/*11007*/             OPC_RecordChild1, // #2 = $T
/*11008*/             OPC_RecordChild2, // #3 = $F
/*11009*/             OPC_CheckType, MVT::f32,
/*11011*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11013*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*11022*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), FGR32:f32:$F)
/*11032*/           /*Scope*/ 31, /*->11064*/
/*11033*/             OPC_CheckCondCode, ISD::SETEQ,
/*11035*/             OPC_MoveParent,
/*11036*/             OPC_CheckType, MVT::i32,
/*11038*/             OPC_MoveParent,
/*11039*/             OPC_RecordChild1, // #2 = $T
/*11040*/             OPC_RecordChild2, // #3 = $F
/*11041*/             OPC_CheckType, MVT::f32,
/*11043*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11045*/             OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*11054*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I64_S:f32 FGR32:f32:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR32:f32:$F)
/*11064*/           /*Scope*/ 31, /*->11096*/
/*11065*/             OPC_CheckCondCode, ISD::SETNE,
/*11067*/             OPC_MoveParent,
/*11068*/             OPC_CheckType, MVT::i32,
/*11070*/             OPC_MoveParent,
/*11071*/             OPC_RecordChild1, // #2 = $T
/*11072*/             OPC_RecordChild2, // #3 = $F
/*11073*/             OPC_CheckType, MVT::f32,
/*11075*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11077*/             OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*11086*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVN_I64_S:f32 FGR32:f32:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR32:f32:$F)
/*11096*/           /*Scope*/ 31, /*->11128*/
/*11097*/             OPC_CheckCondCode, ISD::SETGE,
/*11099*/             OPC_MoveParent,
/*11100*/             OPC_CheckType, MVT::i32,
/*11102*/             OPC_MoveParent,
/*11103*/             OPC_RecordChild1, // #2 = $T
/*11104*/             OPC_RecordChild2, // #3 = $F
/*11105*/             OPC_CheckType, MVT::f64,
/*11107*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11109*/             OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*11118*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR64:f64:$F)
/*11128*/           /*Scope*/ 31, /*->11160*/
/*11129*/             OPC_CheckCondCode, ISD::SETUGE,
/*11131*/             OPC_MoveParent,
/*11132*/             OPC_CheckType, MVT::i32,
/*11134*/             OPC_MoveParent,
/*11135*/             OPC_RecordChild1, // #2 = $T
/*11136*/             OPC_RecordChild2, // #3 = $F
/*11137*/             OPC_CheckType, MVT::f64,
/*11139*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11141*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*11150*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR64:f64:$F)
/*11160*/           /*Scope*/ 31, /*->11192*/
/*11161*/             OPC_CheckCondCode, ISD::SETLE,
/*11163*/             OPC_MoveParent,
/*11164*/             OPC_CheckType, MVT::i32,
/*11166*/             OPC_MoveParent,
/*11167*/             OPC_RecordChild1, // #2 = $T
/*11168*/             OPC_RecordChild2, // #3 = $F
/*11169*/             OPC_CheckType, MVT::f64,
/*11171*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11173*/             OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*11182*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), FGR64:f64:$F)
/*11192*/           /*Scope*/ 31, /*->11224*/
/*11193*/             OPC_CheckCondCode, ISD::SETULE,
/*11195*/             OPC_MoveParent,
/*11196*/             OPC_CheckType, MVT::i32,
/*11198*/             OPC_MoveParent,
/*11199*/             OPC_RecordChild1, // #2 = $T
/*11200*/             OPC_RecordChild2, // #3 = $F
/*11201*/             OPC_CheckType, MVT::f64,
/*11203*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11205*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*11214*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), FGR64:f64:$F)
/*11224*/           /*Scope*/ 31, /*->11256*/
/*11225*/             OPC_CheckCondCode, ISD::SETEQ,
/*11227*/             OPC_MoveParent,
/*11228*/             OPC_CheckType, MVT::i32,
/*11230*/             OPC_MoveParent,
/*11231*/             OPC_RecordChild1, // #2 = $T
/*11232*/             OPC_RecordChild2, // #3 = $F
/*11233*/             OPC_CheckType, MVT::f64,
/*11235*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11237*/             OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*11246*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I64_D64:f64 FGR64:f64:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR64:f64:$F)
/*11256*/           /*Scope*/ 31, /*->11288*/
/*11257*/             OPC_CheckCondCode, ISD::SETNE,
/*11259*/             OPC_MoveParent,
/*11260*/             OPC_CheckType, MVT::i32,
/*11262*/             OPC_MoveParent,
/*11263*/             OPC_RecordChild1, // #2 = $T
/*11264*/             OPC_RecordChild2, // #3 = $F
/*11265*/             OPC_CheckType, MVT::f64,
/*11267*/             OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11269*/             OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*11278*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVN_I64_D64:f64 FGR64:f64:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR64:f64:$F)
/*11288*/           0, /*End of Scope*/
/*11289*/         0, /*End of Scope*/
/*11290*/       0, /*End of Scope*/
/*11291*/     0, /*End of Scope*/
/*11292*/   /*Scope*/ 89, /*->11382*/
/*11293*/     OPC_RecordChild0, // #0 = $cond
/*11294*/     OPC_Scope, 50, /*->11346*/ // 2 children in Scope
/*11296*/       OPC_CheckChild0Type, MVT::i32,
/*11298*/       OPC_RecordChild1, // #1 = $T
/*11299*/       OPC_RecordChild2, // #2 = $F
/*11300*/       OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->11315
/*11303*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11305*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f32 CPURegs:i32:$cond, FGR32:f32:$T, FGR32:f32:$F) - Complexity = 3
                  // Dst: (MOVN_I_S:f32 FGR32:f32:$T, CPURegs:i32:$cond, FGR32:f32:$F)
                /*SwitchType*/ 28,  MVT::f64,// ->11345
/*11317*/         OPC_Scope, 12, /*->11331*/ // 2 children in Scope
/*11319*/           OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11321*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 CPURegs:i32:$cond, AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 3
                    // Dst: (MOVN_I_D32:f64 AFGR64:f64:$T, CPURegs:i32:$cond, AFGR64:f64:$F)
/*11331*/         /*Scope*/ 12, /*->11344*/
/*11332*/           OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11334*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 CPURegs:i32:$cond, FGR64:f64:$T, FGR64:f64:$F) - Complexity = 3
                    // Dst: (MOVN_I_D64:f64 FGR64:f64:$T, CPURegs:i32:$cond, FGR64:f64:$F)
/*11344*/         0, /*End of Scope*/
                0, // EndSwitchType
/*11346*/     /*Scope*/ 34, /*->11381*/
/*11347*/       OPC_CheckChild0Type, MVT::i64,
/*11349*/       OPC_RecordChild1, // #1 = $T
/*11350*/       OPC_RecordChild2, // #2 = $F
/*11351*/       OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->11366
/*11354*/         OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11356*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f32 CPU64Regs:i64:$cond, FGR32:f32:$T, FGR32:f32:$F) - Complexity = 3
                  // Dst: (MOVN_I64_S:f32 FGR32:f32:$T, CPU64Regs:i64:$cond, FGR32:f32:$F)
                /*SwitchType*/ 12,  MVT::f64,// ->11380
/*11368*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11370*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f64 CPU64Regs:i64:$cond, FGR64:f64:$T, FGR64:f64:$F) - Complexity = 3
                  // Dst: (MOVN_I64_D64:f64 FGR64:f64:$T, CPU64Regs:i64:$cond, FGR64:f64:$F)
                0, // EndSwitchType
/*11381*/     0, /*End of Scope*/
/*11382*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::CALLSEQ_END),// ->11411
/*11386*/   OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*11387*/   OPC_CaptureGlueInput,
/*11388*/   OPC_RecordChild1, // #1 = $amt1
/*11389*/   OPC_MoveChild, 1,
/*11391*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*11394*/   OPC_MoveParent,
/*11395*/   OPC_RecordChild2, // #2 = $amt2
/*11396*/   OPC_MoveChild, 2,
/*11398*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*11401*/   OPC_MoveParent,
/*11402*/   OPC_EmitMergeInputChains1_0,
/*11403*/   OPC_MorphNodeTo, TARGET_VAL(Mips::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 53,  TARGET_VAL(MipsISD::Ext),// ->11467
/*11414*/   OPC_RecordChild0, // #0 = $rs
/*11415*/   OPC_RecordChild1, // #1 = $pos
/*11416*/   OPC_MoveChild, 1,
/*11418*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11421*/   OPC_MoveParent,
/*11422*/   OPC_RecordChild2, // #2 = $size
/*11423*/   OPC_MoveChild, 2,
/*11425*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11428*/   OPC_MoveParent,
/*11429*/   OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->11448
/*11432*/     OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*11434*/     OPC_EmitConvertToTarget, 1,
/*11436*/     OPC_EmitConvertToTarget, 2,
/*11438*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXT), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 3, 4, 
              // Src: (MipsExt:i32 CPURegsOpnd:i32:$rs, (imm:i32):$pos, (imm:i32):$size) - Complexity = 9
              // Dst: (EXT:i32 CPURegsOpnd:i32:$rs, (imm:i32):$pos, (imm:i32):$size)
            /*SwitchType*/ 16,  MVT::i64,// ->11466
/*11450*/     OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*11452*/     OPC_EmitConvertToTarget, 1,
/*11454*/     OPC_EmitConvertToTarget, 2,
/*11456*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DEXT), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 3, 4, 
              // Src: (MipsExt:i64 CPU64RegsOpnd:i64:$rs, (imm:i32):$pos, (imm:i32):$size) - Complexity = 9
              // Dst: (DEXT:i64 CPU64RegsOpnd:i64:$rs, (imm:i32):$pos, (imm:i32):$size)
            0, // EndSwitchType
          /*SwitchOpcode*/ 56,  TARGET_VAL(MipsISD::Ins),// ->11526
/*11470*/   OPC_RecordChild0, // #0 = $rs
/*11471*/   OPC_RecordChild1, // #1 = $pos
/*11472*/   OPC_MoveChild, 1,
/*11474*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11477*/   OPC_MoveParent,
/*11478*/   OPC_RecordChild2, // #2 = $size
/*11479*/   OPC_MoveChild, 2,
/*11481*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11484*/   OPC_MoveParent,
/*11485*/   OPC_RecordChild3, // #3 = $src
/*11486*/   OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->11506
/*11489*/     OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*11491*/     OPC_EmitConvertToTarget, 1,
/*11493*/     OPC_EmitConvertToTarget, 2,
/*11495*/     OPC_MorphNodeTo, TARGET_VAL(Mips::INS), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 4, 5, 3, 
              // Src: (MipsIns:i32 CPURegsOpnd:i32:$rs, (imm:i32):$pos, (imm:i32):$size, CPURegsOpnd:i32:$src) - Complexity = 9
              // Dst: (INS:i32 CPURegsOpnd:i32:$rs, (imm:i32):$pos, (imm:i32):$size, CPURegsOpnd:i32:$src)
            /*SwitchType*/ 17,  MVT::i64,// ->11525
/*11508*/     OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*11510*/     OPC_EmitConvertToTarget, 1,
/*11512*/     OPC_EmitConvertToTarget, 2,
/*11514*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DINS), 0,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 4, 5, 3, 
              // Src: (MipsIns:i64 CPU64RegsOpnd:i64:$rs, (imm:i32):$pos, (imm:i32):$size, CPU64RegsOpnd:i64:$src) - Complexity = 9
              // Dst: (DINS:i64 CPU64RegsOpnd:i64:$rs, (imm:i32):$pos, (imm:i32):$size, CPU64RegsOpnd:i64:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 7|128,5/*647*/,  TARGET_VAL(ISD::ADD),// ->12177
/*11530*/   OPC_Scope, 110|128,1/*238*/, /*->11771*/ // 3 children in Scope
/*11533*/     OPC_RecordChild0, // #0 = $hi
/*11534*/     OPC_MoveChild, 1,
/*11536*/     OPC_SwitchOpcode /*2 cases */, 57|128,1/*185*/,  TARGET_VAL(MipsISD::Lo),// ->11726
/*11541*/       OPC_RecordChild0, // #1 = $lo
/*11542*/       OPC_MoveChild, 0,
/*11544*/       OPC_SwitchOpcode /*5 cases */, 45,  TARGET_VAL(ISD::TargetGlobalAddress),// ->11593
/*11548*/         OPC_MoveParent,
/*11549*/         OPC_MoveParent,
/*11550*/         OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->11579
/*11553*/           OPC_Scope, 11, /*->11566*/ // 2 children in Scope
/*11555*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11557*/             OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                      // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tglobaladdr:i32):$lo)) - Complexity = 9
                      // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaladdr:i32):$lo)
/*11566*/           /*Scope*/ 11, /*->11578*/
/*11567*/             OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*11569*/             OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                      // Src: (add:i32 CPU16Regs:i32:$hi, (MipsLo:i32 (tglobaladdr:i32):$lo)) - Complexity = 9
                      // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$hi, (tglobaladdr:i32):$lo)
/*11578*/           0, /*End of Scope*/
                  /*SwitchType*/ 11,  MVT::i64,// ->11592
/*11581*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11583*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tglobaladdr:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tglobaladdr:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetBlockAddress),// ->11626
/*11596*/         OPC_MoveParent,
/*11597*/         OPC_MoveParent,
/*11598*/         OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->11612
/*11601*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11603*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tblockaddress:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tblockaddress:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->11625
/*11614*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11616*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tblockaddress:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tblockaddress:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetJumpTable),// ->11659
/*11629*/         OPC_MoveParent,
/*11630*/         OPC_MoveParent,
/*11631*/         OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->11645
/*11634*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11636*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tjumptable:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tjumptable:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->11658
/*11647*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11649*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tjumptable:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tjumptable:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetConstantPool),// ->11692
/*11662*/         OPC_MoveParent,
/*11663*/         OPC_MoveParent,
/*11664*/         OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->11678
/*11667*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11669*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tconstpool:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tconstpool:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->11691
/*11680*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11682*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tconstpool:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tconstpool:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->11725
/*11695*/         OPC_MoveParent,
/*11696*/         OPC_MoveParent,
/*11697*/         OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->11711
/*11700*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11702*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tglobaltlsaddr:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaltlsaddr:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->11724
/*11713*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11715*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tglobaltlsaddr:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tglobaltlsaddr:i64):$lo)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 41,  TARGET_VAL(MipsISD::GPRel),// ->11770
/*11729*/       OPC_RecordChild0, // #1 = $in
/*11730*/       OPC_MoveChild, 0,
/*11732*/       OPC_SwitchOpcode /*2 cases */, 15,  TARGET_VAL(ISD::TargetGlobalAddress),// ->11751
/*11736*/         OPC_MoveParent,
/*11737*/         OPC_MoveParent,
/*11738*/         OPC_CheckType, MVT::i32,
/*11740*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11742*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$gp, (MipsGPRel:i32 (tglobaladdr:i32):$in)) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in)
                /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::TargetConstantPool),// ->11769
/*11754*/         OPC_MoveParent,
/*11755*/         OPC_MoveParent,
/*11756*/         OPC_CheckType, MVT::i32,
/*11758*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11760*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$gp, (MipsGPRel:i32 (tconstpool:i32):$in)) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tconstpool:i32):$in)
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*11771*/   /*Scope*/ 116|128,1/*244*/, /*->12017*/
/*11773*/     OPC_MoveChild, 0,
/*11775*/     OPC_SwitchOpcode /*2 cases */, 62|128,1/*190*/,  TARGET_VAL(MipsISD::Lo),// ->11970
/*11780*/       OPC_RecordChild0, // #0 = $lo
/*11781*/       OPC_MoveChild, 0,
/*11783*/       OPC_SwitchOpcode /*5 cases */, 46,  TARGET_VAL(ISD::TargetGlobalAddress),// ->11833
/*11787*/         OPC_MoveParent,
/*11788*/         OPC_MoveParent,
/*11789*/         OPC_RecordChild1, // #1 = $hi
/*11790*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->11804
/*11793*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11795*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tglobaladdr:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tglobaladdr:i64):$lo)
                  /*SwitchType*/ 26,  MVT::i32,// ->11832
/*11806*/           OPC_Scope, 11, /*->11819*/ // 2 children in Scope
/*11808*/             OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*11810*/             OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:i32 (MipsLo:i32 (tglobaladdr:i32):$lo), CPU16Regs:i32:$hi) - Complexity = 9
                      // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$hi, (tglobaladdr:i32):$lo)
/*11819*/           /*Scope*/ 11, /*->11831*/
/*11820*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11822*/             OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:i32 (MipsLo:i32 (tglobaladdr:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                      // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaladdr:i32):$lo)
/*11831*/           0, /*End of Scope*/
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetBlockAddress),// ->11867
/*11836*/         OPC_MoveParent,
/*11837*/         OPC_MoveParent,
/*11838*/         OPC_RecordChild1, // #1 = $hi
/*11839*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->11853
/*11842*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11844*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tblockaddress:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tblockaddress:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->11866
/*11855*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11857*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tblockaddress:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tblockaddress:i32):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetJumpTable),// ->11901
/*11870*/         OPC_MoveParent,
/*11871*/         OPC_MoveParent,
/*11872*/         OPC_RecordChild1, // #1 = $hi
/*11873*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->11887
/*11876*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11878*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tjumptable:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tjumptable:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->11900
/*11889*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11891*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tjumptable:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tjumptable:i32):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetConstantPool),// ->11935
/*11904*/         OPC_MoveParent,
/*11905*/         OPC_MoveParent,
/*11906*/         OPC_RecordChild1, // #1 = $hi
/*11907*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->11921
/*11910*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11912*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tconstpool:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tconstpool:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->11934
/*11923*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11925*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tconstpool:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tconstpool:i32):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->11969
/*11938*/         OPC_MoveParent,
/*11939*/         OPC_MoveParent,
/*11940*/         OPC_RecordChild1, // #1 = $hi
/*11941*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->11955
/*11944*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11946*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tglobaltlsaddr:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tglobaltlsaddr:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->11968
/*11957*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11959*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tglobaltlsaddr:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaltlsaddr:i32):$lo)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 43,  TARGET_VAL(MipsISD::GPRel),// ->12016
/*11973*/       OPC_RecordChild0, // #0 = $in
/*11974*/       OPC_MoveChild, 0,
/*11976*/       OPC_SwitchOpcode /*2 cases */, 16,  TARGET_VAL(ISD::TargetGlobalAddress),// ->11996
/*11980*/         OPC_MoveParent,
/*11981*/         OPC_MoveParent,
/*11982*/         OPC_RecordChild1, // #1 = $gp
/*11983*/         OPC_CheckType, MVT::i32,
/*11985*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11987*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsGPRel:i32 (tglobaladdr:i32):$in), CPURegs:i32:$gp) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in)
                /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::TargetConstantPool),// ->12015
/*11999*/         OPC_MoveParent,
/*12000*/         OPC_MoveParent,
/*12001*/         OPC_RecordChild1, // #1 = $gp
/*12002*/         OPC_CheckType, MVT::i32,
/*12004*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12006*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsGPRel:i32 (tconstpool:i32):$in), CPURegs:i32:$gp) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tconstpool:i32):$in)
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*12017*/   /*Scope*/ 29|128,1/*157*/, /*->12176*/
/*12019*/     OPC_RecordChild0, // #0 = $rs
/*12020*/     OPC_RecordChild1, // #1 = $imm16
/*12021*/     OPC_Scope, 81, /*->12104*/ // 5 children in Scope
/*12023*/       OPC_MoveChild, 1,
/*12025*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12028*/       OPC_Scope, 35, /*->12065*/ // 3 children in Scope
/*12030*/         OPC_CheckPredicate, 28, // Predicate_immSExt16
/*12032*/         OPC_MoveParent,
/*12033*/         OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->12049
/*12036*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12038*/           OPC_EmitConvertToTarget, 1,
/*12040*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i32 CPURegsOpnd:i32:$rs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16) - Complexity = 7
                    // Dst: (ADDiu:i32 CPURegsOpnd:i32:$rs, (imm:i32):$imm16)
                  /*SwitchType*/ 13,  MVT::i64,// ->12064
/*12051*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12053*/           OPC_EmitConvertToTarget, 1,
/*12055*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i64 CPU64RegsOpnd:i64:$rs, (imm:i64)<<P:Predicate_immSExt16>>:$imm16) - Complexity = 7
                    // Dst: (DADDiu:i64 CPU64RegsOpnd:i64:$rs, (imm:i64):$imm16)
                  0, // EndSwitchType
/*12065*/       /*Scope*/ 18, /*->12084*/
/*12066*/         OPC_CheckPredicate, 30, // Predicate_immSExt8
/*12068*/         OPC_MoveParent,
/*12069*/         OPC_CheckType, MVT::i32,
/*12071*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12073*/         OPC_EmitConvertToTarget, 1,
/*12075*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImm16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immSExt8>>:$imm) - Complexity = 7
                  // Dst: (AddiuRxRxImm16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immSExt8>>:$imm)
/*12084*/       /*Scope*/ 18, /*->12103*/
/*12085*/         OPC_CheckPredicate, 28, // Predicate_immSExt16
/*12087*/         OPC_MoveParent,
/*12088*/         OPC_CheckType, MVT::i32,
/*12090*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12092*/         OPC_EmitConvertToTarget, 1,
/*12094*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                  // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immSExt16>>:$imm)
/*12103*/       0, /*End of Scope*/
/*12104*/     /*Scope*/ 28, /*->12133*/
/*12105*/       OPC_CheckType, MVT::i32,
/*12107*/       OPC_Scope, 11, /*->12120*/ // 2 children in Scope
/*12109*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12111*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                  // Dst: (ADDu:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*12120*/       /*Scope*/ 11, /*->12132*/
/*12121*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12123*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AdduRxRyRz16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                  // Dst: (AdduRxRyRz16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*12132*/       0, /*End of Scope*/
/*12133*/     /*Scope*/ 13, /*->12147*/
/*12134*/       OPC_CheckType, MVT::i64,
/*12136*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12138*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (add:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
                // Dst: (DADDu:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*12147*/     /*Scope*/ 13, /*->12161*/
/*12148*/       OPC_CheckType, MVT::v2i16,
/*12150*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*12152*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (add:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 3
                // Dst: (ADDQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
/*12161*/     /*Scope*/ 13, /*->12175*/
/*12162*/       OPC_CheckType, MVT::v4i8,
/*12164*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*12166*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (add:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b) - Complexity = 3
                // Dst: (ADDU_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b)
/*12175*/     0, /*End of Scope*/
/*12176*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 50,  TARGET_VAL(MipsISD::FPBrcond),// ->12230
/*12180*/   OPC_RecordNode,   // #0 = 'MipsFPBrcond' chained node
/*12181*/   OPC_CaptureGlueInput,
/*12182*/   OPC_MoveChild, 1,
/*12184*/   OPC_CheckType, MVT::i32,
/*12186*/   OPC_Scope, 20, /*->12208*/ // 2 children in Scope
/*12188*/     OPC_CheckInteger, 0, 
/*12190*/     OPC_MoveParent,
/*12191*/     OPC_RecordChild2, // #1 = $offset
/*12192*/     OPC_MoveChild, 2,
/*12194*/     OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*12197*/     OPC_MoveParent,
/*12198*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12200*/     OPC_EmitMergeInputChains1_0,
/*12201*/     OPC_MorphNodeTo, TARGET_VAL(Mips::BC1F), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsFPBrcond 0:i32, (bb:Other):$offset) - Complexity = 8
              // Dst: (BC1F (bb:Other):$offset)
/*12208*/   /*Scope*/ 20, /*->12229*/
/*12209*/     OPC_CheckInteger, 1, 
/*12211*/     OPC_MoveParent,
/*12212*/     OPC_RecordChild2, // #1 = $offset
/*12213*/     OPC_MoveChild, 2,
/*12215*/     OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*12218*/     OPC_MoveParent,
/*12219*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12221*/     OPC_EmitMergeInputChains1_0,
/*12222*/     OPC_MorphNodeTo, TARGET_VAL(Mips::BC1T), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsFPBrcond 1:i32, (bb:Other):$offset) - Complexity = 8
              // Dst: (BC1T (bb:Other):$offset)
/*12229*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 93,  TARGET_VAL(ISD::SUB),// ->12326
/*12233*/   OPC_Scope, 18, /*->12253*/ // 2 children in Scope
/*12235*/     OPC_MoveChild, 0,
/*12237*/     OPC_CheckInteger, 0, 
/*12239*/     OPC_MoveParent,
/*12240*/     OPC_RecordChild1, // #0 = $r
/*12241*/     OPC_CheckType, MVT::i32,
/*12243*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12245*/     OPC_MorphNodeTo, TARGET_VAL(Mips::NegRxRy16), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (sub:i32 0:i32, CPU16Regs:i32:$r) - Complexity = 8
              // Dst: (NegRxRy16:i32 CPU16Regs:i32:$r)
/*12253*/   /*Scope*/ 71, /*->12325*/
/*12254*/     OPC_RecordChild0, // #0 = $rs
/*12255*/     OPC_RecordChild1, // #1 = $rt
/*12256*/     OPC_SwitchType /*4 cases */, 26,  MVT::i32,// ->12285
/*12259*/       OPC_Scope, 11, /*->12272*/ // 2 children in Scope
/*12261*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12263*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SUBu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                  // Dst: (SUBu:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*12272*/       /*Scope*/ 11, /*->12284*/
/*12273*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12275*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SubuRxRyRz16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                  // Dst: (SubuRxRyRz16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*12284*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->12298
/*12287*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12289*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSUBu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
                // Dst: (DSUBu:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
              /*SwitchType*/ 11,  MVT::v2i16,// ->12311
/*12300*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*12302*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (sub:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 3
                // Dst: (SUBQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
              /*SwitchType*/ 11,  MVT::v4i8,// ->12324
/*12313*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*12315*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (sub:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b) - Complexity = 3
                // Dst: (SUBU_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b)
              0, // EndSwitchType
/*12325*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 5|128,9/*1157*/,  TARGET_VAL(ISD::SETCC),// ->13487
/*12330*/   OPC_RecordChild0, // #0 = $lhs
/*12331*/   OPC_Scope, 16|128,6/*784*/, /*->13118*/ // 2 children in Scope
/*12334*/     OPC_CheckChild0Type, MVT::i32,
/*12336*/     OPC_Scope, 92, /*->12430*/ // 2 children in Scope
/*12338*/       OPC_MoveChild, 1,
/*12340*/       OPC_Scope, 24, /*->12366*/ // 2 children in Scope
/*12342*/         OPC_CheckInteger, 0, 
/*12344*/         OPC_MoveParent,
/*12345*/         OPC_MoveChild, 2,
/*12347*/         OPC_CheckCondCode, ISD::SETEQ,
/*12349*/         OPC_MoveParent,
/*12350*/         OPC_CheckType, MVT::i32,
/*12352*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12354*/         OPC_EmitInteger, MVT::i32, 1, 
/*12357*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SltiuCCRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i32 CPU16Regs:i32:$lhs, 0:i32, SETEQ:Other) - Complexity = 8
                  // Dst: (SltiuCCRxImmX16:i32 CPU16Regs:i32:$lhs, 1:i32)
/*12366*/       /*Scope*/ 62, /*->12429*/
/*12367*/         OPC_CheckInteger, 127|128,127|128,125|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709518847*/, 
/*12378*/         OPC_MoveParent,
/*12379*/         OPC_MoveChild, 2,
/*12381*/         OPC_CheckCondCode, ISD::SETGT,
/*12383*/         OPC_MoveParent,
/*12384*/         OPC_CheckType, MVT::i32,
/*12386*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12388*/         OPC_EmitInteger, MVT::i32, 0|128,0|128,126|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709518848*/, 
/*12400*/         OPC_EmitNode, TARGET_VAL(Mips::SltiCCRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*12409*/         OPC_EmitInteger, MVT::i32, 1, 
/*12412*/         OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*12420*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                  // Src: (setcc:i32 CPU16Regs:i32:$lhs, -32769:i32, SETGT:Other) - Complexity = 8
                  // Dst: (XorRxRxRy16:i32 (SltiCCRxImmX16:i32 CPU16Regs:i32:$lhs, -32768:i32), (LiRxImmX16:i32 1:i32))
/*12429*/       0, /*End of Scope*/
/*12430*/     /*Scope*/ 45|128,5/*685*/, /*->13117*/
/*12432*/       OPC_RecordChild1, // #1 = $imm16
/*12433*/       OPC_Scope, 22|128,1/*150*/, /*->12586*/ // 2 children in Scope
/*12436*/         OPC_MoveChild, 1,
/*12438*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12441*/         OPC_CheckPredicate, 28, // Predicate_immSExt16
/*12443*/         OPC_MoveParent,
/*12444*/         OPC_MoveChild, 2,
/*12446*/         OPC_Scope, 18, /*->12466*/ // 6 children in Scope
/*12448*/           OPC_CheckCondCode, ISD::SETLT,
/*12450*/           OPC_MoveParent,
/*12451*/           OPC_CheckType, MVT::i32,
/*12453*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12455*/           OPC_EmitConvertToTarget, 1,
/*12457*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETLT:Other) - Complexity = 7
                    // Dst: (SLTi:i32 CPURegs:i32:$rs, (imm:i32):$imm16)
/*12466*/         /*Scope*/ 18, /*->12485*/
/*12467*/           OPC_CheckCondCode, ISD::SETULT,
/*12469*/           OPC_MoveParent,
/*12470*/           OPC_CheckType, MVT::i32,
/*12472*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12474*/           OPC_EmitConvertToTarget, 1,
/*12476*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETULT:Other) - Complexity = 7
                    // Dst: (SLTiu:i32 CPURegs:i32:$rs, (imm:i32):$imm16)
/*12485*/         /*Scope*/ 30, /*->12516*/
/*12486*/           OPC_CheckCondCode, ISD::SETGE,
/*12488*/           OPC_MoveParent,
/*12489*/           OPC_CheckType, MVT::i32,
/*12491*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12493*/           OPC_EmitConvertToTarget, 1,
/*12495*/           OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*12504*/           OPC_EmitInteger, MVT::i32, 1, 
/*12507*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other) - Complexity = 7
                    // Dst: (XORi:i32 (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*12516*/         /*Scope*/ 30, /*->12547*/
/*12517*/           OPC_CheckCondCode, ISD::SETUGE,
/*12519*/           OPC_MoveParent,
/*12520*/           OPC_CheckType, MVT::i32,
/*12522*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12524*/           OPC_EmitConvertToTarget, 1,
/*12526*/           OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*12535*/           OPC_EmitInteger, MVT::i32, 1, 
/*12538*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other) - Complexity = 7
                    // Dst: (XORi:i32 (SLTiu:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*12547*/         /*Scope*/ 18, /*->12566*/
/*12548*/           OPC_CheckCondCode, ISD::SETLT,
/*12550*/           OPC_MoveParent,
/*12551*/           OPC_CheckType, MVT::i32,
/*12553*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12555*/           OPC_EmitConvertToTarget, 1,
/*12557*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltiCCRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETLT:Other) - Complexity = 7
                    // Dst: (SltiCCRxImmX16:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16)
/*12566*/         /*Scope*/ 18, /*->12585*/
/*12567*/           OPC_CheckCondCode, ISD::SETULT,
/*12569*/           OPC_MoveParent,
/*12570*/           OPC_CheckType, MVT::i32,
/*12572*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12574*/           OPC_EmitConvertToTarget, 1,
/*12576*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltiuCCRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETULT:Other) - Complexity = 7
                    // Dst: (SltiuCCRxImmX16:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16)
/*12585*/         0, /*End of Scope*/
/*12586*/       /*Scope*/ 16|128,4/*528*/, /*->13116*/
/*12588*/         OPC_MoveChild, 2,
/*12590*/         OPC_Scope, 16, /*->12608*/ // 20 children in Scope
/*12592*/           OPC_CheckCondCode, ISD::SETLT,
/*12594*/           OPC_MoveParent,
/*12595*/           OPC_CheckType, MVT::i32,
/*12597*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12599*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPURegs:i32:$rs, CPURegs:i32:$rt, SETLT:Other) - Complexity = 3
                    // Dst: (SLT:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*12608*/         /*Scope*/ 16, /*->12625*/
/*12609*/           OPC_CheckCondCode, ISD::SETULT,
/*12611*/           OPC_MoveParent,
/*12612*/           OPC_CheckType, MVT::i32,
/*12614*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12616*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPURegs:i32:$rs, CPURegs:i32:$rt, SETULT:Other) - Complexity = 3
                    // Dst: (SLTu:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*12625*/         /*Scope*/ 16, /*->12642*/
/*12626*/           OPC_CheckCondCode, ISD::SETGT,
/*12628*/           OPC_MoveParent,
/*12629*/           OPC_CheckType, MVT::i32,
/*12631*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12633*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGT:Other) - Complexity = 3
                    // Dst: (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs)
/*12642*/         /*Scope*/ 16, /*->12659*/
/*12643*/           OPC_CheckCondCode, ISD::SETUGT,
/*12645*/           OPC_MoveParent,
/*12646*/           OPC_CheckType, MVT::i32,
/*12648*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12650*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGT:Other) - Complexity = 3
                    // Dst: (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs)
/*12659*/         /*Scope*/ 28, /*->12688*/
/*12660*/           OPC_CheckCondCode, ISD::SETEQ,
/*12662*/           OPC_MoveParent,
/*12663*/           OPC_CheckType, MVT::i32,
/*12665*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12667*/           OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*12676*/           OPC_EmitInteger, MVT::i32, 1, 
/*12679*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other) - Complexity = 3
                    // Dst: (SLTiu:i32 (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
/*12688*/         /*Scope*/ 28, /*->12717*/
/*12689*/           OPC_CheckCondCode, ISD::SETNE,
/*12691*/           OPC_MoveParent,
/*12692*/           OPC_CheckType, MVT::i32,
/*12694*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12696*/           OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*12699*/           OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #3
/*12708*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other) - Complexity = 3
                    // Dst: (SLTu:i32 ZERO:i32, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs))
/*12717*/         /*Scope*/ 28, /*->12746*/
/*12718*/           OPC_CheckCondCode, ISD::SETLE,
/*12720*/           OPC_MoveParent,
/*12721*/           OPC_CheckType, MVT::i32,
/*12723*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12725*/           OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*12734*/           OPC_EmitInteger, MVT::i32, 1, 
/*12737*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), 1:i32)
/*12746*/         /*Scope*/ 28, /*->12775*/
/*12747*/           OPC_CheckCondCode, ISD::SETULE,
/*12749*/           OPC_MoveParent,
/*12750*/           OPC_CheckType, MVT::i32,
/*12752*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12754*/           OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*12763*/           OPC_EmitInteger, MVT::i32, 1, 
/*12766*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), 1:i32)
/*12775*/         /*Scope*/ 28, /*->12804*/
/*12776*/           OPC_CheckCondCode, ISD::SETGE,
/*12778*/           OPC_MoveParent,
/*12779*/           OPC_CheckType, MVT::i32,
/*12781*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12783*/           OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*12792*/           OPC_EmitInteger, MVT::i32, 1, 
/*12795*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
/*12804*/         /*Scope*/ 28, /*->12833*/
/*12805*/           OPC_CheckCondCode, ISD::SETUGE,
/*12807*/           OPC_MoveParent,
/*12808*/           OPC_CheckType, MVT::i32,
/*12810*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12812*/           OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*12821*/           OPC_EmitInteger, MVT::i32, 1, 
/*12824*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
/*12833*/         /*Scope*/ 16, /*->12850*/
/*12834*/           OPC_CheckCondCode, ISD::SETGT,
/*12836*/           OPC_MoveParent,
/*12837*/           OPC_CheckType, MVT::i32,
/*12839*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12841*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETGT:Other) - Complexity = 3
                    // Dst: (SltCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs)
/*12850*/         /*Scope*/ 16, /*->12867*/
/*12851*/           OPC_CheckCondCode, ISD::SETLT,
/*12853*/           OPC_MoveParent,
/*12854*/           OPC_CheckType, MVT::i32,
/*12856*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12858*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETLT:Other) - Complexity = 3
                    // Dst: (SltCCRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
/*12867*/         /*Scope*/ 16, /*->12884*/
/*12868*/           OPC_CheckCondCode, ISD::SETUGT,
/*12870*/           OPC_MoveParent,
/*12871*/           OPC_CheckType, MVT::i32,
/*12873*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12875*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETUGT:Other) - Complexity = 3
                    // Dst: (SltuCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs)
/*12884*/         /*Scope*/ 16, /*->12901*/
/*12885*/           OPC_CheckCondCode, ISD::SETULT,
/*12887*/           OPC_MoveParent,
/*12888*/           OPC_CheckType, MVT::i32,
/*12890*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12892*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETULT:Other) - Complexity = 3
                    // Dst: (SltuCCRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
/*12901*/         /*Scope*/ 28, /*->12930*/
/*12902*/           OPC_CheckCondCode, ISD::SETEQ,
/*12904*/           OPC_MoveParent,
/*12905*/           OPC_CheckType, MVT::i32,
/*12907*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12909*/           OPC_EmitNode, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*12918*/           OPC_EmitInteger, MVT::i32, 1, 
/*12921*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltiuCCRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETEQ:Other) - Complexity = 3
                    // Dst: (SltiuCCRxImmX16:i32 (XorRxRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs), 1:i32)
/*12930*/         /*Scope*/ 36, /*->12967*/
/*12931*/           OPC_CheckCondCode, ISD::SETGE,
/*12933*/           OPC_MoveParent,
/*12934*/           OPC_CheckType, MVT::i32,
/*12936*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12938*/           OPC_EmitNode, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*12947*/           OPC_EmitInteger, MVT::i32, 1, 
/*12950*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*12958*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETGE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltCCRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs), (LiRxImmX16:i32 1:i32))
/*12967*/         /*Scope*/ 36, /*->13004*/
/*12968*/           OPC_CheckCondCode, ISD::SETLE,
/*12970*/           OPC_MoveParent,
/*12971*/           OPC_CheckType, MVT::i32,
/*12973*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12975*/           OPC_EmitNode, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*12984*/           OPC_EmitInteger, MVT::i32, 1, 
/*12987*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImm16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*12995*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETLE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs), (LiRxImm16:i32 1:i32))
/*13004*/         /*Scope*/ 36, /*->13041*/
/*13005*/           OPC_CheckCondCode, ISD::SETNE,
/*13007*/           OPC_MoveParent,
/*13008*/           OPC_CheckType, MVT::i32,
/*13010*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13012*/           OPC_EmitInteger, MVT::i32, 0, 
/*13015*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*13023*/           OPC_EmitNode, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*13032*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETNE:Other) - Complexity = 3
                    // Dst: (SltuCCRxRy16:i32 (LiRxImmX16:i32 0:i32), (XorRxRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs))
/*13041*/         /*Scope*/ 36, /*->13078*/
/*13042*/           OPC_CheckCondCode, ISD::SETUGE,
/*13044*/           OPC_MoveParent,
/*13045*/           OPC_CheckType, MVT::i32,
/*13047*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13049*/           OPC_EmitNode, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13058*/           OPC_EmitInteger, MVT::i32, 1, 
/*13061*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*13069*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETUGE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltuCCRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs), (LiRxImmX16:i32 1:i32))
/*13078*/         /*Scope*/ 36, /*->13115*/
/*13079*/           OPC_CheckCondCode, ISD::SETULE,
/*13081*/           OPC_MoveParent,
/*13082*/           OPC_CheckType, MVT::i32,
/*13084*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13086*/           OPC_EmitNode, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*13095*/           OPC_EmitInteger, MVT::i32, 1, 
/*13098*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*13106*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETULE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltuCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs), (LiRxImmX16:i32 1:i32))
/*13115*/         0, /*End of Scope*/
/*13116*/       0, /*End of Scope*/
/*13117*/     0, /*End of Scope*/
/*13118*/   /*Scope*/ 110|128,2/*366*/, /*->13486*/
/*13120*/     OPC_CheckChild0Type, MVT::i64,
/*13122*/     OPC_RecordChild1, // #1 = $imm16
/*13123*/     OPC_Scope, 112, /*->13237*/ // 2 children in Scope
/*13125*/       OPC_MoveChild, 1,
/*13127*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13130*/       OPC_CheckPredicate, 28, // Predicate_immSExt16
/*13132*/       OPC_MoveParent,
/*13133*/       OPC_MoveChild, 2,
/*13135*/       OPC_Scope, 18, /*->13155*/ // 4 children in Scope
/*13137*/         OPC_CheckCondCode, ISD::SETLT,
/*13139*/         OPC_MoveParent,
/*13140*/         OPC_CheckType, MVT::i32,
/*13142*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13144*/         OPC_EmitConvertToTarget, 1,
/*13146*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTi64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (setcc:i32 CPU64Regs:i64:$rs, (imm:i64)<<P:Predicate_immSExt16>>:$imm16, SETLT:Other) - Complexity = 7
                  // Dst: (SLTi64:i32 CPU64Regs:i64:$rs, (imm:i64):$imm16)
/*13155*/       /*Scope*/ 18, /*->13174*/
/*13156*/         OPC_CheckCondCode, ISD::SETULT,
/*13158*/         OPC_MoveParent,
/*13159*/         OPC_CheckType, MVT::i32,
/*13161*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13163*/         OPC_EmitConvertToTarget, 1,
/*13165*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (setcc:i32 CPU64Regs:i64:$rs, (imm:i64)<<P:Predicate_immSExt16>>:$imm16, SETULT:Other) - Complexity = 7
                  // Dst: (SLTiu64:i32 CPU64Regs:i64:$rs, (imm:i64):$imm16)
/*13174*/       /*Scope*/ 30, /*->13205*/
/*13175*/         OPC_CheckCondCode, ISD::SETGE,
/*13177*/         OPC_MoveParent,
/*13178*/         OPC_CheckType, MVT::i32,
/*13180*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13182*/         OPC_EmitConvertToTarget, 1,
/*13184*/         OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*13193*/         OPC_EmitInteger, MVT::i32, 1, 
/*13196*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other) - Complexity = 7
                  // Dst: (XORi:i32 (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*13205*/       /*Scope*/ 30, /*->13236*/
/*13206*/         OPC_CheckCondCode, ISD::SETUGE,
/*13208*/         OPC_MoveParent,
/*13209*/         OPC_CheckType, MVT::i32,
/*13211*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13213*/         OPC_EmitConvertToTarget, 1,
/*13215*/         OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*13224*/         OPC_EmitInteger, MVT::i32, 1, 
/*13227*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other) - Complexity = 7
                  // Dst: (XORi:i32 (SLTiu64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*13236*/       0, /*End of Scope*/
/*13237*/     /*Scope*/ 118|128,1/*246*/, /*->13485*/
/*13239*/       OPC_MoveChild, 2,
/*13241*/       OPC_Scope, 16, /*->13259*/ // 10 children in Scope
/*13243*/         OPC_CheckCondCode, ISD::SETLT,
/*13245*/         OPC_MoveParent,
/*13246*/         OPC_CheckType, MVT::i32,
/*13248*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13250*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, SETLT:Other) - Complexity = 3
                  // Dst: (SLT64:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
/*13259*/       /*Scope*/ 16, /*->13276*/
/*13260*/         OPC_CheckCondCode, ISD::SETULT,
/*13262*/         OPC_MoveParent,
/*13263*/         OPC_CheckType, MVT::i32,
/*13265*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13267*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, SETULT:Other) - Complexity = 3
                  // Dst: (SLTu64:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
/*13276*/       /*Scope*/ 16, /*->13293*/
/*13277*/         OPC_CheckCondCode, ISD::SETGT,
/*13279*/         OPC_MoveParent,
/*13280*/         OPC_CheckType, MVT::i32,
/*13282*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13284*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGT:Other) - Complexity = 3
                  // Dst: (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs)
/*13293*/       /*Scope*/ 16, /*->13310*/
/*13294*/         OPC_CheckCondCode, ISD::SETUGT,
/*13296*/         OPC_MoveParent,
/*13297*/         OPC_CheckType, MVT::i32,
/*13299*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13301*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGT:Other) - Complexity = 3
                  // Dst: (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs)
/*13310*/       /*Scope*/ 28, /*->13339*/
/*13311*/         OPC_CheckCondCode, ISD::SETEQ,
/*13313*/         OPC_MoveParent,
/*13314*/         OPC_CheckType, MVT::i32,
/*13316*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13318*/         OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #2
/*13327*/         OPC_EmitInteger, MVT::i64, 1, 
/*13330*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other) - Complexity = 3
                  // Dst: (SLTiu64:i32 (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), 1:i64)
/*13339*/       /*Scope*/ 28, /*->13368*/
/*13340*/         OPC_CheckCondCode, ISD::SETNE,
/*13342*/         OPC_MoveParent,
/*13343*/         OPC_CheckType, MVT::i32,
/*13345*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13347*/         OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*13350*/         OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #3
/*13359*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other) - Complexity = 3
                  // Dst: (SLTu64:i32 ZERO_64:i64, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs))
/*13368*/       /*Scope*/ 28, /*->13397*/
/*13369*/         OPC_CheckCondCode, ISD::SETLE,
/*13371*/         OPC_MoveParent,
/*13372*/         OPC_CheckType, MVT::i32,
/*13374*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13376*/         OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*13385*/         OPC_EmitInteger, MVT::i32, 1, 
/*13388*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other) - Complexity = 3
                  // Dst: (XORi:i32 (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), 1:i32)
/*13397*/       /*Scope*/ 28, /*->13426*/
/*13398*/         OPC_CheckCondCode, ISD::SETULE,
/*13400*/         OPC_MoveParent,
/*13401*/         OPC_CheckType, MVT::i32,
/*13403*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13405*/         OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*13414*/         OPC_EmitInteger, MVT::i32, 1, 
/*13417*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other) - Complexity = 3
                  // Dst: (XORi:i32 (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), 1:i32)
/*13426*/       /*Scope*/ 28, /*->13455*/
/*13427*/         OPC_CheckCondCode, ISD::SETGE,
/*13429*/         OPC_MoveParent,
/*13430*/         OPC_CheckType, MVT::i32,
/*13432*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13434*/         OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13443*/         OPC_EmitInteger, MVT::i32, 1, 
/*13446*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other) - Complexity = 3
                  // Dst: (XORi:i32 (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), 1:i32)
/*13455*/       /*Scope*/ 28, /*->13484*/
/*13456*/         OPC_CheckCondCode, ISD::SETUGE,
/*13458*/         OPC_MoveParent,
/*13459*/         OPC_CheckType, MVT::i32,
/*13461*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13463*/         OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13472*/         OPC_EmitInteger, MVT::i32, 1, 
/*13475*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other) - Complexity = 3
                  // Dst: (XORi:i32 (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), 1:i32)
/*13484*/       0, /*End of Scope*/
/*13485*/     0, /*End of Scope*/
/*13486*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 94,  TARGET_VAL(ISD::AND),// ->13584
/*13490*/   OPC_RecordChild0, // #0 = $rs
/*13491*/   OPC_RecordChild1, // #1 = $imm16
/*13492*/   OPC_Scope, 46, /*->13540*/ // 3 children in Scope
/*13494*/     OPC_MoveChild, 1,
/*13496*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13499*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*13501*/     OPC_MoveParent,
/*13502*/     OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->13521
/*13505*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13507*/       OPC_EmitConvertToTarget, 1,
/*13509*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*13512*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ANDi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (and:i32 CPURegsOpnd:i32:$rs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (ANDi:i32 CPURegsOpnd:i32:$rs, (LO16:i32 (imm:i32):$imm16))
              /*SwitchType*/ 16,  MVT::i64,// ->13539
/*13523*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13525*/       OPC_EmitConvertToTarget, 1,
/*13527*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*13530*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DANDi), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (and:i64 CPU64RegsOpnd:i64:$rs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (DANDi:i64 CPU64RegsOpnd:i64:$rs, (LO16:i64 (imm:i64):$imm16))
              0, // EndSwitchType
/*13540*/   /*Scope*/ 28, /*->13569*/
/*13541*/     OPC_CheckType, MVT::i32,
/*13543*/     OPC_Scope, 11, /*->13556*/ // 2 children in Scope
/*13545*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13547*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AND), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                // Dst: (AND:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*13556*/     /*Scope*/ 11, /*->13568*/
/*13557*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13559*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AndRxRxRy16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                // Dst: (AndRxRxRy16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*13568*/     0, /*End of Scope*/
/*13569*/   /*Scope*/ 13, /*->13583*/
/*13570*/     OPC_CheckType, MVT::i64,
/*13572*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13574*/     OPC_MorphNodeTo, TARGET_VAL(Mips::AND64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (and:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
              // Dst: (AND64:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*13583*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 94,  TARGET_VAL(ISD::OR),// ->13681
/*13587*/   OPC_RecordChild0, // #0 = $rs
/*13588*/   OPC_RecordChild1, // #1 = $imm16
/*13589*/   OPC_Scope, 46, /*->13637*/ // 3 children in Scope
/*13591*/     OPC_MoveChild, 1,
/*13593*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13596*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*13598*/     OPC_MoveParent,
/*13599*/     OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->13618
/*13602*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13604*/       OPC_EmitConvertToTarget, 1,
/*13606*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*13609*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (or:i32 CPURegsOpnd:i32:$rs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (ORi:i32 CPURegsOpnd:i32:$rs, (LO16:i32 (imm:i32):$imm16))
              /*SwitchType*/ 16,  MVT::i64,// ->13636
/*13620*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13622*/       OPC_EmitConvertToTarget, 1,
/*13624*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*13627*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ORi64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 CPU64RegsOpnd:i64:$rs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (ORi64:i64 CPU64RegsOpnd:i64:$rs, (LO16:i64 (imm:i64):$imm16))
              0, // EndSwitchType
/*13637*/   /*Scope*/ 28, /*->13666*/
/*13638*/     OPC_CheckType, MVT::i32,
/*13640*/     OPC_Scope, 11, /*->13653*/ // 2 children in Scope
/*13642*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13644*/       OPC_MorphNodeTo, TARGET_VAL(Mips::OR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                // Dst: (OR:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*13653*/     /*Scope*/ 11, /*->13665*/
/*13654*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13656*/       OPC_MorphNodeTo, TARGET_VAL(Mips::OrRxRxRy16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                // Dst: (OrRxRxRy16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*13665*/     0, /*End of Scope*/
/*13666*/   /*Scope*/ 13, /*->13680*/
/*13667*/     OPC_CheckType, MVT::i64,
/*13669*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13671*/     OPC_MorphNodeTo, TARGET_VAL(Mips::OR64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (or:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
              // Dst: (OR64:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*13680*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 117,  TARGET_VAL(ISD::SHL),// ->13801
/*13684*/   OPC_RecordChild0, // #0 = $rt
/*13685*/   OPC_RecordChild1, // #1 = $shamt
/*13686*/   OPC_Scope, 66, /*->13754*/ // 2 children in Scope
/*13688*/     OPC_MoveChild, 1,
/*13690*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13693*/     OPC_CheckType, MVT::i32,
/*13695*/     OPC_Scope, 18, /*->13715*/ // 3 children in Scope
/*13697*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*13699*/       OPC_MoveParent,
/*13700*/       OPC_CheckType, MVT::i32,
/*13702*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13704*/       OPC_EmitConvertToTarget, 1,
/*13706*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SLL), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i32 CPURegsOpnd:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (SLL:i32 CPURegsOpnd:i32:$rt, (imm:i32):$shamt)
/*13715*/     /*Scope*/ 18, /*->13734*/
/*13716*/       OPC_CheckPredicate, 31, // Predicate_immZExt6
/*13718*/       OPC_MoveParent,
/*13719*/       OPC_CheckType, MVT::i64,
/*13721*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13723*/       OPC_EmitConvertToTarget, 1,
/*13725*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSLL), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i64 CPU64RegsOpnd:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DSLL:i64 CPU64RegsOpnd:i64:$rt, (imm:i32):$shamt)
/*13734*/     /*Scope*/ 18, /*->13753*/
/*13735*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*13737*/       OPC_MoveParent,
/*13738*/       OPC_CheckType, MVT::i32,
/*13740*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13742*/       OPC_EmitConvertToTarget, 1,
/*13744*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SllX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm) - Complexity = 7
                // Dst: (SllX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm)
/*13753*/     0, /*End of Scope*/
/*13754*/   /*Scope*/ 45, /*->13800*/
/*13755*/     OPC_CheckChild1Type, MVT::i32,
/*13757*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->13786
/*13760*/       OPC_Scope, 11, /*->13773*/ // 2 children in Scope
/*13762*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13764*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLLV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (shl:i32 CPURegsOpnd:i32:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                  // Dst: (SLLV:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*13773*/       /*Scope*/ 11, /*->13785*/
/*13774*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13776*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SllvRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (shl:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra) - Complexity = 3
                  // Dst: (SllvRxRy16:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra)
/*13785*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->13799
/*13788*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13790*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSLLV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (shl:i64 CPU64RegsOpnd:i64:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                // Dst: (DSLLV:i64 CPURegsOpnd:i32:$rs, CPU64RegsOpnd:i64:$rt)
              0, // EndSwitchType
/*13800*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 117,  TARGET_VAL(ISD::SRL),// ->13921
/*13804*/   OPC_RecordChild0, // #0 = $rt
/*13805*/   OPC_RecordChild1, // #1 = $shamt
/*13806*/   OPC_Scope, 66, /*->13874*/ // 2 children in Scope
/*13808*/     OPC_MoveChild, 1,
/*13810*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13813*/     OPC_CheckType, MVT::i32,
/*13815*/     OPC_Scope, 18, /*->13835*/ // 3 children in Scope
/*13817*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*13819*/       OPC_MoveParent,
/*13820*/       OPC_CheckType, MVT::i32,
/*13822*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13824*/       OPC_EmitConvertToTarget, 1,
/*13826*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SRL), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i32 CPURegsOpnd:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (SRL:i32 CPURegsOpnd:i32:$rt, (imm:i32):$shamt)
/*13835*/     /*Scope*/ 18, /*->13854*/
/*13836*/       OPC_CheckPredicate, 31, // Predicate_immZExt6
/*13838*/       OPC_MoveParent,
/*13839*/       OPC_CheckType, MVT::i64,
/*13841*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13843*/       OPC_EmitConvertToTarget, 1,
/*13845*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRL), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i64 CPU64RegsOpnd:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DSRL:i64 CPU64RegsOpnd:i64:$rt, (imm:i32):$shamt)
/*13854*/     /*Scope*/ 18, /*->13873*/
/*13855*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*13857*/       OPC_MoveParent,
/*13858*/       OPC_CheckType, MVT::i32,
/*13860*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13862*/       OPC_EmitConvertToTarget, 1,
/*13864*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SrlX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm) - Complexity = 7
                // Dst: (SrlX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm)
/*13873*/     0, /*End of Scope*/
/*13874*/   /*Scope*/ 45, /*->13920*/
/*13875*/     OPC_CheckChild1Type, MVT::i32,
/*13877*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->13906
/*13880*/       OPC_Scope, 11, /*->13893*/ // 2 children in Scope
/*13882*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13884*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SRLV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (srl:i32 CPURegsOpnd:i32:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                  // Dst: (SRLV:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*13893*/       /*Scope*/ 11, /*->13905*/
/*13894*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13896*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SrlvRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (srl:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra) - Complexity = 3
                  // Dst: (SrlvRxRy16:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra)
/*13905*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->13919
/*13908*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13910*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRLV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (srl:i64 CPU64RegsOpnd:i64:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                // Dst: (DSRLV:i64 CPURegsOpnd:i32:$rs, CPU64RegsOpnd:i64:$rt)
              0, // EndSwitchType
/*13920*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 117,  TARGET_VAL(ISD::SRA),// ->14041
/*13924*/   OPC_RecordChild0, // #0 = $rt
/*13925*/   OPC_RecordChild1, // #1 = $shamt
/*13926*/   OPC_Scope, 66, /*->13994*/ // 2 children in Scope
/*13928*/     OPC_MoveChild, 1,
/*13930*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13933*/     OPC_CheckType, MVT::i32,
/*13935*/     OPC_Scope, 18, /*->13955*/ // 3 children in Scope
/*13937*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*13939*/       OPC_MoveParent,
/*13940*/       OPC_CheckType, MVT::i32,
/*13942*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13944*/       OPC_EmitConvertToTarget, 1,
/*13946*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SRA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 CPURegsOpnd:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (SRA:i32 CPURegsOpnd:i32:$rt, (imm:i32):$shamt)
/*13955*/     /*Scope*/ 18, /*->13974*/
/*13956*/       OPC_CheckPredicate, 31, // Predicate_immZExt6
/*13958*/       OPC_MoveParent,
/*13959*/       OPC_CheckType, MVT::i64,
/*13961*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13963*/       OPC_EmitConvertToTarget, 1,
/*13965*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRA), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i64 CPU64RegsOpnd:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DSRA:i64 CPU64RegsOpnd:i64:$rt, (imm:i32):$shamt)
/*13974*/     /*Scope*/ 18, /*->13993*/
/*13975*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*13977*/       OPC_MoveParent,
/*13978*/       OPC_CheckType, MVT::i32,
/*13980*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13982*/       OPC_EmitConvertToTarget, 1,
/*13984*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SraX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm) - Complexity = 7
                // Dst: (SraX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm)
/*13993*/     0, /*End of Scope*/
/*13994*/   /*Scope*/ 45, /*->14040*/
/*13995*/     OPC_CheckChild1Type, MVT::i32,
/*13997*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->14026
/*14000*/       OPC_Scope, 11, /*->14013*/ // 2 children in Scope
/*14002*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14004*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SRAV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (sra:i32 CPURegsOpnd:i32:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                  // Dst: (SRAV:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*14013*/       /*Scope*/ 11, /*->14025*/
/*14014*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14016*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SravRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra) - Complexity = 3
                  // Dst: (SravRxRy16:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra)
/*14025*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->14039
/*14028*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14030*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRAV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (sra:i64 CPU64RegsOpnd:i64:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                // Dst: (DSRAV:i64 CPURegsOpnd:i32:$rs, CPU64RegsOpnd:i64:$rt)
              0, // EndSwitchType
/*14040*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ROTR),// ->14127
/*14044*/   OPC_RecordChild0, // #0 = $rt
/*14045*/   OPC_RecordChild1, // #1 = $shamt
/*14046*/   OPC_Scope, 47, /*->14095*/ // 2 children in Scope
/*14048*/     OPC_MoveChild, 1,
/*14050*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14053*/     OPC_CheckType, MVT::i32,
/*14055*/     OPC_Scope, 18, /*->14075*/ // 2 children in Scope
/*14057*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14059*/       OPC_MoveParent,
/*14060*/       OPC_CheckType, MVT::i32,
/*14062*/       OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*14064*/       OPC_EmitConvertToTarget, 1,
/*14066*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ROTR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (rotr:i32 CPURegsOpnd:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (ROTR:i32 CPURegsOpnd:i32:$rt, (imm:i32):$shamt)
/*14075*/     /*Scope*/ 18, /*->14094*/
/*14076*/       OPC_CheckPredicate, 31, // Predicate_immZExt6
/*14078*/       OPC_MoveParent,
/*14079*/       OPC_CheckType, MVT::i64,
/*14081*/       OPC_CheckPatternPredicate, 16, // (Subtarget.hasMips64r2()) && (Subtarget.hasStandardEncoding())
/*14083*/       OPC_EmitConvertToTarget, 1,
/*14085*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DROTR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (rotr:i64 CPU64RegsOpnd:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DROTR:i64 CPU64RegsOpnd:i64:$rt, (imm:i32):$shamt)
/*14094*/     0, /*End of Scope*/
/*14095*/   /*Scope*/ 30, /*->14126*/
/*14096*/     OPC_CheckChild1Type, MVT::i32,
/*14098*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->14112
/*14101*/       OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*14103*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ROTRV), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (rotr:i32 CPURegsOpnd:i32:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                // Dst: (ROTRV:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
              /*SwitchType*/ 11,  MVT::i64,// ->14125
/*14114*/       OPC_CheckPatternPredicate, 16, // (Subtarget.hasMips64r2()) && (Subtarget.hasStandardEncoding())
/*14116*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DROTRV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (rotr:i64 CPU64RegsOpnd:i64:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                // Dst: (DROTRV:i64 CPURegsOpnd:i32:$rs, CPU64RegsOpnd:i64:$rt)
              0, // EndSwitchType
/*14126*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 86,  TARGET_VAL(ISD::ADDC),// ->14216
/*14130*/   OPC_RecordChild0, // #0 = $src
/*14131*/   OPC_RecordChild1, // #1 = $imm
/*14132*/   OPC_Scope, 40, /*->14174*/ // 2 children in Scope
/*14134*/     OPC_MoveChild, 1,
/*14136*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14139*/     OPC_CheckPredicate, 28, // Predicate_immSExt16
/*14141*/     OPC_MoveParent,
/*14142*/     OPC_CheckType, MVT::i32,
/*14144*/     OPC_Scope, 13, /*->14159*/ // 2 children in Scope
/*14146*/       OPC_CheckPatternPredicate, 17, // (Subtarget.hasStandardEncoding()) && (!Subtarget.hasDSP())
/*14148*/       OPC_EmitConvertToTarget, 1,
/*14150*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 CPURegs:i32:$src, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (ADDiu:i32 CPURegs:i32:$src, (imm:i32):$imm)
/*14159*/     /*Scope*/ 13, /*->14173*/
/*14160*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14162*/       OPC_EmitConvertToTarget, 1,
/*14164*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 CPU16Regs:i32:$src, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$src, (imm:i32):$imm)
/*14173*/     0, /*End of Scope*/
/*14174*/   /*Scope*/ 40, /*->14215*/
/*14175*/     OPC_CheckType, MVT::i32,
/*14177*/     OPC_Scope, 11, /*->14190*/ // 3 children in Scope
/*14179*/       OPC_CheckPatternPredicate, 17, // (Subtarget.hasStandardEncoding()) && (!Subtarget.hasDSP())
/*14181*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDu), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs) - Complexity = 3
                // Dst: (ADDu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
/*14190*/     /*Scope*/ 11, /*->14202*/
/*14191*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14193*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AdduRxRyRz16), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs) - Complexity = 3
                // Dst: (AdduRxRyRz16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs)
/*14202*/     /*Scope*/ 11, /*->14214*/
/*14203*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14205*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDSC), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 i32:i32:$a, i32:i32:$b) - Complexity = 3
                // Dst: (ADDSC:i32 i32:i32:$a, i32:i32:$b)
/*14214*/     0, /*End of Scope*/
/*14215*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 39,  TARGET_VAL(MipsISD::SHILO),// ->14258
/*14219*/   OPC_RecordChild0, // #0 = $shift
/*14220*/   OPC_Scope, 22, /*->14244*/ // 2 children in Scope
/*14222*/     OPC_MoveChild, 0,
/*14224*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14227*/     OPC_CheckPredicate, 32, // Predicate_immSExt6
/*14229*/     OPC_MoveParent,
/*14230*/     OPC_RecordChild1, // #1 = $acin
/*14231*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14233*/     OPC_EmitConvertToTarget, 0,
/*14235*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHILO), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 2, 1, 
              // Src: (MipsSHILO:Untyped (imm:i32)<<P:Predicate_immSExt6>>:$shift, ACRegsDSP:Untyped:$acin) - Complexity = 7
              // Dst: (SHILO:Untyped (imm:i32):$shift, ACRegsDSP:Untyped:$acin)
/*14244*/   /*Scope*/ 12, /*->14257*/
/*14245*/     OPC_RecordChild1, // #1 = $acin
/*14246*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14248*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHILOV), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsSHILO:Untyped CPURegs:i32:$rs, ACRegsDSP:Untyped:$acin) - Complexity = 3
              // Dst: (SHILOV:Untyped CPURegs:i32:$rs, ACRegsDSP:Untyped:$acin)
/*14257*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTP),// ->14303
/*14261*/   OPC_RecordNode,   // #0 = 'MipsEXTP' chained node
/*14262*/   OPC_RecordChild1, // #1 = $shift
/*14263*/   OPC_Scope, 23, /*->14288*/ // 2 children in Scope
/*14265*/     OPC_MoveChild, 1,
/*14267*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14270*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14272*/     OPC_MoveParent,
/*14273*/     OPC_RecordChild2, // #2 = $ac
/*14274*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14276*/     OPC_EmitMergeInputChains1_0,
/*14277*/     OPC_EmitConvertToTarget, 1,
/*14279*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTP), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTP:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACRegsDSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTP:i32 ACRegsDSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*14288*/   /*Scope*/ 13, /*->14302*/
/*14289*/     OPC_RecordChild2, // #2 = $ac
/*14290*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14292*/     OPC_EmitMergeInputChains1_0,
/*14293*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTPV), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTP:i32 CPURegs:i32:$rs, ACRegsDSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTPV:i32 ACRegsDSP:Untyped:$ac, CPURegs:i32:$rs)
/*14302*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTPDP),// ->14348
/*14306*/   OPC_RecordNode,   // #0 = 'MipsEXTPDP' chained node
/*14307*/   OPC_RecordChild1, // #1 = $shift
/*14308*/   OPC_Scope, 23, /*->14333*/ // 2 children in Scope
/*14310*/     OPC_MoveChild, 1,
/*14312*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14315*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14317*/     OPC_MoveParent,
/*14318*/     OPC_RecordChild2, // #2 = $ac
/*14319*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14321*/     OPC_EmitMergeInputChains1_0,
/*14322*/     OPC_EmitConvertToTarget, 1,
/*14324*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTPDP), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTPDP:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACRegsDSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTPDP:i32 ACRegsDSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*14333*/   /*Scope*/ 13, /*->14347*/
/*14334*/     OPC_RecordChild2, // #2 = $ac
/*14335*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14337*/     OPC_EmitMergeInputChains1_0,
/*14338*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTPDPV), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTPDP:i32 CPURegs:i32:$rs, ACRegsDSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTPDPV:i32 ACRegsDSP:Untyped:$ac, CPURegs:i32:$rs)
/*14347*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTR_W),// ->14393
/*14351*/   OPC_RecordNode,   // #0 = 'MipsEXTR_W' chained node
/*14352*/   OPC_RecordChild1, // #1 = $shift
/*14353*/   OPC_Scope, 23, /*->14378*/ // 2 children in Scope
/*14355*/     OPC_MoveChild, 1,
/*14357*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14360*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14362*/     OPC_MoveParent,
/*14363*/     OPC_RecordChild2, // #2 = $ac
/*14364*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14366*/     OPC_EmitMergeInputChains1_0,
/*14367*/     OPC_EmitConvertToTarget, 1,
/*14369*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_W:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACRegsDSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTR_W:i32 ACRegsDSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*14378*/   /*Scope*/ 13, /*->14392*/
/*14379*/     OPC_RecordChild2, // #2 = $ac
/*14380*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14382*/     OPC_EmitMergeInputChains1_0,
/*14383*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_W:i32 CPURegs:i32:$rs, ACRegsDSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTRV_W:i32 ACRegsDSP:Untyped:$ac, CPURegs:i32:$rs)
/*14392*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTR_R_W),// ->14438
/*14396*/   OPC_RecordNode,   // #0 = 'MipsEXTR_R_W' chained node
/*14397*/   OPC_RecordChild1, // #1 = $shift
/*14398*/   OPC_Scope, 23, /*->14423*/ // 2 children in Scope
/*14400*/     OPC_MoveChild, 1,
/*14402*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14405*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14407*/     OPC_MoveParent,
/*14408*/     OPC_RecordChild2, // #2 = $ac
/*14409*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14411*/     OPC_EmitMergeInputChains1_0,
/*14412*/     OPC_EmitConvertToTarget, 1,
/*14414*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_R_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_R_W:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACRegsDSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTR_R_W:i32 ACRegsDSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*14423*/   /*Scope*/ 13, /*->14437*/
/*14424*/     OPC_RecordChild2, // #2 = $ac
/*14425*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14427*/     OPC_EmitMergeInputChains1_0,
/*14428*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_R_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_R_W:i32 CPURegs:i32:$rs, ACRegsDSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTRV_R_W:i32 ACRegsDSP:Untyped:$ac, CPURegs:i32:$rs)
/*14437*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTR_RS_W),// ->14483
/*14441*/   OPC_RecordNode,   // #0 = 'MipsEXTR_RS_W' chained node
/*14442*/   OPC_RecordChild1, // #1 = $shift
/*14443*/   OPC_Scope, 23, /*->14468*/ // 2 children in Scope
/*14445*/     OPC_MoveChild, 1,
/*14447*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14450*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14452*/     OPC_MoveParent,
/*14453*/     OPC_RecordChild2, // #2 = $ac
/*14454*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14456*/     OPC_EmitMergeInputChains1_0,
/*14457*/     OPC_EmitConvertToTarget, 1,
/*14459*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_RS_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_RS_W:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACRegsDSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTR_RS_W:i32 ACRegsDSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*14468*/   /*Scope*/ 13, /*->14482*/
/*14469*/     OPC_RecordChild2, // #2 = $ac
/*14470*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14472*/     OPC_EmitMergeInputChains1_0,
/*14473*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_RS_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_RS_W:i32 CPURegs:i32:$rs, ACRegsDSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTRV_RS_W:i32 ACRegsDSP:Untyped:$ac, CPURegs:i32:$rs)
/*14482*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTR_S_H),// ->14528
/*14486*/   OPC_RecordNode,   // #0 = 'MipsEXTR_S_H' chained node
/*14487*/   OPC_RecordChild1, // #1 = $shift
/*14488*/   OPC_Scope, 23, /*->14513*/ // 2 children in Scope
/*14490*/     OPC_MoveChild, 1,
/*14492*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14495*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14497*/     OPC_MoveParent,
/*14498*/     OPC_RecordChild2, // #2 = $ac
/*14499*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14501*/     OPC_EmitMergeInputChains1_0,
/*14502*/     OPC_EmitConvertToTarget, 1,
/*14504*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_S_H), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_S_H:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACRegsDSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTR_S_H:i32 ACRegsDSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*14513*/   /*Scope*/ 13, /*->14527*/
/*14514*/     OPC_RecordChild2, // #2 = $ac
/*14515*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14517*/     OPC_EmitMergeInputChains1_0,
/*14518*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_S_H), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_S_H:i32 CPURegs:i32:$rs, ACRegsDSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTRV_S_H:i32 ACRegsDSP:Untyped:$ac, CPURegs:i32:$rs)
/*14527*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::CALLSEQ_START),// ->14547
/*14531*/   OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*14532*/   OPC_RecordChild1, // #1 = $amt
/*14533*/   OPC_MoveChild, 1,
/*14535*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*14538*/   OPC_MoveParent,
/*14539*/   OPC_EmitMergeInputChains1_0,
/*14540*/   OPC_MorphNodeTo, TARGET_VAL(Mips::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN (timm:i32):$amt)
          /*SwitchOpcode*/ 20,  TARGET_VAL(MipsISD::Sync),// ->14570
/*14550*/   OPC_RecordNode,   // #0 = 'MipsSync' chained node
/*14551*/   OPC_RecordChild1, // #1 = $stype
/*14552*/   OPC_MoveChild, 1,
/*14554*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14557*/   OPC_MoveParent,
/*14558*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14560*/   OPC_EmitMergeInputChains1_0,
/*14561*/   OPC_EmitConvertToTarget, 1,
/*14563*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 2, 
            // Src: (MipsSync (imm:i32):$stype) - Complexity = 6
            // Dst: (SYNC (imm:i32):$stype)
          /*SwitchOpcode*/ 126,  TARGET_VAL(MipsISD::JmpLink),// ->14699
/*14573*/   OPC_RecordNode,   // #0 = 'MipsJmpLink' chained node
/*14574*/   OPC_CaptureGlueInput,
/*14575*/   OPC_RecordChild1, // #1 = $target
/*14576*/   OPC_Scope, 80, /*->14658*/ // 3 children in Scope
/*14578*/     OPC_MoveChild, 1,
/*14580*/     OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::Constant),// ->14597
/*14584*/       OPC_MoveParent,
/*14585*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14587*/       OPC_EmitMergeInputChains1_0,
/*14588*/       OPC_EmitConvertToTarget, 1,
/*14590*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (MipsJmpLink (imm:iPTR):$target) - Complexity = 6
                // Dst: (JAL (imm:iPTR):$target)
              /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetGlobalAddress),// ->14627
/*14600*/       OPC_CheckType, MVT::i32,
/*14602*/       OPC_MoveParent,
/*14603*/       OPC_Scope, 10, /*->14615*/ // 2 children in Scope
/*14605*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14607*/         OPC_EmitMergeInputChains1_0,
/*14608*/         OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (MipsJmpLink (tglobaladdr:i32):$dst) - Complexity = 6
                  // Dst: (JAL (tglobaladdr:i32):$dst)
/*14615*/       /*Scope*/ 10, /*->14626*/
/*14616*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14618*/         OPC_EmitMergeInputChains1_0,
/*14619*/         OPC_MorphNodeTo, TARGET_VAL(Mips::Jal16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (MipsJmpLink (tglobaladdr:i32):$dst) - Complexity = 6
                  // Dst: (Jal16 (tglobaladdr:i32):$dst)
/*14626*/       0, /*End of Scope*/
              /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetExternalSymbol),// ->14657
/*14630*/       OPC_CheckType, MVT::i32,
/*14632*/       OPC_MoveParent,
/*14633*/       OPC_Scope, 10, /*->14645*/ // 2 children in Scope
/*14635*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14637*/         OPC_EmitMergeInputChains1_0,
/*14638*/         OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (MipsJmpLink (texternalsym:i32):$dst) - Complexity = 6
                  // Dst: (JAL (texternalsym:i32):$dst)
/*14645*/       /*Scope*/ 10, /*->14656*/
/*14646*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14648*/         OPC_EmitMergeInputChains1_0,
/*14649*/         OPC_MorphNodeTo, TARGET_VAL(Mips::Jal16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (MipsJmpLink (texternalsym:i32):$dst) - Complexity = 6
                  // Dst: (Jal16 (texternalsym:i32):$dst)
/*14656*/       0, /*End of Scope*/
              0, // EndSwitchOpcode
/*14658*/   /*Scope*/ 26, /*->14685*/
/*14659*/     OPC_CheckChild1Type, MVT::i32,
/*14661*/     OPC_Scope, 10, /*->14673*/ // 2 children in Scope
/*14663*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14665*/       OPC_EmitMergeInputChains1_0,
/*14666*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JALRPseudo), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsJmpLink CPURegs:i32:$rs) - Complexity = 3
                // Dst: (JALRPseudo CPURegs:i32:$rs)
/*14673*/     /*Scope*/ 10, /*->14684*/
/*14674*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14676*/       OPC_EmitMergeInputChains1_0,
/*14677*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JumpLinkReg16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsJmpLink CPU16Regs:i32:$rs) - Complexity = 3
                // Dst: (JumpLinkReg16 CPU16Regs:i32:$rs)
/*14684*/     0, /*End of Scope*/
/*14685*/   /*Scope*/ 12, /*->14698*/
/*14686*/     OPC_CheckChild1Type, MVT::i64,
/*14688*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14690*/     OPC_EmitMergeInputChains1_0,
/*14691*/     OPC_MorphNodeTo, TARGET_VAL(Mips::JALR64Pseudo), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsJmpLink CPU64Regs:i64:$rs) - Complexity = 3
              // Dst: (JALR64Pseudo CPU64Regs:i64:$rs)
/*14698*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 80,  TARGET_VAL(MipsISD::TailCall),// ->14782
/*14702*/   OPC_RecordNode,   // #0 = 'MipsTailCall' chained node
/*14703*/   OPC_CaptureGlueInput,
/*14704*/   OPC_RecordChild1, // #1 = $target
/*14705*/   OPC_Scope, 48, /*->14755*/ // 3 children in Scope
/*14707*/     OPC_MoveChild, 1,
/*14709*/     OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::Constant),// ->14726
/*14713*/       OPC_MoveParent,
/*14714*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14716*/       OPC_EmitMergeInputChains1_0,
/*14717*/       OPC_EmitConvertToTarget, 1,
/*14719*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (MipsTailCall (imm:iPTR):$target) - Complexity = 6
                // Dst: (TAILCALL (imm:iPTR):$target)
              /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->14740
/*14729*/       OPC_MoveParent,
/*14730*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14732*/       OPC_EmitMergeInputChains1_0,
/*14733*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsTailCall (tglobaladdr:iPTR):$dst) - Complexity = 6
                // Dst: (TAILCALL (tglobaladdr:iPTR):$dst)
              /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetExternalSymbol),// ->14754
/*14743*/       OPC_MoveParent,
/*14744*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14746*/       OPC_EmitMergeInputChains1_0,
/*14747*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsTailCall (texternalsym:iPTR):$dst) - Complexity = 6
                // Dst: (TAILCALL (texternalsym:iPTR):$dst)
              0, // EndSwitchOpcode
/*14755*/   /*Scope*/ 12, /*->14768*/
/*14756*/     OPC_CheckChild1Type, MVT::i32,
/*14758*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14760*/     OPC_EmitMergeInputChains1_0,
/*14761*/     OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL_R), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsTailCall CPURegs:i32:$rs) - Complexity = 3
              // Dst: (TAILCALL_R CPURegs:i32:$rs)
/*14768*/   /*Scope*/ 12, /*->14781*/
/*14769*/     OPC_CheckChild1Type, MVT::i64,
/*14771*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14773*/     OPC_EmitMergeInputChains1_0,
/*14774*/     OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL64_R), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsTailCall CPU64Regs:i64:$rs) - Complexity = 3
              // Dst: (TAILCALL64_R CPU64Regs:i64:$rs)
/*14781*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 7|128,2/*263*/,  TARGET_VAL(MipsISD::Hi),// ->15049
/*14786*/   OPC_RecordChild0, // #0 = $in
/*14787*/   OPC_MoveChild, 0,
/*14789*/   OPC_SwitchOpcode /*6 cases */, 53,  TARGET_VAL(ISD::TargetGlobalAddress),// ->14846
/*14793*/     OPC_MoveParent,
/*14794*/     OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->14833
/*14797*/       OPC_Scope, 10, /*->14809*/ // 2 children in Scope
/*14799*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14801*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (MipsHi:i32 (tglobaladdr:i32):$in) - Complexity = 6
                  // Dst: (LUi:i32 (tglobaladdr:i32):$in)
/*14809*/       /*Scope*/ 22, /*->14832*/
/*14810*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14812*/         OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*14820*/         OPC_EmitInteger, MVT::i32, 16, 
/*14823*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SllX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (MipsHi:i32 (tglobaladdr:i32):$in) - Complexity = 6
                  // Dst: (SllX16:i32 (LiRxImmX16:i32 (tglobaladdr:i32):$in), 16:i32)
/*14832*/       0, /*End of Scope*/
              /*SwitchType*/ 10,  MVT::i64,// ->14845
/*14835*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14837*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tglobaladdr:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetBlockAddress),// ->14876
/*14849*/     OPC_MoveParent,
/*14850*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->14863
/*14853*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14855*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (tblockaddress:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 10,  MVT::i64,// ->14875
/*14865*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14867*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tblockaddress:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::TargetJumpTable),// ->14932
/*14879*/     OPC_MoveParent,
/*14880*/     OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->14919
/*14883*/       OPC_Scope, 10, /*->14895*/ // 2 children in Scope
/*14885*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14887*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (MipsHi:i32 (tjumptable:i32):$in) - Complexity = 6
                  // Dst: (LUi:i32 (tjumptable:i32):$in)
/*14895*/       /*Scope*/ 22, /*->14918*/
/*14896*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14898*/         OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*14906*/         OPC_EmitInteger, MVT::i32, 16, 
/*14909*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SllX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (MipsHi:i32 (tjumptable:i32):$in) - Complexity = 6
                  // Dst: (SllX16:i32 (LiRxImmX16:i32 (tjumptable:i32):$in), 16:i32)
/*14918*/       0, /*End of Scope*/
              /*SwitchType*/ 10,  MVT::i64,// ->14931
/*14921*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14923*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tjumptable:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetConstantPool),// ->14962
/*14935*/     OPC_MoveParent,
/*14936*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->14949
/*14939*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14941*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (tconstpool:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 10,  MVT::i64,// ->14961
/*14951*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14953*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tconstpool:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->15018
/*14965*/     OPC_MoveParent,
/*14966*/     OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->15005
/*14969*/       OPC_Scope, 10, /*->14981*/ // 2 children in Scope
/*14971*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14973*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (MipsHi:i32 (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (LUi:i32 (tglobaltlsaddr:i32):$in)
/*14981*/       /*Scope*/ 22, /*->15004*/
/*14982*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14984*/         OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*14992*/         OPC_EmitInteger, MVT::i32, 16, 
/*14995*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SllX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (MipsHi:i32 (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (SllX16:i32 (LiRxImmX16:i32 (tglobaltlsaddr:i32):$in), 16:i32)
/*15004*/       0, /*End of Scope*/
              /*SwitchType*/ 10,  MVT::i64,// ->15017
/*15007*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15009*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tglobaltlsaddr:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tglobaltlsaddr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetExternalSymbol),// ->15048
/*15021*/     OPC_MoveParent,
/*15022*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->15035
/*15025*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15027*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (texternalsym:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (texternalsym:i32):$in)
              /*SwitchType*/ 10,  MVT::i64,// ->15047
/*15037*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15039*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (texternalsym:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (texternalsym:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 105|128,1/*233*/,  TARGET_VAL(MipsISD::Lo),// ->15286
/*15053*/   OPC_RecordChild0, // #0 = $in
/*15054*/   OPC_MoveChild, 0,
/*15056*/   OPC_SwitchOpcode /*6 cases */, 35,  TARGET_VAL(ISD::TargetGlobalAddress),// ->15095
/*15060*/     OPC_MoveParent,
/*15061*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15078
/*15064*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15066*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15069*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tglobaladdr:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tglobaladdr:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15094
/*15080*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15082*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15085*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tglobaladdr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetBlockAddress),// ->15133
/*15098*/     OPC_MoveParent,
/*15099*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15116
/*15102*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15104*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15107*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tblockaddress:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tblockaddress:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15132
/*15118*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15120*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15123*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tblockaddress:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetJumpTable),// ->15171
/*15136*/     OPC_MoveParent,
/*15137*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15154
/*15140*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15142*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15145*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tjumptable:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tjumptable:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15170
/*15156*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15158*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15161*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tjumptable:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetConstantPool),// ->15209
/*15174*/     OPC_MoveParent,
/*15175*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15192
/*15178*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15180*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15183*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tconstpool:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tconstpool:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15208
/*15194*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15196*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15199*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tconstpool:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->15247
/*15212*/     OPC_MoveParent,
/*15213*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15230
/*15216*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15218*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15221*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tglobaltlsaddr:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tglobaltlsaddr:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15246
/*15232*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15234*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15237*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tglobaltlsaddr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tglobaltlsaddr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetExternalSymbol),// ->15285
/*15250*/     OPC_MoveParent,
/*15251*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15268
/*15254*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15256*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15259*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (texternalsym:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (texternalsym:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15284
/*15270*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15272*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15275*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (texternalsym:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (texternalsym:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 100|128,1/*228*/,  TARGET_VAL(MipsISD::Wrapper),// ->15518
/*15290*/   OPC_RecordChild0, // #0 = $gp
/*15291*/   OPC_RecordChild1, // #1 = $in
/*15292*/   OPC_MoveChild, 1,
/*15294*/   OPC_SwitchOpcode /*6 cases */, 44,  TARGET_VAL(ISD::TargetGlobalAddress),// ->15342
/*15298*/     OPC_MoveParent,
/*15299*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->15328
/*15302*/       OPC_Scope, 11, /*->15315*/ // 2 children in Scope
/*15304*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15306*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in) - Complexity = 6
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in)
/*15315*/       /*Scope*/ 11, /*->15327*/
/*15316*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15318*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 CPU16Regs:i32:$gp, (tglobaladdr:i32):$in) - Complexity = 6
                  // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$gp, (tglobaladdr:i32):$in)
/*15327*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->15341
/*15330*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15332*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tglobaladdr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetConstantPool),// ->15374
/*15345*/     OPC_MoveParent,
/*15346*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->15360
/*15349*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15351*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tconstpool:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tconstpool:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->15373
/*15362*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15364*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tconstpool:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetExternalSymbol),// ->15406
/*15377*/     OPC_MoveParent,
/*15378*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->15392
/*15381*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15383*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (texternalsym:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (texternalsym:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->15405
/*15394*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15396*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (texternalsym:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (texternalsym:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetBlockAddress),// ->15438
/*15409*/     OPC_MoveParent,
/*15410*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->15424
/*15413*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15415*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tblockaddress:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tblockaddress:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->15437
/*15426*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15428*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tblockaddress:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetJumpTable),// ->15470
/*15441*/     OPC_MoveParent,
/*15442*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->15456
/*15445*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15447*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tjumptable:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tjumptable:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->15469
/*15458*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15460*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tjumptable:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->15517
/*15473*/     OPC_MoveParent,
/*15474*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->15503
/*15477*/       OPC_Scope, 11, /*->15490*/ // 2 children in Scope
/*15479*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15481*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaltlsaddr:i32):$in)
/*15490*/       /*Scope*/ 11, /*->15502*/
/*15491*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15493*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 CPU16Regs:i32:$gp, (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$gp, (tglobaltlsaddr:i32):$in)
/*15502*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->15516
/*15505*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15507*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tglobaltlsaddr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tglobaltlsaddr:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 71,  TARGET_VAL(MipsISD::FPCmp),// ->15592
/*15521*/   OPC_RecordChild0, // #0 = $fs
/*15522*/   OPC_Scope, 24, /*->15548*/ // 2 children in Scope
/*15524*/     OPC_CheckChild0Type, MVT::f32,
/*15526*/     OPC_RecordChild1, // #1 = $ft
/*15527*/     OPC_RecordChild2, // #2 = $cond
/*15528*/     OPC_MoveChild, 2,
/*15530*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15533*/     OPC_MoveParent,
/*15534*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15536*/     OPC_EmitConvertToTarget, 2,
/*15538*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_S32), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (MipsFPCmp FGR32:f32:$fs, FGR32:f32:$ft, (imm:i32):$cond) - Complexity = 6
              // Dst: (FCMP_S32:i32 FGR32:f32:$fs, FGR32:f32:$ft, (imm:i32):$cond)
/*15548*/   /*Scope*/ 42, /*->15591*/
/*15549*/     OPC_CheckChild0Type, MVT::f64,
/*15551*/     OPC_RecordChild1, // #1 = $ft
/*15552*/     OPC_RecordChild2, // #2 = $cond
/*15553*/     OPC_MoveChild, 2,
/*15555*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15558*/     OPC_MoveParent,
/*15559*/     OPC_Scope, 14, /*->15575*/ // 2 children in Scope
/*15561*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*15563*/       OPC_EmitConvertToTarget, 2,
/*15565*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_D32), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (MipsFPCmp AFGR64:f64:$fs, AFGR64:f64:$ft, (imm:i32):$cond) - Complexity = 6
                // Dst: (FCMP_D32:i32 AFGR64:f64:$fs, AFGR64:f64:$ft, (imm:i32):$cond)
/*15575*/     /*Scope*/ 14, /*->15590*/
/*15576*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*15578*/       OPC_EmitConvertToTarget, 2,
/*15580*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_D64), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (MipsFPCmp FGR64:f64:$fs, FGR64:f64:$ft, (imm:i32):$cond) - Complexity = 6
                // Dst: (FCMP_D64:i32 FGR64:f64:$fs, FGR64:f64:$ft, (imm:i32):$cond)
/*15590*/     0, /*End of Scope*/
/*15591*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 21,  TARGET_VAL(MipsISD::ExtractElementF64),// ->15616
/*15595*/   OPC_RecordChild0, // #0 = $src
/*15596*/   OPC_RecordChild1, // #1 = $n
/*15597*/   OPC_MoveChild, 1,
/*15599*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15602*/   OPC_MoveParent,
/*15603*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15605*/   OPC_EmitConvertToTarget, 1,
/*15607*/   OPC_MorphNodeTo, TARGET_VAL(Mips::ExtractElementF64), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
            // Src: (MipsExtractElementF64:i32 AFGR64:f64:$src, (imm:i32):$n) - Complexity = 6
            // Dst: (ExtractElementF64:i32 AFGR64:f64:$src, (imm:i32):$n)
          /*SwitchOpcode*/ 61|128,1/*189*/,  TARGET_VAL(ISD::Constant),// ->15809
/*15620*/   OPC_RecordNode,   // #0 = $in
/*15621*/   OPC_CheckType, MVT::i32,
/*15623*/   OPC_Scope, 18, /*->15643*/ // 6 children in Scope
/*15625*/     OPC_CheckPredicate, 28, // Predicate_immSExt16
/*15627*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15629*/     OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15632*/     OPC_EmitConvertToTarget, 0,
/*15634*/     OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (imm:i32)<<P:Predicate_immSExt16>>:$in - Complexity = 4
              // Dst: (ADDiu:i32 ZERO:i32, (imm:i32):$in)
/*15643*/   /*Scope*/ 18, /*->15662*/
/*15644*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*15646*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15648*/     OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15651*/     OPC_EmitConvertToTarget, 0,
/*15653*/     OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$in - Complexity = 4
              // Dst: (ORi:i32 ZERO:i32, (imm:i32):$in)
/*15662*/   /*Scope*/ 17, /*->15680*/
/*15663*/     OPC_CheckPredicate, 33, // Predicate_immLow16Zero
/*15665*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15667*/     OPC_EmitConvertToTarget, 0,
/*15669*/     OPC_EmitNodeXForm, 2, 1, // HI16
/*15672*/     OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (imm:i32)<<P:Predicate_immLow16Zero>>:$in - Complexity = 4
              // Dst: (LUi:i32 (HI16:i32 (imm:i32):$in))
/*15680*/   /*Scope*/ 17, /*->15698*/
/*15681*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*15683*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15685*/     OPC_EmitConvertToTarget, 0,
/*15687*/     OPC_EmitNodeXForm, 0, 1, // LO16
/*15690*/     OPC_MorphNodeTo, TARGET_VAL(Mips::LiRxImmX16), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$in - Complexity = 4
              // Dst: (LiRxImmX16:i32 (LO16:i32 (imm:i32)<<P:Predicate_immZExt16>>:$in))
/*15698*/   /*Scope*/ 26, /*->15725*/
/*15699*/     OPC_CheckPredicate, 28, // Predicate_immSExt16
/*15701*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15703*/     OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15706*/     OPC_EmitNode, TARGET_VAL(Mips::Move32R16), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*15714*/     OPC_EmitConvertToTarget, 0,
/*15716*/     OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (imm:i32)<<P:Predicate_immSExt16>>:$in - Complexity = 4
              // Dst: (AddiuRxRxImmX16:i32 (Move32R16:i32 ZERO:i32), (imm:i32)<<P:Predicate_immSExt16>>:$in)
/*15725*/   /*Scope*/ 82, /*->15808*/
/*15726*/     OPC_Scope, 29, /*->15757*/ // 2 children in Scope
/*15728*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15730*/       OPC_EmitConvertToTarget, 0,
/*15732*/       OPC_EmitNodeXForm, 2, 1, // HI16
/*15735*/       OPC_EmitNode, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*15743*/       OPC_EmitConvertToTarget, 0,
/*15745*/       OPC_EmitNodeXForm, 0, 4, // LO16
/*15748*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (ORi:i32 (LUi:i32 (HI16:i32 (imm:i32):$imm)), (LO16:i32 (imm:i32):$imm))
/*15757*/     /*Scope*/ 49, /*->15807*/
/*15758*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15760*/       OPC_EmitConvertToTarget, 0,
/*15762*/       OPC_EmitNodeXForm, 2, 1, // HI16
/*15765*/       OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*15773*/       OPC_EmitInteger, MVT::i32, 16, 
/*15776*/       OPC_EmitNode, TARGET_VAL(Mips::SllX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*15785*/       OPC_EmitConvertToTarget, 0,
/*15787*/       OPC_EmitNodeXForm, 0, 6, // LO16
/*15790*/       OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*15798*/       OPC_MorphNodeTo, TARGET_VAL(Mips::OrRxRxRy16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 8, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (OrRxRxRy16:i32 (SllX16:i32 (LiRxImmX16:i32 (HI16:i32 (imm:i32):$imm)), 16:i32), (LiRxImmX16:i32 (LO16:i32 (imm:i32):$imm)))
/*15807*/     0, /*End of Scope*/
/*15808*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->15960
/*15813*/   OPC_RecordMemRef,
/*15814*/   OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*15815*/   OPC_RecordChild1, // #1 = $ptr
/*15816*/   OPC_Scope, 70, /*->15888*/ // 2 children in Scope
/*15818*/     OPC_CheckChild1Type, MVT::i32,
/*15820*/     OPC_RecordChild2, // #2 = $incr
/*15821*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->15871
/*15824*/       OPC_Scope, 14, /*->15840*/ // 3 children in Scope
/*15826*/         OPC_CheckPredicate, 34, // Predicate_atomic_load_add_8
/*15828*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*15830*/         OPC_EmitMergeInputChains1_0,
/*15831*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*15840*/       /*Scope*/ 14, /*->15855*/
/*15841*/         OPC_CheckPredicate, 35, // Predicate_atomic_load_add_16
/*15843*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*15845*/         OPC_EmitMergeInputChains1_0,
/*15846*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*15855*/       /*Scope*/ 14, /*->15870*/
/*15856*/         OPC_CheckPredicate, 36, // Predicate_atomic_load_add_32
/*15858*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*15860*/         OPC_EmitMergeInputChains1_0,
/*15861*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*15870*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->15887
/*15873*/       OPC_CheckPredicate, 37, // Predicate_atomic_load_add_64
/*15875*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15877*/       OPC_EmitMergeInputChains1_0,
/*15878*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_add:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_ADD_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*15888*/   /*Scope*/ 70, /*->15959*/
/*15889*/     OPC_CheckChild1Type, MVT::i64,
/*15891*/     OPC_RecordChild2, // #2 = $incr
/*15892*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->15942
/*15895*/       OPC_Scope, 14, /*->15911*/ // 3 children in Scope
/*15897*/         OPC_CheckPredicate, 34, // Predicate_atomic_load_add_8
/*15899*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*15901*/         OPC_EmitMergeInputChains1_0,
/*15902*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*15911*/       /*Scope*/ 14, /*->15926*/
/*15912*/         OPC_CheckPredicate, 35, // Predicate_atomic_load_add_16
/*15914*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*15916*/         OPC_EmitMergeInputChains1_0,
/*15917*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*15926*/       /*Scope*/ 14, /*->15941*/
/*15927*/         OPC_CheckPredicate, 36, // Predicate_atomic_load_add_32
/*15929*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*15931*/         OPC_EmitMergeInputChains1_0,
/*15932*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*15941*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->15958
/*15944*/       OPC_CheckPredicate, 37, // Predicate_atomic_load_add_64
/*15946*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15948*/       OPC_EmitMergeInputChains1_0,
/*15949*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_add:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_ADD_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*15959*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->16111
/*15964*/   OPC_RecordMemRef,
/*15965*/   OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*15966*/   OPC_RecordChild1, // #1 = $ptr
/*15967*/   OPC_Scope, 70, /*->16039*/ // 2 children in Scope
/*15969*/     OPC_CheckChild1Type, MVT::i32,
/*15971*/     OPC_RecordChild2, // #2 = $incr
/*15972*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16022
/*15975*/       OPC_Scope, 14, /*->15991*/ // 3 children in Scope
/*15977*/         OPC_CheckPredicate, 38, // Predicate_atomic_load_sub_8
/*15979*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*15981*/         OPC_EmitMergeInputChains1_0,
/*15982*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*15991*/       /*Scope*/ 14, /*->16006*/
/*15992*/         OPC_CheckPredicate, 39, // Predicate_atomic_load_sub_16
/*15994*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*15996*/         OPC_EmitMergeInputChains1_0,
/*15997*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16006*/       /*Scope*/ 14, /*->16021*/
/*16007*/         OPC_CheckPredicate, 40, // Predicate_atomic_load_sub_32
/*16009*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16011*/         OPC_EmitMergeInputChains1_0,
/*16012*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16021*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16038
/*16024*/       OPC_CheckPredicate, 41, // Predicate_atomic_load_sub_64
/*16026*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16028*/       OPC_EmitMergeInputChains1_0,
/*16029*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_sub:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_SUB_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16039*/   /*Scope*/ 70, /*->16110*/
/*16040*/     OPC_CheckChild1Type, MVT::i64,
/*16042*/     OPC_RecordChild2, // #2 = $incr
/*16043*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16093
/*16046*/       OPC_Scope, 14, /*->16062*/ // 3 children in Scope
/*16048*/         OPC_CheckPredicate, 38, // Predicate_atomic_load_sub_8
/*16050*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16052*/         OPC_EmitMergeInputChains1_0,
/*16053*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16062*/       /*Scope*/ 14, /*->16077*/
/*16063*/         OPC_CheckPredicate, 39, // Predicate_atomic_load_sub_16
/*16065*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16067*/         OPC_EmitMergeInputChains1_0,
/*16068*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16077*/       /*Scope*/ 14, /*->16092*/
/*16078*/         OPC_CheckPredicate, 40, // Predicate_atomic_load_sub_32
/*16080*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16082*/         OPC_EmitMergeInputChains1_0,
/*16083*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16092*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16109
/*16095*/       OPC_CheckPredicate, 41, // Predicate_atomic_load_sub_64
/*16097*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16099*/       OPC_EmitMergeInputChains1_0,
/*16100*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_sub:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_SUB_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16110*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->16262
/*16115*/   OPC_RecordMemRef,
/*16116*/   OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*16117*/   OPC_RecordChild1, // #1 = $ptr
/*16118*/   OPC_Scope, 70, /*->16190*/ // 2 children in Scope
/*16120*/     OPC_CheckChild1Type, MVT::i32,
/*16122*/     OPC_RecordChild2, // #2 = $incr
/*16123*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16173
/*16126*/       OPC_Scope, 14, /*->16142*/ // 3 children in Scope
/*16128*/         OPC_CheckPredicate, 42, // Predicate_atomic_load_and_8
/*16130*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16132*/         OPC_EmitMergeInputChains1_0,
/*16133*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16142*/       /*Scope*/ 14, /*->16157*/
/*16143*/         OPC_CheckPredicate, 43, // Predicate_atomic_load_and_16
/*16145*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16147*/         OPC_EmitMergeInputChains1_0,
/*16148*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16157*/       /*Scope*/ 14, /*->16172*/
/*16158*/         OPC_CheckPredicate, 44, // Predicate_atomic_load_and_32
/*16160*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16162*/         OPC_EmitMergeInputChains1_0,
/*16163*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16172*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16189
/*16175*/       OPC_CheckPredicate, 45, // Predicate_atomic_load_and_64
/*16177*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16179*/       OPC_EmitMergeInputChains1_0,
/*16180*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_and:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_AND_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16190*/   /*Scope*/ 70, /*->16261*/
/*16191*/     OPC_CheckChild1Type, MVT::i64,
/*16193*/     OPC_RecordChild2, // #2 = $incr
/*16194*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16244
/*16197*/       OPC_Scope, 14, /*->16213*/ // 3 children in Scope
/*16199*/         OPC_CheckPredicate, 42, // Predicate_atomic_load_and_8
/*16201*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16203*/         OPC_EmitMergeInputChains1_0,
/*16204*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16213*/       /*Scope*/ 14, /*->16228*/
/*16214*/         OPC_CheckPredicate, 43, // Predicate_atomic_load_and_16
/*16216*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16218*/         OPC_EmitMergeInputChains1_0,
/*16219*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16228*/       /*Scope*/ 14, /*->16243*/
/*16229*/         OPC_CheckPredicate, 44, // Predicate_atomic_load_and_32
/*16231*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16233*/         OPC_EmitMergeInputChains1_0,
/*16234*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16243*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16260
/*16246*/       OPC_CheckPredicate, 45, // Predicate_atomic_load_and_64
/*16248*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16250*/       OPC_EmitMergeInputChains1_0,
/*16251*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_and:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_AND_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16261*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->16413
/*16266*/   OPC_RecordMemRef,
/*16267*/   OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*16268*/   OPC_RecordChild1, // #1 = $ptr
/*16269*/   OPC_Scope, 70, /*->16341*/ // 2 children in Scope
/*16271*/     OPC_CheckChild1Type, MVT::i32,
/*16273*/     OPC_RecordChild2, // #2 = $incr
/*16274*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16324
/*16277*/       OPC_Scope, 14, /*->16293*/ // 3 children in Scope
/*16279*/         OPC_CheckPredicate, 46, // Predicate_atomic_load_or_8
/*16281*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16283*/         OPC_EmitMergeInputChains1_0,
/*16284*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16293*/       /*Scope*/ 14, /*->16308*/
/*16294*/         OPC_CheckPredicate, 47, // Predicate_atomic_load_or_16
/*16296*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16298*/         OPC_EmitMergeInputChains1_0,
/*16299*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16308*/       /*Scope*/ 14, /*->16323*/
/*16309*/         OPC_CheckPredicate, 48, // Predicate_atomic_load_or_32
/*16311*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16313*/         OPC_EmitMergeInputChains1_0,
/*16314*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16323*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16340
/*16326*/       OPC_CheckPredicate, 49, // Predicate_atomic_load_or_64
/*16328*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16330*/       OPC_EmitMergeInputChains1_0,
/*16331*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_or:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_OR_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16341*/   /*Scope*/ 70, /*->16412*/
/*16342*/     OPC_CheckChild1Type, MVT::i64,
/*16344*/     OPC_RecordChild2, // #2 = $incr
/*16345*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16395
/*16348*/       OPC_Scope, 14, /*->16364*/ // 3 children in Scope
/*16350*/         OPC_CheckPredicate, 46, // Predicate_atomic_load_or_8
/*16352*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16354*/         OPC_EmitMergeInputChains1_0,
/*16355*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16364*/       /*Scope*/ 14, /*->16379*/
/*16365*/         OPC_CheckPredicate, 47, // Predicate_atomic_load_or_16
/*16367*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16369*/         OPC_EmitMergeInputChains1_0,
/*16370*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16379*/       /*Scope*/ 14, /*->16394*/
/*16380*/         OPC_CheckPredicate, 48, // Predicate_atomic_load_or_32
/*16382*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16384*/         OPC_EmitMergeInputChains1_0,
/*16385*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16394*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16411
/*16397*/       OPC_CheckPredicate, 49, // Predicate_atomic_load_or_64
/*16399*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16401*/       OPC_EmitMergeInputChains1_0,
/*16402*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_or:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_OR_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16412*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->16564
/*16417*/   OPC_RecordMemRef,
/*16418*/   OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*16419*/   OPC_RecordChild1, // #1 = $ptr
/*16420*/   OPC_Scope, 70, /*->16492*/ // 2 children in Scope
/*16422*/     OPC_CheckChild1Type, MVT::i32,
/*16424*/     OPC_RecordChild2, // #2 = $incr
/*16425*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16475
/*16428*/       OPC_Scope, 14, /*->16444*/ // 3 children in Scope
/*16430*/         OPC_CheckPredicate, 50, // Predicate_atomic_load_xor_8
/*16432*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16434*/         OPC_EmitMergeInputChains1_0,
/*16435*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16444*/       /*Scope*/ 14, /*->16459*/
/*16445*/         OPC_CheckPredicate, 51, // Predicate_atomic_load_xor_16
/*16447*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16449*/         OPC_EmitMergeInputChains1_0,
/*16450*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16459*/       /*Scope*/ 14, /*->16474*/
/*16460*/         OPC_CheckPredicate, 52, // Predicate_atomic_load_xor_32
/*16462*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16464*/         OPC_EmitMergeInputChains1_0,
/*16465*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16474*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16491
/*16477*/       OPC_CheckPredicate, 53, // Predicate_atomic_load_xor_64
/*16479*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16481*/       OPC_EmitMergeInputChains1_0,
/*16482*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_xor:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_XOR_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16492*/   /*Scope*/ 70, /*->16563*/
/*16493*/     OPC_CheckChild1Type, MVT::i64,
/*16495*/     OPC_RecordChild2, // #2 = $incr
/*16496*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16546
/*16499*/       OPC_Scope, 14, /*->16515*/ // 3 children in Scope
/*16501*/         OPC_CheckPredicate, 50, // Predicate_atomic_load_xor_8
/*16503*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16505*/         OPC_EmitMergeInputChains1_0,
/*16506*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16515*/       /*Scope*/ 14, /*->16530*/
/*16516*/         OPC_CheckPredicate, 51, // Predicate_atomic_load_xor_16
/*16518*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16520*/         OPC_EmitMergeInputChains1_0,
/*16521*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16530*/       /*Scope*/ 14, /*->16545*/
/*16531*/         OPC_CheckPredicate, 52, // Predicate_atomic_load_xor_32
/*16533*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16535*/         OPC_EmitMergeInputChains1_0,
/*16536*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16545*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16562
/*16548*/       OPC_CheckPredicate, 53, // Predicate_atomic_load_xor_64
/*16550*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16552*/       OPC_EmitMergeInputChains1_0,
/*16553*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_xor:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_XOR_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16563*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->16715
/*16568*/   OPC_RecordMemRef,
/*16569*/   OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*16570*/   OPC_RecordChild1, // #1 = $ptr
/*16571*/   OPC_Scope, 70, /*->16643*/ // 2 children in Scope
/*16573*/     OPC_CheckChild1Type, MVT::i32,
/*16575*/     OPC_RecordChild2, // #2 = $incr
/*16576*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16626
/*16579*/       OPC_Scope, 14, /*->16595*/ // 3 children in Scope
/*16581*/         OPC_CheckPredicate, 54, // Predicate_atomic_load_nand_8
/*16583*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16585*/         OPC_EmitMergeInputChains1_0,
/*16586*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16595*/       /*Scope*/ 14, /*->16610*/
/*16596*/         OPC_CheckPredicate, 55, // Predicate_atomic_load_nand_16
/*16598*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16600*/         OPC_EmitMergeInputChains1_0,
/*16601*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16610*/       /*Scope*/ 14, /*->16625*/
/*16611*/         OPC_CheckPredicate, 56, // Predicate_atomic_load_nand_32
/*16613*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16615*/         OPC_EmitMergeInputChains1_0,
/*16616*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16625*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16642
/*16628*/       OPC_CheckPredicate, 57, // Predicate_atomic_load_nand_64
/*16630*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16632*/       OPC_EmitMergeInputChains1_0,
/*16633*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_nand:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_NAND_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16643*/   /*Scope*/ 70, /*->16714*/
/*16644*/     OPC_CheckChild1Type, MVT::i64,
/*16646*/     OPC_RecordChild2, // #2 = $incr
/*16647*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16697
/*16650*/       OPC_Scope, 14, /*->16666*/ // 3 children in Scope
/*16652*/         OPC_CheckPredicate, 54, // Predicate_atomic_load_nand_8
/*16654*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16656*/         OPC_EmitMergeInputChains1_0,
/*16657*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16666*/       /*Scope*/ 14, /*->16681*/
/*16667*/         OPC_CheckPredicate, 55, // Predicate_atomic_load_nand_16
/*16669*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16671*/         OPC_EmitMergeInputChains1_0,
/*16672*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16681*/       /*Scope*/ 14, /*->16696*/
/*16682*/         OPC_CheckPredicate, 56, // Predicate_atomic_load_nand_32
/*16684*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16686*/         OPC_EmitMergeInputChains1_0,
/*16687*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16696*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16713
/*16699*/       OPC_CheckPredicate, 57, // Predicate_atomic_load_nand_64
/*16701*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16703*/       OPC_EmitMergeInputChains1_0,
/*16704*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_nand:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_NAND_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16714*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->16866
/*16719*/   OPC_RecordMemRef,
/*16720*/   OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*16721*/   OPC_RecordChild1, // #1 = $ptr
/*16722*/   OPC_Scope, 70, /*->16794*/ // 2 children in Scope
/*16724*/     OPC_CheckChild1Type, MVT::i32,
/*16726*/     OPC_RecordChild2, // #2 = $incr
/*16727*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16777
/*16730*/       OPC_Scope, 14, /*->16746*/ // 3 children in Scope
/*16732*/         OPC_CheckPredicate, 58, // Predicate_atomic_swap_8
/*16734*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16736*/         OPC_EmitMergeInputChains1_0,
/*16737*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16746*/       /*Scope*/ 14, /*->16761*/
/*16747*/         OPC_CheckPredicate, 59, // Predicate_atomic_swap_16
/*16749*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16751*/         OPC_EmitMergeInputChains1_0,
/*16752*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16761*/       /*Scope*/ 14, /*->16776*/
/*16762*/         OPC_CheckPredicate, 60, // Predicate_atomic_swap_32
/*16764*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16766*/         OPC_EmitMergeInputChains1_0,
/*16767*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16776*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16793
/*16779*/       OPC_CheckPredicate, 61, // Predicate_atomic_swap_64
/*16781*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16783*/       OPC_EmitMergeInputChains1_0,
/*16784*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_swap:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_SWAP_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16794*/   /*Scope*/ 70, /*->16865*/
/*16795*/     OPC_CheckChild1Type, MVT::i64,
/*16797*/     OPC_RecordChild2, // #2 = $incr
/*16798*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16848
/*16801*/       OPC_Scope, 14, /*->16817*/ // 3 children in Scope
/*16803*/         OPC_CheckPredicate, 58, // Predicate_atomic_swap_8
/*16805*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16807*/         OPC_EmitMergeInputChains1_0,
/*16808*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16817*/       /*Scope*/ 14, /*->16832*/
/*16818*/         OPC_CheckPredicate, 59, // Predicate_atomic_swap_16
/*16820*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16822*/         OPC_EmitMergeInputChains1_0,
/*16823*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16832*/       /*Scope*/ 14, /*->16847*/
/*16833*/         OPC_CheckPredicate, 60, // Predicate_atomic_swap_32
/*16835*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16837*/         OPC_EmitMergeInputChains1_0,
/*16838*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16847*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16864
/*16850*/       OPC_CheckPredicate, 61, // Predicate_atomic_swap_64
/*16852*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16854*/       OPC_EmitMergeInputChains1_0,
/*16855*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_swap:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_SWAP_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16865*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 29|128,1/*157*/,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->17027
/*16870*/   OPC_RecordMemRef,
/*16871*/   OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*16872*/   OPC_RecordChild1, // #1 = $ptr
/*16873*/   OPC_Scope, 75, /*->16950*/ // 2 children in Scope
/*16875*/     OPC_CheckChild1Type, MVT::i32,
/*16877*/     OPC_RecordChild2, // #2 = $cmp
/*16878*/     OPC_RecordChild3, // #3 = $swap
/*16879*/     OPC_SwitchType /*2 cases */, 50,  MVT::i32,// ->16932
/*16882*/       OPC_Scope, 15, /*->16899*/ // 3 children in Scope
/*16884*/         OPC_CheckPredicate, 62, // Predicate_atomic_cmp_swap_8
/*16886*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16888*/         OPC_EmitMergeInputChains1_0,
/*16889*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*16899*/       /*Scope*/ 15, /*->16915*/
/*16900*/         OPC_CheckPredicate, 63, // Predicate_atomic_cmp_swap_16
/*16902*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16904*/         OPC_EmitMergeInputChains1_0,
/*16905*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*16915*/       /*Scope*/ 15, /*->16931*/
/*16916*/         OPC_CheckPredicate, 64, // Predicate_atomic_cmp_swap_32
/*16918*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16920*/         OPC_EmitMergeInputChains1_0,
/*16921*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*16931*/       0, /*End of Scope*/
              /*SwitchType*/ 15,  MVT::i64,// ->16949
/*16934*/       OPC_CheckPredicate, 65, // Predicate_atomic_cmp_swap_64
/*16936*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16938*/       OPC_EmitMergeInputChains1_0,
/*16939*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: (atomic_cmp_swap:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$cmp, CPU64Regs:i64:$swap)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_CMP_SWAP_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$cmp, CPU64Regs:i64:$swap)
              0, // EndSwitchType
/*16950*/   /*Scope*/ 75, /*->17026*/
/*16951*/     OPC_CheckChild1Type, MVT::i64,
/*16953*/     OPC_RecordChild2, // #2 = $cmp
/*16954*/     OPC_RecordChild3, // #3 = $swap
/*16955*/     OPC_SwitchType /*2 cases */, 50,  MVT::i32,// ->17008
/*16958*/       OPC_Scope, 15, /*->16975*/ // 3 children in Scope
/*16960*/         OPC_CheckPredicate, 62, // Predicate_atomic_cmp_swap_8
/*16962*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16964*/         OPC_EmitMergeInputChains1_0,
/*16965*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*16975*/       /*Scope*/ 15, /*->16991*/
/*16976*/         OPC_CheckPredicate, 63, // Predicate_atomic_cmp_swap_16
/*16978*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16980*/         OPC_EmitMergeInputChains1_0,
/*16981*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*16991*/       /*Scope*/ 15, /*->17007*/
/*16992*/         OPC_CheckPredicate, 64, // Predicate_atomic_cmp_swap_32
/*16994*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16996*/         OPC_EmitMergeInputChains1_0,
/*16997*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*17007*/       0, /*End of Scope*/
              /*SwitchType*/ 15,  MVT::i64,// ->17025
/*17010*/       OPC_CheckPredicate, 65, // Predicate_atomic_cmp_swap_64
/*17012*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17014*/       OPC_EmitMergeInputChains1_0,
/*17015*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: (atomic_cmp_swap:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$cmp, CPU64Regs:i64:$swap)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_CMP_SWAP_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$cmp, CPU64Regs:i64:$swap)
              0, // EndSwitchType
/*17026*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(ISD::MUL),// ->17076
/*17030*/   OPC_RecordChild0, // #0 = $rs
/*17031*/   OPC_RecordChild1, // #1 = $rt
/*17032*/   OPC_SwitchType /*2 cases */, 27,  MVT::i32,// ->17062
/*17035*/     OPC_Scope, 11, /*->17048*/ // 2 children in Scope
/*17037*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17039*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MUL), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                // Dst: (MUL:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*17048*/     /*Scope*/ 12, /*->17061*/
/*17049*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*17051*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MultRxRyRz16), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                // Dst: (MultRxRyRz16:i32:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*17061*/     0, /*End of Scope*/
            /*SwitchType*/ 11,  MVT::v2i16,// ->17075
/*17064*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17066*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MUL_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (mul:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 3
              // Dst: (MUL_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
            0, // EndSwitchType
          /*SwitchOpcode*/ 33,  TARGET_VAL(MipsISD::DivRem),// ->17112
/*17079*/   OPC_RecordChild0, // #0 = $rs
/*17080*/   OPC_Scope, 14, /*->17096*/ // 2 children in Scope
/*17082*/     OPC_CheckChild0Type, MVT::i32,
/*17084*/     OPC_RecordChild1, // #1 = $rt
/*17085*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17087*/     OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoSDIV), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRem:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
              // Dst: (PseudoSDIV:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*17096*/   /*Scope*/ 14, /*->17111*/
/*17097*/     OPC_CheckChild0Type, MVT::i64,
/*17099*/     OPC_RecordChild1, // #1 = $rt
/*17100*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17102*/     OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoDSDIV), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRem:Untyped CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
              // Dst: (PseudoDSDIV:Untyped CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*17111*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 33,  TARGET_VAL(MipsISD::DivRemU),// ->17148
/*17115*/   OPC_RecordChild0, // #0 = $rs
/*17116*/   OPC_Scope, 14, /*->17132*/ // 2 children in Scope
/*17118*/     OPC_CheckChild0Type, MVT::i32,
/*17120*/     OPC_RecordChild1, // #1 = $rt
/*17121*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17123*/     OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoUDIV), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRemU:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
              // Dst: (PseudoUDIV:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*17132*/   /*Scope*/ 14, /*->17147*/
/*17133*/     OPC_CheckChild0Type, MVT::i64,
/*17135*/     OPC_RecordChild1, // #1 = $rt
/*17136*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17138*/     OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoDUDIV), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRemU:Untyped CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
              // Dst: (PseudoDUDIV:Untyped CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*17147*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 79,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->17230
/*17151*/   OPC_RecordChild0, // #0 = $rt
/*17152*/   OPC_MoveChild, 1,
/*17154*/   OPC_Scope, 29, /*->17185*/ // 3 children in Scope
/*17156*/     OPC_CheckValueType, MVT::i8,
/*17158*/     OPC_MoveParent,
/*17159*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->17172
/*17162*/       OPC_CheckPatternPredicate, 18, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*17164*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEB), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 CPURegs:i32:$rt, i8:Other) - Complexity = 3
                // Dst: (SEB:i32 CPURegs:i32:$rt)
              /*SwitchType*/ 10,  MVT::i64,// ->17184
/*17174*/       OPC_CheckPatternPredicate, 18, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*17176*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEB64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 CPU64Regs:i64:$rt, i8:Other) - Complexity = 3
                // Dst: (SEB64:i64 CPU64Regs:i64:$rt)
              0, // EndSwitchType
/*17185*/   /*Scope*/ 29, /*->17215*/
/*17186*/     OPC_CheckValueType, MVT::i16,
/*17188*/     OPC_MoveParent,
/*17189*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->17202
/*17192*/       OPC_CheckPatternPredicate, 18, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*17194*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEH), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 CPURegs:i32:$rt, i16:Other) - Complexity = 3
                // Dst: (SEH:i32 CPURegs:i32:$rt)
              /*SwitchType*/ 10,  MVT::i64,// ->17214
/*17204*/       OPC_CheckPatternPredicate, 18, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*17206*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEH64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 CPU64Regs:i64:$rt, i16:Other) - Complexity = 3
                // Dst: (SEH64:i64 CPU64Regs:i64:$rt)
              0, // EndSwitchType
/*17215*/   /*Scope*/ 13, /*->17229*/
/*17216*/     OPC_CheckValueType, MVT::i32,
/*17218*/     OPC_MoveParent,
/*17219*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17221*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SLL64_64), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i64 CPU64Regs:i64:$src, i32:Other) - Complexity = 3
              // Dst: (SLL64_64:i64 CPU64Regs:i64:$src)
/*17229*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::SUBC),// ->17263
/*17233*/   OPC_RecordChild0, // #0 = $lhs
/*17234*/   OPC_RecordChild1, // #1 = $rhs
/*17235*/   OPC_CheckType, MVT::i32,
/*17237*/   OPC_Scope, 11, /*->17250*/ // 2 children in Scope
/*17239*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17241*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SUBu), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs) - Complexity = 3
              // Dst: (SUBu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
/*17250*/   /*Scope*/ 11, /*->17262*/
/*17251*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*17253*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SubuRxRyRz16), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs) - Complexity = 3
              // Dst: (SubuRxRyRz16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs)
/*17262*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 7|128,1/*135*/,  TARGET_VAL(ISD::BITCAST),// ->17402
/*17267*/   OPC_RecordChild0, // #0 = $fs
/*17268*/   OPC_Scope, 14, /*->17284*/ // 6 children in Scope
/*17270*/     OPC_CheckChild0Type, MVT::f32,
/*17272*/     OPC_CheckType, MVT::i32,
/*17274*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17276*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (bitconvert:i32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (MFC1:i32 FGR32:f32:$fs)
/*17284*/   /*Scope*/ 14, /*->17299*/
/*17285*/     OPC_CheckChild0Type, MVT::f64,
/*17287*/     OPC_CheckType, MVT::i64,
/*17289*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17291*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DMFC1), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:i64 FGR64:f64:$fs) - Complexity = 3
              // Dst: (DMFC1:i64 FGR64:f64:$fs)
/*17299*/   /*Scope*/ 18, /*->17318*/
/*17300*/     OPC_CheckChild0Type, MVT::v2i16,
/*17302*/     OPC_CheckType, MVT::i32,
/*17304*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17306*/     OPC_EmitInteger, MVT::i32, Mips::CPURegsRegClassID,
/*17309*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (bitconvert:i32 DSPRegs:v2i16:$src) - Complexity = 3
              // Dst: (COPY_TO_REGCLASS:i32 DSPRegs:v2i16:$src, CPURegs:i32)
/*17318*/   /*Scope*/ 18, /*->17337*/
/*17319*/     OPC_CheckChild0Type, MVT::v4i8,
/*17321*/     OPC_CheckType, MVT::i32,
/*17323*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17325*/     OPC_EmitInteger, MVT::i32, Mips::CPURegsRegClassID,
/*17328*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (bitconvert:i32 DSPRegs:v4i8:$src) - Complexity = 3
              // Dst: (COPY_TO_REGCLASS:i32 DSPRegs:v4i8:$src, CPURegs:i32)
/*17337*/   /*Scope*/ 48, /*->17386*/
/*17338*/     OPC_CheckChild0Type, MVT::i32,
/*17340*/     OPC_SwitchType /*3 cases */, 10,  MVT::f32,// ->17353
/*17343*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17345*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (bitconvert:f32 CPURegs:i32:$rt) - Complexity = 3
                // Dst: (MTC1:f32 CPURegs:i32:$rt)
              /*SwitchType*/ 14,  MVT::v2i16,// ->17369
/*17355*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17357*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*17360*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (bitconvert:v2i16 CPURegs:i32:$src) - Complexity = 3
                // Dst: (COPY_TO_REGCLASS:v2i16 CPURegs:i32:$src, DSPRegs:i32)
              /*SwitchType*/ 14,  MVT::v4i8,// ->17385
/*17371*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17373*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*17376*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (bitconvert:v4i8 CPURegs:i32:$src) - Complexity = 3
                // Dst: (COPY_TO_REGCLASS:v4i8 CPURegs:i32:$src, DSPRegs:i32)
              0, // EndSwitchType
/*17386*/   /*Scope*/ 14, /*->17401*/
/*17387*/     OPC_CheckChild0Type, MVT::i64,
/*17389*/     OPC_CheckType, MVT::f64,
/*17391*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17393*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DMTC1), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:f64 CPU64Regs:i64:$rt) - Complexity = 3
              // Dst: (DMTC1:f64 CPU64Regs:i64:$rt)
/*17401*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::ANY_EXTEND),// ->17420
/*17405*/   OPC_RecordChild0, // #0 = $src
/*17406*/   OPC_CheckChild0Type, MVT::i32,
/*17408*/   OPC_CheckType, MVT::i64,
/*17410*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17412*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SLL64_32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (anyext:i64 CPURegs:i32:$src) - Complexity = 3
            // Dst: (SLL64_32:i64 CPURegs:i32:$src)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::SIGN_EXTEND),// ->17438
/*17423*/   OPC_RecordChild0, // #0 = $src
/*17424*/   OPC_CheckChild0Type, MVT::i32,
/*17426*/   OPC_CheckType, MVT::i64,
/*17428*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17430*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SLL64_32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 CPURegs:i32:$src) - Complexity = 3
            // Dst: (SLL64_32:i64 CPURegs:i32:$src)
          /*SwitchOpcode*/ 72,  TARGET_VAL(MipsISD::CMovFP_T),// ->17513
/*17441*/   OPC_CaptureGlueInput,
/*17442*/   OPC_RecordChild0, // #0 = $rs
/*17443*/   OPC_RecordChild1, // #1 = $F
/*17444*/   OPC_SwitchType /*4 cases */, 11,  MVT::i32,// ->17458
/*17447*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17449*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_I), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_T:i32 CPURegs:i32:$rs, CPURegs:i32:$F) - Complexity = 3
              // Dst: (MOVT_I:i32 CPURegs:i32:$rs, CPURegs:i32:$F)
            /*SwitchType*/ 11,  MVT::i64,// ->17471
/*17460*/     OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*17462*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_I64), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_T:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$F) - Complexity = 3
              // Dst: (MOVT_I64:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$F)
            /*SwitchType*/ 11,  MVT::f32,// ->17484
/*17473*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17475*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_S), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_T:f32 FGR32:f32:$fs, FGR32:f32:$F) - Complexity = 3
              // Dst: (MOVT_S:f32 FGR32:f32:$fs, FGR32:f32:$F)
            /*SwitchType*/ 26,  MVT::f64,// ->17512
/*17486*/     OPC_Scope, 11, /*->17499*/ // 2 children in Scope
/*17488*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17490*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_D32), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsCMovFP_T:f64 AFGR64:f64:$fs, AFGR64:f64:$F) - Complexity = 3
                // Dst: (MOVT_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$F)
/*17499*/     /*Scope*/ 11, /*->17511*/
/*17500*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17502*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_D64), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsCMovFP_T:f64 FGR64:f64:$fs, FGR64:f64:$F) - Complexity = 3
                // Dst: (MOVT_D64:f64 FGR64:f64:$fs, FGR64:f64:$F)
/*17511*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 72,  TARGET_VAL(MipsISD::CMovFP_F),// ->17588
/*17516*/   OPC_CaptureGlueInput,
/*17517*/   OPC_RecordChild0, // #0 = $rs
/*17518*/   OPC_RecordChild1, // #1 = $F
/*17519*/   OPC_SwitchType /*4 cases */, 11,  MVT::i32,// ->17533
/*17522*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17524*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_I), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_F:i32 CPURegs:i32:$rs, CPURegs:i32:$F) - Complexity = 3
              // Dst: (MOVF_I:i32 CPURegs:i32:$rs, CPURegs:i32:$F)
            /*SwitchType*/ 11,  MVT::i64,// ->17546
/*17535*/     OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*17537*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_I64), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_F:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$F) - Complexity = 3
              // Dst: (MOVF_I64:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$F)
            /*SwitchType*/ 11,  MVT::f32,// ->17559
/*17548*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17550*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_S), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_F:f32 FGR32:f32:$fs, FGR32:f32:$F) - Complexity = 3
              // Dst: (MOVF_S:f32 FGR32:f32:$fs, FGR32:f32:$F)
            /*SwitchType*/ 26,  MVT::f64,// ->17587
/*17561*/     OPC_Scope, 11, /*->17574*/ // 2 children in Scope
/*17563*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17565*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_D32), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsCMovFP_F:f64 AFGR64:f64:$fs, AFGR64:f64:$F) - Complexity = 3
                // Dst: (MOVF_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$F)
/*17574*/     /*Scope*/ 11, /*->17586*/
/*17575*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17577*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_D64), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsCMovFP_F:f64 FGR64:f64:$fs, FGR64:f64:$F) - Complexity = 3
                // Dst: (MOVF_D64:f64 FGR64:f64:$fs, FGR64:f64:$F)
/*17586*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::MULSAQ_S_W_PH),// ->17608
/*17591*/   OPC_RecordNode,   // #0 = 'MipsMULSAQ_S_W_PH' chained node
/*17592*/   OPC_RecordChild1, // #1 = $rs
/*17593*/   OPC_RecordChild2, // #2 = $rt
/*17594*/   OPC_RecordChild3, // #3 = $acin
/*17595*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17597*/   OPC_EmitMergeInputChains1_0,
/*17598*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MULSAQ_S_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsMULSAQ_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MULSAQ_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::MAQ_S_W_PHL),// ->17628
/*17611*/   OPC_RecordNode,   // #0 = 'MipsMAQ_S_W_PHL' chained node
/*17612*/   OPC_RecordChild1, // #1 = $rs
/*17613*/   OPC_RecordChild2, // #2 = $rt
/*17614*/   OPC_RecordChild3, // #3 = $acin
/*17615*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17617*/   OPC_EmitMergeInputChains1_0,
/*17618*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_S_W_PHL), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsMAQ_S_W_PHL:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MAQ_S_W_PHL:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::MAQ_S_W_PHR),// ->17648
/*17631*/   OPC_RecordNode,   // #0 = 'MipsMAQ_S_W_PHR' chained node
/*17632*/   OPC_RecordChild1, // #1 = $rs
/*17633*/   OPC_RecordChild2, // #2 = $rt
/*17634*/   OPC_RecordChild3, // #3 = $acin
/*17635*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17637*/   OPC_EmitMergeInputChains1_0,
/*17638*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_S_W_PHR), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsMAQ_S_W_PHR:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MAQ_S_W_PHR:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::MAQ_SA_W_PHL),// ->17668
/*17651*/   OPC_RecordNode,   // #0 = 'MipsMAQ_SA_W_PHL' chained node
/*17652*/   OPC_RecordChild1, // #1 = $rs
/*17653*/   OPC_RecordChild2, // #2 = $rt
/*17654*/   OPC_RecordChild3, // #3 = $acin
/*17655*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17657*/   OPC_EmitMergeInputChains1_0,
/*17658*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_SA_W_PHL), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsMAQ_SA_W_PHL:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MAQ_SA_W_PHL:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::MAQ_SA_W_PHR),// ->17688
/*17671*/   OPC_RecordNode,   // #0 = 'MipsMAQ_SA_W_PHR' chained node
/*17672*/   OPC_RecordChild1, // #1 = $rs
/*17673*/   OPC_RecordChild2, // #2 = $rt
/*17674*/   OPC_RecordChild3, // #3 = $acin
/*17675*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17677*/   OPC_EmitMergeInputChains1_0,
/*17678*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_SA_W_PHR), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsMAQ_SA_W_PHR:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MAQ_SA_W_PHR:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAU_H_QBL),// ->17706
/*17691*/   OPC_RecordChild0, // #0 = $rs
/*17692*/   OPC_RecordChild1, // #1 = $rt
/*17693*/   OPC_RecordChild2, // #2 = $acin
/*17694*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17696*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAU_H_QBL), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPAU_H_QBL:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAU_H_QBL:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAU_H_QBR),// ->17724
/*17709*/   OPC_RecordChild0, // #0 = $rs
/*17710*/   OPC_RecordChild1, // #1 = $rt
/*17711*/   OPC_RecordChild2, // #2 = $acin
/*17712*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17714*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAU_H_QBR), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPAU_H_QBR:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAU_H_QBR:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSU_H_QBL),// ->17742
/*17727*/   OPC_RecordChild0, // #0 = $rs
/*17728*/   OPC_RecordChild1, // #1 = $rt
/*17729*/   OPC_RecordChild2, // #2 = $acin
/*17730*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17732*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSU_H_QBL), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPSU_H_QBL:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSU_H_QBL:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSU_H_QBR),// ->17760
/*17745*/   OPC_RecordChild0, // #0 = $rs
/*17746*/   OPC_RecordChild1, // #1 = $rt
/*17747*/   OPC_RecordChild2, // #2 = $acin
/*17748*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17750*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSU_H_QBR), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPSU_H_QBR:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSU_H_QBR:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPAQ_S_W_PH),// ->17780
/*17763*/   OPC_RecordNode,   // #0 = 'MipsDPAQ_S_W_PH' chained node
/*17764*/   OPC_RecordChild1, // #1 = $rs
/*17765*/   OPC_RecordChild2, // #2 = $rt
/*17766*/   OPC_RecordChild3, // #3 = $acin
/*17767*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17769*/   OPC_EmitMergeInputChains1_0,
/*17770*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQ_S_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPAQ_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAQ_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPSQ_S_W_PH),// ->17800
/*17783*/   OPC_RecordNode,   // #0 = 'MipsDPSQ_S_W_PH' chained node
/*17784*/   OPC_RecordChild1, // #1 = $rs
/*17785*/   OPC_RecordChild2, // #2 = $rt
/*17786*/   OPC_RecordChild3, // #3 = $acin
/*17787*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17789*/   OPC_EmitMergeInputChains1_0,
/*17790*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQ_S_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPSQ_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSQ_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPAQ_SA_L_W),// ->17820
/*17803*/   OPC_RecordNode,   // #0 = 'MipsDPAQ_SA_L_W' chained node
/*17804*/   OPC_RecordChild1, // #1 = $rs
/*17805*/   OPC_RecordChild2, // #2 = $rt
/*17806*/   OPC_RecordChild3, // #3 = $acin
/*17807*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17809*/   OPC_EmitMergeInputChains1_0,
/*17810*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQ_SA_L_W), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPAQ_SA_L_W:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAQ_SA_L_W:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPSQ_SA_L_W),// ->17840
/*17823*/   OPC_RecordNode,   // #0 = 'MipsDPSQ_SA_L_W' chained node
/*17824*/   OPC_RecordChild1, // #1 = $rs
/*17825*/   OPC_RecordChild2, // #2 = $rt
/*17826*/   OPC_RecordChild3, // #3 = $acin
/*17827*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17829*/   OPC_EmitMergeInputChains1_0,
/*17830*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQ_SA_L_W), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPSQ_SA_L_W:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSQ_SA_L_W:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MTHLIP),// ->17858
/*17843*/   OPC_RecordNode,   // #0 = 'MipsMTHLIP' chained node
/*17844*/   OPC_RecordChild1, // #1 = $rs
/*17845*/   OPC_RecordChild2, // #2 = $acin
/*17846*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17848*/   OPC_EmitMergeInputChains1_0,
/*17849*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MTHLIP), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMTHLIP:Untyped CPURegs:i32:$rs, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MTHLIP:Untyped CPURegs:i32:$rs, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPA_W_PH),// ->17876
/*17861*/   OPC_RecordChild0, // #0 = $rs
/*17862*/   OPC_RecordChild1, // #1 = $rt
/*17863*/   OPC_RecordChild2, // #2 = $acin
/*17864*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17866*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPA_W_PH), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPA_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPA_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPS_W_PH),// ->17894
/*17879*/   OPC_RecordChild0, // #0 = $rs
/*17880*/   OPC_RecordChild1, // #1 = $rt
/*17881*/   OPC_RecordChild2, // #2 = $acin
/*17882*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17884*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPS_W_PH), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPS_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPS_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPAQX_S_W_PH),// ->17914
/*17897*/   OPC_RecordNode,   // #0 = 'MipsDPAQX_S_W_PH' chained node
/*17898*/   OPC_RecordChild1, // #1 = $rs
/*17899*/   OPC_RecordChild2, // #2 = $rt
/*17900*/   OPC_RecordChild3, // #3 = $acin
/*17901*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17903*/   OPC_EmitMergeInputChains1_0,
/*17904*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQX_S_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPAQX_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAQX_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPAQX_SA_W_PH),// ->17934
/*17917*/   OPC_RecordNode,   // #0 = 'MipsDPAQX_SA_W_PH' chained node
/*17918*/   OPC_RecordChild1, // #1 = $rs
/*17919*/   OPC_RecordChild2, // #2 = $rt
/*17920*/   OPC_RecordChild3, // #3 = $acin
/*17921*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17923*/   OPC_EmitMergeInputChains1_0,
/*17924*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQX_SA_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPAQX_SA_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAQX_SA_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAX_W_PH),// ->17952
/*17937*/   OPC_RecordChild0, // #0 = $rs
/*17938*/   OPC_RecordChild1, // #1 = $rt
/*17939*/   OPC_RecordChild2, // #2 = $acin
/*17940*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17942*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAX_W_PH), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPAX_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAX_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSX_W_PH),// ->17970
/*17955*/   OPC_RecordChild0, // #0 = $rs
/*17956*/   OPC_RecordChild1, // #1 = $rt
/*17957*/   OPC_RecordChild2, // #2 = $acin
/*17958*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17960*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSX_W_PH), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPSX_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSX_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPSQX_S_W_PH),// ->17990
/*17973*/   OPC_RecordNode,   // #0 = 'MipsDPSQX_S_W_PH' chained node
/*17974*/   OPC_RecordChild1, // #1 = $rs
/*17975*/   OPC_RecordChild2, // #2 = $rt
/*17976*/   OPC_RecordChild3, // #3 = $acin
/*17977*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17979*/   OPC_EmitMergeInputChains1_0,
/*17980*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQX_S_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPSQX_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSQX_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPSQX_SA_W_PH),// ->18010
/*17993*/   OPC_RecordNode,   // #0 = 'MipsDPSQX_SA_W_PH' chained node
/*17994*/   OPC_RecordChild1, // #1 = $rs
/*17995*/   OPC_RecordChild2, // #2 = $rt
/*17996*/   OPC_RecordChild3, // #3 = $acin
/*17997*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17999*/   OPC_EmitMergeInputChains1_0,
/*18000*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQX_SA_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPSQX_SA_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSQX_SA_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MULSA_W_PH),// ->18028
/*18013*/   OPC_RecordChild0, // #0 = $rs
/*18014*/   OPC_RecordChild1, // #1 = $rt
/*18015*/   OPC_RecordChild2, // #2 = $acin
/*18016*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18018*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MULSA_W_PH), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsMULSA_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MULSA_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::ADDE),// ->18047
/*18031*/   OPC_CaptureGlueInput,
/*18032*/   OPC_RecordChild0, // #0 = $a
/*18033*/   OPC_RecordChild1, // #1 = $b
/*18034*/   OPC_CheckType, MVT::i32,
/*18036*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18038*/   OPC_MorphNodeTo, TARGET_VAL(Mips::ADDWC), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (adde:i32 i32:i32:$a, i32:i32:$b) - Complexity = 3
            // Dst: (ADDWC:i32 i32:i32:$a, i32:i32:$b)
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::BSWAP),// ->18097
/*18050*/   OPC_RecordChild0, // #0 = $rt
/*18051*/   OPC_SwitchType /*2 cases */, 22,  MVT::i32,// ->18076
/*18054*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18056*/     OPC_EmitNode, TARGET_VAL(Mips::WSBH), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*18064*/     OPC_EmitInteger, MVT::i32, 16, 
/*18067*/     OPC_MorphNodeTo, TARGET_VAL(Mips::ROTR), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (bswap:i32 CPURegs:i32:$rt) - Complexity = 3
              // Dst: (ROTR:i32 (WSBH:i32 CPURegs:i32:$rt), 16:i32)
            /*SwitchType*/ 18,  MVT::i64,// ->18096
/*18078*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18080*/     OPC_EmitNode, TARGET_VAL(Mips::DSBH), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0,  // Results = #1
/*18088*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DSHD), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (bswap:i64 CPU64Regs:i64:$rt) - Complexity = 3
              // Dst: (DSHD:i64 (DSBH:i64 CPU64Regs:i64:$rt))
            0, // EndSwitchType
          /*SwitchOpcode*/ 115,  TARGET_VAL(ISD::FP_TO_SINT),// ->18215
/*18100*/   OPC_RecordChild0, // #0 = $src
/*18101*/   OPC_Scope, 44, /*->18147*/ // 2 children in Scope
/*18103*/     OPC_CheckChild0Type, MVT::f32,
/*18105*/     OPC_SwitchType /*2 cases */, 18,  MVT::i32,// ->18126
/*18108*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18110*/       OPC_EmitNode, TARGET_VAL(Mips::TRUNC_W_S), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*18118*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (fp_to_sint:i32 FGR32:f32:$src) - Complexity = 3
                // Dst: (MFC1:i32 (TRUNC_W_S:f32 FGR32:f32:$src))
              /*SwitchType*/ 18,  MVT::i64,// ->18146
/*18128*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18130*/       OPC_EmitNode, TARGET_VAL(Mips::TRUNC_L_S), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1
/*18138*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DMFC1), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (fp_to_sint:i64 FGR32:f32:$src) - Complexity = 3
                // Dst: (DMFC1:i64 (TRUNC_L_S:f64 FGR32:f32:$src))
              0, // EndSwitchType
/*18147*/   /*Scope*/ 66, /*->18214*/
/*18148*/     OPC_CheckChild0Type, MVT::f64,
/*18150*/     OPC_SwitchType /*2 cases */, 40,  MVT::i32,// ->18193
/*18153*/       OPC_Scope, 18, /*->18173*/ // 2 children in Scope
/*18155*/         OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18157*/         OPC_EmitNode, TARGET_VAL(Mips::TRUNC_W_D32), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*18165*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (fp_to_sint:i32 AFGR64:f64:$src) - Complexity = 3
                  // Dst: (MFC1:i32 (TRUNC_W_D32:f32 AFGR64:f64:$src))
/*18173*/       /*Scope*/ 18, /*->18192*/
/*18174*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18176*/         OPC_EmitNode, TARGET_VAL(Mips::TRUNC_W_D64), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*18184*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (fp_to_sint:i32 FGR64:f64:$src) - Complexity = 3
                  // Dst: (MFC1:i32 (TRUNC_W_D64:f32 FGR64:f64:$src))
/*18192*/       0, /*End of Scope*/
              /*SwitchType*/ 18,  MVT::i64,// ->18213
/*18195*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18197*/       OPC_EmitNode, TARGET_VAL(Mips::TRUNC_L_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1
/*18205*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DMFC1), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (fp_to_sint:i64 FGR64:f64:$src) - Complexity = 3
                // Dst: (DMFC1:i64 (TRUNC_L_D64:f64 FGR64:f64:$src))
              0, // EndSwitchType
/*18214*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TRUNCATE),// ->18247
/*18218*/   OPC_RecordChild0, // #0 = $src
/*18219*/   OPC_CheckType, MVT::i32,
/*18221*/   OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*18223*/   OPC_EmitInteger, MVT::i32, Mips::sub_32,
/*18226*/   OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*18235*/   OPC_EmitInteger, MVT::i32, 0, 
/*18238*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SLL), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
            // Src: (trunc:i32 CPU64Regs:i64:$src) - Complexity = 3
            // Dst: (SLL:i32 (EXTRACT_SUBREG:i32 CPU64Regs:i64:$src, sub_32:i32), 0:i32)
          /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::ZERO_EXTEND),// ->18277
/*18250*/   OPC_RecordChild0, // #0 = $src
/*18251*/   OPC_CheckChild0Type, MVT::i32,
/*18253*/   OPC_CheckType, MVT::i64,
/*18255*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18257*/   OPC_EmitNode, TARGET_VAL(Mips::DSLL64_32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0,  // Results = #1
/*18265*/   OPC_EmitInteger, MVT::i32, 32, 
/*18268*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DSRL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
            // Src: (zext:i64 CPURegs:i32:$src) - Complexity = 3
            // Dst: (DSRL:i64 (DSLL64_32:i64 CPURegs:i32:$src), 32:i32)
          /*SwitchOpcode*/ 40|128,2/*296*/,  TARGET_VAL(ISD::FSUB),// ->18577
/*18281*/   OPC_Scope, 118|128,1/*246*/, /*->18530*/ // 2 children in Scope
/*18284*/     OPC_MoveChild, 0,
/*18286*/     OPC_SwitchOpcode /*2 cases */, 57|128,1/*185*/,  TARGET_VAL(ISD::ConstantFP),// ->18476
/*18291*/       OPC_CheckPredicate, 66, // Predicate_fpimm0
/*18293*/       OPC_MoveParent,
/*18294*/       OPC_MoveChild, 1,
/*18296*/       OPC_SwitchOpcode /*2 cases */, 116,  TARGET_VAL(ISD::FADD),// ->18416
/*18300*/         OPC_Scope, 56, /*->18358*/ // 2 children in Scope
/*18302*/           OPC_MoveChild, 0,
/*18304*/           OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*18307*/           OPC_RecordChild0, // #0 = $fs
/*18308*/           OPC_RecordChild1, // #1 = $ft
/*18309*/           OPC_MoveParent,
/*18310*/           OPC_RecordChild1, // #2 = $fr
/*18311*/           OPC_MoveParent,
/*18312*/           OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->18327
/*18315*/             OPC_CheckPatternPredicate, 19, // (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18317*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                      // Src: (fsub:f32 (fpimm:f32)<<P:Predicate_fpimm0>>, (fadd:f32 (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft), FGR32:f32:$fr)) - Complexity = 13
                      // Dst: (NMADD_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                    /*SwitchType*/ 28,  MVT::f64,// ->18357
/*18329*/             OPC_Scope, 12, /*->18343*/ // 2 children in Scope
/*18331*/               OPC_CheckPatternPredicate, 20, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18333*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft), AFGR64:f64:$fr)) - Complexity = 13
                        // Dst: (NMADD_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*18343*/             /*Scope*/ 12, /*->18356*/
/*18344*/               OPC_CheckPatternPredicate, 21, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18346*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft), FGR64:f64:$fr)) - Complexity = 13
                        // Dst: (NMADD_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*18356*/             0, /*End of Scope*/
                    0, // EndSwitchType
/*18358*/         /*Scope*/ 56, /*->18415*/
/*18359*/           OPC_RecordChild0, // #0 = $fr
/*18360*/           OPC_MoveChild, 1,
/*18362*/           OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*18365*/           OPC_RecordChild0, // #1 = $fs
/*18366*/           OPC_RecordChild1, // #2 = $ft
/*18367*/           OPC_MoveParent,
/*18368*/           OPC_MoveParent,
/*18369*/           OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->18384
/*18372*/             OPC_CheckPatternPredicate, 19, // (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18374*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (fsub:f32 (fpimm:f32)<<P:Predicate_fpimm0>>, (fadd:f32 FGR32:f32:$fr, (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft))) - Complexity = 13
                      // Dst: (NMADD_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                    /*SwitchType*/ 28,  MVT::f64,// ->18414
/*18386*/             OPC_Scope, 12, /*->18400*/ // 2 children in Scope
/*18388*/               OPC_CheckPatternPredicate, 20, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18390*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 AFGR64:f64:$fr, (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft))) - Complexity = 13
                        // Dst: (NMADD_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*18400*/             /*Scope*/ 12, /*->18413*/
/*18401*/               OPC_CheckPatternPredicate, 21, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18403*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 FGR64:f64:$fr, (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft))) - Complexity = 13
                        // Dst: (NMADD_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*18413*/             0, /*End of Scope*/
                    0, // EndSwitchType
/*18415*/         0, /*End of Scope*/
                /*SwitchOpcode*/ 56,  TARGET_VAL(ISD::FSUB),// ->18475
/*18419*/         OPC_MoveChild, 0,
/*18421*/         OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*18424*/         OPC_RecordChild0, // #0 = $fs
/*18425*/         OPC_RecordChild1, // #1 = $ft
/*18426*/         OPC_MoveParent,
/*18427*/         OPC_RecordChild1, // #2 = $fr
/*18428*/         OPC_MoveParent,
/*18429*/         OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->18444
/*18432*/           OPC_CheckPatternPredicate, 19, // (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18434*/           OPC_MorphNodeTo, TARGET_VAL(Mips::NMSUB_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fsub:f32 (fpimm:f32)<<P:Predicate_fpimm0>>, (fsub:f32 (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft), FGR32:f32:$fr)) - Complexity = 13
                    // Dst: (NMSUB_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                  /*SwitchType*/ 28,  MVT::f64,// ->18474
/*18446*/           OPC_Scope, 12, /*->18460*/ // 2 children in Scope
/*18448*/             OPC_CheckPatternPredicate, 20, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18450*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMSUB_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                      // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fsub:f64 (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft), AFGR64:f64:$fr)) - Complexity = 13
                      // Dst: (NMSUB_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*18460*/           /*Scope*/ 12, /*->18473*/
/*18461*/             OPC_CheckPatternPredicate, 21, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18463*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMSUB_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                      // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fsub:f64 (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft), FGR64:f64:$fr)) - Complexity = 13
                      // Dst: (NMSUB_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*18473*/           0, /*End of Scope*/
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 50,  TARGET_VAL(ISD::FMUL),// ->18529
/*18479*/       OPC_RecordChild0, // #0 = $fs
/*18480*/       OPC_RecordChild1, // #1 = $ft
/*18481*/       OPC_MoveParent,
/*18482*/       OPC_RecordChild1, // #2 = $fr
/*18483*/       OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->18498
/*18486*/         OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*18488*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fsub:f32 (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft), FGR32:f32:$fr) - Complexity = 6
                  // Dst: (MSUB_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                /*SwitchType*/ 28,  MVT::f64,// ->18528
/*18500*/         OPC_Scope, 12, /*->18514*/ // 2 children in Scope
/*18502*/           OPC_CheckPatternPredicate, 22, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18504*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fsub:f64 (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft), AFGR64:f64:$fr) - Complexity = 6
                    // Dst: (MSUB_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*18514*/         /*Scope*/ 12, /*->18527*/
/*18515*/           OPC_CheckPatternPredicate, 23, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18517*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fsub:f64 (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft), FGR64:f64:$fr) - Complexity = 6
                    // Dst: (MSUB_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*18527*/         0, /*End of Scope*/
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*18530*/   /*Scope*/ 45, /*->18576*/
/*18531*/     OPC_RecordChild0, // #0 = $fs
/*18532*/     OPC_RecordChild1, // #1 = $ft
/*18533*/     OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->18547
/*18536*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18538*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_S), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
                // Dst: (FSUB_S:f32 FGR32:f32:$fs, FGR32:f32:$ft)
              /*SwitchType*/ 26,  MVT::f64,// ->18575
/*18549*/       OPC_Scope, 11, /*->18562*/ // 2 children in Scope
/*18551*/         OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18553*/         OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_D32), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fsub:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
                  // Dst: (FSUB_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
/*18562*/       /*Scope*/ 11, /*->18574*/
/*18563*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18565*/         OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_D64), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fsub:f64 FGR64:f64:$fs, FGR64:f64:$ft) - Complexity = 3
                  // Dst: (FSUB_D64:f64 FGR64:f64:$fs, FGR64:f64:$ft)
/*18574*/       0, /*End of Scope*/
              0, // EndSwitchType
/*18576*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 34|128,1/*162*/,  TARGET_VAL(ISD::FADD),// ->18743
/*18581*/   OPC_Scope, 55, /*->18638*/ // 2 children in Scope
/*18583*/     OPC_MoveChild, 0,
/*18585*/     OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*18588*/     OPC_RecordChild0, // #0 = $fs
/*18589*/     OPC_RecordChild1, // #1 = $ft
/*18590*/     OPC_MoveParent,
/*18591*/     OPC_RecordChild1, // #2 = $fr
/*18592*/     OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->18607
/*18595*/       OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*18597*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_S), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                // Src: (fadd:f32 (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft), FGR32:f32:$fr) - Complexity = 6
                // Dst: (MADD_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
              /*SwitchType*/ 28,  MVT::f64,// ->18637
/*18609*/       OPC_Scope, 12, /*->18623*/ // 2 children in Scope
/*18611*/         OPC_CheckPatternPredicate, 22, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18613*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D32), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fadd:f64 (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft), AFGR64:f64:$fr) - Complexity = 6
                  // Dst: (MADD_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*18623*/       /*Scope*/ 12, /*->18636*/
/*18624*/         OPC_CheckPatternPredicate, 23, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18626*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fadd:f64 (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft), FGR64:f64:$fr) - Complexity = 6
                  // Dst: (MADD_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*18636*/       0, /*End of Scope*/
              0, // EndSwitchType
/*18638*/   /*Scope*/ 103, /*->18742*/
/*18639*/     OPC_RecordChild0, // #0 = $fr
/*18640*/     OPC_Scope, 54, /*->18696*/ // 2 children in Scope
/*18642*/       OPC_MoveChild, 1,
/*18644*/       OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*18647*/       OPC_RecordChild0, // #1 = $fs
/*18648*/       OPC_RecordChild1, // #2 = $ft
/*18649*/       OPC_MoveParent,
/*18650*/       OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->18665
/*18653*/         OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*18655*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fadd:f32 FGR32:f32:$fr, (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft)) - Complexity = 6
                  // Dst: (MADD_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                /*SwitchType*/ 28,  MVT::f64,// ->18695
/*18667*/         OPC_Scope, 12, /*->18681*/ // 2 children in Scope
/*18669*/           OPC_CheckPatternPredicate, 22, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18671*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fadd:f64 AFGR64:f64:$fr, (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)) - Complexity = 6
                    // Dst: (MADD_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*18681*/         /*Scope*/ 12, /*->18694*/
/*18682*/           OPC_CheckPatternPredicate, 23, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18684*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fadd:f64 FGR64:f64:$fr, (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft)) - Complexity = 6
                    // Dst: (MADD_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*18694*/         0, /*End of Scope*/
                0, // EndSwitchType
/*18696*/     /*Scope*/ 44, /*->18741*/
/*18697*/       OPC_RecordChild1, // #1 = $ft
/*18698*/       OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->18712
/*18701*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18703*/         OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_S), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (fadd:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
                  // Dst: (FADD_S:f32 FGR32:f32:$fs, FGR32:f32:$ft)
                /*SwitchType*/ 26,  MVT::f64,// ->18740
/*18714*/         OPC_Scope, 11, /*->18727*/ // 2 children in Scope
/*18716*/           OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18718*/           OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_D32), 0,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                    // Src: (fadd:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
                    // Dst: (FADD_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
/*18727*/         /*Scope*/ 11, /*->18739*/
/*18728*/           OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18730*/           OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_D64), 0,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                    // Src: (fadd:f64 FGR64:f64:$fs, FGR64:f64:$ft) - Complexity = 3
                    // Dst: (FADD_D64:f64 FGR64:f64:$fs, FGR64:f64:$ft)
/*18739*/         0, /*End of Scope*/
                0, // EndSwitchType
/*18741*/     0, /*End of Scope*/
/*18742*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 88,  TARGET_VAL(ISD::ConstantFP),// ->18834
/*18746*/   OPC_Scope, 34, /*->18782*/ // 2 children in Scope
/*18748*/     OPC_CheckPredicate, 66, // Predicate_fpimm0
/*18750*/     OPC_SwitchType /*2 cases */, 13,  MVT::f32,// ->18766
/*18753*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18755*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*18758*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fpimm:f32)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (MTC1:f32 ZERO:i32)
              /*SwitchType*/ 13,  MVT::f64,// ->18781
/*18768*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18770*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*18773*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DMTC1), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fpimm:f64)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (DMTC1:f64 ZERO_64:i64)
              0, // EndSwitchType
/*18782*/   /*Scope*/ 50, /*->18833*/
/*18783*/     OPC_CheckPredicate, 67, // Predicate_fpimm0neg
/*18785*/     OPC_SwitchType /*2 cases */, 21,  MVT::f32,// ->18809
/*18788*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18790*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*18793*/       OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*18801*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_S), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
                // Src: (fpimm:f32)<<P:Predicate_fpimm0neg>> - Complexity = 4
                // Dst: (FNEG_S:f32 (MTC1:f32 ZERO:i32))
              /*SwitchType*/ 21,  MVT::f64,// ->18832
/*18811*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18813*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*18816*/       OPC_EmitNode, TARGET_VAL(Mips::DMTC1), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1
/*18824*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 1, 
                // Src: (fpimm:f64)<<P:Predicate_fpimm0neg>> - Complexity = 4
                // Dst: (FNEG_D64:f64 (DMTC1:f64 ZERO_64:i64))
              0, // EndSwitchType
/*18833*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FABS),// ->18876
/*18837*/   OPC_RecordChild0, // #0 = $fs
/*18838*/   OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->18851
/*18841*/     OPC_CheckPatternPredicate, 24, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18843*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_S), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (FABS_S:f32 FGR32:f32:$fs)
            /*SwitchType*/ 22,  MVT::f64,// ->18875
/*18853*/     OPC_CheckPatternPredicate, 24, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18855*/     OPC_Scope, 8, /*->18865*/ // 2 children in Scope
/*18857*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_D32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fabs:f64 AFGR64:f64:$fs) - Complexity = 3
                // Dst: (FABS_D32:f64 AFGR64:f64:$fs)
/*18865*/     /*Scope*/ 8, /*->18874*/
/*18866*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fabs:f64 FGR64:f64:$fs) - Complexity = 3
                // Dst: (FABS_D64:f64 FGR64:f64:$fs)
/*18874*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FNEG),// ->18918
/*18879*/   OPC_RecordChild0, // #0 = $fs
/*18880*/   OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->18893
/*18883*/     OPC_CheckPatternPredicate, 24, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18885*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_S), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fneg:f32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (FNEG_S:f32 FGR32:f32:$fs)
            /*SwitchType*/ 22,  MVT::f64,// ->18917
/*18895*/     OPC_CheckPatternPredicate, 24, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18897*/     OPC_Scope, 8, /*->18907*/ // 2 children in Scope
/*18899*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_D32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 AFGR64:f64:$fs) - Complexity = 3
                // Dst: (FNEG_D32:f64 AFGR64:f64:$fs)
/*18907*/     /*Scope*/ 8, /*->18916*/
/*18908*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 FGR64:f64:$fs) - Complexity = 3
                // Dst: (FNEG_D64:f64 FGR64:f64:$fs)
/*18916*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::FSQRT),// ->18962
/*18921*/   OPC_RecordChild0, // #0 = $fs
/*18922*/   OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->18935
/*18925*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18927*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_S), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (FSQRT_S:f32 FGR32:f32:$fs)
            /*SwitchType*/ 24,  MVT::f64,// ->18961
/*18937*/     OPC_Scope, 10, /*->18949*/ // 2 children in Scope
/*18939*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18941*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_D32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f64 AFGR64:f64:$fs) - Complexity = 3
                // Dst: (FSQRT_D32:f64 AFGR64:f64:$fs)
/*18949*/     /*Scope*/ 10, /*->18960*/
/*18950*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18952*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f64 FGR64:f64:$fs) - Complexity = 3
                // Dst: (FSQRT_D64:f64 FGR64:f64:$fs)
/*18960*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 45,  TARGET_VAL(ISD::FDIV),// ->19010
/*18965*/   OPC_RecordChild0, // #0 = $fs
/*18966*/   OPC_RecordChild1, // #1 = $ft
/*18967*/   OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->18981
/*18970*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18972*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_S), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
              // Dst: (FDIV_S:f32 FGR32:f32:$fs, FGR32:f32:$ft)
            /*SwitchType*/ 26,  MVT::f64,// ->19009
/*18983*/     OPC_Scope, 11, /*->18996*/ // 2 children in Scope
/*18985*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18987*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_D32), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
                // Dst: (FDIV_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
/*18996*/     /*Scope*/ 11, /*->19008*/
/*18997*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18999*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_D64), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f64 FGR64:f64:$fs, FGR64:f64:$ft) - Complexity = 3
                // Dst: (FDIV_D64:f64 FGR64:f64:$fs, FGR64:f64:$ft)
/*19008*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 45,  TARGET_VAL(ISD::FMUL),// ->19058
/*19013*/   OPC_RecordChild0, // #0 = $fs
/*19014*/   OPC_RecordChild1, // #1 = $ft
/*19015*/   OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->19029
/*19018*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19020*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_S), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
              // Dst: (FMUL_S:f32 FGR32:f32:$fs, FGR32:f32:$ft)
            /*SwitchType*/ 26,  MVT::f64,// ->19057
/*19031*/     OPC_Scope, 11, /*->19044*/ // 2 children in Scope
/*19033*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19035*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_D32), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
                // Dst: (FMUL_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
/*19044*/     /*Scope*/ 11, /*->19056*/
/*19045*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19047*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_D64), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft) - Complexity = 3
                // Dst: (FMUL_D64:f64 FGR64:f64:$fs, FGR64:f64:$ft)
/*19056*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(MipsISD::BuildPairF64),// ->19074
/*19061*/   OPC_RecordChild0, // #0 = $lo
/*19062*/   OPC_RecordChild1, // #1 = $hi
/*19063*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19065*/   OPC_MorphNodeTo, TARGET_VAL(Mips::BuildPairF64), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (MipsBuildPairF64:f64 CPURegs:i32:$lo, CPURegs:i32:$hi) - Complexity = 3
            // Dst: (BuildPairF64:f64 CPURegs:i32:$lo, CPURegs:i32:$hi)
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::FP_ROUND),// ->19102
/*19077*/   OPC_RecordChild0, // #0 = $src
/*19078*/   OPC_Scope, 10, /*->19090*/ // 2 children in Scope
/*19080*/     OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19082*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_S_D32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fround:f32 AFGR64:f64:$src) - Complexity = 3
              // Dst: (CVT_S_D32:f32 AFGR64:f64:$src)
/*19090*/   /*Scope*/ 10, /*->19101*/
/*19091*/     OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19093*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_S_D64), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fround:f32 FGR64:f64:$src) - Complexity = 3
              // Dst: (CVT_S_D64:f32 FGR64:f64:$src)
/*19101*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::FP_EXTEND),// ->19130
/*19105*/   OPC_RecordChild0, // #0 = $src
/*19106*/   OPC_Scope, 10, /*->19118*/ // 2 children in Scope
/*19108*/     OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19110*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D32_S), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fextend:f64 FGR32:f32:$src) - Complexity = 3
              // Dst: (CVT_D32_S:f64 FGR32:f32:$src)
/*19118*/   /*Scope*/ 10, /*->19129*/
/*19119*/     OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19121*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D64_S), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fextend:f64 FGR32:f32:$src) - Complexity = 3
              // Dst: (CVT_D64_S:f64 FGR32:f32:$src)
/*19129*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SHLL_DSP),// ->19173
/*19133*/   OPC_RecordChild0, // #0 = $a
/*19134*/   OPC_RecordChild1, // #1 = $shamt
/*19135*/   OPC_MoveChild, 1,
/*19137*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19140*/   OPC_MoveParent,
/*19141*/   OPC_SwitchType /*2 cases */, 13,  MVT::v2i16,// ->19157
/*19144*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19146*/     OPC_EmitConvertToTarget, 1,
/*19148*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHLL_DSP:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHLL_PH:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt)
            /*SwitchType*/ 13,  MVT::v4i8,// ->19172
/*19159*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19161*/     OPC_EmitConvertToTarget, 1,
/*19163*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHLL_DSP:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHLL_QB:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SHRA_DSP),// ->19216
/*19176*/   OPC_RecordChild0, // #0 = $a
/*19177*/   OPC_RecordChild1, // #1 = $shamt
/*19178*/   OPC_MoveChild, 1,
/*19180*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19183*/   OPC_MoveParent,
/*19184*/   OPC_SwitchType /*2 cases */, 13,  MVT::v2i16,// ->19200
/*19187*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19189*/     OPC_EmitConvertToTarget, 1,
/*19191*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHRA_DSP:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHRA_PH:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt)
            /*SwitchType*/ 13,  MVT::v4i8,// ->19215
/*19202*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*19204*/     OPC_EmitConvertToTarget, 1,
/*19206*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHRA_DSP:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHRA_QB:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SHRL_DSP),// ->19259
/*19219*/   OPC_RecordChild0, // #0 = $a
/*19220*/   OPC_RecordChild1, // #1 = $shamt
/*19221*/   OPC_MoveChild, 1,
/*19223*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19226*/   OPC_MoveParent,
/*19227*/   OPC_SwitchType /*2 cases */, 13,  MVT::v2i16,// ->19243
/*19230*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*19232*/     OPC_EmitConvertToTarget, 1,
/*19234*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHRL_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHRL_DSP:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHRL_PH:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt)
            /*SwitchType*/ 13,  MVT::v4i8,// ->19258
/*19245*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19247*/     OPC_EmitConvertToTarget, 1,
/*19249*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHRL_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHRL_DSP:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHRL_QB:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 24,  TARGET_VAL(MipsISD::Ret),// ->19286
/*19262*/   OPC_RecordNode,   // #0 = 'MipsRet' chained node
/*19263*/   OPC_CaptureGlueInput,
/*19264*/   OPC_Scope, 9, /*->19275*/ // 2 children in Scope
/*19266*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19268*/     OPC_EmitMergeInputChains1_0,
/*19269*/     OPC_MorphNodeTo, TARGET_VAL(Mips::RetRA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (MipsRet) - Complexity = 3
              // Dst: (RetRA)
/*19275*/   /*Scope*/ 9, /*->19285*/
/*19276*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*19278*/     OPC_EmitMergeInputChains1_0,
/*19279*/     OPC_MorphNodeTo, TARGET_VAL(Mips::RetRA16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (MipsRet) - Complexity = 3
              // Dst: (RetRA16)
/*19285*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 43,  TARGET_VAL(ISD::BR),// ->19332
/*19289*/   OPC_RecordNode,   // #0 = 'br' chained node
/*19290*/   OPC_RecordChild1, // #1 = $target
/*19291*/   OPC_MoveChild, 1,
/*19293*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*19296*/   OPC_MoveParent,
/*19297*/   OPC_Scope, 10, /*->19309*/ // 3 children in Scope
/*19299*/     OPC_CheckPatternPredicate, 25, // (TM.getRelocationModel() == Reloc::Static) && (Subtarget.hasStandardEncoding())
/*19301*/     OPC_EmitMergeInputChains1_0,
/*19302*/     OPC_MorphNodeTo, TARGET_VAL(Mips::J), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$target) - Complexity = 3
              // Dst: (J (bb:Other):$target)
/*19309*/   /*Scope*/ 10, /*->19320*/
/*19310*/     OPC_CheckPatternPredicate, 26, // (TM.getRelocationModel() == Reloc::PIC_) && (Subtarget.hasStandardEncoding())
/*19312*/     OPC_EmitMergeInputChains1_0,
/*19313*/     OPC_MorphNodeTo, TARGET_VAL(Mips::B), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$offset) - Complexity = 3
              // Dst: (B (bb:Other):$offset)
/*19320*/   /*Scope*/ 10, /*->19331*/
/*19321*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*19323*/     OPC_EmitMergeInputChains1_0,
/*19324*/     OPC_MorphNodeTo, TARGET_VAL(Mips::BimmX16), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$imm16) - Complexity = 3
              // Dst: (BimmX16 (bb:Other):$imm16)
/*19331*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::BRIND),// ->19379
/*19335*/   OPC_RecordNode,   // #0 = 'brind' chained node
/*19336*/   OPC_RecordChild1, // #1 = $rs
/*19337*/   OPC_Scope, 26, /*->19365*/ // 2 children in Scope
/*19339*/     OPC_CheckChild1Type, MVT::i32,
/*19341*/     OPC_Scope, 10, /*->19353*/ // 2 children in Scope
/*19343*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19345*/       OPC_EmitMergeInputChains1_0,
/*19346*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JR), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (brind CPURegs:i32:$rs) - Complexity = 3
                // Dst: (JR CPURegs:i32:$rs)
/*19353*/     /*Scope*/ 10, /*->19364*/
/*19354*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*19356*/       OPC_EmitMergeInputChains1_0,
/*19357*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JrcRx16), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (brind CPU16Regs:i32:$rs) - Complexity = 3
                // Dst: (JrcRx16 CPU16Regs:i32:$rs)
/*19364*/     0, /*End of Scope*/
/*19365*/   /*Scope*/ 12, /*->19378*/
/*19366*/     OPC_CheckChild1Type, MVT::i64,
/*19368*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19370*/     OPC_EmitMergeInputChains1_0,
/*19371*/     OPC_MorphNodeTo, TARGET_VAL(Mips::JR64), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (brind CPU64Regs:i64:$rs) - Complexity = 3
              // Dst: (JR64 CPU64Regs:i64:$rs)
/*19378*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 35,  TARGET_VAL(MipsISD::EH_RETURN),// ->19417
/*19382*/   OPC_RecordNode,   // #0 = 'MIPSehret' chained node
/*19383*/   OPC_CaptureGlueInput,
/*19384*/   OPC_RecordChild1, // #1 = $spoff
/*19385*/   OPC_Scope, 14, /*->19401*/ // 2 children in Scope
/*19387*/     OPC_CheckChild1Type, MVT::i32,
/*19389*/     OPC_RecordChild2, // #2 = $dst
/*19390*/     OPC_CheckChild2Type, MVT::i32,
/*19392*/     OPC_EmitMergeInputChains1_0,
/*19393*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MIPSeh_return32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (MIPSehret CPURegs:i32:$spoff, CPURegs:i32:$dst) - Complexity = 3
              // Dst: (MIPSeh_return32 CPURegs:i32:$spoff, CPURegs:i32:$dst)
/*19401*/   /*Scope*/ 14, /*->19416*/
/*19402*/     OPC_CheckChild1Type, MVT::i64,
/*19404*/     OPC_RecordChild2, // #2 = $dst
/*19405*/     OPC_CheckChild2Type, MVT::i64,
/*19407*/     OPC_EmitMergeInputChains1_0,
/*19408*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MIPSeh_return64), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (MIPSehret CPU64Regs:i64:$spoff, CPU64Regs:i64:$dst) - Complexity = 3
              // Dst: (MIPSeh_return64 CPU64Regs:i64:$spoff, CPU64Regs:i64:$dst)
/*19416*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DivRem16),// ->19435
/*19420*/   OPC_RecordChild0, // #0 = $rx
/*19421*/   OPC_CheckChild0Type, MVT::i32,
/*19423*/   OPC_RecordChild1, // #1 = $ry
/*19424*/   OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*19426*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DivRxRy16), 0|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsDivRem16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry) - Complexity = 3
            // Dst: (DivRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DivRemU16),// ->19453
/*19438*/   OPC_RecordChild0, // #0 = $rx
/*19439*/   OPC_CheckChild0Type, MVT::i32,
/*19441*/   OPC_RecordChild1, // #1 = $ry
/*19442*/   OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*19444*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DivuRxRy16), 0|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsDivRemU16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry) - Complexity = 3
            // Dst: (DivuRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
          /*SwitchOpcode*/ 115,  TARGET_VAL(ISD::SINT_TO_FP),// ->19571
/*19456*/   OPC_RecordChild0, // #0 = $src
/*19457*/   OPC_Scope, 66, /*->19525*/ // 2 children in Scope
/*19459*/     OPC_CheckChild0Type, MVT::i32,
/*19461*/     OPC_SwitchType /*2 cases */, 18,  MVT::f32,// ->19482
/*19464*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19466*/       OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*19474*/       OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_S_W), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
                // Src: (sint_to_fp:f32 CPURegs:i32:$src) - Complexity = 3
                // Dst: (CVT_S_W:f32 (MTC1:f32 CPURegs:i32:$src))
              /*SwitchType*/ 40,  MVT::f64,// ->19524
/*19484*/       OPC_Scope, 18, /*->19504*/ // 2 children in Scope
/*19486*/         OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19488*/         OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*19496*/         OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D32_W), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 1, 
                  // Src: (sint_to_fp:f64 CPURegs:i32:$src) - Complexity = 3
                  // Dst: (CVT_D32_W:f64 (MTC1:f32 CPURegs:i32:$src))
/*19504*/       /*Scope*/ 18, /*->19523*/
/*19505*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19507*/         OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*19515*/         OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D64_W), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 1, 
                  // Src: (sint_to_fp:f64 CPURegs:i32:$src) - Complexity = 3
                  // Dst: (CVT_D64_W:f64 (MTC1:f32 CPURegs:i32:$src))
/*19523*/       0, /*End of Scope*/
              0, // EndSwitchType
/*19525*/   /*Scope*/ 44, /*->19570*/
/*19526*/     OPC_CheckChild0Type, MVT::i64,
/*19528*/     OPC_SwitchType /*2 cases */, 18,  MVT::f32,// ->19549
/*19531*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19533*/       OPC_EmitNode, TARGET_VAL(Mips::DMTC1), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1
/*19541*/       OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_S_L), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
                // Src: (sint_to_fp:f32 CPU64Regs:i64:$src) - Complexity = 3
                // Dst: (CVT_S_L:f32 (DMTC1:f64 CPU64Regs:i64:$src))
              /*SwitchType*/ 18,  MVT::f64,// ->19569
/*19551*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19553*/       OPC_EmitNode, TARGET_VAL(Mips::DMTC1), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1
/*19561*/       OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D64_L), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 1, 
                // Src: (sint_to_fp:f64 CPU64Regs:i64:$src) - Complexity = 3
                // Dst: (CVT_D64_L:f64 (DMTC1:f64 CPU64Regs:i64:$src))
              0, // EndSwitchType
/*19570*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 93|128,2/*349*/,  TARGET_VAL(MipsISD::SELECT_CC_DSP),// ->19924
/*19575*/   OPC_RecordChild0, // #0 = $a
/*19576*/   OPC_Scope, 43|128,1/*171*/, /*->19750*/ // 2 children in Scope
/*19579*/     OPC_CheckChild0Type, MVT::v2i16,
/*19581*/     OPC_RecordChild1, // #1 = $b
/*19582*/     OPC_RecordChild2, // #2 = $c
/*19583*/     OPC_RecordChild3, // #3 = $d
/*19584*/     OPC_MoveChild, 4,
/*19586*/     OPC_Scope, 26, /*->19614*/ // 6 children in Scope
/*19588*/       OPC_CheckCondCode, ISD::SETEQ,
/*19590*/       OPC_MoveParent,
/*19591*/       OPC_CheckType, MVT::v2i16,
/*19593*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19595*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_EQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*19604*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETEQ:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_EQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$c, ?:v2i16:$d)
/*19614*/     /*Scope*/ 26, /*->19641*/
/*19615*/       OPC_CheckCondCode, ISD::SETLT,
/*19617*/       OPC_MoveParent,
/*19618*/       OPC_CheckType, MVT::v2i16,
/*19620*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19622*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LT_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*19631*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETLT:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LT_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$c, ?:v2i16:$d)
/*19641*/     /*Scope*/ 26, /*->19668*/
/*19642*/       OPC_CheckCondCode, ISD::SETLE,
/*19644*/       OPC_MoveParent,
/*19645*/       OPC_CheckType, MVT::v2i16,
/*19647*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19649*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LE_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*19658*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETLE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LE_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$c, ?:v2i16:$d)
/*19668*/     /*Scope*/ 26, /*->19695*/
/*19669*/       OPC_CheckCondCode, ISD::SETNE,
/*19671*/       OPC_MoveParent,
/*19672*/       OPC_CheckType, MVT::v2i16,
/*19674*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19676*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_EQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*19685*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETNE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_EQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$d, ?:v2i16:$c)
/*19695*/     /*Scope*/ 26, /*->19722*/
/*19696*/       OPC_CheckCondCode, ISD::SETGE,
/*19698*/       OPC_MoveParent,
/*19699*/       OPC_CheckType, MVT::v2i16,
/*19701*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19703*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LT_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*19712*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETGE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LT_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$d, ?:v2i16:$c)
/*19722*/     /*Scope*/ 26, /*->19749*/
/*19723*/       OPC_CheckCondCode, ISD::SETGT,
/*19725*/       OPC_MoveParent,
/*19726*/       OPC_CheckType, MVT::v2i16,
/*19728*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19730*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LE_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*19739*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETGT:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LE_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$d, ?:v2i16:$c)
/*19749*/     0, /*End of Scope*/
/*19750*/   /*Scope*/ 43|128,1/*171*/, /*->19923*/
/*19752*/     OPC_CheckChild0Type, MVT::v4i8,
/*19754*/     OPC_RecordChild1, // #1 = $b
/*19755*/     OPC_RecordChild2, // #2 = $c
/*19756*/     OPC_RecordChild3, // #3 = $d
/*19757*/     OPC_MoveChild, 4,
/*19759*/     OPC_Scope, 26, /*->19787*/ // 6 children in Scope
/*19761*/       OPC_CheckCondCode, ISD::SETEQ,
/*19763*/       OPC_MoveParent,
/*19764*/       OPC_CheckType, MVT::v4i8,
/*19766*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19768*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_EQ_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*19777*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETEQ:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_EQ_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$c, ?:v4i8:$d)
/*19787*/     /*Scope*/ 26, /*->19814*/
/*19788*/       OPC_CheckCondCode, ISD::SETULT,
/*19790*/       OPC_MoveParent,
/*19791*/       OPC_CheckType, MVT::v4i8,
/*19793*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19795*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LT_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*19804*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETULT:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LT_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$c, ?:v4i8:$d)
/*19814*/     /*Scope*/ 26, /*->19841*/
/*19815*/       OPC_CheckCondCode, ISD::SETULE,
/*19817*/       OPC_MoveParent,
/*19818*/       OPC_CheckType, MVT::v4i8,
/*19820*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19822*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LE_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*19831*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETULE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LE_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$c, ?:v4i8:$d)
/*19841*/     /*Scope*/ 26, /*->19868*/
/*19842*/       OPC_CheckCondCode, ISD::SETNE,
/*19844*/       OPC_MoveParent,
/*19845*/       OPC_CheckType, MVT::v4i8,
/*19847*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19849*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_EQ_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*19858*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETNE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_EQ_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$d, ?:v4i8:$c)
/*19868*/     /*Scope*/ 26, /*->19895*/
/*19869*/       OPC_CheckCondCode, ISD::SETUGE,
/*19871*/       OPC_MoveParent,
/*19872*/       OPC_CheckType, MVT::v4i8,
/*19874*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19876*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LT_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*19885*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETUGE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LT_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$d, ?:v4i8:$c)
/*19895*/     /*Scope*/ 26, /*->19922*/
/*19896*/       OPC_CheckCondCode, ISD::SETUGT,
/*19898*/       OPC_MoveParent,
/*19899*/       OPC_CheckType, MVT::v4i8,
/*19901*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19903*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LE_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*19912*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETUGT:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LE_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$d, ?:v4i8:$c)
/*19922*/     0, /*End of Scope*/
/*19923*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 45|128,6/*813*/,  TARGET_VAL(MipsISD::SETCC_DSP),// ->20741
/*19928*/   OPC_RecordChild0, // #0 = $a
/*19929*/   OPC_Scope, 19|128,3/*403*/, /*->20335*/ // 2 children in Scope
/*19932*/     OPC_CheckChild0Type, MVT::v2i16,
/*19934*/     OPC_RecordChild1, // #1 = $b
/*19935*/     OPC_MoveChild, 2,
/*19937*/     OPC_Scope, 65, /*->20004*/ // 6 children in Scope
/*19939*/       OPC_CheckCondCode, ISD::SETEQ,
/*19941*/       OPC_MoveParent,
/*19942*/       OPC_CheckType, MVT::v2i16,
/*19944*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19946*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_EQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*19955*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*19958*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*19970*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*19979*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*19982*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 5, 6,  // Results = #7
/*19991*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*19994*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETEQ:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_EQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32), ZERO:v2i16)
/*20004*/     /*Scope*/ 65, /*->20070*/
/*20005*/       OPC_CheckCondCode, ISD::SETLT,
/*20007*/       OPC_MoveParent,
/*20008*/       OPC_CheckType, MVT::v2i16,
/*20010*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20012*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LT_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20021*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20024*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20036*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*20045*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20048*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 5, 6,  // Results = #7
/*20057*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20060*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETLT:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LT_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32), ZERO:v2i16)
/*20070*/     /*Scope*/ 65, /*->20136*/
/*20071*/       OPC_CheckCondCode, ISD::SETLE,
/*20073*/       OPC_MoveParent,
/*20074*/       OPC_CheckType, MVT::v2i16,
/*20076*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20078*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LE_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20087*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20090*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20102*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*20111*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20114*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 5, 6,  // Results = #7
/*20123*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20126*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETLE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LE_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32), ZERO:v2i16)
/*20136*/     /*Scope*/ 65, /*->20202*/
/*20137*/       OPC_CheckCondCode, ISD::SETNE,
/*20139*/       OPC_MoveParent,
/*20140*/       OPC_CheckType, MVT::v2i16,
/*20142*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20144*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_EQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20153*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20156*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20159*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20171*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*20180*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20183*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 6, 7,  // Results = #8
/*20192*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETNE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_EQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ZERO:v2i16, (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32))
/*20202*/     /*Scope*/ 65, /*->20268*/
/*20203*/       OPC_CheckCondCode, ISD::SETGE,
/*20205*/       OPC_MoveParent,
/*20206*/       OPC_CheckType, MVT::v2i16,
/*20208*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20210*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LT_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20219*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20222*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20225*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20237*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*20246*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20249*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 6, 7,  // Results = #8
/*20258*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETGE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LT_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ZERO:v2i16, (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32))
/*20268*/     /*Scope*/ 65, /*->20334*/
/*20269*/       OPC_CheckCondCode, ISD::SETGT,
/*20271*/       OPC_MoveParent,
/*20272*/       OPC_CheckType, MVT::v2i16,
/*20274*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20276*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LE_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20285*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20288*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20291*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20303*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*20312*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20315*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 6, 7,  // Results = #8
/*20324*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETGT:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LE_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ZERO:v2i16, (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32))
/*20334*/     0, /*End of Scope*/
/*20335*/   /*Scope*/ 19|128,3/*403*/, /*->20740*/
/*20337*/     OPC_CheckChild0Type, MVT::v4i8,
/*20339*/     OPC_RecordChild1, // #1 = $b
/*20340*/     OPC_MoveChild, 2,
/*20342*/     OPC_Scope, 65, /*->20409*/ // 6 children in Scope
/*20344*/       OPC_CheckCondCode, ISD::SETEQ,
/*20346*/       OPC_MoveParent,
/*20347*/       OPC_CheckType, MVT::v4i8,
/*20349*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20351*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_EQ_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*20360*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20363*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20375*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*20384*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20387*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 5, 6,  // Results = #7
/*20396*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*20399*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETEQ:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_EQ_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32), ZERO:v4i8)
/*20409*/     /*Scope*/ 65, /*->20475*/
/*20410*/       OPC_CheckCondCode, ISD::SETULT,
/*20412*/       OPC_MoveParent,
/*20413*/       OPC_CheckType, MVT::v4i8,
/*20415*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20417*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LT_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*20426*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20429*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20441*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*20450*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20453*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 5, 6,  // Results = #7
/*20462*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*20465*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETULT:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LT_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32), ZERO:v4i8)
/*20475*/     /*Scope*/ 65, /*->20541*/
/*20476*/       OPC_CheckCondCode, ISD::SETULE,
/*20478*/       OPC_MoveParent,
/*20479*/       OPC_CheckType, MVT::v4i8,
/*20481*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20483*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LE_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*20492*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20495*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20507*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*20516*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20519*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 5, 6,  // Results = #7
/*20528*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*20531*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETULE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LE_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32), ZERO:v4i8)
/*20541*/     /*Scope*/ 65, /*->20607*/
/*20542*/       OPC_CheckCondCode, ISD::SETNE,
/*20544*/       OPC_MoveParent,
/*20545*/       OPC_CheckType, MVT::v4i8,
/*20547*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20549*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_EQ_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*20558*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*20561*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20564*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20576*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*20585*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20588*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 6, 7,  // Results = #8
/*20597*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETNE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_EQ_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ZERO:v4i8, (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32))
/*20607*/     /*Scope*/ 65, /*->20673*/
/*20608*/       OPC_CheckCondCode, ISD::SETUGE,
/*20610*/       OPC_MoveParent,
/*20611*/       OPC_CheckType, MVT::v4i8,
/*20613*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20615*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LT_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*20624*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*20627*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20630*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20642*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*20651*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20654*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 6, 7,  // Results = #8
/*20663*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETUGE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LT_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ZERO:v4i8, (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32))
/*20673*/     /*Scope*/ 65, /*->20739*/
/*20674*/       OPC_CheckCondCode, ISD::SETUGT,
/*20676*/       OPC_MoveParent,
/*20677*/       OPC_CheckType, MVT::v4i8,
/*20679*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20681*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LE_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*20690*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*20693*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20696*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20708*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*20717*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20720*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 6, 7,  // Results = #8
/*20729*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETUGT:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LE_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ZERO:v4i8, (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32))
/*20739*/     0, /*End of Scope*/
/*20740*/   0, /*End of Scope*/
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 20743 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 280
  // #OPC_RecordNode                     = 53
  // #OPC_RecordChild                    = 801
  // #OPC_RecordMemRef                   = 18
  // #OPC_CaptureGlueInput               = 9
  // #OPC_MoveChild                      = 197
  // #OPC_MoveParent                     = 700
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 881
  // #OPC_CheckPredicate                 = 259
  // #OPC_CheckOpcode                    = 117
  // #OPC_SwitchOpcode                   = 14
  // #OPC_CheckType                      = 407
  // #OPC_SwitchType                     = 110
  // #OPC_CheckChildType                 = 90
  // #OPC_CheckInteger                   = 114
  // #OPC_CheckCondCode                  = 222
  // #OPC_CheckValueType                 = 3
  // #OPC_CheckComplexPat                = 121
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 42
  // #OPC_EmitStringInteger              = 21
  // #OPC_EmitRegister                   = 66
  // #OPC_EmitConvertToTarget            = 144
  // #OPC_EmitMergeInputChains           = 353
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 211
  // #OPC_EmitNodeXForm                  = 32
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 888

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding());
  case 1: return (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding());
  case 2: return (Subtarget.hasDSP());
  case 3: return (Subtarget.inMips16Mode());
  case 4: return (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 5: return (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 6: return (Subtarget.hasFPIdx()) && (Subtarget.hasStandardEncoding());
  case 7: return (Subtarget.hasMips32r2()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 8: return (Subtarget.hasMips64()) && (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding());
  case 9: return (Subtarget.hasStandardEncoding());
  case 10: return (Subtarget.hasDSPR2());
  case 11: return (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding());
  case 12: return (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 13: return (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 14: return (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 15: return (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding());
  case 16: return (Subtarget.hasMips64r2()) && (Subtarget.hasStandardEncoding());
  case 17: return (Subtarget.hasStandardEncoding()) && (!Subtarget.hasDSP());
  case 18: return (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding());
  case 19: return (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  case 20: return (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  case 21: return (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  case 22: return (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 23: return (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 24: return (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  case 25: return (TM.getRelocationModel() == Reloc::Static) && (Subtarget.hasStandardEncoding());
  case 26: return (TM.getRelocationModel() == Reloc::PIC_) && (Subtarget.hasStandardEncoding());
  }
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 1: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 2: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 3: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 4: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 5: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 6: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 7: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 8: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 9: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 10: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 11: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 12: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 13: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 14: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 15: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 16: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 17: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 18: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 19: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 20: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 21: { // Predicate_immZExt5
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return Imm == (Imm & 0x1f);
  }
  case 22: { // Predicate_immZExt10
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<10>(Imm);
  }
  case 23: { // Predicate_immZExt4
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<4>(Imm);
  }
  case 24: { // Predicate_immZExt3
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<3>(Imm);
  }
  case 25: { // Predicate_immZExt2
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<2>(Imm);
  }
  case 26: { // Predicate_immZExt8
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<8>(Imm);
  }
  case 27: { // Predicate_immZExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  if (N->getValueType(0) == MVT::i32)
    return (uint32_t)N->getZExtValue() == (unsigned short)N->getZExtValue();
  else
    return (uint64_t)N->getZExtValue() == (unsigned short)N->getZExtValue();

  }
  case 28: { // Predicate_immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<16>(N->getSExtValue()); 
  }
  case 29: { // Predicate_immSExt16Plus1
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<17>(N->getSExtValue()) && isInt<16>(N->getSExtValue() + 1);

  }
  case 30: { // Predicate_immSExt8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<8>(N->getSExtValue()); 
  }
  case 31: { // Predicate_immZExt6
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return Imm == (Imm & 0x3f);
  }
  case 32: { // Predicate_immSExt6
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isInt<6>(Imm);
  }
  case 33: { // Predicate_immLow16Zero
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  int64_t Val = N->getSExtValue();
  return isInt<32>(Val) && !(Val & 0xffff);

  }
  case 34: { // Predicate_atomic_load_add_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 35: { // Predicate_atomic_load_add_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 36: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 37: { // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 38: { // Predicate_atomic_load_sub_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 39: { // Predicate_atomic_load_sub_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 40: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 41: { // Predicate_atomic_load_sub_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 42: { // Predicate_atomic_load_and_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 43: { // Predicate_atomic_load_and_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 44: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 45: { // Predicate_atomic_load_and_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 46: { // Predicate_atomic_load_or_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 47: { // Predicate_atomic_load_or_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 48: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 49: { // Predicate_atomic_load_or_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 50: { // Predicate_atomic_load_xor_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 51: { // Predicate_atomic_load_xor_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 52: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 53: { // Predicate_atomic_load_xor_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 54: { // Predicate_atomic_load_nand_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 55: { // Predicate_atomic_load_nand_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 56: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 57: { // Predicate_atomic_load_nand_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 58: { // Predicate_atomic_swap_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 59: { // Predicate_atomic_swap_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 60: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 61: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 62: { // Predicate_atomic_cmp_swap_8
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 63: { // Predicate_atomic_cmp_swap_16
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 64: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 65: { // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 66: { // Predicate_fpimm0
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);

  return N->isExactlyValue(+0.0);

  }
  case 67: { // Predicate_fpimm0neg
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);

  return N->isExactlyValue(-0.0);

  }
  }
}

virtual bool CheckComplexPattern(SDNode *Root, SDNode *Parent,
                                 SDValue N, unsigned PatternNo,
         SmallVectorImpl<std::pair<SDValue, SDNode*> > &Result) {
  unsigned NextRes = Result.size();
  switch (PatternNo) {
  default: llvm_unreachable("Invalid pattern # in table?");
  case 0:
    Result.resize(NextRes+2);
    return selectAddrRegImm(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+3);
    return selectAddr16(Parent, N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 2:
    Result.resize(NextRes+2);
    return selectIntAddr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return selectAddrDefault(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return getImm(N, N->getZExtValue() & 0xFFFF);

  }
  case 1: {  // Plus1
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());
 return getImm(N, N->getSExtValue() + 1); 
  }
  case 2: {  // HI16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return getImm(N, (N->getZExtValue() >> 16) & 0xFFFF);

  }
  }
}

