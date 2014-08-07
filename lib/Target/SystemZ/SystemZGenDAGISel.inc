/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the SystemZ target                             *|
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
/*0*/     OPC_SwitchOpcode /*82 cases */, 112|128,18/*2416*/,  TARGET_VAL(ISD::STORE),// ->2421
/*5*/       OPC_RecordMemRef,
/*6*/       OPC_RecordNode,   // #0 = 'st' chained node
/*7*/       OPC_Scope, 82|128,13/*1746*/, /*->1756*/ // 2 children in Scope
/*10*/        OPC_MoveChild, 1,
/*12*/        OPC_SwitchOpcode /*5 cases */, 98,  TARGET_VAL(ISD::ADD),// ->114
/*16*/          OPC_MoveChild, 0,
/*18*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*21*/          OPC_RecordMemRef,
/*22*/          OPC_RecordNode, // #1 = 'ld' chained node
/*23*/          OPC_CheckFoldableChainNode,
/*24*/          OPC_RecordChild1, // #2 = $addr
/*25*/          OPC_CheckChild1Type, MVT::i64,
/*27*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*29*/          OPC_CheckPredicate, 1, // Predicate_load
/*31*/          OPC_MoveParent,
/*32*/          OPC_RecordChild1, // #3 = $src
/*33*/          OPC_MoveChild, 1,
/*35*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38*/          OPC_Scope, 36, /*->76*/ // 2 children in Scope
/*40*/            OPC_CheckPredicate, 2, // Predicate_imm32sx8
/*42*/            OPC_MoveParent,
/*43*/            OPC_CheckType, MVT::i32,
/*45*/            OPC_MoveParent,
/*46*/            OPC_MoveChild, 2,
/*48*/            OPC_CheckSame, 2,
/*50*/            OPC_MoveParent,
/*51*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*53*/            OPC_CheckPredicate, 4, // Predicate_store
/*55*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDAddr20Only:$addr #4 #5
/*58*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*62*/            OPC_EmitConvertToTarget, 3,
/*64*/            OPC_EmitNodeXForm, 0, 6, // SIMM8
/*67*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ASI), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                  // Src: (st (add:i32 (ld:i32 bdaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32)<<P:Predicate_imm32sx8>><<X:SIMM8>>:$src), bdaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                  // Dst: (ASI bdaddr20only:i64:$addr, (SIMM8:i32 (imm:i32):$src))
/*76*/          /*Scope*/ 36, /*->113*/
/*77*/            OPC_CheckPredicate, 5, // Predicate_imm64sx8
/*79*/            OPC_MoveParent,
/*80*/            OPC_CheckType, MVT::i64,
/*82*/            OPC_MoveParent,
/*83*/            OPC_MoveChild, 2,
/*85*/            OPC_CheckSame, 2,
/*87*/            OPC_MoveParent,
/*88*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*90*/            OPC_CheckPredicate, 4, // Predicate_store
/*92*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDAddr20Only:$addr #4 #5
/*95*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*99*/            OPC_EmitConvertToTarget, 3,
/*101*/           OPC_EmitNodeXForm, 0, 6, // SIMM8
/*104*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGSI), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                  // Src: (st (add:i64 (ld:i64 bdaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i64)<<P:Predicate_imm64sx8>><<X:SIMM8>>:$src), bdaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                  // Dst: (AGSI bdaddr20only:i64:$addr, (SIMM8:i64 (imm:i64):$src))
/*113*/         0, /*End of Scope*/
              /*SwitchOpcode*/ 13|128,4/*525*/,  TARGET_VAL(ISD::AND),// ->643
/*118*/         OPC_MoveChild, 0,
/*120*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*123*/         OPC_RecordMemRef,
/*124*/         OPC_RecordNode, // #1 = 'ld' chained node
/*125*/         OPC_CheckFoldableChainNode,
/*126*/         OPC_RecordChild1, // #2 = $addr
/*127*/         OPC_CheckChild1Type, MVT::i64,
/*129*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*131*/         OPC_Scope, 84, /*->217*/ // 6 children in Scope
/*133*/           OPC_CheckPredicate, 6, // Predicate_zextload
/*135*/           OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*137*/           OPC_MoveParent,
/*138*/           OPC_RecordChild1, // #3 = $src
/*139*/           OPC_MoveChild, 1,
/*141*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*144*/           OPC_MoveParent,
/*145*/           OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->181
/*148*/             OPC_MoveParent,
/*149*/             OPC_MoveChild, 2,
/*151*/             OPC_CheckSame, 2,
/*153*/             OPC_MoveParent,
/*154*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*156*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*158*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*160*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*163*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*167*/             OPC_EmitConvertToTarget, 3,
/*169*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*172*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::NI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->216
/*183*/             OPC_MoveParent,
/*184*/             OPC_MoveChild, 2,
/*186*/             OPC_CheckSame, 2,
/*188*/             OPC_MoveParent,
/*189*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*191*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*193*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*195*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*198*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*202*/             OPC_EmitConvertToTarget, 3,
/*204*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*207*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::NI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*217*/         /*Scope*/ 84, /*->302*/
/*218*/           OPC_CheckPredicate, 10, // Predicate_sextload
/*220*/           OPC_CheckPredicate, 11, // Predicate_sextloadi8
/*222*/           OPC_MoveParent,
/*223*/           OPC_RecordChild1, // #3 = $src
/*224*/           OPC_MoveChild, 1,
/*226*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*229*/           OPC_MoveParent,
/*230*/           OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->266
/*233*/             OPC_MoveParent,
/*234*/             OPC_MoveChild, 2,
/*236*/             OPC_CheckSame, 2,
/*238*/             OPC_MoveParent,
/*239*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*241*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*243*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*245*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*248*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*252*/             OPC_EmitConvertToTarget, 3,
/*254*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*257*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::NI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->301
/*268*/             OPC_MoveParent,
/*269*/             OPC_MoveChild, 2,
/*271*/             OPC_CheckSame, 2,
/*273*/             OPC_MoveParent,
/*274*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*276*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*278*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*280*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*283*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*287*/             OPC_EmitConvertToTarget, 3,
/*289*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*292*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::NI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*302*/         /*Scope*/ 84, /*->387*/
/*303*/           OPC_CheckPredicate, 12, // Predicate_extload
/*305*/           OPC_CheckPredicate, 13, // Predicate_extloadi8
/*307*/           OPC_MoveParent,
/*308*/           OPC_RecordChild1, // #3 = $src
/*309*/           OPC_MoveChild, 1,
/*311*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*314*/           OPC_MoveParent,
/*315*/           OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->351
/*318*/             OPC_MoveParent,
/*319*/             OPC_MoveChild, 2,
/*321*/             OPC_CheckSame, 2,
/*323*/             OPC_MoveParent,
/*324*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*326*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*328*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*330*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*333*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*337*/             OPC_EmitConvertToTarget, 3,
/*339*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*342*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::NI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->386
/*353*/             OPC_MoveParent,
/*354*/             OPC_MoveChild, 2,
/*356*/             OPC_CheckSame, 2,
/*358*/             OPC_MoveParent,
/*359*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*361*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*363*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*365*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*368*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*372*/             OPC_EmitConvertToTarget, 3,
/*374*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*377*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::NI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*387*/         /*Scope*/ 84, /*->472*/
/*388*/           OPC_CheckPredicate, 6, // Predicate_zextload
/*390*/           OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*392*/           OPC_MoveParent,
/*393*/           OPC_RecordChild1, // #3 = $src
/*394*/           OPC_MoveChild, 1,
/*396*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*399*/           OPC_MoveParent,
/*400*/           OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->436
/*403*/             OPC_MoveParent,
/*404*/             OPC_MoveChild, 2,
/*406*/             OPC_CheckSame, 2,
/*408*/             OPC_MoveParent,
/*409*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*411*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*413*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*415*/             OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*418*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*422*/             OPC_EmitConvertToTarget, 3,
/*424*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*427*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->471
/*438*/             OPC_MoveParent,
/*439*/             OPC_MoveChild, 2,
/*441*/             OPC_CheckSame, 2,
/*443*/             OPC_MoveParent,
/*444*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*446*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*448*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*450*/             OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*453*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*457*/             OPC_EmitConvertToTarget, 3,
/*459*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*462*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*472*/         /*Scope*/ 84, /*->557*/
/*473*/           OPC_CheckPredicate, 10, // Predicate_sextload
/*475*/           OPC_CheckPredicate, 11, // Predicate_sextloadi8
/*477*/           OPC_MoveParent,
/*478*/           OPC_RecordChild1, // #3 = $src
/*479*/           OPC_MoveChild, 1,
/*481*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*484*/           OPC_MoveParent,
/*485*/           OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->521
/*488*/             OPC_MoveParent,
/*489*/             OPC_MoveChild, 2,
/*491*/             OPC_CheckSame, 2,
/*493*/             OPC_MoveParent,
/*494*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*496*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*498*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*500*/             OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*503*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*507*/             OPC_EmitConvertToTarget, 3,
/*509*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*512*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->556
/*523*/             OPC_MoveParent,
/*524*/             OPC_MoveChild, 2,
/*526*/             OPC_CheckSame, 2,
/*528*/             OPC_MoveParent,
/*529*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*531*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*533*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*535*/             OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*538*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*542*/             OPC_EmitConvertToTarget, 3,
/*544*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*547*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*557*/         /*Scope*/ 84, /*->642*/
/*558*/           OPC_CheckPredicate, 12, // Predicate_extload
/*560*/           OPC_CheckPredicate, 13, // Predicate_extloadi8
/*562*/           OPC_MoveParent,
/*563*/           OPC_RecordChild1, // #3 = $src
/*564*/           OPC_MoveChild, 1,
/*566*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*569*/           OPC_MoveParent,
/*570*/           OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->606
/*573*/             OPC_MoveParent,
/*574*/             OPC_MoveChild, 2,
/*576*/             OPC_CheckSame, 2,
/*578*/             OPC_MoveParent,
/*579*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*581*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*583*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*585*/             OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*588*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*592*/             OPC_EmitConvertToTarget, 3,
/*594*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*597*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->641
/*608*/             OPC_MoveParent,
/*609*/             OPC_MoveChild, 2,
/*611*/             OPC_CheckSame, 2,
/*613*/             OPC_MoveParent,
/*614*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*616*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*618*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*620*/             OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*623*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*627*/             OPC_EmitConvertToTarget, 3,
/*629*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*632*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*642*/         0, /*End of Scope*/
              /*SwitchOpcode*/ 13|128,4/*525*/,  TARGET_VAL(ISD::OR),// ->1172
/*647*/         OPC_MoveChild, 0,
/*649*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*652*/         OPC_RecordMemRef,
/*653*/         OPC_RecordNode, // #1 = 'ld' chained node
/*654*/         OPC_CheckFoldableChainNode,
/*655*/         OPC_RecordChild1, // #2 = $addr
/*656*/         OPC_CheckChild1Type, MVT::i64,
/*658*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*660*/         OPC_Scope, 84, /*->746*/ // 6 children in Scope
/*662*/           OPC_CheckPredicate, 6, // Predicate_zextload
/*664*/           OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*666*/           OPC_MoveParent,
/*667*/           OPC_RecordChild1, // #3 = $src
/*668*/           OPC_MoveChild, 1,
/*670*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*673*/           OPC_MoveParent,
/*674*/           OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->710
/*677*/             OPC_MoveParent,
/*678*/             OPC_MoveChild, 2,
/*680*/             OPC_CheckSame, 2,
/*682*/             OPC_MoveParent,
/*683*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*685*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*687*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*689*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*692*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*696*/             OPC_EmitConvertToTarget, 3,
/*698*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*701*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::OI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->745
/*712*/             OPC_MoveParent,
/*713*/             OPC_MoveChild, 2,
/*715*/             OPC_CheckSame, 2,
/*717*/             OPC_MoveParent,
/*718*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*720*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*722*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*724*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*727*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*731*/             OPC_EmitConvertToTarget, 3,
/*733*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*736*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::OI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*746*/         /*Scope*/ 84, /*->831*/
/*747*/           OPC_CheckPredicate, 10, // Predicate_sextload
/*749*/           OPC_CheckPredicate, 11, // Predicate_sextloadi8
/*751*/           OPC_MoveParent,
/*752*/           OPC_RecordChild1, // #3 = $src
/*753*/           OPC_MoveChild, 1,
/*755*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*758*/           OPC_MoveParent,
/*759*/           OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->795
/*762*/             OPC_MoveParent,
/*763*/             OPC_MoveChild, 2,
/*765*/             OPC_CheckSame, 2,
/*767*/             OPC_MoveParent,
/*768*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*770*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*772*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*774*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*777*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*781*/             OPC_EmitConvertToTarget, 3,
/*783*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*786*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::OI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->830
/*797*/             OPC_MoveParent,
/*798*/             OPC_MoveChild, 2,
/*800*/             OPC_CheckSame, 2,
/*802*/             OPC_MoveParent,
/*803*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*805*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*807*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*809*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*812*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*816*/             OPC_EmitConvertToTarget, 3,
/*818*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*821*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::OI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*831*/         /*Scope*/ 84, /*->916*/
/*832*/           OPC_CheckPredicate, 12, // Predicate_extload
/*834*/           OPC_CheckPredicate, 13, // Predicate_extloadi8
/*836*/           OPC_MoveParent,
/*837*/           OPC_RecordChild1, // #3 = $src
/*838*/           OPC_MoveChild, 1,
/*840*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*843*/           OPC_MoveParent,
/*844*/           OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->880
/*847*/             OPC_MoveParent,
/*848*/             OPC_MoveChild, 2,
/*850*/             OPC_CheckSame, 2,
/*852*/             OPC_MoveParent,
/*853*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*855*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*857*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*859*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*862*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*866*/             OPC_EmitConvertToTarget, 3,
/*868*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*871*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::OI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->915
/*882*/             OPC_MoveParent,
/*883*/             OPC_MoveChild, 2,
/*885*/             OPC_CheckSame, 2,
/*887*/             OPC_MoveParent,
/*888*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*890*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*892*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*894*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*897*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*901*/             OPC_EmitConvertToTarget, 3,
/*903*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*906*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::OI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*916*/         /*Scope*/ 84, /*->1001*/
/*917*/           OPC_CheckPredicate, 6, // Predicate_zextload
/*919*/           OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*921*/           OPC_MoveParent,
/*922*/           OPC_RecordChild1, // #3 = $src
/*923*/           OPC_MoveChild, 1,
/*925*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*928*/           OPC_MoveParent,
/*929*/           OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->965
/*932*/             OPC_MoveParent,
/*933*/             OPC_MoveChild, 2,
/*935*/             OPC_CheckSame, 2,
/*937*/             OPC_MoveParent,
/*938*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*940*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*942*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*944*/             OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*947*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*951*/             OPC_EmitConvertToTarget, 3,
/*953*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*956*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->1000
/*967*/             OPC_MoveParent,
/*968*/             OPC_MoveChild, 2,
/*970*/             OPC_CheckSame, 2,
/*972*/             OPC_MoveParent,
/*973*/             OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*975*/             OPC_CheckPredicate, 8, // Predicate_truncstore
/*977*/             OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*979*/             OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*982*/             OPC_EmitMergeInputChains, 2, 0, 1, 
/*986*/             OPC_EmitConvertToTarget, 3,
/*988*/             OPC_EmitNodeXForm, 1, 6, // UIMM8
/*991*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*1001*/        /*Scope*/ 84, /*->1086*/
/*1002*/          OPC_CheckPredicate, 10, // Predicate_sextload
/*1004*/          OPC_CheckPredicate, 11, // Predicate_sextloadi8
/*1006*/          OPC_MoveParent,
/*1007*/          OPC_RecordChild1, // #3 = $src
/*1008*/          OPC_MoveChild, 1,
/*1010*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1013*/          OPC_MoveParent,
/*1014*/          OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->1050
/*1017*/            OPC_MoveParent,
/*1018*/            OPC_MoveChild, 2,
/*1020*/            OPC_CheckSame, 2,
/*1022*/            OPC_MoveParent,
/*1023*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1025*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1027*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1029*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1032*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1036*/            OPC_EmitConvertToTarget, 3,
/*1038*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1041*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->1085
/*1052*/            OPC_MoveParent,
/*1053*/            OPC_MoveChild, 2,
/*1055*/            OPC_CheckSame, 2,
/*1057*/            OPC_MoveParent,
/*1058*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1060*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1062*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1064*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1067*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1071*/            OPC_EmitConvertToTarget, 3,
/*1073*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1076*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*1086*/        /*Scope*/ 84, /*->1171*/
/*1087*/          OPC_CheckPredicate, 12, // Predicate_extload
/*1089*/          OPC_CheckPredicate, 13, // Predicate_extloadi8
/*1091*/          OPC_MoveParent,
/*1092*/          OPC_RecordChild1, // #3 = $src
/*1093*/          OPC_MoveChild, 1,
/*1095*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1098*/          OPC_MoveParent,
/*1099*/          OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->1135
/*1102*/            OPC_MoveParent,
/*1103*/            OPC_MoveChild, 2,
/*1105*/            OPC_CheckSame, 2,
/*1107*/            OPC_MoveParent,
/*1108*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1110*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1112*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1114*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1117*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1121*/            OPC_EmitConvertToTarget, 3,
/*1123*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1126*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->1170
/*1137*/            OPC_MoveParent,
/*1138*/            OPC_MoveChild, 2,
/*1140*/            OPC_CheckSame, 2,
/*1142*/            OPC_MoveParent,
/*1143*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1145*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1147*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1149*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1152*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1156*/            OPC_EmitConvertToTarget, 3,
/*1158*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1161*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*1171*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 13|128,4/*525*/,  TARGET_VAL(ISD::XOR),// ->1701
/*1176*/        OPC_MoveChild, 0,
/*1178*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1181*/        OPC_RecordMemRef,
/*1182*/        OPC_RecordNode, // #1 = 'ld' chained node
/*1183*/        OPC_CheckFoldableChainNode,
/*1184*/        OPC_RecordChild1, // #2 = $addr
/*1185*/        OPC_CheckChild1Type, MVT::i64,
/*1187*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1189*/        OPC_Scope, 84, /*->1275*/ // 6 children in Scope
/*1191*/          OPC_CheckPredicate, 6, // Predicate_zextload
/*1193*/          OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*1195*/          OPC_MoveParent,
/*1196*/          OPC_RecordChild1, // #3 = $src
/*1197*/          OPC_MoveChild, 1,
/*1199*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1202*/          OPC_MoveParent,
/*1203*/          OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->1239
/*1206*/            OPC_MoveParent,
/*1207*/            OPC_MoveChild, 2,
/*1209*/            OPC_CheckSame, 2,
/*1211*/            OPC_MoveParent,
/*1212*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1214*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1216*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1218*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1221*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1225*/            OPC_EmitConvertToTarget, 3,
/*1227*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1230*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->1274
/*1241*/            OPC_MoveParent,
/*1242*/            OPC_MoveChild, 2,
/*1244*/            OPC_CheckSame, 2,
/*1246*/            OPC_MoveParent,
/*1247*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1249*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1251*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1253*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1256*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1260*/            OPC_EmitConvertToTarget, 3,
/*1262*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1265*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*1275*/        /*Scope*/ 84, /*->1360*/
/*1276*/          OPC_CheckPredicate, 10, // Predicate_sextload
/*1278*/          OPC_CheckPredicate, 11, // Predicate_sextloadi8
/*1280*/          OPC_MoveParent,
/*1281*/          OPC_RecordChild1, // #3 = $src
/*1282*/          OPC_MoveChild, 1,
/*1284*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1287*/          OPC_MoveParent,
/*1288*/          OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->1324
/*1291*/            OPC_MoveParent,
/*1292*/            OPC_MoveChild, 2,
/*1294*/            OPC_CheckSame, 2,
/*1296*/            OPC_MoveParent,
/*1297*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1299*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1301*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1303*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1306*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1310*/            OPC_EmitConvertToTarget, 3,
/*1312*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1315*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->1359
/*1326*/            OPC_MoveParent,
/*1327*/            OPC_MoveChild, 2,
/*1329*/            OPC_CheckSame, 2,
/*1331*/            OPC_MoveParent,
/*1332*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1334*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1336*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1338*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1341*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1345*/            OPC_EmitConvertToTarget, 3,
/*1347*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1350*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*1360*/        /*Scope*/ 84, /*->1445*/
/*1361*/          OPC_CheckPredicate, 12, // Predicate_extload
/*1363*/          OPC_CheckPredicate, 13, // Predicate_extloadi8
/*1365*/          OPC_MoveParent,
/*1366*/          OPC_RecordChild1, // #3 = $src
/*1367*/          OPC_MoveChild, 1,
/*1369*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1372*/          OPC_MoveParent,
/*1373*/          OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->1409
/*1376*/            OPC_MoveParent,
/*1377*/            OPC_MoveChild, 2,
/*1379*/            OPC_CheckSame, 2,
/*1381*/            OPC_MoveParent,
/*1382*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1384*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1386*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1388*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1391*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1395*/            OPC_EmitConvertToTarget, 3,
/*1397*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1400*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->1444
/*1411*/            OPC_MoveParent,
/*1412*/            OPC_MoveChild, 2,
/*1414*/            OPC_CheckSame, 2,
/*1416*/            OPC_MoveParent,
/*1417*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1419*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1421*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1423*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1426*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1430*/            OPC_EmitConvertToTarget, 3,
/*1432*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1435*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XI bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*1445*/        /*Scope*/ 84, /*->1530*/
/*1446*/          OPC_CheckPredicate, 6, // Predicate_zextload
/*1448*/          OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*1450*/          OPC_MoveParent,
/*1451*/          OPC_RecordChild1, // #3 = $src
/*1452*/          OPC_MoveChild, 1,
/*1454*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1457*/          OPC_MoveParent,
/*1458*/          OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->1494
/*1461*/            OPC_MoveParent,
/*1462*/            OPC_MoveChild, 2,
/*1464*/            OPC_CheckSame, 2,
/*1466*/            OPC_MoveParent,
/*1467*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1469*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1471*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1473*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1476*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1480*/            OPC_EmitConvertToTarget, 3,
/*1482*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1485*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->1529
/*1496*/            OPC_MoveParent,
/*1497*/            OPC_MoveChild, 2,
/*1499*/            OPC_CheckSame, 2,
/*1501*/            OPC_MoveParent,
/*1502*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1504*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1506*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1508*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1511*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1515*/            OPC_EmitConvertToTarget, 3,
/*1517*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1520*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*1530*/        /*Scope*/ 84, /*->1615*/
/*1531*/          OPC_CheckPredicate, 10, // Predicate_sextload
/*1533*/          OPC_CheckPredicate, 11, // Predicate_sextloadi8
/*1535*/          OPC_MoveParent,
/*1536*/          OPC_RecordChild1, // #3 = $src
/*1537*/          OPC_MoveChild, 1,
/*1539*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1542*/          OPC_MoveParent,
/*1543*/          OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->1579
/*1546*/            OPC_MoveParent,
/*1547*/            OPC_MoveChild, 2,
/*1549*/            OPC_CheckSame, 2,
/*1551*/            OPC_MoveParent,
/*1552*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1554*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1556*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1558*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1561*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1565*/            OPC_EmitConvertToTarget, 3,
/*1567*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1570*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->1614
/*1581*/            OPC_MoveParent,
/*1582*/            OPC_MoveChild, 2,
/*1584*/            OPC_CheckSame, 2,
/*1586*/            OPC_MoveParent,
/*1587*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1589*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1591*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1593*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1596*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1600*/            OPC_EmitConvertToTarget, 3,
/*1602*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1605*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*1615*/        /*Scope*/ 84, /*->1700*/
/*1616*/          OPC_CheckPredicate, 12, // Predicate_extload
/*1618*/          OPC_CheckPredicate, 13, // Predicate_extloadi8
/*1620*/          OPC_MoveParent,
/*1621*/          OPC_RecordChild1, // #3 = $src
/*1622*/          OPC_MoveChild, 1,
/*1624*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1627*/          OPC_MoveParent,
/*1628*/          OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->1664
/*1631*/            OPC_MoveParent,
/*1632*/            OPC_MoveChild, 2,
/*1634*/            OPC_CheckSame, 2,
/*1636*/            OPC_MoveParent,
/*1637*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1639*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1641*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1643*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1646*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1650*/            OPC_EmitConvertToTarget, 3,
/*1652*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1655*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
                  /*SwitchType*/ 33,  MVT::i64,// ->1699
/*1666*/            OPC_MoveParent,
/*1667*/            OPC_MoveChild, 2,
/*1669*/            OPC_CheckSame, 2,
/*1671*/            OPC_MoveParent,
/*1672*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1674*/            OPC_CheckPredicate, 8, // Predicate_truncstore
/*1676*/            OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*1678*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1681*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1685*/            OPC_EmitConvertToTarget, 3,
/*1687*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1690*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XIY bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
                  0, // EndSwitchType
/*1700*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 51,  TARGET_VAL(ISD::BSWAP),// ->1755
/*1704*/        OPC_RecordChild0, // #1 = $src
/*1705*/        OPC_SwitchType /*2 cases */, 22,  MVT::i32,// ->1730
/*1708*/          OPC_MoveParent,
/*1709*/          OPC_RecordChild2, // #2 = $addr
/*1710*/          OPC_CheckChild2Type, MVT::i64,
/*1712*/          OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1714*/          OPC_CheckPredicate, 4, // Predicate_store
/*1716*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$addr #3 #4 #5
/*1719*/          OPC_EmitMergeInputChains1_0,
/*1720*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STRV), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st (bswap:i32 GR32:i32:$src), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 19
                  // Dst: (STRV GR32:i32:$src, bdxaddr20only:i64:$addr)
                /*SwitchType*/ 22,  MVT::i64,// ->1754
/*1732*/          OPC_MoveParent,
/*1733*/          OPC_RecordChild2, // #2 = $addr
/*1734*/          OPC_CheckChild2Type, MVT::i64,
/*1736*/          OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1738*/          OPC_CheckPredicate, 4, // Predicate_store
/*1740*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$addr #3 #4 #5
/*1743*/          OPC_EmitMergeInputChains1_0,
/*1744*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STRVG), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st (bswap:i64 GR64:i64:$src), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 19
                  // Dst: (STRVG GR64:i64:$src, bdxaddr20only:i64:$addr)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*1756*/    /*Scope*/ 22|128,5/*662*/, /*->2420*/
/*1758*/      OPC_RecordChild1, // #1 = $src
/*1759*/      OPC_Scope, 23, /*->1784*/ // 12 children in Scope
/*1761*/        OPC_CheckChild1Type, MVT::i32,
/*1763*/        OPC_RecordChild2, // #2 = $addr
/*1764*/        OPC_CheckChild2Type, MVT::i64,
/*1766*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1768*/        OPC_CheckPredicate, 4, // Predicate_store
/*1770*/        OPC_CheckPredicate, 14, // Predicate_aligned_store
/*1772*/        OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$addr #3
/*1775*/        OPC_EmitMergeInputChains1_0,
/*1776*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::STRL32), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (st GR32:i32:$src, pcrel32:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_aligned_store>> - Complexity = 17
                // Dst: (STRL32 GR32:i32:$src, pcrel32:i64:$addr)
/*1784*/      /*Scope*/ 23, /*->1808*/
/*1785*/        OPC_CheckChild1Type, MVT::i64,
/*1787*/        OPC_RecordChild2, // #2 = $addr
/*1788*/        OPC_CheckChild2Type, MVT::i64,
/*1790*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1792*/        OPC_CheckPredicate, 4, // Predicate_store
/*1794*/        OPC_CheckPredicate, 14, // Predicate_aligned_store
/*1796*/        OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$addr #3
/*1799*/        OPC_EmitMergeInputChains1_0,
/*1800*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::STGRL), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (st GR64:i64:$src, pcrel32:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_aligned_store>> - Complexity = 17
                // Dst: (STGRL GR64:i64:$src, pcrel32:i64:$addr)
/*1808*/      /*Scope*/ 67, /*->1876*/
/*1809*/        OPC_MoveChild, 1,
/*1811*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1814*/        OPC_SwitchType /*2 cases */, 28,  MVT::i32,// ->1845
/*1817*/          OPC_CheckPredicate, 15, // Predicate_imm32sx16
/*1819*/          OPC_MoveParent,
/*1820*/          OPC_RecordChild2, // #2 = $addr
/*1821*/          OPC_CheckChild2Type, MVT::i64,
/*1823*/          OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1825*/          OPC_CheckPredicate, 4, // Predicate_store
/*1827*/          OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectBDAddr12Only:$addr #3 #4
/*1830*/          OPC_EmitMergeInputChains1_0,
/*1831*/          OPC_EmitConvertToTarget, 1,
/*1833*/          OPC_EmitNodeXForm, 2, 5, // SIMM16
/*1836*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVHI), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (st (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$src, bdaddr12only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 17
                  // Dst: (MVHI bdaddr12only:i64:$addr, (SIMM16:i32 (imm:i32):$src))
                /*SwitchType*/ 28,  MVT::i64,// ->1875
/*1847*/          OPC_CheckPredicate, 16, // Predicate_imm64sx16
/*1849*/          OPC_MoveParent,
/*1850*/          OPC_RecordChild2, // #2 = $addr
/*1851*/          OPC_CheckChild2Type, MVT::i64,
/*1853*/          OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1855*/          OPC_CheckPredicate, 4, // Predicate_store
/*1857*/          OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectBDAddr12Only:$addr #3 #4
/*1860*/          OPC_EmitMergeInputChains1_0,
/*1861*/          OPC_EmitConvertToTarget, 1,
/*1863*/          OPC_EmitNodeXForm, 2, 5, // SIMM16
/*1866*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVGHI), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (st (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$src, bdaddr12only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 17
                  // Dst: (MVGHI bdaddr12only:i64:$addr, (SIMM16:i64 (imm:i64):$src))
                0, // EndSwitchType
/*1876*/      /*Scope*/ 63, /*->1940*/
/*1877*/        OPC_CheckChild1Type, MVT::i32,
/*1879*/        OPC_RecordChild2, // #2 = $addr
/*1880*/        OPC_CheckChild2Type, MVT::i64,
/*1882*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1884*/        OPC_Scope, 18, /*->1904*/ // 2 children in Scope
/*1886*/          OPC_CheckPredicate, 8, // Predicate_truncstore
/*1888*/          OPC_CheckPredicate, 17, // Predicate_truncstorei16
/*1890*/          OPC_CheckPredicate, 18, // Predicate_aligned_truncstorei16
/*1892*/          OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$addr #3
/*1895*/          OPC_EmitMergeInputChains1_0,
/*1896*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STHRL32), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (st GR32:i32:$src, pcrel32:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_aligned_truncstorei16>> - Complexity = 17
                  // Dst: (STHRL32 GR32:i32:$src, pcrel32:i64:$addr)
/*1904*/        /*Scope*/ 34, /*->1939*/
/*1905*/          OPC_CheckPredicate, 4, // Predicate_store
/*1907*/          OPC_Scope, 14, /*->1923*/ // 2 children in Scope
/*1909*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$addr #3 #4 #5
/*1912*/            OPC_EmitMergeInputChains1_0,
/*1913*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ST32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$src, bdxaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                    // Dst: (ST32 GR32:i32:$src, bdxaddr12pair:i64:$addr)
/*1923*/          /*Scope*/ 14, /*->1938*/
/*1924*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$addr #3 #4 #5
/*1927*/            OPC_EmitMergeInputChains1_0,
/*1928*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ST32Y), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$src, bdxaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                    // Dst: (ST32Y GR32:i32:$src, bdxaddr20pair:i64:$addr)
/*1938*/          0, /*End of Scope*/
/*1939*/        0, /*End of Scope*/
/*1940*/      /*Scope*/ 65, /*->2006*/
/*1941*/        OPC_CheckChild1Type, MVT::i64,
/*1943*/        OPC_RecordChild2, // #2 = $addr
/*1944*/        OPC_CheckChild2Type, MVT::i64,
/*1946*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1948*/        OPC_Scope, 38, /*->1988*/ // 2 children in Scope
/*1950*/          OPC_CheckPredicate, 8, // Predicate_truncstore
/*1952*/          OPC_Scope, 16, /*->1970*/ // 2 children in Scope
/*1954*/            OPC_CheckPredicate, 17, // Predicate_truncstorei16
/*1956*/            OPC_CheckPredicate, 18, // Predicate_aligned_truncstorei16
/*1958*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$addr #3
/*1961*/            OPC_EmitMergeInputChains1_0,
/*1962*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STHRL), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                    // Src: (st GR64:i64:$src, pcrel32:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_aligned_truncstorei16>> - Complexity = 17
                    // Dst: (STHRL GR64:i64:$src, pcrel32:i64:$addr)
/*1970*/          /*Scope*/ 16, /*->1987*/
/*1971*/            OPC_CheckPredicate, 19, // Predicate_truncstorei32
/*1973*/            OPC_CheckPredicate, 20, // Predicate_aligned_truncstorei32
/*1975*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$addr #3
/*1978*/            OPC_EmitMergeInputChains1_0,
/*1979*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STRL), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                    // Src: (st GR64:i64:$src, pcrel32:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>><<P:Predicate_aligned_truncstorei32>> - Complexity = 17
                    // Dst: (STRL GR64:i64:$src, pcrel32:i64:$addr)
/*1987*/          0, /*End of Scope*/
/*1988*/        /*Scope*/ 16, /*->2005*/
/*1989*/          OPC_CheckPredicate, 4, // Predicate_store
/*1991*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$addr #3 #4 #5
/*1994*/          OPC_EmitMergeInputChains1_0,
/*1995*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STG), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GR64:i64:$src, bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (STG GR64:i64:$src, bdxaddr20only:i64:$addr)
/*2005*/        0, /*End of Scope*/
/*2006*/      /*Scope*/ 23, /*->2030*/
/*2007*/        OPC_CheckChild1Type, MVT::Untyped,
/*2009*/        OPC_RecordChild2, // #2 = $dst
/*2010*/        OPC_CheckChild2Type, MVT::i64,
/*2012*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2014*/        OPC_CheckPredicate, 4, // Predicate_store
/*2016*/        OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Only128:$dst #3 #4 #5
/*2019*/        OPC_EmitMergeInputChains1_0,
/*2020*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ST128), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                // Src: (st GR128:Untyped:$src, bdxaddr20only128:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                // Dst: (ST128 GR128:Untyped:$src, bdxaddr20only128:i64:$dst)
/*2030*/      /*Scope*/ 81, /*->2112*/
/*2031*/        OPC_MoveChild, 1,
/*2033*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2036*/        OPC_CheckType, MVT::i32,
/*2038*/        OPC_MoveParent,
/*2039*/        OPC_RecordChild2, // #2 = $addr
/*2040*/        OPC_CheckChild2Type, MVT::i64,
/*2042*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2044*/        OPC_CheckPredicate, 8, // Predicate_truncstore
/*2046*/        OPC_Scope, 42, /*->2090*/ // 2 children in Scope
/*2048*/          OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*2050*/          OPC_Scope, 18, /*->2070*/ // 2 children in Scope
/*2052*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr12Pair:$addr #3 #4
/*2055*/            OPC_EmitMergeInputChains1_0,
/*2056*/            OPC_EmitConvertToTarget, 1,
/*2058*/            OPC_EmitNodeXForm, 1, 5, // UIMM8
/*2061*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (st (imm:i32)<<X:UIMM8>>:$src, bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (MVI bdaddr12pair:i64:$addr, (UIMM8:i32 (imm:i32):$src))
/*2070*/          /*Scope*/ 18, /*->2089*/
/*2071*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr20Pair:$addr #3 #4
/*2074*/            OPC_EmitMergeInputChains1_0,
/*2075*/            OPC_EmitConvertToTarget, 1,
/*2077*/            OPC_EmitNodeXForm, 1, 5, // UIMM8
/*2080*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (st (imm:i32)<<X:UIMM8>>:$src, bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (MVIY bdaddr20pair:i64:$addr, (UIMM8:i32 (imm:i32):$src))
/*2089*/          0, /*End of Scope*/
/*2090*/        /*Scope*/ 20, /*->2111*/
/*2091*/          OPC_CheckPredicate, 17, // Predicate_truncstorei16
/*2093*/          OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectBDAddr12Only:$addr #3 #4
/*2096*/          OPC_EmitMergeInputChains1_0,
/*2097*/          OPC_EmitConvertToTarget, 1,
/*2099*/          OPC_EmitNodeXForm, 2, 5, // SIMM16
/*2102*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVHHI), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (st (imm:i32)<<X:SIMM16>>:$src, bdaddr12only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                  // Dst: (MVHHI bdaddr12only:i64:$addr, (SIMM16:i32 (imm:i32):$src))
/*2111*/        0, /*End of Scope*/
/*2112*/      /*Scope*/ 81, /*->2194*/
/*2113*/        OPC_CheckChild1Type, MVT::i32,
/*2115*/        OPC_RecordChild2, // #2 = $addr
/*2116*/        OPC_CheckChild2Type, MVT::i64,
/*2118*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2120*/        OPC_CheckPredicate, 8, // Predicate_truncstore
/*2122*/        OPC_Scope, 34, /*->2158*/ // 2 children in Scope
/*2124*/          OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*2126*/          OPC_Scope, 14, /*->2142*/ // 2 children in Scope
/*2128*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$addr #3 #4 #5
/*2131*/            OPC_EmitMergeInputChains1_0,
/*2132*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STC32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$src, bdxaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (STC32 GR32:i32:$src, bdxaddr12pair:i64:$addr)
/*2142*/          /*Scope*/ 14, /*->2157*/
/*2143*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$addr #3 #4 #5
/*2146*/            OPC_EmitMergeInputChains1_0,
/*2147*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$src, bdxaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (STC32Y GR32:i32:$src, bdxaddr20pair:i64:$addr)
/*2157*/          0, /*End of Scope*/
/*2158*/        /*Scope*/ 34, /*->2193*/
/*2159*/          OPC_CheckPredicate, 17, // Predicate_truncstorei16
/*2161*/          OPC_Scope, 14, /*->2177*/ // 2 children in Scope
/*2163*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$addr #3 #4 #5
/*2166*/            OPC_EmitMergeInputChains1_0,
/*2167*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STH32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$src, bdxaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (STH32 GR32:i32:$src, bdxaddr12pair:i64:$addr)
/*2177*/          /*Scope*/ 14, /*->2192*/
/*2178*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$addr #3 #4 #5
/*2181*/            OPC_EmitMergeInputChains1_0,
/*2182*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STH32Y), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$src, bdxaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (STH32Y GR32:i32:$src, bdxaddr20pair:i64:$addr)
/*2192*/          0, /*End of Scope*/
/*2193*/        0, /*End of Scope*/
/*2194*/      /*Scope*/ 116, /*->2311*/
/*2195*/        OPC_CheckChild1Type, MVT::i64,
/*2197*/        OPC_RecordChild2, // #2 = $addr
/*2198*/        OPC_CheckChild2Type, MVT::i64,
/*2200*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2202*/        OPC_CheckPredicate, 8, // Predicate_truncstore
/*2204*/        OPC_Scope, 34, /*->2240*/ // 3 children in Scope
/*2206*/          OPC_CheckPredicate, 9, // Predicate_truncstorei8
/*2208*/          OPC_Scope, 14, /*->2224*/ // 2 children in Scope
/*2210*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$addr #3 #4 #5
/*2213*/            OPC_EmitMergeInputChains1_0,
/*2214*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STC), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$src, bdxaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (STC GR64:i64:$src, bdxaddr12pair:i64:$addr)
/*2224*/          /*Scope*/ 14, /*->2239*/
/*2225*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$addr #3 #4 #5
/*2228*/            OPC_EmitMergeInputChains1_0,
/*2229*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STCY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$src, bdxaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (STCY GR64:i64:$src, bdxaddr20pair:i64:$addr)
/*2239*/          0, /*End of Scope*/
/*2240*/        /*Scope*/ 34, /*->2275*/
/*2241*/          OPC_CheckPredicate, 17, // Predicate_truncstorei16
/*2243*/          OPC_Scope, 14, /*->2259*/ // 2 children in Scope
/*2245*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$addr #3 #4 #5
/*2248*/            OPC_EmitMergeInputChains1_0,
/*2249*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STH), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$src, bdxaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (STH GR64:i64:$src, bdxaddr12pair:i64:$addr)
/*2259*/          /*Scope*/ 14, /*->2274*/
/*2260*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$addr #3 #4 #5
/*2263*/            OPC_EmitMergeInputChains1_0,
/*2264*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STHY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$src, bdxaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (STHY GR64:i64:$src, bdxaddr20pair:i64:$addr)
/*2274*/          0, /*End of Scope*/
/*2275*/        /*Scope*/ 34, /*->2310*/
/*2276*/          OPC_CheckPredicate, 19, // Predicate_truncstorei32
/*2278*/          OPC_Scope, 14, /*->2294*/ // 2 children in Scope
/*2280*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$addr #3 #4 #5
/*2283*/            OPC_EmitMergeInputChains1_0,
/*2284*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ST), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$src, bdxaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 16
                    // Dst: (ST GR64:i64:$src, bdxaddr12pair:i64:$addr)
/*2294*/          /*Scope*/ 14, /*->2309*/
/*2295*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$addr #3 #4 #5
/*2298*/            OPC_EmitMergeInputChains1_0,
/*2299*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$src, bdxaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 16
                    // Dst: (STY GR64:i64:$src, bdxaddr20pair:i64:$addr)
/*2309*/          0, /*End of Scope*/
/*2310*/        0, /*End of Scope*/
/*2311*/      /*Scope*/ 41, /*->2353*/
/*2312*/        OPC_CheckChild1Type, MVT::f32,
/*2314*/        OPC_RecordChild2, // #2 = $addr
/*2315*/        OPC_CheckChild2Type, MVT::i64,
/*2317*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2319*/        OPC_CheckPredicate, 4, // Predicate_store
/*2321*/        OPC_Scope, 14, /*->2337*/ // 2 children in Scope
/*2323*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$addr #3 #4 #5
/*2326*/          OPC_EmitMergeInputChains1_0,
/*2327*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STE), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st FP32:f32:$src, bdxaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (STE FP32:f32:$src, bdxaddr12pair:i64:$addr)
/*2337*/        /*Scope*/ 14, /*->2352*/
/*2338*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$addr #3 #4 #5
/*2341*/          OPC_EmitMergeInputChains1_0,
/*2342*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STEY), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st FP32:f32:$src, bdxaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (STEY FP32:f32:$src, bdxaddr20pair:i64:$addr)
/*2352*/        0, /*End of Scope*/
/*2353*/      /*Scope*/ 41, /*->2395*/
/*2354*/        OPC_CheckChild1Type, MVT::f64,
/*2356*/        OPC_RecordChild2, // #2 = $addr
/*2357*/        OPC_CheckChild2Type, MVT::i64,
/*2359*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2361*/        OPC_CheckPredicate, 4, // Predicate_store
/*2363*/        OPC_Scope, 14, /*->2379*/ // 2 children in Scope
/*2365*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$addr #3 #4 #5
/*2368*/          OPC_EmitMergeInputChains1_0,
/*2369*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STD), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st FP64:f64:$src, bdxaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (STD FP64:f64:$src, bdxaddr12pair:i64:$addr)
/*2379*/        /*Scope*/ 14, /*->2394*/
/*2380*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$addr #3 #4 #5
/*2383*/          OPC_EmitMergeInputChains1_0,
/*2384*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STDY), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st FP64:f64:$src, bdxaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (STDY FP64:f64:$src, bdxaddr20pair:i64:$addr)
/*2394*/        0, /*End of Scope*/
/*2395*/      /*Scope*/ 23, /*->2419*/
/*2396*/        OPC_CheckChild1Type, MVT::f128,
/*2398*/        OPC_RecordChild2, // #2 = $dst
/*2399*/        OPC_CheckChild2Type, MVT::i64,
/*2401*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2403*/        OPC_CheckPredicate, 4, // Predicate_store
/*2405*/        OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Only128:$dst #3 #4 #5
/*2408*/        OPC_EmitMergeInputChains1_0,
/*2409*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::STX), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                // Src: (st FP128:f128:$src, bdxaddr20only128:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                // Dst: (STX FP128:f128:$src, bdxaddr20only128:i64:$dst)
/*2419*/      0, /*End of Scope*/
/*2420*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 49|128,12/*1585*/,  TARGET_VAL(ISD::OR),// ->4010
/*2425*/    OPC_Scope, 88|128,1/*216*/, /*->2644*/ // 20 children in Scope
/*2428*/      OPC_MoveChild, 0,
/*2430*/      OPC_Scope, 105, /*->2537*/ // 2 children in Scope
/*2432*/        OPC_CheckAndImm, 0|128,126|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551360*/, 
/*2443*/        OPC_RecordChild0, // #0 = $src1
/*2444*/        OPC_MoveParent,
/*2445*/        OPC_MoveChild, 1,
/*2447*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2450*/        OPC_RecordMemRef,
/*2451*/        OPC_RecordNode, // #1 = 'ld' chained node
/*2452*/        OPC_CheckFoldableChainNode,
/*2453*/        OPC_RecordChild1, // #2 = $src2
/*2454*/        OPC_CheckChild1Type, MVT::i64,
/*2456*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2458*/        OPC_CheckPredicate, 6, // Predicate_zextload
/*2460*/        OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*2462*/        OPC_MoveParent,
/*2463*/        OPC_SwitchType /*2 cases */, 34,  MVT::i32,// ->2500
/*2466*/          OPC_Scope, 15, /*->2483*/ // 2 children in Scope
/*2468*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*2471*/            OPC_EmitMergeInputChains1_1,
/*2472*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i32 (and:i32 GR32:i32:$src1, -256:i32), (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>) - Complexity = 27
                    // Dst: (IC32:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*2483*/          /*Scope*/ 15, /*->2499*/
/*2484*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*2487*/            OPC_EmitMergeInputChains1_1,
/*2488*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i32 (and:i32 GR32:i32:$src1, -256:i32), (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>) - Complexity = 27
                    // Dst: (IC32Y:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*2499*/          0, /*End of Scope*/
                /*SwitchType*/ 34,  MVT::i64,// ->2536
/*2502*/          OPC_Scope, 15, /*->2519*/ // 2 children in Scope
/*2504*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*2507*/            OPC_EmitMergeInputChains1_1,
/*2508*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i64 (and:i64 GR64:i64:$src1, -256:i64), (ld:i64 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>) - Complexity = 27
                    // Dst: (IC:i64 GR64:i64:$src1, bdxaddr12pair:i64:$src2)
/*2519*/          /*Scope*/ 15, /*->2535*/
/*2520*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*2523*/            OPC_EmitMergeInputChains1_1,
/*2524*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i64 (and:i64 GR64:i64:$src1, -256:i64), (ld:i64 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>) - Complexity = 27
                    // Dst: (ICY:i64 GR64:i64:$src1, bdxaddr20pair:i64:$src2)
/*2535*/          0, /*End of Scope*/
                0, // EndSwitchType
/*2537*/      /*Scope*/ 105, /*->2643*/
/*2538*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2541*/        OPC_RecordMemRef,
/*2542*/        OPC_RecordNode, // #0 = 'ld' chained node
/*2543*/        OPC_CheckFoldableChainNode,
/*2544*/        OPC_RecordChild1, // #1 = $src2
/*2545*/        OPC_CheckChild1Type, MVT::i64,
/*2547*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2549*/        OPC_CheckPredicate, 6, // Predicate_zextload
/*2551*/        OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*2553*/        OPC_MoveParent,
/*2554*/        OPC_MoveChild, 1,
/*2556*/        OPC_CheckAndImm, 0|128,126|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551360*/, 
/*2567*/        OPC_RecordChild0, // #2 = $src1
/*2568*/        OPC_MoveParent,
/*2569*/        OPC_SwitchType /*2 cases */, 34,  MVT::i32,// ->2606
/*2572*/          OPC_Scope, 15, /*->2589*/ // 2 children in Scope
/*2574*/            OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*2577*/            OPC_EmitMergeInputChains1_0,
/*2578*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i32 (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (and:i32 GR32:i32:$src1, -256:i32)) - Complexity = 27
                    // Dst: (IC32:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*2589*/          /*Scope*/ 15, /*->2605*/
/*2590*/            OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*2593*/            OPC_EmitMergeInputChains1_0,
/*2594*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i32 (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (and:i32 GR32:i32:$src1, -256:i32)) - Complexity = 27
                    // Dst: (IC32Y:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*2605*/          0, /*End of Scope*/
                /*SwitchType*/ 34,  MVT::i64,// ->2642
/*2608*/          OPC_Scope, 15, /*->2625*/ // 2 children in Scope
/*2610*/            OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*2613*/            OPC_EmitMergeInputChains1_0,
/*2614*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i64 (ld:i64 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (and:i64 GR64:i64:$src1, -256:i64)) - Complexity = 27
                    // Dst: (IC:i64 GR64:i64:$src1, bdxaddr12pair:i64:$src2)
/*2625*/          /*Scope*/ 15, /*->2641*/
/*2626*/            OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*2629*/            OPC_EmitMergeInputChains1_0,
/*2630*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i64 (ld:i64 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (and:i64 GR64:i64:$src1, -256:i64)) - Complexity = 27
                    // Dst: (ICY:i64 GR64:i64:$src1, bdxaddr20pair:i64:$src2)
/*2641*/          0, /*End of Scope*/
                0, // EndSwitchType
/*2643*/      0, /*End of Scope*/
/*2644*/    /*Scope*/ 38, /*->2683*/
/*2645*/      OPC_RecordChild0, // #0 = $src1
/*2646*/      OPC_MoveChild, 1,
/*2648*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2651*/      OPC_RecordMemRef,
/*2652*/      OPC_RecordNode, // #1 = 'ld' chained node
/*2653*/      OPC_CheckFoldableChainNode,
/*2654*/      OPC_RecordChild1, // #2 = $src2
/*2655*/      OPC_CheckChild1Type, MVT::i64,
/*2657*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2659*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*2661*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*2663*/      OPC_MoveParent,
/*2664*/      OPC_CheckPredicate, 21, // Predicate_or_as_inserti8
/*2666*/      OPC_CheckType, MVT::i32,
/*2668*/      OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*2671*/      OPC_EmitMergeInputChains1_1,
/*2672*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i32 GR32:i32:$src1, (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (IC32:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*2683*/    /*Scope*/ 38, /*->2722*/
/*2684*/      OPC_MoveChild, 0,
/*2686*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2689*/      OPC_RecordMemRef,
/*2690*/      OPC_RecordNode, // #0 = 'ld' chained node
/*2691*/      OPC_CheckFoldableChainNode,
/*2692*/      OPC_RecordChild1, // #1 = $src2
/*2693*/      OPC_CheckChild1Type, MVT::i64,
/*2695*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2697*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*2699*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*2701*/      OPC_MoveParent,
/*2702*/      OPC_RecordChild1, // #2 = $src1
/*2703*/      OPC_CheckPredicate, 22, // Predicate_or_as_revinserti8
/*2705*/      OPC_CheckType, MVT::i32,
/*2707*/      OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*2710*/      OPC_EmitMergeInputChains1_0,
/*2711*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i32 (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR32:i32:$src1)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC32:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*2722*/    /*Scope*/ 38, /*->2761*/
/*2723*/      OPC_RecordChild0, // #0 = $src1
/*2724*/      OPC_MoveChild, 1,
/*2726*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2729*/      OPC_RecordMemRef,
/*2730*/      OPC_RecordNode, // #1 = 'ld' chained node
/*2731*/      OPC_CheckFoldableChainNode,
/*2732*/      OPC_RecordChild1, // #2 = $src2
/*2733*/      OPC_CheckChild1Type, MVT::i64,
/*2735*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2737*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*2739*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*2741*/      OPC_MoveParent,
/*2742*/      OPC_CheckPredicate, 21, // Predicate_or_as_inserti8
/*2744*/      OPC_CheckType, MVT::i32,
/*2746*/      OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*2749*/      OPC_EmitMergeInputChains1_1,
/*2750*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i32 GR32:i32:$src1, (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (IC32Y:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*2761*/    /*Scope*/ 38, /*->2800*/
/*2762*/      OPC_MoveChild, 0,
/*2764*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2767*/      OPC_RecordMemRef,
/*2768*/      OPC_RecordNode, // #0 = 'ld' chained node
/*2769*/      OPC_CheckFoldableChainNode,
/*2770*/      OPC_RecordChild1, // #1 = $src2
/*2771*/      OPC_CheckChild1Type, MVT::i64,
/*2773*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2775*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*2777*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*2779*/      OPC_MoveParent,
/*2780*/      OPC_RecordChild1, // #2 = $src1
/*2781*/      OPC_CheckPredicate, 22, // Predicate_or_as_revinserti8
/*2783*/      OPC_CheckType, MVT::i32,
/*2785*/      OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*2788*/      OPC_EmitMergeInputChains1_0,
/*2789*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i32 (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR32:i32:$src1)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC32Y:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*2800*/    /*Scope*/ 38, /*->2839*/
/*2801*/      OPC_RecordChild0, // #0 = $src1
/*2802*/      OPC_MoveChild, 1,
/*2804*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2807*/      OPC_RecordMemRef,
/*2808*/      OPC_RecordNode, // #1 = 'ld' chained node
/*2809*/      OPC_CheckFoldableChainNode,
/*2810*/      OPC_RecordChild1, // #2 = $src2
/*2811*/      OPC_CheckChild1Type, MVT::i64,
/*2813*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2815*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*2817*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*2819*/      OPC_MoveParent,
/*2820*/      OPC_CheckPredicate, 21, // Predicate_or_as_inserti8
/*2822*/      OPC_CheckType, MVT::i64,
/*2824*/      OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*2827*/      OPC_EmitMergeInputChains1_1,
/*2828*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i64 GR64:i64:$src1, (ld:i64 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (IC:i64 GR64:i64:$src1, bdxaddr12pair:i64:$src2)
/*2839*/    /*Scope*/ 38, /*->2878*/
/*2840*/      OPC_MoveChild, 0,
/*2842*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2845*/      OPC_RecordMemRef,
/*2846*/      OPC_RecordNode, // #0 = 'ld' chained node
/*2847*/      OPC_CheckFoldableChainNode,
/*2848*/      OPC_RecordChild1, // #1 = $src2
/*2849*/      OPC_CheckChild1Type, MVT::i64,
/*2851*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2853*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*2855*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*2857*/      OPC_MoveParent,
/*2858*/      OPC_RecordChild1, // #2 = $src1
/*2859*/      OPC_CheckPredicate, 22, // Predicate_or_as_revinserti8
/*2861*/      OPC_CheckType, MVT::i64,
/*2863*/      OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*2866*/      OPC_EmitMergeInputChains1_0,
/*2867*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i64 (ld:i64 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR64:i64:$src1)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC:i64 GR64:i64:$src1, bdxaddr12pair:i64:$src2)
/*2878*/    /*Scope*/ 38, /*->2917*/
/*2879*/      OPC_RecordChild0, // #0 = $src1
/*2880*/      OPC_MoveChild, 1,
/*2882*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2885*/      OPC_RecordMemRef,
/*2886*/      OPC_RecordNode, // #1 = 'ld' chained node
/*2887*/      OPC_CheckFoldableChainNode,
/*2888*/      OPC_RecordChild1, // #2 = $src2
/*2889*/      OPC_CheckChild1Type, MVT::i64,
/*2891*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2893*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*2895*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*2897*/      OPC_MoveParent,
/*2898*/      OPC_CheckPredicate, 21, // Predicate_or_as_inserti8
/*2900*/      OPC_CheckType, MVT::i64,
/*2902*/      OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*2905*/      OPC_EmitMergeInputChains1_1,
/*2906*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i64 GR64:i64:$src1, (ld:i64 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (ICY:i64 GR64:i64:$src1, bdxaddr20pair:i64:$src2)
/*2917*/    /*Scope*/ 59, /*->2977*/
/*2918*/      OPC_MoveChild, 0,
/*2920*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2923*/      OPC_RecordMemRef,
/*2924*/      OPC_RecordNode, // #0 = 'ld' chained node
/*2925*/      OPC_CheckFoldableChainNode,
/*2926*/      OPC_RecordChild1, // #1 = $src2
/*2927*/      OPC_CheckChild1Type, MVT::i64,
/*2929*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2931*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*2933*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*2935*/      OPC_MoveParent,
/*2936*/      OPC_RecordChild1, // #2 = $src1
/*2937*/      OPC_SwitchType /*2 cases */, 17,  MVT::i64,// ->2957
/*2940*/        OPC_CheckPredicate, 22, // Predicate_or_as_revinserti8
/*2942*/        OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*2945*/        OPC_EmitMergeInputChains1_0,
/*2946*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (or:i64 (ld:i64 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR64:i64:$src1)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
                // Dst: (ICY:i64 GR64:i64:$src1, bdxaddr20pair:i64:$src2)
              /*SwitchType*/ 17,  MVT::i32,// ->2976
/*2959*/        OPC_CheckPredicate, 21, // Predicate_or_as_inserti8
/*2961*/        OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*2964*/        OPC_EmitMergeInputChains1_0,
/*2965*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (or:i32 (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR32:i32:$src1)<<P:Predicate_or_as_inserti8>> - Complexity = 20
                // Dst: (IC32:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
              0, // EndSwitchType
/*2977*/    /*Scope*/ 38, /*->3016*/
/*2978*/      OPC_RecordChild0, // #0 = $src1
/*2979*/      OPC_MoveChild, 1,
/*2981*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2984*/      OPC_RecordMemRef,
/*2985*/      OPC_RecordNode, // #1 = 'ld' chained node
/*2986*/      OPC_CheckFoldableChainNode,
/*2987*/      OPC_RecordChild1, // #2 = $src2
/*2988*/      OPC_CheckChild1Type, MVT::i64,
/*2990*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2992*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*2994*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*2996*/      OPC_MoveParent,
/*2997*/      OPC_CheckPredicate, 22, // Predicate_or_as_revinserti8
/*2999*/      OPC_CheckType, MVT::i32,
/*3001*/      OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*3004*/      OPC_EmitMergeInputChains1_1,
/*3005*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i32 GR32:i32:$src1, (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC32:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*3016*/    /*Scope*/ 38, /*->3055*/
/*3017*/      OPC_MoveChild, 0,
/*3019*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3022*/      OPC_RecordMemRef,
/*3023*/      OPC_RecordNode, // #0 = 'ld' chained node
/*3024*/      OPC_CheckFoldableChainNode,
/*3025*/      OPC_RecordChild1, // #1 = $src2
/*3026*/      OPC_CheckChild1Type, MVT::i64,
/*3028*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3030*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*3032*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*3034*/      OPC_MoveParent,
/*3035*/      OPC_RecordChild1, // #2 = $src1
/*3036*/      OPC_CheckPredicate, 21, // Predicate_or_as_inserti8
/*3038*/      OPC_CheckType, MVT::i32,
/*3040*/      OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*3043*/      OPC_EmitMergeInputChains1_0,
/*3044*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i32 (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR32:i32:$src1)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (IC32Y:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*3055*/    /*Scope*/ 38, /*->3094*/
/*3056*/      OPC_RecordChild0, // #0 = $src1
/*3057*/      OPC_MoveChild, 1,
/*3059*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3062*/      OPC_RecordMemRef,
/*3063*/      OPC_RecordNode, // #1 = 'ld' chained node
/*3064*/      OPC_CheckFoldableChainNode,
/*3065*/      OPC_RecordChild1, // #2 = $src2
/*3066*/      OPC_CheckChild1Type, MVT::i64,
/*3068*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3070*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*3072*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*3074*/      OPC_MoveParent,
/*3075*/      OPC_CheckPredicate, 22, // Predicate_or_as_revinserti8
/*3077*/      OPC_CheckType, MVT::i32,
/*3079*/      OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*3082*/      OPC_EmitMergeInputChains1_1,
/*3083*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i32 GR32:i32:$src1, (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC32Y:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*3094*/    /*Scope*/ 38, /*->3133*/
/*3095*/      OPC_MoveChild, 0,
/*3097*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3100*/      OPC_RecordMemRef,
/*3101*/      OPC_RecordNode, // #0 = 'ld' chained node
/*3102*/      OPC_CheckFoldableChainNode,
/*3103*/      OPC_RecordChild1, // #1 = $src2
/*3104*/      OPC_CheckChild1Type, MVT::i64,
/*3106*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3108*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*3110*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*3112*/      OPC_MoveParent,
/*3113*/      OPC_RecordChild1, // #2 = $src1
/*3114*/      OPC_CheckPredicate, 21, // Predicate_or_as_inserti8
/*3116*/      OPC_CheckType, MVT::i64,
/*3118*/      OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*3121*/      OPC_EmitMergeInputChains1_0,
/*3122*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i64 (ld:i64 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR64:i64:$src1)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (IC:i64 GR64:i64:$src1, bdxaddr12pair:i64:$src2)
/*3133*/    /*Scope*/ 38, /*->3172*/
/*3134*/      OPC_RecordChild0, // #0 = $src1
/*3135*/      OPC_MoveChild, 1,
/*3137*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3140*/      OPC_RecordMemRef,
/*3141*/      OPC_RecordNode, // #1 = 'ld' chained node
/*3142*/      OPC_CheckFoldableChainNode,
/*3143*/      OPC_RecordChild1, // #2 = $src2
/*3144*/      OPC_CheckChild1Type, MVT::i64,
/*3146*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3148*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*3150*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*3152*/      OPC_MoveParent,
/*3153*/      OPC_CheckPredicate, 22, // Predicate_or_as_revinserti8
/*3155*/      OPC_CheckType, MVT::i64,
/*3157*/      OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*3160*/      OPC_EmitMergeInputChains1_1,
/*3161*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i64 GR64:i64:$src1, (ld:i64 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC:i64 GR64:i64:$src1, bdxaddr12pair:i64:$src2)
/*3172*/    /*Scope*/ 38, /*->3211*/
/*3173*/      OPC_MoveChild, 0,
/*3175*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3178*/      OPC_RecordMemRef,
/*3179*/      OPC_RecordNode, // #0 = 'ld' chained node
/*3180*/      OPC_CheckFoldableChainNode,
/*3181*/      OPC_RecordChild1, // #1 = $src2
/*3182*/      OPC_CheckChild1Type, MVT::i64,
/*3184*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3186*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*3188*/      OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*3190*/      OPC_MoveParent,
/*3191*/      OPC_RecordChild1, // #2 = $src1
/*3192*/      OPC_CheckPredicate, 21, // Predicate_or_as_inserti8
/*3194*/      OPC_CheckType, MVT::i64,
/*3196*/      OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*3199*/      OPC_EmitMergeInputChains1_0,
/*3200*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i64 (ld:i64 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR64:i64:$src1)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (ICY:i64 GR64:i64:$src1, bdxaddr20pair:i64:$src2)
/*3211*/    /*Scope*/ 100, /*->3312*/
/*3212*/      OPC_RecordChild0, // #0 = $src1
/*3213*/      OPC_MoveChild, 1,
/*3215*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3218*/      OPC_RecordMemRef,
/*3219*/      OPC_RecordNode, // #1 = 'ld' chained node
/*3220*/      OPC_CheckFoldableChainNode,
/*3221*/      OPC_RecordChild1, // #2 = $src2
/*3222*/      OPC_CheckChild1Type, MVT::i64,
/*3224*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3226*/      OPC_Scope, 24, /*->3252*/ // 2 children in Scope
/*3228*/        OPC_CheckPredicate, 6, // Predicate_zextload
/*3230*/        OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*3232*/        OPC_MoveParent,
/*3233*/        OPC_CheckPredicate, 22, // Predicate_or_as_revinserti8
/*3235*/        OPC_CheckType, MVT::i64,
/*3237*/        OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*3240*/        OPC_EmitMergeInputChains1_1,
/*3241*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (or:i64 GR64:i64:$src1, (ld:i64 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
                // Dst: (ICY:i64 GR64:i64:$src1, bdxaddr20pair:i64:$src2)
/*3252*/      /*Scope*/ 58, /*->3311*/
/*3253*/        OPC_CheckPredicate, 1, // Predicate_load
/*3255*/        OPC_MoveParent,
/*3256*/        OPC_SwitchType /*2 cases */, 34,  MVT::i32,// ->3293
/*3259*/          OPC_Scope, 15, /*->3276*/ // 2 children in Scope
/*3261*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*3264*/            OPC_EmitMergeInputChains1_1,
/*3265*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::O), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i32 GR32:i32:$src1, (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (O:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*3276*/          /*Scope*/ 15, /*->3292*/
/*3277*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*3280*/            OPC_EmitMergeInputChains1_1,
/*3281*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i32 GR32:i32:$src1, (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (OY:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*3292*/          0, /*End of Scope*/
                /*SwitchType*/ 15,  MVT::i64,// ->3310
/*3295*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*3298*/          OPC_EmitMergeInputChains1_1,
/*3299*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OG), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (or:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (OG:i64 GR64:i64:$src1, bdxaddr20only:i64:$src2)
                0, // EndSwitchType
/*3311*/      0, /*End of Scope*/
/*3312*/    /*Scope*/ 123|128,2/*379*/, /*->3693*/
/*3314*/      OPC_MoveChild, 0,
/*3316*/      OPC_Scope, 70, /*->3388*/ // 9 children in Scope
/*3318*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3321*/        OPC_RecordMemRef,
/*3322*/        OPC_RecordNode, // #0 = 'ld' chained node
/*3323*/        OPC_CheckFoldableChainNode,
/*3324*/        OPC_RecordChild1, // #1 = $src2
/*3325*/        OPC_CheckChild1Type, MVT::i64,
/*3327*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3329*/        OPC_CheckPredicate, 1, // Predicate_load
/*3331*/        OPC_MoveParent,
/*3332*/        OPC_RecordChild1, // #2 = $src1
/*3333*/        OPC_SwitchType /*2 cases */, 34,  MVT::i32,// ->3370
/*3336*/          OPC_Scope, 15, /*->3353*/ // 2 children in Scope
/*3338*/            OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*3341*/            OPC_EmitMergeInputChains1_0,
/*3342*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::O), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i32 (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 19
                    // Dst: (O:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*3353*/          /*Scope*/ 15, /*->3369*/
/*3354*/            OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*3357*/            OPC_EmitMergeInputChains1_0,
/*3358*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i32 (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 19
                    // Dst: (OY:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*3369*/          0, /*End of Scope*/
                /*SwitchType*/ 15,  MVT::i64,// ->3387
/*3372*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$src2 #3 #4 #5
/*3375*/          OPC_EmitMergeInputChains1_0,
/*3376*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OG), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (or:i64 (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$src1) - Complexity = 19
                  // Dst: (OG:i64 GR64:i64:$src1, bdxaddr20only:i64:$src2)
                0, // EndSwitchType
/*3388*/      /*Scope*/ 38, /*->3427*/
/*3389*/        OPC_CheckAndImm, 0|128,0|128,124|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709486080*/, 
/*3400*/        OPC_RecordChild0, // #0 = $src1
/*3401*/        OPC_MoveParent,
/*3402*/        OPC_RecordChild1, // #1 = $src2
/*3403*/        OPC_MoveChild, 1,
/*3405*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3408*/        OPC_CheckPredicate, 23, // Predicate_imm32ll16
/*3410*/        OPC_MoveParent,
/*3411*/        OPC_CheckType, MVT::i32,
/*3413*/        OPC_EmitConvertToTarget, 1,
/*3415*/        OPC_EmitNodeXForm, 3, 2, // LL16
/*3418*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILL32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (or:i32 (and:i32 GR32:i32:$src1, -65536:i32), (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$src2) - Complexity = 15
                // Dst: (IILL32:i32 GR32:i32:$src1, (LL16:i32 (imm:i32):$src2))
/*3427*/      /*Scope*/ 38, /*->3466*/
/*3428*/        OPC_CheckAndImm, 127|128,127|128,3|128,0|128,112|128,127|128,127|128,127|128,127|128,1/*18446744069414649855*/, 
/*3439*/        OPC_RecordChild0, // #0 = $src1
/*3440*/        OPC_MoveParent,
/*3441*/        OPC_RecordChild1, // #1 = $src2
/*3442*/        OPC_MoveChild, 1,
/*3444*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3447*/        OPC_CheckPredicate, 24, // Predicate_imm32lh16
/*3449*/        OPC_MoveParent,
/*3450*/        OPC_CheckType, MVT::i32,
/*3452*/        OPC_EmitConvertToTarget, 1,
/*3454*/        OPC_EmitNodeXForm, 4, 2, // LH16
/*3457*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILH32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (or:i32 (and:i32 GR32:i32:$src1, -4294901761:i32), (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$src2) - Complexity = 15
                // Dst: (IILH32:i32 GR32:i32:$src1, (LH16:i32 (imm:i32):$src2))
/*3466*/      /*Scope*/ 38, /*->3505*/
/*3467*/        OPC_CheckAndImm, 0|128,0|128,124|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709486080*/, 
/*3478*/        OPC_RecordChild0, // #0 = $src1
/*3479*/        OPC_MoveParent,
/*3480*/        OPC_RecordChild1, // #1 = $src2
/*3481*/        OPC_MoveChild, 1,
/*3483*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3486*/        OPC_CheckPredicate, 25, // Predicate_imm64ll16
/*3488*/        OPC_MoveParent,
/*3489*/        OPC_CheckType, MVT::i64,
/*3491*/        OPC_EmitConvertToTarget, 1,
/*3493*/        OPC_EmitNodeXForm, 3, 2, // LL16
/*3496*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILL), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$src1, -65536:i64), (imm:i64)<<P:Predicate_imm64ll16>><<X:LL16>>:$src2) - Complexity = 15
                // Dst: (IILL:i64 GR64:i64:$src1, (LL16:i64 (imm:i64):$src2))
/*3505*/      /*Scope*/ 38, /*->3544*/
/*3506*/        OPC_CheckAndImm, 127|128,127|128,3|128,0|128,112|128,127|128,127|128,127|128,127|128,1/*18446744069414649855*/, 
/*3517*/        OPC_RecordChild0, // #0 = $src1
/*3518*/        OPC_MoveParent,
/*3519*/        OPC_RecordChild1, // #1 = $src2
/*3520*/        OPC_MoveChild, 1,
/*3522*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3525*/        OPC_CheckPredicate, 26, // Predicate_imm64lh16
/*3527*/        OPC_MoveParent,
/*3528*/        OPC_CheckType, MVT::i64,
/*3530*/        OPC_EmitConvertToTarget, 1,
/*3532*/        OPC_EmitNodeXForm, 4, 2, // LH16
/*3535*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILH), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$src1, -4294901761:i64), (imm:i64)<<P:Predicate_imm64lh16>><<X:LH16>>:$src2) - Complexity = 15
                // Dst: (IILH:i64 GR64:i64:$src1, (LH16:i64 (imm:i64):$src2))
/*3544*/      /*Scope*/ 38, /*->3583*/
/*3545*/        OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15|128,0|128,64|128,127|128,127|128,1/*18446462603027808255*/, 
/*3556*/        OPC_RecordChild0, // #0 = $src1
/*3557*/        OPC_MoveParent,
/*3558*/        OPC_RecordChild1, // #1 = $src2
/*3559*/        OPC_MoveChild, 1,
/*3561*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3564*/        OPC_CheckPredicate, 27, // Predicate_imm64hl16
/*3566*/        OPC_MoveParent,
/*3567*/        OPC_CheckType, MVT::i64,
/*3569*/        OPC_EmitConvertToTarget, 1,
/*3571*/        OPC_EmitNodeXForm, 5, 2, // HL16
/*3574*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHL), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$src1, -281470681743361:i64), (imm:i64)<<P:Predicate_imm64hl16>><<X:HL16>>:$src2) - Complexity = 15
                // Dst: (IIHL:i64 GR64:i64:$src1, (HL16:i64 (imm:i64):$src2))
/*3583*/      /*Scope*/ 35, /*->3619*/
/*3584*/        OPC_CheckAndImm, 127|128,127|128,127|128,127|128,127|128,127|128,63/*281474976710655*/, 
/*3592*/        OPC_RecordChild0, // #0 = $src1
/*3593*/        OPC_MoveParent,
/*3594*/        OPC_RecordChild1, // #1 = $src2
/*3595*/        OPC_MoveChild, 1,
/*3597*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3600*/        OPC_CheckPredicate, 28, // Predicate_imm64hh16
/*3602*/        OPC_MoveParent,
/*3603*/        OPC_CheckType, MVT::i64,
/*3605*/        OPC_EmitConvertToTarget, 1,
/*3607*/        OPC_EmitNodeXForm, 6, 2, // HH16
/*3610*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHH), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$src1, 281474976710655:i64), (imm:i64)<<P:Predicate_imm64hh16>><<X:HH16>>:$src2) - Complexity = 15
                // Dst: (IIHH:i64 GR64:i64:$src1, (HH16:i64 (imm:i64):$src2))
/*3619*/      /*Scope*/ 38, /*->3658*/
/*3620*/        OPC_CheckAndImm, 0|128,0|128,0|128,0|128,112|128,127|128,127|128,127|128,127|128,1/*18446744069414584320*/, 
/*3631*/        OPC_RecordChild0, // #0 = $src1
/*3632*/        OPC_MoveParent,
/*3633*/        OPC_RecordChild1, // #1 = $src2
/*3634*/        OPC_MoveChild, 1,
/*3636*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3639*/        OPC_CheckPredicate, 29, // Predicate_imm64lf32
/*3641*/        OPC_MoveParent,
/*3642*/        OPC_CheckType, MVT::i64,
/*3644*/        OPC_EmitConvertToTarget, 1,
/*3646*/        OPC_EmitNodeXForm, 7, 2, // LF32
/*3649*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILF), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$src1, -4294967296:i64), (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$src2) - Complexity = 15
                // Dst: (IILF:i64 GR64:i64:$src1, (LF32:i64 (imm:i64):$src2))
/*3658*/      /*Scope*/ 33, /*->3692*/
/*3659*/        OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*3665*/        OPC_RecordChild0, // #0 = $src1
/*3666*/        OPC_MoveParent,
/*3667*/        OPC_RecordChild1, // #1 = $src2
/*3668*/        OPC_MoveChild, 1,
/*3670*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3673*/        OPC_CheckPredicate, 30, // Predicate_imm64hf32
/*3675*/        OPC_MoveParent,
/*3676*/        OPC_CheckType, MVT::i64,
/*3678*/        OPC_EmitConvertToTarget, 1,
/*3680*/        OPC_EmitNodeXForm, 8, 2, // HF32
/*3683*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHF), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$src1, 4294967295:i64), (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$src2) - Complexity = 15
                // Dst: (IIHF:i64 GR64:i64:$src1, (HF32:i64 (imm:i64):$src2))
/*3692*/      0, /*End of Scope*/
/*3693*/    /*Scope*/ 47, /*->3741*/
/*3694*/      OPC_RecordNode, // #0 = $src
/*3695*/      OPC_CheckType, MVT::i64,
/*3697*/      OPC_Scope, 13, /*->3712*/ // 3 children in Scope
/*3699*/        OPC_CheckComplexPat, /*CP*/9, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*3702*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: dynalloc12only:i64:$src - Complexity = 12
                // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*3712*/      /*Scope*/ 13, /*->3726*/
/*3713*/        OPC_CheckComplexPat, /*CP*/10, /*#*/0, // selectLAAddr12Pair:$src #1 #2 #3
/*3716*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr12pair:i64:$src - Complexity = 12
                // Dst: (LA:i64 laaddr12pair:i64:$src)
/*3726*/      /*Scope*/ 13, /*->3740*/
/*3727*/        OPC_CheckComplexPat, /*CP*/11, /*#*/0, // selectLAAddr20Pair:$src #1 #2 #3
/*3730*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr20pair:i64:$src - Complexity = 12
                // Dst: (LAY:i64 laaddr20pair:i64:$src)
/*3740*/      0, /*End of Scope*/
/*3741*/    /*Scope*/ 50, /*->3792*/
/*3742*/      OPC_MoveChild, 0,
/*3744*/      OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*3747*/      OPC_RecordChild0, // #0 = $src
/*3748*/      OPC_MoveParent,
/*3749*/      OPC_RecordChild1, // #1 = $imm
/*3750*/      OPC_MoveChild, 1,
/*3752*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3755*/      OPC_CheckPredicate, 30, // Predicate_imm64hf32
/*3757*/      OPC_MoveParent,
/*3758*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                  1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #2
/*3765*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*3768*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 0, 3,  // Results = #4
/*3778*/      OPC_EmitConvertToTarget, 1,
/*3780*/      OPC_EmitNodeXForm, 8, 5, // HF32
/*3783*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHF), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 4, 6, 
              // Src: (or:i64 (zext:i64 GR32:i32:$src), (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$imm) - Complexity = 10
              // Dst: (IIHF:i64 (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), GR32:i32:$src, subreg_32bit:i32), (HF32:i64 (imm:i64)<<P:Predicate_imm64hf32>>:$imm))
/*3792*/    /*Scope*/ 87|128,1/*215*/, /*->4009*/
/*3794*/      OPC_RecordChild0, // #0 = $src1
/*3795*/      OPC_RecordChild1, // #1 = $src2
/*3796*/      OPC_Scope, 57|128,1/*185*/, /*->3984*/ // 3 children in Scope
/*3799*/        OPC_MoveChild, 1,
/*3801*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3804*/        OPC_Scope, 19, /*->3825*/ // 9 children in Scope
/*3806*/          OPC_CheckPredicate, 23, // Predicate_imm32ll16
/*3808*/          OPC_MoveParent,
/*3809*/          OPC_CheckType, MVT::i32,
/*3811*/          OPC_EmitConvertToTarget, 1,
/*3813*/          OPC_EmitNodeXForm, 3, 2, // LL16
/*3816*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILL32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GR32:i32:$src1, (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$src2) - Complexity = 7
                  // Dst: (OILL32:i32 GR32:i32:$src1, (LL16:i32 (imm:i32):$src2))
/*3825*/        /*Scope*/ 19, /*->3845*/
/*3826*/          OPC_CheckPredicate, 24, // Predicate_imm32lh16
/*3828*/          OPC_MoveParent,
/*3829*/          OPC_CheckType, MVT::i32,
/*3831*/          OPC_EmitConvertToTarget, 1,
/*3833*/          OPC_EmitNodeXForm, 4, 2, // LH16
/*3836*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILH32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GR32:i32:$src1, (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$src2) - Complexity = 7
                  // Dst: (OILH32:i32 GR32:i32:$src1, (LH16:i32 (imm:i32):$src2))
/*3845*/        /*Scope*/ 19, /*->3865*/
/*3846*/          OPC_CheckPredicate, 25, // Predicate_imm64ll16
/*3848*/          OPC_MoveParent,
/*3849*/          OPC_CheckType, MVT::i64,
/*3851*/          OPC_EmitConvertToTarget, 1,
/*3853*/          OPC_EmitNodeXForm, 3, 2, // LL16
/*3856*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILL), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64ll16>><<X:LL16>>:$src2) - Complexity = 7
                  // Dst: (OILL:i64 GR64:i64:$src1, (LL16:i64 (imm:i64):$src2))
/*3865*/        /*Scope*/ 19, /*->3885*/
/*3866*/          OPC_CheckPredicate, 26, // Predicate_imm64lh16
/*3868*/          OPC_MoveParent,
/*3869*/          OPC_CheckType, MVT::i64,
/*3871*/          OPC_EmitConvertToTarget, 1,
/*3873*/          OPC_EmitNodeXForm, 4, 2, // LH16
/*3876*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILH), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64lh16>><<X:LH16>>:$src2) - Complexity = 7
                  // Dst: (OILH:i64 GR64:i64:$src1, (LH16:i64 (imm:i64):$src2))
/*3885*/        /*Scope*/ 19, /*->3905*/
/*3886*/          OPC_CheckPredicate, 27, // Predicate_imm64hl16
/*3888*/          OPC_MoveParent,
/*3889*/          OPC_CheckType, MVT::i64,
/*3891*/          OPC_EmitConvertToTarget, 1,
/*3893*/          OPC_EmitNodeXForm, 5, 2, // HL16
/*3896*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIHL), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64hl16>><<X:HL16>>:$src2) - Complexity = 7
                  // Dst: (OIHL:i64 GR64:i64:$src1, (HL16:i64 (imm:i64):$src2))
/*3905*/        /*Scope*/ 19, /*->3925*/
/*3906*/          OPC_CheckPredicate, 28, // Predicate_imm64hh16
/*3908*/          OPC_MoveParent,
/*3909*/          OPC_CheckType, MVT::i64,
/*3911*/          OPC_EmitConvertToTarget, 1,
/*3913*/          OPC_EmitNodeXForm, 6, 2, // HH16
/*3916*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIHH), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64hh16>><<X:HH16>>:$src2) - Complexity = 7
                  // Dst: (OIHH:i64 GR64:i64:$src1, (HH16:i64 (imm:i64):$src2))
/*3925*/        /*Scope*/ 19, /*->3945*/
/*3926*/          OPC_CheckPredicate, 29, // Predicate_imm64lf32
/*3928*/          OPC_MoveParent,
/*3929*/          OPC_CheckType, MVT::i64,
/*3931*/          OPC_EmitConvertToTarget, 1,
/*3933*/          OPC_EmitNodeXForm, 7, 2, // LF32
/*3936*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILF), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$src2) - Complexity = 7
                  // Dst: (OILF:i64 GR64:i64:$src1, (LF32:i64 (imm:i64):$src2))
/*3945*/        /*Scope*/ 19, /*->3965*/
/*3946*/          OPC_CheckPredicate, 30, // Predicate_imm64hf32
/*3948*/          OPC_MoveParent,
/*3949*/          OPC_CheckType, MVT::i64,
/*3951*/          OPC_EmitConvertToTarget, 1,
/*3953*/          OPC_EmitNodeXForm, 8, 2, // HF32
/*3956*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIHF), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$src2) - Complexity = 7
                  // Dst: (OIHF:i64 GR64:i64:$src1, (HF32:i64 (imm:i64):$src2))
/*3965*/        /*Scope*/ 17, /*->3983*/
/*3966*/          OPC_MoveParent,
/*3967*/          OPC_CheckType, MVT::i32,
/*3969*/          OPC_EmitConvertToTarget, 1,
/*3971*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*3974*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILF32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GR32:i32:$src1, (imm:i32)<<X:UIMM32>>:$src2) - Complexity = 6
                  // Dst: (OILF32:i32 GR32:i32:$src1, (UIMM32:i32 (imm:i32):$src2))
/*3983*/        0, /*End of Scope*/
/*3984*/      /*Scope*/ 11, /*->3996*/
/*3985*/        OPC_CheckType, MVT::i32,
/*3987*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                // Dst: (OR:i32 GR32:i32:$src1, GR32:i32:$src2)
/*3996*/      /*Scope*/ 11, /*->4008*/
/*3997*/        OPC_CheckType, MVT::i64,
/*3999*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::OGR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                // Dst: (OGR:i64 GR64:i64:$src1, GR64:i64:$src2)
/*4008*/      0, /*End of Scope*/
/*4009*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 55|128,5/*695*/,  TARGET_VAL(SystemZISD::CMP),// ->4709
/*4014*/    OPC_Scope, 8|128,1/*136*/, /*->4153*/ // 3 children in Scope
/*4017*/      OPC_RecordChild0, // #0 = $src1
/*4018*/      OPC_Scope, 55, /*->4075*/ // 2 children in Scope
/*4020*/        OPC_CheckChild0Type, MVT::i32,
/*4022*/        OPC_MoveChild, 1,
/*4024*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4027*/        OPC_RecordMemRef,
/*4028*/        OPC_RecordNode, // #1 = 'ld' chained node
/*4029*/        OPC_CheckFoldableChainNode,
/*4030*/        OPC_RecordChild1, // #2 = $src2
/*4031*/        OPC_CheckChild1Type, MVT::i64,
/*4033*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4035*/        OPC_Scope, 19, /*->4056*/ // 2 children in Scope
/*4037*/          OPC_CheckPredicate, 10, // Predicate_sextload
/*4039*/          OPC_CheckPredicate, 31, // Predicate_sextloadi16
/*4041*/          OPC_CheckPredicate, 32, // Predicate_aligned_sextloadi16
/*4043*/          OPC_MoveParent,
/*4044*/          OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$src2 #3
/*4047*/          OPC_EmitMergeInputChains1_1,
/*4048*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                  // Src: (z_cmp GR32:i32:$src1, (ld:i32 pcrel32:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_aligned_sextloadi16>>) - Complexity = 20
                  // Dst: (CHRL GR32:i32:$src1, pcrel32:i64:$src2)
/*4056*/        /*Scope*/ 17, /*->4074*/
/*4057*/          OPC_CheckPredicate, 1, // Predicate_load
/*4059*/          OPC_CheckPredicate, 33, // Predicate_aligned_load
/*4061*/          OPC_MoveParent,
/*4062*/          OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$src2 #3
/*4065*/          OPC_EmitMergeInputChains1_1,
/*4066*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                  // Src: (z_cmp GR32:i32:$src1, (ld:i32 pcrel32:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>>) - Complexity = 20
                  // Dst: (CRL GR32:i32:$src1, pcrel32:i64:$src2)
/*4074*/        0, /*End of Scope*/
/*4075*/      /*Scope*/ 76, /*->4152*/
/*4076*/        OPC_CheckChild0Type, MVT::i64,
/*4078*/        OPC_MoveChild, 1,
/*4080*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4083*/        OPC_RecordMemRef,
/*4084*/        OPC_RecordNode, // #1 = 'ld' chained node
/*4085*/        OPC_CheckFoldableChainNode,
/*4086*/        OPC_RecordChild1, // #2 = $src2
/*4087*/        OPC_CheckChild1Type, MVT::i64,
/*4089*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4091*/        OPC_Scope, 40, /*->4133*/ // 2 children in Scope
/*4093*/          OPC_CheckPredicate, 10, // Predicate_sextload
/*4095*/          OPC_Scope, 17, /*->4114*/ // 2 children in Scope
/*4097*/            OPC_CheckPredicate, 31, // Predicate_sextloadi16
/*4099*/            OPC_CheckPredicate, 32, // Predicate_aligned_sextloadi16
/*4101*/            OPC_MoveParent,
/*4102*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$src2 #3
/*4105*/            OPC_EmitMergeInputChains1_1,
/*4106*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGHRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR64:i64:$src1, (ld:i64 pcrel32:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_aligned_sextloadi16>>) - Complexity = 20
                    // Dst: (CGHRL GR64:i64:$src1, pcrel32:i64:$src2)
/*4114*/          /*Scope*/ 17, /*->4132*/
/*4115*/            OPC_CheckPredicate, 34, // Predicate_sextloadi32
/*4117*/            OPC_CheckPredicate, 35, // Predicate_aligned_sextloadi32
/*4119*/            OPC_MoveParent,
/*4120*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$src2 #3
/*4123*/            OPC_EmitMergeInputChains1_1,
/*4124*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGFRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR64:i64:$src1, (ld:i64 pcrel32:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>><<P:Predicate_aligned_sextloadi32>>) - Complexity = 20
                    // Dst: (CGFRL GR64:i64:$src1, pcrel32:i64:$src2)
/*4132*/          0, /*End of Scope*/
/*4133*/        /*Scope*/ 17, /*->4151*/
/*4134*/          OPC_CheckPredicate, 1, // Predicate_load
/*4136*/          OPC_CheckPredicate, 33, // Predicate_aligned_load
/*4138*/          OPC_MoveParent,
/*4139*/          OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$src2 #3
/*4142*/          OPC_EmitMergeInputChains1_1,
/*4143*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                  // Src: (z_cmp GR64:i64:$src1, (ld:i64 pcrel32:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>>) - Complexity = 20
                  // Dst: (CGRL GR64:i64:$src1, pcrel32:i64:$src2)
/*4151*/        0, /*End of Scope*/
/*4152*/      0, /*End of Scope*/
/*4153*/    /*Scope*/ 115, /*->4269*/
/*4154*/      OPC_MoveChild, 0,
/*4156*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4159*/      OPC_RecordMemRef,
/*4160*/      OPC_RecordNode, // #0 = 'ld' chained node
/*4161*/      OPC_CheckFoldableChainNode,
/*4162*/      OPC_RecordChild1, // #1 = $addr
/*4163*/      OPC_CheckChild1Type, MVT::i64,
/*4165*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4167*/      OPC_Scope, 34, /*->4203*/ // 2 children in Scope
/*4169*/        OPC_CheckPredicate, 10, // Predicate_sextload
/*4171*/        OPC_CheckPredicate, 31, // Predicate_sextloadi16
/*4173*/        OPC_CheckType, MVT::i32,
/*4175*/        OPC_MoveParent,
/*4176*/        OPC_RecordChild1, // #2 = $src
/*4177*/        OPC_MoveChild, 1,
/*4179*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4182*/        OPC_CheckPredicate, 15, // Predicate_imm32sx16
/*4184*/        OPC_MoveParent,
/*4185*/        OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectBDAddr12Only:$addr #3 #4
/*4188*/        OPC_EmitMergeInputChains1_0,
/*4189*/        OPC_EmitConvertToTarget, 2,
/*4191*/        OPC_EmitNodeXForm, 2, 5, // SIMM16
/*4194*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                // Src: (z_cmp (ld:i32 bdaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$src) - Complexity = 20
                // Dst: (CHHSI bdaddr12only:i64:$addr, (SIMM16:i32 (imm:i32):$src))
/*4203*/      /*Scope*/ 64, /*->4268*/
/*4204*/        OPC_CheckPredicate, 1, // Predicate_load
/*4206*/        OPC_SwitchType /*2 cases */, 28,  MVT::i32,// ->4237
/*4209*/          OPC_MoveParent,
/*4210*/          OPC_RecordChild1, // #2 = $src
/*4211*/          OPC_MoveChild, 1,
/*4213*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4216*/          OPC_CheckPredicate, 15, // Predicate_imm32sx16
/*4218*/          OPC_MoveParent,
/*4219*/          OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectBDAddr12Only:$addr #3 #4
/*4222*/          OPC_EmitMergeInputChains1_0,
/*4223*/          OPC_EmitConvertToTarget, 2,
/*4225*/          OPC_EmitNodeXForm, 2, 5, // SIMM16
/*4228*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_cmp (ld:i32 bdaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$src) - Complexity = 20
                  // Dst: (CHSI bdaddr12only:i64:$addr, (SIMM16:i32 (imm:i32):$src))
                /*SwitchType*/ 28,  MVT::i64,// ->4267
/*4239*/          OPC_MoveParent,
/*4240*/          OPC_RecordChild1, // #2 = $src
/*4241*/          OPC_MoveChild, 1,
/*4243*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4246*/          OPC_CheckPredicate, 16, // Predicate_imm64sx16
/*4248*/          OPC_MoveParent,
/*4249*/          OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectBDAddr12Only:$addr #3 #4
/*4252*/          OPC_EmitMergeInputChains1_0,
/*4253*/          OPC_EmitConvertToTarget, 2,
/*4255*/          OPC_EmitNodeXForm, 2, 5, // SIMM16
/*4258*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_cmp (ld:i64 bdaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$src) - Complexity = 20
                  // Dst: (CGHSI bdaddr12only:i64:$addr, (SIMM16:i64 (imm:i64):$src))
                0, // EndSwitchType
/*4268*/      0, /*End of Scope*/
/*4269*/    /*Scope*/ 53|128,3/*437*/, /*->4708*/
/*4271*/      OPC_RecordChild0, // #0 = $src1
/*4272*/      OPC_Scope, 7|128,1/*135*/, /*->4410*/ // 10 children in Scope
/*4275*/        OPC_CheckChild0Type, MVT::i32,
/*4277*/        OPC_Scope, 89, /*->4368*/ // 2 children in Scope
/*4279*/          OPC_MoveChild, 1,
/*4281*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4284*/          OPC_RecordMemRef,
/*4285*/          OPC_RecordNode, // #1 = 'ld' chained node
/*4286*/          OPC_CheckFoldableChainNode,
/*4287*/          OPC_RecordChild1, // #2 = $src2
/*4288*/          OPC_CheckChild1Type, MVT::i64,
/*4290*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4292*/          OPC_Scope, 37, /*->4331*/ // 2 children in Scope
/*4294*/            OPC_CheckPredicate, 10, // Predicate_sextload
/*4296*/            OPC_CheckPredicate, 31, // Predicate_sextloadi16
/*4298*/            OPC_MoveParent,
/*4299*/            OPC_Scope, 14, /*->4315*/ // 2 children in Scope
/*4301*/              OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*4304*/              OPC_EmitMergeInputChains1_1,
/*4305*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::CH), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR32:i32:$src1, (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                      // Dst: (CH GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*4315*/            /*Scope*/ 14, /*->4330*/
/*4316*/              OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*4319*/              OPC_EmitMergeInputChains1_1,
/*4320*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR32:i32:$src1, (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                      // Dst: (CHY GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*4330*/            0, /*End of Scope*/
/*4331*/          /*Scope*/ 35, /*->4367*/
/*4332*/            OPC_CheckPredicate, 1, // Predicate_load
/*4334*/            OPC_MoveParent,
/*4335*/            OPC_Scope, 14, /*->4351*/ // 2 children in Scope
/*4337*/              OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*4340*/              OPC_EmitMergeInputChains1_1,
/*4341*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::C), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR32:i32:$src1, (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                      // Dst: (C GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*4351*/            /*Scope*/ 14, /*->4366*/
/*4352*/              OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*4355*/              OPC_EmitMergeInputChains1_1,
/*4356*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::CY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR32:i32:$src1, (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                      // Dst: (CY GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*4366*/            0, /*End of Scope*/
/*4367*/          0, /*End of Scope*/
/*4368*/        /*Scope*/ 40, /*->4409*/
/*4369*/          OPC_RecordChild1, // #1 = $src2
/*4370*/          OPC_MoveChild, 1,
/*4372*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4375*/          OPC_Scope, 16, /*->4393*/ // 2 children in Scope
/*4377*/            OPC_CheckPredicate, 15, // Predicate_imm32sx16
/*4379*/            OPC_MoveParent,
/*4380*/            OPC_EmitConvertToTarget, 1,
/*4382*/            OPC_EmitNodeXForm, 2, 2, // SIMM16
/*4385*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHI), 0|OPFL_GlueOutput,
                        0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR32:i32:$src1, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$src2) - Complexity = 7
                    // Dst: (CHI GR32:i32:$src1, (SIMM16:i32 (imm:i32):$src2))
/*4393*/          /*Scope*/ 14, /*->4408*/
/*4394*/            OPC_MoveParent,
/*4395*/            OPC_EmitConvertToTarget, 1,
/*4397*/            OPC_EmitNodeXForm, 10, 2, // SIMM32
/*4400*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CFI), 0|OPFL_GlueOutput,
                        0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR32:i32:$src1, (imm:i32)<<X:SIMM32>>:$src2) - Complexity = 6
                    // Dst: (CFI GR32:i32:$src1, (SIMM32:i32 (imm:i32):$src2))
/*4408*/          0, /*End of Scope*/
/*4409*/        0, /*End of Scope*/
/*4410*/      /*Scope*/ 122, /*->4533*/
/*4411*/        OPC_CheckChild0Type, MVT::i64,
/*4413*/        OPC_Scope, 74, /*->4489*/ // 2 children in Scope
/*4415*/          OPC_MoveChild, 1,
/*4417*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4420*/          OPC_RecordMemRef,
/*4421*/          OPC_RecordNode, // #1 = 'ld' chained node
/*4422*/          OPC_CheckFoldableChainNode,
/*4423*/          OPC_RecordChild1, // #2 = $src2
/*4424*/          OPC_CheckChild1Type, MVT::i64,
/*4426*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4428*/          OPC_Scope, 40, /*->4470*/ // 2 children in Scope
/*4430*/            OPC_CheckPredicate, 10, // Predicate_sextload
/*4432*/            OPC_Scope, 17, /*->4451*/ // 2 children in Scope
/*4434*/              OPC_CheckPredicate, 31, // Predicate_sextloadi16
/*4436*/              OPC_MoveParent,
/*4437*/              OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*4440*/              OPC_EmitMergeInputChains1_1,
/*4441*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGH), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                      // Dst: (CGH GR64:i64:$src1, bdxaddr20only:i64:$src2)
/*4451*/            /*Scope*/ 17, /*->4469*/
/*4452*/              OPC_CheckPredicate, 34, // Predicate_sextloadi32
/*4454*/              OPC_MoveParent,
/*4455*/              OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*4458*/              OPC_EmitMergeInputChains1_1,
/*4459*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>) - Complexity = 19
                      // Dst: (CGF GR64:i64:$src1, bdxaddr20only:i64:$src2)
/*4469*/            0, /*End of Scope*/
/*4470*/          /*Scope*/ 17, /*->4488*/
/*4471*/            OPC_CheckPredicate, 1, // Predicate_load
/*4473*/            OPC_MoveParent,
/*4474*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*4477*/            OPC_EmitMergeInputChains1_1,
/*4478*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (z_cmp GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (CG GR64:i64:$src1, bdxaddr20only:i64:$src2)
/*4488*/          0, /*End of Scope*/
/*4489*/        /*Scope*/ 42, /*->4532*/
/*4490*/          OPC_RecordChild1, // #1 = $src2
/*4491*/          OPC_MoveChild, 1,
/*4493*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4496*/          OPC_Scope, 16, /*->4514*/ // 2 children in Scope
/*4498*/            OPC_CheckPredicate, 16, // Predicate_imm64sx16
/*4500*/            OPC_MoveParent,
/*4501*/            OPC_EmitConvertToTarget, 1,
/*4503*/            OPC_EmitNodeXForm, 2, 2, // SIMM16
/*4506*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGHI), 0|OPFL_GlueOutput,
                        0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$src2) - Complexity = 7
                    // Dst: (CGHI GR64:i64:$src1, (SIMM16:i64 (imm:i64):$src2))
/*4514*/          /*Scope*/ 16, /*->4531*/
/*4515*/            OPC_CheckPredicate, 36, // Predicate_imm64sx32
/*4517*/            OPC_MoveParent,
/*4518*/            OPC_EmitConvertToTarget, 1,
/*4520*/            OPC_EmitNodeXForm, 10, 2, // SIMM32
/*4523*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGFI), 0|OPFL_GlueOutput,
                        0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$src2) - Complexity = 7
                    // Dst: (CGFI GR64:i64:$src1, (SIMM32:i64 (imm:i64):$src2))
/*4531*/          0, /*End of Scope*/
/*4532*/        0, /*End of Scope*/
/*4533*/      /*Scope*/ 32, /*->4566*/
/*4534*/        OPC_CheckChild0Type, MVT::f32,
/*4536*/        OPC_MoveChild, 1,
/*4538*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4541*/        OPC_RecordMemRef,
/*4542*/        OPC_RecordNode, // #1 = 'ld' chained node
/*4543*/        OPC_CheckFoldableChainNode,
/*4544*/        OPC_RecordChild1, // #2 = $src2
/*4545*/        OPC_CheckChild1Type, MVT::i64,
/*4547*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4549*/        OPC_CheckPredicate, 1, // Predicate_load
/*4551*/        OPC_MoveParent,
/*4552*/        OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$src2 #3 #4 #5
/*4555*/        OPC_EmitMergeInputChains1_1,
/*4556*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CEB), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (z_cmp FP32:f32:$src1, (ld:f32 bdxaddr12only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (CEB FP32:f32:$src1, bdxaddr12only:i64:$src2)
/*4566*/      /*Scope*/ 32, /*->4599*/
/*4567*/        OPC_CheckChild0Type, MVT::f64,
/*4569*/        OPC_MoveChild, 1,
/*4571*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4574*/        OPC_RecordMemRef,
/*4575*/        OPC_RecordNode, // #1 = 'ld' chained node
/*4576*/        OPC_CheckFoldableChainNode,
/*4577*/        OPC_RecordChild1, // #2 = $src2
/*4578*/        OPC_CheckChild1Type, MVT::i64,
/*4580*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4582*/        OPC_CheckPredicate, 1, // Predicate_load
/*4584*/        OPC_MoveParent,
/*4585*/        OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$src2 #3 #4 #5
/*4588*/        OPC_EmitMergeInputChains1_1,
/*4589*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CDB), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (z_cmp FP64:f64:$src1, (ld:f64 bdxaddr12only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (CDB FP64:f64:$src1, bdxaddr12only:i64:$src2)
/*4599*/      /*Scope*/ 47, /*->4647*/
/*4600*/        OPC_MoveChild, 1,
/*4602*/        OPC_SwitchOpcode /*2 cases */, 10,  TARGET_VAL(ISD::SIGN_EXTEND),// ->4616
/*4606*/          OPC_RecordChild0, // #1 = $src2
/*4607*/          OPC_MoveParent,
/*4608*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGFR), 0|OPFL_GlueOutput,
                      0/*#VTs*/, 2/*#Ops*/, 0, 1, 
                  // Src: (z_cmp GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (CGFR GR64:i64:$src1, GR32:i32:$src2)
                /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->4646
/*4619*/          OPC_RecordChild0, // #1 = $src2
/*4620*/          OPC_MoveChild, 1,
/*4622*/          OPC_CheckValueType, MVT::i32,
/*4624*/          OPC_MoveParent,
/*4625*/          OPC_MoveParent,
/*4626*/          OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*4629*/          OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4638*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGFR), 0|OPFL_GlueOutput,
                      0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                  // Src: (z_cmp GR64:i64:$src1, (sext_inreg:i64 GR64:i64:$src2, i32:Other)) - Complexity = 6
                  // Dst: (CGFR GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
                0, // EndSwitchOpcode
/*4647*/      /*Scope*/ 11, /*->4659*/
/*4648*/        OPC_CheckChild0Type, MVT::i32,
/*4650*/        OPC_RecordChild1, // #1 = $src2
/*4651*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CR), 0|OPFL_GlueOutput,
                    0/*#VTs*/, 2/*#Ops*/, 0, 1, 
                // Src: (z_cmp GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                // Dst: (CR GR32:i32:$src1, GR32:i32:$src2)
/*4659*/      /*Scope*/ 11, /*->4671*/
/*4660*/        OPC_CheckChild0Type, MVT::i64,
/*4662*/        OPC_RecordChild1, // #1 = $src2
/*4663*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGR), 0|OPFL_GlueOutput,
                    0/*#VTs*/, 2/*#Ops*/, 0, 1, 
                // Src: (z_cmp GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                // Dst: (CGR GR64:i64:$src1, GR64:i64:$src2)
/*4671*/      /*Scope*/ 11, /*->4683*/
/*4672*/        OPC_CheckChild0Type, MVT::f32,
/*4674*/        OPC_RecordChild1, // #1 = $src2
/*4675*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CEBR), 0|OPFL_GlueOutput,
                    0/*#VTs*/, 2/*#Ops*/, 0, 1, 
                // Src: (z_cmp FP32:f32:$src1, FP32:f32:$src2) - Complexity = 3
                // Dst: (CEBR FP32:f32:$src1, FP32:f32:$src2)
/*4683*/      /*Scope*/ 11, /*->4695*/
/*4684*/        OPC_CheckChild0Type, MVT::f64,
/*4686*/        OPC_RecordChild1, // #1 = $src2
/*4687*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CDBR), 0|OPFL_GlueOutput,
                    0/*#VTs*/, 2/*#Ops*/, 0, 1, 
                // Src: (z_cmp FP64:f64:$src1, FP64:f64:$src2) - Complexity = 3
                // Dst: (CDBR FP64:f64:$src1, FP64:f64:$src2)
/*4695*/      /*Scope*/ 11, /*->4707*/
/*4696*/        OPC_CheckChild0Type, MVT::f128,
/*4698*/        OPC_RecordChild1, // #1 = $src2
/*4699*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CXBR), 0|OPFL_GlueOutput,
                    0/*#VTs*/, 2/*#Ops*/, 0, 1, 
                // Src: (z_cmp FP128:f128:$src1, FP128:f128:$src2) - Complexity = 3
                // Dst: (CXBR FP128:f128:$src1, FP128:f128:$src2)
/*4707*/      0, /*End of Scope*/
/*4708*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 35|128,4/*547*/,  TARGET_VAL(SystemZISD::UCMP),// ->5260
/*4713*/    OPC_Scope, 8|128,1/*136*/, /*->4852*/ // 3 children in Scope
/*4716*/      OPC_RecordChild0, // #0 = $src1
/*4717*/      OPC_Scope, 55, /*->4774*/ // 2 children in Scope
/*4719*/        OPC_CheckChild0Type, MVT::i32,
/*4721*/        OPC_MoveChild, 1,
/*4723*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4726*/        OPC_RecordMemRef,
/*4727*/        OPC_RecordNode, // #1 = 'ld' chained node
/*4728*/        OPC_CheckFoldableChainNode,
/*4729*/        OPC_RecordChild1, // #2 = $src2
/*4730*/        OPC_CheckChild1Type, MVT::i64,
/*4732*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4734*/        OPC_Scope, 19, /*->4755*/ // 2 children in Scope
/*4736*/          OPC_CheckPredicate, 6, // Predicate_zextload
/*4738*/          OPC_CheckPredicate, 37, // Predicate_zextloadi16
/*4740*/          OPC_CheckPredicate, 38, // Predicate_aligned_zextloadi16
/*4742*/          OPC_MoveParent,
/*4743*/          OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$src2 #3
/*4746*/          OPC_EmitMergeInputChains1_1,
/*4747*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLHRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                  // Src: (z_ucmp GR32:i32:$src1, (ld:i32 pcrel32:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_aligned_zextloadi16>>) - Complexity = 20
                  // Dst: (CLHRL GR32:i32:$src1, pcrel32:i64:$src2)
/*4755*/        /*Scope*/ 17, /*->4773*/
/*4756*/          OPC_CheckPredicate, 1, // Predicate_load
/*4758*/          OPC_CheckPredicate, 33, // Predicate_aligned_load
/*4760*/          OPC_MoveParent,
/*4761*/          OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$src2 #3
/*4764*/          OPC_EmitMergeInputChains1_1,
/*4765*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                  // Src: (z_ucmp GR32:i32:$src1, (ld:i32 pcrel32:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>>) - Complexity = 20
                  // Dst: (CLRL GR32:i32:$src1, pcrel32:i64:$src2)
/*4773*/        0, /*End of Scope*/
/*4774*/      /*Scope*/ 76, /*->4851*/
/*4775*/        OPC_CheckChild0Type, MVT::i64,
/*4777*/        OPC_MoveChild, 1,
/*4779*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4782*/        OPC_RecordMemRef,
/*4783*/        OPC_RecordNode, // #1 = 'ld' chained node
/*4784*/        OPC_CheckFoldableChainNode,
/*4785*/        OPC_RecordChild1, // #2 = $src2
/*4786*/        OPC_CheckChild1Type, MVT::i64,
/*4788*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4790*/        OPC_Scope, 40, /*->4832*/ // 2 children in Scope
/*4792*/          OPC_CheckPredicate, 6, // Predicate_zextload
/*4794*/          OPC_Scope, 17, /*->4813*/ // 2 children in Scope
/*4796*/            OPC_CheckPredicate, 37, // Predicate_zextloadi16
/*4798*/            OPC_CheckPredicate, 38, // Predicate_aligned_zextloadi16
/*4800*/            OPC_MoveParent,
/*4801*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$src2 #3
/*4804*/            OPC_EmitMergeInputChains1_1,
/*4805*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGHRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                    // Src: (z_ucmp GR64:i64:$src1, (ld:i64 pcrel32:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_aligned_zextloadi16>>) - Complexity = 20
                    // Dst: (CLGHRL GR64:i64:$src1, pcrel32:i64:$src2)
/*4813*/          /*Scope*/ 17, /*->4831*/
/*4814*/            OPC_CheckPredicate, 39, // Predicate_zextloadi32
/*4816*/            OPC_CheckPredicate, 40, // Predicate_aligned_zextloadi32
/*4818*/            OPC_MoveParent,
/*4819*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$src2 #3
/*4822*/            OPC_EmitMergeInputChains1_1,
/*4823*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGFRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                    // Src: (z_ucmp GR64:i64:$src1, (ld:i64 pcrel32:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>><<P:Predicate_aligned_zextloadi32>>) - Complexity = 20
                    // Dst: (CLGFRL GR64:i64:$src1, pcrel32:i64:$src2)
/*4831*/          0, /*End of Scope*/
/*4832*/        /*Scope*/ 17, /*->4850*/
/*4833*/          OPC_CheckPredicate, 1, // Predicate_load
/*4835*/          OPC_CheckPredicate, 33, // Predicate_aligned_load
/*4837*/          OPC_MoveParent,
/*4838*/          OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectPCRelAddress:$src2 #3
/*4841*/          OPC_EmitMergeInputChains1_1,
/*4842*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                  // Src: (z_ucmp GR64:i64:$src1, (ld:i64 pcrel32:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>>) - Complexity = 20
                  // Dst: (CLGRL GR64:i64:$src1, pcrel32:i64:$src2)
/*4850*/        0, /*End of Scope*/
/*4851*/      0, /*End of Scope*/
/*4852*/    /*Scope*/ 43|128,1/*171*/, /*->5025*/
/*4854*/      OPC_MoveChild, 0,
/*4856*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4859*/      OPC_RecordMemRef,
/*4860*/      OPC_RecordNode, // #0 = 'ld' chained node
/*4861*/      OPC_CheckFoldableChainNode,
/*4862*/      OPC_RecordChild1, // #1 = $addr
/*4863*/      OPC_CheckChild1Type, MVT::i64,
/*4865*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4867*/      OPC_Scope, 90, /*->4959*/ // 2 children in Scope
/*4869*/        OPC_CheckPredicate, 6, // Predicate_zextload
/*4871*/        OPC_CheckType, MVT::i32,
/*4873*/        OPC_Scope, 52, /*->4927*/ // 2 children in Scope
/*4875*/          OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*4877*/          OPC_MoveParent,
/*4878*/          OPC_RecordChild1, // #2 = $src
/*4879*/          OPC_MoveChild, 1,
/*4881*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4884*/          OPC_CheckPredicate, 41, // Predicate_imm32zx8
/*4886*/          OPC_MoveParent,
/*4887*/          OPC_Scope, 18, /*->4907*/ // 2 children in Scope
/*4889*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr12Pair:$addr #3 #4
/*4892*/            OPC_EmitMergeInputChains1_0,
/*4893*/            OPC_EmitConvertToTarget, 2,
/*4895*/            OPC_EmitNodeXForm, 1, 5, // UIMM8
/*4898*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (z_ucmp (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i32)<<P:Predicate_imm32zx8>><<X:UIMM8>>:$src) - Complexity = 20
                    // Dst: (CLI bdaddr12pair:i64:$addr, (UIMM8:i32 (imm:i32):$src))
/*4907*/          /*Scope*/ 18, /*->4926*/
/*4908*/            OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectBDAddr20Pair:$addr #3 #4
/*4911*/            OPC_EmitMergeInputChains1_0,
/*4912*/            OPC_EmitConvertToTarget, 2,
/*4914*/            OPC_EmitNodeXForm, 1, 5, // UIMM8
/*4917*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLIY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (z_ucmp (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i32)<<P:Predicate_imm32zx8>><<X:UIMM8>>:$src) - Complexity = 20
                    // Dst: (CLIY bdaddr20pair:i64:$addr, (UIMM8:i32 (imm:i32):$src))
/*4926*/          0, /*End of Scope*/
/*4927*/        /*Scope*/ 30, /*->4958*/
/*4928*/          OPC_CheckPredicate, 37, // Predicate_zextloadi16
/*4930*/          OPC_MoveParent,
/*4931*/          OPC_RecordChild1, // #2 = $src
/*4932*/          OPC_MoveChild, 1,
/*4934*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4937*/          OPC_CheckPredicate, 42, // Predicate_imm32zx16
/*4939*/          OPC_MoveParent,
/*4940*/          OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectBDAddr12Only:$addr #3 #4
/*4943*/          OPC_EmitMergeInputChains1_0,
/*4944*/          OPC_EmitConvertToTarget, 2,
/*4946*/          OPC_EmitNodeXForm, 11, 5, // UIMM16
/*4949*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLHHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_ucmp (ld:i32 bdaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>>, (imm:i32)<<P:Predicate_imm32zx16>><<X:UIMM16>>:$src) - Complexity = 20
                  // Dst: (CLHHSI bdaddr12only:i64:$addr, (UIMM16:i32 (imm:i32):$src))
/*4958*/        0, /*End of Scope*/
/*4959*/      /*Scope*/ 64, /*->5024*/
/*4960*/        OPC_CheckPredicate, 1, // Predicate_load
/*4962*/        OPC_SwitchType /*2 cases */, 28,  MVT::i32,// ->4993
/*4965*/          OPC_MoveParent,
/*4966*/          OPC_RecordChild1, // #2 = $src
/*4967*/          OPC_MoveChild, 1,
/*4969*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4972*/          OPC_CheckPredicate, 42, // Predicate_imm32zx16
/*4974*/          OPC_MoveParent,
/*4975*/          OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectBDAddr12Only:$addr #3 #4
/*4978*/          OPC_EmitMergeInputChains1_0,
/*4979*/          OPC_EmitConvertToTarget, 2,
/*4981*/          OPC_EmitNodeXForm, 11, 5, // UIMM16
/*4984*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLFHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_ucmp (ld:i32 bdaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32)<<P:Predicate_imm32zx16>><<X:UIMM16>>:$src) - Complexity = 20
                  // Dst: (CLFHSI bdaddr12only:i64:$addr, (UIMM16:i32 (imm:i32):$src))
                /*SwitchType*/ 28,  MVT::i64,// ->5023
/*4995*/          OPC_MoveParent,
/*4996*/          OPC_RecordChild1, // #2 = $src
/*4997*/          OPC_MoveChild, 1,
/*4999*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5002*/          OPC_CheckPredicate, 43, // Predicate_imm64zx16
/*5004*/          OPC_MoveParent,
/*5005*/          OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectBDAddr12Only:$addr #3 #4
/*5008*/          OPC_EmitMergeInputChains1_0,
/*5009*/          OPC_EmitConvertToTarget, 2,
/*5011*/          OPC_EmitNodeXForm, 11, 5, // UIMM16
/*5014*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_ucmp (ld:i64 bdaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i64)<<P:Predicate_imm64zx16>><<X:UIMM16>>:$src) - Complexity = 20
                  // Dst: (CLGHSI bdaddr12only:i64:$addr, (UIMM16:i64 (imm:i64):$src))
                0, // EndSwitchType
/*5024*/      0, /*End of Scope*/
/*5025*/    /*Scope*/ 104|128,1/*232*/, /*->5259*/
/*5027*/      OPC_RecordChild0, // #0 = $src1
/*5028*/      OPC_Scope, 74, /*->5104*/ // 5 children in Scope
/*5030*/        OPC_CheckChild0Type, MVT::i32,
/*5032*/        OPC_Scope, 48, /*->5082*/ // 2 children in Scope
/*5034*/          OPC_MoveChild, 1,
/*5036*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5039*/          OPC_RecordMemRef,
/*5040*/          OPC_RecordNode, // #1 = 'ld' chained node
/*5041*/          OPC_CheckFoldableChainNode,
/*5042*/          OPC_RecordChild1, // #2 = $src2
/*5043*/          OPC_CheckChild1Type, MVT::i64,
/*5045*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5047*/          OPC_CheckPredicate, 1, // Predicate_load
/*5049*/          OPC_MoveParent,
/*5050*/          OPC_Scope, 14, /*->5066*/ // 2 children in Scope
/*5052*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*5055*/            OPC_EmitMergeInputChains1_1,
/*5056*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (z_ucmp GR32:i32:$src1, (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (CL GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*5066*/          /*Scope*/ 14, /*->5081*/
/*5067*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*5070*/            OPC_EmitMergeInputChains1_1,
/*5071*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (z_ucmp GR32:i32:$src1, (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (CLY GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*5081*/          0, /*End of Scope*/
/*5082*/        /*Scope*/ 20, /*->5103*/
/*5083*/          OPC_RecordChild1, // #1 = $src2
/*5084*/          OPC_MoveChild, 1,
/*5086*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5089*/          OPC_MoveParent,
/*5090*/          OPC_EmitConvertToTarget, 1,
/*5092*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*5095*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLFI), 0|OPFL_GlueOutput,
                      0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                  // Src: (z_ucmp GR32:i32:$src1, (imm:i32)<<X:UIMM32>>:$src2) - Complexity = 6
                  // Dst: (CLFI GR32:i32:$src1, (UIMM32:i32 (imm:i32):$src2))
/*5103*/        0, /*End of Scope*/
/*5104*/      /*Scope*/ 113, /*->5218*/
/*5105*/        OPC_CheckChild0Type, MVT::i64,
/*5107*/        OPC_Scope, 85, /*->5194*/ // 2 children in Scope
/*5109*/          OPC_MoveChild, 1,
/*5111*/          OPC_Scope, 51, /*->5164*/ // 2 children in Scope
/*5113*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5116*/            OPC_RecordMemRef,
/*5117*/            OPC_RecordNode, // #1 = 'ld' chained node
/*5118*/            OPC_CheckFoldableChainNode,
/*5119*/            OPC_RecordChild1, // #2 = $src2
/*5120*/            OPC_CheckChild1Type, MVT::i64,
/*5122*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5124*/            OPC_Scope, 19, /*->5145*/ // 2 children in Scope
/*5126*/              OPC_CheckPredicate, 6, // Predicate_zextload
/*5128*/              OPC_CheckPredicate, 39, // Predicate_zextloadi32
/*5130*/              OPC_MoveParent,
/*5131*/              OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*5134*/              OPC_EmitMergeInputChains1_1,
/*5135*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_ucmp GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                      // Dst: (CLGF GR64:i64:$src1, bdxaddr20only:i64:$src2)
/*5145*/            /*Scope*/ 17, /*->5163*/
/*5146*/              OPC_CheckPredicate, 1, // Predicate_load
/*5148*/              OPC_MoveParent,
/*5149*/              OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*5152*/              OPC_EmitMergeInputChains1_1,
/*5153*/              OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_ucmp GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                      // Dst: (CLG GR64:i64:$src1, bdxaddr20only:i64:$src2)
/*5163*/            0, /*End of Scope*/
/*5164*/          /*Scope*/ 28, /*->5193*/
/*5165*/            OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*5171*/            OPC_RecordChild0, // #1 = $src2
/*5172*/            OPC_MoveParent,
/*5173*/            OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*5176*/            OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*5185*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGFR), 0|OPFL_GlueOutput,
                        0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                    // Src: (z_ucmp GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
                    // Dst: (CLGFR GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*5193*/          0, /*End of Scope*/
/*5194*/        /*Scope*/ 22, /*->5217*/
/*5195*/          OPC_RecordChild1, // #1 = $src2
/*5196*/          OPC_MoveChild, 1,
/*5198*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5201*/          OPC_CheckPredicate, 44, // Predicate_imm64zx32
/*5203*/          OPC_MoveParent,
/*5204*/          OPC_EmitConvertToTarget, 1,
/*5206*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*5209*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGFI), 0|OPFL_GlueOutput,
                      0/*#VTs*/, 2/*#Ops*/, 0, 3, 
                  // Src: (z_ucmp GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64zx32>><<X:UIMM32>>:$src2) - Complexity = 7
                  // Dst: (CLGFI GR64:i64:$src1, (UIMM32:i64 (imm:i64):$src2))
/*5217*/        0, /*End of Scope*/
/*5218*/      /*Scope*/ 15, /*->5234*/
/*5219*/        OPC_MoveChild, 1,
/*5221*/        OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*5224*/        OPC_RecordChild0, // #1 = $src2
/*5225*/        OPC_MoveParent,
/*5226*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGFR), 0|OPFL_GlueOutput,
                    0/*#VTs*/, 2/*#Ops*/, 0, 1, 
                // Src: (z_ucmp GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                // Dst: (CLGFR GR64:i64:$src1, GR32:i32:$src2)
/*5234*/      /*Scope*/ 11, /*->5246*/
/*5235*/        OPC_CheckChild0Type, MVT::i32,
/*5237*/        OPC_RecordChild1, // #1 = $src2
/*5238*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLR), 0|OPFL_GlueOutput,
                    0/*#VTs*/, 2/*#Ops*/, 0, 1, 
                // Src: (z_ucmp GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                // Dst: (CLR GR32:i32:$src1, GR32:i32:$src2)
/*5246*/      /*Scope*/ 11, /*->5258*/
/*5247*/        OPC_CheckChild0Type, MVT::i64,
/*5249*/        OPC_RecordChild1, // #1 = $src2
/*5250*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGR), 0|OPFL_GlueOutput,
                    0/*#VTs*/, 2/*#Ops*/, 0, 1, 
                // Src: (z_ucmp GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                // Dst: (CLGR GR64:i64:$src1, GR64:i64:$src2)
/*5258*/      0, /*End of Scope*/
/*5259*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 76,  TARGET_VAL(ISD::BSWAP),// ->5339
/*5263*/    OPC_Scope, 49, /*->5314*/ // 2 children in Scope
/*5265*/      OPC_MoveChild, 0,
/*5267*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5270*/      OPC_RecordMemRef,
/*5271*/      OPC_RecordNode, // #0 = 'ld' chained node
/*5272*/      OPC_RecordChild1, // #1 = $addr
/*5273*/      OPC_CheckChild1Type, MVT::i64,
/*5275*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5277*/      OPC_CheckPredicate, 1, // Predicate_load
/*5279*/      OPC_MoveParent,
/*5280*/      OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->5297
/*5283*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$addr #2 #3 #4
/*5286*/        OPC_EmitMergeInputChains1_0,
/*5287*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRV), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (bswap:i32 (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (LRV:i32 bdxaddr20only:i64:$addr)
              /*SwitchType*/ 14,  MVT::i64,// ->5313
/*5299*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$addr #2 #3 #4
/*5302*/        OPC_EmitMergeInputChains1_0,
/*5303*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRVG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                // Src: (bswap:i64 (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (LRVG:i64 bdxaddr20only:i64:$addr)
              0, // EndSwitchType
/*5314*/    /*Scope*/ 23, /*->5338*/
/*5315*/      OPC_RecordChild0, // #0 = $src
/*5316*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5327
/*5319*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRVR), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (bswap:i32 GR32:i32:$src) - Complexity = 3
                // Dst: (LRVR:i32 GR32:i32:$src)
              /*SwitchType*/ 8,  MVT::i64,// ->5337
/*5329*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRVGR), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (bswap:i64 GR64:i64:$src) - Complexity = 3
                // Dst: (LRVGR:i64 GR64:i64:$src)
              0, // EndSwitchType
/*5338*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 115|128,5/*755*/,  TARGET_VAL(ISD::ADD),// ->6098
/*5343*/    OPC_Scope, 37|128,1/*165*/, /*->5511*/ // 10 children in Scope
/*5346*/      OPC_RecordChild0, // #0 = $src1
/*5347*/      OPC_MoveChild, 1,
/*5349*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5352*/      OPC_RecordMemRef,
/*5353*/      OPC_RecordNode, // #1 = 'ld' chained node
/*5354*/      OPC_CheckFoldableChainNode,
/*5355*/      OPC_RecordChild1, // #2 = $src2
/*5356*/      OPC_CheckChild1Type, MVT::i64,
/*5358*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5360*/      OPC_Scope, 41, /*->5403*/ // 5 children in Scope
/*5362*/        OPC_CheckPredicate, 10, // Predicate_sextload
/*5364*/        OPC_CheckPredicate, 31, // Predicate_sextloadi16
/*5366*/        OPC_MoveParent,
/*5367*/        OPC_CheckType, MVT::i32,
/*5369*/        OPC_Scope, 15, /*->5386*/ // 2 children in Scope
/*5371*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*5374*/          OPC_EmitMergeInputChains1_1,
/*5375*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (add:i32 GR32:i32:$src1, (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (AH:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*5386*/        /*Scope*/ 15, /*->5402*/
/*5387*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*5390*/          OPC_EmitMergeInputChains1_1,
/*5391*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AHY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (add:i32 GR32:i32:$src1, (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (AHY:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*5402*/        0, /*End of Scope*/
/*5403*/      /*Scope*/ 39, /*->5443*/
/*5404*/        OPC_CheckPredicate, 1, // Predicate_load
/*5406*/        OPC_MoveParent,
/*5407*/        OPC_CheckType, MVT::i32,
/*5409*/        OPC_Scope, 15, /*->5426*/ // 2 children in Scope
/*5411*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*5414*/          OPC_EmitMergeInputChains1_1,
/*5415*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::A), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (add:i32 GR32:i32:$src1, (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (A:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*5426*/        /*Scope*/ 15, /*->5442*/
/*5427*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*5430*/          OPC_EmitMergeInputChains1_1,
/*5431*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (add:i32 GR32:i32:$src1, (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (AY:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*5442*/        0, /*End of Scope*/
/*5443*/      /*Scope*/ 22, /*->5466*/
/*5444*/        OPC_CheckPredicate, 10, // Predicate_sextload
/*5446*/        OPC_CheckPredicate, 34, // Predicate_sextloadi32
/*5448*/        OPC_MoveParent,
/*5449*/        OPC_CheckType, MVT::i64,
/*5451*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*5454*/        OPC_EmitMergeInputChains1_1,
/*5455*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (add:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>) - Complexity = 19
                // Dst: (AGF:i64 GR64:i64:$src1, bdxaddr20only:i64:$src2)
/*5466*/      /*Scope*/ 20, /*->5487*/
/*5467*/        OPC_CheckPredicate, 1, // Predicate_load
/*5469*/        OPC_MoveParent,
/*5470*/        OPC_CheckType, MVT::i64,
/*5472*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*5475*/        OPC_EmitMergeInputChains1_1,
/*5476*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (add:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (AG:i64 GR64:i64:$src1, bdxaddr20only:i64:$src2)
/*5487*/      /*Scope*/ 22, /*->5510*/
/*5488*/        OPC_CheckPredicate, 6, // Predicate_zextload
/*5490*/        OPC_CheckPredicate, 39, // Predicate_zextloadi32
/*5492*/        OPC_MoveParent,
/*5493*/        OPC_CheckType, MVT::i64,
/*5495*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$addr #3 #4 #5
/*5498*/        OPC_EmitMergeInputChains1_1,
/*5499*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (add:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                // Dst: (ALGF:i64 GR64:i64:$src1, bdxaddr20only:i64:$addr)
/*5510*/      0, /*End of Scope*/
/*5511*/    /*Scope*/ 41|128,1/*169*/, /*->5682*/
/*5513*/      OPC_MoveChild, 0,
/*5515*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5518*/      OPC_RecordMemRef,
/*5519*/      OPC_RecordNode, // #0 = 'ld' chained node
/*5520*/      OPC_CheckFoldableChainNode,
/*5521*/      OPC_RecordChild1, // #1 = $src2
/*5522*/      OPC_CheckChild1Type, MVT::i64,
/*5524*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5526*/      OPC_Scope, 42, /*->5570*/ // 5 children in Scope
/*5528*/        OPC_CheckPredicate, 10, // Predicate_sextload
/*5530*/        OPC_CheckPredicate, 31, // Predicate_sextloadi16
/*5532*/        OPC_MoveParent,
/*5533*/        OPC_RecordChild1, // #2 = $src1
/*5534*/        OPC_CheckType, MVT::i32,
/*5536*/        OPC_Scope, 15, /*->5553*/ // 2 children in Scope
/*5538*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*5541*/          OPC_EmitMergeInputChains1_0,
/*5542*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (add:i32 (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, GR32:i32:$src1) - Complexity = 19
                  // Dst: (AH:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*5553*/        /*Scope*/ 15, /*->5569*/
/*5554*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*5557*/          OPC_EmitMergeInputChains1_0,
/*5558*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AHY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (add:i32 (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, GR32:i32:$src1) - Complexity = 19
                  // Dst: (AHY:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*5569*/        0, /*End of Scope*/
/*5570*/      /*Scope*/ 40, /*->5611*/
/*5571*/        OPC_CheckPredicate, 1, // Predicate_load
/*5573*/        OPC_MoveParent,
/*5574*/        OPC_RecordChild1, // #2 = $src1
/*5575*/        OPC_CheckType, MVT::i32,
/*5577*/        OPC_Scope, 15, /*->5594*/ // 2 children in Scope
/*5579*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*5582*/          OPC_EmitMergeInputChains1_0,
/*5583*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::A), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (add:i32 (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 19
                  // Dst: (A:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*5594*/        /*Scope*/ 15, /*->5610*/
/*5595*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*5598*/          OPC_EmitMergeInputChains1_0,
/*5599*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (add:i32 (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 19
                  // Dst: (AY:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*5610*/        0, /*End of Scope*/
/*5611*/      /*Scope*/ 23, /*->5635*/
/*5612*/        OPC_CheckPredicate, 10, // Predicate_sextload
/*5614*/        OPC_CheckPredicate, 34, // Predicate_sextloadi32
/*5616*/        OPC_MoveParent,
/*5617*/        OPC_RecordChild1, // #2 = $src1
/*5618*/        OPC_CheckType, MVT::i64,
/*5620*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$src2 #3 #4 #5
/*5623*/        OPC_EmitMergeInputChains1_0,
/*5624*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (add:i64 (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>, GR64:i64:$src1) - Complexity = 19
                // Dst: (AGF:i64 GR64:i64:$src1, bdxaddr20only:i64:$src2)
/*5635*/      /*Scope*/ 21, /*->5657*/
/*5636*/        OPC_CheckPredicate, 1, // Predicate_load
/*5638*/        OPC_MoveParent,
/*5639*/        OPC_RecordChild1, // #2 = $src1
/*5640*/        OPC_CheckType, MVT::i64,
/*5642*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$src2 #3 #4 #5
/*5645*/        OPC_EmitMergeInputChains1_0,
/*5646*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (add:i64 (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$src1) - Complexity = 19
                // Dst: (AG:i64 GR64:i64:$src1, bdxaddr20only:i64:$src2)
/*5657*/      /*Scope*/ 23, /*->5681*/
/*5658*/        OPC_CheckPredicate, 6, // Predicate_zextload
/*5660*/        OPC_CheckPredicate, 39, // Predicate_zextloadi32
/*5662*/        OPC_MoveParent,
/*5663*/        OPC_RecordChild1, // #2 = $src1
/*5664*/        OPC_CheckType, MVT::i64,
/*5666*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$addr #3 #4 #5
/*5669*/        OPC_EmitMergeInputChains1_0,
/*5670*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (add:i64 (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>, GR64:i64:$src1) - Complexity = 19
                // Dst: (ALGF:i64 GR64:i64:$src1, bdxaddr20only:i64:$addr)
/*5681*/      0, /*End of Scope*/
/*5682*/    /*Scope*/ 47, /*->5730*/
/*5683*/      OPC_RecordNode, // #0 = $src
/*5684*/      OPC_CheckType, MVT::i64,
/*5686*/      OPC_Scope, 13, /*->5701*/ // 3 children in Scope
/*5688*/        OPC_CheckComplexPat, /*CP*/9, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*5691*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: dynalloc12only:i64:$src - Complexity = 12
                // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*5701*/      /*Scope*/ 13, /*->5715*/
/*5702*/        OPC_CheckComplexPat, /*CP*/10, /*#*/0, // selectLAAddr12Pair:$src #1 #2 #3
/*5705*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr12pair:i64:$src - Complexity = 12
                // Dst: (LA:i64 laaddr12pair:i64:$src)
/*5715*/      /*Scope*/ 13, /*->5729*/
/*5716*/        OPC_CheckComplexPat, /*CP*/11, /*#*/0, // selectLAAddr20Pair:$src #1 #2 #3
/*5719*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr20pair:i64:$src - Complexity = 12
                // Dst: (LAY:i64 laaddr20pair:i64:$src)
/*5729*/      0, /*End of Scope*/
/*5730*/    /*Scope*/ 34, /*->5765*/
/*5731*/      OPC_RecordChild0, // #0 = $src1
/*5732*/      OPC_MoveChild, 1,
/*5734*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*5740*/      OPC_RecordChild0, // #1 = $src2
/*5741*/      OPC_MoveParent,
/*5742*/      OPC_CheckType, MVT::i64,
/*5744*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*5747*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*5756*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
              // Src: (add:i64 GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
              // Dst: (ALGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*5765*/    /*Scope*/ 34, /*->5800*/
/*5766*/      OPC_MoveChild, 0,
/*5768*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*5774*/      OPC_RecordChild0, // #0 = $src2
/*5775*/      OPC_MoveParent,
/*5776*/      OPC_RecordChild1, // #1 = $src1
/*5777*/      OPC_CheckType, MVT::i64,
/*5779*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*5782*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*5791*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 3, 
              // Src: (add:i64 (and:i64 GR64:i64:$src2, 4294967295:i64), GR64:i64:$src1) - Complexity = 11
              // Dst: (ALGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*5800*/    /*Scope*/ 35|128,1/*163*/, /*->5965*/
/*5802*/      OPC_RecordChild0, // #0 = $src1
/*5803*/      OPC_Scope, 126, /*->5931*/ // 2 children in Scope
/*5805*/        OPC_RecordChild1, // #1 = $src2
/*5806*/        OPC_MoveChild, 1,
/*5808*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5811*/        OPC_Scope, 19, /*->5832*/ // 6 children in Scope
/*5813*/          OPC_CheckPredicate, 15, // Predicate_imm32sx16
/*5815*/          OPC_MoveParent,
/*5816*/          OPC_CheckType, MVT::i32,
/*5818*/          OPC_EmitConvertToTarget, 1,
/*5820*/          OPC_EmitNodeXForm, 2, 2, // SIMM16
/*5823*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AHI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GR32:i32:$src1, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$src2) - Complexity = 7
                  // Dst: (AHI:i32 GR32:i32:$src1, (SIMM16:i32 (imm:i32):$src2))
/*5832*/        /*Scope*/ 19, /*->5852*/
/*5833*/          OPC_CheckPredicate, 16, // Predicate_imm64sx16
/*5835*/          OPC_MoveParent,
/*5836*/          OPC_CheckType, MVT::i64,
/*5838*/          OPC_EmitConvertToTarget, 1,
/*5840*/          OPC_EmitNodeXForm, 2, 2, // SIMM16
/*5843*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGHI), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$src2) - Complexity = 7
                  // Dst: (AGHI:i64 GR64:i64:$src1, (SIMM16:i64 (imm:i64):$src2))
/*5852*/        /*Scope*/ 19, /*->5872*/
/*5853*/          OPC_CheckPredicate, 36, // Predicate_imm64sx32
/*5855*/          OPC_MoveParent,
/*5856*/          OPC_CheckType, MVT::i64,
/*5858*/          OPC_EmitConvertToTarget, 1,
/*5860*/          OPC_EmitNodeXForm, 10, 2, // SIMM32
/*5863*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFI), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$src2) - Complexity = 7
                  // Dst: (AGFI:i64 GR64:i64:$src1, (SIMM32:i64 (imm:i64):$src2))
/*5872*/        /*Scope*/ 19, /*->5892*/
/*5873*/          OPC_CheckPredicate, 44, // Predicate_imm64zx32
/*5875*/          OPC_MoveParent,
/*5876*/          OPC_CheckType, MVT::i64,
/*5878*/          OPC_EmitConvertToTarget, 1,
/*5880*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*5883*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFI), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64zx32>><<X:UIMM32>>:$src2) - Complexity = 7
                  // Dst: (ALGFI:i64 GR64:i64:$src1, (UIMM32:i64 (imm:i64)<<P:Predicate_imm64zx32>>:$src2))
/*5892*/        /*Scope*/ 19, /*->5912*/
/*5893*/          OPC_CheckPredicate, 45, // Predicate_imm64zx32n
/*5895*/          OPC_MoveParent,
/*5896*/          OPC_CheckType, MVT::i64,
/*5898*/          OPC_EmitConvertToTarget, 1,
/*5900*/          OPC_EmitNodeXForm, 12, 2, // NEGIMM32
/*5903*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFI), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64zx32n>><<X:NEGIMM32>>:$src2) - Complexity = 7
                  // Dst: (SLGFI:i64 GR64:i64:$src1, (NEGIMM32:i64 (imm:i64)<<P:Predicate_imm64zx32n>>:$src2))
/*5912*/        /*Scope*/ 17, /*->5930*/
/*5913*/          OPC_MoveParent,
/*5914*/          OPC_CheckType, MVT::i32,
/*5916*/          OPC_EmitConvertToTarget, 1,
/*5918*/          OPC_EmitNodeXForm, 10, 2, // SIMM32
/*5921*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AFI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GR32:i32:$src1, (imm:i32)<<X:SIMM32>>:$src2) - Complexity = 6
                  // Dst: (AFI:i32 GR32:i32:$src1, (SIMM32:i32 (imm:i32):$src2))
/*5930*/        0, /*End of Scope*/
/*5931*/      /*Scope*/ 32, /*->5964*/
/*5932*/        OPC_MoveChild, 1,
/*5934*/        OPC_SwitchOpcode /*2 cases */, 11,  TARGET_VAL(ISD::SIGN_EXTEND),// ->5949
/*5938*/          OPC_RecordChild0, // #1 = $src2
/*5939*/          OPC_MoveParent,
/*5940*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFR), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (AGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
                /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::ZERO_EXTEND),// ->5963
/*5952*/          OPC_RecordChild0, // #1 = $src2
/*5953*/          OPC_MoveParent,
/*5954*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (ALGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
                0, // EndSwitchOpcode
/*5964*/      0, /*End of Scope*/
/*5965*/    /*Scope*/ 34, /*->6000*/
/*5966*/      OPC_MoveChild, 0,
/*5968*/      OPC_SwitchOpcode /*2 cases */, 12,  TARGET_VAL(ISD::SIGN_EXTEND),// ->5984
/*5972*/        OPC_RecordChild0, // #0 = $src2
/*5973*/        OPC_MoveParent,
/*5974*/        OPC_RecordChild1, // #1 = $src1
/*5975*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (add:i64 (sext:i64 GR32:i32:$src2), GR64:i64:$src1) - Complexity = 6
                // Dst: (AGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
              /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::ZERO_EXTEND),// ->5999
/*5987*/        OPC_RecordChild0, // #0 = $src2
/*5988*/        OPC_MoveParent,
/*5989*/        OPC_RecordChild1, // #1 = $src1
/*5990*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (add:i64 (zext:i64 GR32:i32:$src2), GR64:i64:$src1) - Complexity = 6
                // Dst: (ALGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
              0, // EndSwitchOpcode
/*6000*/    /*Scope*/ 34, /*->6035*/
/*6001*/      OPC_RecordChild0, // #0 = $src1
/*6002*/      OPC_MoveChild, 1,
/*6004*/      OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*6007*/      OPC_RecordChild0, // #1 = $src2
/*6008*/      OPC_MoveChild, 1,
/*6010*/      OPC_CheckValueType, MVT::i32,
/*6012*/      OPC_MoveParent,
/*6013*/      OPC_MoveParent,
/*6014*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*6017*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*6026*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFR), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
              // Src: (add:i64 GR64:i64:$src1, (sext_inreg:i64 GR64:i64:$src2, i32:Other)) - Complexity = 6
              // Dst: (AGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*6035*/    /*Scope*/ 34, /*->6070*/
/*6036*/      OPC_MoveChild, 0,
/*6038*/      OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*6041*/      OPC_RecordChild0, // #0 = $src2
/*6042*/      OPC_MoveChild, 1,
/*6044*/      OPC_CheckValueType, MVT::i32,
/*6046*/      OPC_MoveParent,
/*6047*/      OPC_MoveParent,
/*6048*/      OPC_RecordChild1, // #1 = $src1
/*6049*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*6052*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*6061*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFR), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 3, 
              // Src: (add:i64 (sext_inreg:i64 GR64:i64:$src2, i32:Other), GR64:i64:$src1) - Complexity = 6
              // Dst: (AGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*6070*/    /*Scope*/ 26, /*->6097*/
/*6071*/      OPC_RecordChild0, // #0 = $src1
/*6072*/      OPC_RecordChild1, // #1 = $src2
/*6073*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6085
/*6076*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                // Dst: (AR:i32 GR32:i32:$src1, GR32:i32:$src2)
              /*SwitchType*/ 9,  MVT::i64,// ->6096
/*6087*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (add:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                // Dst: (AGR:i64 GR64:i64:$src1, GR64:i64:$src2)
              0, // EndSwitchType
/*6097*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 5|128,3/*389*/,  TARGET_VAL(ISD::ADDC),// ->6491
/*6102*/    OPC_Scope, 100, /*->6204*/ // 7 children in Scope
/*6104*/      OPC_RecordChild0, // #0 = $src1
/*6105*/      OPC_MoveChild, 1,
/*6107*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6110*/      OPC_RecordMemRef,
/*6111*/      OPC_RecordNode, // #1 = 'ld' chained node
/*6112*/      OPC_CheckFoldableChainNode,
/*6113*/      OPC_RecordChild1, // #2 = $src2
/*6114*/      OPC_CheckChild1Type, MVT::i64,
/*6116*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6118*/      OPC_Scope, 39, /*->6159*/ // 3 children in Scope
/*6120*/        OPC_CheckPredicate, 1, // Predicate_load
/*6122*/        OPC_MoveParent,
/*6123*/        OPC_CheckType, MVT::i32,
/*6125*/        OPC_Scope, 15, /*->6142*/ // 2 children in Scope
/*6127*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*6130*/          OPC_EmitMergeInputChains1_1,
/*6131*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (addc:i32 GR32:i32:$src1, (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (AL:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*6142*/        /*Scope*/ 15, /*->6158*/
/*6143*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*6146*/          OPC_EmitMergeInputChains1_1,
/*6147*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (addc:i32 GR32:i32:$src1, (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (ALY:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*6158*/        0, /*End of Scope*/
/*6159*/      /*Scope*/ 22, /*->6182*/
/*6160*/        OPC_CheckPredicate, 6, // Predicate_zextload
/*6162*/        OPC_CheckPredicate, 39, // Predicate_zextloadi32
/*6164*/        OPC_MoveParent,
/*6165*/        OPC_CheckType, MVT::i64,
/*6167*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*6170*/        OPC_EmitMergeInputChains1_1,
/*6171*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (addc:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                // Dst: (ALGF:i64 GR64:i64:$src1, bdxaddr20only:i64:$src2)
/*6182*/      /*Scope*/ 20, /*->6203*/
/*6183*/        OPC_CheckPredicate, 1, // Predicate_load
/*6185*/        OPC_MoveParent,
/*6186*/        OPC_CheckType, MVT::i64,
/*6188*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*6191*/        OPC_EmitMergeInputChains1_1,
/*6192*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (addc:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (ALG:i64 GR64:i64:$src1, bdxaddr20only:i64:$src2)
/*6203*/      0, /*End of Scope*/
/*6204*/    /*Scope*/ 102, /*->6307*/
/*6205*/      OPC_MoveChild, 0,
/*6207*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6210*/      OPC_RecordMemRef,
/*6211*/      OPC_RecordNode, // #0 = 'ld' chained node
/*6212*/      OPC_CheckFoldableChainNode,
/*6213*/      OPC_RecordChild1, // #1 = $src2
/*6214*/      OPC_CheckChild1Type, MVT::i64,
/*6216*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6218*/      OPC_Scope, 40, /*->6260*/ // 3 children in Scope
/*6220*/        OPC_CheckPredicate, 1, // Predicate_load
/*6222*/        OPC_MoveParent,
/*6223*/        OPC_RecordChild1, // #2 = $src1
/*6224*/        OPC_CheckType, MVT::i32,
/*6226*/        OPC_Scope, 15, /*->6243*/ // 2 children in Scope
/*6228*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*6231*/          OPC_EmitMergeInputChains1_0,
/*6232*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (addc:i32 (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 19
                  // Dst: (AL:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*6243*/        /*Scope*/ 15, /*->6259*/
/*6244*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*6247*/          OPC_EmitMergeInputChains1_0,
/*6248*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (addc:i32 (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 19
                  // Dst: (ALY:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*6259*/        0, /*End of Scope*/
/*6260*/      /*Scope*/ 23, /*->6284*/
/*6261*/        OPC_CheckPredicate, 6, // Predicate_zextload
/*6263*/        OPC_CheckPredicate, 39, // Predicate_zextloadi32
/*6265*/        OPC_MoveParent,
/*6266*/        OPC_RecordChild1, // #2 = $src1
/*6267*/        OPC_CheckType, MVT::i64,
/*6269*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$src2 #3 #4 #5
/*6272*/        OPC_EmitMergeInputChains1_0,
/*6273*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (addc:i64 (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>, GR64:i64:$src1) - Complexity = 19
                // Dst: (ALGF:i64 GR64:i64:$src1, bdxaddr20only:i64:$src2)
/*6284*/      /*Scope*/ 21, /*->6306*/
/*6285*/        OPC_CheckPredicate, 1, // Predicate_load
/*6287*/        OPC_MoveParent,
/*6288*/        OPC_RecordChild1, // #2 = $src1
/*6289*/        OPC_CheckType, MVT::i64,
/*6291*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$src2 #3 #4 #5
/*6294*/        OPC_EmitMergeInputChains1_0,
/*6295*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (addc:i64 (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$src1) - Complexity = 19
                // Dst: (ALG:i64 GR64:i64:$src1, bdxaddr20only:i64:$src2)
/*6306*/      0, /*End of Scope*/
/*6307*/    /*Scope*/ 34, /*->6342*/
/*6308*/      OPC_RecordChild0, // #0 = $src1
/*6309*/      OPC_MoveChild, 1,
/*6311*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*6317*/      OPC_RecordChild0, // #1 = $src2
/*6318*/      OPC_MoveParent,
/*6319*/      OPC_CheckType, MVT::i64,
/*6321*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*6324*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*6333*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
              // Src: (addc:i64 GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
              // Dst: (ALGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*6342*/    /*Scope*/ 34, /*->6377*/
/*6343*/      OPC_MoveChild, 0,
/*6345*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*6351*/      OPC_RecordChild0, // #0 = $src2
/*6352*/      OPC_MoveParent,
/*6353*/      OPC_RecordChild1, // #1 = $src1
/*6354*/      OPC_CheckType, MVT::i64,
/*6356*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*6359*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*6368*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 3, 
              // Src: (addc:i64 (and:i64 GR64:i64:$src2, 4294967295:i64), GR64:i64:$src1) - Complexity = 11
              // Dst: (ALGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*6377*/    /*Scope*/ 67, /*->6445*/
/*6378*/      OPC_RecordChild0, // #0 = $src1
/*6379*/      OPC_Scope, 46, /*->6427*/ // 2 children in Scope
/*6381*/        OPC_RecordChild1, // #1 = $src2
/*6382*/        OPC_MoveChild, 1,
/*6384*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6387*/        OPC_Scope, 19, /*->6408*/ // 2 children in Scope
/*6389*/          OPC_CheckPredicate, 44, // Predicate_imm64zx32
/*6391*/          OPC_MoveParent,
/*6392*/          OPC_CheckType, MVT::i64,
/*6394*/          OPC_EmitConvertToTarget, 1,
/*6396*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*6399*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFI), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (addc:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64zx32>><<X:UIMM32>>:$src2) - Complexity = 7
                  // Dst: (ALGFI:i64 GR64:i64:$src1, (UIMM32:i64 (imm:i64):$src2))
/*6408*/        /*Scope*/ 17, /*->6426*/
/*6409*/          OPC_MoveParent,
/*6410*/          OPC_CheckType, MVT::i32,
/*6412*/          OPC_EmitConvertToTarget, 1,
/*6414*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*6417*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALFI), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (addc:i32 GR32:i32:$src1, (imm:i32)<<X:UIMM32>>:$src2) - Complexity = 6
                  // Dst: (ALFI:i32 GR32:i32:$src1, (UIMM32:i32 (imm:i32):$src2))
/*6426*/        0, /*End of Scope*/
/*6427*/      /*Scope*/ 16, /*->6444*/
/*6428*/        OPC_MoveChild, 1,
/*6430*/        OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*6433*/        OPC_RecordChild0, // #1 = $src2
/*6434*/        OPC_MoveParent,
/*6435*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i64 GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                // Dst: (ALGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
/*6444*/      0, /*End of Scope*/
/*6445*/    /*Scope*/ 17, /*->6463*/
/*6446*/      OPC_MoveChild, 0,
/*6448*/      OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*6451*/      OPC_RecordChild0, // #0 = $src2
/*6452*/      OPC_MoveParent,
/*6453*/      OPC_RecordChild1, // #1 = $src1
/*6454*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
              // Src: (addc:i64 (zext:i64 GR32:i32:$src2), GR64:i64:$src1) - Complexity = 6
              // Dst: (ALGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
/*6463*/    /*Scope*/ 26, /*->6490*/
/*6464*/      OPC_RecordChild0, // #0 = $src1
/*6465*/      OPC_RecordChild1, // #1 = $src2
/*6466*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6478
/*6469*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                // Dst: (ALR:i32 GR32:i32:$src1, GR32:i32:$src2)
              /*SwitchType*/ 9,  MVT::i64,// ->6489
/*6480*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                // Dst: (ALGR:i64 GR64:i64:$src1, GR64:i64:$src2)
              0, // EndSwitchType
/*6490*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 10|128,1/*138*/,  TARGET_VAL(ISD::ADDE),// ->6633
/*6495*/    OPC_CaptureGlueInput,
/*6496*/    OPC_Scope, 53, /*->6551*/ // 3 children in Scope
/*6498*/      OPC_RecordChild0, // #0 = $src1
/*6499*/      OPC_MoveChild, 1,
/*6501*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6504*/      OPC_RecordMemRef,
/*6505*/      OPC_RecordNode, // #1 = 'ld' chained node
/*6506*/      OPC_CheckFoldableChainNode,
/*6507*/      OPC_RecordChild1, // #2 = $src2
/*6508*/      OPC_CheckChild1Type, MVT::i64,
/*6510*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6512*/      OPC_CheckPredicate, 1, // Predicate_load
/*6514*/      OPC_MoveParent,
/*6515*/      OPC_SwitchType /*2 cases */, 15,  MVT::i32,// ->6533
/*6518*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*6521*/        OPC_EmitMergeInputChains1_1,
/*6522*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (adde:i32 GR32:i32:$src1, (ld:i32 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (ALC:i32 GR32:i32:$src1, bdxaddr20only:i64:$src2)
              /*SwitchType*/ 15,  MVT::i64,// ->6550
/*6535*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*6538*/        OPC_EmitMergeInputChains1_1,
/*6539*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALCG), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (adde:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (ALCG:i64 GR64:i64:$src1, bdxaddr20only:i64:$src2)
              0, // EndSwitchType
/*6551*/    /*Scope*/ 53, /*->6605*/
/*6552*/      OPC_MoveChild, 0,
/*6554*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6557*/      OPC_RecordMemRef,
/*6558*/      OPC_RecordNode, // #0 = 'ld' chained node
/*6559*/      OPC_CheckFoldableChainNode,
/*6560*/      OPC_RecordChild1, // #1 = $src2
/*6561*/      OPC_CheckChild1Type, MVT::i64,
/*6563*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6565*/      OPC_CheckPredicate, 1, // Predicate_load
/*6567*/      OPC_MoveParent,
/*6568*/      OPC_RecordChild1, // #2 = $src1
/*6569*/      OPC_SwitchType /*2 cases */, 15,  MVT::i32,// ->6587
/*6572*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$src2 #3 #4 #5
/*6575*/        OPC_EmitMergeInputChains1_0,
/*6576*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (adde:i32 (ld:i32 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 19
                // Dst: (ALC:i32 GR32:i32:$src1, bdxaddr20only:i64:$src2)
              /*SwitchType*/ 15,  MVT::i64,// ->6604
/*6589*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$src2 #3 #4 #5
/*6592*/        OPC_EmitMergeInputChains1_0,
/*6593*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALCG), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (adde:i64 (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$src1) - Complexity = 19
                // Dst: (ALCG:i64 GR64:i64:$src1, bdxaddr20only:i64:$src2)
              0, // EndSwitchType
/*6605*/    /*Scope*/ 26, /*->6632*/
/*6606*/      OPC_RecordChild0, // #0 = $src1
/*6607*/      OPC_RecordChild1, // #1 = $src2
/*6608*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6620
/*6611*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALCR), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                // Dst: (ALCR:i32 GR32:i32:$src1, GR32:i32:$src2)
              /*SwitchType*/ 9,  MVT::i64,// ->6631
/*6622*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALCGR), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                // Dst: (ALCGR:i64 GR64:i64:$src1, GR64:i64:$src2)
              0, // EndSwitchType
/*6632*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 1|128,3/*385*/,  TARGET_VAL(ISD::SUB),// ->7022
/*6637*/    OPC_Scope, 123, /*->6762*/ // 6 children in Scope
/*6639*/      OPC_RecordChild0, // #0 = $src1
/*6640*/      OPC_MoveChild, 1,
/*6642*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6645*/      OPC_RecordMemRef,
/*6646*/      OPC_RecordNode, // #1 = 'ld' chained node
/*6647*/      OPC_CheckFoldableChainNode,
/*6648*/      OPC_RecordChild1, // #2 = $src2
/*6649*/      OPC_CheckChild1Type, MVT::i64,
/*6651*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6653*/      OPC_Scope, 39, /*->6694*/ // 4 children in Scope
/*6655*/        OPC_CheckPredicate, 1, // Predicate_load
/*6657*/        OPC_MoveParent,
/*6658*/        OPC_CheckType, MVT::i32,
/*6660*/        OPC_Scope, 15, /*->6677*/ // 2 children in Scope
/*6662*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*6665*/          OPC_EmitMergeInputChains1_1,
/*6666*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::S), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sub:i32 GR32:i32:$src1, (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (S:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*6677*/        /*Scope*/ 15, /*->6693*/
/*6678*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*6681*/          OPC_EmitMergeInputChains1_1,
/*6682*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sub:i32 GR32:i32:$src1, (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (SY:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*6693*/        0, /*End of Scope*/
/*6694*/      /*Scope*/ 22, /*->6717*/
/*6695*/        OPC_CheckPredicate, 10, // Predicate_sextload
/*6697*/        OPC_CheckPredicate, 34, // Predicate_sextloadi32
/*6699*/        OPC_MoveParent,
/*6700*/        OPC_CheckType, MVT::i64,
/*6702*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*6705*/        OPC_EmitMergeInputChains1_1,
/*6706*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SGF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sub:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>) - Complexity = 19
                // Dst: (SGF:i64 GR64:i64:$src1, bdxaddr20only:i64:$src2)
/*6717*/      /*Scope*/ 20, /*->6738*/
/*6718*/        OPC_CheckPredicate, 1, // Predicate_load
/*6720*/        OPC_MoveParent,
/*6721*/        OPC_CheckType, MVT::i64,
/*6723*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*6726*/        OPC_EmitMergeInputChains1_1,
/*6727*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sub:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SG:i64 GR64:i64:$src1, bdxaddr20only:i64:$src2)
/*6738*/      /*Scope*/ 22, /*->6761*/
/*6739*/        OPC_CheckPredicate, 6, // Predicate_zextload
/*6741*/        OPC_CheckPredicate, 39, // Predicate_zextloadi32
/*6743*/        OPC_MoveParent,
/*6744*/        OPC_CheckType, MVT::i64,
/*6746*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$addr #3 #4 #5
/*6749*/        OPC_EmitMergeInputChains1_1,
/*6750*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sub:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                // Dst: (SLGF:i64 GR64:i64:$src1, bdxaddr20only:i64:$addr)
/*6761*/      0, /*End of Scope*/
/*6762*/    /*Scope*/ 47, /*->6810*/
/*6763*/      OPC_RecordNode, // #0 = $src
/*6764*/      OPC_CheckType, MVT::i64,
/*6766*/      OPC_Scope, 13, /*->6781*/ // 3 children in Scope
/*6768*/        OPC_CheckComplexPat, /*CP*/9, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*6771*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: dynalloc12only:i64:$src - Complexity = 12
                // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*6781*/      /*Scope*/ 13, /*->6795*/
/*6782*/        OPC_CheckComplexPat, /*CP*/10, /*#*/0, // selectLAAddr12Pair:$src #1 #2 #3
/*6785*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr12pair:i64:$src - Complexity = 12
                // Dst: (LA:i64 laaddr12pair:i64:$src)
/*6795*/      /*Scope*/ 13, /*->6809*/
/*6796*/        OPC_CheckComplexPat, /*CP*/11, /*#*/0, // selectLAAddr20Pair:$src #1 #2 #3
/*6799*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr20pair:i64:$src - Complexity = 12
                // Dst: (LAY:i64 laaddr20pair:i64:$src)
/*6809*/      0, /*End of Scope*/
/*6810*/    /*Scope*/ 52, /*->6863*/
/*6811*/      OPC_MoveChild, 0,
/*6813*/      OPC_CheckInteger, 0, 
/*6815*/      OPC_MoveParent,
/*6816*/      OPC_MoveChild, 1,
/*6818*/      OPC_SwitchOpcode /*2 cases */, 10,  TARGET_VAL(ISD::SIGN_EXTEND),// ->6832
/*6822*/        OPC_RecordChild0, // #0 = $src
/*6823*/        OPC_MoveParent,
/*6824*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCGFR), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sub:i64 0:i64, (sext:i64 GR32:i32:$src)) - Complexity = 11
                // Dst: (LCGFR:i64 GR32:i32:$src)
              /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->6862
/*6835*/        OPC_RecordChild0, // #0 = $src
/*6836*/        OPC_MoveChild, 1,
/*6838*/        OPC_CheckValueType, MVT::i32,
/*6840*/        OPC_MoveParent,
/*6841*/        OPC_MoveParent,
/*6842*/        OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*6845*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*6854*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCGFR), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (sub:i64 0:i64, (sext_inreg:i64 GR64:i64:$src, i32:Other)) - Complexity = 11
                // Dst: (LCGFR:i64 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32))
              0, // EndSwitchOpcode
/*6863*/    /*Scope*/ 34, /*->6898*/
/*6864*/      OPC_RecordChild0, // #0 = $src1
/*6865*/      OPC_MoveChild, 1,
/*6867*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*6873*/      OPC_RecordChild0, // #1 = $src2
/*6874*/      OPC_MoveParent,
/*6875*/      OPC_CheckType, MVT::i64,
/*6877*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*6880*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*6889*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFR), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
              // Src: (sub:i64 GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
              // Dst: (SLGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*6898*/    /*Scope*/ 28, /*->6927*/
/*6899*/      OPC_MoveChild, 0,
/*6901*/      OPC_CheckInteger, 0, 
/*6903*/      OPC_MoveParent,
/*6904*/      OPC_RecordChild1, // #0 = $src
/*6905*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->6916
/*6908*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCR), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sub:i32 0:i32, GR32:i32:$src) - Complexity = 8
                // Dst: (LCR:i32 GR32:i32:$src)
              /*SwitchType*/ 8,  MVT::i64,// ->6926
/*6918*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCGR), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sub:i64 0:i64, GR64:i64:$src) - Complexity = 8
                // Dst: (LCGR:i64 GR64:i64:$src)
              0, // EndSwitchType
/*6927*/    /*Scope*/ 93, /*->7021*/
/*6928*/      OPC_RecordChild0, // #0 = $src1
/*6929*/      OPC_Scope, 63, /*->6994*/ // 2 children in Scope
/*6931*/        OPC_MoveChild, 1,
/*6933*/        OPC_SwitchOpcode /*3 cases */, 11,  TARGET_VAL(ISD::SIGN_EXTEND),// ->6948
/*6937*/          OPC_RecordChild0, // #1 = $src2
/*6938*/          OPC_MoveParent,
/*6939*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SGFR), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i64 GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (SGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
                /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::ZERO_EXTEND),// ->6962
/*6951*/          OPC_RecordChild0, // #1 = $src2
/*6952*/          OPC_MoveParent,
/*6953*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFR), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i64 GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (SLGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
                /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->6993
/*6965*/          OPC_RecordChild0, // #1 = $src2
/*6966*/          OPC_MoveChild, 1,
/*6968*/          OPC_CheckValueType, MVT::i32,
/*6970*/          OPC_MoveParent,
/*6971*/          OPC_MoveParent,
/*6972*/          OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*6975*/          OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*6984*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SGFR), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (sub:i64 GR64:i64:$src1, (sext_inreg:i64 GR64:i64:$src2, i32:Other)) - Complexity = 6
                  // Dst: (SGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
                0, // EndSwitchOpcode
/*6994*/      /*Scope*/ 25, /*->7020*/
/*6995*/        OPC_RecordChild1, // #1 = $src2
/*6996*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7008
/*6999*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                  // Dst: (SR:i32 GR32:i32:$src1, GR32:i32:$src2)
                /*SwitchType*/ 9,  MVT::i64,// ->7019
/*7010*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SGR), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                  // Dst: (SGR:i64 GR64:i64:$src1, GR64:i64:$src2)
                0, // EndSwitchType
/*7020*/      0, /*End of Scope*/
/*7021*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 52|128,1/*180*/,  TARGET_VAL(ISD::SUBC),// ->7206
/*7026*/    OPC_RecordChild0, // #0 = $src1
/*7027*/    OPC_Scope, 21|128,1/*149*/, /*->7179*/ // 2 children in Scope
/*7030*/      OPC_MoveChild, 1,
/*7032*/      OPC_Scope, 97, /*->7131*/ // 3 children in Scope
/*7034*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*7037*/        OPC_RecordMemRef,
/*7038*/        OPC_RecordNode, // #1 = 'ld' chained node
/*7039*/        OPC_CheckFoldableChainNode,
/*7040*/        OPC_RecordChild1, // #2 = $src2
/*7041*/        OPC_CheckChild1Type, MVT::i64,
/*7043*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*7045*/        OPC_Scope, 39, /*->7086*/ // 3 children in Scope
/*7047*/          OPC_CheckPredicate, 1, // Predicate_load
/*7049*/          OPC_MoveParent,
/*7050*/          OPC_CheckType, MVT::i32,
/*7052*/          OPC_Scope, 15, /*->7069*/ // 2 children in Scope
/*7054*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*7057*/            OPC_EmitMergeInputChains1_1,
/*7058*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::SL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (subc:i32 GR32:i32:$src1, (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (SL:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*7069*/          /*Scope*/ 15, /*->7085*/
/*7070*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*7073*/            OPC_EmitMergeInputChains1_1,
/*7074*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (subc:i32 GR32:i32:$src1, (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (SLY:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*7085*/          0, /*End of Scope*/
/*7086*/        /*Scope*/ 22, /*->7109*/
/*7087*/          OPC_CheckPredicate, 6, // Predicate_zextload
/*7089*/          OPC_CheckPredicate, 39, // Predicate_zextloadi32
/*7091*/          OPC_MoveParent,
/*7092*/          OPC_CheckType, MVT::i64,
/*7094*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*7097*/          OPC_EmitMergeInputChains1_1,
/*7098*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (subc:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                  // Dst: (SLGF:i64 GR64:i64:$src1, bdxaddr20only:i64:$src2)
/*7109*/        /*Scope*/ 20, /*->7130*/
/*7110*/          OPC_CheckPredicate, 1, // Predicate_load
/*7112*/          OPC_MoveParent,
/*7113*/          OPC_CheckType, MVT::i64,
/*7115*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*7118*/          OPC_EmitMergeInputChains1_1,
/*7119*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (subc:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (SLG:i64 GR64:i64:$src1, bdxaddr20only:i64:$src2)
/*7130*/        0, /*End of Scope*/
/*7131*/      /*Scope*/ 31, /*->7163*/
/*7132*/        OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*7138*/        OPC_RecordChild0, // #1 = $src2
/*7139*/        OPC_MoveParent,
/*7140*/        OPC_CheckType, MVT::i64,
/*7142*/        OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*7145*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*7154*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (subc:i64 GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
                // Dst: (SLGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*7163*/      /*Scope*/ 14, /*->7178*/
/*7164*/        OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*7167*/        OPC_RecordChild0, // #1 = $src2
/*7168*/        OPC_MoveParent,
/*7169*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (subc:i64 GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                // Dst: (SLGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
/*7178*/      0, /*End of Scope*/
/*7179*/    /*Scope*/ 25, /*->7205*/
/*7180*/      OPC_RecordChild1, // #1 = $src2
/*7181*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7193
/*7184*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (subc:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                // Dst: (SLR:i32 GR32:i32:$src1, GR32:i32:$src2)
              /*SwitchType*/ 9,  MVT::i64,// ->7204
/*7195*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (subc:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                // Dst: (SLGR:i64 GR64:i64:$src1, GR64:i64:$src2)
              0, // EndSwitchType
/*7205*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::SUBE),// ->7292
/*7209*/    OPC_CaptureGlueInput,
/*7210*/    OPC_RecordChild0, // #0 = $src1
/*7211*/    OPC_Scope, 52, /*->7265*/ // 2 children in Scope
/*7213*/      OPC_MoveChild, 1,
/*7215*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*7218*/      OPC_RecordMemRef,
/*7219*/      OPC_RecordNode, // #1 = 'ld' chained node
/*7220*/      OPC_CheckFoldableChainNode,
/*7221*/      OPC_RecordChild1, // #2 = $src2
/*7222*/      OPC_CheckChild1Type, MVT::i64,
/*7224*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*7226*/      OPC_CheckPredicate, 1, // Predicate_load
/*7228*/      OPC_MoveParent,
/*7229*/      OPC_SwitchType /*2 cases */, 15,  MVT::i32,// ->7247
/*7232*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*7235*/        OPC_EmitMergeInputChains1_1,
/*7236*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLB), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sube:i32 GR32:i32:$src1, (ld:i32 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SLB:i32 GR32:i32:$src1, bdxaddr20only:i64:$src2)
              /*SwitchType*/ 15,  MVT::i64,// ->7264
/*7249*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*7252*/        OPC_EmitMergeInputChains1_1,
/*7253*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLBG), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sube:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SLBG:i64 GR64:i64:$src1, bdxaddr20only:i64:$src2)
              0, // EndSwitchType
/*7265*/    /*Scope*/ 25, /*->7291*/
/*7266*/      OPC_RecordChild1, // #1 = $src2
/*7267*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7279
/*7270*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLBR), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sube:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                // Dst: (SLBR:i32 GR32:i32:$src1, GR32:i32:$src2)
              /*SwitchType*/ 9,  MVT::i64,// ->7290
/*7281*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGBR), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sube:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                // Dst: (SLGBR:i64 GR64:i64:$src1, GR64:i64:$src2)
              0, // EndSwitchType
/*7291*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 73|128,3/*457*/,  TARGET_VAL(ISD::AND),// ->7753
/*7296*/    OPC_Scope, 72, /*->7370*/ // 8 children in Scope
/*7298*/      OPC_RecordChild0, // #0 = $src1
/*7299*/      OPC_MoveChild, 1,
/*7301*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*7304*/      OPC_RecordMemRef,
/*7305*/      OPC_RecordNode, // #1 = 'ld' chained node
/*7306*/      OPC_CheckFoldableChainNode,
/*7307*/      OPC_RecordChild1, // #2 = $src2
/*7308*/      OPC_CheckChild1Type, MVT::i64,
/*7310*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*7312*/      OPC_CheckPredicate, 1, // Predicate_load
/*7314*/      OPC_MoveParent,
/*7315*/      OPC_SwitchType /*2 cases */, 34,  MVT::i32,// ->7352
/*7318*/        OPC_Scope, 15, /*->7335*/ // 2 children in Scope
/*7320*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*7323*/          OPC_EmitMergeInputChains1_1,
/*7324*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::N), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (and:i32 GR32:i32:$src1, (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (N:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*7335*/        /*Scope*/ 15, /*->7351*/
/*7336*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*7339*/          OPC_EmitMergeInputChains1_1,
/*7340*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (and:i32 GR32:i32:$src1, (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (NY:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*7351*/        0, /*End of Scope*/
              /*SwitchType*/ 15,  MVT::i64,// ->7369
/*7354*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*7357*/        OPC_EmitMergeInputChains1_1,
/*7358*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::NG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (and:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (NG:i64 GR64:i64:$src1, bdxaddr20only:i64:$src2)
              0, // EndSwitchType
/*7370*/    /*Scope*/ 72, /*->7443*/
/*7371*/      OPC_MoveChild, 0,
/*7373*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*7376*/      OPC_RecordMemRef,
/*7377*/      OPC_RecordNode, // #0 = 'ld' chained node
/*7378*/      OPC_CheckFoldableChainNode,
/*7379*/      OPC_RecordChild1, // #1 = $src2
/*7380*/      OPC_CheckChild1Type, MVT::i64,
/*7382*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*7384*/      OPC_CheckPredicate, 1, // Predicate_load
/*7386*/      OPC_MoveParent,
/*7387*/      OPC_RecordChild1, // #2 = $src1
/*7388*/      OPC_SwitchType /*2 cases */, 34,  MVT::i32,// ->7425
/*7391*/        OPC_Scope, 15, /*->7408*/ // 2 children in Scope
/*7393*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*7396*/          OPC_EmitMergeInputChains1_0,
/*7397*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::N), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (and:i32 (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 19
                  // Dst: (N:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*7408*/        /*Scope*/ 15, /*->7424*/
/*7409*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*7412*/          OPC_EmitMergeInputChains1_0,
/*7413*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (and:i32 (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 19
                  // Dst: (NY:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*7424*/        0, /*End of Scope*/
              /*SwitchType*/ 15,  MVT::i64,// ->7442
/*7427*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$src2 #3 #4 #5
/*7430*/        OPC_EmitMergeInputChains1_0,
/*7431*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::NG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (and:i64 (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$src1) - Complexity = 19
                // Dst: (NG:i64 GR64:i64:$src1, bdxaddr20only:i64:$src2)
              0, // EndSwitchType
/*7443*/    /*Scope*/ 14, /*->7458*/
/*7444*/      OPC_CheckAndImm, 127|128,1/*255*/, 
/*7447*/      OPC_RecordChild0, // #0 = $src
/*7448*/      OPC_CheckType, MVT::i32,
/*7450*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLCR), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (and:i32 GR32:i32:$src, 255:i32) - Complexity = 8
              // Dst: (LLCR:i32 GR32:i32:$src)
/*7458*/    /*Scope*/ 15, /*->7474*/
/*7459*/      OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*7463*/      OPC_RecordChild0, // #0 = $src
/*7464*/      OPC_CheckType, MVT::i32,
/*7466*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLHR), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (and:i32 GR32:i32:$src, 65535:i32) - Complexity = 8
              // Dst: (LLHR:i32 GR32:i32:$src)
/*7474*/    /*Scope*/ 14, /*->7489*/
/*7475*/      OPC_CheckAndImm, 127|128,1/*255*/, 
/*7478*/      OPC_RecordChild0, // #0 = $src
/*7479*/      OPC_CheckType, MVT::i64,
/*7481*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGCR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (and:i64 GR64:i64:$src, 255:i64) - Complexity = 8
              // Dst: (LLGCR:i64 GR64:i64:$src)
/*7489*/    /*Scope*/ 15, /*->7505*/
/*7490*/      OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*7494*/      OPC_RecordChild0, // #0 = $src
/*7495*/      OPC_CheckType, MVT::i64,
/*7497*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGHR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (and:i64 GR64:i64:$src, 65535:i64) - Complexity = 8
              // Dst: (LLGHR:i64 GR64:i64:$src)
/*7505*/    /*Scope*/ 29, /*->7535*/
/*7506*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*7512*/      OPC_RecordChild0, // #0 = $src
/*7513*/      OPC_CheckType, MVT::i64,
/*7515*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*7518*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*7527*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGFR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (and:i64 GR64:i64:$src, 4294967295:i64) - Complexity = 8
              // Dst: (LLGFR:i64 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32))
/*7535*/    /*Scope*/ 87|128,1/*215*/, /*->7752*/
/*7537*/      OPC_RecordChild0, // #0 = $src1
/*7538*/      OPC_RecordChild1, // #1 = $src2
/*7539*/      OPC_Scope, 57|128,1/*185*/, /*->7727*/ // 3 children in Scope
/*7542*/        OPC_MoveChild, 1,
/*7544*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7547*/        OPC_Scope, 19, /*->7568*/ // 9 children in Scope
/*7549*/          OPC_CheckPredicate, 46, // Predicate_imm32ll16c
/*7551*/          OPC_MoveParent,
/*7552*/          OPC_CheckType, MVT::i32,
/*7554*/          OPC_EmitConvertToTarget, 1,
/*7556*/          OPC_EmitNodeXForm, 3, 2, // LL16
/*7559*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILL32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GR32:i32:$src1, (imm:i32)<<P:Predicate_imm32ll16c>><<X:LL16>>:$src2) - Complexity = 7
                  // Dst: (NILL32:i32 GR32:i32:$src1, (LL16:i32 (imm:i32):$src2))
/*7568*/        /*Scope*/ 19, /*->7588*/
/*7569*/          OPC_CheckPredicate, 47, // Predicate_imm32lh16c
/*7571*/          OPC_MoveParent,
/*7572*/          OPC_CheckType, MVT::i32,
/*7574*/          OPC_EmitConvertToTarget, 1,
/*7576*/          OPC_EmitNodeXForm, 4, 2, // LH16
/*7579*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILH32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GR32:i32:$src1, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$src2) - Complexity = 7
                  // Dst: (NILH32:i32 GR32:i32:$src1, (LH16:i32 (imm:i32):$src2))
/*7588*/        /*Scope*/ 19, /*->7608*/
/*7589*/          OPC_CheckPredicate, 48, // Predicate_imm64ll16c
/*7591*/          OPC_MoveParent,
/*7592*/          OPC_CheckType, MVT::i64,
/*7594*/          OPC_EmitConvertToTarget, 1,
/*7596*/          OPC_EmitNodeXForm, 3, 2, // LL16
/*7599*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILL), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64ll16c>><<X:LL16>>:$src2) - Complexity = 7
                  // Dst: (NILL:i64 GR64:i64:$src1, (LL16:i64 (imm:i64):$src2))
/*7608*/        /*Scope*/ 19, /*->7628*/
/*7609*/          OPC_CheckPredicate, 49, // Predicate_imm64lh16c
/*7611*/          OPC_MoveParent,
/*7612*/          OPC_CheckType, MVT::i64,
/*7614*/          OPC_EmitConvertToTarget, 1,
/*7616*/          OPC_EmitNodeXForm, 4, 2, // LH16
/*7619*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILH), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64lh16c>><<X:LH16>>:$src2) - Complexity = 7
                  // Dst: (NILH:i64 GR64:i64:$src1, (LH16:i64 (imm:i64):$src2))
/*7628*/        /*Scope*/ 19, /*->7648*/
/*7629*/          OPC_CheckPredicate, 50, // Predicate_imm64hl16c
/*7631*/          OPC_MoveParent,
/*7632*/          OPC_CheckType, MVT::i64,
/*7634*/          OPC_EmitConvertToTarget, 1,
/*7636*/          OPC_EmitNodeXForm, 5, 2, // HL16
/*7639*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIHL), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64hl16c>><<X:HL16>>:$src2) - Complexity = 7
                  // Dst: (NIHL:i64 GR64:i64:$src1, (HL16:i64 (imm:i64):$src2))
/*7648*/        /*Scope*/ 19, /*->7668*/
/*7649*/          OPC_CheckPredicate, 51, // Predicate_imm64hh16c
/*7651*/          OPC_MoveParent,
/*7652*/          OPC_CheckType, MVT::i64,
/*7654*/          OPC_EmitConvertToTarget, 1,
/*7656*/          OPC_EmitNodeXForm, 6, 2, // HH16
/*7659*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIHH), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64hh16c>><<X:HH16>>:$src2) - Complexity = 7
                  // Dst: (NIHH:i64 GR64:i64:$src1, (HH16:i64 (imm:i64):$src2))
/*7668*/        /*Scope*/ 19, /*->7688*/
/*7669*/          OPC_CheckPredicate, 52, // Predicate_imm64lf32c
/*7671*/          OPC_MoveParent,
/*7672*/          OPC_CheckType, MVT::i64,
/*7674*/          OPC_EmitConvertToTarget, 1,
/*7676*/          OPC_EmitNodeXForm, 7, 2, // LF32
/*7679*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILF), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64lf32c>><<X:LF32>>:$src2) - Complexity = 7
                  // Dst: (NILF:i64 GR64:i64:$src1, (LF32:i64 (imm:i64):$src2))
/*7688*/        /*Scope*/ 19, /*->7708*/
/*7689*/          OPC_CheckPredicate, 53, // Predicate_imm64hf32c
/*7691*/          OPC_MoveParent,
/*7692*/          OPC_CheckType, MVT::i64,
/*7694*/          OPC_EmitConvertToTarget, 1,
/*7696*/          OPC_EmitNodeXForm, 8, 2, // HF32
/*7699*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIHF), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64hf32c>><<X:HF32>>:$src2) - Complexity = 7
                  // Dst: (NIHF:i64 GR64:i64:$src1, (HF32:i64 (imm:i64):$src2))
/*7708*/        /*Scope*/ 17, /*->7726*/
/*7709*/          OPC_MoveParent,
/*7710*/          OPC_CheckType, MVT::i32,
/*7712*/          OPC_EmitConvertToTarget, 1,
/*7714*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*7717*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILF32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GR32:i32:$src1, (imm:i32)<<X:UIMM32>>:$src2) - Complexity = 6
                  // Dst: (NILF32:i32 GR32:i32:$src1, (UIMM32:i32 (imm:i32):$src2))
/*7726*/        0, /*End of Scope*/
/*7727*/      /*Scope*/ 11, /*->7739*/
/*7728*/        OPC_CheckType, MVT::i32,
/*7730*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::NR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                // Dst: (NR:i32 GR32:i32:$src1, GR32:i32:$src2)
/*7739*/      /*Scope*/ 11, /*->7751*/
/*7740*/        OPC_CheckType, MVT::i64,
/*7742*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::NGR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                // Dst: (NGR:i64 GR64:i64:$src1, GR64:i64:$src2)
/*7751*/      0, /*End of Scope*/
/*7752*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 115|128,1/*243*/,  TARGET_VAL(ISD::XOR),// ->8000
/*7757*/    OPC_Scope, 72, /*->7831*/ // 3 children in Scope
/*7759*/      OPC_RecordChild0, // #0 = $src1
/*7760*/      OPC_MoveChild, 1,
/*7762*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*7765*/      OPC_RecordMemRef,
/*7766*/      OPC_RecordNode, // #1 = 'ld' chained node
/*7767*/      OPC_CheckFoldableChainNode,
/*7768*/      OPC_RecordChild1, // #2 = $src2
/*7769*/      OPC_CheckChild1Type, MVT::i64,
/*7771*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*7773*/      OPC_CheckPredicate, 1, // Predicate_load
/*7775*/      OPC_MoveParent,
/*7776*/      OPC_SwitchType /*2 cases */, 34,  MVT::i32,// ->7813
/*7779*/        OPC_Scope, 15, /*->7796*/ // 2 children in Scope
/*7781*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*7784*/          OPC_EmitMergeInputChains1_1,
/*7785*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::X), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (xor:i32 GR32:i32:$src1, (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (X:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*7796*/        /*Scope*/ 15, /*->7812*/
/*7797*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*7800*/          OPC_EmitMergeInputChains1_1,
/*7801*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::XY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (xor:i32 GR32:i32:$src1, (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (XY:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*7812*/        0, /*End of Scope*/
              /*SwitchType*/ 15,  MVT::i64,// ->7830
/*7815*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*7818*/        OPC_EmitMergeInputChains1_1,
/*7819*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (xor:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (XG:i64 GR64:i64:$src1, bdxaddr20only:i64:$src2)
              0, // EndSwitchType
/*7831*/    /*Scope*/ 72, /*->7904*/
/*7832*/      OPC_MoveChild, 0,
/*7834*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*7837*/      OPC_RecordMemRef,
/*7838*/      OPC_RecordNode, // #0 = 'ld' chained node
/*7839*/      OPC_CheckFoldableChainNode,
/*7840*/      OPC_RecordChild1, // #1 = $src2
/*7841*/      OPC_CheckChild1Type, MVT::i64,
/*7843*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*7845*/      OPC_CheckPredicate, 1, // Predicate_load
/*7847*/      OPC_MoveParent,
/*7848*/      OPC_RecordChild1, // #2 = $src1
/*7849*/      OPC_SwitchType /*2 cases */, 34,  MVT::i32,// ->7886
/*7852*/        OPC_Scope, 15, /*->7869*/ // 2 children in Scope
/*7854*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*7857*/          OPC_EmitMergeInputChains1_0,
/*7858*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::X), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (xor:i32 (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 19
                  // Dst: (X:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*7869*/        /*Scope*/ 15, /*->7885*/
/*7870*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*7873*/          OPC_EmitMergeInputChains1_0,
/*7874*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::XY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (xor:i32 (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 19
                  // Dst: (XY:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*7885*/        0, /*End of Scope*/
              /*SwitchType*/ 15,  MVT::i64,// ->7903
/*7888*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$src2 #3 #4 #5
/*7891*/        OPC_EmitMergeInputChains1_0,
/*7892*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (xor:i64 (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$src1) - Complexity = 19
                // Dst: (XG:i64 GR64:i64:$src1, bdxaddr20only:i64:$src2)
              0, // EndSwitchType
/*7904*/    /*Scope*/ 94, /*->7999*/
/*7905*/      OPC_RecordChild0, // #0 = $src1
/*7906*/      OPC_RecordChild1, // #1 = $src2
/*7907*/      OPC_Scope, 65, /*->7974*/ // 3 children in Scope
/*7909*/        OPC_MoveChild, 1,
/*7911*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7914*/        OPC_Scope, 19, /*->7935*/ // 3 children in Scope
/*7916*/          OPC_CheckPredicate, 29, // Predicate_imm64lf32
/*7918*/          OPC_MoveParent,
/*7919*/          OPC_CheckType, MVT::i64,
/*7921*/          OPC_EmitConvertToTarget, 1,
/*7923*/          OPC_EmitNodeXForm, 7, 2, // LF32
/*7926*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::XILF), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$src2) - Complexity = 7
                  // Dst: (XILF:i64 GR64:i64:$src1, (LF32:i64 (imm:i64):$src2))
/*7935*/        /*Scope*/ 19, /*->7955*/
/*7936*/          OPC_CheckPredicate, 30, // Predicate_imm64hf32
/*7938*/          OPC_MoveParent,
/*7939*/          OPC_CheckType, MVT::i64,
/*7941*/          OPC_EmitConvertToTarget, 1,
/*7943*/          OPC_EmitNodeXForm, 8, 2, // HF32
/*7946*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIHF), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$src2) - Complexity = 7
                  // Dst: (XIHF:i64 GR64:i64:$src1, (HF32:i64 (imm:i64):$src2))
/*7955*/        /*Scope*/ 17, /*->7973*/
/*7956*/          OPC_MoveParent,
/*7957*/          OPC_CheckType, MVT::i32,
/*7959*/          OPC_EmitConvertToTarget, 1,
/*7961*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*7964*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::XILF32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:i32 GR32:i32:$src1, (imm:i32)<<X:UIMM32>>:$src2) - Complexity = 6
                  // Dst: (XILF32:i32 GR32:i32:$src1, (UIMM32:i32 (imm:i32):$src2))
/*7973*/        0, /*End of Scope*/
/*7974*/      /*Scope*/ 11, /*->7986*/
/*7975*/        OPC_CheckType, MVT::i32,
/*7977*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                // Dst: (XR:i32 GR32:i32:$src1, GR32:i32:$src2)
/*7986*/      /*Scope*/ 11, /*->7998*/
/*7987*/        OPC_CheckType, MVT::i64,
/*7989*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XGR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                // Dst: (XGR:i64 GR64:i64:$src1, GR64:i64:$src2)
/*7998*/      0, /*End of Scope*/
/*7999*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 10|128,4/*522*/,  TARGET_VAL(ISD::MUL),// ->8526
/*8004*/    OPC_Scope, 14|128,1/*142*/, /*->8149*/ // 7 children in Scope
/*8007*/      OPC_RecordChild0, // #0 = $src1
/*8008*/      OPC_MoveChild, 1,
/*8010*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8013*/      OPC_RecordMemRef,
/*8014*/      OPC_RecordNode, // #1 = 'ld' chained node
/*8015*/      OPC_CheckFoldableChainNode,
/*8016*/      OPC_RecordChild1, // #2 = $src2
/*8017*/      OPC_CheckChild1Type, MVT::i64,
/*8019*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8021*/      OPC_Scope, 41, /*->8064*/ // 4 children in Scope
/*8023*/        OPC_CheckPredicate, 10, // Predicate_sextload
/*8025*/        OPC_CheckPredicate, 31, // Predicate_sextloadi16
/*8027*/        OPC_MoveParent,
/*8028*/        OPC_CheckType, MVT::i32,
/*8030*/        OPC_Scope, 15, /*->8047*/ // 2 children in Scope
/*8032*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*8035*/          OPC_EmitMergeInputChains1_1,
/*8036*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (mul:i32 GR32:i32:$src1, (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (MH:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*8047*/        /*Scope*/ 15, /*->8063*/
/*8048*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*8051*/          OPC_EmitMergeInputChains1_1,
/*8052*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MHY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (mul:i32 GR32:i32:$src1, (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (MHY:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*8063*/        0, /*End of Scope*/
/*8064*/      /*Scope*/ 39, /*->8104*/
/*8065*/        OPC_CheckPredicate, 1, // Predicate_load
/*8067*/        OPC_MoveParent,
/*8068*/        OPC_CheckType, MVT::i32,
/*8070*/        OPC_Scope, 15, /*->8087*/ // 2 children in Scope
/*8072*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*8075*/          OPC_EmitMergeInputChains1_1,
/*8076*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MS), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (mul:i32 GR32:i32:$src1, (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (MS:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*8087*/        /*Scope*/ 15, /*->8103*/
/*8088*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*8091*/          OPC_EmitMergeInputChains1_1,
/*8092*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (mul:i32 GR32:i32:$src1, (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (MSY:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*8103*/        0, /*End of Scope*/
/*8104*/      /*Scope*/ 22, /*->8127*/
/*8105*/        OPC_CheckPredicate, 10, // Predicate_sextload
/*8107*/        OPC_CheckPredicate, 34, // Predicate_sextloadi32
/*8109*/        OPC_MoveParent,
/*8110*/        OPC_CheckType, MVT::i64,
/*8112*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*8115*/        OPC_EmitMergeInputChains1_1,
/*8116*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (mul:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>) - Complexity = 19
                // Dst: (MSGF:i64 GR64:i64:$src1, bdxaddr20only:i64:$src2)
/*8127*/      /*Scope*/ 20, /*->8148*/
/*8128*/        OPC_CheckPredicate, 1, // Predicate_load
/*8130*/        OPC_MoveParent,
/*8131*/        OPC_CheckType, MVT::i64,
/*8133*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*8136*/        OPC_EmitMergeInputChains1_1,
/*8137*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (mul:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (MSG:i64 GR64:i64:$src1, bdxaddr20only:i64:$src2)
/*8148*/      0, /*End of Scope*/
/*8149*/    /*Scope*/ 17|128,1/*145*/, /*->8296*/
/*8151*/      OPC_MoveChild, 0,
/*8153*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8156*/      OPC_RecordMemRef,
/*8157*/      OPC_RecordNode, // #0 = 'ld' chained node
/*8158*/      OPC_CheckFoldableChainNode,
/*8159*/      OPC_RecordChild1, // #1 = $src2
/*8160*/      OPC_CheckChild1Type, MVT::i64,
/*8162*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8164*/      OPC_Scope, 42, /*->8208*/ // 4 children in Scope
/*8166*/        OPC_CheckPredicate, 10, // Predicate_sextload
/*8168*/        OPC_CheckPredicate, 31, // Predicate_sextloadi16
/*8170*/        OPC_MoveParent,
/*8171*/        OPC_RecordChild1, // #2 = $src1
/*8172*/        OPC_CheckType, MVT::i32,
/*8174*/        OPC_Scope, 15, /*->8191*/ // 2 children in Scope
/*8176*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*8179*/          OPC_EmitMergeInputChains1_0,
/*8180*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (mul:i32 (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, GR32:i32:$src1) - Complexity = 19
                  // Dst: (MH:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*8191*/        /*Scope*/ 15, /*->8207*/
/*8192*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*8195*/          OPC_EmitMergeInputChains1_0,
/*8196*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MHY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (mul:i32 (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, GR32:i32:$src1) - Complexity = 19
                  // Dst: (MHY:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*8207*/        0, /*End of Scope*/
/*8208*/      /*Scope*/ 40, /*->8249*/
/*8209*/        OPC_CheckPredicate, 1, // Predicate_load
/*8211*/        OPC_MoveParent,
/*8212*/        OPC_RecordChild1, // #2 = $src1
/*8213*/        OPC_CheckType, MVT::i32,
/*8215*/        OPC_Scope, 15, /*->8232*/ // 2 children in Scope
/*8217*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*8220*/          OPC_EmitMergeInputChains1_0,
/*8221*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MS), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (mul:i32 (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 19
                  // Dst: (MS:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*8232*/        /*Scope*/ 15, /*->8248*/
/*8233*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*8236*/          OPC_EmitMergeInputChains1_0,
/*8237*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (mul:i32 (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 19
                  // Dst: (MSY:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*8248*/        0, /*End of Scope*/
/*8249*/      /*Scope*/ 23, /*->8273*/
/*8250*/        OPC_CheckPredicate, 10, // Predicate_sextload
/*8252*/        OPC_CheckPredicate, 34, // Predicate_sextloadi32
/*8254*/        OPC_MoveParent,
/*8255*/        OPC_RecordChild1, // #2 = $src1
/*8256*/        OPC_CheckType, MVT::i64,
/*8258*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$src2 #3 #4 #5
/*8261*/        OPC_EmitMergeInputChains1_0,
/*8262*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (mul:i64 (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>, GR64:i64:$src1) - Complexity = 19
                // Dst: (MSGF:i64 GR64:i64:$src1, bdxaddr20only:i64:$src2)
/*8273*/      /*Scope*/ 21, /*->8295*/
/*8274*/        OPC_CheckPredicate, 1, // Predicate_load
/*8276*/        OPC_MoveParent,
/*8277*/        OPC_RecordChild1, // #2 = $src1
/*8278*/        OPC_CheckType, MVT::i64,
/*8280*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$src2 #3 #4 #5
/*8283*/        OPC_EmitMergeInputChains1_0,
/*8284*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (mul:i64 (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$src1) - Complexity = 19
                // Dst: (MSG:i64 GR64:i64:$src1, bdxaddr20only:i64:$src2)
/*8295*/      0, /*End of Scope*/
/*8296*/    /*Scope*/ 113, /*->8410*/
/*8297*/      OPC_RecordChild0, // #0 = $src1
/*8298*/      OPC_Scope, 68, /*->8368*/ // 3 children in Scope
/*8300*/        OPC_RecordChild1, // #1 = $src2
/*8301*/        OPC_MoveChild, 1,
/*8303*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8306*/        OPC_Scope, 19, /*->8327*/ // 3 children in Scope
/*8308*/          OPC_CheckPredicate, 15, // Predicate_imm32sx16
/*8310*/          OPC_MoveParent,
/*8311*/          OPC_CheckType, MVT::i32,
/*8313*/          OPC_EmitConvertToTarget, 1,
/*8315*/          OPC_EmitNodeXForm, 2, 2, // SIMM16
/*8318*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MHI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (mul:i32 GR32:i32:$src1, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$src2) - Complexity = 7
                  // Dst: (MHI:i32 GR32:i32:$src1, (SIMM16:i32 (imm:i32):$src2))
/*8327*/        /*Scope*/ 19, /*->8347*/
/*8328*/          OPC_CheckPredicate, 16, // Predicate_imm64sx16
/*8330*/          OPC_MoveParent,
/*8331*/          OPC_CheckType, MVT::i64,
/*8333*/          OPC_EmitConvertToTarget, 1,
/*8335*/          OPC_EmitNodeXForm, 2, 2, // SIMM16
/*8338*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MGHI), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (mul:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$src2) - Complexity = 7
                  // Dst: (MGHI:i64 GR64:i64:$src1, (SIMM16:i64 (imm:i64):$src2))
/*8347*/        /*Scope*/ 19, /*->8367*/
/*8348*/          OPC_CheckPredicate, 36, // Predicate_imm64sx32
/*8350*/          OPC_MoveParent,
/*8351*/          OPC_CheckType, MVT::i64,
/*8353*/          OPC_EmitConvertToTarget, 1,
/*8355*/          OPC_EmitNodeXForm, 10, 2, // SIMM32
/*8358*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFI), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (mul:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$src2) - Complexity = 7
                  // Dst: (MSGFI:i64 GR64:i64:$src1, (SIMM32:i64 (imm:i64):$src2))
/*8367*/        0, /*End of Scope*/
/*8368*/      /*Scope*/ 16, /*->8385*/
/*8369*/        OPC_MoveChild, 1,
/*8371*/        OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*8374*/        OPC_RecordChild0, // #1 = $src2
/*8375*/        OPC_MoveParent,
/*8376*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i64 GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                // Dst: (MSGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
/*8385*/      /*Scope*/ 23, /*->8409*/
/*8386*/        OPC_RecordChild1, // #1 = $src2
/*8387*/        OPC_MoveChild, 1,
/*8389*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8392*/        OPC_MoveParent,
/*8393*/        OPC_CheckType, MVT::i32,
/*8395*/        OPC_EmitConvertToTarget, 1,
/*8397*/        OPC_EmitNodeXForm, 10, 2, // SIMM32
/*8400*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSFI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (mul:i32 GR32:i32:$src1, (imm:i32)<<X:SIMM32>>:$src2) - Complexity = 6
                // Dst: (MSFI:i32 GR32:i32:$src1, (SIMM32:i32 (imm:i32):$src2))
/*8409*/      0, /*End of Scope*/
/*8410*/    /*Scope*/ 17, /*->8428*/
/*8411*/      OPC_MoveChild, 0,
/*8413*/      OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*8416*/      OPC_RecordChild0, // #0 = $src2
/*8417*/      OPC_MoveParent,
/*8418*/      OPC_RecordChild1, // #1 = $src1
/*8419*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFR), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
              // Src: (mul:i64 (sext:i64 GR32:i32:$src2), GR64:i64:$src1) - Complexity = 6
              // Dst: (MSGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
/*8428*/    /*Scope*/ 34, /*->8463*/
/*8429*/      OPC_RecordChild0, // #0 = $src1
/*8430*/      OPC_MoveChild, 1,
/*8432*/      OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*8435*/      OPC_RecordChild0, // #1 = $src2
/*8436*/      OPC_MoveChild, 1,
/*8438*/      OPC_CheckValueType, MVT::i32,
/*8440*/      OPC_MoveParent,
/*8441*/      OPC_MoveParent,
/*8442*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*8445*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*8454*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFR), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
              // Src: (mul:i64 GR64:i64:$src1, (sext_inreg:i64 GR64:i64:$src2, i32:Other)) - Complexity = 6
              // Dst: (MSGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*8463*/    /*Scope*/ 34, /*->8498*/
/*8464*/      OPC_MoveChild, 0,
/*8466*/      OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*8469*/      OPC_RecordChild0, // #0 = $src2
/*8470*/      OPC_MoveChild, 1,
/*8472*/      OPC_CheckValueType, MVT::i32,
/*8474*/      OPC_MoveParent,
/*8475*/      OPC_MoveParent,
/*8476*/      OPC_RecordChild1, // #1 = $src1
/*8477*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*8480*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*8489*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFR), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 3, 
              // Src: (mul:i64 (sext_inreg:i64 GR64:i64:$src2, i32:Other), GR64:i64:$src1) - Complexity = 6
              // Dst: (MSGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*8498*/    /*Scope*/ 26, /*->8525*/
/*8499*/      OPC_RecordChild0, // #0 = $src1
/*8500*/      OPC_RecordChild1, // #1 = $src2
/*8501*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8513
/*8504*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                // Dst: (MSR:i32 GR32:i32:$src1, GR32:i32:$src2)
              /*SwitchType*/ 9,  MVT::i64,// ->8524
/*8515*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                // Dst: (MSGR:i64 GR64:i64:$src1, GR64:i64:$src2)
              0, // EndSwitchType
/*8525*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(SystemZISD::UMUL_LOHI64),// ->8575
/*8529*/    OPC_RecordChild0, // #0 = $src1
/*8530*/    OPC_Scope, 31, /*->8563*/ // 2 children in Scope
/*8532*/      OPC_MoveChild, 1,
/*8534*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8537*/      OPC_RecordMemRef,
/*8538*/      OPC_RecordNode, // #1 = 'ld' chained node
/*8539*/      OPC_CheckFoldableChainNode,
/*8540*/      OPC_RecordChild1, // #2 = $src2
/*8541*/      OPC_CheckChild1Type, MVT::i64,
/*8543*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8545*/      OPC_CheckPredicate, 1, // Predicate_load
/*8547*/      OPC_MoveParent,
/*8548*/      OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*8551*/      OPC_EmitMergeInputChains1_1,
/*8552*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MLG), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (z_umul_lohi64:Untyped GR128:Untyped:$src1, (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
              // Dst: (MLG:Untyped GR128:Untyped:$src1, bdxaddr20only:i64:$src2)
/*8563*/    /*Scope*/ 10, /*->8574*/
/*8564*/      OPC_RecordChild1, // #1 = $src2
/*8565*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MLGR), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (z_umul_lohi64:Untyped GR128:Untyped:$src1, GR64:i64:$src2) - Complexity = 3
              // Dst: (MLGR:Untyped GR128:Untyped:$src1, GR64:i64:$src2)
/*8574*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 117,  TARGET_VAL(SystemZISD::SDIVREM64),// ->8695
/*8578*/    OPC_RecordChild0, // #0 = $src1
/*8579*/    OPC_Scope, 102, /*->8683*/ // 2 children in Scope
/*8581*/      OPC_MoveChild, 1,
/*8583*/      OPC_SwitchOpcode /*3 cases */, 50,  TARGET_VAL(ISD::LOAD),// ->8637
/*8587*/        OPC_RecordMemRef,
/*8588*/        OPC_RecordNode, // #1 = 'ld' chained node
/*8589*/        OPC_CheckFoldableChainNode,
/*8590*/        OPC_RecordChild1, // #2 = $src2
/*8591*/        OPC_CheckChild1Type, MVT::i64,
/*8593*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8595*/        OPC_Scope, 20, /*->8617*/ // 2 children in Scope
/*8597*/          OPC_CheckPredicate, 10, // Predicate_sextload
/*8599*/          OPC_CheckPredicate, 34, // Predicate_sextloadi32
/*8601*/          OPC_MoveParent,
/*8602*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*8605*/          OPC_EmitMergeInputChains1_1,
/*8606*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::DSGF), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (z_sdivrem64:Untyped GR128:Untyped:$src1, (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>) - Complexity = 19
                  // Dst: (DSGF:Untyped GR128:Untyped:$src1, bdxaddr20only:i64:$src2)
/*8617*/        /*Scope*/ 18, /*->8636*/
/*8618*/          OPC_CheckPredicate, 1, // Predicate_load
/*8620*/          OPC_MoveParent,
/*8621*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*8624*/          OPC_EmitMergeInputChains1_1,
/*8625*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::DSG), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (z_sdivrem64:Untyped GR128:Untyped:$src1, (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (DSG:Untyped GR128:Untyped:$src1, bdxaddr20only:i64:$src2)
/*8636*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::SIGN_EXTEND),// ->8651
/*8640*/        OPC_RecordChild0, // #1 = $src2
/*8641*/        OPC_MoveParent,
/*8642*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::DSGFR), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (z_sdivrem64:Untyped GR128:Untyped:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                // Dst: (DSGFR:Untyped GR128:Untyped:$src1, GR32:i32:$src2)
              /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->8682
/*8654*/        OPC_RecordChild0, // #1 = $src2
/*8655*/        OPC_MoveChild, 1,
/*8657*/        OPC_CheckValueType, MVT::i32,
/*8659*/        OPC_MoveParent,
/*8660*/        OPC_MoveParent,
/*8661*/        OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*8664*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*8673*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::DSGFR), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 3, 
                // Src: (z_sdivrem64:Untyped GR128:Untyped:$src1, (sext_inreg:i64 GR64:i64:$src2, i32:Other)) - Complexity = 6
                // Dst: (DSGFR:Untyped GR128:Untyped:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
              0, // EndSwitchOpcode
/*8683*/    /*Scope*/ 10, /*->8694*/
/*8684*/      OPC_RecordChild1, // #1 = $src2
/*8685*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::DSGR), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (z_sdivrem64:Untyped GR128:Untyped:$src1, GR64:i64:$src2) - Complexity = 3
              // Dst: (DSGR:Untyped GR128:Untyped:$src1, GR64:i64:$src2)
/*8694*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(SystemZISD::UDIVREM32),// ->8744
/*8698*/    OPC_RecordChild0, // #0 = $src1
/*8699*/    OPC_Scope, 31, /*->8732*/ // 2 children in Scope
/*8701*/      OPC_MoveChild, 1,
/*8703*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8706*/      OPC_RecordMemRef,
/*8707*/      OPC_RecordNode, // #1 = 'ld' chained node
/*8708*/      OPC_CheckFoldableChainNode,
/*8709*/      OPC_RecordChild1, // #2 = $src2
/*8710*/      OPC_CheckChild1Type, MVT::i64,
/*8712*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8714*/      OPC_CheckPredicate, 1, // Predicate_load
/*8716*/      OPC_MoveParent,
/*8717*/      OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*8720*/      OPC_EmitMergeInputChains1_1,
/*8721*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::DL), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (z_udivrem32:Untyped GR128:Untyped:$src1, (ld:i32 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
              // Dst: (DL:Untyped GR128:Untyped:$src1, bdxaddr20only:i64:$src2)
/*8732*/    /*Scope*/ 10, /*->8743*/
/*8733*/      OPC_RecordChild1, // #1 = $src2
/*8734*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::DLR), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (z_udivrem32:Untyped GR128:Untyped:$src1, GR32:i32:$src2) - Complexity = 3
              // Dst: (DLR:Untyped GR128:Untyped:$src1, GR32:i32:$src2)
/*8743*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(SystemZISD::UDIVREM64),// ->8793
/*8747*/    OPC_RecordChild0, // #0 = $src1
/*8748*/    OPC_Scope, 31, /*->8781*/ // 2 children in Scope
/*8750*/      OPC_MoveChild, 1,
/*8752*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8755*/      OPC_RecordMemRef,
/*8756*/      OPC_RecordNode, // #1 = 'ld' chained node
/*8757*/      OPC_CheckFoldableChainNode,
/*8758*/      OPC_RecordChild1, // #2 = $src2
/*8759*/      OPC_CheckChild1Type, MVT::i64,
/*8761*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8763*/      OPC_CheckPredicate, 1, // Predicate_load
/*8765*/      OPC_MoveParent,
/*8766*/      OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDXAddr20Only:$src2 #3 #4 #5
/*8769*/      OPC_EmitMergeInputChains1_1,
/*8770*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::DLG), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (z_udivrem64:Untyped GR128:Untyped:$src1, (ld:i64 bdxaddr20only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
              // Dst: (DLG:Untyped GR128:Untyped:$src1, bdxaddr20only:i64:$src2)
/*8781*/    /*Scope*/ 10, /*->8792*/
/*8782*/      OPC_RecordChild1, // #1 = $src2
/*8783*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::DLGR), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (z_udivrem64:Untyped GR128:Untyped:$src1, GR64:i64:$src2) - Complexity = 3
              // Dst: (DLGR:Untyped GR128:Untyped:$src1, GR64:i64:$src2)
/*8792*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 85,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_AND),// ->8881
/*8796*/    OPC_RecordMemRef,
/*8797*/    OPC_RecordNode,   // #0 = 'z_atomic_loadw_and' chained node
/*8798*/    OPC_RecordChild1, // #1 = $ptr
/*8799*/    OPC_CheckChild1Type, MVT::i64,
/*8801*/    OPC_RecordChild2, // #2 = $src2
/*8802*/    OPC_Scope, 44, /*->8848*/ // 2 children in Scope
/*8804*/      OPC_MoveChild, 2,
/*8806*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8809*/      OPC_CheckPredicate, 47, // Predicate_imm32lh16c
/*8811*/      OPC_MoveParent,
/*8812*/      OPC_RecordChild3, // #3 = $bitshift
/*8813*/      OPC_RecordChild4, // #4 = $negbitshift
/*8814*/      OPC_RecordChild5, // #5 = $bitsize
/*8815*/      OPC_MoveChild, 5,
/*8817*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8820*/      OPC_MoveParent,
/*8821*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*8824*/      OPC_EmitMergeInputChains1_0,
/*8825*/      OPC_EmitConvertToTarget, 2,
/*8827*/      OPC_EmitNodeXForm, 4, 8, // LH16
/*8830*/      OPC_EmitConvertToTarget, 5,
/*8832*/      OPC_EmitNodeXForm, 9, 10, // UIMM32
/*8835*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_NILH), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
              // Src: (z_atomic_loadw_and:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 19
              // Dst: (ATOMIC_LOADW_NILH:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*8848*/    /*Scope*/ 31, /*->8880*/
/*8849*/      OPC_RecordChild3, // #3 = $bitshift
/*8850*/      OPC_RecordChild4, // #4 = $negbitshift
/*8851*/      OPC_RecordChild5, // #5 = $bitsize
/*8852*/      OPC_MoveChild, 5,
/*8854*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8857*/      OPC_MoveParent,
/*8858*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*8861*/      OPC_EmitMergeInputChains1_0,
/*8862*/      OPC_EmitConvertToTarget, 5,
/*8864*/      OPC_EmitNodeXForm, 9, 8, // UIMM32
/*8867*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_NR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_and:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_NR:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*8880*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 85,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_OR),// ->8969
/*8884*/    OPC_RecordMemRef,
/*8885*/    OPC_RecordNode,   // #0 = 'z_atomic_loadw_or' chained node
/*8886*/    OPC_RecordChild1, // #1 = $ptr
/*8887*/    OPC_CheckChild1Type, MVT::i64,
/*8889*/    OPC_RecordChild2, // #2 = $src2
/*8890*/    OPC_Scope, 44, /*->8936*/ // 2 children in Scope
/*8892*/      OPC_MoveChild, 2,
/*8894*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8897*/      OPC_CheckPredicate, 24, // Predicate_imm32lh16
/*8899*/      OPC_MoveParent,
/*8900*/      OPC_RecordChild3, // #3 = $bitshift
/*8901*/      OPC_RecordChild4, // #4 = $negbitshift
/*8902*/      OPC_RecordChild5, // #5 = $bitsize
/*8903*/      OPC_MoveChild, 5,
/*8905*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8908*/      OPC_MoveParent,
/*8909*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*8912*/      OPC_EmitMergeInputChains1_0,
/*8913*/      OPC_EmitConvertToTarget, 2,
/*8915*/      OPC_EmitNodeXForm, 4, 8, // LH16
/*8918*/      OPC_EmitConvertToTarget, 5,
/*8920*/      OPC_EmitNodeXForm, 9, 10, // UIMM32
/*8923*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_OILH), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
              // Src: (z_atomic_loadw_or:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 19
              // Dst: (ATOMIC_LOADW_OILH:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*8936*/    /*Scope*/ 31, /*->8968*/
/*8937*/      OPC_RecordChild3, // #3 = $bitshift
/*8938*/      OPC_RecordChild4, // #4 = $negbitshift
/*8939*/      OPC_RecordChild5, // #5 = $bitsize
/*8940*/      OPC_MoveChild, 5,
/*8942*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8945*/      OPC_MoveParent,
/*8946*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*8949*/      OPC_EmitMergeInputChains1_0,
/*8950*/      OPC_EmitConvertToTarget, 5,
/*8952*/      OPC_EmitNodeXForm, 9, 8, // UIMM32
/*8955*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_OR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_or:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_OR:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*8968*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 85,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_NAND),// ->9057
/*8972*/    OPC_RecordMemRef,
/*8973*/    OPC_RecordNode,   // #0 = 'z_atomic_loadw_nand' chained node
/*8974*/    OPC_RecordChild1, // #1 = $ptr
/*8975*/    OPC_CheckChild1Type, MVT::i64,
/*8977*/    OPC_RecordChild2, // #2 = $src2
/*8978*/    OPC_Scope, 44, /*->9024*/ // 2 children in Scope
/*8980*/      OPC_MoveChild, 2,
/*8982*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8985*/      OPC_CheckPredicate, 47, // Predicate_imm32lh16c
/*8987*/      OPC_MoveParent,
/*8988*/      OPC_RecordChild3, // #3 = $bitshift
/*8989*/      OPC_RecordChild4, // #4 = $negbitshift
/*8990*/      OPC_RecordChild5, // #5 = $bitsize
/*8991*/      OPC_MoveChild, 5,
/*8993*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8996*/      OPC_MoveParent,
/*8997*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9000*/      OPC_EmitMergeInputChains1_0,
/*9001*/      OPC_EmitConvertToTarget, 2,
/*9003*/      OPC_EmitNodeXForm, 4, 8, // LH16
/*9006*/      OPC_EmitConvertToTarget, 5,
/*9008*/      OPC_EmitNodeXForm, 9, 10, // UIMM32
/*9011*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_NILHi), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
              // Src: (z_atomic_loadw_nand:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 19
              // Dst: (ATOMIC_LOADW_NILHi:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9024*/    /*Scope*/ 31, /*->9056*/
/*9025*/      OPC_RecordChild3, // #3 = $bitshift
/*9026*/      OPC_RecordChild4, // #4 = $negbitshift
/*9027*/      OPC_RecordChild5, // #5 = $bitsize
/*9028*/      OPC_MoveChild, 5,
/*9030*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9033*/      OPC_MoveParent,
/*9034*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9037*/      OPC_EmitMergeInputChains1_0,
/*9038*/      OPC_EmitConvertToTarget, 5,
/*9040*/      OPC_EmitNodeXForm, 9, 8, // UIMM32
/*9043*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_NRi), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_nand:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_NRi:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9056*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_ADD),// ->9143
/*9060*/    OPC_RecordMemRef,
/*9061*/    OPC_RecordNode,   // #0 = 'z_atomic_loadw_add' chained node
/*9062*/    OPC_RecordChild1, // #1 = $ptr
/*9063*/    OPC_CheckChild1Type, MVT::i64,
/*9065*/    OPC_RecordChild2, // #2 = $src2
/*9066*/    OPC_Scope, 42, /*->9110*/ // 2 children in Scope
/*9068*/      OPC_MoveChild, 2,
/*9070*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9073*/      OPC_MoveParent,
/*9074*/      OPC_RecordChild3, // #3 = $bitshift
/*9075*/      OPC_RecordChild4, // #4 = $negbitshift
/*9076*/      OPC_RecordChild5, // #5 = $bitsize
/*9077*/      OPC_MoveChild, 5,
/*9079*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9082*/      OPC_MoveParent,
/*9083*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9086*/      OPC_EmitMergeInputChains1_0,
/*9087*/      OPC_EmitConvertToTarget, 2,
/*9089*/      OPC_EmitNodeXForm, 10, 8, // SIMM32
/*9092*/      OPC_EmitConvertToTarget, 5,
/*9094*/      OPC_EmitNodeXForm, 9, 10, // UIMM32
/*9097*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_AFI), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
              // Src: (z_atomic_loadw_add:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:SIMM32>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 18
              // Dst: (ATOMIC_LOADW_AFI:i32 bdaddr20only:i64:$ptr, (SIMM32:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9110*/    /*Scope*/ 31, /*->9142*/
/*9111*/      OPC_RecordChild3, // #3 = $bitshift
/*9112*/      OPC_RecordChild4, // #4 = $negbitshift
/*9113*/      OPC_RecordChild5, // #5 = $bitsize
/*9114*/      OPC_MoveChild, 5,
/*9116*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9119*/      OPC_MoveParent,
/*9120*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9123*/      OPC_EmitMergeInputChains1_0,
/*9124*/      OPC_EmitConvertToTarget, 5,
/*9126*/      OPC_EmitNodeXForm, 9, 8, // UIMM32
/*9129*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_AR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_add:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_AR:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9142*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_XOR),// ->9229
/*9146*/    OPC_RecordMemRef,
/*9147*/    OPC_RecordNode,   // #0 = 'z_atomic_loadw_xor' chained node
/*9148*/    OPC_RecordChild1, // #1 = $ptr
/*9149*/    OPC_CheckChild1Type, MVT::i64,
/*9151*/    OPC_RecordChild2, // #2 = $src2
/*9152*/    OPC_Scope, 42, /*->9196*/ // 2 children in Scope
/*9154*/      OPC_MoveChild, 2,
/*9156*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9159*/      OPC_MoveParent,
/*9160*/      OPC_RecordChild3, // #3 = $bitshift
/*9161*/      OPC_RecordChild4, // #4 = $negbitshift
/*9162*/      OPC_RecordChild5, // #5 = $bitsize
/*9163*/      OPC_MoveChild, 5,
/*9165*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9168*/      OPC_MoveParent,
/*9169*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9172*/      OPC_EmitMergeInputChains1_0,
/*9173*/      OPC_EmitConvertToTarget, 2,
/*9175*/      OPC_EmitNodeXForm, 9, 8, // UIMM32
/*9178*/      OPC_EmitConvertToTarget, 5,
/*9180*/      OPC_EmitNodeXForm, 9, 10, // UIMM32
/*9183*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_XILF), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
              // Src: (z_atomic_loadw_xor:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 18
              // Dst: (ATOMIC_LOADW_XILF:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9196*/    /*Scope*/ 31, /*->9228*/
/*9197*/      OPC_RecordChild3, // #3 = $bitshift
/*9198*/      OPC_RecordChild4, // #4 = $negbitshift
/*9199*/      OPC_RecordChild5, // #5 = $bitsize
/*9200*/      OPC_MoveChild, 5,
/*9202*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9205*/      OPC_MoveParent,
/*9206*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9209*/      OPC_EmitMergeInputChains1_0,
/*9210*/      OPC_EmitConvertToTarget, 5,
/*9212*/      OPC_EmitNodeXForm, 9, 8, // UIMM32
/*9215*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_XR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_xor:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_XR:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9228*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 73|128,5/*713*/,  TARGET_VAL(ISD::LOAD),// ->9946
/*9233*/    OPC_RecordMemRef,
/*9234*/    OPC_RecordNode,   // #0 = 'ld' chained node
/*9235*/    OPC_RecordChild1, // #1 = $addr
/*9236*/    OPC_CheckChild1Type, MVT::i64,
/*9238*/    OPC_CheckPredicate, 0, // Predicate_unindexedload
/*9240*/    OPC_Scope, 34, /*->9276*/ // 9 children in Scope
/*9242*/      OPC_CheckPredicate, 1, // Predicate_load
/*9244*/      OPC_CheckPredicate, 33, // Predicate_aligned_load
/*9246*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9261
/*9249*/        OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectPCRelAddress:$addr #2
/*9252*/        OPC_EmitMergeInputChains1_0,
/*9253*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (ld:i32 pcrel32:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>> - Complexity = 17
                // Dst: (LRL:i32 pcrel32:i64:$addr)
              /*SwitchType*/ 12,  MVT::i64,// ->9275
/*9263*/        OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectPCRelAddress:$addr #2
/*9266*/        OPC_EmitMergeInputChains1_0,
/*9267*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGRL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (ld:i64 pcrel32:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>> - Complexity = 17
                // Dst: (LGRL:i64 pcrel32:i64:$addr)
              0, // EndSwitchType
/*9276*/    /*Scope*/ 58, /*->9335*/
/*9277*/      OPC_CheckPredicate, 10, // Predicate_sextload
/*9279*/      OPC_Scope, 34, /*->9315*/ // 2 children in Scope
/*9281*/        OPC_CheckPredicate, 31, // Predicate_sextloadi16
/*9283*/        OPC_CheckPredicate, 32, // Predicate_aligned_sextloadi16
/*9285*/        OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9300
/*9288*/          OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectPCRelAddress:$addr #2
/*9291*/          OPC_EmitMergeInputChains1_0,
/*9292*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHRL), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                  // Src: (ld:i32 pcrel32:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_aligned_sextloadi16>> - Complexity = 17
                  // Dst: (LHRL:i32 pcrel32:i64:$addr)
                /*SwitchType*/ 12,  MVT::i64,// ->9314
/*9302*/          OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectPCRelAddress:$addr #2
/*9305*/          OPC_EmitMergeInputChains1_0,
/*9306*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGHRL), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                  // Src: (ld:i64 pcrel32:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_aligned_sextloadi16>> - Complexity = 17
                  // Dst: (LGHRL:i64 pcrel32:i64:$addr)
                0, // EndSwitchType
/*9315*/      /*Scope*/ 18, /*->9334*/
/*9316*/        OPC_CheckPredicate, 34, // Predicate_sextloadi32
/*9318*/        OPC_CheckPredicate, 35, // Predicate_aligned_sextloadi32
/*9320*/        OPC_CheckType, MVT::i64,
/*9322*/        OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectPCRelAddress:$addr #2
/*9325*/        OPC_EmitMergeInputChains1_0,
/*9326*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGFRL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (ld:i64 pcrel32:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>><<P:Predicate_aligned_sextloadi32>> - Complexity = 17
                // Dst: (LGFRL:i64 pcrel32:i64:$addr)
/*9334*/      0, /*End of Scope*/
/*9335*/    /*Scope*/ 58, /*->9394*/
/*9336*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*9338*/      OPC_Scope, 34, /*->9374*/ // 2 children in Scope
/*9340*/        OPC_CheckPredicate, 37, // Predicate_zextloadi16
/*9342*/        OPC_CheckPredicate, 38, // Predicate_aligned_zextloadi16
/*9344*/        OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9359
/*9347*/          OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectPCRelAddress:$addr #2
/*9350*/          OPC_EmitMergeInputChains1_0,
/*9351*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLHRL), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                  // Src: (ld:i32 pcrel32:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_aligned_zextloadi16>> - Complexity = 17
                  // Dst: (LLHRL:i32 pcrel32:i64:$addr)
                /*SwitchType*/ 12,  MVT::i64,// ->9373
/*9361*/          OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectPCRelAddress:$addr #2
/*9364*/          OPC_EmitMergeInputChains1_0,
/*9365*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGHRL), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                  // Src: (ld:i64 pcrel32:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_aligned_zextloadi16>> - Complexity = 17
                  // Dst: (LLGHRL:i64 pcrel32:i64:$addr)
                0, // EndSwitchType
/*9374*/      /*Scope*/ 18, /*->9393*/
/*9375*/        OPC_CheckPredicate, 39, // Predicate_zextloadi32
/*9377*/        OPC_CheckPredicate, 40, // Predicate_aligned_zextloadi32
/*9379*/        OPC_CheckType, MVT::i64,
/*9381*/        OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectPCRelAddress:$addr #2
/*9384*/        OPC_EmitMergeInputChains1_0,
/*9385*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGFRL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (ld:i64 pcrel32:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>><<P:Predicate_aligned_zextloadi32>> - Complexity = 17
                // Dst: (LLGFRL:i64 pcrel32:i64:$addr)
/*9393*/      0, /*End of Scope*/
/*9394*/    /*Scope*/ 70, /*->9465*/
/*9395*/      OPC_CheckPredicate, 1, // Predicate_load
/*9397*/      OPC_SwitchType /*3 cases */, 32,  MVT::i32,// ->9432
/*9400*/        OPC_Scope, 14, /*->9416*/ // 2 children in Scope
/*9402*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$addr #2 #3 #4
/*9405*/          OPC_EmitMergeInputChains1_0,
/*9406*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::L), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (L:i32 bdxaddr12pair:i64:$addr)
/*9416*/        /*Scope*/ 14, /*->9431*/
/*9417*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$addr #2 #3 #4
/*9420*/          OPC_EmitMergeInputChains1_0,
/*9421*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LY:i32 bdxaddr20pair:i64:$addr)
/*9431*/        0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->9448
/*9434*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$addr #2 #3 #4
/*9437*/        OPC_EmitMergeInputChains1_0,
/*9438*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                // Dst: (LG:i64 bdxaddr20only:i64:$addr)
              /*SwitchType*/ 14,  MVT::Untyped,// ->9464
/*9450*/        OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Only128:$src #2 #3 #4
/*9453*/        OPC_EmitMergeInputChains1_0,
/*9454*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::L128), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:Untyped bdxaddr20only128:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                // Dst: (L128:Untyped bdxaddr20only128:i64:$src)
              0, // EndSwitchType
/*9465*/    /*Scope*/ 115, /*->9581*/
/*9466*/      OPC_CheckPredicate, 10, // Predicate_sextload
/*9468*/      OPC_SwitchType /*2 cases */, 54,  MVT::i32,// ->9525
/*9471*/        OPC_Scope, 16, /*->9489*/ // 2 children in Scope
/*9473*/          OPC_CheckPredicate, 11, // Predicate_sextloadi8
/*9475*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$addr #2 #3 #4
/*9478*/          OPC_EmitMergeInputChains1_0,
/*9479*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                  // Dst: (LB:i32 bdxaddr20only:i64:$addr)
/*9489*/        /*Scope*/ 34, /*->9524*/
/*9490*/          OPC_CheckPredicate, 31, // Predicate_sextloadi16
/*9492*/          OPC_Scope, 14, /*->9508*/ // 2 children in Scope
/*9494*/            OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$addr #2 #3 #4
/*9497*/            OPC_EmitMergeInputChains1_0,
/*9498*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LH), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i32 bdxaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                    // Dst: (LH:i32 bdxaddr12pair:i64:$addr)
/*9508*/          /*Scope*/ 14, /*->9523*/
/*9509*/            OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$addr #2 #3 #4
/*9512*/            OPC_EmitMergeInputChains1_0,
/*9513*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i32 bdxaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                    // Dst: (LHY:i32 bdxaddr20pair:i64:$addr)
/*9523*/          0, /*End of Scope*/
/*9524*/        0, /*End of Scope*/
              /*SwitchType*/ 53,  MVT::i64,// ->9580
/*9527*/        OPC_Scope, 16, /*->9545*/ // 3 children in Scope
/*9529*/          OPC_CheckPredicate, 11, // Predicate_sextloadi8
/*9531*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$addr #2 #3 #4
/*9534*/          OPC_EmitMergeInputChains1_0,
/*9535*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                  // Dst: (LGB:i64 bdxaddr20only:i64:$addr)
/*9545*/        /*Scope*/ 16, /*->9562*/
/*9546*/          OPC_CheckPredicate, 31, // Predicate_sextloadi16
/*9548*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$addr #2 #3 #4
/*9551*/          OPC_EmitMergeInputChains1_0,
/*9552*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                  // Dst: (LGH:i64 bdxaddr20only:i64:$addr)
/*9562*/        /*Scope*/ 16, /*->9579*/
/*9563*/          OPC_CheckPredicate, 34, // Predicate_sextloadi32
/*9565*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$addr #2 #3 #4
/*9568*/          OPC_EmitMergeInputChains1_0,
/*9569*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGF), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 16
                  // Dst: (LGF:i64 bdxaddr20only:i64:$addr)
/*9579*/        0, /*End of Scope*/
              0, // EndSwitchType
/*9581*/    /*Scope*/ 115, /*->9697*/
/*9582*/      OPC_CheckPredicate, 12, // Predicate_extload
/*9584*/      OPC_SwitchType /*2 cases */, 54,  MVT::i32,// ->9641
/*9587*/        OPC_Scope, 16, /*->9605*/ // 2 children in Scope
/*9589*/          OPC_CheckPredicate, 13, // Predicate_extloadi8
/*9591*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$src #2 #3 #4
/*9594*/          OPC_EmitMergeInputChains1_0,
/*9595*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 16
                  // Dst: (LB:i32 bdxaddr20only:i64:$src)
/*9605*/        /*Scope*/ 34, /*->9640*/
/*9606*/          OPC_CheckPredicate, 54, // Predicate_extloadi16
/*9608*/          OPC_Scope, 14, /*->9624*/ // 2 children in Scope
/*9610*/            OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src #2 #3 #4
/*9613*/            OPC_EmitMergeInputChains1_0,
/*9614*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LH), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i32 bdxaddr12pair:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                    // Dst: (LH:i32 bdxaddr12pair:i64:$src)
/*9624*/          /*Scope*/ 14, /*->9639*/
/*9625*/            OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src #2 #3 #4
/*9628*/            OPC_EmitMergeInputChains1_0,
/*9629*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i32 bdxaddr20pair:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                    // Dst: (LHY:i32 bdxaddr20pair:i64:$src)
/*9639*/          0, /*End of Scope*/
/*9640*/        0, /*End of Scope*/
              /*SwitchType*/ 53,  MVT::i64,// ->9696
/*9643*/        OPC_Scope, 16, /*->9661*/ // 3 children in Scope
/*9645*/          OPC_CheckPredicate, 13, // Predicate_extloadi8
/*9647*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$src #2 #3 #4
/*9650*/          OPC_EmitMergeInputChains1_0,
/*9651*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 16
                  // Dst: (LGB:i64 bdxaddr20only:i64:$src)
/*9661*/        /*Scope*/ 16, /*->9678*/
/*9662*/          OPC_CheckPredicate, 54, // Predicate_extloadi16
/*9664*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$src #2 #3 #4
/*9667*/          OPC_EmitMergeInputChains1_0,
/*9668*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                  // Dst: (LGH:i64 bdxaddr20only:i64:$src)
/*9678*/        /*Scope*/ 16, /*->9695*/
/*9679*/          OPC_CheckPredicate, 55, // Predicate_extloadi32
/*9681*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$src #2 #3 #4
/*9684*/          OPC_EmitMergeInputChains1_0,
/*9685*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGF), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 16
                  // Dst: (LGF:i64 bdxaddr20only:i64:$src)
/*9695*/        0, /*End of Scope*/
              0, // EndSwitchType
/*9697*/    /*Scope*/ 97, /*->9795*/
/*9698*/      OPC_CheckPredicate, 6, // Predicate_zextload
/*9700*/      OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->9739
/*9703*/        OPC_Scope, 16, /*->9721*/ // 2 children in Scope
/*9705*/          OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*9707*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$addr #2 #3 #4
/*9710*/          OPC_EmitMergeInputChains1_0,
/*9711*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLC), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                  // Dst: (LLC:i32 bdxaddr20only:i64:$addr)
/*9721*/        /*Scope*/ 16, /*->9738*/
/*9722*/          OPC_CheckPredicate, 37, // Predicate_zextloadi16
/*9724*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$addr #2 #3 #4
/*9727*/          OPC_EmitMergeInputChains1_0,
/*9728*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                  // Dst: (LLH:i32 bdxaddr20only:i64:$addr)
/*9738*/        0, /*End of Scope*/
              /*SwitchType*/ 53,  MVT::i64,// ->9794
/*9741*/        OPC_Scope, 16, /*->9759*/ // 3 children in Scope
/*9743*/          OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*9745*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$addr #2 #3 #4
/*9748*/          OPC_EmitMergeInputChains1_0,
/*9749*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGC), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                  // Dst: (LLGC:i64 bdxaddr20only:i64:$addr)
/*9759*/        /*Scope*/ 16, /*->9776*/
/*9760*/          OPC_CheckPredicate, 37, // Predicate_zextloadi16
/*9762*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$addr #2 #3 #4
/*9765*/          OPC_EmitMergeInputChains1_0,
/*9766*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                  // Dst: (LLGH:i64 bdxaddr20only:i64:$addr)
/*9776*/        /*Scope*/ 16, /*->9793*/
/*9777*/          OPC_CheckPredicate, 39, // Predicate_zextloadi32
/*9779*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDXAddr20Only:$addr #2 #3 #4
/*9782*/          OPC_EmitMergeInputChains1_0,
/*9783*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGF), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 16
                  // Dst: (LLGF:i64 bdxaddr20only:i64:$addr)
/*9793*/        0, /*End of Scope*/
              0, // EndSwitchType
/*9795*/    /*Scope*/ 88, /*->9884*/
/*9796*/      OPC_CheckPredicate, 1, // Predicate_load
/*9798*/      OPC_SwitchType /*3 cases */, 32,  MVT::f32,// ->9833
/*9801*/        OPC_Scope, 14, /*->9817*/ // 2 children in Scope
/*9803*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$addr #2 #3 #4
/*9806*/          OPC_EmitMergeInputChains1_0,
/*9807*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LE), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f32 bdxaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LE:f32 bdxaddr12pair:i64:$addr)
/*9817*/        /*Scope*/ 14, /*->9832*/
/*9818*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$addr #2 #3 #4
/*9821*/          OPC_EmitMergeInputChains1_0,
/*9822*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LEY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f32 bdxaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LEY:f32 bdxaddr20pair:i64:$addr)
/*9832*/        0, /*End of Scope*/
              /*SwitchType*/ 32,  MVT::f64,// ->9867
/*9835*/        OPC_Scope, 14, /*->9851*/ // 2 children in Scope
/*9837*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$addr #2 #3 #4
/*9840*/          OPC_EmitMergeInputChains1_0,
/*9841*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LD), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f64 bdxaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LD:f64 bdxaddr12pair:i64:$addr)
/*9851*/        /*Scope*/ 14, /*->9866*/
/*9852*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$addr #2 #3 #4
/*9855*/          OPC_EmitMergeInputChains1_0,
/*9856*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LDY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f64 bdxaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LDY:f64 bdxaddr20pair:i64:$addr)
/*9866*/        0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::f128,// ->9883
/*9869*/        OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Only128:$src #2 #3 #4
/*9872*/        OPC_EmitMergeInputChains1_0,
/*9873*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:f128 bdxaddr20only128:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                // Dst: (LX:f128 bdxaddr20only128:i64:$src)
              0, // EndSwitchType
/*9884*/    /*Scope*/ 60, /*->9945*/
/*9885*/      OPC_CheckPredicate, 12, // Predicate_extload
/*9887*/      OPC_Scope, 36, /*->9925*/ // 2 children in Scope
/*9889*/        OPC_CheckPredicate, 56, // Predicate_extloadf32
/*9891*/        OPC_SwitchType /*2 cases */, 14,  MVT::f64,// ->9908
/*9894*/          OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDXAddr12Only:$addr #2 #3 #4
/*9897*/          OPC_EmitMergeInputChains1_0,
/*9898*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LDEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f64 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 16
                  // Dst: (LDEB:f64 bdxaddr12only:i64:$addr)
                /*SwitchType*/ 14,  MVT::f128,// ->9924
/*9910*/          OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDXAddr12Only:$addr #2 #3 #4
/*9913*/          OPC_EmitMergeInputChains1_0,
/*9914*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LXEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f128 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 16
                  // Dst: (LXEB:f128 bdxaddr12only:i64:$addr)
                0, // EndSwitchType
/*9925*/      /*Scope*/ 18, /*->9944*/
/*9926*/        OPC_CheckPredicate, 57, // Predicate_extloadf64
/*9928*/        OPC_CheckType, MVT::f128,
/*9930*/        OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDXAddr12Only:$addr #2 #3 #4
/*9933*/        OPC_EmitMergeInputChains1_0,
/*9934*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LXDB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:f128 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf64>> - Complexity = 16
                // Dst: (LXDB:f128 bdxaddr12only:i64:$addr)
/*9944*/      0, /*End of Scope*/
/*9945*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 32|128,1/*160*/,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->10110
/*9950*/    OPC_RecordMemRef,
/*9951*/    OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*9952*/    OPC_RecordChild1, // #1 = $ptr
/*9953*/    OPC_CheckChild1Type, MVT::i64,
/*9955*/    OPC_RecordChild2, // #2 = $src2
/*9956*/    OPC_Scope, 113, /*->10071*/ // 3 children in Scope
/*9958*/      OPC_MoveChild, 2,
/*9960*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9963*/      OPC_Scope, 26, /*->9991*/ // 4 children in Scope
/*9965*/        OPC_CheckPredicate, 15, // Predicate_imm32sx16
/*9967*/        OPC_MoveParent,
/*9968*/        OPC_CheckPredicate, 58, // Predicate_atomic_load_add_32
/*9970*/        OPC_CheckType, MVT::i32,
/*9972*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*9975*/        OPC_EmitMergeInputChains1_0,
/*9976*/        OPC_EmitConvertToTarget, 2,
/*9978*/        OPC_EmitNodeXForm, 2, 5, // SIMM16
/*9981*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AHI), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_add:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$src2)<<P:Predicate_atomic_load_add_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_AHI:i32 bdaddr20only:i64:$ptr, (SIMM16:i32 (imm:i32):$src2))
/*9991*/      /*Scope*/ 26, /*->10018*/
/*9992*/        OPC_CheckPredicate, 16, // Predicate_imm64sx16
/*9994*/        OPC_MoveParent,
/*9995*/        OPC_CheckPredicate, 59, // Predicate_atomic_load_add_64
/*9997*/        OPC_CheckType, MVT::i64,
/*9999*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10002*/       OPC_EmitMergeInputChains1_0,
/*10003*/       OPC_EmitConvertToTarget, 2,
/*10005*/       OPC_EmitNodeXForm, 2, 5, // SIMM16
/*10008*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AGHI), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_add:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$src2)<<P:Predicate_atomic_load_add_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_AGHI:i64 bdaddr20only:i64:$ptr, (SIMM16:i64 (imm:i64):$src2))
/*10018*/     /*Scope*/ 26, /*->10045*/
/*10019*/       OPC_CheckPredicate, 36, // Predicate_imm64sx32
/*10021*/       OPC_MoveParent,
/*10022*/       OPC_CheckPredicate, 59, // Predicate_atomic_load_add_64
/*10024*/       OPC_CheckType, MVT::i64,
/*10026*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10029*/       OPC_EmitMergeInputChains1_0,
/*10030*/       OPC_EmitConvertToTarget, 2,
/*10032*/       OPC_EmitNodeXForm, 10, 5, // SIMM32
/*10035*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AGFI), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_add:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$src2)<<P:Predicate_atomic_load_add_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_AGFI:i64 bdaddr20only:i64:$ptr, (SIMM32:i64 (imm:i64):$src2))
/*10045*/     /*Scope*/ 24, /*->10070*/
/*10046*/       OPC_MoveParent,
/*10047*/       OPC_CheckPredicate, 58, // Predicate_atomic_load_add_32
/*10049*/       OPC_CheckType, MVT::i32,
/*10051*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10054*/       OPC_EmitMergeInputChains1_0,
/*10055*/       OPC_EmitConvertToTarget, 2,
/*10057*/       OPC_EmitNodeXForm, 10, 5, // SIMM32
/*10060*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AFI), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_add:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:SIMM32>>:$src2)<<P:Predicate_atomic_load_add_32>> - Complexity = 16
                // Dst: (ATOMIC_LOAD_AFI:i32 bdaddr20only:i64:$ptr, (SIMM32:i32 (imm:i32):$src2))
/*10070*/     0, /*End of Scope*/
/*10071*/   /*Scope*/ 18, /*->10090*/
/*10072*/     OPC_CheckPredicate, 58, // Predicate_atomic_load_add_32
/*10074*/     OPC_CheckType, MVT::i32,
/*10076*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10079*/     OPC_EmitMergeInputChains1_0,
/*10080*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_add:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_add_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_AR:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*10090*/   /*Scope*/ 18, /*->10109*/
/*10091*/     OPC_CheckPredicate, 59, // Predicate_atomic_load_add_64
/*10093*/     OPC_CheckType, MVT::i64,
/*10095*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10098*/     OPC_EmitMergeInputChains1_0,
/*10099*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AGR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_add:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_add_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_AGR:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*10109*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 40|128,2/*296*/,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->10410
/*10114*/   OPC_RecordMemRef,
/*10115*/   OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*10116*/   OPC_RecordChild1, // #1 = $ptr
/*10117*/   OPC_CheckChild1Type, MVT::i64,
/*10119*/   OPC_RecordChild2, // #2 = $src2
/*10120*/   OPC_Scope, 120|128,1/*248*/, /*->10371*/ // 3 children in Scope
/*10123*/     OPC_MoveChild, 2,
/*10125*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10128*/     OPC_Scope, 26, /*->10156*/ // 9 children in Scope
/*10130*/       OPC_CheckPredicate, 46, // Predicate_imm32ll16c
/*10132*/       OPC_MoveParent,
/*10133*/       OPC_CheckPredicate, 60, // Predicate_atomic_load_and_32
/*10135*/       OPC_CheckType, MVT::i32,
/*10137*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10140*/       OPC_EmitMergeInputChains1_0,
/*10141*/       OPC_EmitConvertToTarget, 2,
/*10143*/       OPC_EmitNodeXForm, 3, 5, // LL16
/*10146*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILL32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32ll16c>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_and_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILL32:i32 bdaddr20only:i64:$ptr, (LL16:i32 (imm:i32):$src2))
/*10156*/     /*Scope*/ 26, /*->10183*/
/*10157*/       OPC_CheckPredicate, 47, // Predicate_imm32lh16c
/*10159*/       OPC_MoveParent,
/*10160*/       OPC_CheckPredicate, 60, // Predicate_atomic_load_and_32
/*10162*/       OPC_CheckType, MVT::i32,
/*10164*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10167*/       OPC_EmitMergeInputChains1_0,
/*10168*/       OPC_EmitConvertToTarget, 2,
/*10170*/       OPC_EmitNodeXForm, 4, 5, // LH16
/*10173*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILH32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_and_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILH32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2))
/*10183*/     /*Scope*/ 26, /*->10210*/
/*10184*/       OPC_CheckPredicate, 48, // Predicate_imm64ll16c
/*10186*/       OPC_MoveParent,
/*10187*/       OPC_CheckPredicate, 61, // Predicate_atomic_load_and_64
/*10189*/       OPC_CheckType, MVT::i64,
/*10191*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10194*/       OPC_EmitMergeInputChains1_0,
/*10195*/       OPC_EmitConvertToTarget, 2,
/*10197*/       OPC_EmitNodeXForm, 3, 5, // LL16
/*10200*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64ll16c>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILL:i64 bdaddr20only:i64:$ptr, (LL16:i64 (imm:i64):$src2))
/*10210*/     /*Scope*/ 26, /*->10237*/
/*10211*/       OPC_CheckPredicate, 49, // Predicate_imm64lh16c
/*10213*/       OPC_MoveParent,
/*10214*/       OPC_CheckPredicate, 61, // Predicate_atomic_load_and_64
/*10216*/       OPC_CheckType, MVT::i64,
/*10218*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10221*/       OPC_EmitMergeInputChains1_0,
/*10222*/       OPC_EmitConvertToTarget, 2,
/*10224*/       OPC_EmitNodeXForm, 4, 5, // LH16
/*10227*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILH), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lh16c>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILH:i64 bdaddr20only:i64:$ptr, (LH16:i64 (imm:i64):$src2))
/*10237*/     /*Scope*/ 26, /*->10264*/
/*10238*/       OPC_CheckPredicate, 50, // Predicate_imm64hl16c
/*10240*/       OPC_MoveParent,
/*10241*/       OPC_CheckPredicate, 61, // Predicate_atomic_load_and_64
/*10243*/       OPC_CheckType, MVT::i64,
/*10245*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10248*/       OPC_EmitMergeInputChains1_0,
/*10249*/       OPC_EmitConvertToTarget, 2,
/*10251*/       OPC_EmitNodeXForm, 5, 5, // HL16
/*10254*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hl16c>><<X:HL16>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHL:i64 bdaddr20only:i64:$ptr, (HL16:i64 (imm:i64):$src2))
/*10264*/     /*Scope*/ 26, /*->10291*/
/*10265*/       OPC_CheckPredicate, 51, // Predicate_imm64hh16c
/*10267*/       OPC_MoveParent,
/*10268*/       OPC_CheckPredicate, 61, // Predicate_atomic_load_and_64
/*10270*/       OPC_CheckType, MVT::i64,
/*10272*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10275*/       OPC_EmitMergeInputChains1_0,
/*10276*/       OPC_EmitConvertToTarget, 2,
/*10278*/       OPC_EmitNodeXForm, 6, 5, // HH16
/*10281*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHH), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hh16c>><<X:HH16>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHH:i64 bdaddr20only:i64:$ptr, (HH16:i64 (imm:i64):$src2))
/*10291*/     /*Scope*/ 26, /*->10318*/
/*10292*/       OPC_CheckPredicate, 52, // Predicate_imm64lf32c
/*10294*/       OPC_MoveParent,
/*10295*/       OPC_CheckPredicate, 61, // Predicate_atomic_load_and_64
/*10297*/       OPC_CheckType, MVT::i64,
/*10299*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10302*/       OPC_EmitMergeInputChains1_0,
/*10303*/       OPC_EmitConvertToTarget, 2,
/*10305*/       OPC_EmitNodeXForm, 7, 5, // LF32
/*10308*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lf32c>><<X:LF32>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILF:i64 bdaddr20only:i64:$ptr, (LF32:i64 (imm:i64):$src2))
/*10318*/     /*Scope*/ 26, /*->10345*/
/*10319*/       OPC_CheckPredicate, 53, // Predicate_imm64hf32c
/*10321*/       OPC_MoveParent,
/*10322*/       OPC_CheckPredicate, 61, // Predicate_atomic_load_and_64
/*10324*/       OPC_CheckType, MVT::i64,
/*10326*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10329*/       OPC_EmitMergeInputChains1_0,
/*10330*/       OPC_EmitConvertToTarget, 2,
/*10332*/       OPC_EmitNodeXForm, 8, 5, // HF32
/*10335*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hf32c>><<X:HF32>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHF:i64 bdaddr20only:i64:$ptr, (HF32:i64 (imm:i64):$src2))
/*10345*/     /*Scope*/ 24, /*->10370*/
/*10346*/       OPC_MoveParent,
/*10347*/       OPC_CheckPredicate, 60, // Predicate_atomic_load_and_32
/*10349*/       OPC_CheckType, MVT::i32,
/*10351*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10354*/       OPC_EmitMergeInputChains1_0,
/*10355*/       OPC_EmitConvertToTarget, 2,
/*10357*/       OPC_EmitNodeXForm, 9, 5, // UIMM32
/*10360*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILF32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2)<<P:Predicate_atomic_load_and_32>> - Complexity = 16
                // Dst: (ATOMIC_LOAD_NILF32:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2))
/*10370*/     0, /*End of Scope*/
/*10371*/   /*Scope*/ 18, /*->10390*/
/*10372*/     OPC_CheckPredicate, 60, // Predicate_atomic_load_and_32
/*10374*/     OPC_CheckType, MVT::i32,
/*10376*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10379*/     OPC_EmitMergeInputChains1_0,
/*10380*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_and:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_and_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NR:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*10390*/   /*Scope*/ 18, /*->10409*/
/*10391*/     OPC_CheckPredicate, 61, // Predicate_atomic_load_and_64
/*10393*/     OPC_CheckType, MVT::i64,
/*10395*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10398*/     OPC_EmitMergeInputChains1_0,
/*10399*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NGR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NGR:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*10409*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 40|128,2/*296*/,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->10710
/*10414*/   OPC_RecordMemRef,
/*10415*/   OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*10416*/   OPC_RecordChild1, // #1 = $ptr
/*10417*/   OPC_CheckChild1Type, MVT::i64,
/*10419*/   OPC_RecordChild2, // #2 = $src2
/*10420*/   OPC_Scope, 120|128,1/*248*/, /*->10671*/ // 3 children in Scope
/*10423*/     OPC_MoveChild, 2,
/*10425*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10428*/     OPC_Scope, 26, /*->10456*/ // 9 children in Scope
/*10430*/       OPC_CheckPredicate, 23, // Predicate_imm32ll16
/*10432*/       OPC_MoveParent,
/*10433*/       OPC_CheckPredicate, 62, // Predicate_atomic_load_or_32
/*10435*/       OPC_CheckType, MVT::i32,
/*10437*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10440*/       OPC_EmitMergeInputChains1_0,
/*10441*/       OPC_EmitConvertToTarget, 2,
/*10443*/       OPC_EmitNodeXForm, 3, 5, // LL16
/*10446*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILL32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_or_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OILL32:i32 bdaddr20only:i64:$ptr, (LL16:i32 (imm:i32):$src2))
/*10456*/     /*Scope*/ 26, /*->10483*/
/*10457*/       OPC_CheckPredicate, 24, // Predicate_imm32lh16
/*10459*/       OPC_MoveParent,
/*10460*/       OPC_CheckPredicate, 62, // Predicate_atomic_load_or_32
/*10462*/       OPC_CheckType, MVT::i32,
/*10464*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10467*/       OPC_EmitMergeInputChains1_0,
/*10468*/       OPC_EmitConvertToTarget, 2,
/*10470*/       OPC_EmitNodeXForm, 4, 5, // LH16
/*10473*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILH32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_or_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OILH32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2))
/*10483*/     /*Scope*/ 26, /*->10510*/
/*10484*/       OPC_CheckPredicate, 25, // Predicate_imm64ll16
/*10486*/       OPC_MoveParent,
/*10487*/       OPC_CheckPredicate, 63, // Predicate_atomic_load_or_64
/*10489*/       OPC_CheckType, MVT::i64,
/*10491*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10494*/       OPC_EmitMergeInputChains1_0,
/*10495*/       OPC_EmitConvertToTarget, 2,
/*10497*/       OPC_EmitNodeXForm, 3, 5, // LL16
/*10500*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64ll16>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OILL:i64 bdaddr20only:i64:$ptr, (LL16:i64 (imm:i64):$src2))
/*10510*/     /*Scope*/ 26, /*->10537*/
/*10511*/       OPC_CheckPredicate, 26, // Predicate_imm64lh16
/*10513*/       OPC_MoveParent,
/*10514*/       OPC_CheckPredicate, 63, // Predicate_atomic_load_or_64
/*10516*/       OPC_CheckType, MVT::i64,
/*10518*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10521*/       OPC_EmitMergeInputChains1_0,
/*10522*/       OPC_EmitConvertToTarget, 2,
/*10524*/       OPC_EmitNodeXForm, 4, 5, // LH16
/*10527*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILH), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lh16>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OILH:i64 bdaddr20only:i64:$ptr, (LH16:i64 (imm:i64):$src2))
/*10537*/     /*Scope*/ 26, /*->10564*/
/*10538*/       OPC_CheckPredicate, 27, // Predicate_imm64hl16
/*10540*/       OPC_MoveParent,
/*10541*/       OPC_CheckPredicate, 63, // Predicate_atomic_load_or_64
/*10543*/       OPC_CheckType, MVT::i64,
/*10545*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10548*/       OPC_EmitMergeInputChains1_0,
/*10549*/       OPC_EmitConvertToTarget, 2,
/*10551*/       OPC_EmitNodeXForm, 5, 5, // HL16
/*10554*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OIHL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hl16>><<X:HL16>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OIHL:i64 bdaddr20only:i64:$ptr, (HL16:i64 (imm:i64):$src2))
/*10564*/     /*Scope*/ 26, /*->10591*/
/*10565*/       OPC_CheckPredicate, 28, // Predicate_imm64hh16
/*10567*/       OPC_MoveParent,
/*10568*/       OPC_CheckPredicate, 63, // Predicate_atomic_load_or_64
/*10570*/       OPC_CheckType, MVT::i64,
/*10572*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10575*/       OPC_EmitMergeInputChains1_0,
/*10576*/       OPC_EmitConvertToTarget, 2,
/*10578*/       OPC_EmitNodeXForm, 6, 5, // HH16
/*10581*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OIHH), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hh16>><<X:HH16>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OIHH:i64 bdaddr20only:i64:$ptr, (HH16:i64 (imm:i64):$src2))
/*10591*/     /*Scope*/ 26, /*->10618*/
/*10592*/       OPC_CheckPredicate, 29, // Predicate_imm64lf32
/*10594*/       OPC_MoveParent,
/*10595*/       OPC_CheckPredicate, 63, // Predicate_atomic_load_or_64
/*10597*/       OPC_CheckType, MVT::i64,
/*10599*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10602*/       OPC_EmitMergeInputChains1_0,
/*10603*/       OPC_EmitConvertToTarget, 2,
/*10605*/       OPC_EmitNodeXForm, 7, 5, // LF32
/*10608*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OILF:i64 bdaddr20only:i64:$ptr, (LF32:i64 (imm:i64):$src2))
/*10618*/     /*Scope*/ 26, /*->10645*/
/*10619*/       OPC_CheckPredicate, 30, // Predicate_imm64hf32
/*10621*/       OPC_MoveParent,
/*10622*/       OPC_CheckPredicate, 63, // Predicate_atomic_load_or_64
/*10624*/       OPC_CheckType, MVT::i64,
/*10626*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10629*/       OPC_EmitMergeInputChains1_0,
/*10630*/       OPC_EmitConvertToTarget, 2,
/*10632*/       OPC_EmitNodeXForm, 8, 5, // HF32
/*10635*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OIHF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OIHF:i64 bdaddr20only:i64:$ptr, (HF32:i64 (imm:i64):$src2))
/*10645*/     /*Scope*/ 24, /*->10670*/
/*10646*/       OPC_MoveParent,
/*10647*/       OPC_CheckPredicate, 62, // Predicate_atomic_load_or_32
/*10649*/       OPC_CheckType, MVT::i32,
/*10651*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10654*/       OPC_EmitMergeInputChains1_0,
/*10655*/       OPC_EmitConvertToTarget, 2,
/*10657*/       OPC_EmitNodeXForm, 9, 5, // UIMM32
/*10660*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILF32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2)<<P:Predicate_atomic_load_or_32>> - Complexity = 16
                // Dst: (ATOMIC_LOAD_OILF32:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2))
/*10670*/     0, /*End of Scope*/
/*10671*/   /*Scope*/ 18, /*->10690*/
/*10672*/     OPC_CheckPredicate, 62, // Predicate_atomic_load_or_32
/*10674*/     OPC_CheckType, MVT::i32,
/*10676*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10679*/     OPC_EmitMergeInputChains1_0,
/*10680*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_or:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_or_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_OR:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*10690*/   /*Scope*/ 18, /*->10709*/
/*10691*/     OPC_CheckPredicate, 63, // Predicate_atomic_load_or_64
/*10693*/     OPC_CheckType, MVT::i64,
/*10695*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10698*/     OPC_EmitMergeInputChains1_0,
/*10699*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OGR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_OGR:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*10709*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 5|128,1/*133*/,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->10847
/*10714*/   OPC_RecordMemRef,
/*10715*/   OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*10716*/   OPC_RecordChild1, // #1 = $ptr
/*10717*/   OPC_CheckChild1Type, MVT::i64,
/*10719*/   OPC_RecordChild2, // #2 = $src2
/*10720*/   OPC_Scope, 86, /*->10808*/ // 3 children in Scope
/*10722*/     OPC_MoveChild, 2,
/*10724*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10727*/     OPC_Scope, 26, /*->10755*/ // 3 children in Scope
/*10729*/       OPC_CheckPredicate, 29, // Predicate_imm64lf32
/*10731*/       OPC_MoveParent,
/*10732*/       OPC_CheckPredicate, 64, // Predicate_atomic_load_xor_64
/*10734*/       OPC_CheckType, MVT::i64,
/*10736*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10739*/       OPC_EmitMergeInputChains1_0,
/*10740*/       OPC_EmitConvertToTarget, 2,
/*10742*/       OPC_EmitNodeXForm, 7, 5, // LF32
/*10745*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XILF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_xor:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$src2)<<P:Predicate_atomic_load_xor_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_XILF:i64 bdaddr20only:i64:$ptr, (LF32:i64 (imm:i64):$src2))
/*10755*/     /*Scope*/ 26, /*->10782*/
/*10756*/       OPC_CheckPredicate, 30, // Predicate_imm64hf32
/*10758*/       OPC_MoveParent,
/*10759*/       OPC_CheckPredicate, 64, // Predicate_atomic_load_xor_64
/*10761*/       OPC_CheckType, MVT::i64,
/*10763*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10766*/       OPC_EmitMergeInputChains1_0,
/*10767*/       OPC_EmitConvertToTarget, 2,
/*10769*/       OPC_EmitNodeXForm, 8, 5, // HF32
/*10772*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XIHF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_xor:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$src2)<<P:Predicate_atomic_load_xor_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_XIHF:i64 bdaddr20only:i64:$ptr, (HF32:i64 (imm:i64):$src2))
/*10782*/     /*Scope*/ 24, /*->10807*/
/*10783*/       OPC_MoveParent,
/*10784*/       OPC_CheckPredicate, 65, // Predicate_atomic_load_xor_32
/*10786*/       OPC_CheckType, MVT::i32,
/*10788*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10791*/       OPC_EmitMergeInputChains1_0,
/*10792*/       OPC_EmitConvertToTarget, 2,
/*10794*/       OPC_EmitNodeXForm, 9, 5, // UIMM32
/*10797*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XILF32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_xor:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2)<<P:Predicate_atomic_load_xor_32>> - Complexity = 16
                // Dst: (ATOMIC_LOAD_XILF32:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2))
/*10807*/     0, /*End of Scope*/
/*10808*/   /*Scope*/ 18, /*->10827*/
/*10809*/     OPC_CheckPredicate, 65, // Predicate_atomic_load_xor_32
/*10811*/     OPC_CheckType, MVT::i32,
/*10813*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10816*/     OPC_EmitMergeInputChains1_0,
/*10817*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_xor:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_xor_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_XR:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*10827*/   /*Scope*/ 18, /*->10846*/
/*10828*/     OPC_CheckPredicate, 64, // Predicate_atomic_load_xor_64
/*10830*/     OPC_CheckType, MVT::i64,
/*10832*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10835*/     OPC_EmitMergeInputChains1_0,
/*10836*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XGR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_xor:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_xor_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_XGR:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*10846*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 40|128,2/*296*/,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->11147
/*10851*/   OPC_RecordMemRef,
/*10852*/   OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*10853*/   OPC_RecordChild1, // #1 = $ptr
/*10854*/   OPC_CheckChild1Type, MVT::i64,
/*10856*/   OPC_RecordChild2, // #2 = $src2
/*10857*/   OPC_Scope, 120|128,1/*248*/, /*->11108*/ // 3 children in Scope
/*10860*/     OPC_MoveChild, 2,
/*10862*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10865*/     OPC_Scope, 26, /*->10893*/ // 9 children in Scope
/*10867*/       OPC_CheckPredicate, 46, // Predicate_imm32ll16c
/*10869*/       OPC_MoveParent,
/*10870*/       OPC_CheckPredicate, 66, // Predicate_atomic_load_nand_32
/*10872*/       OPC_CheckType, MVT::i32,
/*10874*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10877*/       OPC_EmitMergeInputChains1_0,
/*10878*/       OPC_EmitConvertToTarget, 2,
/*10880*/       OPC_EmitNodeXForm, 3, 5, // LL16
/*10883*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILL32i), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32ll16c>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_nand_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILL32i:i32 bdaddr20only:i64:$ptr, (LL16:i32 (imm:i32):$src2))
/*10893*/     /*Scope*/ 26, /*->10920*/
/*10894*/       OPC_CheckPredicate, 47, // Predicate_imm32lh16c
/*10896*/       OPC_MoveParent,
/*10897*/       OPC_CheckPredicate, 66, // Predicate_atomic_load_nand_32
/*10899*/       OPC_CheckType, MVT::i32,
/*10901*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10904*/       OPC_EmitMergeInputChains1_0,
/*10905*/       OPC_EmitConvertToTarget, 2,
/*10907*/       OPC_EmitNodeXForm, 4, 5, // LH16
/*10910*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILH32i), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_nand_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILH32i:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2))
/*10920*/     /*Scope*/ 26, /*->10947*/
/*10921*/       OPC_CheckPredicate, 48, // Predicate_imm64ll16c
/*10923*/       OPC_MoveParent,
/*10924*/       OPC_CheckPredicate, 67, // Predicate_atomic_load_nand_64
/*10926*/       OPC_CheckType, MVT::i64,
/*10928*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10931*/       OPC_EmitMergeInputChains1_0,
/*10932*/       OPC_EmitConvertToTarget, 2,
/*10934*/       OPC_EmitNodeXForm, 3, 5, // LL16
/*10937*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILLi), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64ll16c>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILLi:i64 bdaddr20only:i64:$ptr, (LL16:i64 (imm:i64):$src2))
/*10947*/     /*Scope*/ 26, /*->10974*/
/*10948*/       OPC_CheckPredicate, 49, // Predicate_imm64lh16c
/*10950*/       OPC_MoveParent,
/*10951*/       OPC_CheckPredicate, 67, // Predicate_atomic_load_nand_64
/*10953*/       OPC_CheckType, MVT::i64,
/*10955*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10958*/       OPC_EmitMergeInputChains1_0,
/*10959*/       OPC_EmitConvertToTarget, 2,
/*10961*/       OPC_EmitNodeXForm, 4, 5, // LH16
/*10964*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILHi), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lh16c>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILHi:i64 bdaddr20only:i64:$ptr, (LH16:i64 (imm:i64):$src2))
/*10974*/     /*Scope*/ 26, /*->11001*/
/*10975*/       OPC_CheckPredicate, 50, // Predicate_imm64hl16c
/*10977*/       OPC_MoveParent,
/*10978*/       OPC_CheckPredicate, 67, // Predicate_atomic_load_nand_64
/*10980*/       OPC_CheckType, MVT::i64,
/*10982*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10985*/       OPC_EmitMergeInputChains1_0,
/*10986*/       OPC_EmitConvertToTarget, 2,
/*10988*/       OPC_EmitNodeXForm, 5, 5, // HL16
/*10991*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHLi), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hl16c>><<X:HL16>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHLi:i64 bdaddr20only:i64:$ptr, (HL16:i64 (imm:i64):$src2))
/*11001*/     /*Scope*/ 26, /*->11028*/
/*11002*/       OPC_CheckPredicate, 51, // Predicate_imm64hh16c
/*11004*/       OPC_MoveParent,
/*11005*/       OPC_CheckPredicate, 67, // Predicate_atomic_load_nand_64
/*11007*/       OPC_CheckType, MVT::i64,
/*11009*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11012*/       OPC_EmitMergeInputChains1_0,
/*11013*/       OPC_EmitConvertToTarget, 2,
/*11015*/       OPC_EmitNodeXForm, 6, 5, // HH16
/*11018*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHHi), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hh16c>><<X:HH16>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHHi:i64 bdaddr20only:i64:$ptr, (HH16:i64 (imm:i64):$src2))
/*11028*/     /*Scope*/ 26, /*->11055*/
/*11029*/       OPC_CheckPredicate, 52, // Predicate_imm64lf32c
/*11031*/       OPC_MoveParent,
/*11032*/       OPC_CheckPredicate, 67, // Predicate_atomic_load_nand_64
/*11034*/       OPC_CheckType, MVT::i64,
/*11036*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11039*/       OPC_EmitMergeInputChains1_0,
/*11040*/       OPC_EmitConvertToTarget, 2,
/*11042*/       OPC_EmitNodeXForm, 7, 5, // LF32
/*11045*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILFi), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lf32c>><<X:LF32>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILFi:i64 bdaddr20only:i64:$ptr, (LF32:i64 (imm:i64):$src2))
/*11055*/     /*Scope*/ 26, /*->11082*/
/*11056*/       OPC_CheckPredicate, 53, // Predicate_imm64hf32c
/*11058*/       OPC_MoveParent,
/*11059*/       OPC_CheckPredicate, 67, // Predicate_atomic_load_nand_64
/*11061*/       OPC_CheckType, MVT::i64,
/*11063*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11066*/       OPC_EmitMergeInputChains1_0,
/*11067*/       OPC_EmitConvertToTarget, 2,
/*11069*/       OPC_EmitNodeXForm, 8, 5, // HF32
/*11072*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHFi), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hf32c>><<X:HF32>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHFi:i64 bdaddr20only:i64:$ptr, (HF32:i64 (imm:i64):$src2))
/*11082*/     /*Scope*/ 24, /*->11107*/
/*11083*/       OPC_MoveParent,
/*11084*/       OPC_CheckPredicate, 66, // Predicate_atomic_load_nand_32
/*11086*/       OPC_CheckType, MVT::i32,
/*11088*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11091*/       OPC_EmitMergeInputChains1_0,
/*11092*/       OPC_EmitConvertToTarget, 2,
/*11094*/       OPC_EmitNodeXForm, 9, 5, // UIMM32
/*11097*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILF32i), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2)<<P:Predicate_atomic_load_nand_32>> - Complexity = 16
                // Dst: (ATOMIC_LOAD_NILF32i:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2))
/*11107*/     0, /*End of Scope*/
/*11108*/   /*Scope*/ 18, /*->11127*/
/*11109*/     OPC_CheckPredicate, 66, // Predicate_atomic_load_nand_32
/*11111*/     OPC_CheckType, MVT::i32,
/*11113*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11116*/     OPC_EmitMergeInputChains1_0,
/*11117*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NRi), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_nand:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_nand_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NRi:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*11127*/   /*Scope*/ 18, /*->11146*/
/*11128*/     OPC_CheckPredicate, 67, // Predicate_atomic_load_nand_64
/*11130*/     OPC_CheckType, MVT::i64,
/*11132*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11135*/     OPC_EmitMergeInputChains1_0,
/*11136*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NGRi), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NGRi:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*11146*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 37,  TARGET_VAL(SystemZISD::ATOMIC_SWAPW),// ->11187
/*11150*/   OPC_RecordMemRef,
/*11151*/   OPC_RecordNode,   // #0 = 'z_atomic_swapw' chained node
/*11152*/   OPC_RecordChild1, // #1 = $ptr
/*11153*/   OPC_CheckChild1Type, MVT::i64,
/*11155*/   OPC_RecordChild2, // #2 = $src2
/*11156*/   OPC_RecordChild3, // #3 = $bitshift
/*11157*/   OPC_RecordChild4, // #4 = $negbitshift
/*11158*/   OPC_RecordChild5, // #5 = $bitsize
/*11159*/   OPC_MoveChild, 5,
/*11161*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11164*/   OPC_MoveParent,
/*11165*/   OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*11168*/   OPC_EmitMergeInputChains1_0,
/*11169*/   OPC_EmitConvertToTarget, 5,
/*11171*/   OPC_EmitNodeXForm, 9, 8, // UIMM32
/*11174*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_SWAPW), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_swapw:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_SWAPW:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 37,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_SUB),// ->11227
/*11190*/   OPC_RecordMemRef,
/*11191*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_sub' chained node
/*11192*/   OPC_RecordChild1, // #1 = $ptr
/*11193*/   OPC_CheckChild1Type, MVT::i64,
/*11195*/   OPC_RecordChild2, // #2 = $src2
/*11196*/   OPC_RecordChild3, // #3 = $bitshift
/*11197*/   OPC_RecordChild4, // #4 = $negbitshift
/*11198*/   OPC_RecordChild5, // #5 = $bitsize
/*11199*/   OPC_MoveChild, 5,
/*11201*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11204*/   OPC_MoveParent,
/*11205*/   OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*11208*/   OPC_EmitMergeInputChains1_0,
/*11209*/   OPC_EmitConvertToTarget, 5,
/*11211*/   OPC_EmitNodeXForm, 9, 8, // UIMM32
/*11214*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_SR), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_loadw_sub:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_LOADW_SR:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 37,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_MIN),// ->11267
/*11230*/   OPC_RecordMemRef,
/*11231*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_min' chained node
/*11232*/   OPC_RecordChild1, // #1 = $ptr
/*11233*/   OPC_CheckChild1Type, MVT::i64,
/*11235*/   OPC_RecordChild2, // #2 = $src2
/*11236*/   OPC_RecordChild3, // #3 = $bitshift
/*11237*/   OPC_RecordChild4, // #4 = $negbitshift
/*11238*/   OPC_RecordChild5, // #5 = $bitsize
/*11239*/   OPC_MoveChild, 5,
/*11241*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11244*/   OPC_MoveParent,
/*11245*/   OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*11248*/   OPC_EmitMergeInputChains1_0,
/*11249*/   OPC_EmitConvertToTarget, 5,
/*11251*/   OPC_EmitNodeXForm, 9, 8, // UIMM32
/*11254*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_MIN), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_loadw_min:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_LOADW_MIN:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 37,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_MAX),// ->11307
/*11270*/   OPC_RecordMemRef,
/*11271*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_max' chained node
/*11272*/   OPC_RecordChild1, // #1 = $ptr
/*11273*/   OPC_CheckChild1Type, MVT::i64,
/*11275*/   OPC_RecordChild2, // #2 = $src2
/*11276*/   OPC_RecordChild3, // #3 = $bitshift
/*11277*/   OPC_RecordChild4, // #4 = $negbitshift
/*11278*/   OPC_RecordChild5, // #5 = $bitsize
/*11279*/   OPC_MoveChild, 5,
/*11281*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11284*/   OPC_MoveParent,
/*11285*/   OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*11288*/   OPC_EmitMergeInputChains1_0,
/*11289*/   OPC_EmitConvertToTarget, 5,
/*11291*/   OPC_EmitNodeXForm, 9, 8, // UIMM32
/*11294*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_MAX), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_loadw_max:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_LOADW_MAX:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 37,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_UMIN),// ->11347
/*11310*/   OPC_RecordMemRef,
/*11311*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_umin' chained node
/*11312*/   OPC_RecordChild1, // #1 = $ptr
/*11313*/   OPC_CheckChild1Type, MVT::i64,
/*11315*/   OPC_RecordChild2, // #2 = $src2
/*11316*/   OPC_RecordChild3, // #3 = $bitshift
/*11317*/   OPC_RecordChild4, // #4 = $negbitshift
/*11318*/   OPC_RecordChild5, // #5 = $bitsize
/*11319*/   OPC_MoveChild, 5,
/*11321*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11324*/   OPC_MoveParent,
/*11325*/   OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*11328*/   OPC_EmitMergeInputChains1_0,
/*11329*/   OPC_EmitConvertToTarget, 5,
/*11331*/   OPC_EmitNodeXForm, 9, 8, // UIMM32
/*11334*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_UMIN), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_loadw_umin:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_LOADW_UMIN:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 37,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_UMAX),// ->11387
/*11350*/   OPC_RecordMemRef,
/*11351*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_umax' chained node
/*11352*/   OPC_RecordChild1, // #1 = $ptr
/*11353*/   OPC_CheckChild1Type, MVT::i64,
/*11355*/   OPC_RecordChild2, // #2 = $src2
/*11356*/   OPC_RecordChild3, // #3 = $bitshift
/*11357*/   OPC_RecordChild4, // #4 = $negbitshift
/*11358*/   OPC_RecordChild5, // #5 = $bitsize
/*11359*/   OPC_MoveChild, 5,
/*11361*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11364*/   OPC_MoveParent,
/*11365*/   OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*11368*/   OPC_EmitMergeInputChains1_0,
/*11369*/   OPC_EmitConvertToTarget, 5,
/*11371*/   OPC_EmitNodeXForm, 9, 8, // UIMM32
/*11374*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_UMAX), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_loadw_umax:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_LOADW_UMAX:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 39,  TARGET_VAL(SystemZISD::ATOMIC_CMP_SWAPW),// ->11429
/*11390*/   OPC_RecordMemRef,
/*11391*/   OPC_RecordNode,   // #0 = 'z_atomic_cmp_swapw' chained node
/*11392*/   OPC_RecordChild1, // #1 = $addr
/*11393*/   OPC_CheckChild1Type, MVT::i64,
/*11395*/   OPC_RecordChild2, // #2 = $cmp
/*11396*/   OPC_RecordChild3, // #3 = $swap
/*11397*/   OPC_RecordChild4, // #4 = $bitshift
/*11398*/   OPC_RecordChild5, // #5 = $negbitshift
/*11399*/   OPC_RecordChild6, // #6 = $bitsize
/*11400*/   OPC_MoveChild, 6,
/*11402*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11405*/   OPC_MoveParent,
/*11406*/   OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$addr #7 #8
/*11409*/   OPC_EmitMergeInputChains1_0,
/*11410*/   OPC_EmitConvertToTarget, 6,
/*11412*/   OPC_EmitNodeXForm, 9, 9, // UIMM32
/*11415*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_CMP_SWAPW), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 7/*#Ops*/, 7, 8, 2, 3, 4, 5, 10, 
            // Src: (z_atomic_cmp_swapw:i32 bdaddr20only:i64:$addr, GR32:i32:$cmp, GR32:i32:$swap, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_CMP_SWAPW:i32 bdaddr20only:i64:$addr, GR32:i32:$cmp, GR32:i32:$swap, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 66,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->11498
/*11432*/   OPC_RecordMemRef,
/*11433*/   OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*11434*/   OPC_RecordChild1, // #1 = $ptr
/*11435*/   OPC_CheckChild1Type, MVT::i64,
/*11437*/   OPC_RecordChild2, // #2 = $old
/*11438*/   OPC_RecordChild3, // #3 = $new
/*11439*/   OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->11478
/*11442*/     OPC_CheckPredicate, 68, // Predicate_atomic_cmp_swap_32
/*11444*/     OPC_Scope, 15, /*->11461*/ // 2 children in Scope
/*11446*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr12Pair:$ptr #4 #5
/*11449*/       OPC_EmitMergeInputChains1_0,
/*11450*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CS), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (atomic_cmp_swap:i32 bdaddr12pair:i64:$ptr, GR32:i32:$old, GR32:i32:$new)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 13
                // Dst: (CS:i32 GR32:i32:$old, GR32:i32:$new, bdaddr12pair:i64:$ptr)
/*11461*/     /*Scope*/ 15, /*->11477*/
/*11462*/       OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectBDAddr20Pair:$ptr #4 #5
/*11465*/       OPC_EmitMergeInputChains1_0,
/*11466*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CSY), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (atomic_cmp_swap:i32 bdaddr20pair:i64:$ptr, GR32:i32:$old, GR32:i32:$new)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 13
                // Dst: (CSY:i32 GR32:i32:$old, GR32:i32:$new, bdaddr20pair:i64:$ptr)
/*11477*/     0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->11497
/*11480*/     OPC_CheckPredicate, 69, // Predicate_atomic_cmp_swap_64
/*11482*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #4 #5
/*11485*/     OPC_EmitMergeInputChains1_0,
/*11486*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::CSG), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (atomic_cmp_swap:i64 bdaddr20only:i64:$ptr, GR64:i64:$old, GR64:i64:$new)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 13
              // Dst: (CSG:i64 GR64:i64:$old, GR64:i64:$new, bdaddr20only:i64:$ptr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->11545
/*11501*/   OPC_RecordMemRef,
/*11502*/   OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*11503*/   OPC_RecordChild1, // #1 = $ptr
/*11504*/   OPC_CheckChild1Type, MVT::i64,
/*11506*/   OPC_RecordChild2, // #2 = $src2
/*11507*/   OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->11526
/*11510*/     OPC_CheckPredicate, 70, // Predicate_atomic_swap_32
/*11512*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11515*/     OPC_EmitMergeInputChains1_0,
/*11516*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_SWAP_32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_swap:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_swap_32>> - Complexity = 13
              // Dst: (ATOMIC_SWAP_32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 16,  MVT::i64,// ->11544
/*11528*/     OPC_CheckPredicate, 71, // Predicate_atomic_swap_64
/*11530*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11533*/     OPC_EmitMergeInputChains1_0,
/*11534*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_SWAP_64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_swap:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_SWAP_64:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->11592
/*11548*/   OPC_RecordMemRef,
/*11549*/   OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*11550*/   OPC_RecordChild1, // #1 = $ptr
/*11551*/   OPC_CheckChild1Type, MVT::i64,
/*11553*/   OPC_RecordChild2, // #2 = $src2
/*11554*/   OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->11573
/*11557*/     OPC_CheckPredicate, 72, // Predicate_atomic_load_sub_32
/*11559*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11562*/     OPC_EmitMergeInputChains1_0,
/*11563*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_SR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_sub:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_sub_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_SR:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 16,  MVT::i64,// ->11591
/*11575*/     OPC_CheckPredicate, 73, // Predicate_atomic_load_sub_64
/*11577*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11580*/     OPC_EmitMergeInputChains1_0,
/*11581*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_SGR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_sub:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_sub_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_SGR:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::ATOMIC_LOAD_MIN),// ->11639
/*11595*/   OPC_RecordMemRef,
/*11596*/   OPC_RecordNode,   // #0 = 'atomic_load_min' chained node
/*11597*/   OPC_RecordChild1, // #1 = $ptr
/*11598*/   OPC_CheckChild1Type, MVT::i64,
/*11600*/   OPC_RecordChild2, // #2 = $src2
/*11601*/   OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->11620
/*11604*/     OPC_CheckPredicate, 74, // Predicate_atomic_load_min_32
/*11606*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11609*/     OPC_EmitMergeInputChains1_0,
/*11610*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_MIN_32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_min:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_min_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_MIN_32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 16,  MVT::i64,// ->11638
/*11622*/     OPC_CheckPredicate, 75, // Predicate_atomic_load_min_64
/*11624*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11627*/     OPC_EmitMergeInputChains1_0,
/*11628*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_MIN_64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_min:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_min_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_MIN_64:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::ATOMIC_LOAD_MAX),// ->11686
/*11642*/   OPC_RecordMemRef,
/*11643*/   OPC_RecordNode,   // #0 = 'atomic_load_max' chained node
/*11644*/   OPC_RecordChild1, // #1 = $ptr
/*11645*/   OPC_CheckChild1Type, MVT::i64,
/*11647*/   OPC_RecordChild2, // #2 = $src2
/*11648*/   OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->11667
/*11651*/     OPC_CheckPredicate, 76, // Predicate_atomic_load_max_32
/*11653*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11656*/     OPC_EmitMergeInputChains1_0,
/*11657*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_MAX_32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_max:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_max_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_MAX_32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 16,  MVT::i64,// ->11685
/*11669*/     OPC_CheckPredicate, 77, // Predicate_atomic_load_max_64
/*11671*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11674*/     OPC_EmitMergeInputChains1_0,
/*11675*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_MAX_64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_max:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_max_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_MAX_64:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::ATOMIC_LOAD_UMIN),// ->11733
/*11689*/   OPC_RecordMemRef,
/*11690*/   OPC_RecordNode,   // #0 = 'atomic_load_umin' chained node
/*11691*/   OPC_RecordChild1, // #1 = $ptr
/*11692*/   OPC_CheckChild1Type, MVT::i64,
/*11694*/   OPC_RecordChild2, // #2 = $src2
/*11695*/   OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->11714
/*11698*/     OPC_CheckPredicate, 78, // Predicate_atomic_load_umin_32
/*11700*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11703*/     OPC_EmitMergeInputChains1_0,
/*11704*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_UMIN_32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_umin:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_umin_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_UMIN_32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 16,  MVT::i64,// ->11732
/*11716*/     OPC_CheckPredicate, 79, // Predicate_atomic_load_umin_64
/*11718*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11721*/     OPC_EmitMergeInputChains1_0,
/*11722*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_UMIN_64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_umin:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_umin_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_UMIN_64:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::ATOMIC_LOAD_UMAX),// ->11780
/*11736*/   OPC_RecordMemRef,
/*11737*/   OPC_RecordNode,   // #0 = 'atomic_load_umax' chained node
/*11738*/   OPC_RecordChild1, // #1 = $ptr
/*11739*/   OPC_CheckChild1Type, MVT::i64,
/*11741*/   OPC_RecordChild2, // #2 = $src2
/*11742*/   OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->11761
/*11745*/     OPC_CheckPredicate, 80, // Predicate_atomic_load_umax_32
/*11747*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11750*/     OPC_EmitMergeInputChains1_0,
/*11751*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_UMAX_32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_umax:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_umax_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_UMAX_32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 16,  MVT::i64,// ->11779
/*11763*/     OPC_CheckPredicate, 81, // Predicate_atomic_load_umax_64
/*11765*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11768*/     OPC_EmitMergeInputChains1_0,
/*11769*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_UMAX_64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_umax:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_umax_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_UMAX_64:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::FrameIndex),// ->11830
/*11783*/   OPC_RecordNode,   // #0 = $src
/*11784*/   OPC_CheckType, MVT::i64,
/*11786*/   OPC_Scope, 13, /*->11801*/ // 3 children in Scope
/*11788*/     OPC_CheckComplexPat, /*CP*/9, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*11791*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: dynalloc12only:i64:$src - Complexity = 12
              // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*11801*/   /*Scope*/ 13, /*->11815*/
/*11802*/     OPC_CheckComplexPat, /*CP*/10, /*#*/0, // selectLAAddr12Pair:$src #1 #2 #3
/*11805*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: laaddr12pair:i64:$src - Complexity = 12
              // Dst: (LA:i64 laaddr12pair:i64:$src)
/*11815*/   /*Scope*/ 13, /*->11829*/
/*11816*/     OPC_CheckComplexPat, /*CP*/11, /*#*/0, // selectLAAddr20Pair:$src #1 #2 #3
/*11819*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: laaddr20pair:i64:$src - Complexity = 12
              // Dst: (LAY:i64 laaddr20pair:i64:$src)
/*11829*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(SystemZISD::ADJDYNALLOC),// ->11880
/*11833*/   OPC_RecordNode,   // #0 = $src
/*11834*/   OPC_CheckType, MVT::i64,
/*11836*/   OPC_Scope, 13, /*->11851*/ // 3 children in Scope
/*11838*/     OPC_CheckComplexPat, /*CP*/9, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*11841*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: dynalloc12only:i64:$src - Complexity = 12
              // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*11851*/   /*Scope*/ 13, /*->11865*/
/*11852*/     OPC_CheckComplexPat, /*CP*/10, /*#*/0, // selectLAAddr12Pair:$src #1 #2 #3
/*11855*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: laaddr12pair:i64:$src - Complexity = 12
              // Dst: (LA:i64 laaddr12pair:i64:$src)
/*11865*/   /*Scope*/ 13, /*->11879*/
/*11866*/     OPC_CheckComplexPat, /*CP*/11, /*#*/0, // selectLAAddr20Pair:$src #1 #2 #3
/*11869*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: laaddr20pair:i64:$src - Complexity = 12
              // Dst: (LAY:i64 laaddr20pair:i64:$src)
/*11879*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::SHL),// ->11919
/*11883*/   OPC_RecordChild0, // #0 = $src1
/*11884*/   OPC_RecordChild1, // #1 = $src2
/*11885*/   OPC_CheckChild1Type, MVT::i32,
/*11887*/   OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->11903
/*11890*/     OPC_CheckComplexPat, /*CP*/13, /*#*/1, // selectBDAddr12Only:$src2 #2 #3
/*11893*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLL), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
              // Src: (shl:i32 GR32:i32:$src1, shift12only:i32:$src2) - Complexity = 12
              // Dst: (SLL:i32 GR32:i32:$src1, shift12only:i32:$src2)
            /*SwitchType*/ 13,  MVT::i64,// ->11918
/*11905*/     OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDAddr20Only:$src2 #2 #3
/*11908*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLLG), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (shl:i64 GR64:i64:$src1, shift20only:i32:$src2) - Complexity = 12
              // Dst: (SLLG:i64 GR64:i64:$src1, shift20only:i32:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::SRL),// ->11958
/*11922*/   OPC_RecordChild0, // #0 = $src1
/*11923*/   OPC_RecordChild1, // #1 = $src2
/*11924*/   OPC_CheckChild1Type, MVT::i32,
/*11926*/   OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->11942
/*11929*/     OPC_CheckComplexPat, /*CP*/13, /*#*/1, // selectBDAddr12Only:$src2 #2 #3
/*11932*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRL), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
              // Src: (srl:i32 GR32:i32:$src1, shift12only:i32:$src2) - Complexity = 12
              // Dst: (SRL:i32 GR32:i32:$src1, shift12only:i32:$src2)
            /*SwitchType*/ 13,  MVT::i64,// ->11957
/*11944*/     OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDAddr20Only:$src2 #2 #3
/*11947*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRLG), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (srl:i64 GR64:i64:$src1, shift20only:i32:$src2) - Complexity = 12
              // Dst: (SRLG:i64 GR64:i64:$src1, shift20only:i32:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::SRA),// ->11997
/*11961*/   OPC_RecordChild0, // #0 = $src1
/*11962*/   OPC_RecordChild1, // #1 = $src2
/*11963*/   OPC_CheckChild1Type, MVT::i32,
/*11965*/   OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->11981
/*11968*/     OPC_CheckComplexPat, /*CP*/13, /*#*/1, // selectBDAddr12Only:$src2 #2 #3
/*11971*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRA), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
              // Src: (sra:i32 GR32:i32:$src1, shift12only:i32:$src2) - Complexity = 12
              // Dst: (SRA:i32 GR32:i32:$src1, shift12only:i32:$src2)
            /*SwitchType*/ 13,  MVT::i64,// ->11996
/*11983*/     OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDAddr20Only:$src2 #2 #3
/*11986*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRAG), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (sra:i64 GR64:i64:$src1, shift20only:i32:$src2) - Complexity = 12
              // Dst: (SRAG:i64 GR64:i64:$src1, shift20only:i32:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::ROTL),// ->12036
/*12000*/   OPC_RecordChild0, // #0 = $src1
/*12001*/   OPC_RecordChild1, // #1 = $src2
/*12002*/   OPC_CheckChild1Type, MVT::i32,
/*12004*/   OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->12020
/*12007*/     OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDAddr20Only:$src2 #2 #3
/*12010*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::RLL), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
              // Src: (rotl:i32 GR32:i32:$src1, shift20only:i32:$src2) - Complexity = 12
              // Dst: (RLL:i32 GR32:i32:$src1, shift20only:i32:$src2)
            /*SwitchType*/ 13,  MVT::i64,// ->12035
/*12022*/     OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDAddr20Only:$src2 #2 #3
/*12025*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::RLLG), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (rotl:i64 GR64:i64:$src1, shift20only:i32:$src2) - Complexity = 12
              // Dst: (RLLG:i64 GR64:i64:$src1, shift20only:i32:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 19,  TARGET_VAL(SystemZISD::EXTRACT_ACCESS),// ->12058
/*12039*/   OPC_RecordChild0, // #0 = $src
/*12040*/   OPC_MoveChild, 0,
/*12042*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12045*/   OPC_CheckPredicate, 82, // Predicate_access_reg
/*12047*/   OPC_MoveParent,
/*12048*/   OPC_EmitConvertToTarget, 0,
/*12050*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::EAR), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (z_extract_access:i32 (imm:i8)<<P:Predicate_access_reg>>:$src) - Complexity = 7
            // Dst: (EAR:i32 (imm:i8):$src)
          /*SwitchOpcode*/ 14,  TARGET_VAL(SystemZISD::PCREL_WRAPPER),// ->12075
/*12061*/   OPC_RecordNode,   // #0 = $src
/*12062*/   OPC_CheckType, MVT::i64,
/*12064*/   OPC_CheckComplexPat, /*CP*/4, /*#*/0, // selectPCRelAddress:$src #1
/*12067*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::LARL), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
            // Src: pcrel32:i64:$src - Complexity = 6
            // Dst: (LARL:i64 pcrel32:i64:$src)
          /*SwitchOpcode*/ 82,  TARGET_VAL(SystemZISD::SELECT_CCMASK),// ->12160
/*12078*/   OPC_CaptureGlueInput,
/*12079*/   OPC_RecordChild0, // #0 = $src1
/*12080*/   OPC_RecordChild1, // #1 = $src2
/*12081*/   OPC_RecordChild2, // #2 = $cc
/*12082*/   OPC_MoveChild, 2,
/*12084*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12087*/   OPC_MoveParent,
/*12088*/   OPC_SwitchType /*5 cases */, 12,  MVT::i32,// ->12103
/*12091*/     OPC_EmitConvertToTarget, 2,
/*12093*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::Select32), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (z_select_ccmask:i32 GR32:i32:$src1, GR32:i32:$src2, (imm:i8):$cc) - Complexity = 6
              // Dst: (Select32:i32 GR32:i32:$src1, GR32:i32:$src2, (imm:i8):$cc)
            /*SwitchType*/ 12,  MVT::i64,// ->12117
/*12105*/     OPC_EmitConvertToTarget, 2,
/*12107*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::Select64), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
              // Src: (z_select_ccmask:i64 GR64:i64:$src1, GR64:i64:$src2, (imm:i8):$cc) - Complexity = 6
              // Dst: (Select64:i64 GR64:i64:$src1, GR64:i64:$src2, (imm:i8):$cc)
            /*SwitchType*/ 12,  MVT::f32,// ->12131
/*12119*/     OPC_EmitConvertToTarget, 2,
/*12121*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SelectF32), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (z_select_ccmask:f32 FP32:f32:$src1, FP32:f32:$src2, (imm:i8):$cc) - Complexity = 6
              // Dst: (SelectF32:f32 FP32:f32:$src1, FP32:f32:$src2, (imm:i8):$cc)
            /*SwitchType*/ 12,  MVT::f64,// ->12145
/*12133*/     OPC_EmitConvertToTarget, 2,
/*12135*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SelectF64), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 3, 
              // Src: (z_select_ccmask:f64 FP64:f64:$src1, FP64:f64:$src2, (imm:i8):$cc) - Complexity = 6
              // Dst: (SelectF64:f64 FP64:f64:$src1, FP64:f64:$src2, (imm:i8):$cc)
            /*SwitchType*/ 12,  MVT::f128,// ->12159
/*12147*/     OPC_EmitConvertToTarget, 2,
/*12149*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SelectF128), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f128, 3/*#Ops*/, 0, 1, 3, 
              // Src: (z_select_ccmask:f128 FP128:f128:$src1, FP128:f128:$src2, (imm:i8):$cc) - Complexity = 6
              // Dst: (SelectF128:f128 FP128:f128:$src1, FP128:f128:$src2, (imm:i8):$cc)
            0, // EndSwitchType
          /*SwitchOpcode*/ 98|128,1/*226*/,  TARGET_VAL(ISD::Constant),// ->12390
/*12164*/   OPC_RecordNode,   // #0 = $src
/*12165*/   OPC_SwitchType /*2 cases */, 88,  MVT::i32,// ->12256
/*12168*/     OPC_Scope, 15, /*->12185*/ // 4 children in Scope
/*12170*/       OPC_CheckPredicate, 15, // Predicate_imm32sx16
/*12172*/       OPC_EmitConvertToTarget, 0,
/*12174*/       OPC_EmitNodeXForm, 2, 1, // SIMM16
/*12177*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$src - Complexity = 4
                // Dst: (LHI:i32 (SIMM16:i32 (imm:i32):$src))
/*12185*/     /*Scope*/ 27, /*->12213*/
/*12186*/       OPC_CheckPredicate, 23, // Predicate_imm32ll16
/*12188*/       OPC_EmitConvertToTarget, 0,
/*12190*/       OPC_EmitNodeXForm, 3, 1, // LL16
/*12193*/       OPC_EmitNode, TARGET_VAL(SystemZ::LLILL), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2,  // Results = #3
/*12201*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*12204*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                // Src: (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$src - Complexity = 4
                // Dst: (EXTRACT_SUBREG:i32 (LLILL:i64 (LL16:i64 (imm:i32):$src)), subreg_32bit:i32)
/*12213*/     /*Scope*/ 27, /*->12241*/
/*12214*/       OPC_CheckPredicate, 24, // Predicate_imm32lh16
/*12216*/       OPC_EmitConvertToTarget, 0,
/*12218*/       OPC_EmitNodeXForm, 4, 1, // LH16
/*12221*/       OPC_EmitNode, TARGET_VAL(SystemZ::LLILH), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2,  // Results = #3
/*12229*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*12232*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                // Src: (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$src - Complexity = 4
                // Dst: (EXTRACT_SUBREG:i32 (LLILH:i64 (LH16:i64 (imm:i32):$src)), subreg_32bit:i32)
/*12241*/     /*Scope*/ 13, /*->12255*/
/*12242*/       OPC_EmitConvertToTarget, 0,
/*12244*/       OPC_EmitNodeXForm, 9, 1, // UIMM32
/*12247*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILF32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<X:UIMM32>>:$src - Complexity = 3
                // Dst: (IILF32:i32 (UIMM32:i32 (imm:i32):$src))
/*12255*/     0, /*End of Scope*/
            /*SwitchType*/ 2|128,1/*130*/,  MVT::i64,// ->12389
/*12259*/     OPC_Scope, 15, /*->12276*/ // 8 children in Scope
/*12261*/       OPC_CheckPredicate, 16, // Predicate_imm64sx16
/*12263*/       OPC_EmitConvertToTarget, 0,
/*12265*/       OPC_EmitNodeXForm, 2, 1, // SIMM16
/*12268*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGHI), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$src - Complexity = 4
                // Dst: (LGHI:i64 (SIMM16:i64 (imm:i64):$src))
/*12276*/     /*Scope*/ 15, /*->12292*/
/*12277*/       OPC_CheckPredicate, 25, // Predicate_imm64ll16
/*12279*/       OPC_EmitConvertToTarget, 0,
/*12281*/       OPC_EmitNodeXForm, 3, 1, // LL16
/*12284*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLILL), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64ll16>><<X:LL16>>:$src - Complexity = 4
                // Dst: (LLILL:i64 (LL16:i64 (imm:i64):$src))
/*12292*/     /*Scope*/ 15, /*->12308*/
/*12293*/       OPC_CheckPredicate, 26, // Predicate_imm64lh16
/*12295*/       OPC_EmitConvertToTarget, 0,
/*12297*/       OPC_EmitNodeXForm, 4, 1, // LH16
/*12300*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLILH), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64lh16>><<X:LH16>>:$src - Complexity = 4
                // Dst: (LLILH:i64 (LH16:i64 (imm:i64):$src))
/*12308*/     /*Scope*/ 15, /*->12324*/
/*12309*/       OPC_CheckPredicate, 27, // Predicate_imm64hl16
/*12311*/       OPC_EmitConvertToTarget, 0,
/*12313*/       OPC_EmitNodeXForm, 5, 1, // HL16
/*12316*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLIHL), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64hl16>><<X:HL16>>:$src - Complexity = 4
                // Dst: (LLIHL:i64 (HL16:i64 (imm:i64):$src))
/*12324*/     /*Scope*/ 15, /*->12340*/
/*12325*/       OPC_CheckPredicate, 28, // Predicate_imm64hh16
/*12327*/       OPC_EmitConvertToTarget, 0,
/*12329*/       OPC_EmitNodeXForm, 6, 1, // HH16
/*12332*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLIHH), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64hh16>><<X:HH16>>:$src - Complexity = 4
                // Dst: (LLIHH:i64 (HH16:i64 (imm:i64):$src))
/*12340*/     /*Scope*/ 15, /*->12356*/
/*12341*/       OPC_CheckPredicate, 36, // Predicate_imm64sx32
/*12343*/       OPC_EmitConvertToTarget, 0,
/*12345*/       OPC_EmitNodeXForm, 10, 1, // SIMM32
/*12348*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGFI), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$src - Complexity = 4
                // Dst: (LGFI:i64 (SIMM32:i64 (imm:i64):$src))
/*12356*/     /*Scope*/ 15, /*->12372*/
/*12357*/       OPC_CheckPredicate, 29, // Predicate_imm64lf32
/*12359*/       OPC_EmitConvertToTarget, 0,
/*12361*/       OPC_EmitNodeXForm, 7, 1, // LF32
/*12364*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLILF), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$src - Complexity = 4
                // Dst: (LLILF:i64 (LF32:i64 (imm:i64):$src))
/*12372*/     /*Scope*/ 15, /*->12388*/
/*12373*/       OPC_CheckPredicate, 30, // Predicate_imm64hf32
/*12375*/       OPC_EmitConvertToTarget, 0,
/*12377*/       OPC_EmitNodeXForm, 8, 1, // HF32
/*12380*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLIHF), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$src - Complexity = 4
                // Dst: (LLIHF:i64 (HF32:i64 (imm:i64):$src))
/*12388*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 81,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->12474
/*12393*/   OPC_RecordChild0, // #0 = $src
/*12394*/   OPC_MoveChild, 1,
/*12396*/   OPC_Scope, 25, /*->12423*/ // 3 children in Scope
/*12398*/     OPC_CheckValueType, MVT::i8,
/*12400*/     OPC_MoveParent,
/*12401*/     OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->12412
/*12404*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LBR), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GR32:i32:$src, i8:Other) - Complexity = 3
                // Dst: (LBR:i32 GR32:i32:$src)
              /*SwitchType*/ 8,  MVT::i64,// ->12422
/*12414*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGBR), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 GR64:i64:$src, i8:Other) - Complexity = 3
                // Dst: (LGBR:i64 GR64:i64:$src)
              0, // EndSwitchType
/*12423*/   /*Scope*/ 25, /*->12449*/
/*12424*/     OPC_CheckValueType, MVT::i16,
/*12426*/     OPC_MoveParent,
/*12427*/     OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->12438
/*12430*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHR), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GR32:i32:$src, i16:Other) - Complexity = 3
                // Dst: (LHR:i32 GR32:i32:$src)
              /*SwitchType*/ 8,  MVT::i64,// ->12448
/*12440*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGHR), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 GR64:i64:$src, i16:Other) - Complexity = 3
                // Dst: (LGHR:i64 GR64:i64:$src)
              0, // EndSwitchType
/*12449*/   /*Scope*/ 23, /*->12473*/
/*12450*/     OPC_CheckValueType, MVT::i32,
/*12452*/     OPC_MoveParent,
/*12453*/     OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*12456*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*12465*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGFR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (sext_inreg:i64 GR64:i64:$src, i32:Other) - Complexity = 3
              // Dst: (LGFR:i64 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32))
/*12473*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::SIGN_EXTEND),// ->12486
/*12477*/   OPC_RecordChild0, // #0 = $src
/*12478*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGFR), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 GR32:i32:$src) - Complexity = 3
            // Dst: (LGFR:i64 GR32:i32:$src)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::ZERO_EXTEND),// ->12498
/*12489*/   OPC_RecordChild0, // #0 = $src
/*12490*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGFR), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (zext:i64 GR32:i32:$src) - Complexity = 3
            // Dst: (LLGFR:i64 GR32:i32:$src)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TRUNCATE),// ->12514
/*12501*/   OPC_RecordChild0, // #0 = $src
/*12502*/   OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*12505*/   OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (trunc:i32 GR64:i64:$src) - Complexity = 3
            // Dst: (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32)
          /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::BITCAST),// ->12544
/*12517*/   OPC_RecordChild0, // #0 = $src
/*12518*/   OPC_SwitchType /*2 cases */, 10,  MVT::i64,// ->12531
/*12521*/     OPC_CheckChild0Type, MVT::f64,
/*12523*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGDR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:i64 FP64:f64:$src) - Complexity = 3
              // Dst: (LGDR:i64 FP64:f64:$src)
            /*SwitchType*/ 10,  MVT::f64,// ->12543
/*12533*/     OPC_CheckChild0Type, MVT::i64,
/*12535*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LDGR), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:f64 GR64:i64:$src) - Complexity = 3
              // Dst: (LDGR:f64 GR64:i64:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 102,  TARGET_VAL(ISD::FP_TO_SINT),// ->12649
/*12547*/   OPC_RecordChild0, // #0 = $src
/*12548*/   OPC_Scope, 32, /*->12582*/ // 3 children in Scope
/*12550*/     OPC_CheckChild0Type, MVT::f32,
/*12552*/     OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->12567
/*12555*/       OPC_EmitInteger, MVT::i8, 5, 
/*12558*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CFEBR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (fp_to_sint:i32 FP32:f32:$src) - Complexity = 3
                // Dst: (CFEBR:i32 FP32:f32:$src, 5:i8)
              /*SwitchType*/ 12,  MVT::i64,// ->12581
/*12569*/       OPC_EmitInteger, MVT::i8, 5, 
/*12572*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGEBR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (fp_to_sint:i64 FP32:f32:$src) - Complexity = 3
                // Dst: (CGEBR:i64 FP32:f32:$src, 5:i8)
              0, // EndSwitchType
/*12582*/   /*Scope*/ 32, /*->12615*/
/*12583*/     OPC_CheckChild0Type, MVT::f64,
/*12585*/     OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->12600
/*12588*/       OPC_EmitInteger, MVT::i8, 5, 
/*12591*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CFDBR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (fp_to_sint:i32 FP64:f64:$src) - Complexity = 3
                // Dst: (CFDBR:i32 FP64:f64:$src, 5:i8)
              /*SwitchType*/ 12,  MVT::i64,// ->12614
/*12602*/       OPC_EmitInteger, MVT::i8, 5, 
/*12605*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGDBR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (fp_to_sint:i64 FP64:f64:$src) - Complexity = 3
                // Dst: (CGDBR:i64 FP64:f64:$src, 5:i8)
              0, // EndSwitchType
/*12615*/   /*Scope*/ 32, /*->12648*/
/*12616*/     OPC_CheckChild0Type, MVT::f128,
/*12618*/     OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->12633
/*12621*/       OPC_EmitInteger, MVT::i8, 5, 
/*12624*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CFXBR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (fp_to_sint:i32 FP128:f128:$src) - Complexity = 3
                // Dst: (CFXBR:i32 FP128:f128:$src, 5:i8)
              /*SwitchType*/ 12,  MVT::i64,// ->12647
/*12635*/       OPC_EmitInteger, MVT::i8, 5, 
/*12638*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGXBR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (fp_to_sint:i64 FP128:f128:$src) - Complexity = 3
                // Dst: (CGXBR:i64 FP128:f128:$src, 5:i8)
              0, // EndSwitchType
/*12648*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::CTLZ),// ->12675
/*12652*/   OPC_RecordChild0, // #0 = $src
/*12653*/   OPC_CheckType, MVT::i64,
/*12655*/   OPC_EmitNode, TARGET_VAL(SystemZ::FLOGR), 0,
                1/*#VTs*/, MVT::Untyped, 1/*#Ops*/, 0,  // Results = #1
/*12663*/   OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*12666*/   OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
            // Src: (ctlz:i64 GR64:i64:$src) - Complexity = 3
            // Dst: (EXTRACT_SUBREG:i64 (FLOGR:Untyped GR64:i64:$src), subreg_high:i32)
          /*SwitchOpcode*/ 21,  TARGET_VAL(ISD::ANY_EXTEND),// ->12699
/*12678*/   OPC_RecordChild0, // #0 = $src
/*12679*/   OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*12686*/   OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*12689*/   OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
            // Src: (anyext:i64 GR32:i32:$src) - Complexity = 3
            // Dst: (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), GR32:i32:$src, subreg_32bit:i32)
          /*SwitchOpcode*/ 46|128,1/*174*/,  TARGET_VAL(ISD::FMA),// ->12877
/*12703*/   OPC_RecordChild0, // #0 = $src2
/*12704*/   OPC_Scope, 104, /*->12810*/ // 2 children in Scope
/*12706*/     OPC_MoveChild, 1,
/*12708*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*12711*/     OPC_RecordMemRef,
/*12712*/     OPC_RecordNode, // #1 = 'ld' chained node
/*12713*/     OPC_CheckFoldableChainNode,
/*12714*/     OPC_RecordChild1, // #2 = $src3
/*12715*/     OPC_CheckChild1Type, MVT::i64,
/*12717*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*12719*/     OPC_CheckPredicate, 1, // Predicate_load
/*12721*/     OPC_MoveParent,
/*12722*/     OPC_Scope, 45, /*->12769*/ // 2 children in Scope
/*12724*/       OPC_MoveChild, 2,
/*12726*/       OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*12729*/       OPC_RecordChild0, // #3 = $src1
/*12730*/       OPC_MoveParent,
/*12731*/       OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->12750
/*12734*/         OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$src3 #4 #5 #6
/*12737*/         OPC_EmitMergeInputChains1_1,
/*12738*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 5/*#Ops*/, 3, 0, 4, 5, 6, 
                  // Src: (fma:f32 FP32:f32:$src2, (ld:f32 bdxaddr12only:i64:$src3)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (fneg:f32 FP32:f32:$src1)) - Complexity = 22
                  // Dst: (MSEB:f32 FP32:f32:$src1, FP32:f32:$src2, bdxaddr12only:i64:$src3)
                /*SwitchType*/ 16,  MVT::f64,// ->12768
/*12752*/         OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$src3 #4 #5 #6
/*12755*/         OPC_EmitMergeInputChains1_1,
/*12756*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSDB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 5/*#Ops*/, 3, 0, 4, 5, 6, 
                  // Src: (fma:f64 FP64:f64:$src2, (ld:f64 bdxaddr12only:i64:$src3)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (fneg:f64 FP64:f64:$src1)) - Complexity = 22
                  // Dst: (MSDB:f64 FP64:f64:$src1, FP64:f64:$src2, bdxaddr12only:i64:$src3)
                0, // EndSwitchType
/*12769*/     /*Scope*/ 39, /*->12809*/
/*12770*/       OPC_RecordChild2, // #3 = $src1
/*12771*/       OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->12790
/*12774*/         OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$src3 #4 #5 #6
/*12777*/         OPC_EmitMergeInputChains1_1,
/*12778*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MAEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 5/*#Ops*/, 3, 0, 4, 5, 6, 
                  // Src: (fma:f32 FP32:f32:$src2, (ld:f32 bdxaddr12only:i64:$src3)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$src1) - Complexity = 19
                  // Dst: (MAEB:f32 FP32:f32:$src1, FP32:f32:$src2, bdxaddr12only:i64:$src3)
                /*SwitchType*/ 16,  MVT::f64,// ->12808
/*12792*/         OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$src3 #4 #5 #6
/*12795*/         OPC_EmitMergeInputChains1_1,
/*12796*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MADB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 5/*#Ops*/, 3, 0, 4, 5, 6, 
                  // Src: (fma:f64 FP64:f64:$src2, (ld:f64 bdxaddr12only:i64:$src3)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$src1) - Complexity = 19
                  // Dst: (MADB:f64 FP64:f64:$src1, FP64:f64:$src2, bdxaddr12only:i64:$src3)
                0, // EndSwitchType
/*12809*/     0, /*End of Scope*/
/*12810*/   /*Scope*/ 65, /*->12876*/
/*12811*/     OPC_RecordChild1, // #1 = $src3
/*12812*/     OPC_Scope, 33, /*->12847*/ // 2 children in Scope
/*12814*/       OPC_MoveChild, 2,
/*12816*/       OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*12819*/       OPC_RecordChild0, // #2 = $src1
/*12820*/       OPC_MoveParent,
/*12821*/       OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->12834
/*12824*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSEBR), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fma:f32 FP32:f32:$src2, FP32:f32:$src3, (fneg:f32 FP32:f32:$src1)) - Complexity = 6
                  // Dst: (MSEBR:f32 FP32:f32:$src1, FP32:f32:$src2, FP32:f32:$src3)
                /*SwitchType*/ 10,  MVT::f64,// ->12846
/*12836*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSDBR), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fma:f64 FP64:f64:$src2, FP64:f64:$src3, (fneg:f64 FP64:f64:$src1)) - Complexity = 6
                  // Dst: (MSDBR:f64 FP64:f64:$src1, FP64:f64:$src2, FP64:f64:$src3)
                0, // EndSwitchType
/*12847*/     /*Scope*/ 27, /*->12875*/
/*12848*/       OPC_RecordChild2, // #2 = $src1
/*12849*/       OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->12862
/*12852*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MAEBR), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fma:f32 FP32:f32:$src2, FP32:f32:$src3, FP32:f32:$src1) - Complexity = 3
                  // Dst: (MAEBR:f32 FP32:f32:$src1, FP32:f32:$src2, FP32:f32:$src3)
                /*SwitchType*/ 10,  MVT::f64,// ->12874
/*12864*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MADBR), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fma:f64 FP64:f64:$src2, FP64:f64:$src3, FP64:f64:$src1) - Complexity = 3
                  // Dst: (MADBR:f64 FP64:f64:$src1, FP64:f64:$src2, FP64:f64:$src3)
                0, // EndSwitchType
/*12875*/     0, /*End of Scope*/
/*12876*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 98|128,3/*482*/,  TARGET_VAL(ISD::FMUL),// ->13363
/*12881*/   OPC_Scope, 111|128,1/*239*/, /*->13123*/ // 4 children in Scope
/*12884*/     OPC_MoveChild, 0,
/*12886*/     OPC_SwitchOpcode /*2 cases */, 119,  TARGET_VAL(ISD::FP_EXTEND),// ->13009
/*12890*/       OPC_RecordChild0, // #0 = $src1
/*12891*/       OPC_Scope, 56, /*->12949*/ // 2 children in Scope
/*12893*/         OPC_MoveParent,
/*12894*/         OPC_MoveChild, 1,
/*12896*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*12899*/         OPC_RecordMemRef,
/*12900*/         OPC_RecordNode, // #1 = 'ld' chained node
/*12901*/         OPC_CheckFoldableChainNode,
/*12902*/         OPC_RecordChild1, // #2 = $addr
/*12903*/         OPC_CheckChild1Type, MVT::i64,
/*12905*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*12907*/         OPC_CheckPredicate, 12, // Predicate_extload
/*12909*/         OPC_CheckPredicate, 56, // Predicate_extloadf32
/*12911*/         OPC_MoveParent,
/*12912*/         OPC_CheckType, MVT::f64,
/*12914*/         OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$addr #3 #4 #5
/*12917*/         OPC_EmitMergeInputChains1_1,
/*12918*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #6
/*12925*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*12928*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 6, 0, 7,  // Results = #8
/*12938*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 4/*#Ops*/, 8, 3, 4, 5, 
                  // Src: (fmul:f64 (fextend:f64 FP32:f32:$src1), (ld:f64 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>>) - Complexity = 22
                  // Dst: (MDEB:f64 (INSERT_SUBREG:f64 (IMPLICIT_DEF:f64), FP32:f32:$src1, subreg_32bit:i32), bdxaddr12only:i64:$addr)
/*12949*/       /*Scope*/ 58, /*->13008*/
/*12950*/         OPC_CheckChild0Type, MVT::f64,
/*12952*/         OPC_MoveParent,
/*12953*/         OPC_MoveChild, 1,
/*12955*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*12958*/         OPC_RecordMemRef,
/*12959*/         OPC_RecordNode, // #1 = 'ld' chained node
/*12960*/         OPC_CheckFoldableChainNode,
/*12961*/         OPC_RecordChild1, // #2 = $addr
/*12962*/         OPC_CheckChild1Type, MVT::i64,
/*12964*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*12966*/         OPC_CheckPredicate, 12, // Predicate_extload
/*12968*/         OPC_CheckPredicate, 57, // Predicate_extloadf64
/*12970*/         OPC_MoveParent,
/*12971*/         OPC_CheckType, MVT::f128,
/*12973*/         OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$addr #3 #4 #5
/*12976*/         OPC_EmitMergeInputChains1_1,
/*12977*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f128, 0/*#Ops*/,  // Results = #6
/*12984*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*12987*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 6, 0, 7,  // Results = #8
/*12997*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MXDB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f128, 4/*#Ops*/, 8, 3, 4, 5, 
                  // Src: (fmul:f128 (fextend:f128 FP64:f64:$src1), (ld:f128 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf64>>) - Complexity = 22
                  // Dst: (MXDB:f128 (INSERT_SUBREG:f128 (IMPLICIT_DEF:f128), FP64:f64:$src1, subreg_high:i32), bdxaddr12only:i64:$addr)
/*13008*/       0, /*End of Scope*/
              /*SwitchOpcode*/ 110,  TARGET_VAL(ISD::LOAD),// ->13122
/*13012*/       OPC_RecordMemRef,
/*13013*/       OPC_RecordNode, // #0 = 'ld' chained node
/*13014*/       OPC_CheckFoldableChainNode,
/*13015*/       OPC_RecordChild1, // #1 = $addr
/*13016*/       OPC_CheckChild1Type, MVT::i64,
/*13018*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13020*/       OPC_CheckPredicate, 12, // Predicate_extload
/*13022*/       OPC_Scope, 47, /*->13071*/ // 2 children in Scope
/*13024*/         OPC_CheckPredicate, 56, // Predicate_extloadf32
/*13026*/         OPC_MoveParent,
/*13027*/         OPC_MoveChild, 1,
/*13029*/         OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*13032*/         OPC_RecordChild0, // #2 = $src1
/*13033*/         OPC_MoveParent,
/*13034*/         OPC_CheckType, MVT::f64,
/*13036*/         OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDXAddr12Only:$addr #3 #4 #5
/*13039*/         OPC_EmitMergeInputChains1_0,
/*13040*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #6
/*13047*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*13050*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 6, 2, 7,  // Results = #8
/*13060*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 4/*#Ops*/, 8, 3, 4, 5, 
                  // Src: (fmul:f64 (ld:f64 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>>, (fextend:f64 FP32:f32:$src1)) - Complexity = 22
                  // Dst: (MDEB:f64 (INSERT_SUBREG:f64 (IMPLICIT_DEF:f64), FP32:f32:$src1, subreg_32bit:i32), bdxaddr12only:i64:$addr)
/*13071*/       /*Scope*/ 49, /*->13121*/
/*13072*/         OPC_CheckPredicate, 57, // Predicate_extloadf64
/*13074*/         OPC_MoveParent,
/*13075*/         OPC_MoveChild, 1,
/*13077*/         OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*13080*/         OPC_RecordChild0, // #2 = $src1
/*13081*/         OPC_CheckChild0Type, MVT::f64,
/*13083*/         OPC_MoveParent,
/*13084*/         OPC_CheckType, MVT::f128,
/*13086*/         OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDXAddr12Only:$addr #3 #4 #5
/*13089*/         OPC_EmitMergeInputChains1_0,
/*13090*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f128, 0/*#Ops*/,  // Results = #6
/*13097*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*13100*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 6, 2, 7,  // Results = #8
/*13110*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MXDB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f128, 4/*#Ops*/, 8, 3, 4, 5, 
                  // Src: (fmul:f128 (ld:f128 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf64>>, (fextend:f128 FP64:f64:$src1)) - Complexity = 22
                  // Dst: (MXDB:f128 (INSERT_SUBREG:f128 (IMPLICIT_DEF:f128), FP64:f64:$src1, subreg_high:i32), bdxaddr12only:i64:$addr)
/*13121*/       0, /*End of Scope*/
              0, // EndSwitchOpcode
/*13123*/   /*Scope*/ 53, /*->13177*/
/*13124*/     OPC_RecordChild0, // #0 = $src1
/*13125*/     OPC_MoveChild, 1,
/*13127*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13130*/     OPC_RecordMemRef,
/*13131*/     OPC_RecordNode, // #1 = 'ld' chained node
/*13132*/     OPC_CheckFoldableChainNode,
/*13133*/     OPC_RecordChild1, // #2 = $src2
/*13134*/     OPC_CheckChild1Type, MVT::i64,
/*13136*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13138*/     OPC_CheckPredicate, 1, // Predicate_load
/*13140*/     OPC_MoveParent,
/*13141*/     OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->13159
/*13144*/       OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$src2 #3 #4 #5
/*13147*/       OPC_EmitMergeInputChains1_1,
/*13148*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MEEB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fmul:f32 FP32:f32:$src1, (ld:f32 bdxaddr12only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (MEEB:f32 FP32:f32:$src1, bdxaddr12only:i64:$src2)
              /*SwitchType*/ 15,  MVT::f64,// ->13176
/*13161*/       OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$src2 #3 #4 #5
/*13164*/       OPC_EmitMergeInputChains1_1,
/*13165*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fmul:f64 FP64:f64:$src1, (ld:f64 bdxaddr12only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (MDB:f64 FP64:f64:$src1, bdxaddr12only:i64:$src2)
              0, // EndSwitchType
/*13177*/   /*Scope*/ 17|128,1/*145*/, /*->13324*/
/*13179*/     OPC_MoveChild, 0,
/*13181*/     OPC_SwitchOpcode /*2 cases */, 48,  TARGET_VAL(ISD::LOAD),// ->13233
/*13185*/       OPC_RecordMemRef,
/*13186*/       OPC_RecordNode, // #0 = 'ld' chained node
/*13187*/       OPC_CheckFoldableChainNode,
/*13188*/       OPC_RecordChild1, // #1 = $src2
/*13189*/       OPC_CheckChild1Type, MVT::i64,
/*13191*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13193*/       OPC_CheckPredicate, 1, // Predicate_load
/*13195*/       OPC_MoveParent,
/*13196*/       OPC_RecordChild1, // #2 = $src1
/*13197*/       OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->13215
/*13200*/         OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDXAddr12Only:$src2 #3 #4 #5
/*13203*/         OPC_EmitMergeInputChains1_0,
/*13204*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MEEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (fmul:f32 (ld:f32 bdxaddr12only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$src1) - Complexity = 19
                  // Dst: (MEEB:f32 FP32:f32:$src1, bdxaddr12only:i64:$src2)
                /*SwitchType*/ 15,  MVT::f64,// ->13232
/*13217*/         OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDXAddr12Only:$src2 #3 #4 #5
/*13220*/         OPC_EmitMergeInputChains1_0,
/*13221*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (fmul:f64 (ld:f64 bdxaddr12only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$src1) - Complexity = 19
                  // Dst: (MDB:f64 FP64:f64:$src1, bdxaddr12only:i64:$src2)
                0, // EndSwitchType
              /*SwitchOpcode*/ 87,  TARGET_VAL(ISD::FP_EXTEND),// ->13323
/*13236*/       OPC_RecordChild0, // #0 = $src1
/*13237*/       OPC_Scope, 39, /*->13278*/ // 2 children in Scope
/*13239*/         OPC_MoveParent,
/*13240*/         OPC_MoveChild, 1,
/*13242*/         OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*13245*/         OPC_RecordChild0, // #1 = $src2
/*13246*/         OPC_MoveParent,
/*13247*/         OPC_CheckType, MVT::f64,
/*13249*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #2
/*13256*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*13259*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 3,  // Results = #4
/*13269*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDEBR), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 1, 
                  // Src: (fmul:f64 (fextend:f64 FP32:f32:$src1), (fextend:f64 FP32:f32:$src2)) - Complexity = 9
                  // Dst: (MDEBR:f64 (INSERT_SUBREG:f64 (IMPLICIT_DEF:f64), FP32:f32:$src1, subreg_32bit:i32), FP32:f32:$src2)
/*13278*/       /*Scope*/ 43, /*->13322*/
/*13279*/         OPC_CheckChild0Type, MVT::f64,
/*13281*/         OPC_MoveParent,
/*13282*/         OPC_MoveChild, 1,
/*13284*/         OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*13287*/         OPC_RecordChild0, // #1 = $src2
/*13288*/         OPC_CheckChild0Type, MVT::f64,
/*13290*/         OPC_MoveParent,
/*13291*/         OPC_CheckType, MVT::f128,
/*13293*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f128, 0/*#Ops*/,  // Results = #2
/*13300*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*13303*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 2, 0, 3,  // Results = #4
/*13313*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MXDBR), 0,
                      1/*#VTs*/, MVT::f128, 2/*#Ops*/, 4, 1, 
                  // Src: (fmul:f128 (fextend:f128 FP64:f64:$src1), (fextend:f128 FP64:f64:$src2)) - Complexity = 9
                  // Dst: (MXDBR:f128 (INSERT_SUBREG:f128 (IMPLICIT_DEF:f128), FP64:f64:$src1, subreg_high:i32), FP64:f64:$src2)
/*13322*/       0, /*End of Scope*/
              0, // EndSwitchOpcode
/*13324*/   /*Scope*/ 37, /*->13362*/
/*13325*/     OPC_RecordChild0, // #0 = $src1
/*13326*/     OPC_RecordChild1, // #1 = $src2
/*13327*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->13339
/*13330*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MEEBR), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f32 FP32:f32:$src1, FP32:f32:$src2) - Complexity = 3
                // Dst: (MEEBR:f32 FP32:f32:$src1, FP32:f32:$src2)
              /*SwitchType*/ 9,  MVT::f64,// ->13350
/*13341*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDBR), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 FP64:f64:$src1, FP64:f64:$src2) - Complexity = 3
                // Dst: (MDBR:f64 FP64:f64:$src1, FP64:f64:$src2)
              /*SwitchType*/ 9,  MVT::f128,// ->13361
/*13352*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MXBR), 0,
                    1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f128 FP128:f128:$src1, FP128:f128:$src2) - Complexity = 3
                // Dst: (MXBR:f128 FP128:f128:$src1, FP128:f128:$src2)
              0, // EndSwitchType
/*13362*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 86,  TARGET_VAL(ISD::FSQRT),// ->13452
/*13366*/   OPC_Scope, 49, /*->13417*/ // 2 children in Scope
/*13368*/     OPC_MoveChild, 0,
/*13370*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13373*/     OPC_RecordMemRef,
/*13374*/     OPC_RecordNode, // #0 = 'ld' chained node
/*13375*/     OPC_RecordChild1, // #1 = $addr
/*13376*/     OPC_CheckChild1Type, MVT::i64,
/*13378*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13380*/     OPC_CheckPredicate, 1, // Predicate_load
/*13382*/     OPC_MoveParent,
/*13383*/     OPC_SwitchType /*2 cases */, 14,  MVT::f32,// ->13400
/*13386*/       OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDXAddr12Only:$addr #2 #3 #4
/*13389*/       OPC_EmitMergeInputChains1_0,
/*13390*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQEB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (fsqrt:f32 (ld:f32 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SQEB:f32 bdxaddr12only:i64:$addr)
              /*SwitchType*/ 14,  MVT::f64,// ->13416
/*13402*/       OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDXAddr12Only:$addr #2 #3 #4
/*13405*/       OPC_EmitMergeInputChains1_0,
/*13406*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQDB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                // Src: (fsqrt:f64 (ld:f64 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SQDB:f64 bdxaddr12only:i64:$addr)
              0, // EndSwitchType
/*13417*/   /*Scope*/ 33, /*->13451*/
/*13418*/     OPC_RecordChild0, // #0 = $src
/*13419*/     OPC_SwitchType /*3 cases */, 8,  MVT::f32,// ->13430
/*13422*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQEBR), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f32 FP32:f32:$src) - Complexity = 3
                // Dst: (SQEBR:f32 FP32:f32:$src)
              /*SwitchType*/ 8,  MVT::f64,// ->13440
/*13432*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQDBR), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f64 FP64:f64:$src) - Complexity = 3
                // Dst: (SQDBR:f64 FP64:f64:$src)
              /*SwitchType*/ 8,  MVT::f128,// ->13450
/*13442*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQXBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f128 FP128:f128:$src) - Complexity = 3
                // Dst: (SQXBR:f128 FP128:f128:$src)
              0, // EndSwitchType
/*13451*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 20|128,1/*148*/,  TARGET_VAL(ISD::FADD),// ->13604
/*13456*/   OPC_Scope, 53, /*->13511*/ // 3 children in Scope
/*13458*/     OPC_RecordChild0, // #0 = $src1
/*13459*/     OPC_MoveChild, 1,
/*13461*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13464*/     OPC_RecordMemRef,
/*13465*/     OPC_RecordNode, // #1 = 'ld' chained node
/*13466*/     OPC_CheckFoldableChainNode,
/*13467*/     OPC_RecordChild1, // #2 = $src2
/*13468*/     OPC_CheckChild1Type, MVT::i64,
/*13470*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13472*/     OPC_CheckPredicate, 1, // Predicate_load
/*13474*/     OPC_MoveParent,
/*13475*/     OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->13493
/*13478*/       OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$src2 #3 #4 #5
/*13481*/       OPC_EmitMergeInputChains1_1,
/*13482*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AEB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fadd:f32 FP32:f32:$src1, (ld:f32 bdxaddr12only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (AEB:f32 FP32:f32:$src1, bdxaddr12only:i64:$src2)
              /*SwitchType*/ 15,  MVT::f64,// ->13510
/*13495*/       OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$src2 #3 #4 #5
/*13498*/       OPC_EmitMergeInputChains1_1,
/*13499*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fadd:f64 FP64:f64:$src1, (ld:f64 bdxaddr12only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (ADB:f64 FP64:f64:$src1, bdxaddr12only:i64:$src2)
              0, // EndSwitchType
/*13511*/   /*Scope*/ 53, /*->13565*/
/*13512*/     OPC_MoveChild, 0,
/*13514*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13517*/     OPC_RecordMemRef,
/*13518*/     OPC_RecordNode, // #0 = 'ld' chained node
/*13519*/     OPC_CheckFoldableChainNode,
/*13520*/     OPC_RecordChild1, // #1 = $src2
/*13521*/     OPC_CheckChild1Type, MVT::i64,
/*13523*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13525*/     OPC_CheckPredicate, 1, // Predicate_load
/*13527*/     OPC_MoveParent,
/*13528*/     OPC_RecordChild1, // #2 = $src1
/*13529*/     OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->13547
/*13532*/       OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDXAddr12Only:$src2 #3 #4 #5
/*13535*/       OPC_EmitMergeInputChains1_0,
/*13536*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AEB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (fadd:f32 (ld:f32 bdxaddr12only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$src1) - Complexity = 19
                // Dst: (AEB:f32 FP32:f32:$src1, bdxaddr12only:i64:$src2)
              /*SwitchType*/ 15,  MVT::f64,// ->13564
/*13549*/       OPC_CheckComplexPat, /*CP*/12, /*#*/1, // selectBDXAddr12Only:$src2 #3 #4 #5
/*13552*/       OPC_EmitMergeInputChains1_0,
/*13553*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (fadd:f64 (ld:f64 bdxaddr12only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$src1) - Complexity = 19
                // Dst: (ADB:f64 FP64:f64:$src1, bdxaddr12only:i64:$src2)
              0, // EndSwitchType
/*13565*/   /*Scope*/ 37, /*->13603*/
/*13566*/     OPC_RecordChild0, // #0 = $src1
/*13567*/     OPC_RecordChild1, // #1 = $src2
/*13568*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->13580
/*13571*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AEBR), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:f32 FP32:f32:$src1, FP32:f32:$src2) - Complexity = 3
                // Dst: (AEBR:f32 FP32:f32:$src1, FP32:f32:$src2)
              /*SwitchType*/ 9,  MVT::f64,// ->13591
/*13582*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADBR), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:f64 FP64:f64:$src1, FP64:f64:$src2) - Complexity = 3
                // Dst: (ADBR:f64 FP64:f64:$src1, FP64:f64:$src2)
              /*SwitchType*/ 9,  MVT::f128,// ->13602
/*13593*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AXBR), 0,
                    1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:f128 FP128:f128:$src1, FP128:f128:$src2) - Complexity = 3
                // Dst: (AXBR:f128 FP128:f128:$src1, FP128:f128:$src2)
              0, // EndSwitchType
/*13603*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 93,  TARGET_VAL(ISD::FSUB),// ->13700
/*13607*/   OPC_RecordChild0, // #0 = $src1
/*13608*/   OPC_Scope, 52, /*->13662*/ // 2 children in Scope
/*13610*/     OPC_MoveChild, 1,
/*13612*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13615*/     OPC_RecordMemRef,
/*13616*/     OPC_RecordNode, // #1 = 'ld' chained node
/*13617*/     OPC_CheckFoldableChainNode,
/*13618*/     OPC_RecordChild1, // #2 = $src2
/*13619*/     OPC_CheckChild1Type, MVT::i64,
/*13621*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13623*/     OPC_CheckPredicate, 1, // Predicate_load
/*13625*/     OPC_MoveParent,
/*13626*/     OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->13644
/*13629*/       OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$src2 #3 #4 #5
/*13632*/       OPC_EmitMergeInputChains1_1,
/*13633*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SEB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fsub:f32 FP32:f32:$src1, (ld:f32 bdxaddr12only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SEB:f32 FP32:f32:$src1, bdxaddr12only:i64:$src2)
              /*SwitchType*/ 15,  MVT::f64,// ->13661
/*13646*/       OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$src2 #3 #4 #5
/*13649*/       OPC_EmitMergeInputChains1_1,
/*13650*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SDB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fsub:f64 FP64:f64:$src1, (ld:f64 bdxaddr12only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SDB:f64 FP64:f64:$src1, bdxaddr12only:i64:$src2)
              0, // EndSwitchType
/*13662*/   /*Scope*/ 36, /*->13699*/
/*13663*/     OPC_RecordChild1, // #1 = $src2
/*13664*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->13676
/*13667*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SEBR), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f32 FP32:f32:$src1, FP32:f32:$src2) - Complexity = 3
                // Dst: (SEBR:f32 FP32:f32:$src1, FP32:f32:$src2)
              /*SwitchType*/ 9,  MVT::f64,// ->13687
/*13678*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SDBR), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f64 FP64:f64:$src1, FP64:f64:$src2) - Complexity = 3
                // Dst: (SDBR:f64 FP64:f64:$src1, FP64:f64:$src2)
              /*SwitchType*/ 9,  MVT::f128,// ->13698
/*13689*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SXBR), 0,
                    1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f128 FP128:f128:$src1, FP128:f128:$src2) - Complexity = 3
                // Dst: (SXBR:f128 FP128:f128:$src1, FP128:f128:$src2)
              0, // EndSwitchType
/*13699*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 93,  TARGET_VAL(ISD::FDIV),// ->13796
/*13703*/   OPC_RecordChild0, // #0 = $src1
/*13704*/   OPC_Scope, 52, /*->13758*/ // 2 children in Scope
/*13706*/     OPC_MoveChild, 1,
/*13708*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13711*/     OPC_RecordMemRef,
/*13712*/     OPC_RecordNode, // #1 = 'ld' chained node
/*13713*/     OPC_CheckFoldableChainNode,
/*13714*/     OPC_RecordChild1, // #2 = $src2
/*13715*/     OPC_CheckChild1Type, MVT::i64,
/*13717*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13719*/     OPC_CheckPredicate, 1, // Predicate_load
/*13721*/     OPC_MoveParent,
/*13722*/     OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->13740
/*13725*/       OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$src2 #3 #4 #5
/*13728*/       OPC_EmitMergeInputChains1_1,
/*13729*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DEB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fdiv:f32 FP32:f32:$src1, (ld:f32 bdxaddr12only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (DEB:f32 FP32:f32:$src1, bdxaddr12only:i64:$src2)
              /*SwitchType*/ 15,  MVT::f64,// ->13757
/*13742*/       OPC_CheckComplexPat, /*CP*/12, /*#*/2, // selectBDXAddr12Only:$src2 #3 #4 #5
/*13745*/       OPC_EmitMergeInputChains1_1,
/*13746*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DDB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fdiv:f64 FP64:f64:$src1, (ld:f64 bdxaddr12only:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (DDB:f64 FP64:f64:$src1, bdxaddr12only:i64:$src2)
              0, // EndSwitchType
/*13758*/   /*Scope*/ 36, /*->13795*/
/*13759*/     OPC_RecordChild1, // #1 = $src2
/*13760*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->13772
/*13763*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DEBR), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f32 FP32:f32:$src1, FP32:f32:$src2) - Complexity = 3
                // Dst: (DEBR:f32 FP32:f32:$src1, FP32:f32:$src2)
              /*SwitchType*/ 9,  MVT::f64,// ->13783
/*13774*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DDBR), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f64 FP64:f64:$src1, FP64:f64:$src2) - Complexity = 3
                // Dst: (DDBR:f64 FP64:f64:$src1, FP64:f64:$src2)
              /*SwitchType*/ 9,  MVT::f128,// ->13794
/*13785*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DXBR), 0,
                    1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f128 FP128:f128:$src1, FP128:f128:$src2) - Complexity = 3
                // Dst: (DXBR:f128 FP128:f128:$src1, FP128:f128:$src2)
              0, // EndSwitchType
/*13795*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::CALLSEQ_END),// ->13824
/*13799*/   OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*13800*/   OPC_CaptureGlueInput,
/*13801*/   OPC_RecordChild1, // #1 = $amt1
/*13802*/   OPC_MoveChild, 1,
/*13804*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*13807*/   OPC_MoveParent,
/*13808*/   OPC_RecordChild2, // #2 = $amt2
/*13809*/   OPC_MoveChild, 2,
/*13811*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*13814*/   OPC_MoveParent,
/*13815*/   OPC_EmitMergeInputChains1_0,
/*13816*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i64):$amt1, (timm:i64):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP (timm:i64):$amt1, (timm:i64):$amt2)
          /*SwitchOpcode*/ 30,  TARGET_VAL(SystemZISD::CALL),// ->13857
/*13827*/   OPC_RecordNode,   // #0 = 'z_call' chained node
/*13828*/   OPC_CaptureGlueInput,
/*13829*/   OPC_RecordChild1, // #1 = $dst
/*13830*/   OPC_CheckChild1Type, MVT::i64,
/*13832*/   OPC_Scope, 12, /*->13846*/ // 2 children in Scope
/*13834*/     OPC_CheckComplexPat, /*CP*/15, /*#*/1, // selectPCRelAddress:$dst #2
/*13837*/     OPC_EmitMergeInputChains1_0,
/*13838*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::BRASL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (z_call pcrel32call:i64:$dst) - Complexity = 9
              // Dst: (BRASL:i64 pcrel32call:i64:$dst)
/*13846*/   /*Scope*/ 9, /*->13856*/
/*13847*/     OPC_EmitMergeInputChains1_0,
/*13848*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::BASR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (z_call ADDR64:i64:$dst) - Complexity = 3
              // Dst: (BASR:i64 ADDR64:i64:$dst)
/*13856*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 29,  TARGET_VAL(SystemZISD::BR_CCMASK),// ->13889
/*13860*/   OPC_RecordNode,   // #0 = 'z_br_ccmask' chained node
/*13861*/   OPC_CaptureGlueInput,
/*13862*/   OPC_RecordChild1, // #1 = $cond
/*13863*/   OPC_MoveChild, 1,
/*13865*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13868*/   OPC_CheckPredicate, 83, // Predicate_cond4
/*13870*/   OPC_MoveParent,
/*13871*/   OPC_RecordChild2, // #2 = $dst
/*13872*/   OPC_MoveChild, 2,
/*13874*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*13877*/   OPC_MoveParent,
/*13878*/   OPC_EmitMergeInputChains1_0,
/*13879*/   OPC_EmitConvertToTarget, 1,
/*13881*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::BRCL), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 2/*#Ops*/, 3, 2, 
            // Src: (z_br_ccmask (imm:i8)<<P:Predicate_cond4>>:$cond, (bb:Other):$dst) - Complexity = 7
            // Dst: (BRCL (imm:i8)<<P:Predicate_cond4>>:$cond, (bb:Other):$dst)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::CALLSEQ_START),// ->13908
/*13892*/   OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*13893*/   OPC_RecordChild1, // #1 = $amt
/*13894*/   OPC_MoveChild, 1,
/*13896*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*13899*/   OPC_MoveParent,
/*13900*/   OPC_EmitMergeInputChains1_0,
/*13901*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i64):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN (timm:i64):$amt)
          /*SwitchOpcode*/ 76,  TARGET_VAL(ISD::FNEG),// ->13987
/*13911*/   OPC_Scope, 39, /*->13952*/ // 2 children in Scope
/*13913*/     OPC_MoveChild, 0,
/*13915*/     OPC_CheckOpcode, TARGET_VAL(ISD::FABS),
/*13918*/     OPC_RecordChild0, // #0 = $src
/*13919*/     OPC_MoveParent,
/*13920*/     OPC_SwitchType /*3 cases */, 8,  MVT::f32,// ->13931
/*13923*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNEBR), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 (fabs:f32 FP32:f32:$src)) - Complexity = 6
                // Dst: (LNEBR:f32 FP32:f32:$src)
              /*SwitchType*/ 8,  MVT::f64,// ->13941
/*13933*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNDBR), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 (fabs:f64 FP64:f64:$src)) - Complexity = 6
                // Dst: (LNDBR:f64 FP64:f64:$src)
              /*SwitchType*/ 8,  MVT::f128,// ->13951
/*13943*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNXBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fneg:f128 (fabs:f128 FP128:f128:$src)) - Complexity = 6
                // Dst: (LNXBR:f128 FP128:f128:$src)
              0, // EndSwitchType
/*13952*/   /*Scope*/ 33, /*->13986*/
/*13953*/     OPC_RecordChild0, // #0 = $src
/*13954*/     OPC_SwitchType /*3 cases */, 8,  MVT::f32,// ->13965
/*13957*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCEBR), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 FP32:f32:$src) - Complexity = 3
                // Dst: (LCEBR:f32 FP32:f32:$src)
              /*SwitchType*/ 8,  MVT::f64,// ->13975
/*13967*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCDBR), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 FP64:f64:$src) - Complexity = 3
                // Dst: (LCDBR:f64 FP64:f64:$src)
              /*SwitchType*/ 8,  MVT::f128,// ->13985
/*13977*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCXBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fneg:f128 FP128:f128:$src) - Complexity = 3
                // Dst: (LCXBR:f128 FP128:f128:$src)
              0, // EndSwitchType
/*13986*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 90,  TARGET_VAL(ISD::ConstantFP),// ->14080
/*13990*/   OPC_Scope, 31, /*->14023*/ // 2 children in Scope
/*13992*/     OPC_CheckPredicate, 84, // Predicate_fpimm0
/*13994*/     OPC_SwitchType /*3 cases */, 7,  MVT::f32,// ->14004
/*13997*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LZER), 0,
                    1/*#VTs*/, MVT::f32, 0/*#Ops*/, 
                // Src: (fpimm:f32)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (LZER:f32)
              /*SwitchType*/ 7,  MVT::f64,// ->14013
/*14006*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LZDR), 0,
                    1/*#VTs*/, MVT::f64, 0/*#Ops*/, 
                // Src: (fpimm:f64)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (LZDR:f64)
              /*SwitchType*/ 7,  MVT::f128,// ->14022
/*14015*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LZXR), 0,
                    1/*#VTs*/, MVT::f128, 0/*#Ops*/, 
                // Src: (fpimm:f128)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (LZXR:f128)
              0, // EndSwitchType
/*14023*/   /*Scope*/ 55, /*->14079*/
/*14024*/     OPC_CheckPredicate, 85, // Predicate_fpimmneg0
/*14026*/     OPC_SwitchType /*3 cases */, 15,  MVT::f32,// ->14044
/*14029*/       OPC_EmitNode, TARGET_VAL(SystemZ::LZER), 0,
                    1/*#VTs*/, MVT::f32, 0/*#Ops*/,  // Results = #0
/*14036*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCEBR), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fpimm:f32)<<P:Predicate_fpimmneg0>> - Complexity = 4
                // Dst: (LCEBR:f32 (LZER:f32))
              /*SwitchType*/ 15,  MVT::f64,// ->14061
/*14046*/       OPC_EmitNode, TARGET_VAL(SystemZ::LZDR), 0,
                    1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #0
/*14053*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCDBR), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fpimm:f64)<<P:Predicate_fpimmneg0>> - Complexity = 4
                // Dst: (LCDBR:f64 (LZDR:f64))
              /*SwitchType*/ 15,  MVT::f128,// ->14078
/*14063*/       OPC_EmitNode, TARGET_VAL(SystemZ::LZXR), 0,
                    1/*#VTs*/, MVT::f128, 0/*#Ops*/,  // Results = #0
/*14070*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCXBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fpimm:f128)<<P:Predicate_fpimmneg0>> - Complexity = 4
                // Dst: (LCXBR:f128 (LZXR:f128))
              0, // EndSwitchType
/*14079*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 9,  TARGET_VAL(SystemZISD::RET_FLAG),// ->14092
/*14083*/   OPC_RecordNode,   // #0 = 'z_retflag' chained node
/*14084*/   OPC_CaptureGlueInput,
/*14085*/   OPC_EmitMergeInputChains1_0,
/*14086*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::RET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (z_retflag) - Complexity = 3
            // Dst: (RET)
          /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::BRIND),// ->14107
/*14095*/   OPC_RecordNode,   // #0 = 'brind' chained node
/*14096*/   OPC_RecordChild1, // #1 = $dst
/*14097*/   OPC_CheckChild1Type, MVT::i64,
/*14099*/   OPC_EmitMergeInputChains1_0,
/*14100*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::BR), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (brind ADDR64:i64:$dst) - Complexity = 3
            // Dst: (BR ADDR64:i64:$dst)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->14126
/*14110*/   OPC_RecordNode,   // #0 = 'br' chained node
/*14111*/   OPC_RecordChild1, // #1 = $dst
/*14112*/   OPC_MoveChild, 1,
/*14114*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*14117*/   OPC_MoveParent,
/*14118*/   OPC_EmitMergeInputChains1_0,
/*14119*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::JG), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$dst) - Complexity = 3
            // Dst: (JG (bb:Other):$dst)
          /*SwitchOpcode*/ 101|128,1/*229*/,  TARGET_VAL(ISD::FCOPYSIGN),// ->14359
/*14130*/   OPC_RecordChild0, // #0 = $src1
/*14131*/   OPC_RecordChild1, // #1 = $src2
/*14132*/   OPC_Scope, 62, /*->14196*/ // 3 children in Scope
/*14134*/     OPC_CheckChild1Type, MVT::f32,
/*14136*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->14148
/*14139*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRss), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 0, 
                // Src: (fcopysign:f32 FP32:f32:$src1, FP32:f32:$src2) - Complexity = 3
                // Dst: (CPSDRss:f32 FP32:f32:$src2, FP32:f32:$src1)
              /*SwitchType*/ 9,  MVT::f64,// ->14159
/*14150*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRds), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 0, 
                // Src: (fcopysign:f64 FP64:f64:$src1, FP32:f32:$src2) - Complexity = 3
                // Dst: (CPSDRds:f64 FP32:f32:$src2, FP64:f64:$src1)
              /*SwitchType*/ 34,  MVT::f128,// ->14195
/*14161*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*14164*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 2,  // Results = #3
/*14173*/       OPC_EmitNode, TARGET_VAL(SystemZ::CPSDRds), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 3,  // Results = #4
/*14182*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*14185*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 0, 4, 5, 
                // Src: (fcopysign:f128 FP128:f128:$src1, FP32:f32:$src2) - Complexity = 3
                // Dst: (INSERT_SUBREG:f128 FP128:f128:$src1, (CPSDRds:f64 FP32:f32:$src2, (EXTRACT_SUBREG:f64 FP128:f128:$src1, subreg_high:i32)), subreg_high:i32)
              0, // EndSwitchType
/*14196*/   /*Scope*/ 62, /*->14259*/
/*14197*/     OPC_CheckChild1Type, MVT::f64,
/*14199*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->14211
/*14202*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRsd), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 0, 
                // Src: (fcopysign:f32 FP32:f32:$src1, FP64:f64:$src2) - Complexity = 3
                // Dst: (CPSDRsd:f32 FP64:f64:$src2, FP32:f32:$src1)
              /*SwitchType*/ 9,  MVT::f64,// ->14222
/*14213*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRdd), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 0, 
                // Src: (fcopysign:f64 FP64:f64:$src1, FP64:f64:$src2) - Complexity = 3
                // Dst: (CPSDRdd:f64 FP64:f64:$src2, FP64:f64:$src1)
              /*SwitchType*/ 34,  MVT::f128,// ->14258
/*14224*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*14227*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 2,  // Results = #3
/*14236*/       OPC_EmitNode, TARGET_VAL(SystemZ::CPSDRdd), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 3,  // Results = #4
/*14245*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*14248*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 0, 4, 5, 
                // Src: (fcopysign:f128 FP128:f128:$src1, FP64:f64:$src2) - Complexity = 3
                // Dst: (INSERT_SUBREG:f128 FP128:f128:$src1, (CPSDRdd:f64 FP64:f64:$src2, (EXTRACT_SUBREG:f64 FP128:f128:$src1, subreg_high:i32)), subreg_high:i32)
              0, // EndSwitchType
/*14259*/   /*Scope*/ 98, /*->14358*/
/*14260*/     OPC_CheckChild1Type, MVT::f128,
/*14262*/     OPC_SwitchType /*3 cases */, 21,  MVT::f32,// ->14286
/*14265*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*14268*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2,  // Results = #3
/*14277*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRsd), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 3, 0, 
                // Src: (fcopysign:f32 FP32:f32:$src1, FP128:f128:$src2) - Complexity = 3
                // Dst: (CPSDRsd:f32 (EXTRACT_SUBREG:f64 FP128:f128:$src2, subreg_high:i32), FP32:f32:$src1)
              /*SwitchType*/ 21,  MVT::f64,// ->14309
/*14288*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*14291*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2,  // Results = #3
/*14300*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRdd), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 3, 0, 
                // Src: (fcopysign:f64 FP64:f64:$src1, FP128:f128:$src2) - Complexity = 3
                // Dst: (CPSDRdd:f64 (EXTRACT_SUBREG:f64 FP128:f128:$src2, subreg_high:i32), FP64:f64:$src1)
              /*SwitchType*/ 46,  MVT::f128,// ->14357
/*14311*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*14314*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2,  // Results = #3
/*14323*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*14326*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 4,  // Results = #5
/*14335*/       OPC_EmitNode, TARGET_VAL(SystemZ::CPSDRdd), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 3, 5,  // Results = #6
/*14344*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*14347*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 0, 6, 7, 
                // Src: (fcopysign:f128 FP128:f128:$src1, FP128:f128:$src2) - Complexity = 3
                // Dst: (INSERT_SUBREG:f128 FP128:f128:$src1, (CPSDRdd:f64 (EXTRACT_SUBREG:f64 FP128:f128:$src2, subreg_high:i32), (EXTRACT_SUBREG:f64 FP128:f128:$src1, subreg_high:i32)), subreg_high:i32)
              0, // EndSwitchType
/*14358*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 63,  TARGET_VAL(ISD::FP_ROUND),// ->14425
/*14362*/   OPC_RecordChild0, // #0 = $src
/*14363*/   OPC_SwitchType /*2 cases */, 36,  MVT::f32,// ->14402
/*14366*/     OPC_Scope, 10, /*->14378*/ // 2 children in Scope
/*14368*/       OPC_CheckChild0Type, MVT::f64,
/*14370*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LEDBR), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fround:f32 FP64:f64:$src) - Complexity = 3
                // Dst: (LEDBR:f32 FP64:f64:$src)
/*14378*/     /*Scope*/ 22, /*->14401*/
/*14379*/       OPC_CheckChild0Type, MVT::f128,
/*14381*/       OPC_EmitNode, TARGET_VAL(SystemZ::LEXBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0,  // Results = #1
/*14389*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*14392*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                // Src: (fround:f32 FP128:f128:$src) - Complexity = 3
                // Dst: (EXTRACT_SUBREG:f32 (LEXBR:f128 FP128:f128:$src), subreg_32bit:i32)
/*14401*/     0, /*End of Scope*/
            /*SwitchType*/ 20,  MVT::f64,// ->14424
/*14404*/     OPC_EmitNode, TARGET_VAL(SystemZ::LDXBR), 0,
                  1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0,  // Results = #1
/*14412*/     OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*14415*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
              // Src: (fround:f64 FP128:f128:$src) - Complexity = 3
              // Dst: (EXTRACT_SUBREG:f64 (LDXBR:f128 FP128:f128:$src), subreg_high:i32)
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FP_EXTEND),// ->14467
/*14428*/   OPC_RecordChild0, // #0 = $src
/*14429*/   OPC_SwitchType /*2 cases */, 8,  MVT::f64,// ->14440
/*14432*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LDEBR), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fextend:f64 FP32:f32:$src) - Complexity = 3
              // Dst: (LDEBR:f64 FP32:f32:$src)
            /*SwitchType*/ 24,  MVT::f128,// ->14466
/*14442*/     OPC_Scope, 10, /*->14454*/ // 2 children in Scope
/*14444*/       OPC_CheckChild0Type, MVT::f32,
/*14446*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LXEBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fextend:f128 FP32:f32:$src) - Complexity = 3
                // Dst: (LXEBR:f128 FP32:f32:$src)
/*14454*/     /*Scope*/ 10, /*->14465*/
/*14455*/       OPC_CheckChild0Type, MVT::f64,
/*14457*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LXDBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fextend:f128 FP64:f64:$src) - Complexity = 3
                // Dst: (LXDBR:f128 FP64:f64:$src)
/*14465*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 73,  TARGET_VAL(ISD::SINT_TO_FP),// ->14543
/*14470*/   OPC_RecordChild0, // #0 = $src
/*14471*/   OPC_Scope, 34, /*->14507*/ // 2 children in Scope
/*14473*/     OPC_CheckChild0Type, MVT::i32,
/*14475*/     OPC_SwitchType /*3 cases */, 8,  MVT::f32,// ->14486
/*14478*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CEFBR), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f32 GR32:i32:$src) - Complexity = 3
                // Dst: (CEFBR:f32 GR32:i32:$src)
              /*SwitchType*/ 8,  MVT::f64,// ->14496
/*14488*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CDFBR), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f64 GR32:i32:$src) - Complexity = 3
                // Dst: (CDFBR:f64 GR32:i32:$src)
              /*SwitchType*/ 8,  MVT::f128,// ->14506
/*14498*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CXFBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f128 GR32:i32:$src) - Complexity = 3
                // Dst: (CXFBR:f128 GR32:i32:$src)
              0, // EndSwitchType
/*14507*/   /*Scope*/ 34, /*->14542*/
/*14508*/     OPC_CheckChild0Type, MVT::i64,
/*14510*/     OPC_SwitchType /*3 cases */, 8,  MVT::f32,// ->14521
/*14513*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CEGBR), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f32 GR64:i64:$src) - Complexity = 3
                // Dst: (CEGBR:f32 GR64:i64:$src)
              /*SwitchType*/ 8,  MVT::f64,// ->14531
/*14523*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CDGBR), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f64 GR64:i64:$src) - Complexity = 3
                // Dst: (CDGBR:f64 GR64:i64:$src)
              /*SwitchType*/ 8,  MVT::f128,// ->14541
/*14533*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CXGBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f128 GR64:i64:$src) - Complexity = 3
                // Dst: (CXGBR:f128 GR64:i64:$src)
              0, // EndSwitchType
/*14542*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 33,  TARGET_VAL(ISD::FABS),// ->14579
/*14546*/   OPC_RecordChild0, // #0 = $src
/*14547*/   OPC_SwitchType /*3 cases */, 8,  MVT::f32,// ->14558
/*14550*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPEBR), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 FP32:f32:$src) - Complexity = 3
              // Dst: (LPEBR:f32 FP32:f32:$src)
            /*SwitchType*/ 8,  MVT::f64,// ->14568
/*14560*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPDBR), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fabs:f64 FP64:f64:$src) - Complexity = 3
              // Dst: (LPDBR:f64 FP64:f64:$src)
            /*SwitchType*/ 8,  MVT::f128,// ->14578
/*14570*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPXBR), 0,
                  1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
              // Src: (fabs:f128 FP128:f128:$src) - Complexity = 3
              // Dst: (LPXBR:f128 FP128:f128:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 45,  TARGET_VAL(ISD::FRINT),// ->14627
/*14582*/   OPC_RecordChild0, // #0 = $src
/*14583*/   OPC_SwitchType /*3 cases */, 12,  MVT::f32,// ->14598
/*14586*/     OPC_EmitInteger, MVT::i8, 0, 
/*14589*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIEBR), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (frint:f32 FP32:f32:$src) - Complexity = 3
              // Dst: (FIEBR:f32 FP32:f32:$src, 0:i8)
            /*SwitchType*/ 12,  MVT::f64,// ->14612
/*14600*/     OPC_EmitInteger, MVT::i8, 0, 
/*14603*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIDBR), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (frint:f64 FP64:f64:$src) - Complexity = 3
              // Dst: (FIDBR:f64 FP64:f64:$src, 0:i8)
            /*SwitchType*/ 12,  MVT::f128,// ->14626
/*14614*/     OPC_EmitInteger, MVT::i8, 0, 
/*14617*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIXBR), 0,
                  1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
              // Src: (frint:f128 FP128:f128:$src) - Complexity = 3
              // Dst: (FIXBR:f128 FP128:f128:$src, 0:i8)
            0, // EndSwitchType
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 14629 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 172
  // #OPC_RecordNode                     = 105
  // #OPC_RecordChild                    = 430
  // #OPC_RecordMemRef                   = 91
  // #OPC_CaptureGlueInput               = 7
  // #OPC_MoveChild                      = 226
  // #OPC_MoveParent                     = 406
  // #OPC_CheckSame                      = 38
  // #OPC_CheckPatternPredicate          = 0
  // #OPC_CheckPredicate                 = 624
  // #OPC_CheckOpcode                    = 163
  // #OPC_SwitchOpcode                   = 10
  // #OPC_CheckType                      = 168
  // #OPC_SwitchType                     = 101
  // #OPC_CheckChildType                 = 156
  // #OPC_CheckInteger                   = 2
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 11
  // #OPC_CheckComplexPat                = 358
  // #OPC_CheckAndImm                    = 22
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 63
  // #OPC_EmitInteger                    = 9
  // #OPC_EmitStringInteger              = 40
  // #OPC_EmitRegister                   = 0
  // #OPC_EmitConvertToTarget            = 174
  // #OPC_EmitMergeInputChains           = 341
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 49
  // #OPC_EmitNodeXForm                  = 167
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 579

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 1: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 2: { // Predicate_imm32sx8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<8>(N->getSExtValue());

  }
  case 3: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 4: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 5: { // Predicate_imm64sx8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<8>(N->getSExtValue());

  }
  case 6: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 7: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 8: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 9: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 10: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 11: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 12: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 13: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 14: { // Predicate_aligned_store
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return Store->getAlignment() >= Store->getMemoryVT().getStoreSize();

  }
  case 15: { // Predicate_imm32sx16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<16>(N->getSExtValue());

  }
  case 16: { // Predicate_imm64sx16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<16>(N->getSExtValue());

  }
  case 17: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 18: { // Predicate_aligned_truncstorei16
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return Store->getAlignment() >= Store->getMemoryVT().getStoreSize();

  }
  case 19: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 20: { // Predicate_aligned_truncstorei32
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return Store->getAlignment() >= Store->getMemoryVT().getStoreSize();

  }
  case 21: { // Predicate_or_as_inserti8
    SDNode *N = Node;

  unsigned BitWidth = N->getValueType(0).getScalarType().getSizeInBits();
  return CurDAG->MaskedValueIsZero(N->getOperand(0),
                                   APInt::getLowBitsSet(BitWidth, 8));

  }
  case 22: { // Predicate_or_as_revinserti8
    SDNode *N = Node;

  unsigned BitWidth = N->getValueType(0).getScalarType().getSizeInBits();
  return CurDAG->MaskedValueIsZero(N->getOperand(1),
                                   APInt::getLowBitsSet(BitWidth, 8));

  }
  case 23: { // Predicate_imm32ll16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLL(N->getZExtValue());

  }
  case 24: { // Predicate_imm32lh16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLH(N->getZExtValue());

  }
  case 25: { // Predicate_imm64ll16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLL(N->getZExtValue());

  }
  case 26: { // Predicate_imm64lh16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLH(N->getZExtValue());

  }
  case 27: { // Predicate_imm64hl16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHL(N->getZExtValue());

  }
  case 28: { // Predicate_imm64hh16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHH(N->getZExtValue());

  }
  case 29: { // Predicate_imm64lf32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLF(N->getZExtValue());

  }
  case 30: { // Predicate_imm64hf32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHF(N->getZExtValue());

  }
  case 31: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 32: { // Predicate_aligned_sextloadi16
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 33: { // Predicate_aligned_load
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 34: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 35: { // Predicate_aligned_sextloadi32
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 36: { // Predicate_imm64sx32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<32>(N->getSExtValue());

  }
  case 37: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 38: { // Predicate_aligned_zextloadi16
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 39: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 40: { // Predicate_aligned_zextloadi32
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 41: { // Predicate_imm32zx8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<8>(N->getZExtValue());

  }
  case 42: { // Predicate_imm32zx16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<16>(N->getZExtValue());

  }
  case 43: { // Predicate_imm64zx16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<16>(N->getZExtValue());

  }
  case 44: { // Predicate_imm64zx32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<32>(N->getZExtValue());

  }
  case 45: { // Predicate_imm64zx32n
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<32>(-N->getSExtValue());

  }
  case 46: { // Predicate_imm32ll16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLL(uint32_t(~N->getZExtValue()));

  }
  case 47: { // Predicate_imm32lh16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLH(uint32_t(~N->getZExtValue()));

  }
  case 48: { // Predicate_imm64ll16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLL(uint64_t(~N->getZExtValue()));

  }
  case 49: { // Predicate_imm64lh16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLH(uint64_t(~N->getZExtValue()));

  }
  case 50: { // Predicate_imm64hl16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHL(uint64_t(~N->getZExtValue()));

  }
  case 51: { // Predicate_imm64hh16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHH(uint64_t(~N->getZExtValue()));

  }
  case 52: { // Predicate_imm64lf32c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLF(uint64_t(~N->getZExtValue()));

  }
  case 53: { // Predicate_imm64hf32c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHF(uint64_t(~N->getZExtValue()));

  }
  case 54: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 55: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 56: { // Predicate_extloadf32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f32;

  }
  case 57: { // Predicate_extloadf64
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f64;

  }
  case 58: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 59: { // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 60: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 61: { // Predicate_atomic_load_and_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 62: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 63: { // Predicate_atomic_load_or_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 64: { // Predicate_atomic_load_xor_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 65: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 66: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 67: { // Predicate_atomic_load_nand_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 68: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 69: { // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 70: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 71: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 72: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 73: { // Predicate_atomic_load_sub_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 74: { // Predicate_atomic_load_min_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 75: { // Predicate_atomic_load_min_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 76: { // Predicate_atomic_load_max_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 77: { // Predicate_atomic_load_max_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 78: { // Predicate_atomic_load_umin_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 79: { // Predicate_atomic_load_umin_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 80: { // Predicate_atomic_load_umax_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 81: { // Predicate_atomic_load_umax_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 82: { // Predicate_access_reg
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return N->getZExtValue() < 16; 
  }
  case 83: { // Predicate_cond4
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return (N->getZExtValue() < 16); 
  }
  case 84: { // Predicate_fpimm0
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);
 return N->isExactlyValue(+0.0); 
  }
  case 85: { // Predicate_fpimmneg0
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
    return selectBDAddr20Only(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return selectBDAddr12Pair(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+2);
    return selectBDAddr20Pair(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+3);
    return selectBDXAddr20Only(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 4:
    Result.resize(NextRes+1);
    return selectPCRelAddress(N, Result[NextRes+0].first);
  case 5:
    Result.resize(NextRes+2);
    return selectBDAddr12Only(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 6:
    Result.resize(NextRes+3);
    return selectBDXAddr12Pair(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 7:
    Result.resize(NextRes+3);
    return selectBDXAddr20Pair(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 8:
    Result.resize(NextRes+3);
    return selectBDXAddr20Only128(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 9:
    Result.resize(NextRes+3);
    return selectDynAlloc12Only(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 10:
    Result.resize(NextRes+3);
    return selectLAAddr12Pair(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 11:
    Result.resize(NextRes+3);
    return selectLAAddr20Pair(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 12:
    Result.resize(NextRes+3);
    return selectBDXAddr12Only(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 13:
    Result.resize(NextRes+2);
    return selectBDAddr12Only(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 14:
    Result.resize(NextRes+2);
    return selectBDAddr20Only(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 15:
    Result.resize(NextRes+1);
    return selectPCRelAddress(N, Result[NextRes+0].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // SIMM8
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(int8_t(N->getZExtValue()), MVT::i64);

  }
  case 1: {  // UIMM8
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(uint8_t(N->getZExtValue()), MVT::i64);

  }
  case 2: {  // SIMM16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(int16_t(N->getZExtValue()), MVT::i64);

  }
  case 3: {  // LL16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = N->getZExtValue() & 0x000000000000FFFFULL;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 4: {  // LH16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = (N->getZExtValue() & 0x00000000FFFF0000ULL) >> 16;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 5: {  // HL16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = (N->getZExtValue() & 0x0000FFFF00000000ULL) >> 32;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 6: {  // HH16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = (N->getZExtValue() & 0xFFFF000000000000ULL) >> 48;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 7: {  // LF32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = N->getZExtValue() & 0x00000000FFFFFFFFULL;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 8: {  // HF32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = N->getZExtValue() >> 32;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 9: {  // UIMM32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(uint32_t(N->getZExtValue()), MVT::i64);

  }
  case 10: {  // SIMM32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(int32_t(N->getZExtValue()), MVT::i64);

  }
  case 11: {  // UIMM16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(uint16_t(N->getZExtValue()), MVT::i64);

  }
  case 12: {  // NEGIMM32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(uint32_t(-N->getZExtValue()), MVT::i64);

  }
  }
}

