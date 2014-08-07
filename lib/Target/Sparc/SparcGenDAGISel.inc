/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the Sparc target                               *|
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
/*0*/     OPC_SwitchOpcode /*52 cases */, 20|128,6/*788*/,  TARGET_VAL(ISD::LOAD),// ->793
/*5*/       OPC_RecordMemRef,
/*6*/       OPC_RecordNode,   // #0 = 'ld' chained node
/*7*/       OPC_RecordChild1, // #1 = $addr
/*8*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*10*/      OPC_Scope, 72, /*->84*/ // 16 children in Scope
/*12*/        OPC_CheckPredicate, 1, // Predicate_sextload
/*14*/        OPC_CheckType, MVT::i32,
/*16*/        OPC_Scope, 32, /*->50*/ // 2 children in Scope
/*18*/          OPC_CheckPredicate, 2, // Predicate_sextloadi8
/*20*/          OPC_Scope, 13, /*->35*/ // 2 children in Scope
/*22*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*25*/            OPC_EmitMergeInputChains1_0,
/*26*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDSBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LDSBrr:i32 ADDRrr:iPTR:$addr)
/*35*/          /*Scope*/ 13, /*->49*/
/*36*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*39*/            OPC_EmitMergeInputChains1_0,
/*40*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDSBri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LDSBri:i32 ADDRri:iPTR:$addr)
/*49*/          0, /*End of Scope*/
/*50*/        /*Scope*/ 32, /*->83*/
/*51*/          OPC_CheckPredicate, 3, // Predicate_sextloadi16
/*53*/          OPC_Scope, 13, /*->68*/ // 2 children in Scope
/*55*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*58*/            OPC_EmitMergeInputChains1_0,
/*59*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDSHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LDSHrr:i32 ADDRrr:iPTR:$addr)
/*68*/          /*Scope*/ 13, /*->82*/
/*69*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*72*/            OPC_EmitMergeInputChains1_0,
/*73*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDSHri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LDSHri:i32 ADDRri:iPTR:$addr)
/*82*/          0, /*End of Scope*/
/*83*/        0, /*End of Scope*/
/*84*/      /*Scope*/ 72, /*->157*/
/*85*/        OPC_CheckPredicate, 4, // Predicate_zextload
/*87*/        OPC_CheckType, MVT::i32,
/*89*/        OPC_Scope, 32, /*->123*/ // 2 children in Scope
/*91*/          OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*93*/          OPC_Scope, 13, /*->108*/ // 2 children in Scope
/*95*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*98*/            OPC_EmitMergeInputChains1_0,
/*99*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LDUBrr:i32 ADDRrr:iPTR:$addr)
/*108*/         /*Scope*/ 13, /*->122*/
/*109*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*112*/           OPC_EmitMergeInputChains1_0,
/*113*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LDUBri:i32 ADDRri:iPTR:$addr)
/*122*/         0, /*End of Scope*/
/*123*/       /*Scope*/ 32, /*->156*/
/*124*/         OPC_CheckPredicate, 6, // Predicate_zextloadi16
/*126*/         OPC_Scope, 13, /*->141*/ // 2 children in Scope
/*128*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*131*/           OPC_EmitMergeInputChains1_0,
/*132*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LDUHrr:i32 ADDRrr:iPTR:$addr)
/*141*/         /*Scope*/ 13, /*->155*/
/*142*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*145*/           OPC_EmitMergeInputChains1_0,
/*146*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LDUHri:i32 ADDRri:iPTR:$addr)
/*155*/         0, /*End of Scope*/
/*156*/       0, /*End of Scope*/
/*157*/     /*Scope*/ 34, /*->192*/
/*158*/       OPC_CheckPredicate, 7, // Predicate_load
/*160*/       OPC_CheckType, MVT::i32,
/*162*/       OPC_Scope, 13, /*->177*/ // 2 children in Scope
/*164*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*167*/         OPC_EmitMergeInputChains1_0,
/*168*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDrr:i32 ADDRrr:iPTR:$addr)
/*177*/       /*Scope*/ 13, /*->191*/
/*178*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*181*/         OPC_EmitMergeInputChains1_0,
/*182*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDri:i32 ADDRri:iPTR:$addr)
/*191*/       0, /*End of Scope*/
/*192*/     /*Scope*/ 105, /*->298*/
/*193*/       OPC_CheckPredicate, 8, // Predicate_extload
/*195*/       OPC_CheckType, MVT::i32,
/*197*/       OPC_Scope, 32, /*->231*/ // 3 children in Scope
/*199*/         OPC_CheckPredicate, 9, // Predicate_extloadi1
/*201*/         OPC_Scope, 13, /*->216*/ // 2 children in Scope
/*203*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*206*/           OPC_EmitMergeInputChains1_0,
/*207*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LDUBrr:i32 ADDRrr:iPTR:$src)
/*216*/         /*Scope*/ 13, /*->230*/
/*217*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*220*/           OPC_EmitMergeInputChains1_0,
/*221*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LDUBri:i32 ADDRri:iPTR:$src)
/*230*/         0, /*End of Scope*/
/*231*/       /*Scope*/ 32, /*->264*/
/*232*/         OPC_CheckPredicate, 10, // Predicate_extloadi8
/*234*/         OPC_Scope, 13, /*->249*/ // 2 children in Scope
/*236*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*239*/           OPC_EmitMergeInputChains1_0,
/*240*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LDUBrr:i32 ADDRrr:iPTR:$src)
/*249*/         /*Scope*/ 13, /*->263*/
/*250*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*253*/           OPC_EmitMergeInputChains1_0,
/*254*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LDUBri:i32 ADDRri:iPTR:$src)
/*263*/         0, /*End of Scope*/
/*264*/       /*Scope*/ 32, /*->297*/
/*265*/         OPC_CheckPredicate, 11, // Predicate_extloadi16
/*267*/         OPC_Scope, 13, /*->282*/ // 2 children in Scope
/*269*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*272*/           OPC_EmitMergeInputChains1_0,
/*273*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LDUHrr:i32 ADDRrr:iPTR:$src)
/*282*/         /*Scope*/ 13, /*->296*/
/*283*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*286*/           OPC_EmitMergeInputChains1_0,
/*287*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LDUHri:i32 ADDRri:iPTR:$src)
/*296*/         0, /*End of Scope*/
/*297*/       0, /*End of Scope*/
/*298*/     /*Scope*/ 36, /*->335*/
/*299*/       OPC_CheckPredicate, 4, // Predicate_zextload
/*301*/       OPC_CheckPredicate, 12, // Predicate_zextloadi1
/*303*/       OPC_CheckType, MVT::i32,
/*305*/       OPC_Scope, 13, /*->320*/ // 2 children in Scope
/*307*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*310*/         OPC_EmitMergeInputChains1_0,
/*311*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRrr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LDUBrr:i32 ADDRrr:iPTR:$src)
/*320*/       /*Scope*/ 13, /*->334*/
/*321*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*324*/         OPC_EmitMergeInputChains1_0,
/*325*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRri:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LDUBri:i32 ADDRri:iPTR:$src)
/*334*/       0, /*End of Scope*/
/*335*/     /*Scope*/ 36, /*->372*/
/*336*/       OPC_CheckPredicate, 7, // Predicate_load
/*338*/       OPC_CheckType, MVT::i64,
/*340*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*342*/       OPC_Scope, 13, /*->357*/ // 2 children in Scope
/*344*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*347*/         OPC_EmitMergeInputChains1_0,
/*348*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDXrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDXrr:i64 ADDRrr:iPTR:$addr)
/*357*/       /*Scope*/ 13, /*->371*/
/*358*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*361*/         OPC_EmitMergeInputChains1_0,
/*362*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDXri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDXri:i64 ADDRri:iPTR:$addr)
/*371*/       0, /*End of Scope*/
/*372*/     /*Scope*/ 38, /*->411*/
/*373*/       OPC_CheckPredicate, 4, // Predicate_zextload
/*375*/       OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*377*/       OPC_CheckType, MVT::i64,
/*379*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*381*/       OPC_Scope, 13, /*->396*/ // 2 children in Scope
/*383*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*386*/         OPC_EmitMergeInputChains1_0,
/*387*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LDUBrr:i64 ADDRrr:iPTR:$addr)
/*396*/       /*Scope*/ 13, /*->410*/
/*397*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*400*/         OPC_EmitMergeInputChains1_0,
/*401*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LDUBri:i64 ADDRri:iPTR:$addr)
/*410*/       0, /*End of Scope*/
/*411*/     /*Scope*/ 38, /*->450*/
/*412*/       OPC_CheckPredicate, 8, // Predicate_extload
/*414*/       OPC_CheckPredicate, 10, // Predicate_extloadi8
/*416*/       OPC_CheckType, MVT::i64,
/*418*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*420*/       OPC_Scope, 13, /*->435*/ // 2 children in Scope
/*422*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*425*/         OPC_EmitMergeInputChains1_0,
/*426*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                // Dst: (LDUBrr:i64 ADDRrr:iPTR:$addr)
/*435*/       /*Scope*/ 13, /*->449*/
/*436*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*439*/         OPC_EmitMergeInputChains1_0,
/*440*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                // Dst: (LDUBri:i64 ADDRri:iPTR:$addr)
/*449*/       0, /*End of Scope*/
/*450*/     /*Scope*/ 38, /*->489*/
/*451*/       OPC_CheckPredicate, 1, // Predicate_sextload
/*453*/       OPC_CheckPredicate, 2, // Predicate_sextloadi8
/*455*/       OPC_CheckType, MVT::i64,
/*457*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*459*/       OPC_Scope, 13, /*->474*/ // 2 children in Scope
/*461*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*464*/         OPC_EmitMergeInputChains1_0,
/*465*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDSBrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                // Dst: (LDSBrr:i64 ADDRrr:iPTR:$addr)
/*474*/       /*Scope*/ 13, /*->488*/
/*475*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*478*/         OPC_EmitMergeInputChains1_0,
/*479*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDSBri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                // Dst: (LDSBri:i64 ADDRri:iPTR:$addr)
/*488*/       0, /*End of Scope*/
/*489*/     /*Scope*/ 38, /*->528*/
/*490*/       OPC_CheckPredicate, 4, // Predicate_zextload
/*492*/       OPC_CheckPredicate, 6, // Predicate_zextloadi16
/*494*/       OPC_CheckType, MVT::i64,
/*496*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*498*/       OPC_Scope, 13, /*->513*/ // 2 children in Scope
/*500*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*503*/         OPC_EmitMergeInputChains1_0,
/*504*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LDUHrr:i64 ADDRrr:iPTR:$addr)
/*513*/       /*Scope*/ 13, /*->527*/
/*514*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*517*/         OPC_EmitMergeInputChains1_0,
/*518*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LDUHri:i64 ADDRri:iPTR:$addr)
/*527*/       0, /*End of Scope*/
/*528*/     /*Scope*/ 38, /*->567*/
/*529*/       OPC_CheckPredicate, 8, // Predicate_extload
/*531*/       OPC_CheckPredicate, 11, // Predicate_extloadi16
/*533*/       OPC_CheckType, MVT::i64,
/*535*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*537*/       OPC_Scope, 13, /*->552*/ // 2 children in Scope
/*539*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*542*/         OPC_EmitMergeInputChains1_0,
/*543*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                // Dst: (LDUHrr:i64 ADDRrr:iPTR:$addr)
/*552*/       /*Scope*/ 13, /*->566*/
/*553*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*556*/         OPC_EmitMergeInputChains1_0,
/*557*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                // Dst: (LDUHri:i64 ADDRri:iPTR:$addr)
/*566*/       0, /*End of Scope*/
/*567*/     /*Scope*/ 38, /*->606*/
/*568*/       OPC_CheckPredicate, 1, // Predicate_sextload
/*570*/       OPC_CheckPredicate, 3, // Predicate_sextloadi16
/*572*/       OPC_CheckType, MVT::i64,
/*574*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*576*/       OPC_Scope, 13, /*->591*/ // 2 children in Scope
/*578*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*581*/         OPC_EmitMergeInputChains1_0,
/*582*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDSHrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LDSHrr:i64 ADDRrr:iPTR:$addr)
/*591*/       /*Scope*/ 13, /*->605*/
/*592*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*595*/         OPC_EmitMergeInputChains1_0,
/*596*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDSHri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LDSHri:i64 ADDRri:iPTR:$addr)
/*605*/       0, /*End of Scope*/
/*606*/     /*Scope*/ 38, /*->645*/
/*607*/       OPC_CheckPredicate, 4, // Predicate_zextload
/*609*/       OPC_CheckPredicate, 13, // Predicate_zextloadi32
/*611*/       OPC_CheckType, MVT::i64,
/*613*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*615*/       OPC_Scope, 13, /*->630*/ // 2 children in Scope
/*617*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*620*/         OPC_EmitMergeInputChains1_0,
/*621*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LDrr:i64 ADDRrr:iPTR:$addr)
/*630*/       /*Scope*/ 13, /*->644*/
/*631*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*634*/         OPC_EmitMergeInputChains1_0,
/*635*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LDri:i64 ADDRri:iPTR:$addr)
/*644*/       0, /*End of Scope*/
/*645*/     /*Scope*/ 38, /*->684*/
/*646*/       OPC_CheckPredicate, 8, // Predicate_extload
/*648*/       OPC_CheckPredicate, 14, // Predicate_extloadi32
/*650*/       OPC_CheckType, MVT::i64,
/*652*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*654*/       OPC_Scope, 13, /*->669*/ // 2 children in Scope
/*656*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*659*/         OPC_EmitMergeInputChains1_0,
/*660*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                // Dst: (LDrr:i64 ADDRrr:iPTR:$addr)
/*669*/       /*Scope*/ 13, /*->683*/
/*670*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*673*/         OPC_EmitMergeInputChains1_0,
/*674*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                // Dst: (LDri:i64 ADDRri:iPTR:$addr)
/*683*/       0, /*End of Scope*/
/*684*/     /*Scope*/ 38, /*->723*/
/*685*/       OPC_CheckPredicate, 1, // Predicate_sextload
/*687*/       OPC_CheckPredicate, 15, // Predicate_sextloadi32
/*689*/       OPC_CheckType, MVT::i64,
/*691*/       OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*693*/       OPC_Scope, 13, /*->708*/ // 2 children in Scope
/*695*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*698*/         OPC_EmitMergeInputChains1_0,
/*699*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDSWrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                // Dst: (LDSWrr:i64 ADDRrr:iPTR:$addr)
/*708*/       /*Scope*/ 13, /*->722*/
/*709*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*712*/         OPC_EmitMergeInputChains1_0,
/*713*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDSWri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                // Dst: (LDSWri:i64 ADDRri:iPTR:$addr)
/*722*/       0, /*End of Scope*/
/*723*/     /*Scope*/ 68, /*->792*/
/*724*/       OPC_CheckPredicate, 7, // Predicate_load
/*726*/       OPC_SwitchType /*2 cases */, 30,  MVT::f32,// ->759
/*729*/         OPC_Scope, 13, /*->744*/ // 2 children in Scope
/*731*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*734*/           OPC_EmitMergeInputChains1_0,
/*735*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDFrr:f32 ADDRrr:iPTR:$addr)
/*744*/         /*Scope*/ 13, /*->758*/
/*745*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*748*/           OPC_EmitMergeInputChains1_0,
/*749*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDFri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDFri:f32 ADDRri:iPTR:$addr)
/*758*/         0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->791
/*761*/         OPC_Scope, 13, /*->776*/ // 2 children in Scope
/*763*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*766*/           OPC_EmitMergeInputChains1_0,
/*767*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 ADDRrr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDDFrr:f64 ADDRrr:iPTR:$addr)
/*776*/         /*Scope*/ 13, /*->790*/
/*777*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*780*/           OPC_EmitMergeInputChains1_0,
/*781*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDDFri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 ADDRri:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDDFri:f64 ADDRri:iPTR:$addr)
/*790*/         0, /*End of Scope*/
              0, // EndSwitchType
/*792*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 91|128,2/*347*/,  TARGET_VAL(ISD::STORE),// ->1144
/*797*/     OPC_RecordMemRef,
/*798*/     OPC_RecordNode,   // #0 = 'st' chained node
/*799*/     OPC_RecordChild1, // #1 = $src
/*800*/     OPC_Scope, 111, /*->913*/ // 4 children in Scope
/*802*/       OPC_CheckChild1Type, MVT::i32,
/*804*/       OPC_RecordChild2, // #2 = $addr
/*805*/       OPC_CheckPredicate, 16, // Predicate_unindexedstore
/*807*/       OPC_Scope, 70, /*->879*/ // 2 children in Scope
/*809*/         OPC_CheckPredicate, 17, // Predicate_truncstore
/*811*/         OPC_Scope, 32, /*->845*/ // 2 children in Scope
/*813*/           OPC_CheckPredicate, 18, // Predicate_truncstorei8
/*815*/           OPC_Scope, 13, /*->830*/ // 2 children in Scope
/*817*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*820*/             OPC_EmitMergeInputChains1_0,
/*821*/             OPC_MorphNodeTo, TARGET_VAL(SP::STBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i32:i32:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBrr ADDRrr:iPTR:$addr, i32:i32:$src)
/*830*/           /*Scope*/ 13, /*->844*/
/*831*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*834*/             OPC_EmitMergeInputChains1_0,
/*835*/             OPC_MorphNodeTo, TARGET_VAL(SP::STBri), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i32:i32:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBri ADDRri:iPTR:$addr, i32:i32:$src)
/*844*/           0, /*End of Scope*/
/*845*/         /*Scope*/ 32, /*->878*/
/*846*/           OPC_CheckPredicate, 19, // Predicate_truncstorei16
/*848*/           OPC_Scope, 13, /*->863*/ // 2 children in Scope
/*850*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*853*/             OPC_EmitMergeInputChains1_0,
/*854*/             OPC_MorphNodeTo, TARGET_VAL(SP::STHrr), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i32:i32:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHrr ADDRrr:iPTR:$addr, i32:i32:$src)
/*863*/           /*Scope*/ 13, /*->877*/
/*864*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*867*/             OPC_EmitMergeInputChains1_0,
/*868*/             OPC_MorphNodeTo, TARGET_VAL(SP::STHri), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i32:i32:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHri ADDRri:iPTR:$addr, i32:i32:$src)
/*877*/           0, /*End of Scope*/
/*878*/         0, /*End of Scope*/
/*879*/       /*Scope*/ 32, /*->912*/
/*880*/         OPC_CheckPredicate, 20, // Predicate_store
/*882*/         OPC_Scope, 13, /*->897*/ // 2 children in Scope
/*884*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*887*/           OPC_EmitMergeInputChains1_0,
/*888*/           OPC_MorphNodeTo, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                  // Src: (st i32:i32:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STrr ADDRrr:iPTR:$addr, i32:i32:$src)
/*897*/         /*Scope*/ 13, /*->911*/
/*898*/           OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*901*/           OPC_EmitMergeInputChains1_0,
/*902*/           OPC_MorphNodeTo, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                  // Src: (st i32:i32:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STri ADDRri:iPTR:$addr, i32:i32:$src)
/*911*/         0, /*End of Scope*/
/*912*/       0, /*End of Scope*/
/*913*/     /*Scope*/ 37, /*->951*/
/*914*/       OPC_CheckChild1Type, MVT::f32,
/*916*/       OPC_RecordChild2, // #2 = $addr
/*917*/       OPC_CheckPredicate, 16, // Predicate_unindexedstore
/*919*/       OPC_CheckPredicate, 20, // Predicate_store
/*921*/       OPC_Scope, 13, /*->936*/ // 2 children in Scope
/*923*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*926*/         OPC_EmitMergeInputChains1_0,
/*927*/         OPC_MorphNodeTo, TARGET_VAL(SP::STFrr), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                // Src: (st f32:f32:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (STFrr ADDRrr:iPTR:$addr, f32:f32:$src)
/*936*/       /*Scope*/ 13, /*->950*/
/*937*/         OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*940*/         OPC_EmitMergeInputChains1_0,
/*941*/         OPC_MorphNodeTo, TARGET_VAL(SP::STFri), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                // Src: (st f32:f32:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (STFri ADDRri:iPTR:$addr, f32:f32:$src)
/*950*/       0, /*End of Scope*/
/*951*/     /*Scope*/ 37, /*->989*/
/*952*/       OPC_CheckChild1Type, MVT::f64,
/*954*/       OPC_RecordChild2, // #2 = $addr
/*955*/       OPC_CheckPredicate, 16, // Predicate_unindexedstore
/*957*/       OPC_CheckPredicate, 20, // Predicate_store
/*959*/       OPC_Scope, 13, /*->974*/ // 2 children in Scope
/*961*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*964*/         OPC_EmitMergeInputChains1_0,
/*965*/         OPC_MorphNodeTo, TARGET_VAL(SP::STDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                // Src: (st f64:f64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (STDFrr ADDRrr:iPTR:$addr, f64:f64:$src)
/*974*/       /*Scope*/ 13, /*->988*/
/*975*/         OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*978*/         OPC_EmitMergeInputChains1_0,
/*979*/         OPC_MorphNodeTo, TARGET_VAL(SP::STDFri), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                // Src: (st f64:f64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (STDFri ADDRri:iPTR:$addr, f64:f64:$src)
/*988*/       0, /*End of Scope*/
/*989*/     /*Scope*/ 24|128,1/*152*/, /*->1143*/
/*991*/       OPC_CheckChild1Type, MVT::i64,
/*993*/       OPC_RecordChild2, // #2 = $addr
/*994*/       OPC_CheckPredicate, 16, // Predicate_unindexedstore
/*996*/       OPC_Scope, 34, /*->1032*/ // 2 children in Scope
/*998*/         OPC_CheckPredicate, 20, // Predicate_store
/*1000*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1002*/        OPC_Scope, 13, /*->1017*/ // 2 children in Scope
/*1004*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*1007*/          OPC_EmitMergeInputChains1_0,
/*1008*/          OPC_MorphNodeTo, TARGET_VAL(SP::STXrr), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                  // Src: (st i64:i64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STXrr ADDRrr:iPTR:$addr, i64:i64:$src)
/*1017*/        /*Scope*/ 13, /*->1031*/
/*1018*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*1021*/          OPC_EmitMergeInputChains1_0,
/*1022*/          OPC_MorphNodeTo, TARGET_VAL(SP::STXri), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                  // Src: (st i64:i64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STXri ADDRri:iPTR:$addr, i64:i64:$src)
/*1031*/        0, /*End of Scope*/
/*1032*/      /*Scope*/ 109, /*->1142*/
/*1033*/        OPC_CheckPredicate, 17, // Predicate_truncstore
/*1035*/        OPC_Scope, 34, /*->1071*/ // 3 children in Scope
/*1037*/          OPC_CheckPredicate, 18, // Predicate_truncstorei8
/*1039*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1041*/          OPC_Scope, 13, /*->1056*/ // 2 children in Scope
/*1043*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*1046*/            OPC_EmitMergeInputChains1_0,
/*1047*/            OPC_MorphNodeTo, TARGET_VAL(SP::STBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i64:i64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBrr ADDRrr:iPTR:$addr, ?:i64:$src)
/*1056*/          /*Scope*/ 13, /*->1070*/
/*1057*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*1060*/            OPC_EmitMergeInputChains1_0,
/*1061*/            OPC_MorphNodeTo, TARGET_VAL(SP::STBri), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i64:i64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBri ADDRri:iPTR:$addr, ?:i64:$src)
/*1070*/          0, /*End of Scope*/
/*1071*/        /*Scope*/ 34, /*->1106*/
/*1072*/          OPC_CheckPredicate, 19, // Predicate_truncstorei16
/*1074*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1076*/          OPC_Scope, 13, /*->1091*/ // 2 children in Scope
/*1078*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*1081*/            OPC_EmitMergeInputChains1_0,
/*1082*/            OPC_MorphNodeTo, TARGET_VAL(SP::STHrr), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i64:i64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHrr ADDRrr:iPTR:$addr, ?:i64:$src)
/*1091*/          /*Scope*/ 13, /*->1105*/
/*1092*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*1095*/            OPC_EmitMergeInputChains1_0,
/*1096*/            OPC_MorphNodeTo, TARGET_VAL(SP::STHri), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i64:i64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHri ADDRri:iPTR:$addr, ?:i64:$src)
/*1105*/          0, /*End of Scope*/
/*1106*/        /*Scope*/ 34, /*->1141*/
/*1107*/          OPC_CheckPredicate, 21, // Predicate_truncstorei32
/*1109*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1111*/          OPC_Scope, 13, /*->1126*/ // 2 children in Scope
/*1113*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*1116*/            OPC_EmitMergeInputChains1_0,
/*1117*/            OPC_MorphNodeTo, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i64:i64:$src, ADDRrr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STrr ADDRrr:iPTR:$addr, ?:i64:$src)
/*1126*/          /*Scope*/ 13, /*->1140*/
/*1127*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*1130*/            OPC_EmitMergeInputChains1_0,
/*1131*/            OPC_MorphNodeTo, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st i64:i64:$src, ADDRri:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STri ADDRri:iPTR:$addr, ?:i64:$src)
/*1140*/          0, /*End of Scope*/
/*1141*/        0, /*End of Scope*/
/*1142*/      0, /*End of Scope*/
/*1143*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 60,  TARGET_VAL(SPISD::CALL),// ->1207
/*1147*/    OPC_RecordNode,   // #0 = 'call' chained node
/*1148*/    OPC_CaptureGlueInput,
/*1149*/    OPC_RecordChild1, // #1 = $ptr
/*1150*/    OPC_Scope, 12, /*->1164*/ // 3 children in Scope
/*1152*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$ptr #2 #3
/*1155*/      OPC_EmitMergeInputChains1_0,
/*1156*/      OPC_MorphNodeTo, TARGET_VAL(SP::JMPLrr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (call ADDRrr:i32:$ptr) - Complexity = 12
              // Dst: (JMPLrr ADDRrr:i32:$ptr)
/*1164*/    /*Scope*/ 12, /*->1177*/
/*1165*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$ptr #2 #3
/*1168*/      OPC_EmitMergeInputChains1_0,
/*1169*/      OPC_MorphNodeTo, TARGET_VAL(SP::JMPLri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (call ADDRri:i32:$ptr) - Complexity = 12
              // Dst: (JMPLri ADDRri:i32:$ptr)
/*1177*/    /*Scope*/ 28, /*->1206*/
/*1178*/      OPC_MoveChild, 1,
/*1180*/      OPC_SwitchOpcode /*2 cases */, 9,  TARGET_VAL(ISD::TargetGlobalAddress),// ->1193
/*1184*/        OPC_MoveParent,
/*1185*/        OPC_EmitMergeInputChains1_0,
/*1186*/        OPC_MorphNodeTo, TARGET_VAL(SP::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (call (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (CALL (tglobaladdr:i32):$dst)
              /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::TargetExternalSymbol),// ->1205
/*1196*/        OPC_MoveParent,
/*1197*/        OPC_EmitMergeInputChains1_0,
/*1198*/        OPC_MorphNodeTo, TARGET_VAL(SP::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (call (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (CALL (texternalsym:i32):$dst)
              0, // EndSwitchOpcode
/*1206*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 67|128,1/*195*/,  TARGET_VAL(ISD::AND),// ->1406
/*1211*/    OPC_Scope, 48, /*->1261*/ // 4 children in Scope
/*1213*/      OPC_RecordChild0, // #0 = $b
/*1214*/      OPC_MoveChild, 1,
/*1216*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1219*/      OPC_RecordChild0, // #1 = $c
/*1220*/      OPC_MoveChild, 1,
/*1222*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1233*/      OPC_MoveParent,
/*1234*/      OPC_MoveParent,
/*1235*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->1247
/*1238*/        OPC_MorphNodeTo, TARGET_VAL(SP::ANDNrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 i32:i32:$b, (xor:i32 i32:i32:$c, -1:i32)) - Complexity = 11
                // Dst: (ANDNrr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->1260
/*1249*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1251*/        OPC_MorphNodeTo, TARGET_VAL(SP::ANDNrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 i64:i64:$a, (xor:i64 i64:i64:$b, -1:i64)) - Complexity = 11
                // Dst: (ANDNrr:i64 ?:i64:$a, ?:i64:$b)
              0, // EndSwitchType
/*1261*/    /*Scope*/ 48, /*->1310*/
/*1262*/      OPC_MoveChild, 0,
/*1264*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1267*/      OPC_RecordChild0, // #0 = $c
/*1268*/      OPC_MoveChild, 1,
/*1270*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1281*/      OPC_MoveParent,
/*1282*/      OPC_MoveParent,
/*1283*/      OPC_RecordChild1, // #1 = $b
/*1284*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->1296
/*1287*/        OPC_MorphNodeTo, TARGET_VAL(SP::ANDNrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:i32 (xor:i32 i32:i32:$c, -1:i32), i32:i32:$b) - Complexity = 11
                // Dst: (ANDNrr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->1309
/*1298*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1300*/        OPC_MorphNodeTo, TARGET_VAL(SP::ANDNrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (and:i64 (xor:i64 i64:i64:$b, -1:i64), i64:i64:$a) - Complexity = 11
                // Dst: (ANDNrr:i64 ?:i64:$a, ?:i64:$b)
              0, // EndSwitchType
/*1310*/    /*Scope*/ 23, /*->1334*/
/*1311*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*1317*/      OPC_RecordChild0, // #0 = $val
/*1318*/      OPC_CheckType, MVT::i64,
/*1320*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1322*/      OPC_EmitInteger, MVT::i32, 0, 
/*1325*/      OPC_MorphNodeTo, TARGET_VAL(SP::SRLri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (and:i64 i64:i64:$val, 4294967295:i64) - Complexity = 8
              // Dst: (SRLri:i64 ?:i64:$val, 0:i32)
/*1334*/    /*Scope*/ 70, /*->1405*/
/*1335*/      OPC_RecordChild0, // #0 = $b
/*1336*/      OPC_RecordChild1, // #1 = $c
/*1337*/      OPC_Scope, 39, /*->1378*/ // 3 children in Scope
/*1339*/        OPC_MoveChild, 1,
/*1341*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1344*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*1346*/        OPC_MoveParent,
/*1347*/        OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->1361
/*1350*/          OPC_EmitConvertToTarget, 1,
/*1352*/          OPC_MorphNodeTo, TARGET_VAL(SP::ANDri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (and:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                  // Dst: (ANDri:i32 i32:i32:$b, (imm:i32):$c)
                /*SwitchType*/ 14,  MVT::i64,// ->1377
/*1363*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1365*/          OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*1368*/          OPC_MorphNodeTo, TARGET_VAL(SP::ANDri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (and:i64 i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                  // Dst: (ANDri:i64 ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
                0, // EndSwitchType
/*1378*/      /*Scope*/ 11, /*->1390*/
/*1379*/        OPC_CheckType, MVT::i32,
/*1381*/        OPC_MorphNodeTo, TARGET_VAL(SP::ANDrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (ANDrr:i32 i32:i32:$b, i32:i32:$c)
/*1390*/      /*Scope*/ 13, /*->1404*/
/*1391*/        OPC_CheckType, MVT::i64,
/*1393*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1395*/        OPC_MorphNodeTo, TARGET_VAL(SP::ANDrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
                // Dst: (ANDrr:i64 ?:i64:$a, ?:i64:$b)
/*1404*/      0, /*End of Scope*/
/*1405*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 43|128,1/*171*/,  TARGET_VAL(ISD::OR),// ->1581
/*1410*/    OPC_Scope, 48, /*->1460*/ // 3 children in Scope
/*1412*/      OPC_RecordChild0, // #0 = $b
/*1413*/      OPC_MoveChild, 1,
/*1415*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1418*/      OPC_RecordChild0, // #1 = $c
/*1419*/      OPC_MoveChild, 1,
/*1421*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1432*/      OPC_MoveParent,
/*1433*/      OPC_MoveParent,
/*1434*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->1446
/*1437*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORNrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 i32:i32:$b, (xor:i32 i32:i32:$c, -1:i32)) - Complexity = 11
                // Dst: (ORNrr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->1459
/*1448*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1450*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORNrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 i64:i64:$a, (xor:i64 i64:i64:$b, -1:i64)) - Complexity = 11
                // Dst: (ORNrr:i64 ?:i64:$a, ?:i64:$b)
              0, // EndSwitchType
/*1460*/    /*Scope*/ 48, /*->1509*/
/*1461*/      OPC_MoveChild, 0,
/*1463*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1466*/      OPC_RecordChild0, // #0 = $c
/*1467*/      OPC_MoveChild, 1,
/*1469*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1480*/      OPC_MoveParent,
/*1481*/      OPC_MoveParent,
/*1482*/      OPC_RecordChild1, // #1 = $b
/*1483*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->1495
/*1486*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORNrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (or:i32 (xor:i32 i32:i32:$c, -1:i32), i32:i32:$b) - Complexity = 11
                // Dst: (ORNrr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->1508
/*1497*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1499*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORNrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (or:i64 (xor:i64 i64:i64:$b, -1:i64), i64:i64:$a) - Complexity = 11
                // Dst: (ORNrr:i64 ?:i64:$a, ?:i64:$b)
              0, // EndSwitchType
/*1509*/    /*Scope*/ 70, /*->1580*/
/*1510*/      OPC_RecordChild0, // #0 = $b
/*1511*/      OPC_RecordChild1, // #1 = $c
/*1512*/      OPC_Scope, 39, /*->1553*/ // 3 children in Scope
/*1514*/        OPC_MoveChild, 1,
/*1516*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1519*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*1521*/        OPC_MoveParent,
/*1522*/        OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->1536
/*1525*/          OPC_EmitConvertToTarget, 1,
/*1527*/          OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (or:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                  // Dst: (ORri:i32 i32:i32:$b, (imm:i32):$c)
                /*SwitchType*/ 14,  MVT::i64,// ->1552
/*1538*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1540*/          OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*1543*/          OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (or:i64 i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                  // Dst: (ORri:i64 ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
                0, // EndSwitchType
/*1553*/      /*Scope*/ 11, /*->1565*/
/*1554*/        OPC_CheckType, MVT::i32,
/*1556*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (ORrr:i32 i32:i32:$b, i32:i32:$c)
/*1565*/      /*Scope*/ 13, /*->1579*/
/*1566*/        OPC_CheckType, MVT::i64,
/*1568*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1570*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
                // Dst: (ORrr:i64 ?:i64:$a, ?:i64:$b)
/*1579*/      0, /*End of Scope*/
/*1580*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 119|128,1/*247*/,  TARGET_VAL(ISD::XOR),// ->1832
/*1585*/    OPC_Scope, 33, /*->1620*/ // 6 children in Scope
/*1587*/      OPC_MoveChild, 0,
/*1589*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1592*/      OPC_RecordChild0, // #0 = $b
/*1593*/      OPC_RecordChild1, // #1 = $c
/*1594*/      OPC_MoveParent,
/*1595*/      OPC_MoveChild, 1,
/*1597*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1608*/      OPC_MoveParent,
/*1609*/      OPC_CheckType, MVT::i32,
/*1611*/      OPC_MorphNodeTo, TARGET_VAL(SP::XNORrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i32 (xor:i32 i32:i32:$b, i32:i32:$c), -1:i32) - Complexity = 11
              // Dst: (XNORrr:i32 i32:i32:$b, i32:i32:$c)
/*1620*/    /*Scope*/ 35, /*->1656*/
/*1621*/      OPC_RecordChild0, // #0 = $a
/*1622*/      OPC_MoveChild, 1,
/*1624*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1627*/      OPC_RecordChild0, // #1 = $b
/*1628*/      OPC_MoveChild, 1,
/*1630*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1641*/      OPC_MoveParent,
/*1642*/      OPC_MoveParent,
/*1643*/      OPC_CheckType, MVT::i64,
/*1645*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1647*/      OPC_MorphNodeTo, TARGET_VAL(SP::XNORrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i64 i64:i64:$a, (xor:i64 i64:i64:$b, -1:i64)) - Complexity = 11
              // Dst: (XNORrr:i64 ?:i64:$a, ?:i64:$b)
/*1656*/    /*Scope*/ 33, /*->1690*/
/*1657*/      OPC_MoveChild, 0,
/*1659*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1662*/      OPC_RecordChild0, // #0 = $b
/*1663*/      OPC_MoveChild, 1,
/*1665*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1676*/      OPC_MoveParent,
/*1677*/      OPC_MoveParent,
/*1678*/      OPC_RecordChild1, // #1 = $c
/*1679*/      OPC_CheckType, MVT::i32,
/*1681*/      OPC_MorphNodeTo, TARGET_VAL(SP::XNORrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i32 (xor:i32 i32:i32:$b, -1:i32), i32:i32:$c) - Complexity = 11
              // Dst: (XNORrr:i32 i32:i32:$b, i32:i32:$c)
/*1690*/    /*Scope*/ 33, /*->1724*/
/*1691*/      OPC_RecordChild0, // #0 = $c
/*1692*/      OPC_MoveChild, 1,
/*1694*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1697*/      OPC_RecordChild0, // #1 = $b
/*1698*/      OPC_MoveChild, 1,
/*1700*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1711*/      OPC_MoveParent,
/*1712*/      OPC_MoveParent,
/*1713*/      OPC_CheckType, MVT::i32,
/*1715*/      OPC_MorphNodeTo, TARGET_VAL(SP::XNORrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (xor:i32 i32:i32:$c, (xor:i32 i32:i32:$b, -1:i32)) - Complexity = 11
              // Dst: (XNORrr:i32 i32:i32:$b, i32:i32:$c)
/*1724*/    /*Scope*/ 35, /*->1760*/
/*1725*/      OPC_MoveChild, 0,
/*1727*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1730*/      OPC_RecordChild0, // #0 = $a
/*1731*/      OPC_MoveChild, 1,
/*1733*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1744*/      OPC_MoveParent,
/*1745*/      OPC_MoveParent,
/*1746*/      OPC_RecordChild1, // #1 = $b
/*1747*/      OPC_CheckType, MVT::i64,
/*1749*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1751*/      OPC_MorphNodeTo, TARGET_VAL(SP::XNORrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i64 (xor:i64 i64:i64:$a, -1:i64), i64:i64:$b) - Complexity = 11
              // Dst: (XNORrr:i64 ?:i64:$a, ?:i64:$b)
/*1760*/    /*Scope*/ 70, /*->1831*/
/*1761*/      OPC_RecordChild0, // #0 = $b
/*1762*/      OPC_RecordChild1, // #1 = $c
/*1763*/      OPC_Scope, 39, /*->1804*/ // 3 children in Scope
/*1765*/        OPC_MoveChild, 1,
/*1767*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1770*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*1772*/        OPC_MoveParent,
/*1773*/        OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->1787
/*1776*/          OPC_EmitConvertToTarget, 1,
/*1778*/          OPC_MorphNodeTo, TARGET_VAL(SP::XORri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (xor:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                  // Dst: (XORri:i32 i32:i32:$b, (imm:i32):$c)
                /*SwitchType*/ 14,  MVT::i64,// ->1803
/*1789*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1791*/          OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*1794*/          OPC_MorphNodeTo, TARGET_VAL(SP::XORri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (xor:i64 i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                  // Dst: (XORri:i64 ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
                0, // EndSwitchType
/*1804*/      /*Scope*/ 11, /*->1816*/
/*1805*/        OPC_CheckType, MVT::i32,
/*1807*/        OPC_MorphNodeTo, TARGET_VAL(SP::XORrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (XORrr:i32 i32:i32:$b, i32:i32:$c)
/*1816*/      /*Scope*/ 13, /*->1830*/
/*1817*/        OPC_CheckType, MVT::i64,
/*1819*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1821*/        OPC_MorphNodeTo, TARGET_VAL(SP::XORrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
                // Dst: (XORrr:i64 ?:i64:$a, ?:i64:$b)
/*1830*/      0, /*End of Scope*/
/*1831*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 38|128,1/*166*/,  TARGET_VAL(SPISD::SELECT_ICC),// ->2002
/*1836*/    OPC_CaptureGlueInput,
/*1837*/    OPC_RecordChild0, // #0 = $F
/*1838*/    OPC_Scope, 54, /*->1894*/ // 2 children in Scope
/*1840*/      OPC_MoveChild, 0,
/*1842*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1845*/      OPC_CheckPredicate, 23, // Predicate_simm11
/*1847*/      OPC_MoveParent,
/*1848*/      OPC_RecordChild1, // #1 = $T
/*1849*/      OPC_RecordChild2, // #2 = $cc
/*1850*/      OPC_MoveChild, 2,
/*1852*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1855*/      OPC_MoveParent,
/*1856*/      OPC_CheckType, MVT::i32,
/*1858*/      OPC_Scope, 16, /*->1876*/ // 2 children in Scope
/*1860*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*1862*/        OPC_EmitConvertToTarget, 0,
/*1864*/        OPC_EmitConvertToTarget, 2,
/*1866*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVICCri), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
                // Src: (SPselecticc:i32 (imm:i32)<<P:Predicate_simm11>>:$F, i32:i32:$T, (imm:i32):$cc) - Complexity = 10
                // Dst: (MOVICCri:i32 i32:i32:$T, (imm:i32):$F, (imm:i32):$cc)
/*1876*/      /*Scope*/ 16, /*->1893*/
/*1877*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*1879*/        OPC_EmitConvertToTarget, 0,
/*1881*/        OPC_EmitConvertToTarget, 2,
/*1883*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVXCCri), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                // Src: (SPselecticc:i32 (imm:i32)<<P:Predicate_simm11>>:$i, i32:i32:$f, (imm:i32):$cond) - Complexity = 10
                // Dst: (MOVXCCri:i32 (imm:i32):$i, i32:i32:$f, (imm:i32):$cond)
/*1893*/      0, /*End of Scope*/
/*1894*/    /*Scope*/ 106, /*->2001*/
/*1895*/      OPC_RecordChild1, // #1 = $T
/*1896*/      OPC_RecordChild2, // #2 = $cc
/*1897*/      OPC_MoveChild, 2,
/*1899*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1902*/      OPC_MoveParent,
/*1903*/      OPC_SwitchType /*3 cases */, 30,  MVT::i32,// ->1936
/*1906*/        OPC_Scope, 14, /*->1922*/ // 2 children in Scope
/*1908*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*1910*/          OPC_EmitConvertToTarget, 2,
/*1912*/          OPC_MorphNodeTo, TARGET_VAL(SP::MOVICCrr), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 3, 
                  // Src: (SPselecticc:i32 i32:i32:$F, i32:i32:$T, (imm:i32):$cc) - Complexity = 6
                  // Dst: (MOVICCrr:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$cc)
/*1922*/        /*Scope*/ 12, /*->1935*/
/*1923*/          OPC_EmitConvertToTarget, 2,
/*1925*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_Int_ICC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_Int_ICC:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond)
/*1935*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f32,// ->1968
/*1938*/        OPC_Scope, 14, /*->1954*/ // 2 children in Scope
/*1940*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*1942*/          OPC_EmitConvertToTarget, 2,
/*1944*/          OPC_MorphNodeTo, TARGET_VAL(SP::FMOVS_ICC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 3, 
                  // Src: (SPselecticc:f32 f32:f32:$F, f32:f32:$T, (imm:i32):$cc) - Complexity = 6
                  // Dst: (FMOVS_ICC:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$cc)
/*1954*/        /*Scope*/ 12, /*->1967*/
/*1955*/          OPC_EmitConvertToTarget, 2,
/*1957*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_FP_ICC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_FP_ICC:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond)
/*1967*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->2000
/*1970*/        OPC_Scope, 14, /*->1986*/ // 2 children in Scope
/*1972*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*1974*/          OPC_EmitConvertToTarget, 2,
/*1976*/          OPC_MorphNodeTo, TARGET_VAL(SP::FMOVD_ICC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 3, 
                  // Src: (SPselecticc:f64 f64:f64:$F, f64:f64:$T, (imm:i32):$cc) - Complexity = 6
                  // Dst: (FMOVD_ICC:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$cc)
/*1986*/        /*Scope*/ 12, /*->1999*/
/*1987*/          OPC_EmitConvertToTarget, 2,
/*1989*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_DFP_ICC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_DFP_ICC:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond)
/*1999*/        0, /*End of Scope*/
              0, // EndSwitchType
/*2001*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 18|128,1/*146*/,  TARGET_VAL(SPISD::SELECT_FCC),// ->2152
/*2006*/    OPC_CaptureGlueInput,
/*2007*/    OPC_RecordChild0, // #0 = $F
/*2008*/    OPC_Scope, 34, /*->2044*/ // 2 children in Scope
/*2010*/      OPC_MoveChild, 0,
/*2012*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2015*/      OPC_CheckPredicate, 23, // Predicate_simm11
/*2017*/      OPC_MoveParent,
/*2018*/      OPC_RecordChild1, // #1 = $T
/*2019*/      OPC_RecordChild2, // #2 = $cc
/*2020*/      OPC_MoveChild, 2,
/*2022*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2025*/      OPC_MoveParent,
/*2026*/      OPC_CheckType, MVT::i32,
/*2028*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*2030*/      OPC_EmitConvertToTarget, 0,
/*2032*/      OPC_EmitConvertToTarget, 2,
/*2034*/      OPC_MorphNodeTo, TARGET_VAL(SP::MOVFCCri), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (SPselectfcc:i32 (imm:i32)<<P:Predicate_simm11>>:$F, i32:i32:$T, (imm:i32):$cc) - Complexity = 10
              // Dst: (MOVFCCri:i32 i32:i32:$T, (imm:i32):$F, (imm:i32):$cc)
/*2044*/    /*Scope*/ 106, /*->2151*/
/*2045*/      OPC_RecordChild1, // #1 = $T
/*2046*/      OPC_RecordChild2, // #2 = $cc
/*2047*/      OPC_MoveChild, 2,
/*2049*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2052*/      OPC_MoveParent,
/*2053*/      OPC_SwitchType /*3 cases */, 30,  MVT::i32,// ->2086
/*2056*/        OPC_Scope, 14, /*->2072*/ // 2 children in Scope
/*2058*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*2060*/          OPC_EmitConvertToTarget, 2,
/*2062*/          OPC_MorphNodeTo, TARGET_VAL(SP::MOVFCCrr), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 3, 
                  // Src: (SPselectfcc:i32 i32:i32:$F, i32:i32:$T, (imm:i32):$cc) - Complexity = 6
                  // Dst: (MOVFCCrr:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$cc)
/*2072*/        /*Scope*/ 12, /*->2085*/
/*2073*/          OPC_EmitConvertToTarget, 2,
/*2075*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_Int_FCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_Int_FCC:i32 i32:i32:$T, i32:i32:$F, (imm:i32):$Cond)
/*2085*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f32,// ->2118
/*2088*/        OPC_Scope, 14, /*->2104*/ // 2 children in Scope
/*2090*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*2092*/          OPC_EmitConvertToTarget, 2,
/*2094*/          OPC_MorphNodeTo, TARGET_VAL(SP::FMOVS_FCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 3, 
                  // Src: (SPselectfcc:f32 f32:f32:$F, f32:f32:$T, (imm:i32):$cc) - Complexity = 6
                  // Dst: (FMOVS_FCC:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$cc)
/*2104*/        /*Scope*/ 12, /*->2117*/
/*2105*/          OPC_EmitConvertToTarget, 2,
/*2107*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_FP_FCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_FP_FCC:f32 f32:f32:$T, f32:f32:$F, (imm:i32):$Cond)
/*2117*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->2150
/*2120*/        OPC_Scope, 14, /*->2136*/ // 2 children in Scope
/*2122*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*2124*/          OPC_EmitConvertToTarget, 2,
/*2126*/          OPC_MorphNodeTo, TARGET_VAL(SP::FMOVD_FCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 3, 
                  // Src: (SPselectfcc:f64 f64:f64:$F, f64:f64:$T, (imm:i32):$cc) - Complexity = 6
                  // Dst: (FMOVD_FCC:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$cc)
/*2136*/        /*Scope*/ 12, /*->2149*/
/*2137*/          OPC_EmitConvertToTarget, 2,
/*2139*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_DFP_FCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_DFP_FCC:f64 f64:f64:$T, f64:f64:$F, (imm:i32):$Cond)
/*2149*/        0, /*End of Scope*/
              0, // EndSwitchType
/*2151*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(SPISD::SELECT_XCC),// ->2238
/*2155*/    OPC_CaptureGlueInput,
/*2156*/    OPC_RecordChild0, // #0 = $t
/*2157*/    OPC_Scope, 35, /*->2194*/ // 2 children in Scope
/*2159*/      OPC_MoveChild, 0,
/*2161*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2164*/      OPC_CheckPredicate, 23, // Predicate_simm11
/*2166*/      OPC_MoveParent,
/*2167*/      OPC_RecordChild1, // #1 = $f
/*2168*/      OPC_RecordChild2, // #2 = $cond
/*2169*/      OPC_MoveChild, 2,
/*2171*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2174*/      OPC_MoveParent,
/*2175*/      OPC_CheckType, MVT::i64,
/*2177*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2179*/      OPC_EmitNodeXForm, 0, 0, // as_i32imm
/*2182*/      OPC_EmitConvertToTarget, 2,
/*2184*/      OPC_MorphNodeTo, TARGET_VAL(SP::MOVXCCri), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 1, 4, 
              // Src: (SPselectxcc:i64 (imm:i64)<<P:Predicate_simm11>>:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 10
              // Dst: (MOVXCCri:i64 (as_i32imm:i32 ?:i64:$t), ?:i64:$f, (imm:i32):$cond)
/*2194*/    /*Scope*/ 42, /*->2237*/
/*2195*/      OPC_RecordChild1, // #1 = $f
/*2196*/      OPC_RecordChild2, // #2 = $cond
/*2197*/      OPC_MoveChild, 2,
/*2199*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2202*/      OPC_MoveParent,
/*2203*/      OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->2220
/*2206*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2208*/        OPC_EmitConvertToTarget, 2,
/*2210*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVXCCrr), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (SPselectxcc:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cond) - Complexity = 6
                // Dst: (MOVXCCrr:i32 i32:i32:$rs2, i32:i32:$f, (imm:i32):$cond)
              /*SwitchType*/ 14,  MVT::i64,// ->2236
/*2222*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2224*/        OPC_EmitConvertToTarget, 2,
/*2226*/        OPC_MorphNodeTo, TARGET_VAL(SP::MOVXCCrr), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
                // Src: (SPselectxcc:i64 i64:i64:$t, i64:i64:$f, (imm:i32):$cond) - Complexity = 6
                // Dst: (MOVXCCrr:i64 ?:i64:$t, ?:i64:$f, (imm:i32):$cond)
              0, // EndSwitchType
/*2237*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::CALLSEQ_END),// ->2266
/*2241*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*2242*/    OPC_CaptureGlueInput,
/*2243*/    OPC_RecordChild1, // #1 = $amt1
/*2244*/    OPC_MoveChild, 1,
/*2246*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*2249*/    OPC_MoveParent,
/*2250*/    OPC_RecordChild2, // #2 = $amt2
/*2251*/    OPC_MoveChild, 2,
/*2253*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*2256*/    OPC_MoveParent,
/*2257*/    OPC_EmitMergeInputChains1_0,
/*2258*/    OPC_MorphNodeTo, TARGET_VAL(SP::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FrameIndex),// ->2284
/*2269*/    OPC_RecordNode,   // #0 = $addr
/*2270*/    OPC_CheckType, MVT::i32,
/*2272*/    OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectADDRri:$addr #1 #2
/*2275*/    OPC_MorphNodeTo, TARGET_VAL(SP::LEA_ADDri), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: ADDRri:i32:$addr - Complexity = 9
            // Dst: (LEA_ADDri:i32 ADDRri:i32:$addr)
          /*SwitchOpcode*/ 26|128,1/*154*/,  TARGET_VAL(ISD::ADD),// ->2442
/*2288*/    OPC_Scope, 39, /*->2329*/ // 3 children in Scope
/*2290*/      OPC_RecordChild0, // #0 = $r
/*2291*/      OPC_MoveChild, 1,
/*2293*/      OPC_CheckOpcode, TARGET_VAL(SPISD::Lo),
/*2296*/      OPC_RecordChild0, // #1 = $in
/*2297*/      OPC_MoveChild, 0,
/*2299*/      OPC_SwitchOpcode /*2 cases */, 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->2314
/*2303*/        OPC_MoveParent,
/*2304*/        OPC_MoveParent,
/*2305*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                    1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 0, 1, 
                // Src: (add:iPTR iPTR:iPTR:$r, (SPlo:iPTR (tglobaladdr:iPTR):$in)) - Complexity = 9
                // Dst: (ADDri:iPTR ?:iPTR:$r, (tglobaladdr:i32):$in)
              /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetConstantPool),// ->2328
/*2317*/        OPC_MoveParent,
/*2318*/        OPC_MoveParent,
/*2319*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                    1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 0, 1, 
                // Src: (add:iPTR iPTR:iPTR:$r, (SPlo:iPTR (tconstpool:iPTR):$in)) - Complexity = 9
                // Dst: (ADDri:iPTR ?:iPTR:$r, (tconstpool:i32):$in)
              0, // EndSwitchOpcode
/*2329*/    /*Scope*/ 40, /*->2370*/
/*2330*/      OPC_MoveChild, 0,
/*2332*/      OPC_CheckOpcode, TARGET_VAL(SPISD::Lo),
/*2335*/      OPC_RecordChild0, // #0 = $in
/*2336*/      OPC_MoveChild, 0,
/*2338*/      OPC_SwitchOpcode /*2 cases */, 12,  TARGET_VAL(ISD::TargetConstantPool),// ->2354
/*2342*/        OPC_MoveParent,
/*2343*/        OPC_MoveParent,
/*2344*/        OPC_RecordChild1, // #1 = $r
/*2345*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                    1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
                // Src: (add:iPTR (SPlo:iPTR (tconstpool:iPTR):$in), iPTR:iPTR:$r) - Complexity = 9
                // Dst: (ADDri:iPTR ?:iPTR:$r, (tconstpool:i32):$in)
              /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetGlobalAddress),// ->2369
/*2357*/        OPC_MoveParent,
/*2358*/        OPC_MoveParent,
/*2359*/        OPC_RecordChild1, // #1 = $r
/*2360*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                    1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
                // Src: (add:iPTR (SPlo:iPTR (tglobaladdr:iPTR):$in), iPTR:iPTR:$r) - Complexity = 9
                // Dst: (ADDri:iPTR ?:iPTR:$r, (tglobaladdr:i32):$in)
              0, // EndSwitchOpcode
/*2370*/    /*Scope*/ 70, /*->2441*/
/*2371*/      OPC_RecordChild0, // #0 = $b
/*2372*/      OPC_RecordChild1, // #1 = $c
/*2373*/      OPC_Scope, 39, /*->2414*/ // 3 children in Scope
/*2375*/        OPC_MoveChild, 1,
/*2377*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2380*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*2382*/        OPC_MoveParent,
/*2383*/        OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->2397
/*2386*/          OPC_EmitConvertToTarget, 1,
/*2388*/          OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                  // Dst: (ADDri:i32 i32:i32:$b, (imm:i32):$c)
                /*SwitchType*/ 14,  MVT::i64,// ->2413
/*2399*/          OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2401*/          OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*2404*/          OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i64 i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                  // Dst: (ADDri:i64 ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
                0, // EndSwitchType
/*2414*/      /*Scope*/ 11, /*->2426*/
/*2415*/        OPC_CheckType, MVT::i32,
/*2417*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (ADDrr:i32 i32:i32:$b, i32:i32:$c)
/*2426*/      /*Scope*/ 13, /*->2440*/
/*2427*/        OPC_CheckType, MVT::i64,
/*2429*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2431*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (add:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
                // Dst: (ADDrr:i64 ?:i64:$a, ?:i64:$b)
/*2440*/      0, /*End of Scope*/
/*2441*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 21,  TARGET_VAL(SPISD::RET_FLAG),// ->2466
/*2445*/    OPC_RecordNode,   // #0 = 'retflag' chained node
/*2446*/    OPC_CaptureGlueInput,
/*2447*/    OPC_RecordChild1, // #1 = $val
/*2448*/    OPC_MoveChild, 1,
/*2450*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2453*/    OPC_CheckPredicate, 22, // Predicate_simm13
/*2455*/    OPC_MoveParent,
/*2456*/    OPC_EmitMergeInputChains1_0,
/*2457*/    OPC_EmitConvertToTarget, 1,
/*2459*/    OPC_MorphNodeTo, TARGET_VAL(SP::RETL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                0/*#VTs*/, 1/*#Ops*/, 2, 
            // Src: (retflag (imm:i32)<<P:Predicate_simm13>>:$val) - Complexity = 7
            // Dst: (RETL (imm:i32):$val)
          /*SwitchOpcode*/ 77,  TARGET_VAL(ISD::SHL),// ->2546
/*2469*/    OPC_RecordChild0, // #0 = $b
/*2470*/    OPC_RecordChild1, // #1 = $c
/*2471*/    OPC_Scope, 43, /*->2516*/ // 2 children in Scope
/*2473*/      OPC_MoveChild, 1,
/*2475*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2478*/      OPC_CheckType, MVT::i32,
/*2480*/      OPC_Scope, 16, /*->2498*/ // 2 children in Scope
/*2482*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*2484*/        OPC_MoveParent,
/*2485*/        OPC_CheckType, MVT::i32,
/*2487*/        OPC_EmitConvertToTarget, 1,
/*2489*/        OPC_MorphNodeTo, TARGET_VAL(SP::SLLri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (SLLri:i32 i32:i32:$b, (imm:i32):$c)
/*2498*/      /*Scope*/ 16, /*->2515*/
/*2499*/        OPC_MoveParent,
/*2500*/        OPC_CheckType, MVT::i64,
/*2502*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2504*/        OPC_EmitConvertToTarget, 1,
/*2506*/        OPC_MorphNodeTo, TARGET_VAL(SP::SLLXri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i64 i64:i64:$rs, (imm:i32):$shcnt) - Complexity = 6
                // Dst: (SLLXri:i64 i64:i64:$rs, (imm:i32):$shcnt)
/*2515*/      0, /*End of Scope*/
/*2516*/    /*Scope*/ 28, /*->2545*/
/*2517*/      OPC_CheckChild1Type, MVT::i32,
/*2519*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->2531
/*2522*/        OPC_MorphNodeTo, TARGET_VAL(SP::SLLrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (SLLrr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->2544
/*2533*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2535*/        OPC_MorphNodeTo, TARGET_VAL(SP::SLLXrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i64 i64:i64:$rs, i32:i32:$rs2) - Complexity = 3
                // Dst: (SLLXrr:i64 i64:i64:$rs, i32:i32:$rs2)
              0, // EndSwitchType
/*2545*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 77,  TARGET_VAL(ISD::SRL),// ->2626
/*2549*/    OPC_RecordChild0, // #0 = $b
/*2550*/    OPC_RecordChild1, // #1 = $c
/*2551*/    OPC_Scope, 43, /*->2596*/ // 2 children in Scope
/*2553*/      OPC_MoveChild, 1,
/*2555*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2558*/      OPC_CheckType, MVT::i32,
/*2560*/      OPC_Scope, 16, /*->2578*/ // 2 children in Scope
/*2562*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*2564*/        OPC_MoveParent,
/*2565*/        OPC_CheckType, MVT::i32,
/*2567*/        OPC_EmitConvertToTarget, 1,
/*2569*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRLri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (SRLri:i32 i32:i32:$b, (imm:i32):$c)
/*2578*/      /*Scope*/ 16, /*->2595*/
/*2579*/        OPC_MoveParent,
/*2580*/        OPC_CheckType, MVT::i64,
/*2582*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2584*/        OPC_EmitConvertToTarget, 1,
/*2586*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRLXri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i64 i64:i64:$rs, (imm:i32):$shcnt) - Complexity = 6
                // Dst: (SRLXri:i64 i64:i64:$rs, (imm:i32):$shcnt)
/*2595*/      0, /*End of Scope*/
/*2596*/    /*Scope*/ 28, /*->2625*/
/*2597*/      OPC_CheckChild1Type, MVT::i32,
/*2599*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->2611
/*2602*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRLrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (SRLrr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->2624
/*2613*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2615*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRLXrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i64 i64:i64:$rs, i32:i32:$rs2) - Complexity = 3
                // Dst: (SRLXrr:i64 i64:i64:$rs, i32:i32:$rs2)
              0, // EndSwitchType
/*2625*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 77,  TARGET_VAL(ISD::SRA),// ->2706
/*2629*/    OPC_RecordChild0, // #0 = $b
/*2630*/    OPC_RecordChild1, // #1 = $c
/*2631*/    OPC_Scope, 43, /*->2676*/ // 2 children in Scope
/*2633*/      OPC_MoveChild, 1,
/*2635*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2638*/      OPC_CheckType, MVT::i32,
/*2640*/      OPC_Scope, 16, /*->2658*/ // 2 children in Scope
/*2642*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*2644*/        OPC_MoveParent,
/*2645*/        OPC_CheckType, MVT::i32,
/*2647*/        OPC_EmitConvertToTarget, 1,
/*2649*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRAri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (SRAri:i32 i32:i32:$b, (imm:i32):$c)
/*2658*/      /*Scope*/ 16, /*->2675*/
/*2659*/        OPC_MoveParent,
/*2660*/        OPC_CheckType, MVT::i64,
/*2662*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2664*/        OPC_EmitConvertToTarget, 1,
/*2666*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRAXri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i64 i64:i64:$rs, (imm:i32):$shcnt) - Complexity = 6
                // Dst: (SRAXri:i64 i64:i64:$rs, (imm:i32):$shcnt)
/*2675*/      0, /*End of Scope*/
/*2676*/    /*Scope*/ 28, /*->2705*/
/*2677*/      OPC_CheckChild1Type, MVT::i32,
/*2679*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->2691
/*2682*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRArr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
                // Dst: (SRArr:i32 i32:i32:$b, i32:i32:$c)
              /*SwitchType*/ 11,  MVT::i64,// ->2704
/*2693*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2695*/        OPC_MorphNodeTo, TARGET_VAL(SP::SRAXrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i64 i64:i64:$rs, i32:i32:$rs2) - Complexity = 3
                // Dst: (SRAXrr:i64 i64:i64:$rs, i32:i32:$rs2)
              0, // EndSwitchType
/*2705*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 52,  TARGET_VAL(ISD::ADDC),// ->2761
/*2709*/    OPC_RecordChild0, // #0 = $b
/*2710*/    OPC_RecordChild1, // #1 = $c
/*2711*/    OPC_Scope, 21, /*->2734*/ // 3 children in Scope
/*2713*/      OPC_MoveChild, 1,
/*2715*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2718*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*2720*/      OPC_MoveParent,
/*2721*/      OPC_CheckType, MVT::i32,
/*2723*/      OPC_EmitConvertToTarget, 1,
/*2725*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDCCri), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (addc:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
              // Dst: (ADDCCri:i32 i32:i32:$b, (imm:i32):$c)
/*2734*/    /*Scope*/ 11, /*->2746*/
/*2735*/      OPC_CheckType, MVT::i32,
/*2737*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDCCrr), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
              // Dst: (ADDCCrr:i32 i32:i32:$b, i32:i32:$c)
/*2746*/    /*Scope*/ 13, /*->2760*/
/*2747*/      OPC_CheckType, MVT::i64,
/*2749*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2751*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDCCrr), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
              // Dst: (ADDCCrr:i64 ?:i64:$a, ?:i64:$b)
/*2760*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::ADDE),// ->2817
/*2764*/    OPC_CaptureGlueInput,
/*2765*/    OPC_RecordChild0, // #0 = $b
/*2766*/    OPC_RecordChild1, // #1 = $c
/*2767*/    OPC_Scope, 21, /*->2790*/ // 3 children in Scope
/*2769*/      OPC_MoveChild, 1,
/*2771*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2774*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*2776*/      OPC_MoveParent,
/*2777*/      OPC_CheckType, MVT::i32,
/*2779*/      OPC_EmitConvertToTarget, 1,
/*2781*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDXri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (adde:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
              // Dst: (ADDXri:i32 i32:i32:$b, (imm:i32):$c)
/*2790*/    /*Scope*/ 11, /*->2802*/
/*2791*/      OPC_CheckType, MVT::i32,
/*2793*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDXrr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (adde:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
              // Dst: (ADDXrr:i32 i32:i32:$b, i32:i32:$c)
/*2802*/    /*Scope*/ 13, /*->2816*/
/*2803*/      OPC_CheckType, MVT::i64,
/*2805*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2807*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDXrr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (adde:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
              // Dst: (ADDXrr:i64 ?:i64:$a, ?:i64:$b)
/*2816*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 70,  TARGET_VAL(ISD::SUB),// ->2890
/*2820*/    OPC_RecordChild0, // #0 = $b
/*2821*/    OPC_RecordChild1, // #1 = $c
/*2822*/    OPC_Scope, 39, /*->2863*/ // 3 children in Scope
/*2824*/      OPC_MoveChild, 1,
/*2826*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2829*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*2831*/      OPC_MoveParent,
/*2832*/      OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->2846
/*2835*/        OPC_EmitConvertToTarget, 1,
/*2837*/        OPC_MorphNodeTo, TARGET_VAL(SP::SUBri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sub:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (SUBri:i32 i32:i32:$b, (imm:i32):$c)
              /*SwitchType*/ 14,  MVT::i64,// ->2862
/*2848*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2850*/        OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*2853*/        OPC_MorphNodeTo, TARGET_VAL(SP::SUBri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (sub:i64 i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                // Dst: (SUBri:i64 ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
              0, // EndSwitchType
/*2863*/    /*Scope*/ 11, /*->2875*/
/*2864*/      OPC_CheckType, MVT::i32,
/*2866*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sub:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
              // Dst: (SUBrr:i32 i32:i32:$b, i32:i32:$c)
/*2875*/    /*Scope*/ 13, /*->2889*/
/*2876*/      OPC_CheckType, MVT::i64,
/*2878*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2880*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sub:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
              // Dst: (SUBrr:i64 ?:i64:$a, ?:i64:$b)
/*2889*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::SUBE),// ->2946
/*2893*/    OPC_CaptureGlueInput,
/*2894*/    OPC_RecordChild0, // #0 = $b
/*2895*/    OPC_RecordChild1, // #1 = $c
/*2896*/    OPC_Scope, 21, /*->2919*/ // 3 children in Scope
/*2898*/      OPC_MoveChild, 1,
/*2900*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2903*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*2905*/      OPC_MoveParent,
/*2906*/      OPC_CheckType, MVT::i32,
/*2908*/      OPC_EmitConvertToTarget, 1,
/*2910*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBXri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (sube:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
              // Dst: (SUBXri:i32 i32:i32:$b, (imm:i32):$c)
/*2919*/    /*Scope*/ 11, /*->2931*/
/*2920*/      OPC_CheckType, MVT::i32,
/*2922*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBXrr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sube:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
              // Dst: (SUBXrr:i32 i32:i32:$b, i32:i32:$c)
/*2931*/    /*Scope*/ 13, /*->2945*/
/*2932*/      OPC_CheckType, MVT::i64,
/*2934*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2936*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBXrr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sube:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
              // Dst: (SUBXrr:i64 ?:i64:$a, ?:i64:$b)
/*2945*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 70,  TARGET_VAL(SPISD::CMPICC),// ->3019
/*2949*/    OPC_RecordChild0, // #0 = $b
/*2950*/    OPC_RecordChild1, // #1 = $c
/*2951*/    OPC_Scope, 39, /*->2992*/ // 3 children in Scope
/*2953*/      OPC_MoveChild, 1,
/*2955*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2958*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*2960*/      OPC_MoveParent,
/*2961*/      OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->2975
/*2964*/        OPC_EmitConvertToTarget, 1,
/*2966*/        OPC_MorphNodeTo, TARGET_VAL(SP::SUBCCri), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (SPcmpicc:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (SUBCCri:i32 i32:i32:$b, (imm:i32):$c)
              /*SwitchType*/ 14,  MVT::i64,// ->2991
/*2977*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*2979*/        OPC_EmitNodeXForm, 0, 1, // as_i32imm
/*2982*/        OPC_MorphNodeTo, TARGET_VAL(SP::SUBCCri), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (SPcmpicc:i64 i64:i64:$a, (imm:i64)<<P:Predicate_simm13>>:$b) - Complexity = 7
                // Dst: (SUBCCri:i64 ?:i64:$a, (as_i32imm:i32 ?:i64:$b))
              0, // EndSwitchType
/*2992*/    /*Scope*/ 11, /*->3004*/
/*2993*/      OPC_CheckType, MVT::i32,
/*2995*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBCCrr), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (SPcmpicc:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
              // Dst: (SUBCCrr:i32 i32:i32:$b, i32:i32:$c)
/*3004*/    /*Scope*/ 13, /*->3018*/
/*3005*/      OPC_CheckType, MVT::i64,
/*3007*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3009*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBCCrr), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (SPcmpicc:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
              // Dst: (SUBCCrr:i64 ?:i64:$a, ?:i64:$b)
/*3018*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::MUL),// ->3091
/*3022*/    OPC_RecordChild0, // #0 = $b
/*3023*/    OPC_RecordChild1, // #1 = $c
/*3024*/    OPC_Scope, 38, /*->3064*/ // 3 children in Scope
/*3026*/      OPC_MoveChild, 1,
/*3028*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3031*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3033*/      OPC_MoveParent,
/*3034*/      OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->3048
/*3037*/        OPC_EmitConvertToTarget, 1,
/*3039*/        OPC_MorphNodeTo, TARGET_VAL(SP::SMULri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (mul:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (SMULri:i32 i32:i32:$b, (imm:i32):$c)
              /*SwitchType*/ 13,  MVT::i64,// ->3063
/*3050*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3052*/        OPC_EmitConvertToTarget, 1,
/*3054*/        OPC_MorphNodeTo, TARGET_VAL(SP::MULXri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (mul:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$i) - Complexity = 7
                // Dst: (MULXri:i64 i64:i64:$rs1, (imm:i64):$i)
              0, // EndSwitchType
/*3064*/    /*Scope*/ 11, /*->3076*/
/*3065*/      OPC_CheckType, MVT::i32,
/*3067*/      OPC_MorphNodeTo, TARGET_VAL(SP::SMULrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
              // Dst: (SMULrr:i32 i32:i32:$b, i32:i32:$c)
/*3076*/    /*Scope*/ 13, /*->3090*/
/*3077*/      OPC_CheckType, MVT::i64,
/*3079*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3081*/      OPC_MorphNodeTo, TARGET_VAL(SP::MULXrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
              // Dst: (MULXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*3090*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 52,  TARGET_VAL(ISD::SUBC),// ->3146
/*3094*/    OPC_RecordChild0, // #0 = $b
/*3095*/    OPC_RecordChild1, // #1 = $val
/*3096*/    OPC_Scope, 21, /*->3119*/ // 3 children in Scope
/*3098*/      OPC_MoveChild, 1,
/*3100*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3103*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3105*/      OPC_MoveParent,
/*3106*/      OPC_CheckType, MVT::i32,
/*3108*/      OPC_EmitConvertToTarget, 1,
/*3110*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBCCri), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (subc:i32 i32:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$val) - Complexity = 7
              // Dst: (SUBCCri:i32 ?:i32:$b, (imm:i32):$val)
/*3119*/    /*Scope*/ 11, /*->3131*/
/*3120*/      OPC_CheckType, MVT::i32,
/*3122*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBCCrr), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i32 i32:i32:$b, i32:i32:$c) - Complexity = 3
              // Dst: (SUBCCrr:i32 ?:i32:$b, ?:i32:$c)
/*3131*/    /*Scope*/ 13, /*->3145*/
/*3132*/      OPC_CheckType, MVT::i64,
/*3134*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3136*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBCCrr), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i64 i64:i64:$a, i64:i64:$b) - Complexity = 3
              // Dst: (SUBCCrr:i64 ?:i64:$a, ?:i64:$b)
/*3145*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(ISD::SDIV),// ->3191
/*3149*/    OPC_RecordChild0, // #0 = $rs1
/*3150*/    OPC_RecordChild1, // #1 = $i
/*3151*/    OPC_Scope, 23, /*->3176*/ // 2 children in Scope
/*3153*/      OPC_MoveChild, 1,
/*3155*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3158*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3160*/      OPC_MoveParent,
/*3161*/      OPC_CheckType, MVT::i64,
/*3163*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3165*/      OPC_EmitConvertToTarget, 1,
/*3167*/      OPC_MorphNodeTo, TARGET_VAL(SP::SDIVXri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
              // Src: (sdiv:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$i) - Complexity = 7
              // Dst: (SDIVXri:i64 i64:i64:$rs1, (imm:i64):$i)
/*3176*/    /*Scope*/ 13, /*->3190*/
/*3177*/      OPC_CheckType, MVT::i64,
/*3179*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3181*/      OPC_MorphNodeTo, TARGET_VAL(SP::SDIVXrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
              // Dst: (SDIVXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*3190*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(ISD::UDIV),// ->3236
/*3194*/    OPC_RecordChild0, // #0 = $rs1
/*3195*/    OPC_RecordChild1, // #1 = $i
/*3196*/    OPC_Scope, 23, /*->3221*/ // 2 children in Scope
/*3198*/      OPC_MoveChild, 1,
/*3200*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3203*/      OPC_CheckPredicate, 22, // Predicate_simm13
/*3205*/      OPC_MoveParent,
/*3206*/      OPC_CheckType, MVT::i64,
/*3208*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3210*/      OPC_EmitConvertToTarget, 1,
/*3212*/      OPC_MorphNodeTo, TARGET_VAL(SP::UDIVXri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
              // Src: (udiv:i64 i64:i64:$rs1, (imm:i64)<<P:Predicate_simm13>>:$i) - Complexity = 7
              // Dst: (UDIVXri:i64 i64:i64:$rs1, (imm:i64):$i)
/*3221*/    /*Scope*/ 13, /*->3235*/
/*3222*/      OPC_CheckType, MVT::i64,
/*3224*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3226*/      OPC_MorphNodeTo, TARGET_VAL(SP::UDIVXrr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i64 i64:i64:$rs1, i64:i64:$rs2) - Complexity = 3
              // Dst: (UDIVXrr:i64 i64:i64:$rs1, i64:i64:$rs2)
/*3235*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::FMUL),// ->3292
/*3239*/    OPC_Scope, 23, /*->3264*/ // 2 children in Scope
/*3241*/      OPC_MoveChild, 0,
/*3243*/      OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*3246*/      OPC_RecordChild0, // #0 = $src1
/*3247*/      OPC_MoveParent,
/*3248*/      OPC_MoveChild, 1,
/*3250*/      OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*3253*/      OPC_RecordChild0, // #1 = $src2
/*3254*/      OPC_MoveParent,
/*3255*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSMULD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f64 (fextend:f64 f32:f32:$src1), (fextend:f64 f32:f32:$src2)) - Complexity = 9
              // Dst: (FSMULD:f64 f32:f32:$src1, f32:f32:$src2)
/*3264*/    /*Scope*/ 26, /*->3291*/
/*3265*/      OPC_RecordChild0, // #0 = $src1
/*3266*/      OPC_RecordChild1, // #1 = $src2
/*3267*/      OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->3279
/*3270*/        OPC_MorphNodeTo, TARGET_VAL(SP::FMULS), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f32 f32:f32:$src1, f32:f32:$src2) - Complexity = 3
                // Dst: (FMULS:f32 f32:f32:$src1, f32:f32:$src2)
              /*SwitchType*/ 9,  MVT::f64,// ->3290
/*3281*/        OPC_MorphNodeTo, TARGET_VAL(SP::FMULD), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 f64:f64:$src1, f64:f64:$src2) - Complexity = 3
                // Dst: (FMULD:f64 f64:f64:$src1, f64:f64:$src2)
              0, // EndSwitchType
/*3291*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::CALLSEQ_START),// ->3311
/*3295*/    OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*3296*/    OPC_RecordChild1, // #1 = $amt
/*3297*/    OPC_MoveChild, 1,
/*3299*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3302*/    OPC_MoveParent,
/*3303*/    OPC_EmitMergeInputChains1_0,
/*3304*/    OPC_MorphNodeTo, TARGET_VAL(SP::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN (timm:i32):$amt)
          /*SwitchOpcode*/ 27,  TARGET_VAL(SPISD::BRICC),// ->3341
/*3314*/    OPC_RecordNode,   // #0 = 'SPbricc' chained node
/*3315*/    OPC_CaptureGlueInput,
/*3316*/    OPC_RecordChild1, // #1 = $dst
/*3317*/    OPC_MoveChild, 1,
/*3319*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3322*/    OPC_MoveParent,
/*3323*/    OPC_RecordChild2, // #2 = $cc
/*3324*/    OPC_MoveChild, 2,
/*3326*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3329*/    OPC_MoveParent,
/*3330*/    OPC_EmitMergeInputChains1_0,
/*3331*/    OPC_EmitConvertToTarget, 2,
/*3333*/    OPC_MorphNodeTo, TARGET_VAL(SP::BCOND), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 2/*#Ops*/, 1, 3, 
            // Src: (SPbricc (bb:Other):$dst, (imm:i32):$cc) - Complexity = 6
            // Dst: (BCOND (bb:Other):$dst, (imm:i32):$cc)
          /*SwitchOpcode*/ 27,  TARGET_VAL(SPISD::BRFCC),// ->3371
/*3344*/    OPC_RecordNode,   // #0 = 'SPbrfcc' chained node
/*3345*/    OPC_CaptureGlueInput,
/*3346*/    OPC_RecordChild1, // #1 = $dst
/*3347*/    OPC_MoveChild, 1,
/*3349*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3352*/    OPC_MoveParent,
/*3353*/    OPC_RecordChild2, // #2 = $cc
/*3354*/    OPC_MoveChild, 2,
/*3356*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3359*/    OPC_MoveParent,
/*3360*/    OPC_EmitMergeInputChains1_0,
/*3361*/    OPC_EmitConvertToTarget, 2,
/*3363*/    OPC_MorphNodeTo, TARGET_VAL(SP::FBCOND), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 2/*#Ops*/, 1, 3, 
            // Src: (SPbrfcc (bb:Other):$dst, (imm:i32):$cc) - Complexity = 6
            // Dst: (FBCOND (bb:Other):$dst, (imm:i32):$cc)
          /*SwitchOpcode*/ 29,  TARGET_VAL(SPISD::Hi),// ->3403
/*3374*/    OPC_RecordChild0, // #0 = $in
/*3375*/    OPC_MoveChild, 0,
/*3377*/    OPC_SwitchOpcode /*2 cases */, 9,  TARGET_VAL(ISD::TargetGlobalAddress),// ->3390
/*3381*/      OPC_MoveParent,
/*3382*/      OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::iPTR, 1/*#Ops*/, 0, 
              // Src: (SPhi:iPTR (tglobaladdr:iPTR):$in) - Complexity = 6
              // Dst: (SETHIi:iPTR (tglobaladdr:i32):$in)
            /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::TargetConstantPool),// ->3402
/*3393*/      OPC_MoveParent,
/*3394*/      OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::iPTR, 1/*#Ops*/, 0, 
              // Src: (SPhi:iPTR (tconstpool:iPTR):$in) - Complexity = 6
              // Dst: (SETHIi:iPTR (tconstpool:i32):$in)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 37,  TARGET_VAL(SPISD::Lo),// ->3443
/*3406*/    OPC_RecordChild0, // #0 = $in
/*3407*/    OPC_MoveChild, 0,
/*3409*/    OPC_SwitchOpcode /*2 cases */, 13,  TARGET_VAL(ISD::TargetGlobalAddress),// ->3426
/*3413*/      OPC_MoveParent,
/*3414*/      OPC_EmitRegister, MVT::i32, SP::G0,
/*3417*/      OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                  1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
              // Src: (SPlo:iPTR (tglobaladdr:iPTR):$in) - Complexity = 6
              // Dst: (ORri:iPTR G0:i32, (tglobaladdr:i32):$in)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetConstantPool),// ->3442
/*3429*/      OPC_MoveParent,
/*3430*/      OPC_EmitRegister, MVT::i32, SP::G0,
/*3433*/      OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                  1/*#VTs*/, MVT::iPTR, 2/*#Ops*/, 1, 0, 
              // Src: (SPlo:iPTR (tconstpool:iPTR):$in) - Complexity = 6
              // Dst: (ORri:iPTR G0:i32, (tconstpool:i32):$in)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 29,  TARGET_VAL(SPISD::BRXCC),// ->3475
/*3446*/    OPC_RecordNode,   // #0 = 'SPbrxcc' chained node
/*3447*/    OPC_CaptureGlueInput,
/*3448*/    OPC_RecordChild1, // #1 = $dst
/*3449*/    OPC_MoveChild, 1,
/*3451*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3454*/    OPC_MoveParent,
/*3455*/    OPC_RecordChild2, // #2 = $cc
/*3456*/    OPC_MoveChild, 2,
/*3458*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3461*/    OPC_MoveParent,
/*3462*/    OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3464*/    OPC_EmitMergeInputChains1_0,
/*3465*/    OPC_EmitConvertToTarget, 2,
/*3467*/    OPC_MorphNodeTo, TARGET_VAL(SP::BPXCC), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 2/*#Ops*/, 1, 3, 
            // Src: (SPbrxcc (bb:Other):$dst, (imm:i32):$cc) - Complexity = 6
            // Dst: (BPXCC (bb:Other):$dst, (imm:i32):$cc)
          /*SwitchOpcode*/ 126|128,1/*254*/,  TARGET_VAL(ISD::Constant),// ->3733
/*3479*/    OPC_Scope, 12, /*->3493*/ // 2 children in Scope
/*3481*/      OPC_CheckInteger, 0, 
/*3483*/      OPC_CheckType, MVT::i64,
/*3485*/      OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3487*/      OPC_EmitRegister, MVT::i64, SP::G0,
/*3490*/      OPC_CompleteMatch, 1, 0, 
              // Src: 0:i64 - Complexity = 5
              // Dst: G0:i64
/*3493*/    /*Scope*/ 109|128,1/*237*/, /*->3732*/
/*3495*/      OPC_RecordNode, // #0 = $src
/*3496*/      OPC_Scope, 17, /*->3515*/ // 7 children in Scope
/*3498*/        OPC_CheckPredicate, 24, // Predicate_SETHIimm
/*3500*/        OPC_CheckType, MVT::i32,
/*3502*/        OPC_EmitConvertToTarget, 0,
/*3504*/        OPC_EmitNodeXForm, 1, 1, // HI22
/*3507*/        OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_SETHIimm>><<X:HI22>>:$src - Complexity = 4
                // Dst: (SETHIi:i32 (HI22:i32 (imm:i32):$src))
/*3515*/      /*Scope*/ 37, /*->3553*/
/*3516*/        OPC_CheckPredicate, 22, // Predicate_simm13
/*3518*/        OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->3535
/*3521*/          OPC_EmitRegister, MVT::i32, SP::G0,
/*3524*/          OPC_EmitConvertToTarget, 0,
/*3526*/          OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (imm:i32)<<P:Predicate_simm13>>:$val - Complexity = 4
                  // Dst: (ORri:i32 G0:i32, (imm:i32):$val)
                /*SwitchType*/ 15,  MVT::i64,// ->3552
/*3537*/          OPC_EmitRegister, MVT::i64, SP::G0,
/*3540*/          OPC_EmitNodeXForm, 0, 0, // as_i32imm
/*3543*/          OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                  // Src: (imm:i64)<<P:Predicate_simm13>>:$val - Complexity = 4
                  // Dst: (ORri:i64 G0:i64, (as_i32imm:i32 ?:i64:$val))
                0, // EndSwitchType
/*3553*/      /*Scope*/ 15, /*->3569*/
/*3554*/        OPC_CheckPredicate, 24, // Predicate_SETHIimm
/*3556*/        OPC_CheckType, MVT::i64,
/*3558*/        OPC_EmitNodeXForm, 1, 0, // HI22
/*3561*/        OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (imm:i64)<<P:Predicate_SETHIimm>><<X:HI22>>:$val - Complexity = 4
                // Dst: (SETHIi:i64 (HI22:i32 ?:i64:$val))
/*3569*/      /*Scope*/ 29, /*->3599*/
/*3570*/        OPC_CheckPredicate, 25, // Predicate_uimm32
/*3572*/        OPC_CheckType, MVT::i64,
/*3574*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3576*/        OPC_EmitNodeXForm, 1, 0, // HI22
/*3579*/        OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*3587*/        OPC_EmitNodeXForm, 2, 0, // LO10
/*3590*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (imm:i64)<<P:Predicate_uimm32>>:$val - Complexity = 4
                // Dst: (ORri:i64 (SETHIi:i32 (HI22:i32 ?:i64:$val)), (LO10:i32 ?:i64:$val))
/*3599*/      /*Scope*/ 29, /*->3629*/
/*3600*/        OPC_CheckPredicate, 26, // Predicate_nimm33
/*3602*/        OPC_CheckType, MVT::i64,
/*3604*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3606*/        OPC_EmitNodeXForm, 3, 0, // HIX22
/*3609*/        OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*3617*/        OPC_EmitNodeXForm, 4, 0, // LOX10
/*3620*/        OPC_MorphNodeTo, TARGET_VAL(SP::XORri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (imm:i64)<<P:Predicate_nimm33>>:$val - Complexity = 4
                // Dst: (XORri:i64 (SETHIi:i32 (HIX22:i32 ?:i64:$val)), (LOX10:i32 ?:i64:$val))
/*3629*/      /*Scope*/ 29, /*->3659*/
/*3630*/        OPC_CheckType, MVT::i32,
/*3632*/        OPC_EmitConvertToTarget, 0,
/*3634*/        OPC_EmitNodeXForm, 1, 1, // HI22
/*3637*/        OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*3645*/        OPC_EmitConvertToTarget, 0,
/*3647*/        OPC_EmitNodeXForm, 2, 4, // LO10
/*3650*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:i32):$val - Complexity = 3
                // Dst: (ORri:i32 (SETHIi:i32 (HI22:i32 (imm:i32):$val)), (LO10:i32 (imm:i32):$val))
/*3659*/      /*Scope*/ 71, /*->3731*/
/*3660*/        OPC_CheckType, MVT::i64,
/*3662*/        OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3664*/        OPC_EmitNodeXForm, 5, 0, // HH22
/*3667*/        OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*3675*/        OPC_EmitNodeXForm, 6, 0, // HM10
/*3678*/        OPC_EmitNode, TARGET_VAL(SP::ORri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3,  // Results = #4
/*3687*/        OPC_EmitInteger, MVT::i32, 32, 
/*3690*/        OPC_EmitNode, TARGET_VAL(SP::SLLXri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 4, 5,  // Results = #6
/*3699*/        OPC_EmitNodeXForm, 1, 0, // HI22
/*3702*/        OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*3710*/        OPC_EmitNodeXForm, 2, 0, // LO10
/*3713*/        OPC_EmitNode, TARGET_VAL(SP::ORri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10
/*3722*/        OPC_MorphNodeTo, TARGET_VAL(SP::ORrr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 6, 10, 
                // Src: (imm:i64):$val - Complexity = 3
                // Dst: (ORrr:i64 (SLLXri:i64 (ORri:i64 (SETHIi:i32 (HH22:i32 ?:i64:$val)), (HM10:i32 ?:i64:$val)), 32:i32), (ORri:i32 (SETHIi:i32 (HI22:i32 ?:i64:$val)), (LO10:i32 ?:i64:$val)))
/*3731*/      0, /*End of Scope*/
/*3732*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 21,  TARGET_VAL(SPISD::FLUSHW),// ->3757
/*3736*/    OPC_RecordNode,   // #0 = 'flushw' chained node
/*3737*/    OPC_Scope, 9, /*->3748*/ // 2 children in Scope
/*3739*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*3741*/      OPC_EmitMergeInputChains1_0,
/*3742*/      OPC_MorphNodeTo, TARGET_VAL(SP::FLUSHW), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (flushw) - Complexity = 3
              // Dst: (FLUSHW)
/*3748*/    /*Scope*/ 7, /*->3756*/
/*3749*/      OPC_EmitMergeInputChains1_0,
/*3750*/      OPC_MorphNodeTo, TARGET_VAL(SP::TA3), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (flushw) - Complexity = 3
              // Dst: (TA3)
/*3756*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->3776
/*3760*/    OPC_RecordNode,   // #0 = 'br' chained node
/*3761*/    OPC_RecordChild1, // #1 = $dst
/*3762*/    OPC_MoveChild, 1,
/*3764*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3767*/    OPC_MoveParent,
/*3768*/    OPC_EmitMergeInputChains1_0,
/*3769*/    OPC_MorphNodeTo, TARGET_VAL(SP::BA), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$dst) - Complexity = 3
            // Dst: (BA (bb:Other):$dst)
          /*SwitchOpcode*/ 27,  TARGET_VAL(SPISD::CMPFCC),// ->3806
/*3779*/    OPC_RecordChild0, // #0 = $src1
/*3780*/    OPC_Scope, 11, /*->3793*/ // 2 children in Scope
/*3782*/      OPC_CheckChild0Type, MVT::f32,
/*3784*/      OPC_RecordChild1, // #1 = $src2
/*3785*/      OPC_MorphNodeTo, TARGET_VAL(SP::FCMPS), 0|OPFL_GlueOutput,
                  0/*#VTs*/, 2/*#Ops*/, 0, 1, 
              // Src: (SPcmpfcc f32:f32:$src1, f32:f32:$src2) - Complexity = 3
              // Dst: (FCMPS f32:f32:$src1, f32:f32:$src2)
/*3793*/    /*Scope*/ 11, /*->3805*/
/*3794*/      OPC_CheckChild0Type, MVT::f64,
/*3796*/      OPC_RecordChild1, // #1 = $src2
/*3797*/      OPC_MorphNodeTo, TARGET_VAL(SP::FCMPD), 0|OPFL_GlueOutput,
                  0/*#VTs*/, 2/*#Ops*/, 0, 1, 
              // Src: (SPcmpfcc f64:f64:$src1, f64:f64:$src2) - Complexity = 3
              // Dst: (FCMPD f64:f64:$src1, f64:f64:$src2)
/*3805*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::ANY_EXTEND),// ->3824
/*3809*/    OPC_RecordChild0, // #0 = $val
/*3810*/    OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3812*/    OPC_EmitInteger, MVT::i32, SP::I64RegsRegClassID,
/*3815*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (anyext:i64 i32:i32:$val) - Complexity = 3
            // Dst: (COPY_TO_REGCLASS:i64 ?:i32:$val, I64Regs:i32)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::TRUNCATE),// ->3842
/*3827*/    OPC_RecordChild0, // #0 = $val
/*3828*/    OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3830*/    OPC_EmitInteger, MVT::i32, SP::IntRegsRegClassID,
/*3833*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (trunc:i32 i64:i64:$val) - Complexity = 3
            // Dst: (COPY_TO_REGCLASS:i32 ?:i64:$val, IntRegs:i32)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::ZERO_EXTEND),// ->3860
/*3845*/    OPC_RecordChild0, // #0 = $val
/*3846*/    OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3848*/    OPC_EmitInteger, MVT::i32, 0, 
/*3851*/    OPC_MorphNodeTo, TARGET_VAL(SP::SRLri), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (zext:i64 i32:i32:$val) - Complexity = 3
            // Dst: (SRLri:i64 ?:i32:$val, 0:i32)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::SIGN_EXTEND),// ->3878
/*3863*/    OPC_RecordChild0, // #0 = $val
/*3864*/    OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3866*/    OPC_EmitInteger, MVT::i32, 0, 
/*3869*/    OPC_MorphNodeTo, TARGET_VAL(SP::SRAri), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (sext:i64 i32:i32:$val) - Complexity = 3
            // Dst: (SRAri:i64 ?:i32:$val, 0:i32)
          /*SwitchOpcode*/ 20,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->3901
/*3881*/    OPC_RecordChild0, // #0 = $val
/*3882*/    OPC_MoveChild, 1,
/*3884*/    OPC_CheckValueType, MVT::i32,
/*3886*/    OPC_MoveParent,
/*3887*/    OPC_CheckPatternPredicate, 0, // (Subtarget.is64Bit())
/*3889*/    OPC_EmitInteger, MVT::i32, 0, 
/*3892*/    OPC_MorphNodeTo, TARGET_VAL(SP::SRAri), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (sext_inreg:i64 i64:i64:$val, i32:Other) - Complexity = 3
            // Dst: (SRAri:i64 ?:i64:$val, 0:i32)
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::CTPOP),// ->3927
/*3904*/    OPC_RecordChild0, // #0 = $src
/*3905*/    OPC_CheckType, MVT::i32,
/*3907*/    OPC_EmitInteger, MVT::i32, 0, 
/*3910*/    OPC_EmitNode, TARGET_VAL(SP::SLLri), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*3919*/    OPC_MorphNodeTo, TARGET_VAL(SP::POPCrr), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
            // Src: (ctpop:i32 i32:i32:$src) - Complexity = 3
            // Dst: (POPCrr:i32 (SLLri:i32 ?:i32:$src, 0:i32))
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FNEG),// ->3969
/*3930*/    OPC_RecordChild0, // #0 = $src
/*3931*/    OPC_SwitchType /*2 cases */, 24,  MVT::f64,// ->3958
/*3934*/      OPC_Scope, 10, /*->3946*/ // 2 children in Scope
/*3936*/        OPC_CheckPatternPredicate, 2, // (!Subtarget.isV9())
/*3938*/        OPC_MorphNodeTo, TARGET_VAL(SP::FpNEGD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 f64:f64:$src) - Complexity = 3
                // Dst: (FpNEGD:f64 f64:f64:$src)
/*3946*/      /*Scope*/ 10, /*->3957*/
/*3947*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*3949*/        OPC_MorphNodeTo, TARGET_VAL(SP::FNEGD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 f64:f64:$src) - Complexity = 3
                // Dst: (FNEGD:f64 f64:f64:$src)
/*3957*/      0, /*End of Scope*/
            /*SwitchType*/ 8,  MVT::f32,// ->3968
/*3960*/      OPC_MorphNodeTo, TARGET_VAL(SP::FNEGS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fneg:f32 f32:f32:$src) - Complexity = 3
              // Dst: (FNEGS:f32 f32:f32:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FABS),// ->4011
/*3972*/    OPC_RecordChild0, // #0 = $src
/*3973*/    OPC_SwitchType /*2 cases */, 24,  MVT::f64,// ->4000
/*3976*/      OPC_Scope, 10, /*->3988*/ // 2 children in Scope
/*3978*/        OPC_CheckPatternPredicate, 2, // (!Subtarget.isV9())
/*3980*/        OPC_MorphNodeTo, TARGET_VAL(SP::FpABSD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fabs:f64 f64:f64:$src) - Complexity = 3
                // Dst: (FpABSD:f64 f64:f64:$src)
/*3988*/      /*Scope*/ 10, /*->3999*/
/*3989*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isV9())
/*3991*/        OPC_MorphNodeTo, TARGET_VAL(SP::FABSD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fabs:f64 f64:f64:$src) - Complexity = 3
                // Dst: (FABSD:f64 f64:f64:$src)
/*3999*/      0, /*End of Scope*/
            /*SwitchType*/ 8,  MVT::f32,// ->4010
/*4002*/      OPC_MorphNodeTo, TARGET_VAL(SP::FABSS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 f32:f32:$src) - Complexity = 3
              // Dst: (FABSS:f32 f32:f32:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(SPISD::ITOF),// ->4037
/*4014*/    OPC_RecordChild0, // #0 = $src
/*4015*/    OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->4026
/*4018*/      OPC_MorphNodeTo, TARGET_VAL(SP::FITOS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (SPitof:f32 FPRegs:f32:$src) - Complexity = 3
              // Dst: (FITOS:f32 FPRegs:f32:$src)
            /*SwitchType*/ 8,  MVT::f64,// ->4036
/*4028*/      OPC_MorphNodeTo, TARGET_VAL(SP::FITOD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (SPitof:f64 FPRegs:f32:$src) - Complexity = 3
              // Dst: (FITOD:f64 FPRegs:f32:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 25,  TARGET_VAL(SPISD::FTOI),// ->4065
/*4040*/    OPC_RecordChild0, // #0 = $src
/*4041*/    OPC_Scope, 10, /*->4053*/ // 2 children in Scope
/*4043*/      OPC_CheckChild0Type, MVT::f32,
/*4045*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSTOI), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (SPftoi:f32 FPRegs:f32:$src) - Complexity = 3
              // Dst: (FSTOI:f32 FPRegs:f32:$src)
/*4053*/    /*Scope*/ 10, /*->4064*/
/*4054*/      OPC_CheckChild0Type, MVT::f64,
/*4056*/      OPC_MorphNodeTo, TARGET_VAL(SP::FDTOI), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (SPftoi:f32 DFPRegs:f64:$src) - Complexity = 3
              // Dst: (FDTOI:f32 DFPRegs:f64:$src)
/*4064*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::FP_EXTEND),// ->4077
/*4068*/    OPC_RecordChild0, // #0 = $src
/*4069*/    OPC_MorphNodeTo, TARGET_VAL(SP::FSTOD), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (fextend:f64 f32:f32:$src) - Complexity = 3
            // Dst: (FSTOD:f64 f32:f32:$src)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::FP_ROUND),// ->4089
/*4080*/    OPC_RecordChild0, // #0 = $src
/*4081*/    OPC_MorphNodeTo, TARGET_VAL(SP::FDTOS), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (fround:f32 f64:f64:$src) - Complexity = 3
            // Dst: (FDTOS:f32 f64:f64:$src)
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FSQRT),// ->4115
/*4092*/    OPC_RecordChild0, // #0 = $src
/*4093*/    OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->4104
/*4096*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSQRTS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 f32:f32:$src) - Complexity = 3
              // Dst: (FSQRTS:f32 f32:f32:$src)
            /*SwitchType*/ 8,  MVT::f64,// ->4114
/*4106*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSQRTD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f64 f64:f64:$src) - Complexity = 3
              // Dst: (FSQRTD:f64 f64:f64:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::FADD),// ->4144
/*4118*/    OPC_RecordChild0, // #0 = $src1
/*4119*/    OPC_RecordChild1, // #1 = $src2
/*4120*/    OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->4132
/*4123*/      OPC_MorphNodeTo, TARGET_VAL(SP::FADDS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f32 f32:f32:$src1, f32:f32:$src2) - Complexity = 3
              // Dst: (FADDS:f32 f32:f32:$src1, f32:f32:$src2)
            /*SwitchType*/ 9,  MVT::f64,// ->4143
/*4134*/      OPC_MorphNodeTo, TARGET_VAL(SP::FADDD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f64 f64:f64:$src1, f64:f64:$src2) - Complexity = 3
              // Dst: (FADDD:f64 f64:f64:$src1, f64:f64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::FSUB),// ->4173
/*4147*/    OPC_RecordChild0, // #0 = $src1
/*4148*/    OPC_RecordChild1, // #1 = $src2
/*4149*/    OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->4161
/*4152*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSUBS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f32 f32:f32:$src1, f32:f32:$src2) - Complexity = 3
              // Dst: (FSUBS:f32 f32:f32:$src1, f32:f32:$src2)
            /*SwitchType*/ 9,  MVT::f64,// ->4172
/*4163*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSUBD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f64 f64:f64:$src1, f64:f64:$src2) - Complexity = 3
              // Dst: (FSUBD:f64 f64:f64:$src1, f64:f64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::FDIV),// ->4202
/*4176*/    OPC_RecordChild0, // #0 = $src1
/*4177*/    OPC_RecordChild1, // #1 = $src2
/*4178*/    OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->4190
/*4181*/      OPC_MorphNodeTo, TARGET_VAL(SP::FDIVS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 f32:f32:$src1, f32:f32:$src2) - Complexity = 3
              // Dst: (FDIVS:f32 f32:f32:$src1, f32:f32:$src2)
            /*SwitchType*/ 9,  MVT::f64,// ->4201
/*4192*/      OPC_MorphNodeTo, TARGET_VAL(SP::FDIVD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f64 f64:f64:$src1, f64:f64:$src2) - Complexity = 3
              // Dst: (FDIVD:f64 f64:f64:$src1, f64:f64:$src2)
            0, // EndSwitchType
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 4204 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 81
  // #OPC_RecordNode                     = 13
  // #OPC_RecordChild                    = 117
  // #OPC_RecordMemRef                   = 2
  // #OPC_CaptureGlueInput               = 11
  // #OPC_MoveChild                      = 64
  // #OPC_MoveParent                     = 74
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 76
  // #OPC_CheckPredicate                 = 74
  // #OPC_CheckOpcode                    = 49
  // #OPC_SwitchOpcode                   = 6
  // #OPC_CheckType                      = 72
  // #OPC_SwitchType                     = 27
  // #OPC_CheckChildType                 = 11
  // #OPC_CheckInteger                   = 10
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 1
  // #OPC_CheckComplexPat                = 63
  // #OPC_CheckAndImm                    = 1
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 6
  // #OPC_EmitStringInteger              = 2
  // #OPC_EmitRegister                   = 5
  // #OPC_EmitConvertToTarget            = 49
  // #OPC_EmitMergeInputChains           = 73
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 9
  // #OPC_EmitNodeXForm                  = 20
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 1
  // #OPC_MorphNodeTo                    = 209

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (Subtarget.is64Bit());
  case 1: return (Subtarget.isV9());
  case 2: return (!Subtarget.isV9());
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
  case 1: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 2: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 3: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 4: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 5: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 6: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 7: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 8: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 9: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 10: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 11: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 12: { // Predicate_zextloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 13: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 14: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 15: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 16: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

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
  case 20: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 21: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 22: { // Predicate_simm13
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<13>(N->getSExtValue()); 
  }
  case 23: { // Predicate_simm11
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<11>(N->getSExtValue()); 
  }
  case 24: { // Predicate_SETHIimm
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isShiftedUInt<22, 10>(N->getZExtValue());

  }
  case 25: { // Predicate_uimm32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isUInt<32>(N->getZExtValue()); 
  }
  case 26: { // Predicate_nimm33
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  int64_t Imm = N->getSExtValue();
  return Imm < 0 && isInt<33>(Imm);

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
    return SelectADDRrr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectADDRri(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // as_i32imm
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(N->getSExtValue(), MVT::i32);

  }
  case 1: {  // HI22
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  return CurDAG->getTargetConstant((unsigned)N->getZExtValue() >> 10, MVT::i32);

  }
  case 2: {  // LO10
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant((unsigned)N->getZExtValue() & 1023,
                                   MVT::i32);

  }
  case 3: {  // HIX22
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Val = (~N->getZExtValue() >> 10) & ((1u << 22) - 1);
  return CurDAG->getTargetConstant(Val, MVT::i32);

  }
  case 4: {  // LOX10
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(~(~N->getZExtValue() & 0x3ff), MVT::i32);

  }
  case 5: {  // HH22
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Val = (N->getZExtValue() >> 42) & ((1u << 22) - 1);
  return CurDAG->getTargetConstant(Val, MVT::i32);

  }
  case 6: {  // HM10
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Val = (N->getZExtValue() >> 32) & ((1u << 10) - 1);
  return CurDAG->getTargetConstant(Val, MVT::i32);

  }
  }
}

