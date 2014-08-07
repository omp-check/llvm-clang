/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the MBlaze target                              *|
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
/*0*/     OPC_SwitchOpcode /*52 cases */, 69|128,1/*197*/,  TARGET_VAL(ISD::STORE),// ->202
/*5*/       OPC_RecordMemRef,
/*6*/       OPC_RecordNode,   // #0 = 'st' chained node
/*7*/       OPC_Scope, 28, /*->37*/ // 2 children in Scope
/*9*/         OPC_MoveChild, 1,
/*11*/        OPC_CheckInteger, 0, 
/*13*/        OPC_MoveParent,
/*14*/        OPC_RecordChild2, // #1 = $dst
/*15*/        OPC_CheckChild2Type, MVT::i32,
/*17*/        OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*19*/        OPC_CheckPredicate, 1, // Predicate_store
/*21*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRegImm:$dst #2 #3
/*24*/        OPC_EmitMergeInputChains1_0,
/*25*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*28*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::SWI), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 4, 2, 3, 
              // Src: (st 0:i32, iaddr:i32:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
              // Dst: (SWI R0:i32, iaddr:i32:$dst)
/*37*/      /*Scope*/ 34|128,1/*162*/, /*->201*/
/*39*/        OPC_RecordChild1, // #1 = $dst
/*40*/        OPC_Scope, 116, /*->158*/ // 2 children in Scope
/*42*/          OPC_CheckChild1Type, MVT::i32,
/*44*/          OPC_RecordChild2, // #2 = $addr
/*45*/          OPC_CheckChild2Type, MVT::i32,
/*47*/          OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*49*/          OPC_Scope, 36, /*->87*/ // 3 children in Scope
/*51*/            OPC_CheckPredicate, 2, // Predicate_truncstore
/*53*/            OPC_Scope, 15, /*->70*/ // 2 children in Scope
/*55*/              OPC_CheckPredicate, 3, // Predicate_truncstorei8
/*57*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRegImm:$addr #3 #4
/*60*/              OPC_EmitMergeInputChains1_0,
/*61*/              OPC_MorphNodeTo, TARGET_VAL(MBlaze::SBI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPR:i32:$dst, iaddr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (SBI GPR:i32:$dst, iaddr:i32:$addr)
/*70*/            /*Scope*/ 15, /*->86*/
/*71*/              OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*73*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRegImm:$addr #3 #4
/*76*/              OPC_EmitMergeInputChains1_0,
/*77*/              OPC_MorphNodeTo, TARGET_VAL(MBlaze::SHI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPR:i32:$dst, iaddr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (SHI GPR:i32:$dst, iaddr:i32:$addr)
/*86*/            0, /*End of Scope*/
/*87*/          /*Scope*/ 32, /*->120*/
/*88*/            OPC_CheckPredicate, 1, // Predicate_store
/*90*/            OPC_Scope, 13, /*->105*/ // 2 children in Scope
/*92*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRegImm:$addr #3 #4
/*95*/              OPC_EmitMergeInputChains1_0,
/*96*/              OPC_MorphNodeTo, TARGET_VAL(MBlaze::SWI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPR:i32:$dst, iaddr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SWI GPR:i32:$dst, iaddr:i32:$addr)
/*105*/           /*Scope*/ 13, /*->119*/
/*106*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRegReg:$addr #3 #4
/*109*/             OPC_EmitMergeInputChains1_0,
/*110*/             OPC_MorphNodeTo, TARGET_VAL(MBlaze::SW), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPR:i32:$dst, xaddr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SW GPR:i32:$dst, xaddr:i32:$addr)
/*119*/           0, /*End of Scope*/
/*120*/         /*Scope*/ 36, /*->157*/
/*121*/           OPC_CheckPredicate, 2, // Predicate_truncstore
/*123*/           OPC_Scope, 15, /*->140*/ // 2 children in Scope
/*125*/             OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*127*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRegReg:$ad #3 #4
/*130*/             OPC_EmitMergeInputChains1_0,
/*131*/             OPC_MorphNodeTo, TARGET_VAL(MBlaze::SH), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPR:i32:$dst, xaddr:i32:$ad)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (SH GPR:i32:$dst, xaddr:i32:$ad)
/*140*/           /*Scope*/ 15, /*->156*/
/*141*/             OPC_CheckPredicate, 3, // Predicate_truncstorei8
/*143*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRegReg:$ad #3 #4
/*146*/             OPC_EmitMergeInputChains1_0,
/*147*/             OPC_MorphNodeTo, TARGET_VAL(MBlaze::SB), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPR:i32:$dst, xaddr:i32:$ad)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (SB GPR:i32:$dst, xaddr:i32:$ad)
/*156*/           0, /*End of Scope*/
/*157*/         0, /*End of Scope*/
/*158*/       /*Scope*/ 41, /*->200*/
/*159*/         OPC_CheckChild1Type, MVT::f32,
/*161*/         OPC_RecordChild2, // #2 = $addr
/*162*/         OPC_CheckChild2Type, MVT::i32,
/*164*/         OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*166*/         OPC_CheckPredicate, 1, // Predicate_store
/*168*/         OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*170*/         OPC_Scope, 13, /*->185*/ // 2 children in Scope
/*172*/           OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRegReg:$addr #3 #4
/*175*/           OPC_EmitMergeInputChains1_0,
/*176*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::SWF), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st GPR:f32:$dst, xaddr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SWF GPR:f32:$dst, xaddr:i32:$addr)
/*185*/         /*Scope*/ 13, /*->199*/
/*186*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRegImm:$addr #3 #4
/*189*/           OPC_EmitMergeInputChains1_0,
/*190*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::SWFI), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st GPR:f32:$dst, iaddr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SWFI GPR:f32:$dst, iaddr:i32:$addr)
/*199*/         0, /*End of Scope*/
/*200*/       0, /*End of Scope*/
/*201*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 97|128,1/*225*/,  TARGET_VAL(ISD::LOAD),// ->431
/*206*/     OPC_RecordMemRef,
/*207*/     OPC_RecordNode,   // #0 = 'ld' chained node
/*208*/     OPC_RecordChild1, // #1 = $addr
/*209*/     OPC_CheckChild1Type, MVT::i32,
/*211*/     OPC_CheckPredicate, 5, // Predicate_unindexedload
/*213*/     OPC_SwitchType /*2 cases */, 49|128,1/*177*/,  MVT::i32,// ->394
/*217*/       OPC_Scope, 36, /*->255*/ // 5 children in Scope
/*219*/         OPC_CheckPredicate, 6, // Predicate_zextload
/*221*/         OPC_Scope, 15, /*->238*/ // 2 children in Scope
/*223*/           OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*225*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRegImm:$addr #2 #3
/*228*/           OPC_EmitMergeInputChains1_0,
/*229*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::LBUI), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBUI:i32 iaddr:i32:$addr)
/*238*/         /*Scope*/ 15, /*->254*/
/*239*/           OPC_CheckPredicate, 8, // Predicate_zextloadi16
/*241*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRegImm:$addr #2 #3
/*244*/           OPC_EmitMergeInputChains1_0,
/*245*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::LHUI), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHUI:i32 iaddr:i32:$addr)
/*254*/         0, /*End of Scope*/
/*255*/       /*Scope*/ 15, /*->271*/
/*256*/         OPC_CheckPredicate, 9, // Predicate_load
/*258*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRegImm:$addr #2 #3
/*261*/         OPC_EmitMergeInputChains1_0,
/*262*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::LWI), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 iaddr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LWI:i32 iaddr:i32:$addr)
/*271*/       /*Scope*/ 68, /*->340*/
/*272*/         OPC_CheckPredicate, 10, // Predicate_extload
/*274*/         OPC_Scope, 15, /*->291*/ // 4 children in Scope
/*276*/           OPC_CheckPredicate, 11, // Predicate_extloadi8
/*278*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRegImm:$src #2 #3
/*281*/           OPC_EmitMergeInputChains1_0,
/*282*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::LBUI), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBUI:i32 iaddr:i32:$src)
/*291*/         /*Scope*/ 15, /*->307*/
/*292*/           OPC_CheckPredicate, 12, // Predicate_extloadi16
/*294*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRegImm:$src #2 #3
/*297*/           OPC_EmitMergeInputChains1_0,
/*298*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::LHUI), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHUI:i32 iaddr:i32:$src)
/*307*/         /*Scope*/ 15, /*->323*/
/*308*/           OPC_CheckPredicate, 11, // Predicate_extloadi8
/*310*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRegReg:$src #2 #3
/*313*/           OPC_EmitMergeInputChains1_0,
/*314*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::LBU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBU:i32 xaddr:i32:$src)
/*323*/         /*Scope*/ 15, /*->339*/
/*324*/           OPC_CheckPredicate, 12, // Predicate_extloadi16
/*326*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRegReg:$src #2 #3
/*329*/           OPC_EmitMergeInputChains1_0,
/*330*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::LHU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHU:i32 xaddr:i32:$src)
/*339*/         0, /*End of Scope*/
/*340*/       /*Scope*/ 15, /*->356*/
/*341*/         OPC_CheckPredicate, 9, // Predicate_load
/*343*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRegReg:$addr #2 #3
/*346*/         OPC_EmitMergeInputChains1_0,
/*347*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::LW), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 xaddr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LW:i32 xaddr:i32:$addr)
/*356*/       /*Scope*/ 36, /*->393*/
/*357*/         OPC_CheckPredicate, 6, // Predicate_zextload
/*359*/         OPC_Scope, 15, /*->376*/ // 2 children in Scope
/*361*/           OPC_CheckPredicate, 8, // Predicate_zextloadi16
/*363*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRegReg:$addr #2 #3
/*366*/           OPC_EmitMergeInputChains1_0,
/*367*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::LHU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHU:i32 xaddr:i32:$addr)
/*376*/         /*Scope*/ 15, /*->392*/
/*377*/           OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*379*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRegReg:$addr #2 #3
/*382*/           OPC_EmitMergeInputChains1_0,
/*383*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::LBU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBU:i32 xaddr:i32:$addr)
/*392*/         0, /*End of Scope*/
/*393*/       0, /*End of Scope*/
            /*SwitchType*/ 34,  MVT::f32,// ->430
/*396*/       OPC_CheckPredicate, 9, // Predicate_load
/*398*/       OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*400*/       OPC_Scope, 13, /*->415*/ // 2 children in Scope
/*402*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRegReg:$addr #2 #3
/*405*/         OPC_EmitMergeInputChains1_0,
/*406*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::LWF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:f32 xaddr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LWF:f32 xaddr:i32:$addr)
/*415*/       /*Scope*/ 13, /*->429*/
/*416*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRegImm:$addr #2 #3
/*419*/         OPC_EmitMergeInputChains1_0,
/*420*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::LWFI), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:f32 iaddr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LWFI:f32 iaddr:i32:$addr)
/*429*/       0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 101|128,9/*1253*/,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->1688
/*435*/     OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*436*/     OPC_MoveChild, 1,
/*438*/     OPC_Scope, 37, /*->477*/ // 32 children in Scope
/*440*/       OPC_CheckInteger, 11|128,19/*2443*/, 
/*443*/       OPC_MoveParent,
/*444*/       OPC_RecordChild2, // #1 = $b
/*445*/       OPC_Scope, 19, /*->466*/ // 2 children in Scope
/*447*/         OPC_MoveChild, 2,
/*449*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*452*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*454*/         OPC_MoveParent,
/*455*/         OPC_EmitMergeInputChains1_0,
/*456*/         OPC_EmitConvertToTarget, 1,
/*458*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::GET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2443:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (GET:i32 (imm:i32):$b)
/*466*/       /*Scope*/ 9, /*->476*/
/*467*/         OPC_EmitMergeInputChains1_0,
/*468*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::GETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2443:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (GETD:i32 GPR:i32:$b)
/*476*/       0, /*End of Scope*/
/*477*/     /*Scope*/ 37, /*->515*/
/*478*/       OPC_CheckInteger, 1|128,19/*2433*/, 
/*481*/       OPC_MoveParent,
/*482*/       OPC_RecordChild2, // #1 = $b
/*483*/       OPC_Scope, 19, /*->504*/ // 2 children in Scope
/*485*/         OPC_MoveChild, 2,
/*487*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*490*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*492*/         OPC_MoveParent,
/*493*/         OPC_EmitMergeInputChains1_0,
/*494*/         OPC_EmitConvertToTarget, 1,
/*496*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::AGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2433:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (AGET:i32 (imm:i32):$b)
/*504*/       /*Scope*/ 9, /*->514*/
/*505*/         OPC_EmitMergeInputChains1_0,
/*506*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::AGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2433:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (AGETD:i32 GPR:i32:$b)
/*514*/       0, /*End of Scope*/
/*515*/     /*Scope*/ 37, /*->553*/
/*516*/       OPC_CheckInteger, 5|128,19/*2437*/, 
/*519*/       OPC_MoveParent,
/*520*/       OPC_RecordChild2, // #1 = $b
/*521*/       OPC_Scope, 19, /*->542*/ // 2 children in Scope
/*523*/         OPC_MoveChild, 2,
/*525*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*528*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*530*/         OPC_MoveParent,
/*531*/         OPC_EmitMergeInputChains1_0,
/*532*/         OPC_EmitConvertToTarget, 1,
/*534*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::CGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2437:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (CGET:i32 (imm:i32):$b)
/*542*/       /*Scope*/ 9, /*->552*/
/*543*/         OPC_EmitMergeInputChains1_0,
/*544*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::CGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2437:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (CGETD:i32 GPR:i32:$b)
/*552*/       0, /*End of Scope*/
/*553*/     /*Scope*/ 37, /*->591*/
/*554*/       OPC_CheckInteger, 3|128,19/*2435*/, 
/*557*/       OPC_MoveParent,
/*558*/       OPC_RecordChild2, // #1 = $b
/*559*/       OPC_Scope, 19, /*->580*/ // 2 children in Scope
/*561*/         OPC_MoveChild, 2,
/*563*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*566*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*568*/         OPC_MoveParent,
/*569*/         OPC_EmitMergeInputChains1_0,
/*570*/         OPC_EmitConvertToTarget, 1,
/*572*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::CAGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2435:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (CAGET:i32 (imm:i32):$b)
/*580*/       /*Scope*/ 9, /*->590*/
/*581*/         OPC_EmitMergeInputChains1_0,
/*582*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::CAGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2435:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (CAGETD:i32 GPR:i32:$b)
/*590*/       0, /*End of Scope*/
/*591*/     /*Scope*/ 37, /*->629*/
/*592*/       OPC_CheckInteger, 10|128,19/*2442*/, 
/*595*/       OPC_MoveParent,
/*596*/       OPC_RecordChild2, // #1 = $b
/*597*/       OPC_Scope, 19, /*->618*/ // 2 children in Scope
/*599*/         OPC_MoveChild, 2,
/*601*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*604*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*606*/         OPC_MoveParent,
/*607*/         OPC_EmitMergeInputChains1_0,
/*608*/         OPC_EmitConvertToTarget, 1,
/*610*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::EGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2442:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (EGET:i32 (imm:i32):$b)
/*618*/       /*Scope*/ 9, /*->628*/
/*619*/         OPC_EmitMergeInputChains1_0,
/*620*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::EGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2442:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (EGETD:i32 GPR:i32:$b)
/*628*/       0, /*End of Scope*/
/*629*/     /*Scope*/ 37, /*->667*/
/*630*/       OPC_CheckInteger, 7|128,19/*2439*/, 
/*633*/       OPC_MoveParent,
/*634*/       OPC_RecordChild2, // #1 = $b
/*635*/       OPC_Scope, 19, /*->656*/ // 2 children in Scope
/*637*/         OPC_MoveChild, 2,
/*639*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*642*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*644*/         OPC_MoveParent,
/*645*/         OPC_EmitMergeInputChains1_0,
/*646*/         OPC_EmitConvertToTarget, 1,
/*648*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::EAGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2439:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (EAGET:i32 (imm:i32):$b)
/*656*/       /*Scope*/ 9, /*->666*/
/*657*/         OPC_EmitMergeInputChains1_0,
/*658*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::EAGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2439:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (EAGETD:i32 GPR:i32:$b)
/*666*/       0, /*End of Scope*/
/*667*/     /*Scope*/ 37, /*->705*/
/*668*/       OPC_CheckInteger, 9|128,19/*2441*/, 
/*671*/       OPC_MoveParent,
/*672*/       OPC_RecordChild2, // #1 = $b
/*673*/       OPC_Scope, 19, /*->694*/ // 2 children in Scope
/*675*/         OPC_MoveChild, 2,
/*677*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*680*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*682*/         OPC_MoveParent,
/*683*/         OPC_EmitMergeInputChains1_0,
/*684*/         OPC_EmitConvertToTarget, 1,
/*686*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::ECGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2441:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (ECGET:i32 (imm:i32):$b)
/*694*/       /*Scope*/ 9, /*->704*/
/*695*/         OPC_EmitMergeInputChains1_0,
/*696*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::ECGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2441:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (ECGETD:i32 GPR:i32:$b)
/*704*/       0, /*End of Scope*/
/*705*/     /*Scope*/ 37, /*->743*/
/*706*/       OPC_CheckInteger, 8|128,19/*2440*/, 
/*709*/       OPC_MoveParent,
/*710*/       OPC_RecordChild2, // #1 = $b
/*711*/       OPC_Scope, 19, /*->732*/ // 2 children in Scope
/*713*/         OPC_MoveChild, 2,
/*715*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*718*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*720*/         OPC_MoveParent,
/*721*/         OPC_EmitMergeInputChains1_0,
/*722*/         OPC_EmitConvertToTarget, 1,
/*724*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::ECAGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2440:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (ECAGET:i32 (imm:i32):$b)
/*732*/       /*Scope*/ 9, /*->742*/
/*733*/         OPC_EmitMergeInputChains1_0,
/*734*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::ECAGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2440:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (ECAGETD:i32 GPR:i32:$b)
/*742*/       0, /*End of Scope*/
/*743*/     /*Scope*/ 37, /*->781*/
/*744*/       OPC_CheckInteger, 35|128,19/*2467*/, 
/*747*/       OPC_MoveParent,
/*748*/       OPC_RecordChild2, // #1 = $b
/*749*/       OPC_Scope, 19, /*->770*/ // 2 children in Scope
/*751*/         OPC_MoveChild, 2,
/*753*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*756*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*758*/         OPC_MoveParent,
/*759*/         OPC_EmitMergeInputChains1_0,
/*760*/         OPC_EmitConvertToTarget, 1,
/*762*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2467:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TGET:i32 (imm:i32):$b)
/*770*/       /*Scope*/ 9, /*->780*/
/*771*/         OPC_EmitMergeInputChains1_0,
/*772*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2467:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TGETD:i32 GPR:i32:$b)
/*780*/       0, /*End of Scope*/
/*781*/     /*Scope*/ 37, /*->819*/
/*782*/       OPC_CheckInteger, 25|128,19/*2457*/, 
/*785*/       OPC_MoveParent,
/*786*/       OPC_RecordChild2, // #1 = $b
/*787*/       OPC_Scope, 19, /*->808*/ // 2 children in Scope
/*789*/         OPC_MoveChild, 2,
/*791*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*794*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*796*/         OPC_MoveParent,
/*797*/         OPC_EmitMergeInputChains1_0,
/*798*/         OPC_EmitConvertToTarget, 1,
/*800*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TAGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2457:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TAGET:i32 (imm:i32):$b)
/*808*/       /*Scope*/ 9, /*->818*/
/*809*/         OPC_EmitMergeInputChains1_0,
/*810*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TAGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2457:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TAGETD:i32 GPR:i32:$b)
/*818*/       0, /*End of Scope*/
/*819*/     /*Scope*/ 37, /*->857*/
/*820*/       OPC_CheckInteger, 29|128,19/*2461*/, 
/*823*/       OPC_MoveParent,
/*824*/       OPC_RecordChild2, // #1 = $b
/*825*/       OPC_Scope, 19, /*->846*/ // 2 children in Scope
/*827*/         OPC_MoveChild, 2,
/*829*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*832*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*834*/         OPC_MoveParent,
/*835*/         OPC_EmitMergeInputChains1_0,
/*836*/         OPC_EmitConvertToTarget, 1,
/*838*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TCGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2461:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TCGET:i32 (imm:i32):$b)
/*846*/       /*Scope*/ 9, /*->856*/
/*847*/         OPC_EmitMergeInputChains1_0,
/*848*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TCGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2461:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TCGETD:i32 GPR:i32:$b)
/*856*/       0, /*End of Scope*/
/*857*/     /*Scope*/ 37, /*->895*/
/*858*/       OPC_CheckInteger, 27|128,19/*2459*/, 
/*861*/       OPC_MoveParent,
/*862*/       OPC_RecordChild2, // #1 = $b
/*863*/       OPC_Scope, 19, /*->884*/ // 2 children in Scope
/*865*/         OPC_MoveChild, 2,
/*867*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*870*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*872*/         OPC_MoveParent,
/*873*/         OPC_EmitMergeInputChains1_0,
/*874*/         OPC_EmitConvertToTarget, 1,
/*876*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TCAGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2459:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TCAGET:i32 (imm:i32):$b)
/*884*/       /*Scope*/ 9, /*->894*/
/*885*/         OPC_EmitMergeInputChains1_0,
/*886*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TCAGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2459:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TCAGETD:i32 GPR:i32:$b)
/*894*/       0, /*End of Scope*/
/*895*/     /*Scope*/ 37, /*->933*/
/*896*/       OPC_CheckInteger, 34|128,19/*2466*/, 
/*899*/       OPC_MoveParent,
/*900*/       OPC_RecordChild2, // #1 = $b
/*901*/       OPC_Scope, 19, /*->922*/ // 2 children in Scope
/*903*/         OPC_MoveChild, 2,
/*905*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*908*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*910*/         OPC_MoveParent,
/*911*/         OPC_EmitMergeInputChains1_0,
/*912*/         OPC_EmitConvertToTarget, 1,
/*914*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TEGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2466:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TEGET:i32 (imm:i32):$b)
/*922*/       /*Scope*/ 9, /*->932*/
/*923*/         OPC_EmitMergeInputChains1_0,
/*924*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TEGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2466:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TEGETD:i32 GPR:i32:$b)
/*932*/       0, /*End of Scope*/
/*933*/     /*Scope*/ 37, /*->971*/
/*934*/       OPC_CheckInteger, 31|128,19/*2463*/, 
/*937*/       OPC_MoveParent,
/*938*/       OPC_RecordChild2, // #1 = $b
/*939*/       OPC_Scope, 19, /*->960*/ // 2 children in Scope
/*941*/         OPC_MoveChild, 2,
/*943*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*946*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*948*/         OPC_MoveParent,
/*949*/         OPC_EmitMergeInputChains1_0,
/*950*/         OPC_EmitConvertToTarget, 1,
/*952*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TEAGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2463:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TEAGET:i32 (imm:i32):$b)
/*960*/       /*Scope*/ 9, /*->970*/
/*961*/         OPC_EmitMergeInputChains1_0,
/*962*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TEAGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2463:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TEAGETD:i32 GPR:i32:$b)
/*970*/       0, /*End of Scope*/
/*971*/     /*Scope*/ 37, /*->1009*/
/*972*/       OPC_CheckInteger, 33|128,19/*2465*/, 
/*975*/       OPC_MoveParent,
/*976*/       OPC_RecordChild2, // #1 = $b
/*977*/       OPC_Scope, 19, /*->998*/ // 2 children in Scope
/*979*/         OPC_MoveChild, 2,
/*981*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*984*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*986*/         OPC_MoveParent,
/*987*/         OPC_EmitMergeInputChains1_0,
/*988*/         OPC_EmitConvertToTarget, 1,
/*990*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TECGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2465:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TECGET:i32 (imm:i32):$b)
/*998*/       /*Scope*/ 9, /*->1008*/
/*999*/         OPC_EmitMergeInputChains1_0,
/*1000*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TECGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2465:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TECGETD:i32 GPR:i32:$b)
/*1008*/      0, /*End of Scope*/
/*1009*/    /*Scope*/ 37, /*->1047*/
/*1010*/      OPC_CheckInteger, 32|128,19/*2464*/, 
/*1013*/      OPC_MoveParent,
/*1014*/      OPC_RecordChild2, // #1 = $b
/*1015*/      OPC_Scope, 19, /*->1036*/ // 2 children in Scope
/*1017*/        OPC_MoveChild, 2,
/*1019*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1022*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1024*/        OPC_MoveParent,
/*1025*/        OPC_EmitMergeInputChains1_0,
/*1026*/        OPC_EmitConvertToTarget, 1,
/*1028*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TECAGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2464:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TECAGET:i32 (imm:i32):$b)
/*1036*/      /*Scope*/ 9, /*->1046*/
/*1037*/        OPC_EmitMergeInputChains1_0,
/*1038*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TECAGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2464:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TECAGETD:i32 GPR:i32:$b)
/*1046*/      0, /*End of Scope*/
/*1047*/    /*Scope*/ 39, /*->1087*/
/*1048*/      OPC_CheckInteger, 22|128,19/*2454*/, 
/*1051*/      OPC_MoveParent,
/*1052*/      OPC_RecordChild2, // #1 = $b
/*1053*/      OPC_Scope, 20, /*->1075*/ // 2 children in Scope
/*1055*/        OPC_MoveChild, 2,
/*1057*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1060*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1062*/        OPC_MoveParent,
/*1063*/        OPC_EmitMergeInputChains1_0,
/*1064*/        OPC_EmitConvertToTarget, 1,
/*1066*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2454:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NGET:i32:i32 (imm:i32):$b)
/*1075*/      /*Scope*/ 10, /*->1086*/
/*1076*/        OPC_EmitMergeInputChains1_0,
/*1077*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2454:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (NGETD:i32:i32 GPR:i32:$b)
/*1086*/      0, /*End of Scope*/
/*1087*/    /*Scope*/ 39, /*->1127*/
/*1088*/      OPC_CheckInteger, 12|128,19/*2444*/, 
/*1091*/      OPC_MoveParent,
/*1092*/      OPC_RecordChild2, // #1 = $b
/*1093*/      OPC_Scope, 20, /*->1115*/ // 2 children in Scope
/*1095*/        OPC_MoveChild, 2,
/*1097*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1100*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1102*/        OPC_MoveParent,
/*1103*/        OPC_EmitMergeInputChains1_0,
/*1104*/        OPC_EmitConvertToTarget, 1,
/*1106*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NAGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2444:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NAGET:i32:i32 (imm:i32):$b)
/*1115*/      /*Scope*/ 10, /*->1126*/
/*1116*/        OPC_EmitMergeInputChains1_0,
/*1117*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NAGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2444:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (NAGETD:i32:i32 GPR:i32:$b)
/*1126*/      0, /*End of Scope*/
/*1127*/    /*Scope*/ 39, /*->1167*/
/*1128*/      OPC_CheckInteger, 16|128,19/*2448*/, 
/*1131*/      OPC_MoveParent,
/*1132*/      OPC_RecordChild2, // #1 = $b
/*1133*/      OPC_Scope, 20, /*->1155*/ // 2 children in Scope
/*1135*/        OPC_MoveChild, 2,
/*1137*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1140*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1142*/        OPC_MoveParent,
/*1143*/        OPC_EmitMergeInputChains1_0,
/*1144*/        OPC_EmitConvertToTarget, 1,
/*1146*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NCGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2448:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NCGET:i32:i32 (imm:i32):$b)
/*1155*/      /*Scope*/ 10, /*->1166*/
/*1156*/        OPC_EmitMergeInputChains1_0,
/*1157*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NCGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2448:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (NCGETD:i32:i32 GPR:i32:$b)
/*1166*/      0, /*End of Scope*/
/*1167*/    /*Scope*/ 39, /*->1207*/
/*1168*/      OPC_CheckInteger, 14|128,19/*2446*/, 
/*1171*/      OPC_MoveParent,
/*1172*/      OPC_RecordChild2, // #1 = $b
/*1173*/      OPC_Scope, 20, /*->1195*/ // 2 children in Scope
/*1175*/        OPC_MoveChild, 2,
/*1177*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1180*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1182*/        OPC_MoveParent,
/*1183*/        OPC_EmitMergeInputChains1_0,
/*1184*/        OPC_EmitConvertToTarget, 1,
/*1186*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NCAGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2446:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NCAGET:i32:i32 (imm:i32):$b)
/*1195*/      /*Scope*/ 10, /*->1206*/
/*1196*/        OPC_EmitMergeInputChains1_0,
/*1197*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NCAGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2446:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (NCAGETD:i32:i32 GPR:i32:$b)
/*1206*/      0, /*End of Scope*/
/*1207*/    /*Scope*/ 39, /*->1247*/
/*1208*/      OPC_CheckInteger, 21|128,19/*2453*/, 
/*1211*/      OPC_MoveParent,
/*1212*/      OPC_RecordChild2, // #1 = $b
/*1213*/      OPC_Scope, 20, /*->1235*/ // 2 children in Scope
/*1215*/        OPC_MoveChild, 2,
/*1217*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1220*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1222*/        OPC_MoveParent,
/*1223*/        OPC_EmitMergeInputChains1_0,
/*1224*/        OPC_EmitConvertToTarget, 1,
/*1226*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NEGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2453:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NEGET:i32:i32 (imm:i32):$b)
/*1235*/      /*Scope*/ 10, /*->1246*/
/*1236*/        OPC_EmitMergeInputChains1_0,
/*1237*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NEGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2453:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (NEGETD:i32:i32 GPR:i32:$b)
/*1246*/      0, /*End of Scope*/
/*1247*/    /*Scope*/ 39, /*->1287*/
/*1248*/      OPC_CheckInteger, 18|128,19/*2450*/, 
/*1251*/      OPC_MoveParent,
/*1252*/      OPC_RecordChild2, // #1 = $b
/*1253*/      OPC_Scope, 20, /*->1275*/ // 2 children in Scope
/*1255*/        OPC_MoveChild, 2,
/*1257*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1260*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1262*/        OPC_MoveParent,
/*1263*/        OPC_EmitMergeInputChains1_0,
/*1264*/        OPC_EmitConvertToTarget, 1,
/*1266*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NEAGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2450:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NEAGET:i32:i32 (imm:i32):$b)
/*1275*/      /*Scope*/ 10, /*->1286*/
/*1276*/        OPC_EmitMergeInputChains1_0,
/*1277*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NEAGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2450:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (NEAGETD:i32:i32 GPR:i32:$b)
/*1286*/      0, /*End of Scope*/
/*1287*/    /*Scope*/ 39, /*->1327*/
/*1288*/      OPC_CheckInteger, 20|128,19/*2452*/, 
/*1291*/      OPC_MoveParent,
/*1292*/      OPC_RecordChild2, // #1 = $b
/*1293*/      OPC_Scope, 20, /*->1315*/ // 2 children in Scope
/*1295*/        OPC_MoveChild, 2,
/*1297*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1300*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1302*/        OPC_MoveParent,
/*1303*/        OPC_EmitMergeInputChains1_0,
/*1304*/        OPC_EmitConvertToTarget, 1,
/*1306*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NECGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2452:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NECGET:i32:i32 (imm:i32):$b)
/*1315*/      /*Scope*/ 10, /*->1326*/
/*1316*/        OPC_EmitMergeInputChains1_0,
/*1317*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NECGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2452:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (NECGETD:i32:i32 GPR:i32:$b)
/*1326*/      0, /*End of Scope*/
/*1327*/    /*Scope*/ 39, /*->1367*/
/*1328*/      OPC_CheckInteger, 19|128,19/*2451*/, 
/*1331*/      OPC_MoveParent,
/*1332*/      OPC_RecordChild2, // #1 = $b
/*1333*/      OPC_Scope, 20, /*->1355*/ // 2 children in Scope
/*1335*/        OPC_MoveChild, 2,
/*1337*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1340*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1342*/        OPC_MoveParent,
/*1343*/        OPC_EmitMergeInputChains1_0,
/*1344*/        OPC_EmitConvertToTarget, 1,
/*1346*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NECAGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2451:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NECAGET:i32:i32 (imm:i32):$b)
/*1355*/      /*Scope*/ 10, /*->1366*/
/*1356*/        OPC_EmitMergeInputChains1_0,
/*1357*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NECAGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2451:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (NECAGETD:i32:i32 GPR:i32:$b)
/*1366*/      0, /*End of Scope*/
/*1367*/    /*Scope*/ 39, /*->1407*/
/*1368*/      OPC_CheckInteger, 46|128,19/*2478*/, 
/*1371*/      OPC_MoveParent,
/*1372*/      OPC_RecordChild2, // #1 = $b
/*1373*/      OPC_Scope, 20, /*->1395*/ // 2 children in Scope
/*1375*/        OPC_MoveChild, 2,
/*1377*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1380*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1382*/        OPC_MoveParent,
/*1383*/        OPC_EmitMergeInputChains1_0,
/*1384*/        OPC_EmitConvertToTarget, 1,
/*1386*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2478:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNGET:i32:i32 (imm:i32):$b)
/*1395*/      /*Scope*/ 10, /*->1406*/
/*1396*/        OPC_EmitMergeInputChains1_0,
/*1397*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2478:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNGETD:i32:i32 GPR:i32:$b)
/*1406*/      0, /*End of Scope*/
/*1407*/    /*Scope*/ 39, /*->1447*/
/*1408*/      OPC_CheckInteger, 36|128,19/*2468*/, 
/*1411*/      OPC_MoveParent,
/*1412*/      OPC_RecordChild2, // #1 = $b
/*1413*/      OPC_Scope, 20, /*->1435*/ // 2 children in Scope
/*1415*/        OPC_MoveChild, 2,
/*1417*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1420*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1422*/        OPC_MoveParent,
/*1423*/        OPC_EmitMergeInputChains1_0,
/*1424*/        OPC_EmitConvertToTarget, 1,
/*1426*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNAGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2468:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNAGET:i32:i32 (imm:i32):$b)
/*1435*/      /*Scope*/ 10, /*->1446*/
/*1436*/        OPC_EmitMergeInputChains1_0,
/*1437*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNAGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2468:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNAGETD:i32:i32 GPR:i32:$b)
/*1446*/      0, /*End of Scope*/
/*1447*/    /*Scope*/ 39, /*->1487*/
/*1448*/      OPC_CheckInteger, 40|128,19/*2472*/, 
/*1451*/      OPC_MoveParent,
/*1452*/      OPC_RecordChild2, // #1 = $b
/*1453*/      OPC_Scope, 20, /*->1475*/ // 2 children in Scope
/*1455*/        OPC_MoveChild, 2,
/*1457*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1460*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1462*/        OPC_MoveParent,
/*1463*/        OPC_EmitMergeInputChains1_0,
/*1464*/        OPC_EmitConvertToTarget, 1,
/*1466*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNCGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2472:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNCGET:i32:i32 (imm:i32):$b)
/*1475*/      /*Scope*/ 10, /*->1486*/
/*1476*/        OPC_EmitMergeInputChains1_0,
/*1477*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNCGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2472:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNCGETD:i32:i32 GPR:i32:$b)
/*1486*/      0, /*End of Scope*/
/*1487*/    /*Scope*/ 39, /*->1527*/
/*1488*/      OPC_CheckInteger, 38|128,19/*2470*/, 
/*1491*/      OPC_MoveParent,
/*1492*/      OPC_RecordChild2, // #1 = $b
/*1493*/      OPC_Scope, 20, /*->1515*/ // 2 children in Scope
/*1495*/        OPC_MoveChild, 2,
/*1497*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1500*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1502*/        OPC_MoveParent,
/*1503*/        OPC_EmitMergeInputChains1_0,
/*1504*/        OPC_EmitConvertToTarget, 1,
/*1506*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNCAGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2470:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNCAGET:i32:i32 (imm:i32):$b)
/*1515*/      /*Scope*/ 10, /*->1526*/
/*1516*/        OPC_EmitMergeInputChains1_0,
/*1517*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNCAGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2470:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNCAGETD:i32:i32 GPR:i32:$b)
/*1526*/      0, /*End of Scope*/
/*1527*/    /*Scope*/ 39, /*->1567*/
/*1528*/      OPC_CheckInteger, 45|128,19/*2477*/, 
/*1531*/      OPC_MoveParent,
/*1532*/      OPC_RecordChild2, // #1 = $b
/*1533*/      OPC_Scope, 20, /*->1555*/ // 2 children in Scope
/*1535*/        OPC_MoveChild, 2,
/*1537*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1540*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1542*/        OPC_MoveParent,
/*1543*/        OPC_EmitMergeInputChains1_0,
/*1544*/        OPC_EmitConvertToTarget, 1,
/*1546*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNEGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2477:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNEGET:i32:i32 (imm:i32):$b)
/*1555*/      /*Scope*/ 10, /*->1566*/
/*1556*/        OPC_EmitMergeInputChains1_0,
/*1557*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNEGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2477:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNEGETD:i32:i32 GPR:i32:$b)
/*1566*/      0, /*End of Scope*/
/*1567*/    /*Scope*/ 39, /*->1607*/
/*1568*/      OPC_CheckInteger, 42|128,19/*2474*/, 
/*1571*/      OPC_MoveParent,
/*1572*/      OPC_RecordChild2, // #1 = $b
/*1573*/      OPC_Scope, 20, /*->1595*/ // 2 children in Scope
/*1575*/        OPC_MoveChild, 2,
/*1577*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1580*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1582*/        OPC_MoveParent,
/*1583*/        OPC_EmitMergeInputChains1_0,
/*1584*/        OPC_EmitConvertToTarget, 1,
/*1586*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNEAGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2474:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNEAGET:i32:i32 (imm:i32):$b)
/*1595*/      /*Scope*/ 10, /*->1606*/
/*1596*/        OPC_EmitMergeInputChains1_0,
/*1597*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNEAGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2474:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNEAGETD:i32:i32 GPR:i32:$b)
/*1606*/      0, /*End of Scope*/
/*1607*/    /*Scope*/ 39, /*->1647*/
/*1608*/      OPC_CheckInteger, 44|128,19/*2476*/, 
/*1611*/      OPC_MoveParent,
/*1612*/      OPC_RecordChild2, // #1 = $b
/*1613*/      OPC_Scope, 20, /*->1635*/ // 2 children in Scope
/*1615*/        OPC_MoveChild, 2,
/*1617*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1620*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1622*/        OPC_MoveParent,
/*1623*/        OPC_EmitMergeInputChains1_0,
/*1624*/        OPC_EmitConvertToTarget, 1,
/*1626*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNECGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2476:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNECGET:i32:i32 (imm:i32):$b)
/*1635*/      /*Scope*/ 10, /*->1646*/
/*1636*/        OPC_EmitMergeInputChains1_0,
/*1637*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNECGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2476:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNECGETD:i32:i32 GPR:i32:$b)
/*1646*/      0, /*End of Scope*/
/*1647*/    /*Scope*/ 39, /*->1687*/
/*1648*/      OPC_CheckInteger, 43|128,19/*2475*/, 
/*1651*/      OPC_MoveParent,
/*1652*/      OPC_RecordChild2, // #1 = $b
/*1653*/      OPC_Scope, 20, /*->1675*/ // 2 children in Scope
/*1655*/        OPC_MoveChild, 2,
/*1657*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1660*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1662*/        OPC_MoveParent,
/*1663*/        OPC_EmitMergeInputChains1_0,
/*1664*/        OPC_EmitConvertToTarget, 1,
/*1666*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNECAGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2475:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNECAGET:i32:i32 (imm:i32):$b)
/*1675*/      /*Scope*/ 10, /*->1686*/
/*1676*/        OPC_EmitMergeInputChains1_0,
/*1677*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNECAGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2475:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNECAGETD:i32:i32 GPR:i32:$b)
/*1686*/      0, /*End of Scope*/
/*1687*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 109|128,4/*621*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->2313
/*1692*/    OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*1693*/    OPC_MoveChild, 1,
/*1695*/    OPC_Scope, 38, /*->1735*/ // 16 children in Scope
/*1697*/      OPC_CheckInteger, 24|128,19/*2456*/, 
/*1700*/      OPC_MoveParent,
/*1701*/      OPC_RecordChild2, // #1 = $v
/*1702*/      OPC_RecordChild3, // #2 = $b
/*1703*/      OPC_Scope, 19, /*->1724*/ // 2 children in Scope
/*1705*/        OPC_MoveChild, 3,
/*1707*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1710*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1712*/        OPC_MoveParent,
/*1713*/        OPC_EmitMergeInputChains1_0,
/*1714*/        OPC_EmitConvertToTarget, 2,
/*1716*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::PUT), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 2456:iPTR, GPR:i32:$v, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (PUT GPR:i32:$v, (imm:i32):$b)
/*1724*/      /*Scope*/ 9, /*->1734*/
/*1725*/        OPC_EmitMergeInputChains1_0,
/*1726*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::PUTD), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 2456:iPTR, GPR:i32:$v, GPR:i32:$b) - Complexity = 8
                // Dst: (PUTD GPR:i32:$v, GPR:i32:$b)
/*1734*/      0, /*End of Scope*/
/*1735*/    /*Scope*/ 38, /*->1774*/
/*1736*/      OPC_CheckInteger, 2|128,19/*2434*/, 
/*1739*/      OPC_MoveParent,
/*1740*/      OPC_RecordChild2, // #1 = $v
/*1741*/      OPC_RecordChild3, // #2 = $b
/*1742*/      OPC_Scope, 19, /*->1763*/ // 2 children in Scope
/*1744*/        OPC_MoveChild, 3,
/*1746*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1749*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1751*/        OPC_MoveParent,
/*1752*/        OPC_EmitMergeInputChains1_0,
/*1753*/        OPC_EmitConvertToTarget, 2,
/*1755*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::APUT), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 2434:iPTR, GPR:i32:$v, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (APUT GPR:i32:$v, (imm:i32):$b)
/*1763*/      /*Scope*/ 9, /*->1773*/
/*1764*/        OPC_EmitMergeInputChains1_0,
/*1765*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::APUTD), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 2434:iPTR, GPR:i32:$v, GPR:i32:$b) - Complexity = 8
                // Dst: (APUTD GPR:i32:$v, GPR:i32:$b)
/*1773*/      0, /*End of Scope*/
/*1774*/    /*Scope*/ 38, /*->1813*/
/*1775*/      OPC_CheckInteger, 6|128,19/*2438*/, 
/*1778*/      OPC_MoveParent,
/*1779*/      OPC_RecordChild2, // #1 = $v
/*1780*/      OPC_RecordChild3, // #2 = $b
/*1781*/      OPC_Scope, 19, /*->1802*/ // 2 children in Scope
/*1783*/        OPC_MoveChild, 3,
/*1785*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1788*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1790*/        OPC_MoveParent,
/*1791*/        OPC_EmitMergeInputChains1_0,
/*1792*/        OPC_EmitConvertToTarget, 2,
/*1794*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::CPUT), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 2438:iPTR, GPR:i32:$v, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (CPUT GPR:i32:$v, (imm:i32):$b)
/*1802*/      /*Scope*/ 9, /*->1812*/
/*1803*/        OPC_EmitMergeInputChains1_0,
/*1804*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::CPUTD), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 2438:iPTR, GPR:i32:$v, GPR:i32:$b) - Complexity = 8
                // Dst: (CPUTD GPR:i32:$v, GPR:i32:$b)
/*1812*/      0, /*End of Scope*/
/*1813*/    /*Scope*/ 38, /*->1852*/
/*1814*/      OPC_CheckInteger, 4|128,19/*2436*/, 
/*1817*/      OPC_MoveParent,
/*1818*/      OPC_RecordChild2, // #1 = $v
/*1819*/      OPC_RecordChild3, // #2 = $b
/*1820*/      OPC_Scope, 19, /*->1841*/ // 2 children in Scope
/*1822*/        OPC_MoveChild, 3,
/*1824*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1827*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1829*/        OPC_MoveParent,
/*1830*/        OPC_EmitMergeInputChains1_0,
/*1831*/        OPC_EmitConvertToTarget, 2,
/*1833*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::CAPUT), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 2436:iPTR, GPR:i32:$v, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (CAPUT GPR:i32:$v, (imm:i32):$b)
/*1841*/      /*Scope*/ 9, /*->1851*/
/*1842*/        OPC_EmitMergeInputChains1_0,
/*1843*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::CAPUTD), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 2436:iPTR, GPR:i32:$v, GPR:i32:$b) - Complexity = 8
                // Dst: (CAPUTD GPR:i32:$v, GPR:i32:$b)
/*1851*/      0, /*End of Scope*/
/*1852*/    /*Scope*/ 35, /*->1888*/
/*1853*/      OPC_CheckInteger, 48|128,19/*2480*/, 
/*1856*/      OPC_MoveParent,
/*1857*/      OPC_RecordChild2, // #1 = $b
/*1858*/      OPC_Scope, 18, /*->1878*/ // 2 children in Scope
/*1860*/        OPC_MoveChild, 2,
/*1862*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1865*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1867*/        OPC_MoveParent,
/*1868*/        OPC_EmitMergeInputChains1_0,
/*1869*/        OPC_EmitConvertToTarget, 1,
/*1871*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TPUT), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2480:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TPUT (imm:i32):$b)
/*1878*/      /*Scope*/ 8, /*->1887*/
/*1879*/        OPC_EmitMergeInputChains1_0,
/*1880*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TPUTD), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 2480:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TPUTD GPR:i32:$b)
/*1887*/      0, /*End of Scope*/
/*1888*/    /*Scope*/ 35, /*->1924*/
/*1889*/      OPC_CheckInteger, 26|128,19/*2458*/, 
/*1892*/      OPC_MoveParent,
/*1893*/      OPC_RecordChild2, // #1 = $b
/*1894*/      OPC_Scope, 18, /*->1914*/ // 2 children in Scope
/*1896*/        OPC_MoveChild, 2,
/*1898*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1901*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1903*/        OPC_MoveParent,
/*1904*/        OPC_EmitMergeInputChains1_0,
/*1905*/        OPC_EmitConvertToTarget, 1,
/*1907*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TAPUT), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2458:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TAPUT (imm:i32):$b)
/*1914*/      /*Scope*/ 8, /*->1923*/
/*1915*/        OPC_EmitMergeInputChains1_0,
/*1916*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TAPUTD), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 2458:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TAPUTD GPR:i32:$b)
/*1923*/      0, /*End of Scope*/
/*1924*/    /*Scope*/ 35, /*->1960*/
/*1925*/      OPC_CheckInteger, 30|128,19/*2462*/, 
/*1928*/      OPC_MoveParent,
/*1929*/      OPC_RecordChild2, // #1 = $b
/*1930*/      OPC_Scope, 18, /*->1950*/ // 2 children in Scope
/*1932*/        OPC_MoveChild, 2,
/*1934*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1937*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1939*/        OPC_MoveParent,
/*1940*/        OPC_EmitMergeInputChains1_0,
/*1941*/        OPC_EmitConvertToTarget, 1,
/*1943*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TCPUT), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2462:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TCPUT (imm:i32):$b)
/*1950*/      /*Scope*/ 8, /*->1959*/
/*1951*/        OPC_EmitMergeInputChains1_0,
/*1952*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TCPUTD), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 2462:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TCPUTD GPR:i32:$b)
/*1959*/      0, /*End of Scope*/
/*1960*/    /*Scope*/ 35, /*->1996*/
/*1961*/      OPC_CheckInteger, 28|128,19/*2460*/, 
/*1964*/      OPC_MoveParent,
/*1965*/      OPC_RecordChild2, // #1 = $b
/*1966*/      OPC_Scope, 18, /*->1986*/ // 2 children in Scope
/*1968*/        OPC_MoveChild, 2,
/*1970*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1973*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1975*/        OPC_MoveParent,
/*1976*/        OPC_EmitMergeInputChains1_0,
/*1977*/        OPC_EmitConvertToTarget, 1,
/*1979*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TCAPUT), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2460:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TCAPUT (imm:i32):$b)
/*1986*/      /*Scope*/ 8, /*->1995*/
/*1987*/        OPC_EmitMergeInputChains1_0,
/*1988*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TCAPUTD), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 2460:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TCAPUTD GPR:i32:$b)
/*1995*/      0, /*End of Scope*/
/*1996*/    /*Scope*/ 40, /*->2037*/
/*1997*/      OPC_CheckInteger, 23|128,19/*2455*/, 
/*2000*/      OPC_MoveParent,
/*2001*/      OPC_RecordChild2, // #1 = $v
/*2002*/      OPC_RecordChild3, // #2 = $b
/*2003*/      OPC_Scope, 20, /*->2025*/ // 2 children in Scope
/*2005*/        OPC_MoveChild, 3,
/*2007*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2010*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*2012*/        OPC_MoveParent,
/*2013*/        OPC_EmitMergeInputChains1_0,
/*2014*/        OPC_EmitConvertToTarget, 2,
/*2016*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NPUT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 2455:iPTR, GPR:i32:$v, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NPUT:i32 GPR:i32:$v, (imm:i32):$b)
/*2025*/      /*Scope*/ 10, /*->2036*/
/*2026*/        OPC_EmitMergeInputChains1_0,
/*2027*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NPUTD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 2455:iPTR, GPR:i32:$v, GPR:i32:$b) - Complexity = 8
                // Dst: (NPUTD:i32 GPR:i32:$v, GPR:i32:$b)
/*2036*/      0, /*End of Scope*/
/*2037*/    /*Scope*/ 40, /*->2078*/
/*2038*/      OPC_CheckInteger, 13|128,19/*2445*/, 
/*2041*/      OPC_MoveParent,
/*2042*/      OPC_RecordChild2, // #1 = $v
/*2043*/      OPC_RecordChild3, // #2 = $b
/*2044*/      OPC_Scope, 20, /*->2066*/ // 2 children in Scope
/*2046*/        OPC_MoveChild, 3,
/*2048*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2051*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*2053*/        OPC_MoveParent,
/*2054*/        OPC_EmitMergeInputChains1_0,
/*2055*/        OPC_EmitConvertToTarget, 2,
/*2057*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NAPUT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 2445:iPTR, GPR:i32:$v, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NAPUT:i32 GPR:i32:$v, (imm:i32):$b)
/*2066*/      /*Scope*/ 10, /*->2077*/
/*2067*/        OPC_EmitMergeInputChains1_0,
/*2068*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NAPUTD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 2445:iPTR, GPR:i32:$v, GPR:i32:$b) - Complexity = 8
                // Dst: (NAPUTD:i32 GPR:i32:$v, GPR:i32:$b)
/*2077*/      0, /*End of Scope*/
/*2078*/    /*Scope*/ 40, /*->2119*/
/*2079*/      OPC_CheckInteger, 17|128,19/*2449*/, 
/*2082*/      OPC_MoveParent,
/*2083*/      OPC_RecordChild2, // #1 = $v
/*2084*/      OPC_RecordChild3, // #2 = $b
/*2085*/      OPC_Scope, 20, /*->2107*/ // 2 children in Scope
/*2087*/        OPC_MoveChild, 3,
/*2089*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2092*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*2094*/        OPC_MoveParent,
/*2095*/        OPC_EmitMergeInputChains1_0,
/*2096*/        OPC_EmitConvertToTarget, 2,
/*2098*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NCPUT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 2449:iPTR, GPR:i32:$v, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NCPUT:i32 GPR:i32:$v, (imm:i32):$b)
/*2107*/      /*Scope*/ 10, /*->2118*/
/*2108*/        OPC_EmitMergeInputChains1_0,
/*2109*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NCPUTD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 2449:iPTR, GPR:i32:$v, GPR:i32:$b) - Complexity = 8
                // Dst: (NCPUTD:i32 GPR:i32:$v, GPR:i32:$b)
/*2118*/      0, /*End of Scope*/
/*2119*/    /*Scope*/ 40, /*->2160*/
/*2120*/      OPC_CheckInteger, 15|128,19/*2447*/, 
/*2123*/      OPC_MoveParent,
/*2124*/      OPC_RecordChild2, // #1 = $v
/*2125*/      OPC_RecordChild3, // #2 = $b
/*2126*/      OPC_Scope, 20, /*->2148*/ // 2 children in Scope
/*2128*/        OPC_MoveChild, 3,
/*2130*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2133*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*2135*/        OPC_MoveParent,
/*2136*/        OPC_EmitMergeInputChains1_0,
/*2137*/        OPC_EmitConvertToTarget, 2,
/*2139*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NCAPUT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 2447:iPTR, GPR:i32:$v, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NCAPUT:i32 GPR:i32:$v, (imm:i32):$b)
/*2148*/      /*Scope*/ 10, /*->2159*/
/*2149*/        OPC_EmitMergeInputChains1_0,
/*2150*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NCAPUTD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 2447:iPTR, GPR:i32:$v, GPR:i32:$b) - Complexity = 8
                // Dst: (NCAPUTD:i32 GPR:i32:$v, GPR:i32:$b)
/*2159*/      0, /*End of Scope*/
/*2160*/    /*Scope*/ 37, /*->2198*/
/*2161*/      OPC_CheckInteger, 47|128,19/*2479*/, 
/*2164*/      OPC_MoveParent,
/*2165*/      OPC_RecordChild2, // #1 = $b
/*2166*/      OPC_Scope, 19, /*->2187*/ // 2 children in Scope
/*2168*/        OPC_MoveChild, 2,
/*2170*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2173*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*2175*/        OPC_MoveParent,
/*2176*/        OPC_EmitMergeInputChains1_0,
/*2177*/        OPC_EmitConvertToTarget, 1,
/*2179*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNPUT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2479:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNPUT:i32 (imm:i32):$b)
/*2187*/      /*Scope*/ 9, /*->2197*/
/*2188*/        OPC_EmitMergeInputChains1_0,
/*2189*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNPUTD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 2479:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNPUTD:i32 GPR:i32:$b)
/*2197*/      0, /*End of Scope*/
/*2198*/    /*Scope*/ 37, /*->2236*/
/*2199*/      OPC_CheckInteger, 37|128,19/*2469*/, 
/*2202*/      OPC_MoveParent,
/*2203*/      OPC_RecordChild2, // #1 = $b
/*2204*/      OPC_Scope, 19, /*->2225*/ // 2 children in Scope
/*2206*/        OPC_MoveChild, 2,
/*2208*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2211*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*2213*/        OPC_MoveParent,
/*2214*/        OPC_EmitMergeInputChains1_0,
/*2215*/        OPC_EmitConvertToTarget, 1,
/*2217*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNAPUT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2469:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNAPUT:i32 (imm:i32):$b)
/*2225*/      /*Scope*/ 9, /*->2235*/
/*2226*/        OPC_EmitMergeInputChains1_0,
/*2227*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNAPUTD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 2469:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNAPUTD:i32 GPR:i32:$b)
/*2235*/      0, /*End of Scope*/
/*2236*/    /*Scope*/ 37, /*->2274*/
/*2237*/      OPC_CheckInteger, 41|128,19/*2473*/, 
/*2240*/      OPC_MoveParent,
/*2241*/      OPC_RecordChild2, // #1 = $b
/*2242*/      OPC_Scope, 19, /*->2263*/ // 2 children in Scope
/*2244*/        OPC_MoveChild, 2,
/*2246*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2249*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*2251*/        OPC_MoveParent,
/*2252*/        OPC_EmitMergeInputChains1_0,
/*2253*/        OPC_EmitConvertToTarget, 1,
/*2255*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNCPUT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2473:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNCPUT:i32 (imm:i32):$b)
/*2263*/      /*Scope*/ 9, /*->2273*/
/*2264*/        OPC_EmitMergeInputChains1_0,
/*2265*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNCPUTD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 2473:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNCPUTD:i32 GPR:i32:$b)
/*2273*/      0, /*End of Scope*/
/*2274*/    /*Scope*/ 37, /*->2312*/
/*2275*/      OPC_CheckInteger, 39|128,19/*2471*/, 
/*2278*/      OPC_MoveParent,
/*2279*/      OPC_RecordChild2, // #1 = $b
/*2280*/      OPC_Scope, 19, /*->2301*/ // 2 children in Scope
/*2282*/        OPC_MoveChild, 2,
/*2284*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2287*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*2289*/        OPC_MoveParent,
/*2290*/        OPC_EmitMergeInputChains1_0,
/*2291*/        OPC_EmitConvertToTarget, 1,
/*2293*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNCAPUT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2471:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNCAPUT:i32 (imm:i32):$b)
/*2301*/      /*Scope*/ 9, /*->2311*/
/*2302*/        OPC_EmitMergeInputChains1_0,
/*2303*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNCAPUTD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 2471:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNCAPUTD:i32 GPR:i32:$b)
/*2311*/      0, /*End of Scope*/
/*2312*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 8|128,7/*904*/,  TARGET_VAL(ISD::BRCOND),// ->3221
/*2317*/    OPC_RecordNode,   // #0 = 'brcond' chained node
/*2318*/    OPC_Scope, 113|128,6/*881*/, /*->3202*/ // 2 children in Scope
/*2321*/      OPC_MoveChild, 1,
/*2323*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*2326*/      OPC_Scope, 8|128,1/*136*/, /*->2465*/ // 5 children in Scope
/*2329*/        OPC_RecordChild0, // #1 = $L
/*2330*/        OPC_MoveChild, 1,
/*2332*/        OPC_CheckInteger, 0, 
/*2334*/        OPC_MoveParent,
/*2335*/        OPC_MoveChild, 2,
/*2337*/        OPC_Scope, 20, /*->2359*/ // 6 children in Scope
/*2339*/          OPC_CheckCondCode, ISD::SETEQ,
/*2341*/          OPC_MoveParent,
/*2342*/          OPC_MoveParent,
/*2343*/          OPC_RecordChild2, // #2 = $T
/*2344*/          OPC_MoveChild, 2,
/*2346*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2349*/          OPC_MoveParent,
/*2350*/          OPC_EmitMergeInputChains1_0,
/*2351*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BEQID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, 0:i32, SETEQ:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BEQID GPR:i32:$L, (bb:Other):$T)
/*2359*/        /*Scope*/ 20, /*->2380*/
/*2360*/          OPC_CheckCondCode, ISD::SETNE,
/*2362*/          OPC_MoveParent,
/*2363*/          OPC_MoveParent,
/*2364*/          OPC_RecordChild2, // #2 = $T
/*2365*/          OPC_MoveChild, 2,
/*2367*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2370*/          OPC_MoveParent,
/*2371*/          OPC_EmitMergeInputChains1_0,
/*2372*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BNEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, 0:i32, SETNE:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BNEID GPR:i32:$L, (bb:Other):$T)
/*2380*/        /*Scope*/ 20, /*->2401*/
/*2381*/          OPC_CheckCondCode, ISD::SETGT,
/*2383*/          OPC_MoveParent,
/*2384*/          OPC_MoveParent,
/*2385*/          OPC_RecordChild2, // #2 = $T
/*2386*/          OPC_MoveChild, 2,
/*2388*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2391*/          OPC_MoveParent,
/*2392*/          OPC_EmitMergeInputChains1_0,
/*2393*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGTID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, 0:i32, SETGT:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BGTID GPR:i32:$L, (bb:Other):$T)
/*2401*/        /*Scope*/ 20, /*->2422*/
/*2402*/          OPC_CheckCondCode, ISD::SETLT,
/*2404*/          OPC_MoveParent,
/*2405*/          OPC_MoveParent,
/*2406*/          OPC_RecordChild2, // #2 = $T
/*2407*/          OPC_MoveChild, 2,
/*2409*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2412*/          OPC_MoveParent,
/*2413*/          OPC_EmitMergeInputChains1_0,
/*2414*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLTID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, 0:i32, SETLT:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BLTID GPR:i32:$L, (bb:Other):$T)
/*2422*/        /*Scope*/ 20, /*->2443*/
/*2423*/          OPC_CheckCondCode, ISD::SETGE,
/*2425*/          OPC_MoveParent,
/*2426*/          OPC_MoveParent,
/*2427*/          OPC_RecordChild2, // #2 = $T
/*2428*/          OPC_MoveChild, 2,
/*2430*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2433*/          OPC_MoveParent,
/*2434*/          OPC_EmitMergeInputChains1_0,
/*2435*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, 0:i32, SETGE:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BGEID GPR:i32:$L, (bb:Other):$T)
/*2443*/        /*Scope*/ 20, /*->2464*/
/*2444*/          OPC_CheckCondCode, ISD::SETLE,
/*2446*/          OPC_MoveParent,
/*2447*/          OPC_MoveParent,
/*2448*/          OPC_RecordChild2, // #2 = $T
/*2449*/          OPC_MoveChild, 2,
/*2451*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2454*/          OPC_MoveParent,
/*2455*/          OPC_EmitMergeInputChains1_0,
/*2456*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, 0:i32, SETLE:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BLEID GPR:i32:$L, (bb:Other):$T)
/*2464*/        0, /*End of Scope*/
/*2465*/      /*Scope*/ 8|128,1/*136*/, /*->2603*/
/*2467*/        OPC_MoveChild, 0,
/*2469*/        OPC_CheckInteger, 0, 
/*2471*/        OPC_MoveParent,
/*2472*/        OPC_RecordChild1, // #1 = $R
/*2473*/        OPC_MoveChild, 2,
/*2475*/        OPC_Scope, 20, /*->2497*/ // 6 children in Scope
/*2477*/          OPC_CheckCondCode, ISD::SETEQ,
/*2479*/          OPC_MoveParent,
/*2480*/          OPC_MoveParent,
/*2481*/          OPC_RecordChild2, // #2 = $T
/*2482*/          OPC_MoveChild, 2,
/*2484*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2487*/          OPC_MoveParent,
/*2488*/          OPC_EmitMergeInputChains1_0,
/*2489*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BEQID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 0:i32, GPR:i32:$R, SETEQ:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BEQID GPR:i32:$R, (bb:Other):$T)
/*2497*/        /*Scope*/ 20, /*->2518*/
/*2498*/          OPC_CheckCondCode, ISD::SETNE,
/*2500*/          OPC_MoveParent,
/*2501*/          OPC_MoveParent,
/*2502*/          OPC_RecordChild2, // #2 = $T
/*2503*/          OPC_MoveChild, 2,
/*2505*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2508*/          OPC_MoveParent,
/*2509*/          OPC_EmitMergeInputChains1_0,
/*2510*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BNEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 0:i32, GPR:i32:$R, SETNE:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BNEID GPR:i32:$R, (bb:Other):$T)
/*2518*/        /*Scope*/ 20, /*->2539*/
/*2519*/          OPC_CheckCondCode, ISD::SETGT,
/*2521*/          OPC_MoveParent,
/*2522*/          OPC_MoveParent,
/*2523*/          OPC_RecordChild2, // #2 = $T
/*2524*/          OPC_MoveChild, 2,
/*2526*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2529*/          OPC_MoveParent,
/*2530*/          OPC_EmitMergeInputChains1_0,
/*2531*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGTID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 0:i32, GPR:i32:$R, SETGT:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BGTID GPR:i32:$R, (bb:Other):$T)
/*2539*/        /*Scope*/ 20, /*->2560*/
/*2540*/          OPC_CheckCondCode, ISD::SETLT,
/*2542*/          OPC_MoveParent,
/*2543*/          OPC_MoveParent,
/*2544*/          OPC_RecordChild2, // #2 = $T
/*2545*/          OPC_MoveChild, 2,
/*2547*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2550*/          OPC_MoveParent,
/*2551*/          OPC_EmitMergeInputChains1_0,
/*2552*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLTID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 0:i32, GPR:i32:$R, SETLT:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BLTID GPR:i32:$R, (bb:Other):$T)
/*2560*/        /*Scope*/ 20, /*->2581*/
/*2561*/          OPC_CheckCondCode, ISD::SETGE,
/*2563*/          OPC_MoveParent,
/*2564*/          OPC_MoveParent,
/*2565*/          OPC_RecordChild2, // #2 = $T
/*2566*/          OPC_MoveChild, 2,
/*2568*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2571*/          OPC_MoveParent,
/*2572*/          OPC_EmitMergeInputChains1_0,
/*2573*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 0:i32, GPR:i32:$R, SETGE:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BGEID GPR:i32:$R, (bb:Other):$T)
/*2581*/        /*Scope*/ 20, /*->2602*/
/*2582*/          OPC_CheckCondCode, ISD::SETLE,
/*2584*/          OPC_MoveParent,
/*2585*/          OPC_MoveParent,
/*2586*/          OPC_RecordChild2, // #2 = $T
/*2587*/          OPC_MoveChild, 2,
/*2589*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2592*/          OPC_MoveParent,
/*2593*/          OPC_EmitMergeInputChains1_0,
/*2594*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 0:i32, GPR:i32:$R, SETLE:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BLEID GPR:i32:$R, (bb:Other):$T)
/*2602*/        0, /*End of Scope*/
/*2603*/      /*Scope*/ 14|128,1/*142*/, /*->2747*/
/*2605*/        OPC_RecordChild0, // #1 = $L
/*2606*/        OPC_MoveChild, 1,
/*2608*/        OPC_CheckInteger, 0, 
/*2610*/        OPC_MoveParent,
/*2611*/        OPC_MoveChild, 2,
/*2613*/        OPC_Scope, 32, /*->2647*/ // 4 children in Scope
/*2615*/          OPC_CheckCondCode, ISD::SETUGT,
/*2617*/          OPC_MoveParent,
/*2618*/          OPC_MoveParent,
/*2619*/          OPC_RecordChild2, // #2 = $T
/*2620*/          OPC_MoveChild, 2,
/*2622*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2625*/          OPC_MoveParent,
/*2626*/          OPC_EmitMergeInputChains1_0,
/*2627*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*2630*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 1,  // Results = #4
/*2639*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGTID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 2, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, 0:i32, SETUGT:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BGTID (CMPU:i32 R0:i32, GPR:i32:$L), (bb:Other):$T)
/*2647*/        /*Scope*/ 32, /*->2680*/
/*2648*/          OPC_CheckCondCode, ISD::SETULT,
/*2650*/          OPC_MoveParent,
/*2651*/          OPC_MoveParent,
/*2652*/          OPC_RecordChild2, // #2 = $T
/*2653*/          OPC_MoveChild, 2,
/*2655*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2658*/          OPC_MoveParent,
/*2659*/          OPC_EmitMergeInputChains1_0,
/*2660*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*2663*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 1,  // Results = #4
/*2672*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLTID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 2, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, 0:i32, SETULT:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BLTID (CMPU:i32 R0:i32, GPR:i32:$L), (bb:Other):$T)
/*2680*/        /*Scope*/ 32, /*->2713*/
/*2681*/          OPC_CheckCondCode, ISD::SETUGE,
/*2683*/          OPC_MoveParent,
/*2684*/          OPC_MoveParent,
/*2685*/          OPC_RecordChild2, // #2 = $T
/*2686*/          OPC_MoveChild, 2,
/*2688*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2691*/          OPC_MoveParent,
/*2692*/          OPC_EmitMergeInputChains1_0,
/*2693*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*2696*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 1,  // Results = #4
/*2705*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 2, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, 0:i32, SETUGE:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BGEID (CMPU:i32 R0:i32, GPR:i32:$L), (bb:Other):$T)
/*2713*/        /*Scope*/ 32, /*->2746*/
/*2714*/          OPC_CheckCondCode, ISD::SETULE,
/*2716*/          OPC_MoveParent,
/*2717*/          OPC_MoveParent,
/*2718*/          OPC_RecordChild2, // #2 = $T
/*2719*/          OPC_MoveChild, 2,
/*2721*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2724*/          OPC_MoveParent,
/*2725*/          OPC_EmitMergeInputChains1_0,
/*2726*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*2729*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 1,  // Results = #4
/*2738*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 2, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, 0:i32, SETULE:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BLEID (CMPU:i32 R0:i32, GPR:i32:$L), (bb:Other):$T)
/*2746*/        0, /*End of Scope*/
/*2747*/      /*Scope*/ 14|128,1/*142*/, /*->2891*/
/*2749*/        OPC_MoveChild, 0,
/*2751*/        OPC_CheckInteger, 0, 
/*2753*/        OPC_MoveParent,
/*2754*/        OPC_RecordChild1, // #1 = $R
/*2755*/        OPC_MoveChild, 2,
/*2757*/        OPC_Scope, 32, /*->2791*/ // 4 children in Scope
/*2759*/          OPC_CheckCondCode, ISD::SETUGT,
/*2761*/          OPC_MoveParent,
/*2762*/          OPC_MoveParent,
/*2763*/          OPC_RecordChild2, // #2 = $T
/*2764*/          OPC_MoveChild, 2,
/*2766*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2769*/          OPC_MoveParent,
/*2770*/          OPC_EmitMergeInputChains1_0,
/*2771*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*2774*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4
/*2783*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGTID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 2, 
                  // Src: (brcond (setcc:i32 0:i32, GPR:i32:$R, SETUGT:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BGTID (CMPU:i32 GPR:i32:$R, R0:i32), (bb:Other):$T)
/*2791*/        /*Scope*/ 32, /*->2824*/
/*2792*/          OPC_CheckCondCode, ISD::SETULT,
/*2794*/          OPC_MoveParent,
/*2795*/          OPC_MoveParent,
/*2796*/          OPC_RecordChild2, // #2 = $T
/*2797*/          OPC_MoveChild, 2,
/*2799*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2802*/          OPC_MoveParent,
/*2803*/          OPC_EmitMergeInputChains1_0,
/*2804*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*2807*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4
/*2816*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLTID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 2, 
                  // Src: (brcond (setcc:i32 0:i32, GPR:i32:$R, SETULT:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BLTID (CMPU:i32 GPR:i32:$R, R0:i32), (bb:Other):$T)
/*2824*/        /*Scope*/ 32, /*->2857*/
/*2825*/          OPC_CheckCondCode, ISD::SETUGE,
/*2827*/          OPC_MoveParent,
/*2828*/          OPC_MoveParent,
/*2829*/          OPC_RecordChild2, // #2 = $T
/*2830*/          OPC_MoveChild, 2,
/*2832*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2835*/          OPC_MoveParent,
/*2836*/          OPC_EmitMergeInputChains1_0,
/*2837*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*2840*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4
/*2849*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 2, 
                  // Src: (brcond (setcc:i32 0:i32, GPR:i32:$R, SETUGE:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BGEID (CMPU:i32 GPR:i32:$R, R0:i32), (bb:Other):$T)
/*2857*/        /*Scope*/ 32, /*->2890*/
/*2858*/          OPC_CheckCondCode, ISD::SETULE,
/*2860*/          OPC_MoveParent,
/*2861*/          OPC_MoveParent,
/*2862*/          OPC_RecordChild2, // #2 = $T
/*2863*/          OPC_MoveChild, 2,
/*2865*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2868*/          OPC_MoveParent,
/*2869*/          OPC_EmitMergeInputChains1_0,
/*2870*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*2873*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4
/*2882*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 2, 
                  // Src: (brcond (setcc:i32 0:i32, GPR:i32:$R, SETULE:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BLEID (CMPU:i32 GPR:i32:$R, R0:i32), (bb:Other):$T)
/*2890*/        0, /*End of Scope*/
/*2891*/      /*Scope*/ 52|128,2/*308*/, /*->3201*/
/*2893*/        OPC_RecordChild0, // #1 = $L
/*2894*/        OPC_CheckChild0Type, MVT::i32,
/*2896*/        OPC_RecordChild1, // #2 = $R
/*2897*/        OPC_MoveChild, 2,
/*2899*/        OPC_Scope, 29, /*->2930*/ // 10 children in Scope
/*2901*/          OPC_CheckCondCode, ISD::SETEQ,
/*2903*/          OPC_MoveParent,
/*2904*/          OPC_MoveParent,
/*2905*/          OPC_RecordChild2, // #3 = $T
/*2906*/          OPC_MoveChild, 2,
/*2908*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2911*/          OPC_MoveParent,
/*2912*/          OPC_EmitMergeInputChains1_0,
/*2913*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*2922*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BEQID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETEQ:Other), (bb:Other):$T) - Complexity = 6
                  // Dst: (BEQID (CMP:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*2930*/        /*Scope*/ 29, /*->2960*/
/*2931*/          OPC_CheckCondCode, ISD::SETNE,
/*2933*/          OPC_MoveParent,
/*2934*/          OPC_MoveParent,
/*2935*/          OPC_RecordChild2, // #3 = $T
/*2936*/          OPC_MoveChild, 2,
/*2938*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2941*/          OPC_MoveParent,
/*2942*/          OPC_EmitMergeInputChains1_0,
/*2943*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*2952*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BNEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETNE:Other), (bb:Other):$T) - Complexity = 6
                  // Dst: (BNEID (CMP:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*2960*/        /*Scope*/ 29, /*->2990*/
/*2961*/          OPC_CheckCondCode, ISD::SETGT,
/*2963*/          OPC_MoveParent,
/*2964*/          OPC_MoveParent,
/*2965*/          OPC_RecordChild2, // #3 = $T
/*2966*/          OPC_MoveChild, 2,
/*2968*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2971*/          OPC_MoveParent,
/*2972*/          OPC_EmitMergeInputChains1_0,
/*2973*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*2982*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGTID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETGT:Other), (bb:Other):$T) - Complexity = 6
                  // Dst: (BGTID (CMP:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*2990*/        /*Scope*/ 29, /*->3020*/
/*2991*/          OPC_CheckCondCode, ISD::SETLT,
/*2993*/          OPC_MoveParent,
/*2994*/          OPC_MoveParent,
/*2995*/          OPC_RecordChild2, // #3 = $T
/*2996*/          OPC_MoveChild, 2,
/*2998*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3001*/          OPC_MoveParent,
/*3002*/          OPC_EmitMergeInputChains1_0,
/*3003*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*3012*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLTID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETLT:Other), (bb:Other):$T) - Complexity = 6
                  // Dst: (BLTID (CMP:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*3020*/        /*Scope*/ 29, /*->3050*/
/*3021*/          OPC_CheckCondCode, ISD::SETGE,
/*3023*/          OPC_MoveParent,
/*3024*/          OPC_MoveParent,
/*3025*/          OPC_RecordChild2, // #3 = $T
/*3026*/          OPC_MoveChild, 2,
/*3028*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3031*/          OPC_MoveParent,
/*3032*/          OPC_EmitMergeInputChains1_0,
/*3033*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*3042*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETGE:Other), (bb:Other):$T) - Complexity = 6
                  // Dst: (BGEID (CMP:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*3050*/        /*Scope*/ 29, /*->3080*/
/*3051*/          OPC_CheckCondCode, ISD::SETLE,
/*3053*/          OPC_MoveParent,
/*3054*/          OPC_MoveParent,
/*3055*/          OPC_RecordChild2, // #3 = $T
/*3056*/          OPC_MoveChild, 2,
/*3058*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3061*/          OPC_MoveParent,
/*3062*/          OPC_EmitMergeInputChains1_0,
/*3063*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*3072*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETLE:Other), (bb:Other):$T) - Complexity = 6
                  // Dst: (BLEID (CMP:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*3080*/        /*Scope*/ 29, /*->3110*/
/*3081*/          OPC_CheckCondCode, ISD::SETUGT,
/*3083*/          OPC_MoveParent,
/*3084*/          OPC_MoveParent,
/*3085*/          OPC_RecordChild2, // #3 = $T
/*3086*/          OPC_MoveChild, 2,
/*3088*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3091*/          OPC_MoveParent,
/*3092*/          OPC_EmitMergeInputChains1_0,
/*3093*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*3102*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGTID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETUGT:Other), (bb:Other):$T) - Complexity = 6
                  // Dst: (BGTID (CMPU:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*3110*/        /*Scope*/ 29, /*->3140*/
/*3111*/          OPC_CheckCondCode, ISD::SETULT,
/*3113*/          OPC_MoveParent,
/*3114*/          OPC_MoveParent,
/*3115*/          OPC_RecordChild2, // #3 = $T
/*3116*/          OPC_MoveChild, 2,
/*3118*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3121*/          OPC_MoveParent,
/*3122*/          OPC_EmitMergeInputChains1_0,
/*3123*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*3132*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLTID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETULT:Other), (bb:Other):$T) - Complexity = 6
                  // Dst: (BLTID (CMPU:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*3140*/        /*Scope*/ 29, /*->3170*/
/*3141*/          OPC_CheckCondCode, ISD::SETUGE,
/*3143*/          OPC_MoveParent,
/*3144*/          OPC_MoveParent,
/*3145*/          OPC_RecordChild2, // #3 = $T
/*3146*/          OPC_MoveChild, 2,
/*3148*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3151*/          OPC_MoveParent,
/*3152*/          OPC_EmitMergeInputChains1_0,
/*3153*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*3162*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETUGE:Other), (bb:Other):$T) - Complexity = 6
                  // Dst: (BGEID (CMPU:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*3170*/        /*Scope*/ 29, /*->3200*/
/*3171*/          OPC_CheckCondCode, ISD::SETULE,
/*3173*/          OPC_MoveParent,
/*3174*/          OPC_MoveParent,
/*3175*/          OPC_RecordChild2, // #3 = $T
/*3176*/          OPC_MoveChild, 2,
/*3178*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3181*/          OPC_MoveParent,
/*3182*/          OPC_EmitMergeInputChains1_0,
/*3183*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*3192*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETULE:Other), (bb:Other):$T) - Complexity = 6
                  // Dst: (BLEID (CMPU:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*3200*/        0, /*End of Scope*/
/*3201*/      0, /*End of Scope*/
/*3202*/    /*Scope*/ 17, /*->3220*/
/*3203*/      OPC_RecordChild1, // #1 = $C
/*3204*/      OPC_RecordChild2, // #2 = $T
/*3205*/      OPC_MoveChild, 2,
/*3207*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3210*/      OPC_MoveParent,
/*3211*/      OPC_EmitMergeInputChains1_0,
/*3212*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::BNEID), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (brcond GPR:i32:$C, (bb:Other):$T) - Complexity = 3
              // Dst: (BNEID GPR:i32:$C, (bb:Other):$T)
/*3220*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 101,  TARGET_VAL(ISD::AND),// ->3325
/*3224*/    OPC_Scope, 31, /*->3257*/ // 3 children in Scope
/*3226*/      OPC_RecordChild0, // #0 = $lh
/*3227*/      OPC_MoveChild, 1,
/*3229*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3232*/      OPC_RecordChild0, // #1 = $rh
/*3233*/      OPC_MoveChild, 1,
/*3235*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3246*/      OPC_MoveParent,
/*3247*/      OPC_MoveParent,
/*3248*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ANDN), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (and:i32 GPR:i32:$lh, (xor:i32 GPR:i32:$rh, -1:i32)) - Complexity = 11
              // Dst: (ANDN:i32 GPR:i32:$lh, GPR:i32:$rh)
/*3257*/    /*Scope*/ 31, /*->3289*/
/*3258*/      OPC_MoveChild, 0,
/*3260*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3263*/      OPC_RecordChild0, // #0 = $rh
/*3264*/      OPC_MoveChild, 1,
/*3266*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3277*/      OPC_MoveParent,
/*3278*/      OPC_MoveParent,
/*3279*/      OPC_RecordChild1, // #1 = $lh
/*3280*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ANDN), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (and:i32 (xor:i32 GPR:i32:$rh, -1:i32), GPR:i32:$lh) - Complexity = 11
              // Dst: (ANDN:i32 GPR:i32:$lh, GPR:i32:$rh)
/*3289*/    /*Scope*/ 34, /*->3324*/
/*3290*/      OPC_RecordChild0, // #0 = $b
/*3291*/      OPC_RecordChild1, // #1 = $c
/*3292*/      OPC_Scope, 19, /*->3313*/ // 2 children in Scope
/*3294*/        OPC_MoveChild, 1,
/*3296*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3299*/        OPC_CheckPredicate, 14, // Predicate_immZExt16
/*3301*/        OPC_MoveParent,
/*3302*/        OPC_EmitConvertToTarget, 1,
/*3304*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::ANDI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (and:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immZExt16>>:$c) - Complexity = 7
                // Dst: (ANDI:i32 GPR:i32:$b, (imm:i32):$c)
/*3313*/      /*Scope*/ 9, /*->3323*/
/*3314*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::AND), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
                // Dst: (AND:i32 GPR:i32:$b, GPR:i32:$c)
/*3323*/      0, /*End of Scope*/
/*3324*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::CALLSEQ_END),// ->3353
/*3328*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*3329*/    OPC_CaptureGlueInput,
/*3330*/    OPC_RecordChild1, // #1 = $amt1
/*3331*/    OPC_MoveChild, 1,
/*3333*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3336*/    OPC_MoveParent,
/*3337*/    OPC_RecordChild2, // #2 = $amt2
/*3338*/    OPC_MoveChild, 2,
/*3340*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3343*/    OPC_MoveParent,
/*3344*/    OPC_EmitMergeInputChains1_0,
/*3345*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 20,  TARGET_VAL(ISD::ATOMIC_FENCE),// ->3376
/*3356*/    OPC_RecordNode,   // #0 = 'atomic_fence' chained node
/*3357*/    OPC_MoveChild, 1,
/*3359*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3362*/    OPC_MoveParent,
/*3363*/    OPC_MoveChild, 2,
/*3365*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3368*/    OPC_MoveParent,
/*3369*/    OPC_EmitMergeInputChains1_0,
/*3370*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::MEMBARRIER), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (atomic_fence (imm:i32), (imm:i32)) - Complexity = 9
            // Dst: (MEMBARRIER)
          /*SwitchOpcode*/ 88|128,6/*856*/,  TARGET_VAL(ISD::SELECT_CC),// ->4236
/*3380*/    OPC_Scope, 4|128,1/*132*/, /*->3515*/ // 5 children in Scope
/*3383*/      OPC_RecordChild0, // #0 = $L
/*3384*/      OPC_MoveChild, 1,
/*3386*/      OPC_CheckInteger, 0, 
/*3388*/      OPC_MoveParent,
/*3389*/      OPC_RecordChild2, // #1 = $T
/*3390*/      OPC_RecordChild3, // #2 = $F
/*3391*/      OPC_MoveChild, 4,
/*3393*/      OPC_Scope, 19, /*->3414*/ // 6 children in Scope
/*3395*/        OPC_CheckCondCode, ISD::SETEQ,
/*3397*/        OPC_MoveParent,
/*3398*/        OPC_CheckType, MVT::i32,
/*3400*/        OPC_EmitInteger, MVT::i32, 1, 
/*3403*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
                // Src: (selectcc:i32 GPR:i32:$L, 0:i32, GPR:i32:$T, GPR:i32:$F, SETEQ:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$L, 1:i32)
/*3414*/      /*Scope*/ 19, /*->3434*/
/*3415*/        OPC_CheckCondCode, ISD::SETNE,
/*3417*/        OPC_MoveParent,
/*3418*/        OPC_CheckType, MVT::i32,
/*3420*/        OPC_EmitInteger, MVT::i32, 2, 
/*3423*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
                // Src: (selectcc:i32 GPR:i32:$L, 0:i32, GPR:i32:$T, GPR:i32:$F, SETNE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$L, 2:i32)
/*3434*/      /*Scope*/ 19, /*->3454*/
/*3435*/        OPC_CheckCondCode, ISD::SETGT,
/*3437*/        OPC_MoveParent,
/*3438*/        OPC_CheckType, MVT::i32,
/*3440*/        OPC_EmitInteger, MVT::i32, 3, 
/*3443*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
                // Src: (selectcc:i32 GPR:i32:$L, 0:i32, GPR:i32:$T, GPR:i32:$F, SETGT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$L, 3:i32)
/*3454*/      /*Scope*/ 19, /*->3474*/
/*3455*/        OPC_CheckCondCode, ISD::SETLT,
/*3457*/        OPC_MoveParent,
/*3458*/        OPC_CheckType, MVT::i32,
/*3460*/        OPC_EmitInteger, MVT::i32, 4, 
/*3463*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
                // Src: (selectcc:i32 GPR:i32:$L, 0:i32, GPR:i32:$T, GPR:i32:$F, SETLT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$L, 4:i32)
/*3474*/      /*Scope*/ 19, /*->3494*/
/*3475*/        OPC_CheckCondCode, ISD::SETGE,
/*3477*/        OPC_MoveParent,
/*3478*/        OPC_CheckType, MVT::i32,
/*3480*/        OPC_EmitInteger, MVT::i32, 5, 
/*3483*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
                // Src: (selectcc:i32 GPR:i32:$L, 0:i32, GPR:i32:$T, GPR:i32:$F, SETGE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$L, 5:i32)
/*3494*/      /*Scope*/ 19, /*->3514*/
/*3495*/        OPC_CheckCondCode, ISD::SETLE,
/*3497*/        OPC_MoveParent,
/*3498*/        OPC_CheckType, MVT::i32,
/*3500*/        OPC_EmitInteger, MVT::i32, 6, 
/*3503*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
                // Src: (selectcc:i32 GPR:i32:$L, 0:i32, GPR:i32:$T, GPR:i32:$F, SETLE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$L, 6:i32)
/*3514*/      0, /*End of Scope*/
/*3515*/    /*Scope*/ 4|128,1/*132*/, /*->3649*/
/*3517*/      OPC_MoveChild, 0,
/*3519*/      OPC_CheckInteger, 0, 
/*3521*/      OPC_MoveParent,
/*3522*/      OPC_RecordChild1, // #0 = $R
/*3523*/      OPC_RecordChild2, // #1 = $T
/*3524*/      OPC_RecordChild3, // #2 = $F
/*3525*/      OPC_MoveChild, 4,
/*3527*/      OPC_Scope, 19, /*->3548*/ // 6 children in Scope
/*3529*/        OPC_CheckCondCode, ISD::SETEQ,
/*3531*/        OPC_MoveParent,
/*3532*/        OPC_CheckType, MVT::i32,
/*3534*/        OPC_EmitInteger, MVT::i32, 1, 
/*3537*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
                // Src: (selectcc:i32 0:i32, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETEQ:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$R, 1:i32)
/*3548*/      /*Scope*/ 19, /*->3568*/
/*3549*/        OPC_CheckCondCode, ISD::SETNE,
/*3551*/        OPC_MoveParent,
/*3552*/        OPC_CheckType, MVT::i32,
/*3554*/        OPC_EmitInteger, MVT::i32, 2, 
/*3557*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
                // Src: (selectcc:i32 0:i32, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETNE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$R, 2:i32)
/*3568*/      /*Scope*/ 19, /*->3588*/
/*3569*/        OPC_CheckCondCode, ISD::SETGT,
/*3571*/        OPC_MoveParent,
/*3572*/        OPC_CheckType, MVT::i32,
/*3574*/        OPC_EmitInteger, MVT::i32, 3, 
/*3577*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
                // Src: (selectcc:i32 0:i32, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETGT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$R, 3:i32)
/*3588*/      /*Scope*/ 19, /*->3608*/
/*3589*/        OPC_CheckCondCode, ISD::SETLT,
/*3591*/        OPC_MoveParent,
/*3592*/        OPC_CheckType, MVT::i32,
/*3594*/        OPC_EmitInteger, MVT::i32, 4, 
/*3597*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
                // Src: (selectcc:i32 0:i32, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETLT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$R, 4:i32)
/*3608*/      /*Scope*/ 19, /*->3628*/
/*3609*/        OPC_CheckCondCode, ISD::SETGE,
/*3611*/        OPC_MoveParent,
/*3612*/        OPC_CheckType, MVT::i32,
/*3614*/        OPC_EmitInteger, MVT::i32, 5, 
/*3617*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
                // Src: (selectcc:i32 0:i32, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETGE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$R, 5:i32)
/*3628*/      /*Scope*/ 19, /*->3648*/
/*3629*/        OPC_CheckCondCode, ISD::SETLE,
/*3631*/        OPC_MoveParent,
/*3632*/        OPC_CheckType, MVT::i32,
/*3634*/        OPC_EmitInteger, MVT::i32, 6, 
/*3637*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
                // Src: (selectcc:i32 0:i32, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETLE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$R, 6:i32)
/*3648*/      0, /*End of Scope*/
/*3649*/    /*Scope*/ 12|128,1/*140*/, /*->3791*/
/*3651*/      OPC_RecordChild0, // #0 = $L
/*3652*/      OPC_MoveChild, 1,
/*3654*/      OPC_CheckInteger, 0, 
/*3656*/      OPC_MoveParent,
/*3657*/      OPC_RecordChild2, // #1 = $T
/*3658*/      OPC_RecordChild3, // #2 = $F
/*3659*/      OPC_MoveChild, 4,
/*3661*/      OPC_Scope, 31, /*->3694*/ // 4 children in Scope
/*3663*/        OPC_CheckCondCode, ISD::SETUGT,
/*3665*/        OPC_MoveParent,
/*3666*/        OPC_CheckType, MVT::i32,
/*3668*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*3671*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 0,  // Results = #4
/*3680*/        OPC_EmitInteger, MVT::i32, 3, 
/*3683*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, 0:i32, GPR:i32:$T, GPR:i32:$F, SETUGT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 R0:i32, GPR:i32:$L), 3:i32)
/*3694*/      /*Scope*/ 31, /*->3726*/
/*3695*/        OPC_CheckCondCode, ISD::SETULT,
/*3697*/        OPC_MoveParent,
/*3698*/        OPC_CheckType, MVT::i32,
/*3700*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*3703*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 0,  // Results = #4
/*3712*/        OPC_EmitInteger, MVT::i32, 4, 
/*3715*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, 0:i32, GPR:i32:$T, GPR:i32:$F, SETULT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 R0:i32, GPR:i32:$L), 4:i32)
/*3726*/      /*Scope*/ 31, /*->3758*/
/*3727*/        OPC_CheckCondCode, ISD::SETUGE,
/*3729*/        OPC_MoveParent,
/*3730*/        OPC_CheckType, MVT::i32,
/*3732*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*3735*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 0,  // Results = #4
/*3744*/        OPC_EmitInteger, MVT::i32, 5, 
/*3747*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, 0:i32, GPR:i32:$T, GPR:i32:$F, SETUGE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 R0:i32, GPR:i32:$L), 5:i32)
/*3758*/      /*Scope*/ 31, /*->3790*/
/*3759*/        OPC_CheckCondCode, ISD::SETULE,
/*3761*/        OPC_MoveParent,
/*3762*/        OPC_CheckType, MVT::i32,
/*3764*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*3767*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 0,  // Results = #4
/*3776*/        OPC_EmitInteger, MVT::i32, 6, 
/*3779*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, 0:i32, GPR:i32:$T, GPR:i32:$F, SETULE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 R0:i32, GPR:i32:$L), 6:i32)
/*3790*/      0, /*End of Scope*/
/*3791*/    /*Scope*/ 12|128,1/*140*/, /*->3933*/
/*3793*/      OPC_MoveChild, 0,
/*3795*/      OPC_CheckInteger, 0, 
/*3797*/      OPC_MoveParent,
/*3798*/      OPC_RecordChild1, // #0 = $R
/*3799*/      OPC_RecordChild2, // #1 = $T
/*3800*/      OPC_RecordChild3, // #2 = $F
/*3801*/      OPC_MoveChild, 4,
/*3803*/      OPC_Scope, 31, /*->3836*/ // 4 children in Scope
/*3805*/        OPC_CheckCondCode, ISD::SETUGT,
/*3807*/        OPC_MoveParent,
/*3808*/        OPC_CheckType, MVT::i32,
/*3810*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*3813*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*3822*/        OPC_EmitInteger, MVT::i32, 3, 
/*3825*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 4, 5, 
                // Src: (selectcc:i32 0:i32, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETUGT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 GPR:i32:$R, R0:i32), 3:i32)
/*3836*/      /*Scope*/ 31, /*->3868*/
/*3837*/        OPC_CheckCondCode, ISD::SETULT,
/*3839*/        OPC_MoveParent,
/*3840*/        OPC_CheckType, MVT::i32,
/*3842*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*3845*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*3854*/        OPC_EmitInteger, MVT::i32, 4, 
/*3857*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 4, 5, 
                // Src: (selectcc:i32 0:i32, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETULT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 GPR:i32:$R, R0:i32), 4:i32)
/*3868*/      /*Scope*/ 31, /*->3900*/
/*3869*/        OPC_CheckCondCode, ISD::SETUGE,
/*3871*/        OPC_MoveParent,
/*3872*/        OPC_CheckType, MVT::i32,
/*3874*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*3877*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*3886*/        OPC_EmitInteger, MVT::i32, 5, 
/*3889*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 4, 5, 
                // Src: (selectcc:i32 0:i32, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETUGE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 GPR:i32:$R, R0:i32), 5:i32)
/*3900*/      /*Scope*/ 31, /*->3932*/
/*3901*/        OPC_CheckCondCode, ISD::SETULE,
/*3903*/        OPC_MoveParent,
/*3904*/        OPC_CheckType, MVT::i32,
/*3906*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*3909*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*3918*/        OPC_EmitInteger, MVT::i32, 6, 
/*3921*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 4, 5, 
                // Src: (selectcc:i32 0:i32, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETULE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 GPR:i32:$R, R0:i32), 6:i32)
/*3932*/      0, /*End of Scope*/
/*3933*/    /*Scope*/ 44|128,2/*300*/, /*->4235*/
/*3935*/      OPC_RecordChild0, // #0 = $L
/*3936*/      OPC_CheckChild0Type, MVT::i32,
/*3938*/      OPC_RecordChild1, // #1 = $R
/*3939*/      OPC_RecordChild2, // #2 = $T
/*3940*/      OPC_RecordChild3, // #3 = $F
/*3941*/      OPC_MoveChild, 4,
/*3943*/      OPC_Scope, 28, /*->3973*/ // 10 children in Scope
/*3945*/        OPC_CheckCondCode, ISD::SETEQ,
/*3947*/        OPC_MoveParent,
/*3948*/        OPC_CheckType, MVT::i32,
/*3950*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*3959*/        OPC_EmitInteger, MVT::i32, 1, 
/*3962*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETEQ:Other) - Complexity = 3
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMP:i32 GPR:i32:$R, GPR:i32:$L), 1:i32)
/*3973*/      /*Scope*/ 28, /*->4002*/
/*3974*/        OPC_CheckCondCode, ISD::SETNE,
/*3976*/        OPC_MoveParent,
/*3977*/        OPC_CheckType, MVT::i32,
/*3979*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*3988*/        OPC_EmitInteger, MVT::i32, 2, 
/*3991*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETNE:Other) - Complexity = 3
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMP:i32 GPR:i32:$R, GPR:i32:$L), 2:i32)
/*4002*/      /*Scope*/ 28, /*->4031*/
/*4003*/        OPC_CheckCondCode, ISD::SETGT,
/*4005*/        OPC_MoveParent,
/*4006*/        OPC_CheckType, MVT::i32,
/*4008*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*4017*/        OPC_EmitInteger, MVT::i32, 3, 
/*4020*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETGT:Other) - Complexity = 3
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMP:i32 GPR:i32:$R, GPR:i32:$L), 3:i32)
/*4031*/      /*Scope*/ 28, /*->4060*/
/*4032*/        OPC_CheckCondCode, ISD::SETLT,
/*4034*/        OPC_MoveParent,
/*4035*/        OPC_CheckType, MVT::i32,
/*4037*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*4046*/        OPC_EmitInteger, MVT::i32, 4, 
/*4049*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETLT:Other) - Complexity = 3
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMP:i32 GPR:i32:$R, GPR:i32:$L), 4:i32)
/*4060*/      /*Scope*/ 28, /*->4089*/
/*4061*/        OPC_CheckCondCode, ISD::SETGE,
/*4063*/        OPC_MoveParent,
/*4064*/        OPC_CheckType, MVT::i32,
/*4066*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*4075*/        OPC_EmitInteger, MVT::i32, 5, 
/*4078*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETGE:Other) - Complexity = 3
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMP:i32 GPR:i32:$R, GPR:i32:$L), 5:i32)
/*4089*/      /*Scope*/ 28, /*->4118*/
/*4090*/        OPC_CheckCondCode, ISD::SETLE,
/*4092*/        OPC_MoveParent,
/*4093*/        OPC_CheckType, MVT::i32,
/*4095*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*4104*/        OPC_EmitInteger, MVT::i32, 6, 
/*4107*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETLE:Other) - Complexity = 3
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMP:i32 GPR:i32:$R, GPR:i32:$L), 6:i32)
/*4118*/      /*Scope*/ 28, /*->4147*/
/*4119*/        OPC_CheckCondCode, ISD::SETUGT,
/*4121*/        OPC_MoveParent,
/*4122*/        OPC_CheckType, MVT::i32,
/*4124*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*4133*/        OPC_EmitInteger, MVT::i32, 3, 
/*4136*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETUGT:Other) - Complexity = 3
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 GPR:i32:$R, GPR:i32:$L), 3:i32)
/*4147*/      /*Scope*/ 28, /*->4176*/
/*4148*/        OPC_CheckCondCode, ISD::SETULT,
/*4150*/        OPC_MoveParent,
/*4151*/        OPC_CheckType, MVT::i32,
/*4153*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*4162*/        OPC_EmitInteger, MVT::i32, 4, 
/*4165*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETULT:Other) - Complexity = 3
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 GPR:i32:$R, GPR:i32:$L), 4:i32)
/*4176*/      /*Scope*/ 28, /*->4205*/
/*4177*/        OPC_CheckCondCode, ISD::SETUGE,
/*4179*/        OPC_MoveParent,
/*4180*/        OPC_CheckType, MVT::i32,
/*4182*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*4191*/        OPC_EmitInteger, MVT::i32, 5, 
/*4194*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETUGE:Other) - Complexity = 3
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 GPR:i32:$R, GPR:i32:$L), 5:i32)
/*4205*/      /*Scope*/ 28, /*->4234*/
/*4206*/        OPC_CheckCondCode, ISD::SETULE,
/*4208*/        OPC_MoveParent,
/*4209*/        OPC_CheckType, MVT::i32,
/*4211*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*4220*/        OPC_EmitInteger, MVT::i32, 6, 
/*4223*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETULE:Other) - Complexity = 3
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 GPR:i32:$R, GPR:i32:$L), 6:i32)
/*4234*/      0, /*End of Scope*/
/*4235*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 70|128,23/*3014*/,  TARGET_VAL(ISD::SETCC),// ->7254
/*4240*/    OPC_Scope, 42|128,2/*298*/, /*->4541*/ // 5 children in Scope
/*4243*/      OPC_RecordChild0, // #0 = $L
/*4244*/      OPC_MoveChild, 1,
/*4246*/      OPC_CheckInteger, 0, 
/*4248*/      OPC_MoveParent,
/*4249*/      OPC_MoveChild, 2,
/*4251*/      OPC_Scope, 47, /*->4300*/ // 6 children in Scope
/*4253*/        OPC_CheckCondCode, ISD::SETEQ,
/*4255*/        OPC_MoveParent,
/*4256*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4259*/        OPC_EmitInteger, MVT::i32, 1, 
/*4262*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4271*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4274*/        OPC_EmitInteger, MVT::i32, 0, 
/*4277*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4286*/        OPC_EmitInteger, MVT::i32, 1, 
/*4289*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 0, 7, 
                // Src: (setcc:i32 GPR:i32:$L, 0:i32, SETEQ:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), GPR:i32:$L, 1:i32)
/*4300*/      /*Scope*/ 47, /*->4348*/
/*4301*/        OPC_CheckCondCode, ISD::SETNE,
/*4303*/        OPC_MoveParent,
/*4304*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4307*/        OPC_EmitInteger, MVT::i32, 1, 
/*4310*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4319*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4322*/        OPC_EmitInteger, MVT::i32, 0, 
/*4325*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4334*/        OPC_EmitInteger, MVT::i32, 2, 
/*4337*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 0, 7, 
                // Src: (setcc:i32 GPR:i32:$L, 0:i32, SETNE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), GPR:i32:$L, 2:i32)
/*4348*/      /*Scope*/ 47, /*->4396*/
/*4349*/        OPC_CheckCondCode, ISD::SETGT,
/*4351*/        OPC_MoveParent,
/*4352*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4355*/        OPC_EmitInteger, MVT::i32, 1, 
/*4358*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4367*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4370*/        OPC_EmitInteger, MVT::i32, 0, 
/*4373*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4382*/        OPC_EmitInteger, MVT::i32, 3, 
/*4385*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 0, 7, 
                // Src: (setcc:i32 GPR:i32:$L, 0:i32, SETGT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), GPR:i32:$L, 3:i32)
/*4396*/      /*Scope*/ 47, /*->4444*/
/*4397*/        OPC_CheckCondCode, ISD::SETLT,
/*4399*/        OPC_MoveParent,
/*4400*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4403*/        OPC_EmitInteger, MVT::i32, 1, 
/*4406*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4415*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4418*/        OPC_EmitInteger, MVT::i32, 0, 
/*4421*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4430*/        OPC_EmitInteger, MVT::i32, 4, 
/*4433*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 0, 7, 
                // Src: (setcc:i32 GPR:i32:$L, 0:i32, SETLT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), GPR:i32:$L, 4:i32)
/*4444*/      /*Scope*/ 47, /*->4492*/
/*4445*/        OPC_CheckCondCode, ISD::SETGE,
/*4447*/        OPC_MoveParent,
/*4448*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4451*/        OPC_EmitInteger, MVT::i32, 1, 
/*4454*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4463*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4466*/        OPC_EmitInteger, MVT::i32, 0, 
/*4469*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4478*/        OPC_EmitInteger, MVT::i32, 5, 
/*4481*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 0, 7, 
                // Src: (setcc:i32 GPR:i32:$L, 0:i32, SETGE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), GPR:i32:$L, 5:i32)
/*4492*/      /*Scope*/ 47, /*->4540*/
/*4493*/        OPC_CheckCondCode, ISD::SETLE,
/*4495*/        OPC_MoveParent,
/*4496*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4499*/        OPC_EmitInteger, MVT::i32, 1, 
/*4502*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4511*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4514*/        OPC_EmitInteger, MVT::i32, 0, 
/*4517*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4526*/        OPC_EmitInteger, MVT::i32, 6, 
/*4529*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 0, 7, 
                // Src: (setcc:i32 GPR:i32:$L, 0:i32, SETLE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), GPR:i32:$L, 6:i32)
/*4540*/      0, /*End of Scope*/
/*4541*/    /*Scope*/ 42|128,2/*298*/, /*->4841*/
/*4543*/      OPC_MoveChild, 0,
/*4545*/      OPC_CheckInteger, 0, 
/*4547*/      OPC_MoveParent,
/*4548*/      OPC_RecordChild1, // #0 = $R
/*4549*/      OPC_MoveChild, 2,
/*4551*/      OPC_Scope, 47, /*->4600*/ // 6 children in Scope
/*4553*/        OPC_CheckCondCode, ISD::SETEQ,
/*4555*/        OPC_MoveParent,
/*4556*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4559*/        OPC_EmitInteger, MVT::i32, 1, 
/*4562*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4571*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4574*/        OPC_EmitInteger, MVT::i32, 0, 
/*4577*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4586*/        OPC_EmitInteger, MVT::i32, 1, 
/*4589*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 0, 7, 
                // Src: (setcc:i32 0:i32, GPR:i32:$R, SETEQ:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), GPR:i32:$R, 1:i32)
/*4600*/      /*Scope*/ 47, /*->4648*/
/*4601*/        OPC_CheckCondCode, ISD::SETNE,
/*4603*/        OPC_MoveParent,
/*4604*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4607*/        OPC_EmitInteger, MVT::i32, 1, 
/*4610*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4619*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4622*/        OPC_EmitInteger, MVT::i32, 0, 
/*4625*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4634*/        OPC_EmitInteger, MVT::i32, 2, 
/*4637*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 0, 7, 
                // Src: (setcc:i32 0:i32, GPR:i32:$R, SETNE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), GPR:i32:$R, 2:i32)
/*4648*/      /*Scope*/ 47, /*->4696*/
/*4649*/        OPC_CheckCondCode, ISD::SETGT,
/*4651*/        OPC_MoveParent,
/*4652*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4655*/        OPC_EmitInteger, MVT::i32, 1, 
/*4658*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4667*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4670*/        OPC_EmitInteger, MVT::i32, 0, 
/*4673*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4682*/        OPC_EmitInteger, MVT::i32, 3, 
/*4685*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 0, 7, 
                // Src: (setcc:i32 0:i32, GPR:i32:$R, SETGT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), GPR:i32:$R, 3:i32)
/*4696*/      /*Scope*/ 47, /*->4744*/
/*4697*/        OPC_CheckCondCode, ISD::SETLT,
/*4699*/        OPC_MoveParent,
/*4700*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4703*/        OPC_EmitInteger, MVT::i32, 1, 
/*4706*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4715*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4718*/        OPC_EmitInteger, MVT::i32, 0, 
/*4721*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4730*/        OPC_EmitInteger, MVT::i32, 4, 
/*4733*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 0, 7, 
                // Src: (setcc:i32 0:i32, GPR:i32:$R, SETLT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), GPR:i32:$R, 4:i32)
/*4744*/      /*Scope*/ 47, /*->4792*/
/*4745*/        OPC_CheckCondCode, ISD::SETGE,
/*4747*/        OPC_MoveParent,
/*4748*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4751*/        OPC_EmitInteger, MVT::i32, 1, 
/*4754*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4763*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4766*/        OPC_EmitInteger, MVT::i32, 0, 
/*4769*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4778*/        OPC_EmitInteger, MVT::i32, 5, 
/*4781*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 0, 7, 
                // Src: (setcc:i32 0:i32, GPR:i32:$R, SETGE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), GPR:i32:$R, 5:i32)
/*4792*/      /*Scope*/ 47, /*->4840*/
/*4793*/        OPC_CheckCondCode, ISD::SETLE,
/*4795*/        OPC_MoveParent,
/*4796*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4799*/        OPC_EmitInteger, MVT::i32, 1, 
/*4802*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4811*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4814*/        OPC_EmitInteger, MVT::i32, 0, 
/*4817*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4826*/        OPC_EmitInteger, MVT::i32, 6, 
/*4829*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 0, 7, 
                // Src: (setcc:i32 0:i32, GPR:i32:$R, SETLE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), GPR:i32:$R, 6:i32)
/*4840*/      0, /*End of Scope*/
/*4841*/    /*Scope*/ 122|128,1/*250*/, /*->5093*/
/*4843*/      OPC_RecordChild0, // #0 = $L
/*4844*/      OPC_MoveChild, 1,
/*4846*/      OPC_CheckInteger, 0, 
/*4848*/      OPC_MoveParent,
/*4849*/      OPC_MoveChild, 2,
/*4851*/      OPC_Scope, 59, /*->4912*/ // 4 children in Scope
/*4853*/        OPC_CheckCondCode, ISD::SETUGT,
/*4855*/        OPC_MoveParent,
/*4856*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4859*/        OPC_EmitInteger, MVT::i32, 1, 
/*4862*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4871*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4874*/        OPC_EmitInteger, MVT::i32, 0, 
/*4877*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4886*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4889*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 7, 0,  // Results = #8
/*4898*/        OPC_EmitInteger, MVT::i32, 3, 
/*4901*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 8, 9, 
                // Src: (setcc:i32 GPR:i32:$L, 0:i32, SETUGT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 R0:i32, GPR:i32:$L), 3:i32)
/*4912*/      /*Scope*/ 59, /*->4972*/
/*4913*/        OPC_CheckCondCode, ISD::SETULT,
/*4915*/        OPC_MoveParent,
/*4916*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4919*/        OPC_EmitInteger, MVT::i32, 1, 
/*4922*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4931*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4934*/        OPC_EmitInteger, MVT::i32, 0, 
/*4937*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4946*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4949*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 7, 0,  // Results = #8
/*4958*/        OPC_EmitInteger, MVT::i32, 4, 
/*4961*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 8, 9, 
                // Src: (setcc:i32 GPR:i32:$L, 0:i32, SETULT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 R0:i32, GPR:i32:$L), 4:i32)
/*4972*/      /*Scope*/ 59, /*->5032*/
/*4973*/        OPC_CheckCondCode, ISD::SETUGE,
/*4975*/        OPC_MoveParent,
/*4976*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4979*/        OPC_EmitInteger, MVT::i32, 1, 
/*4982*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4991*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4994*/        OPC_EmitInteger, MVT::i32, 0, 
/*4997*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*5006*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5009*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 7, 0,  // Results = #8
/*5018*/        OPC_EmitInteger, MVT::i32, 5, 
/*5021*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 8, 9, 
                // Src: (setcc:i32 GPR:i32:$L, 0:i32, SETUGE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 R0:i32, GPR:i32:$L), 5:i32)
/*5032*/      /*Scope*/ 59, /*->5092*/
/*5033*/        OPC_CheckCondCode, ISD::SETULE,
/*5035*/        OPC_MoveParent,
/*5036*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5039*/        OPC_EmitInteger, MVT::i32, 1, 
/*5042*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*5051*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5054*/        OPC_EmitInteger, MVT::i32, 0, 
/*5057*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*5066*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5069*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 7, 0,  // Results = #8
/*5078*/        OPC_EmitInteger, MVT::i32, 6, 
/*5081*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 8, 9, 
                // Src: (setcc:i32 GPR:i32:$L, 0:i32, SETULE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 R0:i32, GPR:i32:$L), 6:i32)
/*5092*/      0, /*End of Scope*/
/*5093*/    /*Scope*/ 122|128,1/*250*/, /*->5345*/
/*5095*/      OPC_MoveChild, 0,
/*5097*/      OPC_CheckInteger, 0, 
/*5099*/      OPC_MoveParent,
/*5100*/      OPC_RecordChild1, // #0 = $R
/*5101*/      OPC_MoveChild, 2,
/*5103*/      OPC_Scope, 59, /*->5164*/ // 4 children in Scope
/*5105*/        OPC_CheckCondCode, ISD::SETUGT,
/*5107*/        OPC_MoveParent,
/*5108*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5111*/        OPC_EmitInteger, MVT::i32, 1, 
/*5114*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*5123*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5126*/        OPC_EmitInteger, MVT::i32, 0, 
/*5129*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*5138*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5141*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 7,  // Results = #8
/*5150*/        OPC_EmitInteger, MVT::i32, 3, 
/*5153*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 8, 9, 
                // Src: (setcc:i32 0:i32, GPR:i32:$R, SETUGT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 GPR:i32:$R, R0:i32), 3:i32)
/*5164*/      /*Scope*/ 59, /*->5224*/
/*5165*/        OPC_CheckCondCode, ISD::SETULT,
/*5167*/        OPC_MoveParent,
/*5168*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5171*/        OPC_EmitInteger, MVT::i32, 1, 
/*5174*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*5183*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5186*/        OPC_EmitInteger, MVT::i32, 0, 
/*5189*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*5198*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5201*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 7,  // Results = #8
/*5210*/        OPC_EmitInteger, MVT::i32, 4, 
/*5213*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 8, 9, 
                // Src: (setcc:i32 0:i32, GPR:i32:$R, SETULT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 GPR:i32:$R, R0:i32), 4:i32)
/*5224*/      /*Scope*/ 59, /*->5284*/
/*5225*/        OPC_CheckCondCode, ISD::SETUGE,
/*5227*/        OPC_MoveParent,
/*5228*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5231*/        OPC_EmitInteger, MVT::i32, 1, 
/*5234*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*5243*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5246*/        OPC_EmitInteger, MVT::i32, 0, 
/*5249*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*5258*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5261*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 7,  // Results = #8
/*5270*/        OPC_EmitInteger, MVT::i32, 5, 
/*5273*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 8, 9, 
                // Src: (setcc:i32 0:i32, GPR:i32:$R, SETUGE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 GPR:i32:$R, R0:i32), 5:i32)
/*5284*/      /*Scope*/ 59, /*->5344*/
/*5285*/        OPC_CheckCondCode, ISD::SETULE,
/*5287*/        OPC_MoveParent,
/*5288*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5291*/        OPC_EmitInteger, MVT::i32, 1, 
/*5294*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*5303*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5306*/        OPC_EmitInteger, MVT::i32, 0, 
/*5309*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*5318*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5321*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 7,  // Results = #8
/*5330*/        OPC_EmitInteger, MVT::i32, 6, 
/*5333*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 8, 9, 
                // Src: (setcc:i32 0:i32, GPR:i32:$R, SETULE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 GPR:i32:$R, R0:i32), 6:i32)
/*5344*/      0, /*End of Scope*/
/*5345*/    /*Scope*/ 114|128,14/*1906*/, /*->7253*/
/*5347*/      OPC_RecordChild0, // #0 = $L
/*5348*/      OPC_Scope, 65|128,4/*577*/, /*->5928*/ // 2 children in Scope
/*5351*/        OPC_CheckChild0Type, MVT::i32,
/*5353*/        OPC_RecordChild1, // #1 = $R
/*5354*/        OPC_MoveChild, 2,
/*5356*/        OPC_Scope, 56, /*->5414*/ // 10 children in Scope
/*5358*/          OPC_CheckCondCode, ISD::SETEQ,
/*5360*/          OPC_MoveParent,
/*5361*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5364*/          OPC_EmitInteger, MVT::i32, 1, 
/*5367*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*5376*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5379*/          OPC_EmitInteger, MVT::i32, 0, 
/*5382*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*5391*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8
/*5400*/          OPC_EmitInteger, MVT::i32, 1, 
/*5403*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETEQ:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMP:i32 GPR:i32:$R, GPR:i32:$L), 1:i32)
/*5414*/        /*Scope*/ 56, /*->5471*/
/*5415*/          OPC_CheckCondCode, ISD::SETNE,
/*5417*/          OPC_MoveParent,
/*5418*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5421*/          OPC_EmitInteger, MVT::i32, 1, 
/*5424*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*5433*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5436*/          OPC_EmitInteger, MVT::i32, 0, 
/*5439*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*5448*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8
/*5457*/          OPC_EmitInteger, MVT::i32, 2, 
/*5460*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETNE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMP:i32 GPR:i32:$R, GPR:i32:$L), 2:i32)
/*5471*/        /*Scope*/ 56, /*->5528*/
/*5472*/          OPC_CheckCondCode, ISD::SETGT,
/*5474*/          OPC_MoveParent,
/*5475*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5478*/          OPC_EmitInteger, MVT::i32, 1, 
/*5481*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*5490*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5493*/          OPC_EmitInteger, MVT::i32, 0, 
/*5496*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*5505*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8
/*5514*/          OPC_EmitInteger, MVT::i32, 3, 
/*5517*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETGT:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMP:i32 GPR:i32:$R, GPR:i32:$L), 3:i32)
/*5528*/        /*Scope*/ 56, /*->5585*/
/*5529*/          OPC_CheckCondCode, ISD::SETLT,
/*5531*/          OPC_MoveParent,
/*5532*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5535*/          OPC_EmitInteger, MVT::i32, 1, 
/*5538*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*5547*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5550*/          OPC_EmitInteger, MVT::i32, 0, 
/*5553*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*5562*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8
/*5571*/          OPC_EmitInteger, MVT::i32, 4, 
/*5574*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETLT:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMP:i32 GPR:i32:$R, GPR:i32:$L), 4:i32)
/*5585*/        /*Scope*/ 56, /*->5642*/
/*5586*/          OPC_CheckCondCode, ISD::SETGE,
/*5588*/          OPC_MoveParent,
/*5589*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5592*/          OPC_EmitInteger, MVT::i32, 1, 
/*5595*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*5604*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5607*/          OPC_EmitInteger, MVT::i32, 0, 
/*5610*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*5619*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8
/*5628*/          OPC_EmitInteger, MVT::i32, 5, 
/*5631*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETGE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMP:i32 GPR:i32:$R, GPR:i32:$L), 5:i32)
/*5642*/        /*Scope*/ 56, /*->5699*/
/*5643*/          OPC_CheckCondCode, ISD::SETLE,
/*5645*/          OPC_MoveParent,
/*5646*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5649*/          OPC_EmitInteger, MVT::i32, 1, 
/*5652*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*5661*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5664*/          OPC_EmitInteger, MVT::i32, 0, 
/*5667*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*5676*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8
/*5685*/          OPC_EmitInteger, MVT::i32, 6, 
/*5688*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETLE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMP:i32 GPR:i32:$R, GPR:i32:$L), 6:i32)
/*5699*/        /*Scope*/ 56, /*->5756*/
/*5700*/          OPC_CheckCondCode, ISD::SETUGT,
/*5702*/          OPC_MoveParent,
/*5703*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5706*/          OPC_EmitInteger, MVT::i32, 1, 
/*5709*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*5718*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5721*/          OPC_EmitInteger, MVT::i32, 0, 
/*5724*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*5733*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8
/*5742*/          OPC_EmitInteger, MVT::i32, 3, 
/*5745*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETUGT:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 GPR:i32:$R, GPR:i32:$L), 3:i32)
/*5756*/        /*Scope*/ 56, /*->5813*/
/*5757*/          OPC_CheckCondCode, ISD::SETULT,
/*5759*/          OPC_MoveParent,
/*5760*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5763*/          OPC_EmitInteger, MVT::i32, 1, 
/*5766*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*5775*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5778*/          OPC_EmitInteger, MVT::i32, 0, 
/*5781*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*5790*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8
/*5799*/          OPC_EmitInteger, MVT::i32, 4, 
/*5802*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETULT:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 GPR:i32:$R, GPR:i32:$L), 4:i32)
/*5813*/        /*Scope*/ 56, /*->5870*/
/*5814*/          OPC_CheckCondCode, ISD::SETUGE,
/*5816*/          OPC_MoveParent,
/*5817*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5820*/          OPC_EmitInteger, MVT::i32, 1, 
/*5823*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*5832*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5835*/          OPC_EmitInteger, MVT::i32, 0, 
/*5838*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*5847*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8
/*5856*/          OPC_EmitInteger, MVT::i32, 5, 
/*5859*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETUGE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 GPR:i32:$R, GPR:i32:$L), 5:i32)
/*5870*/        /*Scope*/ 56, /*->5927*/
/*5871*/          OPC_CheckCondCode, ISD::SETULE,
/*5873*/          OPC_MoveParent,
/*5874*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5877*/          OPC_EmitInteger, MVT::i32, 1, 
/*5880*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*5889*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5892*/          OPC_EmitInteger, MVT::i32, 0, 
/*5895*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*5904*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8
/*5913*/          OPC_EmitInteger, MVT::i32, 6, 
/*5916*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETULE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 GPR:i32:$R, GPR:i32:$L), 6:i32)
/*5927*/        0, /*End of Scope*/
/*5928*/      /*Scope*/ 42|128,10/*1322*/, /*->7252*/
/*5930*/        OPC_CheckChild0Type, MVT::f32,
/*5932*/        OPC_RecordChild1, // #1 = $R
/*5933*/        OPC_MoveChild, 2,
/*5935*/        OPC_Scope, 58, /*->5995*/ // 20 children in Scope
/*5937*/          OPC_CheckCondCode, ISD::SETEQ,
/*5939*/          OPC_MoveParent,
/*5940*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*5942*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5945*/          OPC_EmitInteger, MVT::i32, 1, 
/*5948*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*5957*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5960*/          OPC_EmitInteger, MVT::i32, 0, 
/*5963*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*5972*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_EQ), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*5981*/          OPC_EmitInteger, MVT::i32, 2, 
/*5984*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETEQ:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_EQ:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*5995*/        /*Scope*/ 58, /*->6054*/
/*5996*/          OPC_CheckCondCode, ISD::SETNE,
/*5998*/          OPC_MoveParent,
/*5999*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6001*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6004*/          OPC_EmitInteger, MVT::i32, 1, 
/*6007*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6016*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6019*/          OPC_EmitInteger, MVT::i32, 0, 
/*6022*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6031*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_EQ), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6040*/          OPC_EmitInteger, MVT::i32, 1, 
/*6043*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETNE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_EQ:i32 GPR:f32:$L, GPR:f32:$R), 1:i32)
/*6054*/        /*Scope*/ 58, /*->6113*/
/*6055*/          OPC_CheckCondCode, ISD::SETOEQ,
/*6057*/          OPC_MoveParent,
/*6058*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6060*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6063*/          OPC_EmitInteger, MVT::i32, 1, 
/*6066*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6075*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6078*/          OPC_EmitInteger, MVT::i32, 0, 
/*6081*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6090*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_EQ), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6099*/          OPC_EmitInteger, MVT::i32, 2, 
/*6102*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETOEQ:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_EQ:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*6113*/        /*Scope*/ 58, /*->6172*/
/*6114*/          OPC_CheckCondCode, ISD::SETGT,
/*6116*/          OPC_MoveParent,
/*6117*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6119*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6122*/          OPC_EmitInteger, MVT::i32, 1, 
/*6125*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6134*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6137*/          OPC_EmitInteger, MVT::i32, 0, 
/*6140*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6149*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_GT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6158*/          OPC_EmitInteger, MVT::i32, 2, 
/*6161*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETGT:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_GT:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*6172*/        /*Scope*/ 58, /*->6231*/
/*6173*/          OPC_CheckCondCode, ISD::SETLT,
/*6175*/          OPC_MoveParent,
/*6176*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6178*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6181*/          OPC_EmitInteger, MVT::i32, 1, 
/*6184*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6193*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6196*/          OPC_EmitInteger, MVT::i32, 0, 
/*6199*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6208*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_LT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6217*/          OPC_EmitInteger, MVT::i32, 2, 
/*6220*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETLT:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_LT:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*6231*/        /*Scope*/ 58, /*->6290*/
/*6232*/          OPC_CheckCondCode, ISD::SETGE,
/*6234*/          OPC_MoveParent,
/*6235*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6237*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6240*/          OPC_EmitInteger, MVT::i32, 1, 
/*6243*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6252*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6255*/          OPC_EmitInteger, MVT::i32, 0, 
/*6258*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6267*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_GE), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6276*/          OPC_EmitInteger, MVT::i32, 2, 
/*6279*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETGE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_GE:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*6290*/        /*Scope*/ 58, /*->6349*/
/*6291*/          OPC_CheckCondCode, ISD::SETLE,
/*6293*/          OPC_MoveParent,
/*6294*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6296*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6299*/          OPC_EmitInteger, MVT::i32, 1, 
/*6302*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6311*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6314*/          OPC_EmitInteger, MVT::i32, 0, 
/*6317*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6326*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_LE), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6335*/          OPC_EmitInteger, MVT::i32, 2, 
/*6338*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETLE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_LE:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*6349*/        /*Scope*/ 58, /*->6408*/
/*6350*/          OPC_CheckCondCode, ISD::SETOGT,
/*6352*/          OPC_MoveParent,
/*6353*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6355*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6358*/          OPC_EmitInteger, MVT::i32, 1, 
/*6361*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6370*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6373*/          OPC_EmitInteger, MVT::i32, 0, 
/*6376*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6385*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_GT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6394*/          OPC_EmitInteger, MVT::i32, 2, 
/*6397*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETOGT:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_GT:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*6408*/        /*Scope*/ 58, /*->6467*/
/*6409*/          OPC_CheckCondCode, ISD::SETOLT,
/*6411*/          OPC_MoveParent,
/*6412*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6414*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6417*/          OPC_EmitInteger, MVT::i32, 1, 
/*6420*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6429*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6432*/          OPC_EmitInteger, MVT::i32, 0, 
/*6435*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6444*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_LT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6453*/          OPC_EmitInteger, MVT::i32, 2, 
/*6456*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETOLT:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_LT:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*6467*/        /*Scope*/ 58, /*->6526*/
/*6468*/          OPC_CheckCondCode, ISD::SETOGE,
/*6470*/          OPC_MoveParent,
/*6471*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6473*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6476*/          OPC_EmitInteger, MVT::i32, 1, 
/*6479*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6488*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6491*/          OPC_EmitInteger, MVT::i32, 0, 
/*6494*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6503*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_GE), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6512*/          OPC_EmitInteger, MVT::i32, 2, 
/*6515*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETOGE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_GE:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*6526*/        /*Scope*/ 58, /*->6585*/
/*6527*/          OPC_CheckCondCode, ISD::SETOLE,
/*6529*/          OPC_MoveParent,
/*6530*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6532*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6535*/          OPC_EmitInteger, MVT::i32, 1, 
/*6538*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6547*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6550*/          OPC_EmitInteger, MVT::i32, 0, 
/*6553*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6562*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_LE), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6571*/          OPC_EmitInteger, MVT::i32, 2, 
/*6574*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETOLE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_LE:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*6585*/        /*Scope*/ 58, /*->6644*/
/*6586*/          OPC_CheckCondCode, ISD::SETUNE,
/*6588*/          OPC_MoveParent,
/*6589*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6591*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6594*/          OPC_EmitInteger, MVT::i32, 1, 
/*6597*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6606*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6609*/          OPC_EmitInteger, MVT::i32, 0, 
/*6612*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6621*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_NE), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6630*/          OPC_EmitInteger, MVT::i32, 2, 
/*6633*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETUNE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_NE:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*6644*/        /*Scope*/ 58, /*->6703*/
/*6645*/          OPC_CheckCondCode, ISD::SETO,
/*6647*/          OPC_MoveParent,
/*6648*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6650*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6653*/          OPC_EmitInteger, MVT::i32, 1, 
/*6656*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6665*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6668*/          OPC_EmitInteger, MVT::i32, 0, 
/*6671*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6680*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_UN), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6689*/          OPC_EmitInteger, MVT::i32, 1, 
/*6692*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETO:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), 1:i32)
/*6703*/        /*Scope*/ 58, /*->6762*/
/*6704*/          OPC_CheckCondCode, ISD::SETUO,
/*6706*/          OPC_MoveParent,
/*6707*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6709*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6712*/          OPC_EmitInteger, MVT::i32, 1, 
/*6715*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6724*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6727*/          OPC_EmitInteger, MVT::i32, 0, 
/*6730*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6739*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_UN), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6748*/          OPC_EmitInteger, MVT::i32, 2, 
/*6751*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETUO:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*6762*/        /*Scope*/ 103, /*->6866*/
/*6763*/          OPC_CheckCondCode, ISD::SETONE,
/*6765*/          OPC_MoveParent,
/*6766*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6768*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6771*/          OPC_EmitInteger, MVT::i32, 1, 
/*6774*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6783*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6786*/          OPC_EmitInteger, MVT::i32, 0, 
/*6789*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6798*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_UN), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6807*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_EQ), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #9
/*6816*/          OPC_Scope, 23, /*->6841*/ // 2 children in Scope
/*6818*/            OPC_EmitNode, TARGET_VAL(MBlaze::XOR), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10
/*6827*/            OPC_EmitInteger, MVT::i32, 2, 
/*6830*/            OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 10, 11, 
                    // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETONE:Other) - Complexity = 3
                    // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (XOR:i32 (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), (FCMP_EQ:i32 GPR:f32:$L, GPR:f32:$R)), 2:i32)
/*6841*/          /*Scope*/ 23, /*->6865*/
/*6842*/            OPC_EmitNode, TARGET_VAL(MBlaze::OR), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10
/*6851*/            OPC_EmitInteger, MVT::i32, 2, 
/*6854*/            OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 10, 11, 
                    // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETONE:Other) - Complexity = 3
                    // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (OR:i32 (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), (FCMP_EQ:i32 GPR:f32:$L, GPR:f32:$R)), 2:i32)
/*6865*/          0, /*End of Scope*/
/*6866*/        /*Scope*/ 76, /*->6943*/
/*6867*/          OPC_CheckCondCode, ISD::SETUEQ,
/*6869*/          OPC_MoveParent,
/*6870*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6872*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6875*/          OPC_EmitInteger, MVT::i32, 1, 
/*6878*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6887*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6890*/          OPC_EmitInteger, MVT::i32, 0, 
/*6893*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6902*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_UN), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6911*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_EQ), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #9
/*6920*/          OPC_EmitNode, TARGET_VAL(MBlaze::OR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10
/*6929*/          OPC_EmitInteger, MVT::i32, 2, 
/*6932*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 10, 11, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETUEQ:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (OR:i32 (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), (FCMP_EQ:i32 GPR:f32:$L, GPR:f32:$R)), 2:i32)
/*6943*/        /*Scope*/ 76, /*->7020*/
/*6944*/          OPC_CheckCondCode, ISD::SETUGT,
/*6946*/          OPC_MoveParent,
/*6947*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6949*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6952*/          OPC_EmitInteger, MVT::i32, 1, 
/*6955*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6964*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6967*/          OPC_EmitInteger, MVT::i32, 0, 
/*6970*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6979*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_UN), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6988*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_GT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #9
/*6997*/          OPC_EmitNode, TARGET_VAL(MBlaze::OR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10
/*7006*/          OPC_EmitInteger, MVT::i32, 2, 
/*7009*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 10, 11, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETUGT:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (OR:i32 (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), (FCMP_GT:i32 GPR:f32:$L, GPR:f32:$R)), 2:i32)
/*7020*/        /*Scope*/ 76, /*->7097*/
/*7021*/          OPC_CheckCondCode, ISD::SETULT,
/*7023*/          OPC_MoveParent,
/*7024*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*7026*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7029*/          OPC_EmitInteger, MVT::i32, 1, 
/*7032*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*7041*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7044*/          OPC_EmitInteger, MVT::i32, 0, 
/*7047*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*7056*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_UN), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*7065*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_LT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #9
/*7074*/          OPC_EmitNode, TARGET_VAL(MBlaze::OR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10
/*7083*/          OPC_EmitInteger, MVT::i32, 2, 
/*7086*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 10, 11, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETULT:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (OR:i32 (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), (FCMP_LT:i32 GPR:f32:$L, GPR:f32:$R)), 2:i32)
/*7097*/        /*Scope*/ 76, /*->7174*/
/*7098*/          OPC_CheckCondCode, ISD::SETUGE,
/*7100*/          OPC_MoveParent,
/*7101*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*7103*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7106*/          OPC_EmitInteger, MVT::i32, 1, 
/*7109*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*7118*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7121*/          OPC_EmitInteger, MVT::i32, 0, 
/*7124*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*7133*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_UN), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*7142*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_GE), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #9
/*7151*/          OPC_EmitNode, TARGET_VAL(MBlaze::OR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10
/*7160*/          OPC_EmitInteger, MVT::i32, 2, 
/*7163*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 10, 11, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETUGE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (OR:i32 (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), (FCMP_GE:i32 GPR:f32:$L, GPR:f32:$R)), 2:i32)
/*7174*/        /*Scope*/ 76, /*->7251*/
/*7175*/          OPC_CheckCondCode, ISD::SETULE,
/*7177*/          OPC_MoveParent,
/*7178*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*7180*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7183*/          OPC_EmitInteger, MVT::i32, 1, 
/*7186*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*7195*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7198*/          OPC_EmitInteger, MVT::i32, 0, 
/*7201*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*7210*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_UN), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*7219*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_LE), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #9
/*7228*/          OPC_EmitNode, TARGET_VAL(MBlaze::OR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10
/*7237*/          OPC_EmitInteger, MVT::i32, 2, 
/*7240*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 10, 11, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETULE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (OR:i32 (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), (FCMP_LE:i32 GPR:f32:$L, GPR:f32:$R)), 2:i32)
/*7251*/        0, /*End of Scope*/
/*7252*/      0, /*End of Scope*/
/*7253*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 48,  TARGET_VAL(ISD::SRL),// ->7305
/*7257*/    OPC_RecordChild0, // #0 = $b
/*7258*/    OPC_RecordChild1, // #1 = $c
/*7259*/    OPC_Scope, 21, /*->7282*/ // 3 children in Scope
/*7261*/      OPC_MoveChild, 1,
/*7263*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7266*/      OPC_CheckPredicate, 15, // Predicate_immZExt5
/*7268*/      OPC_MoveParent,
/*7269*/      OPC_CheckPatternPredicate, 1, // (Subtarget.hasBarrel())
/*7271*/      OPC_EmitConvertToTarget, 1,
/*7273*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::BSRLI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (srl:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immZExt5>>:$c) - Complexity = 7
              // Dst: (BSRLI:i32 GPR:i32:$b, (imm:i32):$c)
/*7282*/    /*Scope*/ 11, /*->7294*/
/*7283*/      OPC_CheckPatternPredicate, 1, // (Subtarget.hasBarrel())
/*7285*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::BSRL), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (srl:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (BSRL:i32 GPR:i32:$b, GPR:i32:$c)
/*7294*/    /*Scope*/ 9, /*->7304*/
/*7295*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ShiftRL), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (srl:i32 GPR:i32:$L, GPR:i32:$R) - Complexity = 3
              // Dst: (ShiftRL:i32 GPR:i32:$L, GPR:i32:$R)
/*7304*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 48,  TARGET_VAL(ISD::SRA),// ->7356
/*7308*/    OPC_RecordChild0, // #0 = $b
/*7309*/    OPC_RecordChild1, // #1 = $c
/*7310*/    OPC_Scope, 21, /*->7333*/ // 3 children in Scope
/*7312*/      OPC_MoveChild, 1,
/*7314*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7317*/      OPC_CheckPredicate, 15, // Predicate_immZExt5
/*7319*/      OPC_MoveParent,
/*7320*/      OPC_CheckPatternPredicate, 1, // (Subtarget.hasBarrel())
/*7322*/      OPC_EmitConvertToTarget, 1,
/*7324*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::BSRAI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (sra:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immZExt5>>:$c) - Complexity = 7
              // Dst: (BSRAI:i32 GPR:i32:$b, (imm:i32):$c)
/*7333*/    /*Scope*/ 11, /*->7345*/
/*7334*/      OPC_CheckPatternPredicate, 1, // (Subtarget.hasBarrel())
/*7336*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::BSRA), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sra:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (BSRA:i32 GPR:i32:$b, GPR:i32:$c)
/*7345*/    /*Scope*/ 9, /*->7355*/
/*7346*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ShiftRA), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sra:i32 GPR:i32:$L, GPR:i32:$R) - Complexity = 3
              // Dst: (ShiftRA:i32 GPR:i32:$L, GPR:i32:$R)
/*7355*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 48,  TARGET_VAL(ISD::SHL),// ->7407
/*7359*/    OPC_RecordChild0, // #0 = $b
/*7360*/    OPC_RecordChild1, // #1 = $c
/*7361*/    OPC_Scope, 21, /*->7384*/ // 3 children in Scope
/*7363*/      OPC_MoveChild, 1,
/*7365*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7368*/      OPC_CheckPredicate, 15, // Predicate_immZExt5
/*7370*/      OPC_MoveParent,
/*7371*/      OPC_CheckPatternPredicate, 1, // (Subtarget.hasBarrel())
/*7373*/      OPC_EmitConvertToTarget, 1,
/*7375*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::BSLLI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (shl:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immZExt5>>:$c) - Complexity = 7
              // Dst: (BSLLI:i32 GPR:i32:$b, (imm:i32):$c)
/*7384*/    /*Scope*/ 11, /*->7396*/
/*7385*/      OPC_CheckPatternPredicate, 1, // (Subtarget.hasBarrel())
/*7387*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::BSLL), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (shl:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (BSLL:i32 GPR:i32:$b, GPR:i32:$c)
/*7396*/    /*Scope*/ 9, /*->7406*/
/*7397*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ShiftL), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (shl:i32 GPR:i32:$L, GPR:i32:$R) - Complexity = 3
              // Dst: (ShiftL:i32 GPR:i32:$L, GPR:i32:$R)
/*7406*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::ADD),// ->7444
/*7410*/    OPC_RecordChild0, // #0 = $b
/*7411*/    OPC_RecordChild1, // #1 = $c
/*7412*/    OPC_Scope, 19, /*->7433*/ // 2 children in Scope
/*7414*/      OPC_MoveChild, 1,
/*7416*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7419*/      OPC_CheckPredicate, 16, // Predicate_immSExt16
/*7421*/      OPC_MoveParent,
/*7422*/      OPC_EmitConvertToTarget, 1,
/*7424*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADDIK), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (add:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immSExt16>>:$c) - Complexity = 7
              // Dst: (ADDIK:i32 GPR:i32:$b, (imm:i32):$c)
/*7433*/    /*Scope*/ 9, /*->7443*/
/*7434*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADDK), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (add:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (ADDK:i32 GPR:i32:$b, GPR:i32:$c)
/*7443*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::SUB),// ->7482
/*7447*/    OPC_RecordChild0, // #0 = $b
/*7448*/    OPC_Scope, 20, /*->7470*/ // 2 children in Scope
/*7450*/      OPC_MoveChild, 0,
/*7452*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7455*/      OPC_CheckPredicate, 16, // Predicate_immSExt16
/*7457*/      OPC_MoveParent,
/*7458*/      OPC_RecordChild1, // #1 = $c
/*7459*/      OPC_EmitConvertToTarget, 0,
/*7461*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::RSUBIK), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (sub:i32 (imm:i32)<<P:Predicate_immSExt16>>:$b, GPR:i32:$c) - Complexity = 7
              // Dst: (RSUBIK:i32 (imm:i32):$b, GPR:i32:$c)
/*7470*/    /*Scope*/ 10, /*->7481*/
/*7471*/      OPC_RecordChild1, // #1 = $c
/*7472*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::RSUBK), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sub:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (RSUBK:i32 GPR:i32:$b, GPR:i32:$c)
/*7481*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::OR),// ->7519
/*7485*/    OPC_RecordChild0, // #0 = $b
/*7486*/    OPC_RecordChild1, // #1 = $c
/*7487*/    OPC_Scope, 19, /*->7508*/ // 2 children in Scope
/*7489*/      OPC_MoveChild, 1,
/*7491*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7494*/      OPC_CheckPredicate, 14, // Predicate_immZExt16
/*7496*/      OPC_MoveParent,
/*7497*/      OPC_EmitConvertToTarget, 1,
/*7499*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ORI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (or:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immZExt16>>:$c) - Complexity = 7
              // Dst: (ORI:i32 GPR:i32:$b, (imm:i32):$c)
/*7508*/    /*Scope*/ 9, /*->7518*/
/*7509*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::OR), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (or:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (OR:i32 GPR:i32:$b, GPR:i32:$c)
/*7518*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::XOR),// ->7556
/*7522*/    OPC_RecordChild0, // #0 = $b
/*7523*/    OPC_RecordChild1, // #1 = $c
/*7524*/    OPC_Scope, 19, /*->7545*/ // 2 children in Scope
/*7526*/      OPC_MoveChild, 1,
/*7528*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7531*/      OPC_CheckPredicate, 14, // Predicate_immZExt16
/*7533*/      OPC_MoveParent,
/*7534*/      OPC_EmitConvertToTarget, 1,
/*7536*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::XORI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (xor:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immZExt16>>:$c) - Complexity = 7
              // Dst: (XORI:i32 GPR:i32:$b, (imm:i32):$c)
/*7545*/    /*Scope*/ 9, /*->7555*/
/*7546*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::XOR), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (XOR:i32 GPR:i32:$b, GPR:i32:$c)
/*7555*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::ADDC),// ->7595
/*7559*/    OPC_RecordChild0, // #0 = $b
/*7560*/    OPC_RecordChild1, // #1 = $c
/*7561*/    OPC_Scope, 20, /*->7583*/ // 2 children in Scope
/*7563*/      OPC_MoveChild, 1,
/*7565*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7568*/      OPC_CheckPredicate, 16, // Predicate_immSExt16
/*7570*/      OPC_MoveParent,
/*7571*/      OPC_EmitConvertToTarget, 1,
/*7573*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADDI), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (addc:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immSExt16>>:$c) - Complexity = 7
              // Dst: (ADDI:i32:i32 GPR:i32:$b, (imm:i32):$c)
/*7583*/    /*Scope*/ 10, /*->7594*/
/*7584*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADD), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (ADD:i32:i32 GPR:i32:$b, GPR:i32:$c)
/*7594*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::SUBC),// ->7635
/*7598*/    OPC_RecordChild0, // #0 = $b
/*7599*/    OPC_Scope, 21, /*->7622*/ // 2 children in Scope
/*7601*/      OPC_MoveChild, 0,
/*7603*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7606*/      OPC_CheckPredicate, 16, // Predicate_immSExt16
/*7608*/      OPC_MoveParent,
/*7609*/      OPC_RecordChild1, // #1 = $c
/*7610*/      OPC_EmitConvertToTarget, 0,
/*7612*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::RSUBI), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (subc:i32 (imm:i32)<<P:Predicate_immSExt16>>:$b, GPR:i32:$c) - Complexity = 7
              // Dst: (RSUBI:i32:i32 (imm:i32):$b, GPR:i32:$c)
/*7622*/    /*Scope*/ 11, /*->7634*/
/*7623*/      OPC_RecordChild1, // #1 = $c
/*7624*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::RSUB), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (RSUB:i32:i32 GPR:i32:$b, GPR:i32:$c)
/*7634*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::ADDE),// ->7675
/*7638*/    OPC_CaptureGlueInput,
/*7639*/    OPC_RecordChild0, // #0 = $b
/*7640*/    OPC_RecordChild1, // #1 = $c
/*7641*/    OPC_Scope, 20, /*->7663*/ // 2 children in Scope
/*7643*/      OPC_MoveChild, 1,
/*7645*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7648*/      OPC_CheckPredicate, 16, // Predicate_immSExt16
/*7650*/      OPC_MoveParent,
/*7651*/      OPC_EmitConvertToTarget, 1,
/*7653*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADDIC), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (adde:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immSExt16>>:$c) - Complexity = 7
              // Dst: (ADDIC:i32:i32 GPR:i32:$b, (imm:i32):$c)
/*7663*/    /*Scope*/ 10, /*->7674*/
/*7664*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADDC), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (adde:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (ADDC:i32:i32 GPR:i32:$b, GPR:i32:$c)
/*7674*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 38,  TARGET_VAL(ISD::SUBE),// ->7716
/*7678*/    OPC_CaptureGlueInput,
/*7679*/    OPC_RecordChild0, // #0 = $b
/*7680*/    OPC_Scope, 21, /*->7703*/ // 2 children in Scope
/*7682*/      OPC_MoveChild, 0,
/*7684*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7687*/      OPC_CheckPredicate, 16, // Predicate_immSExt16
/*7689*/      OPC_MoveParent,
/*7690*/      OPC_RecordChild1, // #1 = $c
/*7691*/      OPC_EmitConvertToTarget, 0,
/*7693*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::RSUBIC), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (sube:i32 (imm:i32)<<P:Predicate_immSExt16>>:$b, GPR:i32:$c) - Complexity = 7
              // Dst: (RSUBIC:i32:i32 (imm:i32):$b, GPR:i32:$c)
/*7703*/    /*Scope*/ 11, /*->7715*/
/*7704*/      OPC_RecordChild1, // #1 = $c
/*7705*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::RSUBC), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sube:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (RSUBC:i32:i32 GPR:i32:$b, GPR:i32:$c)
/*7715*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 38,  TARGET_VAL(ISD::MUL),// ->7757
/*7719*/    OPC_RecordChild0, // #0 = $b
/*7720*/    OPC_RecordChild1, // #1 = $c
/*7721*/    OPC_Scope, 21, /*->7744*/ // 2 children in Scope
/*7723*/      OPC_MoveChild, 1,
/*7725*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7728*/      OPC_CheckPredicate, 16, // Predicate_immSExt16
/*7730*/      OPC_MoveParent,
/*7731*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasMul())
/*7733*/      OPC_EmitConvertToTarget, 1,
/*7735*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::MULI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (mul:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immSExt16>>:$c) - Complexity = 7
              // Dst: (MULI:i32 GPR:i32:$b, (imm:i32):$c)
/*7744*/    /*Scope*/ 11, /*->7756*/
/*7745*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasMul())
/*7747*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::MUL), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (MUL:i32 GPR:i32:$b, GPR:i32:$c)
/*7756*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::CALLSEQ_START),// ->7776
/*7760*/    OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*7761*/    OPC_RecordChild1, // #1 = $amt
/*7762*/    OPC_MoveChild, 1,
/*7764*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*7767*/    OPC_MoveParent,
/*7768*/    OPC_EmitMergeInputChains1_0,
/*7769*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN (timm:i32):$amt)
          /*SwitchOpcode*/ 55,  TARGET_VAL(MBlazeISD::JmpLink),// ->7834
/*7779*/    OPC_RecordNode,   // #0 = 'MBlazeJmpLink' chained node
/*7780*/    OPC_CaptureGlueInput,
/*7781*/    OPC_RecordChild1, // #1 = $dst
/*7782*/    OPC_Scope, 36, /*->7820*/ // 2 children in Scope
/*7784*/      OPC_MoveChild, 1,
/*7786*/      OPC_SwitchOpcode /*2 cases */, 13,  TARGET_VAL(ISD::TargetGlobalAddress),// ->7803
/*7790*/        OPC_MoveParent,
/*7791*/        OPC_EmitMergeInputChains1_0,
/*7792*/        OPC_EmitRegister, MVT::i32, MBlaze::R15,
/*7795*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::BRLID), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 2/*#Ops*/, 2, 1, 
                // Src: (MBlazeJmpLink (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (BRLID R15:i32, (tglobaladdr:i32):$dst)
              /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetExternalSymbol),// ->7819
/*7806*/        OPC_MoveParent,
/*7807*/        OPC_EmitMergeInputChains1_0,
/*7808*/        OPC_EmitRegister, MVT::i32, MBlaze::R15,
/*7811*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::BRLID), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 2/*#Ops*/, 2, 1, 
                // Src: (MBlazeJmpLink (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (BRLID R15:i32, (texternalsym:i32):$dst)
              0, // EndSwitchOpcode
/*7820*/    /*Scope*/ 12, /*->7833*/
/*7821*/      OPC_EmitMergeInputChains1_0,
/*7822*/      OPC_EmitRegister, MVT::i32, MBlaze::R15,
/*7825*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::BRALD), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 2/*#Ops*/, 2, 1, 
              // Src: (MBlazeJmpLink GPR:i32:$dst) - Complexity = 3
              // Dst: (BRALD R15:i32, GPR:i32:$dst)
/*7833*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 53,  TARGET_VAL(MBlazeISD::Wrap),// ->7890
/*7837*/    OPC_RecordChild0, // #0 = $in
/*7838*/    OPC_MoveChild, 0,
/*7840*/    OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::TargetGlobalAddress),// ->7857
/*7844*/      OPC_MoveParent,
/*7845*/      OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7848*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ORI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (MBWrapper:i32 (tglobaladdr:i32):$in) - Complexity = 6
              // Dst: (ORI:i32 R0:i32, (tglobaladdr:i32):$in)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetJumpTable),// ->7873
/*7860*/      OPC_MoveParent,
/*7861*/      OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7864*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ORI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (MBWrapper:i32 (tjumptable:i32):$in) - Complexity = 6
              // Dst: (ORI:i32 R0:i32, (tjumptable:i32):$in)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetConstantPool),// ->7889
/*7876*/      OPC_MoveParent,
/*7877*/      OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7880*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ORI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (MBWrapper:i32 (tconstpool:i32):$in) - Complexity = 6
              // Dst: (ORI:i32 R0:i32, (tconstpool:i32):$in)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 73,  TARGET_VAL(ISD::Constant),// ->7966
/*7893*/    OPC_Scope, 17, /*->7912*/ // 2 children in Scope
/*7895*/      OPC_CheckInteger, 0, 
/*7897*/      OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7900*/      OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7903*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADDK), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: 0:i32 - Complexity = 5
              // Dst: (ADDK:i32 R0:i32, R0:i32)
/*7912*/    /*Scope*/ 52, /*->7965*/
/*7913*/      OPC_RecordNode, // #0 = $imm
/*7914*/      OPC_Scope, 16, /*->7932*/ // 3 children in Scope
/*7916*/        OPC_CheckPredicate, 16, // Predicate_immSExt16
/*7918*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7921*/        OPC_EmitConvertToTarget, 0,
/*7923*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (imm:i32)<<P:Predicate_immSExt16>>:$imm - Complexity = 4
                // Dst: (ADDIK:i32 R0:i32, (imm:i32):$imm)
/*7932*/      /*Scope*/ 16, /*->7949*/
/*7933*/        OPC_CheckPredicate, 14, // Predicate_immZExt16
/*7935*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7938*/        OPC_EmitConvertToTarget, 0,
/*7940*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::ORI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (imm:i32)<<P:Predicate_immZExt16>>:$imm - Complexity = 4
                // Dst: (ORI:i32 R0:i32, (imm:i32):$imm)
/*7949*/      /*Scope*/ 14, /*->7964*/
/*7950*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7953*/        OPC_EmitConvertToTarget, 0,
/*7955*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (ADDIK:i32 R0:i32, (imm:i32):$imm)
/*7964*/      0, /*End of Scope*/
/*7965*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 20,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->7989
/*7969*/    OPC_RecordMemRef,
/*7970*/    OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*7971*/    OPC_RecordChild1, // #1 = $ptr
/*7972*/    OPC_CheckChild1Type, MVT::i32,
/*7974*/    OPC_RecordChild2, // #2 = $cmp
/*7975*/    OPC_RecordChild3, // #3 = $swp
/*7976*/    OPC_CheckPredicate, 17, // Predicate_atomic_cmp_swap_32
/*7978*/    OPC_EmitMergeInputChains1_0,
/*7979*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::CAS32), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
            // Src: (atomic_cmp_swap:i32 GPR:i32:$ptr, GPR:i32:$cmp, GPR:i32:$swp)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 4
            // Dst: (CAS32:i32 GPR:i32:$ptr, GPR:i32:$cmp, GPR:i32:$swp)
          /*SwitchOpcode*/ 18,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->8010
/*7992*/    OPC_RecordMemRef,
/*7993*/    OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*7994*/    OPC_RecordChild1, // #1 = $ptr
/*7995*/    OPC_CheckChild1Type, MVT::i32,
/*7997*/    OPC_RecordChild2, // #2 = $swp
/*7998*/    OPC_CheckPredicate, 18, // Predicate_atomic_swap_32
/*8000*/    OPC_EmitMergeInputChains1_0,
/*8001*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::SWP32), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (atomic_swap:i32 GPR:i32:$ptr, GPR:i32:$swp)<<P:Predicate_atomic_swap_32>> - Complexity = 4
            // Dst: (SWP32:i32 GPR:i32:$ptr, GPR:i32:$swp)
          /*SwitchOpcode*/ 18,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->8031
/*8013*/    OPC_RecordMemRef,
/*8014*/    OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*8015*/    OPC_RecordChild1, // #1 = $ptr
/*8016*/    OPC_CheckChild1Type, MVT::i32,
/*8018*/    OPC_RecordChild2, // #2 = $val
/*8019*/    OPC_CheckPredicate, 19, // Predicate_atomic_load_add_32
/*8021*/    OPC_EmitMergeInputChains1_0,
/*8022*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::LAA32), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (atomic_load_add:i32 GPR:i32:$ptr, GPR:i32:$val)<<P:Predicate_atomic_load_add_32>> - Complexity = 4
            // Dst: (LAA32:i32 GPR:i32:$ptr, GPR:i32:$val)
          /*SwitchOpcode*/ 18,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->8052
/*8034*/    OPC_RecordMemRef,
/*8035*/    OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*8036*/    OPC_RecordChild1, // #1 = $ptr
/*8037*/    OPC_CheckChild1Type, MVT::i32,
/*8039*/    OPC_RecordChild2, // #2 = $val
/*8040*/    OPC_CheckPredicate, 20, // Predicate_atomic_load_sub_32
/*8042*/    OPC_EmitMergeInputChains1_0,
/*8043*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::LAS32), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (atomic_load_sub:i32 GPR:i32:$ptr, GPR:i32:$val)<<P:Predicate_atomic_load_sub_32>> - Complexity = 4
            // Dst: (LAS32:i32 GPR:i32:$ptr, GPR:i32:$val)
          /*SwitchOpcode*/ 18,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->8073
/*8055*/    OPC_RecordMemRef,
/*8056*/    OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*8057*/    OPC_RecordChild1, // #1 = $ptr
/*8058*/    OPC_CheckChild1Type, MVT::i32,
/*8060*/    OPC_RecordChild2, // #2 = $val
/*8061*/    OPC_CheckPredicate, 21, // Predicate_atomic_load_and_32
/*8063*/    OPC_EmitMergeInputChains1_0,
/*8064*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::LAD32), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (atomic_load_and:i32 GPR:i32:$ptr, GPR:i32:$val)<<P:Predicate_atomic_load_and_32>> - Complexity = 4
            // Dst: (LAD32:i32 GPR:i32:$ptr, GPR:i32:$val)
          /*SwitchOpcode*/ 18,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->8094
/*8076*/    OPC_RecordMemRef,
/*8077*/    OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*8078*/    OPC_RecordChild1, // #1 = $ptr
/*8079*/    OPC_CheckChild1Type, MVT::i32,
/*8081*/    OPC_RecordChild2, // #2 = $val
/*8082*/    OPC_CheckPredicate, 22, // Predicate_atomic_load_or_32
/*8084*/    OPC_EmitMergeInputChains1_0,
/*8085*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::LAO32), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (atomic_load_or:i32 GPR:i32:$ptr, GPR:i32:$val)<<P:Predicate_atomic_load_or_32>> - Complexity = 4
            // Dst: (LAO32:i32 GPR:i32:$ptr, GPR:i32:$val)
          /*SwitchOpcode*/ 18,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->8115
/*8097*/    OPC_RecordMemRef,
/*8098*/    OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*8099*/    OPC_RecordChild1, // #1 = $ptr
/*8100*/    OPC_CheckChild1Type, MVT::i32,
/*8102*/    OPC_RecordChild2, // #2 = $val
/*8103*/    OPC_CheckPredicate, 23, // Predicate_atomic_load_xor_32
/*8105*/    OPC_EmitMergeInputChains1_0,
/*8106*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::LAX32), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (atomic_load_xor:i32 GPR:i32:$ptr, GPR:i32:$val)<<P:Predicate_atomic_load_xor_32>> - Complexity = 4
            // Dst: (LAX32:i32 GPR:i32:$ptr, GPR:i32:$val)
          /*SwitchOpcode*/ 18,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->8136
/*8118*/    OPC_RecordMemRef,
/*8119*/    OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*8120*/    OPC_RecordChild1, // #1 = $ptr
/*8121*/    OPC_CheckChild1Type, MVT::i32,
/*8123*/    OPC_RecordChild2, // #2 = $val
/*8124*/    OPC_CheckPredicate, 24, // Predicate_atomic_load_nand_32
/*8126*/    OPC_EmitMergeInputChains1_0,
/*8127*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::LAN32), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (atomic_load_nand:i32 GPR:i32:$ptr, GPR:i32:$val)<<P:Predicate_atomic_load_nand_32>> - Complexity = 4
            // Dst: (LAN32:i32 GPR:i32:$ptr, GPR:i32:$val)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::MULHS),// ->8152
/*8139*/    OPC_RecordChild0, // #0 = $b
/*8140*/    OPC_RecordChild1, // #1 = $c
/*8141*/    OPC_CheckPatternPredicate, 3, // (Subtarget.hasMul()) && (Subtarget.hasMul64())
/*8143*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::MULH), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (mulhs:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
            // Dst: (MULH:i32 GPR:i32:$b, GPR:i32:$c)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::MULHU),// ->8168
/*8155*/    OPC_RecordChild0, // #0 = $b
/*8156*/    OPC_RecordChild1, // #1 = $c
/*8157*/    OPC_CheckPatternPredicate, 3, // (Subtarget.hasMul()) && (Subtarget.hasMul64())
/*8159*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::MULHU), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (mulhu:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
            // Dst: (MULHU:i32 GPR:i32:$b, GPR:i32:$c)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::SDIV),// ->8184
/*8171*/    OPC_RecordChild0, // #0 = $b
/*8172*/    OPC_RecordChild1, // #1 = $c
/*8173*/    OPC_CheckPatternPredicate, 4, // (Subtarget.hasDiv())
/*8175*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::IDIV), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (sdiv:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
            // Dst: (IDIV:i32 GPR:i32:$b, GPR:i32:$c)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::UDIV),// ->8200
/*8187*/    OPC_RecordChild0, // #0 = $b
/*8188*/    OPC_RecordChild1, // #1 = $c
/*8189*/    OPC_CheckPatternPredicate, 4, // (Subtarget.hasDiv())
/*8191*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::IDIVU), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (udiv:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
            // Dst: (IDIVU:i32 GPR:i32:$b, GPR:i32:$c)
          /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->8232
/*8203*/    OPC_RecordChild0, // #0 = $src
/*8204*/    OPC_MoveChild, 1,
/*8206*/    OPC_Scope, 11, /*->8219*/ // 2 children in Scope
/*8208*/      OPC_CheckValueType, MVT::i16,
/*8210*/      OPC_MoveParent,
/*8211*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::SEXT16), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i32 GPR:i32:$src, i16:Other) - Complexity = 3
              // Dst: (SEXT16:i32 GPR:i32:$src)
/*8219*/    /*Scope*/ 11, /*->8231*/
/*8220*/      OPC_CheckValueType, MVT::i8,
/*8222*/      OPC_MoveParent,
/*8223*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::SEXT8), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i32 GPR:i32:$src, i8:Other) - Complexity = 3
              // Dst: (SEXT8:i32 GPR:i32:$src)
/*8231*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 15,  TARGET_VAL(MBlazeISD::Ret),// ->8250
/*8235*/    OPC_RecordNode,   // #0 = 'MBlazeRet' chained node
/*8236*/    OPC_CaptureGlueInput,
/*8237*/    OPC_RecordChild1, // #1 = $target
/*8238*/    OPC_EmitMergeInputChains1_0,
/*8239*/    OPC_EmitInteger, MVT::i32, 8, 
/*8242*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::RTSD), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MBlazeRet GPR:i32:$target) - Complexity = 3
            // Dst: (RTSD GPR:i32:$target, 8:i32)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MBlazeISD::IRet),// ->8268
/*8253*/    OPC_RecordNode,   // #0 = 'MBlazeIRet' chained node
/*8254*/    OPC_CaptureGlueInput,
/*8255*/    OPC_RecordChild1, // #1 = $target
/*8256*/    OPC_EmitMergeInputChains1_0,
/*8257*/    OPC_EmitInteger, MVT::i32, 0, 
/*8260*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::RTID), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MBlazeIRet GPR:i32:$target) - Complexity = 3
            // Dst: (RTID GPR:i32:$target, 0:i32)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->8287
/*8271*/    OPC_RecordNode,   // #0 = 'br' chained node
/*8272*/    OPC_RecordChild1, // #1 = $T
/*8273*/    OPC_MoveChild, 1,
/*8275*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*8278*/    OPC_MoveParent,
/*8279*/    OPC_EmitMergeInputChains1_0,
/*8280*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::BRID), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$T) - Complexity = 3
            // Dst: (BRID (bb:Other):$T)
          /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::BRIND),// ->8302
/*8290*/    OPC_RecordNode,   // #0 = 'brind' chained node
/*8291*/    OPC_RecordChild1, // #1 = $T
/*8292*/    OPC_CheckChild1Type, MVT::i32,
/*8294*/    OPC_EmitMergeInputChains1_0,
/*8295*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::BRAD), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (brind GPR:i32:$T) - Complexity = 3
            // Dst: (BRAD GPR:i32:$T)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::FP_TO_SINT),// ->8316
/*8305*/    OPC_RecordChild0, // #0 = $V
/*8306*/    OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*8308*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::FINT), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (fp_to_sint:i32 GPR:f32:$V) - Complexity = 3
            // Dst: (FINT:i32 GPR:f32:$V)
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::SELECT),// ->8356
/*8319*/    OPC_RecordChild0, // #0 = $C
/*8320*/    OPC_RecordChild1, // #1 = $T
/*8321*/    OPC_RecordChild2, // #2 = $F
/*8322*/    OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->8339
/*8325*/      OPC_EmitInteger, MVT::i32, 2, 
/*8328*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
              // Src: (select:i32 GPR:i32:$C, GPR:i32:$T, GPR:i32:$F) - Complexity = 3
              // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$C, 2:i32)
            /*SwitchType*/ 14,  MVT::f32,// ->8355
/*8341*/      OPC_EmitInteger, MVT::i32, 2, 
/*8344*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_FCC), 0,
                  1/*#VTs*/, MVT::f32, 4/*#Ops*/, 1, 2, 0, 3, 
              // Src: (select:f32 GPR:i32:$C, GPR:f32:$T, GPR:f32:$F) - Complexity = 3
              // Dst: (Select_FCC:f32 GPR:f32:$T, GPR:f32:$F, GPR:i32:$C, 2:i32)
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FADD),// ->8372
/*8359*/    OPC_RecordChild0, // #0 = $b
/*8360*/    OPC_RecordChild1, // #1 = $c
/*8361*/    OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*8363*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::FADD), 0,
                1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
            // Src: (fadd:f32 GPR:f32:$b, GPR:f32:$c) - Complexity = 3
            // Dst: (FADD:f32 GPR:f32:$b, GPR:f32:$c)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FSUB),// ->8388
/*8375*/    OPC_RecordChild0, // #0 = $b
/*8376*/    OPC_RecordChild1, // #1 = $c
/*8377*/    OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*8379*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::FRSUB), 0,
                1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
            // Src: (fsub:f32 GPR:f32:$b, GPR:f32:$c) - Complexity = 3
            // Dst: (FRSUB:f32 GPR:f32:$b, GPR:f32:$c)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FMUL),// ->8404
/*8391*/    OPC_RecordChild0, // #0 = $b
/*8392*/    OPC_RecordChild1, // #1 = $c
/*8393*/    OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*8395*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::FMUL), 0,
                1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
            // Src: (fmul:f32 GPR:f32:$b, GPR:f32:$c) - Complexity = 3
            // Dst: (FMUL:f32 GPR:f32:$b, GPR:f32:$c)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FDIV),// ->8420
/*8407*/    OPC_RecordChild0, // #0 = $b
/*8408*/    OPC_RecordChild1, // #1 = $c
/*8409*/    OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*8411*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::FDIV), 0,
                1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
            // Src: (fdiv:f32 GPR:f32:$b, GPR:f32:$c) - Complexity = 3
            // Dst: (FDIV:f32 GPR:f32:$b, GPR:f32:$c)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::SINT_TO_FP),// ->8434
/*8423*/    OPC_RecordChild0, // #0 = $V
/*8424*/    OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*8426*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::FLT), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (sint_to_fp:f32 GPR:i32:$V) - Complexity = 3
            // Dst: (FLT:f32 GPR:i32:$V)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::FSQRT),// ->8448
/*8437*/    OPC_RecordChild0, // #0 = $V
/*8438*/    OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*8440*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::FSQRT), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (fsqrt:f32 GPR:f32:$V) - Complexity = 3
            // Dst: (FSQRT:f32 GPR:f32:$V)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::ConstantFP),// ->8466
/*8451*/    OPC_RecordNode,   // #0 = $imm
/*8452*/    OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*8455*/    OPC_EmitConvertToTarget, 0,
/*8457*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::FORI), 0,
                1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
            // Src: (fpimm:f32):$imm - Complexity = 3
            // Dst: (FORI:f32 R0:i32, (fpimm:f32):$imm)
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 8468 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 102
  // #OPC_RecordNode                     = 23
  // #OPC_RecordChild                    = 204
  // #OPC_RecordMemRef                   = 10
  // #OPC_CaptureGlueInput               = 6
  // #OPC_MoveChild                      = 137
  // #OPC_MoveParent                     = 310
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 41
  // #OPC_CheckPredicate                 = 98
  // #OPC_CheckOpcode                    = 101
  // #OPC_SwitchOpcode                   = 3
  // #OPC_CheckType                      = 30
  // #OPC_SwitchType                     = 2
  // #OPC_CheckChildType                 = 19
  // #OPC_CheckInteger                   = 64
  // #OPC_CheckCondCode                  = 110
  // #OPC_CheckValueType                 = 2
  // #OPC_CheckComplexPat                = 21
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 185
  // #OPC_EmitStringInteger              = 0
  // #OPC_EmitRegister                   = 137
  // #OPC_EmitConvertToTarget            = 65
  // #OPC_EmitMergeInputChains           = 166
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 187
  // #OPC_EmitNodeXForm                  = 0
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 301

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (Subtarget.hasFPU());
  case 1: return (Subtarget.hasBarrel());
  case 2: return (Subtarget.hasMul());
  case 3: return (Subtarget.hasMul()) && (Subtarget.hasMul64());
  case 4: return (Subtarget.hasDiv());
  }
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 1: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 2: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 3: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 4: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 5: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 6: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 7: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 8: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 9: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 10: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 11: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 12: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 13: { // Predicate_immZExt4
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return N->getZExtValue() == ((N->getZExtValue()) & 0xf) ;

  }
  case 14: { // Predicate_immZExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (N->getZExtValue() >> 16) == 0;

  }
  case 15: { // Predicate_immZExt5
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return N->getZExtValue() == ((N->getZExtValue()) & 0x1f) ;

  }
  case 16: { // Predicate_immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (N->getZExtValue() >> 16) == 0;

  }
  case 17: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 18: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 19: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 20: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 21: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 22: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 23: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 24: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
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
    return SelectAddrRegImm(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectAddrRegReg(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

