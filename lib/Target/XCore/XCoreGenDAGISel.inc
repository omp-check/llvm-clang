/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the XCore target                               *|
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
/*0*/     OPC_SwitchOpcode /*40 cases */, 98|128,1/*226*/,  TARGET_VAL(ISD::ADD),// ->231
/*5*/       OPC_Scope, 34, /*->41*/ // 5 children in Scope
/*7*/         OPC_MoveChild, 0,
/*9*/         OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*12*/        OPC_MoveChild, 0,
/*14*/        OPC_CheckInteger, 1, 
/*16*/        OPC_MoveParent,
/*17*/        OPC_RecordChild1, // #0 = $size
/*18*/        OPC_MoveParent,
/*19*/        OPC_MoveChild, 1,
/*21*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32*/        OPC_MoveParent,
/*33*/        OPC_MorphNodeTo, TARGET_VAL(XCore::MKMSK_2r), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (add:i32 (shl:i32 1:i32, GRRegs:i32:$size), -1:i32) - Complexity = 16
              // Dst: (MKMSK_2r:i32 GRRegs:i32:$size)
/*41*/      /*Scope*/ 39, /*->81*/
/*42*/        OPC_RecordChild0, // #0 = $addr
/*43*/        OPC_MoveChild, 1,
/*45*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*48*/        OPC_RecordChild0, // #1 = $offset
/*49*/        OPC_MoveChild, 1,
/*51*/        OPC_Scope, 13, /*->66*/ // 2 children in Scope
/*53*/          OPC_CheckInteger, 2, 
/*55*/          OPC_MoveParent,
/*56*/          OPC_MoveParent,
/*57*/          OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWF_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32)) - Complexity = 11
                // Dst: (LDAWF_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*66*/        /*Scope*/ 13, /*->80*/
/*67*/          OPC_CheckInteger, 1, 
/*69*/          OPC_MoveParent,
/*70*/          OPC_MoveParent,
/*71*/          OPC_MorphNodeTo, TARGET_VAL(XCore::LDA16F_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)) - Complexity = 11
                // Dst: (LDA16F_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*80*/        0, /*End of Scope*/
/*81*/      /*Scope*/ 40, /*->122*/
/*82*/        OPC_MoveChild, 0,
/*84*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*87*/        OPC_RecordChild0, // #0 = $offset
/*88*/        OPC_MoveChild, 1,
/*90*/        OPC_Scope, 14, /*->106*/ // 2 children in Scope
/*92*/          OPC_CheckInteger, 2, 
/*94*/          OPC_MoveParent,
/*95*/          OPC_MoveParent,
/*96*/          OPC_RecordChild1, // #1 = $addr
/*97*/          OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWF_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 (shl:i32 GRRegs:i32:$offset, 2:i32), GRRegs:i32:$addr) - Complexity = 11
                // Dst: (LDAWF_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*106*/       /*Scope*/ 14, /*->121*/
/*107*/         OPC_CheckInteger, 1, 
/*109*/         OPC_MoveParent,
/*110*/         OPC_MoveParent,
/*111*/         OPC_RecordChild1, // #1 = $addr
/*112*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDA16F_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr) - Complexity = 11
                // Dst: (LDA16F_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*121*/       0, /*End of Scope*/
/*122*/     /*Scope*/ 15, /*->138*/
/*123*/       OPC_RecordNode, // #0 = $addr
/*124*/       OPC_CheckType, MVT::i32,
/*126*/       OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectADDRspii:$addr #1 #2
/*129*/       OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWFI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: ADDRspii:i32:$addr - Complexity = 9
              // Dst: (LDAWFI:i32 ADDRspii:i32:$addr)
/*138*/     /*Scope*/ 91, /*->230*/
/*139*/       OPC_RecordChild0, // #0 = $b
/*140*/       OPC_RecordChild1, // #1 = $c
/*141*/       OPC_Scope, 76, /*->219*/ // 2 children in Scope
/*143*/         OPC_MoveChild, 1,
/*145*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*148*/         OPC_Scope, 14, /*->164*/ // 4 children in Scope
/*150*/           OPC_CheckPredicate, 0, // Predicate_immUs
/*152*/           OPC_MoveParent,
/*153*/           OPC_EmitConvertToTarget, 1,
/*155*/           OPC_MorphNodeTo, TARGET_VAL(XCore::ADD_2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immUs>>:$c) - Complexity = 7
                  // Dst: (ADD_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*164*/         /*Scope*/ 17, /*->182*/
/*165*/           OPC_CheckPredicate, 1, // Predicate_immUs4
/*167*/           OPC_MoveParent,
/*168*/           OPC_EmitConvertToTarget, 1,
/*170*/           OPC_EmitNodeXForm, 0, 2, // div4_xform
/*173*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWF_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset) - Complexity = 7
                  // Dst: (LDAWF_l2rus:i32 GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
/*182*/         /*Scope*/ 17, /*->200*/
/*183*/           OPC_CheckPredicate, 2, // Predicate_immUsNeg
/*185*/           OPC_MoveParent,
/*186*/           OPC_EmitConvertToTarget, 1,
/*188*/           OPC_EmitNodeXForm, 1, 2, // neg_xform
/*191*/           OPC_MorphNodeTo, TARGET_VAL(XCore::SUB_2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GRRegs:i32:$src1, (imm:i32)<<P:Predicate_immUsNeg>>:$src2) - Complexity = 7
                  // Dst: (SUB_2rus:i32 GRRegs:i32:$src1, (neg_xform:i32 (imm:i32)<<P:Predicate_immUsNeg>>:$src2))
/*200*/         /*Scope*/ 17, /*->218*/
/*201*/           OPC_CheckPredicate, 3, // Predicate_immUs4Neg
/*203*/           OPC_MoveParent,
/*204*/           OPC_EmitConvertToTarget, 1,
/*206*/           OPC_EmitNodeXForm, 2, 2, // div4neg_xform
/*209*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWB_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GRRegs:i32:$src1, (imm:i32)<<P:Predicate_immUs4Neg>>:$src2) - Complexity = 7
                  // Dst: (LDAWB_l2rus:i32 GRRegs:i32:$src1, (div4neg_xform:i32 (imm:i32)<<P:Predicate_immUs4Neg>>:$src2))
/*218*/         0, /*End of Scope*/
/*219*/       /*Scope*/ 9, /*->229*/
/*220*/         OPC_MorphNodeTo, TARGET_VAL(XCore::ADD_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                // Dst: (ADD_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*229*/       0, /*End of Scope*/
/*230*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 56|128,3/*440*/,  TARGET_VAL(ISD::LOAD),// ->675
/*235*/     OPC_RecordMemRef,
/*236*/     OPC_RecordNode,   // #0 = 'ld' chained node
/*237*/     OPC_Scope, 40|128,1/*168*/, /*->408*/ // 4 children in Scope
/*240*/       OPC_MoveChild, 1,
/*242*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*245*/       OPC_Scope, 79, /*->326*/ // 2 children in Scope
/*247*/         OPC_RecordChild0, // #1 = $addr
/*248*/         OPC_MoveChild, 1,
/*250*/         OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*253*/         OPC_RecordChild0, // #2 = $offset
/*254*/         OPC_MoveChild, 1,
/*256*/         OPC_Scope, 43, /*->301*/ // 2 children in Scope
/*258*/           OPC_CheckInteger, 1, 
/*260*/           OPC_MoveParent,
/*261*/           OPC_MoveParent,
/*262*/           OPC_CheckType, MVT::i32,
/*264*/           OPC_MoveParent,
/*265*/           OPC_CheckPredicate, 4, // Predicate_unindexedload
/*267*/           OPC_CheckType, MVT::i32,
/*269*/           OPC_Scope, 14, /*->285*/ // 2 children in Scope
/*271*/             OPC_CheckPredicate, 5, // Predicate_sextload
/*273*/             OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*275*/             OPC_EmitMergeInputChains1_0,
/*276*/             OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 15
                    // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*285*/           /*Scope*/ 14, /*->300*/
/*286*/             OPC_CheckPredicate, 7, // Predicate_extload
/*288*/             OPC_CheckPredicate, 8, // Predicate_extloadi16
/*290*/             OPC_EmitMergeInputChains1_0,
/*291*/             OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 15
                    // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*300*/           0, /*End of Scope*/
/*301*/         /*Scope*/ 23, /*->325*/
/*302*/           OPC_CheckInteger, 2, 
/*304*/           OPC_MoveParent,
/*305*/           OPC_MoveParent,
/*306*/           OPC_CheckType, MVT::i32,
/*308*/           OPC_MoveParent,
/*309*/           OPC_CheckPredicate, 4, // Predicate_unindexedload
/*311*/           OPC_CheckPredicate, 9, // Predicate_load
/*313*/           OPC_CheckType, MVT::i32,
/*315*/           OPC_EmitMergeInputChains1_0,
/*316*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LDW_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32)))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 15
                  // Dst: (LDW_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*325*/         0, /*End of Scope*/
/*326*/       /*Scope*/ 80, /*->407*/
/*327*/         OPC_MoveChild, 0,
/*329*/         OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*332*/         OPC_RecordChild0, // #1 = $offset
/*333*/         OPC_MoveChild, 1,
/*335*/         OPC_Scope, 44, /*->381*/ // 2 children in Scope
/*337*/           OPC_CheckInteger, 1, 
/*339*/           OPC_MoveParent,
/*340*/           OPC_MoveParent,
/*341*/           OPC_RecordChild1, // #2 = $addr
/*342*/           OPC_CheckType, MVT::i32,
/*344*/           OPC_MoveParent,
/*345*/           OPC_CheckPredicate, 4, // Predicate_unindexedload
/*347*/           OPC_CheckType, MVT::i32,
/*349*/           OPC_Scope, 14, /*->365*/ // 2 children in Scope
/*351*/             OPC_CheckPredicate, 7, // Predicate_extload
/*353*/             OPC_CheckPredicate, 8, // Predicate_extloadi16
/*355*/             OPC_EmitMergeInputChains1_0,
/*356*/             OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
                    // Src: (ld:i32 (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 15
                    // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*365*/           /*Scope*/ 14, /*->380*/
/*366*/             OPC_CheckPredicate, 5, // Predicate_sextload
/*368*/             OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*370*/             OPC_EmitMergeInputChains1_0,
/*371*/             OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
                    // Src: (ld:i32 (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 15
                    // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*380*/           0, /*End of Scope*/
/*381*/         /*Scope*/ 24, /*->406*/
/*382*/           OPC_CheckInteger, 2, 
/*384*/           OPC_MoveParent,
/*385*/           OPC_MoveParent,
/*386*/           OPC_RecordChild1, // #2 = $addr
/*387*/           OPC_CheckType, MVT::i32,
/*389*/           OPC_MoveParent,
/*390*/           OPC_CheckPredicate, 4, // Predicate_unindexedload
/*392*/           OPC_CheckPredicate, 9, // Predicate_load
/*394*/           OPC_CheckType, MVT::i32,
/*396*/           OPC_EmitMergeInputChains1_0,
/*397*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LDW_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
                  // Src: (ld:i32 (add:i32 (shl:i32 GRRegs:i32:$offset, 2:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 15
                  // Dst: (LDW_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*406*/         0, /*End of Scope*/
/*407*/       0, /*End of Scope*/
/*408*/     /*Scope*/ 22, /*->431*/
/*409*/       OPC_RecordChild1, // #1 = $addr
/*410*/       OPC_CheckChild1Type, MVT::i32,
/*412*/       OPC_CheckPredicate, 4, // Predicate_unindexedload
/*414*/       OPC_CheckPredicate, 9, // Predicate_load
/*416*/       OPC_CheckType, MVT::i32,
/*418*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRspii:$addr #2 #3
/*421*/       OPC_EmitMergeInputChains1_0,
/*422*/       OPC_MorphNodeTo, TARGET_VAL(XCore::LDWFI), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 ADDRspii:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LDWFI:i32 ADDRspii:i32:$addr)
/*431*/     /*Scope*/ 110, /*->542*/
/*432*/       OPC_MoveChild, 1,
/*434*/       OPC_SwitchOpcode /*2 cases */, 77,  TARGET_VAL(ISD::ADD),// ->515
/*438*/         OPC_RecordChild0, // #1 = $addr
/*439*/         OPC_RecordChild1, // #2 = $offset
/*440*/         OPC_Scope, 32, /*->474*/ // 2 children in Scope
/*442*/           OPC_MoveChild, 1,
/*444*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*447*/           OPC_CheckPredicate, 1, // Predicate_immUs4
/*449*/           OPC_MoveParent,
/*450*/           OPC_CheckType, MVT::i32,
/*452*/           OPC_MoveParent,
/*453*/           OPC_CheckPredicate, 4, // Predicate_unindexedload
/*455*/           OPC_CheckPredicate, 9, // Predicate_load
/*457*/           OPC_CheckType, MVT::i32,
/*459*/           OPC_EmitMergeInputChains1_0,
/*460*/           OPC_EmitConvertToTarget, 2,
/*462*/           OPC_EmitNodeXForm, 0, 3, // div4_xform
/*465*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LDW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4, 
                  // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 11
                  // Dst: (LDW_2rus:i32 GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
/*474*/         /*Scope*/ 39, /*->514*/
/*475*/           OPC_CheckType, MVT::i32,
/*477*/           OPC_MoveParent,
/*478*/           OPC_CheckPredicate, 4, // Predicate_unindexedload
/*480*/           OPC_CheckType, MVT::i32,
/*482*/           OPC_Scope, 14, /*->498*/ // 2 children in Scope
/*484*/             OPC_CheckPredicate, 10, // Predicate_zextload
/*486*/             OPC_CheckPredicate, 11, // Predicate_zextloadi8
/*488*/             OPC_EmitMergeInputChains1_0,
/*489*/             OPC_MorphNodeTo, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, GRRegs:i32:$offset))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 7
                    // Dst: (LD8U_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*498*/           /*Scope*/ 14, /*->513*/
/*499*/             OPC_CheckPredicate, 7, // Predicate_extload
/*501*/             OPC_CheckPredicate, 12, // Predicate_extloadi8
/*503*/             OPC_EmitMergeInputChains1_0,
/*504*/             OPC_MorphNodeTo, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, GRRegs:i32:$offset))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 7
                    // Dst: (LD8U_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*513*/           0, /*End of Scope*/
/*514*/         0, /*End of Scope*/
              /*SwitchOpcode*/ 23,  TARGET_VAL(XCoreISD::DPRelativeWrapper),// ->541
/*518*/         OPC_RecordChild0, // #1 = $b
/*519*/         OPC_MoveChild, 0,
/*521*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*524*/         OPC_MoveParent,
/*525*/         OPC_MoveParent,
/*526*/         OPC_CheckPredicate, 4, // Predicate_unindexedload
/*528*/         OPC_CheckPredicate, 9, // Predicate_load
/*530*/         OPC_CheckType, MVT::i32,
/*532*/         OPC_EmitMergeInputChains1_0,
/*533*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDWDP_lru6), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (ld:i32 (dprelwrapper:iPTR (tglobaladdr:iPTR):$b))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 10
                // Dst: (LDWDP_lru6:i32 (tglobaladdr:i32):$b)
              0, // EndSwitchOpcode
/*542*/     /*Scope*/ 2|128,1/*130*/, /*->674*/
/*544*/       OPC_RecordChild1, // #1 = $addr
/*545*/       OPC_CheckChild1Type, MVT::i32,
/*547*/       OPC_CheckPredicate, 4, // Predicate_unindexedload
/*549*/       OPC_CheckType, MVT::i32,
/*551*/       OPC_Scope, 15, /*->568*/ // 4 children in Scope
/*553*/         OPC_CheckPredicate, 9, // Predicate_load
/*555*/         OPC_EmitMergeInputChains1_0,
/*556*/         OPC_EmitInteger, MVT::i32, 0, 
/*559*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 4
                // Dst: (LDW_2rus:i32 GRRegs:i32:$addr, 0:i32)
/*568*/       /*Scope*/ 25, /*->594*/
/*569*/         OPC_CheckPredicate, 10, // Predicate_zextload
/*571*/         OPC_CheckPredicate, 11, // Predicate_zextloadi8
/*573*/         OPC_EmitMergeInputChains1_0,
/*574*/         OPC_EmitInteger, MVT::i32, 0, 
/*577*/         OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*585*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 4
                // Dst: (LD8U_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*594*/       /*Scope*/ 25, /*->620*/
/*595*/         OPC_CheckPredicate, 5, // Predicate_sextload
/*597*/         OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*599*/         OPC_EmitMergeInputChains1_0,
/*600*/         OPC_EmitInteger, MVT::i32, 0, 
/*603*/         OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*611*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 4
                // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*620*/       /*Scope*/ 52, /*->673*/
/*621*/         OPC_CheckPredicate, 7, // Predicate_extload
/*623*/         OPC_Scope, 23, /*->648*/ // 2 children in Scope
/*625*/           OPC_CheckPredicate, 12, // Predicate_extloadi8
/*627*/           OPC_EmitMergeInputChains1_0,
/*628*/           OPC_EmitInteger, MVT::i32, 0, 
/*631*/           OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*639*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                  // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 4
                  // Dst: (LD8U_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*648*/         /*Scope*/ 23, /*->672*/
/*649*/           OPC_CheckPredicate, 8, // Predicate_extloadi16
/*651*/           OPC_EmitMergeInputChains1_0,
/*652*/           OPC_EmitInteger, MVT::i32, 0, 
/*655*/           OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*663*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                  // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 4
                  // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*672*/         0, /*End of Scope*/
/*673*/       0, /*End of Scope*/
/*674*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 61|128,2/*317*/,  TARGET_VAL(ISD::STORE),// ->996
/*679*/     OPC_RecordMemRef,
/*680*/     OPC_RecordNode,   // #0 = 'st' chained node
/*681*/     OPC_RecordChild1, // #1 = $val
/*682*/     OPC_CheckChild1Type, MVT::i32,
/*684*/     OPC_Scope, 124, /*->810*/ // 4 children in Scope
/*686*/       OPC_MoveChild, 2,
/*688*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*691*/       OPC_Scope, 57, /*->750*/ // 2 children in Scope
/*693*/         OPC_RecordChild0, // #2 = $addr
/*694*/         OPC_MoveChild, 1,
/*696*/         OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*699*/         OPC_RecordChild0, // #3 = $offset
/*700*/         OPC_MoveChild, 1,
/*702*/         OPC_Scope, 23, /*->727*/ // 2 children in Scope
/*704*/           OPC_CheckInteger, 1, 
/*706*/           OPC_MoveParent,
/*707*/           OPC_MoveParent,
/*708*/           OPC_CheckType, MVT::i32,
/*710*/           OPC_MoveParent,
/*711*/           OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*713*/           OPC_CheckPredicate, 14, // Predicate_truncstore
/*715*/           OPC_CheckPredicate, 15, // Predicate_truncstorei16
/*717*/           OPC_EmitMergeInputChains1_0,
/*718*/           OPC_MorphNodeTo, TARGET_VAL(XCore::ST16_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (st GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 15
                  // Dst: (ST16_l3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*727*/         /*Scope*/ 21, /*->749*/
/*728*/           OPC_CheckInteger, 2, 
/*730*/           OPC_MoveParent,
/*731*/           OPC_MoveParent,
/*732*/           OPC_CheckType, MVT::i32,
/*734*/           OPC_MoveParent,
/*735*/           OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*737*/           OPC_CheckPredicate, 16, // Predicate_store
/*739*/           OPC_EmitMergeInputChains1_0,
/*740*/           OPC_MorphNodeTo, TARGET_VAL(XCore::STW_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (st GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32)))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 15
                  // Dst: (STW_l3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*749*/         0, /*End of Scope*/
/*750*/       /*Scope*/ 58, /*->809*/
/*751*/         OPC_MoveChild, 0,
/*753*/         OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*756*/         OPC_RecordChild0, // #2 = $offset
/*757*/         OPC_MoveChild, 1,
/*759*/         OPC_Scope, 24, /*->785*/ // 2 children in Scope
/*761*/           OPC_CheckInteger, 1, 
/*763*/           OPC_MoveParent,
/*764*/           OPC_MoveParent,
/*765*/           OPC_RecordChild1, // #3 = $addr
/*766*/           OPC_CheckType, MVT::i32,
/*768*/           OPC_MoveParent,
/*769*/           OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*771*/           OPC_CheckPredicate, 14, // Predicate_truncstore
/*773*/           OPC_CheckPredicate, 15, // Predicate_truncstorei16
/*775*/           OPC_EmitMergeInputChains1_0,
/*776*/           OPC_MorphNodeTo, TARGET_VAL(XCore::ST16_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                  // Src: (st GRRegs:i32:$val, (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 15
                  // Dst: (ST16_l3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*785*/         /*Scope*/ 22, /*->808*/
/*786*/           OPC_CheckInteger, 2, 
/*788*/           OPC_MoveParent,
/*789*/           OPC_MoveParent,
/*790*/           OPC_RecordChild1, // #3 = $addr
/*791*/           OPC_CheckType, MVT::i32,
/*793*/           OPC_MoveParent,
/*794*/           OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*796*/           OPC_CheckPredicate, 16, // Predicate_store
/*798*/           OPC_EmitMergeInputChains1_0,
/*799*/           OPC_MorphNodeTo, TARGET_VAL(XCore::STW_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                  // Src: (st GRRegs:i32:$val, (add:i32 (shl:i32 GRRegs:i32:$offset, 2:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 15
                  // Dst: (STW_l3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*808*/         0, /*End of Scope*/
/*809*/       0, /*End of Scope*/
/*810*/     /*Scope*/ 20, /*->831*/
/*811*/       OPC_RecordChild2, // #2 = $addr
/*812*/       OPC_CheckChild2Type, MVT::i32,
/*814*/       OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*816*/       OPC_CheckPredicate, 16, // Predicate_store
/*818*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRspii:$addr #3 #4
/*821*/       OPC_EmitMergeInputChains1_0,
/*822*/       OPC_MorphNodeTo, TARGET_VAL(XCore::STWFI), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (st GRRegs:i32:$src, ADDRspii:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
              // Dst: (STWFI GRRegs:i32:$src, ADDRspii:i32:$addr)
/*831*/     /*Scope*/ 86, /*->918*/
/*832*/       OPC_MoveChild, 2,
/*834*/       OPC_SwitchOpcode /*2 cases */, 55,  TARGET_VAL(ISD::ADD),// ->893
/*838*/         OPC_RecordChild0, // #2 = $addr
/*839*/         OPC_RecordChild1, // #3 = $offset
/*840*/         OPC_Scope, 30, /*->872*/ // 2 children in Scope
/*842*/           OPC_MoveChild, 1,
/*844*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*847*/           OPC_CheckPredicate, 1, // Predicate_immUs4
/*849*/           OPC_MoveParent,
/*850*/           OPC_CheckType, MVT::i32,
/*852*/           OPC_MoveParent,
/*853*/           OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*855*/           OPC_CheckPredicate, 16, // Predicate_store
/*857*/           OPC_EmitMergeInputChains1_0,
/*858*/           OPC_EmitConvertToTarget, 3,
/*860*/           OPC_EmitNodeXForm, 0, 4, // div4_xform
/*863*/           OPC_MorphNodeTo, TARGET_VAL(XCore::STW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 5, 
                  // Src: (st GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 11
                  // Dst: (STW_2rus GRRegs:i32:$val, GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
/*872*/         /*Scope*/ 19, /*->892*/
/*873*/           OPC_CheckType, MVT::i32,
/*875*/           OPC_MoveParent,
/*876*/           OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*878*/           OPC_CheckPredicate, 14, // Predicate_truncstore
/*880*/           OPC_CheckPredicate, 17, // Predicate_truncstorei8
/*882*/           OPC_EmitMergeInputChains1_0,
/*883*/           OPC_MorphNodeTo, TARGET_VAL(XCore::ST8_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (st GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, GRRegs:i32:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 7
                  // Dst: (ST8_l3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*892*/         0, /*End of Scope*/
              /*SwitchOpcode*/ 21,  TARGET_VAL(XCoreISD::DPRelativeWrapper),// ->917
/*896*/         OPC_RecordChild0, // #2 = $b
/*897*/         OPC_MoveChild, 0,
/*899*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*902*/         OPC_MoveParent,
/*903*/         OPC_MoveParent,
/*904*/         OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*906*/         OPC_CheckPredicate, 16, // Predicate_store
/*908*/         OPC_EmitMergeInputChains1_0,
/*909*/         OPC_MorphNodeTo, TARGET_VAL(XCore::STWDP_lru6), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (st RRegs:i32:$a, (dprelwrapper:iPTR (tglobaladdr:iPTR):$b))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 10
                // Dst: (STWDP_lru6 RRegs:i32:$a, (tglobaladdr:i32):$b)
              0, // EndSwitchOpcode
/*918*/     /*Scope*/ 76, /*->995*/
/*919*/       OPC_RecordChild2, // #2 = $addr
/*920*/       OPC_CheckChild2Type, MVT::i32,
/*922*/       OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*924*/       OPC_Scope, 15, /*->941*/ // 2 children in Scope
/*926*/         OPC_CheckPredicate, 16, // Predicate_store
/*928*/         OPC_EmitMergeInputChains1_0,
/*929*/         OPC_EmitInteger, MVT::i32, 0, 
/*932*/         OPC_MorphNodeTo, TARGET_VAL(XCore::STW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                // Src: (st GRRegs:i32:$val, GRRegs:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 4
                // Dst: (STW_2rus GRRegs:i32:$val, GRRegs:i32:$addr, 0:i32)
/*941*/       /*Scope*/ 52, /*->994*/
/*942*/         OPC_CheckPredicate, 14, // Predicate_truncstore
/*944*/         OPC_Scope, 23, /*->969*/ // 2 children in Scope
/*946*/           OPC_CheckPredicate, 17, // Predicate_truncstorei8
/*948*/           OPC_EmitMergeInputChains1_0,
/*949*/           OPC_EmitInteger, MVT::i32, 0, 
/*952*/           OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*960*/           OPC_MorphNodeTo, TARGET_VAL(XCore::ST8_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 4, 
                  // Src: (st GRRegs:i32:$val, GRRegs:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 4
                  // Dst: (ST8_l3r GRRegs:i32:$val, GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*969*/         /*Scope*/ 23, /*->993*/
/*970*/           OPC_CheckPredicate, 15, // Predicate_truncstorei16
/*972*/           OPC_EmitMergeInputChains1_0,
/*973*/           OPC_EmitInteger, MVT::i32, 0, 
/*976*/           OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*984*/           OPC_MorphNodeTo, TARGET_VAL(XCore::ST16_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 4, 
                  // Src: (st GRRegs:i32:$val, GRRegs:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 4
                  // Dst: (ST16_l3r GRRegs:i32:$val, GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*993*/         0, /*End of Scope*/
/*994*/       0, /*End of Scope*/
/*995*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 94,  TARGET_VAL(ISD::SRA),// ->1093
/*999*/     OPC_Scope, 35, /*->1036*/ // 2 children in Scope
/*1001*/      OPC_MoveChild, 0,
/*1003*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*1006*/      OPC_RecordChild0, // #0 = $src
/*1007*/      OPC_RecordChild1, // #1 = $imm
/*1008*/      OPC_MoveChild, 1,
/*1010*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1013*/      OPC_CheckPredicate, 18, // Predicate_immBpwSubBitp
/*1015*/      OPC_MoveParent,
/*1016*/      OPC_MoveParent,
/*1017*/      OPC_MoveChild, 1,
/*1019*/      OPC_CheckSame, 1,
/*1021*/      OPC_MoveParent,
/*1022*/      OPC_EmitConvertToTarget, 1,
/*1024*/      OPC_EmitNodeXForm, 3, 2, // bpwsub_xform
/*1027*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
              // Src: (sra:i32 (shl:i32 GRRegs:i32:$src, (imm:i32)<<P:Predicate_immBpwSubBitp>>:$imm), (imm:i32)<<P:Predicate_immBpwSubBitp>>:$imm) - Complexity = 14
              // Dst: (SEXT_rus:i32 GRRegs:i32:$src, (bpwsub_xform:i32 (imm:i32)<<P:Predicate_immBpwSubBitp>>:$imm))
/*1036*/    /*Scope*/ 55, /*->1092*/
/*1037*/      OPC_RecordChild0, // #0 = $src
/*1038*/      OPC_Scope, 17, /*->1057*/ // 2 children in Scope
/*1040*/        OPC_MoveChild, 1,
/*1042*/        OPC_CheckInteger, 31, 
/*1044*/        OPC_MoveParent,
/*1045*/        OPC_EmitInteger, MVT::i32, 32, 
/*1048*/        OPC_MorphNodeTo, TARGET_VAL(XCore::ASHR_l2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i32 GRRegs:i32:$src, 31:i32) - Complexity = 8
                // Dst: (ASHR_l2rus:i32 GRRegs:i32:$src, 32:i32)
/*1057*/      /*Scope*/ 33, /*->1091*/
/*1058*/        OPC_RecordChild1, // #1 = $c
/*1059*/        OPC_Scope, 19, /*->1080*/ // 2 children in Scope
/*1061*/          OPC_MoveChild, 1,
/*1063*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1066*/          OPC_CheckPredicate, 19, // Predicate_immBitp
/*1068*/          OPC_MoveParent,
/*1069*/          OPC_EmitConvertToTarget, 1,
/*1071*/          OPC_MorphNodeTo, TARGET_VAL(XCore::ASHR_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sra:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immBitp>>:$c) - Complexity = 7
                  // Dst: (ASHR_l2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*1080*/        /*Scope*/ 9, /*->1090*/
/*1081*/          OPC_MorphNodeTo, TARGET_VAL(XCore::ASHR_l3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                  // Dst: (ASHR_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*1090*/        0, /*End of Scope*/
/*1091*/      0, /*End of Scope*/
/*1092*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 0|128,5/*640*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->1737
/*1097*/    OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*1098*/    OPC_MoveChild, 1,
/*1100*/    OPC_Scope, 58, /*->1160*/ // 28 children in Scope
/*1102*/      OPC_CheckInteger, 111|128,18/*2415*/, 
/*1105*/      OPC_MoveParent,
/*1106*/      OPC_RecordChild2, // #1 = $a
/*1107*/      OPC_CheckChild2Type, MVT::i32,
/*1109*/      OPC_RecordChild3, // #2 = $b
/*1110*/      OPC_Scope, 37, /*->1149*/ // 2 children in Scope
/*1112*/        OPC_MoveChild, 3,
/*1114*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1117*/        OPC_Scope, 14, /*->1133*/ // 2 children in Scope
/*1119*/          OPC_CheckPredicate, 20, // Predicate_immU6
/*1121*/          OPC_MoveParent,
/*1122*/          OPC_EmitMergeInputChains1_0,
/*1123*/          OPC_EmitConvertToTarget, 2,
/*1125*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SETC_ru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (intrinsic_void 2415:iPTR, GRRegs:i32:$a, (imm:i32)<<P:Predicate_immU6>>:$b) - Complexity = 12
                  // Dst: (SETC_ru6 GRRegs:i32:$a, (imm:i32):$b)
/*1133*/        /*Scope*/ 14, /*->1148*/
/*1134*/          OPC_CheckPredicate, 21, // Predicate_immU16
/*1136*/          OPC_MoveParent,
/*1137*/          OPC_EmitMergeInputChains1_0,
/*1138*/          OPC_EmitConvertToTarget, 2,
/*1140*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SETC_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (intrinsic_void 2415:iPTR, GRRegs:i32:$a, (imm:i32)<<P:Predicate_immU16>>:$b) - Complexity = 12
                  // Dst: (SETC_lru6 GRRegs:i32:$a, (imm:i32):$b)
/*1148*/        0, /*End of Scope*/
/*1149*/      /*Scope*/ 9, /*->1159*/
/*1150*/        OPC_EmitMergeInputChains1_0,
/*1151*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SETC_l2r), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 2415:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
                // Dst: (SETC_l2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1159*/      0, /*End of Scope*/
/*1160*/    /*Scope*/ 40, /*->1201*/
/*1161*/      OPC_CheckInteger, 119|128,18/*2423*/, 
/*1164*/      OPC_MoveParent,
/*1165*/      OPC_RecordChild2, // #1 = $a
/*1166*/      OPC_MoveChild, 2,
/*1168*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1171*/      OPC_Scope, 13, /*->1186*/ // 2 children in Scope
/*1173*/        OPC_CheckPredicate, 20, // Predicate_immU6
/*1175*/        OPC_MoveParent,
/*1176*/        OPC_EmitMergeInputChains1_0,
/*1177*/        OPC_EmitConvertToTarget, 1,
/*1179*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SETSR_u6), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2423:iPTR, (imm:i32)<<P:Predicate_immU6>>:$a) - Complexity = 12
                // Dst: (SETSR_u6 (imm:i32):$a)
/*1186*/      /*Scope*/ 13, /*->1200*/
/*1187*/        OPC_CheckPredicate, 21, // Predicate_immU16
/*1189*/        OPC_MoveParent,
/*1190*/        OPC_EmitMergeInputChains1_0,
/*1191*/        OPC_EmitConvertToTarget, 1,
/*1193*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SETSR_lu6), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2423:iPTR, (imm:i32)<<P:Predicate_immU16>>:$a) - Complexity = 12
                // Dst: (SETSR_lu6 (imm:i32):$a)
/*1200*/      0, /*End of Scope*/
/*1201*/    /*Scope*/ 40, /*->1242*/
/*1202*/      OPC_CheckInteger, 82|128,18/*2386*/, 
/*1205*/      OPC_MoveParent,
/*1206*/      OPC_RecordChild2, // #1 = $a
/*1207*/      OPC_MoveChild, 2,
/*1209*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1212*/      OPC_Scope, 13, /*->1227*/ // 2 children in Scope
/*1214*/        OPC_CheckPredicate, 20, // Predicate_immU6
/*1216*/        OPC_MoveParent,
/*1217*/        OPC_EmitMergeInputChains1_0,
/*1218*/        OPC_EmitConvertToTarget, 1,
/*1220*/        OPC_MorphNodeTo, TARGET_VAL(XCore::CLRSR_u6), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2386:iPTR, (imm:i32)<<P:Predicate_immU6>>:$a) - Complexity = 12
                // Dst: (CLRSR_u6 (imm:i32):$a)
/*1227*/      /*Scope*/ 13, /*->1241*/
/*1228*/        OPC_CheckPredicate, 21, // Predicate_immU16
/*1230*/        OPC_MoveParent,
/*1231*/        OPC_EmitMergeInputChains1_0,
/*1232*/        OPC_EmitConvertToTarget, 1,
/*1234*/        OPC_MorphNodeTo, TARGET_VAL(XCore::CLRSR_lu6), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2386:iPTR, (imm:i32)<<P:Predicate_immU16>>:$a) - Complexity = 12
                // Dst: (CLRSR_lu6 (imm:i32):$a)
/*1241*/      0, /*End of Scope*/
/*1242*/    /*Scope*/ 40, /*->1283*/
/*1243*/      OPC_CheckInteger, 107|128,18/*2411*/, 
/*1246*/      OPC_MoveParent,
/*1247*/      OPC_RecordChild2, // #1 = $r
/*1248*/      OPC_CheckChild2Type, MVT::i32,
/*1250*/      OPC_RecordChild3, // #2 = $val
/*1251*/      OPC_Scope, 19, /*->1272*/ // 2 children in Scope
/*1253*/        OPC_MoveChild, 3,
/*1255*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1258*/        OPC_CheckPredicate, 0, // Predicate_immUs
/*1260*/        OPC_MoveParent,
/*1261*/        OPC_EmitMergeInputChains1_0,
/*1262*/        OPC_EmitConvertToTarget, 2,
/*1264*/        OPC_MorphNodeTo, TARGET_VAL(XCore::OUTCT_rus), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 2411:iPTR, GRRegs:i32:$r, (imm:i32)<<P:Predicate_immUs>>:$val) - Complexity = 12
                // Dst: (OUTCT_rus GRRegs:i32:$r, (imm:i32):$val)
/*1272*/      /*Scope*/ 9, /*->1282*/
/*1273*/        OPC_EmitMergeInputChains1_0,
/*1274*/        OPC_MorphNodeTo, TARGET_VAL(XCore::OUTCT_2r), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 2411:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
                // Dst: (OUTCT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1282*/      0, /*End of Scope*/
/*1283*/    /*Scope*/ 40, /*->1324*/
/*1284*/      OPC_CheckInteger, 80|128,18/*2384*/, 
/*1287*/      OPC_MoveParent,
/*1288*/      OPC_RecordChild2, // #1 = $r
/*1289*/      OPC_CheckChild2Type, MVT::i32,
/*1291*/      OPC_RecordChild3, // #2 = $val
/*1292*/      OPC_Scope, 19, /*->1313*/ // 2 children in Scope
/*1294*/        OPC_MoveChild, 3,
/*1296*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1299*/        OPC_CheckPredicate, 0, // Predicate_immUs
/*1301*/        OPC_MoveParent,
/*1302*/        OPC_EmitMergeInputChains1_0,
/*1303*/        OPC_EmitConvertToTarget, 2,
/*1305*/        OPC_MorphNodeTo, TARGET_VAL(XCore::CHKCT_rus), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 2384:iPTR, GRRegs:i32:$r, (imm:i32)<<P:Predicate_immUs>>:$val) - Complexity = 12
                // Dst: (CHKCT_rus GRRegs:i32:$r, (imm:i32):$val)
/*1313*/      /*Scope*/ 9, /*->1323*/
/*1314*/        OPC_EmitMergeInputChains1_0,
/*1315*/        OPC_MorphNodeTo, TARGET_VAL(XCore::CHKCT_2r), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 2384:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
                // Dst: (CHKCT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1323*/      0, /*End of Scope*/
/*1324*/    /*Scope*/ 17, /*->1342*/
/*1325*/      OPC_CheckInteger, 117|128,18/*2421*/, 
/*1328*/      OPC_MoveParent,
/*1329*/      OPC_RecordChild2, // #1 = $r
/*1330*/      OPC_CheckChild2Type, MVT::i32,
/*1332*/      OPC_RecordChild3, // #2 = $val
/*1333*/      OPC_EmitMergeInputChains1_0,
/*1334*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETPT_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2421:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
              // Dst: (SETPT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1342*/    /*Scope*/ 17, /*->1360*/
/*1343*/      OPC_CheckInteger, 109|128,18/*2413*/, 
/*1346*/      OPC_MoveParent,
/*1347*/      OPC_RecordChild2, // #1 = $r
/*1348*/      OPC_CheckChild2Type, MVT::i32,
/*1350*/      OPC_RecordChild3, // #2 = $val
/*1351*/      OPC_EmitMergeInputChains1_0,
/*1352*/      OPC_MorphNodeTo, TARGET_VAL(XCore::OUTT_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2413:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
              // Dst: (OUTT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1360*/    /*Scope*/ 17, /*->1378*/
/*1361*/      OPC_CheckInteger, 106|128,18/*2410*/, 
/*1364*/      OPC_MoveParent,
/*1365*/      OPC_RecordChild2, // #1 = $r
/*1366*/      OPC_CheckChild2Type, MVT::i32,
/*1368*/      OPC_RecordChild3, // #2 = $val
/*1369*/      OPC_EmitMergeInputChains1_0,
/*1370*/      OPC_MorphNodeTo, TARGET_VAL(XCore::OUT_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2410:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
              // Dst: (OUT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1378*/    /*Scope*/ 17, /*->1396*/
/*1379*/      OPC_CheckInteger, 113|128,18/*2417*/, 
/*1382*/      OPC_MoveParent,
/*1383*/      OPC_RecordChild2, // #1 = $r
/*1384*/      OPC_CheckChild2Type, MVT::i32,
/*1386*/      OPC_RecordChild3, // #2 = $val
/*1387*/      OPC_EmitMergeInputChains1_0,
/*1388*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETD_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2417:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
              // Dst: (SETD_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1396*/    /*Scope*/ 17, /*->1414*/
/*1397*/      OPC_CheckInteger, 116|128,18/*2420*/, 
/*1400*/      OPC_MoveParent,
/*1401*/      OPC_RecordChild2, // #1 = $src1
/*1402*/      OPC_CheckChild2Type, MVT::i32,
/*1404*/      OPC_RecordChild3, // #2 = $src2
/*1405*/      OPC_EmitMergeInputChains1_0,
/*1406*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETPSC_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2420:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
              // Dst: (SETPSC_2r GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1414*/    /*Scope*/ 19, /*->1434*/
/*1415*/      OPC_CheckInteger, 101|128,18/*2405*/, 
/*1418*/      OPC_MoveParent,
/*1419*/      OPC_RecordChild2, // #1 = $t
/*1420*/      OPC_CheckChild2Type, MVT::i32,
/*1422*/      OPC_RecordChild3, // #2 = $src
/*1423*/      OPC_CheckChild3Type, MVT::i32,
/*1425*/      OPC_EmitMergeInputChains1_0,
/*1426*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INITSP_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 1, 
              // Src: (intrinsic_void 2405:iPTR, GRRegs:i32:$t, GRRegs:i32:$src) - Complexity = 8
              // Dst: (INITSP_2r GRRegs:i32:$src, GRRegs:i32:$t)
/*1434*/    /*Scope*/ 19, /*->1454*/
/*1435*/      OPC_CheckInteger, 100|128,18/*2404*/, 
/*1438*/      OPC_MoveParent,
/*1439*/      OPC_RecordChild2, // #1 = $t
/*1440*/      OPC_CheckChild2Type, MVT::i32,
/*1442*/      OPC_RecordChild3, // #2 = $src
/*1443*/      OPC_CheckChild3Type, MVT::i32,
/*1445*/      OPC_EmitMergeInputChains1_0,
/*1446*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INITPC_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 1, 
              // Src: (intrinsic_void 2404:iPTR, GRRegs:i32:$t, GRRegs:i32:$src) - Complexity = 8
              // Dst: (INITPC_2r GRRegs:i32:$src, GRRegs:i32:$t)
/*1454*/    /*Scope*/ 19, /*->1474*/
/*1455*/      OPC_CheckInteger, 97|128,18/*2401*/, 
/*1458*/      OPC_MoveParent,
/*1459*/      OPC_RecordChild2, // #1 = $t
/*1460*/      OPC_CheckChild2Type, MVT::i32,
/*1462*/      OPC_RecordChild3, // #2 = $src
/*1463*/      OPC_CheckChild3Type, MVT::i32,
/*1465*/      OPC_EmitMergeInputChains1_0,
/*1466*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INITCP_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 1, 
              // Src: (intrinsic_void 2401:iPTR, GRRegs:i32:$t, GRRegs:i32:$src) - Complexity = 8
              // Dst: (INITCP_2r GRRegs:i32:$src, GRRegs:i32:$t)
/*1474*/    /*Scope*/ 19, /*->1494*/
/*1475*/      OPC_CheckInteger, 98|128,18/*2402*/, 
/*1478*/      OPC_MoveParent,
/*1479*/      OPC_RecordChild2, // #1 = $t
/*1480*/      OPC_CheckChild2Type, MVT::i32,
/*1482*/      OPC_RecordChild3, // #2 = $src
/*1483*/      OPC_CheckChild3Type, MVT::i32,
/*1485*/      OPC_EmitMergeInputChains1_0,
/*1486*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INITDP_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 1, 
              // Src: (intrinsic_void 2402:iPTR, GRRegs:i32:$t, GRRegs:i32:$src) - Complexity = 8
              // Dst: (INITDP_2r GRRegs:i32:$src, GRRegs:i32:$t)
/*1494*/    /*Scope*/ 17, /*->1512*/
/*1495*/      OPC_CheckInteger, 120|128,18/*2424*/, 
/*1498*/      OPC_MoveParent,
/*1499*/      OPC_RecordChild2, // #1 = $r
/*1500*/      OPC_CheckChild2Type, MVT::i32,
/*1502*/      OPC_RecordChild3, // #2 = $val
/*1503*/      OPC_EmitMergeInputChains1_0,
/*1504*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETTW_l2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2424:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
              // Dst: (SETTW_l2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1512*/    /*Scope*/ 15, /*->1528*/
/*1513*/      OPC_CheckInteger, 115|128,18/*2419*/, 
/*1516*/      OPC_MoveParent,
/*1517*/      OPC_RecordChild2, // #1 = $src1
/*1518*/      OPC_RecordChild3, // #2 = $src2
/*1519*/      OPC_EmitMergeInputChains1_0,
/*1520*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETPS_l2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2419:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
              // Dst: (SETPS_l2r GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1528*/    /*Scope*/ 19, /*->1548*/
/*1529*/      OPC_CheckInteger, 99|128,18/*2403*/, 
/*1532*/      OPC_MoveParent,
/*1533*/      OPC_RecordChild2, // #1 = $t
/*1534*/      OPC_CheckChild2Type, MVT::i32,
/*1536*/      OPC_RecordChild3, // #2 = $src
/*1537*/      OPC_CheckChild3Type, MVT::i32,
/*1539*/      OPC_EmitMergeInputChains1_0,
/*1540*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INITLR_l2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 1, 
              // Src: (intrinsic_void 2403:iPTR, GRRegs:i32:$t, GRRegs:i32:$src) - Complexity = 8
              // Dst: (INITLR_l2r GRRegs:i32:$src, GRRegs:i32:$t)
/*1548*/    /*Scope*/ 19, /*->1568*/
/*1549*/      OPC_CheckInteger, 112|128,18/*2416*/, 
/*1552*/      OPC_MoveParent,
/*1553*/      OPC_RecordChild2, // #1 = $src1
/*1554*/      OPC_CheckChild2Type, MVT::i32,
/*1556*/      OPC_RecordChild3, // #2 = $src2
/*1557*/      OPC_CheckChild3Type, MVT::i32,
/*1559*/      OPC_EmitMergeInputChains1_0,
/*1560*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETCLK_l2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2416:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
              // Dst: (SETCLK_l2r GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1568*/    /*Scope*/ 19, /*->1588*/
/*1569*/      OPC_CheckInteger, 118|128,18/*2422*/, 
/*1572*/      OPC_MoveParent,
/*1573*/      OPC_RecordChild2, // #1 = $src1
/*1574*/      OPC_CheckChild2Type, MVT::i32,
/*1576*/      OPC_RecordChild3, // #2 = $src2
/*1577*/      OPC_CheckChild3Type, MVT::i32,
/*1579*/      OPC_EmitMergeInputChains1_0,
/*1580*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETRDY_l2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2422:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
              // Dst: (SETRDY_l2r GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1588*/    /*Scope*/ 15, /*->1604*/
/*1589*/      OPC_CheckInteger, 105|128,18/*2409*/, 
/*1592*/      OPC_MoveParent,
/*1593*/      OPC_RecordChild2, // #1 = $a
/*1594*/      OPC_CheckChild2Type, MVT::i32,
/*1596*/      OPC_EmitMergeInputChains1_0,
/*1597*/      OPC_MorphNodeTo, TARGET_VAL(XCore::MSYNC_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 2409:iPTR, GRRegs:i32:$a) - Complexity = 8
              // Dst: (MSYNC_1r GRRegs:i32:$a)
/*1604*/    /*Scope*/ 15, /*->1620*/
/*1605*/      OPC_CheckInteger, 104|128,18/*2408*/, 
/*1608*/      OPC_MoveParent,
/*1609*/      OPC_RecordChild2, // #1 = $a
/*1610*/      OPC_CheckChild2Type, MVT::i32,
/*1612*/      OPC_EmitMergeInputChains1_0,
/*1613*/      OPC_MorphNodeTo, TARGET_VAL(XCore::MJOIN_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 2408:iPTR, GRRegs:i32:$a) - Complexity = 8
              // Dst: (MJOIN_1r GRRegs:i32:$a)
/*1620*/    /*Scope*/ 15, /*->1636*/
/*1621*/      OPC_CheckInteger, 124|128,18/*2428*/, 
/*1624*/      OPC_MoveParent,
/*1625*/      OPC_RecordChild2, // #1 = $a
/*1626*/      OPC_CheckChild2Type, MVT::i32,
/*1628*/      OPC_EmitMergeInputChains1_0,
/*1629*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SYNCR_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 2428:iPTR, GRRegs:i32:$a) - Complexity = 8
              // Dst: (SYNCR_1r GRRegs:i32:$a)
/*1636*/    /*Scope*/ 15, /*->1652*/
/*1637*/      OPC_CheckInteger, 87|128,18/*2391*/, 
/*1640*/      OPC_MoveParent,
/*1641*/      OPC_RecordChild2, // #1 = $a
/*1642*/      OPC_CheckChild2Type, MVT::i32,
/*1644*/      OPC_EmitMergeInputChains1_0,
/*1645*/      OPC_MorphNodeTo, TARGET_VAL(XCore::FREER_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 2391:iPTR, GRRegs:i32:$a) - Complexity = 8
              // Dst: (FREER_1r GRRegs:i32:$a)
/*1652*/    /*Scope*/ 21, /*->1674*/
/*1653*/      OPC_CheckInteger, 121|128,18/*2425*/, 
/*1656*/      OPC_MoveParent,
/*1657*/      OPC_RecordChild2, // #1 = $a
/*1658*/      OPC_CheckChild2Type, MVT::i32,
/*1660*/      OPC_RecordChild3, // #2 = physreg input R11
/*1661*/      OPC_CheckChild3Type, MVT::i32,
/*1663*/      OPC_EmitMergeInputChains1_0,
/*1664*/      OPC_EmitCopyToReg, 2, XCore::R11,
/*1667*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETV_1r), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 2425:iPTR, GRRegs:i32:$a, R11:i32) - Complexity = 8
              // Dst: (SETV_1r GRRegs:i32:$a)
/*1674*/    /*Scope*/ 21, /*->1696*/
/*1675*/      OPC_CheckInteger, 114|128,18/*2418*/, 
/*1678*/      OPC_MoveParent,
/*1679*/      OPC_RecordChild2, // #1 = $a
/*1680*/      OPC_CheckChild2Type, MVT::i32,
/*1682*/      OPC_RecordChild3, // #2 = physreg input R11
/*1683*/      OPC_CheckChild3Type, MVT::i32,
/*1685*/      OPC_EmitMergeInputChains1_0,
/*1686*/      OPC_EmitCopyToReg, 2, XCore::R11,
/*1689*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETEV_1r), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 2418:iPTR, GRRegs:i32:$a, R11:i32) - Complexity = 8
              // Dst: (SETEV_1r GRRegs:i32:$a)
/*1696*/    /*Scope*/ 15, /*->1712*/
/*1697*/      OPC_CheckInteger, 85|128,18/*2389*/, 
/*1700*/      OPC_MoveParent,
/*1701*/      OPC_RecordChild2, // #1 = $a
/*1702*/      OPC_CheckChild2Type, MVT::i32,
/*1704*/      OPC_EmitMergeInputChains1_0,
/*1705*/      OPC_MorphNodeTo, TARGET_VAL(XCore::EEU_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 2389:iPTR, GRRegs:i32:$a) - Complexity = 8
              // Dst: (EEU_1r GRRegs:i32:$a)
/*1712*/    /*Scope*/ 11, /*->1724*/
/*1713*/      OPC_CheckInteger, 81|128,18/*2385*/, 
/*1716*/      OPC_MoveParent,
/*1717*/      OPC_EmitMergeInputChains1_0,
/*1718*/      OPC_MorphNodeTo, TARGET_VAL(XCore::CLRE_0R), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (intrinsic_void 2385:iPTR) - Complexity = 8
              // Dst: (CLRE_0R)
/*1724*/    /*Scope*/ 11, /*->1736*/
/*1725*/      OPC_CheckInteger, 123|128,18/*2427*/, 
/*1728*/      OPC_MoveParent,
/*1729*/      OPC_EmitMergeInputChains1_0,
/*1730*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SSYNC_0r), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (intrinsic_void 2427:iPTR) - Complexity = 8
              // Dst: (SSYNC_0r)
/*1736*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 126,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->1866
/*1740*/    OPC_MoveChild, 0,
/*1742*/    OPC_Scope, 38, /*->1782*/ // 5 children in Scope
/*1744*/      OPC_CheckInteger, 122|128,18/*2426*/, 
/*1747*/      OPC_MoveParent,
/*1748*/      OPC_RecordChild1, // #0 = $src1
/*1749*/      OPC_RecordChild2, // #1 = $src2
/*1750*/      OPC_Scope, 19, /*->1771*/ // 2 children in Scope
/*1752*/        OPC_MoveChild, 2,
/*1754*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1757*/        OPC_CheckPredicate, 19, // Predicate_immBitp
/*1759*/        OPC_MoveParent,
/*1760*/        OPC_EmitConvertToTarget, 1,
/*1762*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:i32 2426:iPTR, GRRegs:i32:$src1, (imm:i32)<<P:Predicate_immBitp>>:$src2) - Complexity = 12
                // Dst: (SEXT_rus:i32 GRRegs:i32:$src1, (imm:i32):$src2)
/*1771*/      /*Scope*/ 9, /*->1781*/
/*1772*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_2r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:i32 2426:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
                // Dst: (SEXT_2r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1781*/      0, /*End of Scope*/
/*1782*/    /*Scope*/ 38, /*->1821*/
/*1783*/      OPC_CheckInteger, 0|128,19/*2432*/, 
/*1786*/      OPC_MoveParent,
/*1787*/      OPC_RecordChild1, // #0 = $src1
/*1788*/      OPC_RecordChild2, // #1 = $src2
/*1789*/      OPC_Scope, 19, /*->1810*/ // 2 children in Scope
/*1791*/        OPC_MoveChild, 2,
/*1793*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1796*/        OPC_CheckPredicate, 19, // Predicate_immBitp
/*1798*/        OPC_MoveParent,
/*1799*/        OPC_EmitConvertToTarget, 1,
/*1801*/        OPC_MorphNodeTo, TARGET_VAL(XCore::ZEXT_rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:i32 2432:iPTR, GRRegs:i32:$src1, (imm:i32)<<P:Predicate_immBitp>>:$src2) - Complexity = 12
                // Dst: (ZEXT_rus:i32 GRRegs:i32:$src1, (imm:i32):$src2)
/*1810*/      /*Scope*/ 9, /*->1820*/
/*1811*/        OPC_MorphNodeTo, TARGET_VAL(XCore::ZEXT_2r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:i32 2432:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
                // Dst: (ZEXT_2r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1820*/      0, /*End of Scope*/
/*1821*/    /*Scope*/ 17, /*->1839*/
/*1822*/      OPC_CheckInteger, 83|128,18/*2387*/, 
/*1825*/      OPC_MoveParent,
/*1826*/      OPC_RecordChild1, // #0 = $src1
/*1827*/      OPC_RecordChild2, // #1 = $src2
/*1828*/      OPC_RecordChild3, // #2 = $src3
/*1829*/      OPC_MorphNodeTo, TARGET_VAL(XCore::CRC_l3r), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 2387:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2, GRRegs:i32:$src3) - Complexity = 8
              // Dst: (CRC_l3r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2, GRRegs:i32:$src3)
/*1839*/    /*Scope*/ 13, /*->1853*/
/*1840*/      OPC_CheckInteger, 78|128,18/*2382*/, 
/*1843*/      OPC_MoveParent,
/*1844*/      OPC_RecordChild1, // #0 = $src
/*1845*/      OPC_MorphNodeTo, TARGET_VAL(XCore::BITREV_l2r), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 2382:iPTR, GRRegs:i32:$src) - Complexity = 8
              // Dst: (BITREV_l2r:i32 GRRegs:i32:$src)
/*1853*/    /*Scope*/ 11, /*->1865*/
/*1854*/      OPC_CheckInteger, 90|128,18/*2394*/, 
/*1857*/      OPC_MoveParent,
/*1858*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETID_0R), 0,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (intrinsic_wo_chain:i32 2394:iPTR) - Complexity = 8
              // Dst: (GETID_0R:i32)
/*1865*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 10|128,2/*266*/,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->2136
/*1870*/    OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*1871*/    OPC_MoveChild, 1,
/*1873*/    OPC_Scope, 26, /*->1901*/ // 15 children in Scope
/*1875*/      OPC_CheckInteger, 92|128,18/*2396*/, 
/*1878*/      OPC_MoveParent,
/*1879*/      OPC_RecordChild2, // #1 = $type
/*1880*/      OPC_MoveChild, 2,
/*1882*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1885*/      OPC_CheckPredicate, 0, // Predicate_immUs
/*1887*/      OPC_MoveParent,
/*1888*/      OPC_CheckType, MVT::i32,
/*1890*/      OPC_EmitMergeInputChains1_0,
/*1891*/      OPC_EmitConvertToTarget, 1,
/*1893*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETR_rus), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (intrinsic_w_chain:i32 2396:iPTR, (imm:i32)<<P:Predicate_immUs>>:$type) - Complexity = 12
              // Dst: (GETR_rus:i32 (imm:i32):$type)
/*1901*/    /*Scope*/ 16, /*->1918*/
/*1902*/      OPC_CheckInteger, 94|128,18/*2398*/, 
/*1905*/      OPC_MoveParent,
/*1906*/      OPC_RecordChild2, // #1 = $r
/*1907*/      OPC_CheckChild2Type, MVT::i32,
/*1909*/      OPC_EmitMergeInputChains1_0,
/*1910*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETTS_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2398:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (GETTS_2r:i32 GRRegs:i32:$r)
/*1918*/    /*Scope*/ 18, /*->1937*/
/*1919*/      OPC_CheckInteger, 108|128,18/*2412*/, 
/*1922*/      OPC_MoveParent,
/*1923*/      OPC_RecordChild2, // #1 = $r
/*1924*/      OPC_CheckChild2Type, MVT::i32,
/*1926*/      OPC_RecordChild3, // #2 = $src
/*1927*/      OPC_EmitMergeInputChains1_0,
/*1928*/      OPC_MorphNodeTo, TARGET_VAL(XCore::OUTSHR_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (intrinsic_w_chain:i32 2412:iPTR, GRRegs:i32:$r, GRRegs:i32:$src) - Complexity = 8
              // Dst: (OUTSHR_2r:i32 GRRegs:i32:$src, GRRegs:i32:$r)
/*1937*/    /*Scope*/ 16, /*->1954*/
/*1938*/      OPC_CheckInteger, 96|128,18/*2400*/, 
/*1941*/      OPC_MoveParent,
/*1942*/      OPC_RecordChild2, // #1 = $r
/*1943*/      OPC_CheckChild2Type, MVT::i32,
/*1945*/      OPC_EmitMergeInputChains1_0,
/*1946*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INCT_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2400:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (INCT_2r:i32 GRRegs:i32:$r)
/*1954*/    /*Scope*/ 16, /*->1971*/
/*1955*/      OPC_CheckInteger, 103|128,18/*2407*/, 
/*1958*/      OPC_MoveParent,
/*1959*/      OPC_RecordChild2, // #1 = $r
/*1960*/      OPC_CheckChild2Type, MVT::i32,
/*1962*/      OPC_EmitMergeInputChains1_0,
/*1963*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INT_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2407:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (INT_2r:i32 GRRegs:i32:$r)
/*1971*/    /*Scope*/ 16, /*->1988*/
/*1972*/      OPC_CheckInteger, 95|128,18/*2399*/, 
/*1975*/      OPC_MoveParent,
/*1976*/      OPC_RecordChild2, // #1 = $r
/*1977*/      OPC_CheckChild2Type, MVT::i32,
/*1979*/      OPC_EmitMergeInputChains1_0,
/*1980*/      OPC_MorphNodeTo, TARGET_VAL(XCore::IN_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2399:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (IN_2r:i32 GRRegs:i32:$r)
/*1988*/    /*Scope*/ 18, /*->2007*/
/*1989*/      OPC_CheckInteger, 102|128,18/*2406*/, 
/*1992*/      OPC_MoveParent,
/*1993*/      OPC_RecordChild2, // #1 = $r
/*1994*/      OPC_CheckChild2Type, MVT::i32,
/*1996*/      OPC_RecordChild3, // #2 = $src
/*1997*/      OPC_EmitMergeInputChains1_0,
/*1998*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INSHR_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (intrinsic_w_chain:i32 2406:iPTR, GRRegs:i32:$r, GRRegs:i32:$src) - Complexity = 8
              // Dst: (INSHR_2r:i32 GRRegs:i32:$src, GRRegs:i32:$r)
/*2007*/    /*Scope*/ 16, /*->2024*/
/*2008*/      OPC_CheckInteger, 125|128,18/*2429*/, 
/*2011*/      OPC_MoveParent,
/*2012*/      OPC_RecordChild2, // #1 = $src
/*2013*/      OPC_CheckChild2Type, MVT::i32,
/*2015*/      OPC_EmitMergeInputChains1_0,
/*2016*/      OPC_MorphNodeTo, TARGET_VAL(XCore::TESTCT_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2429:iPTR, GRRegs:i32:$src) - Complexity = 8
              // Dst: (TESTCT_2r:i32 GRRegs:i32:$src)
/*2024*/    /*Scope*/ 16, /*->2041*/
/*2025*/      OPC_CheckInteger, 126|128,18/*2430*/, 
/*2028*/      OPC_MoveParent,
/*2029*/      OPC_RecordChild2, // #1 = $src
/*2030*/      OPC_CheckChild2Type, MVT::i32,
/*2032*/      OPC_EmitMergeInputChains1_0,
/*2033*/      OPC_MorphNodeTo, TARGET_VAL(XCore::TESTWCT_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2430:iPTR, GRRegs:i32:$src) - Complexity = 8
              // Dst: (TESTWCT_2r:i32 GRRegs:i32:$src)
/*2041*/    /*Scope*/ 18, /*->2060*/
/*2042*/      OPC_CheckInteger, 93|128,18/*2397*/, 
/*2045*/      OPC_MoveParent,
/*2046*/      OPC_RecordChild2, // #1 = $r
/*2047*/      OPC_CheckChild2Type, MVT::i32,
/*2049*/      OPC_CheckType, MVT::i32,
/*2051*/      OPC_EmitMergeInputChains1_0,
/*2052*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETST_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2397:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (GETST_2r:i32 GRRegs:i32:$r)
/*2060*/    /*Scope*/ 16, /*->2077*/
/*2061*/      OPC_CheckInteger, 110|128,18/*2414*/, 
/*2064*/      OPC_MoveParent,
/*2065*/      OPC_RecordChild2, // #1 = $src
/*2066*/      OPC_CheckChild2Type, MVT::i32,
/*2068*/      OPC_EmitMergeInputChains1_0,
/*2069*/      OPC_MorphNodeTo, TARGET_VAL(XCore::PEEK_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2414:iPTR, GRRegs:i32:$src) - Complexity = 8
              // Dst: (PEEK_2r:i32 GRRegs:i32:$src)
/*2077*/    /*Scope*/ 16, /*->2094*/
/*2078*/      OPC_CheckInteger, 86|128,18/*2390*/, 
/*2081*/      OPC_MoveParent,
/*2082*/      OPC_RecordChild2, // #1 = $src
/*2083*/      OPC_CheckChild2Type, MVT::i32,
/*2085*/      OPC_EmitMergeInputChains1_0,
/*2086*/      OPC_MorphNodeTo, TARGET_VAL(XCore::ENDIN_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2390:iPTR, GRRegs:i32:$src) - Complexity = 8
              // Dst: (ENDIN_2r:i32 GRRegs:i32:$src)
/*2094*/    /*Scope*/ 14, /*->2109*/
/*2095*/      OPC_CheckInteger, 91|128,18/*2395*/, 
/*2098*/      OPC_MoveParent,
/*2099*/      OPC_RecordChild2, // #1 = $src
/*2100*/      OPC_EmitMergeInputChains1_0,
/*2101*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETPS_l2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2395:iPTR, GRRegs:i32:$src) - Complexity = 8
              // Dst: (GETPS_l2r:i32 GRRegs:i32:$src)
/*2109*/    /*Scope*/ 12, /*->2122*/
/*2110*/      OPC_CheckInteger, 88|128,18/*2392*/, 
/*2113*/      OPC_MoveParent,
/*2114*/      OPC_EmitMergeInputChains1_0,
/*2115*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETED_0R), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:i32 2392:iPTR) - Complexity = 8
              // Dst: (GETED_0R:i32)
/*2122*/    /*Scope*/ 12, /*->2135*/
/*2123*/      OPC_CheckInteger, 89|128,18/*2393*/, 
/*2126*/      OPC_MoveParent,
/*2127*/      OPC_EmitMergeInputChains1_0,
/*2128*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETET_0R), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:i32 2393:iPTR) - Complexity = 8
              // Dst: (GETET_0R:i32)
/*2135*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 113,  TARGET_VAL(ISD::SUB),// ->2252
/*2139*/    OPC_Scope, 39, /*->2180*/ // 3 children in Scope
/*2141*/      OPC_RecordChild0, // #0 = $addr
/*2142*/      OPC_MoveChild, 1,
/*2144*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*2147*/      OPC_RecordChild0, // #1 = $offset
/*2148*/      OPC_MoveChild, 1,
/*2150*/      OPC_Scope, 13, /*->2165*/ // 2 children in Scope
/*2152*/        OPC_CheckInteger, 2, 
/*2154*/        OPC_MoveParent,
/*2155*/        OPC_MoveParent,
/*2156*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWB_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32)) - Complexity = 11
                // Dst: (LDAWB_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*2165*/      /*Scope*/ 13, /*->2179*/
/*2166*/        OPC_CheckInteger, 1, 
/*2168*/        OPC_MoveParent,
/*2169*/        OPC_MoveParent,
/*2170*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDA16B_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)) - Complexity = 11
                // Dst: (LDA16B_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*2179*/      0, /*End of Scope*/
/*2180*/    /*Scope*/ 14, /*->2195*/
/*2181*/      OPC_MoveChild, 0,
/*2183*/      OPC_CheckInteger, 0, 
/*2185*/      OPC_MoveParent,
/*2186*/      OPC_RecordChild1, // #0 = $b
/*2187*/      OPC_MorphNodeTo, TARGET_VAL(XCore::NEG), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (sub:i32 0:i32, GRRegs:i32:$b) - Complexity = 8
              // Dst: (NEG:i32 GRRegs:i32:$b)
/*2195*/    /*Scope*/ 55, /*->2251*/
/*2196*/      OPC_RecordChild0, // #0 = $b
/*2197*/      OPC_RecordChild1, // #1 = $c
/*2198*/      OPC_Scope, 40, /*->2240*/ // 2 children in Scope
/*2200*/        OPC_MoveChild, 1,
/*2202*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2205*/        OPC_Scope, 14, /*->2221*/ // 2 children in Scope
/*2207*/          OPC_CheckPredicate, 0, // Predicate_immUs
/*2209*/          OPC_MoveParent,
/*2210*/          OPC_EmitConvertToTarget, 1,
/*2212*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SUB_2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sub:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immUs>>:$c) - Complexity = 7
                  // Dst: (SUB_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*2221*/        /*Scope*/ 17, /*->2239*/
/*2222*/          OPC_CheckPredicate, 1, // Predicate_immUs4
/*2224*/          OPC_MoveParent,
/*2225*/          OPC_EmitConvertToTarget, 1,
/*2227*/          OPC_EmitNodeXForm, 0, 2, // div4_xform
/*2230*/          OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWB_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (sub:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset) - Complexity = 7
                  // Dst: (LDAWB_l2rus:i32 GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
/*2239*/        0, /*End of Scope*/
/*2240*/      /*Scope*/ 9, /*->2250*/
/*2241*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SUB_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                // Dst: (SUB_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*2250*/      0, /*End of Scope*/
/*2251*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 104,  TARGET_VAL(ISD::AND),// ->2359
/*2255*/    OPC_Scope, 31, /*->2288*/ // 3 children in Scope
/*2257*/      OPC_RecordChild0, // #0 = $src1
/*2258*/      OPC_MoveChild, 1,
/*2260*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2263*/      OPC_RecordChild0, // #1 = $src2
/*2264*/      OPC_MoveChild, 1,
/*2266*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2277*/      OPC_MoveParent,
/*2278*/      OPC_MoveParent,
/*2279*/      OPC_MorphNodeTo, TARGET_VAL(XCore::ANDNOT_2r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (and:i32 GRRegs:i32:$src1, (xor:i32 GRRegs:i32:$src2, -1:i32)) - Complexity = 11
              // Dst: (ANDNOT_2r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2)
/*2288*/    /*Scope*/ 31, /*->2320*/
/*2289*/      OPC_MoveChild, 0,
/*2291*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2294*/      OPC_RecordChild0, // #0 = $src2
/*2295*/      OPC_MoveChild, 1,
/*2297*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2308*/      OPC_MoveParent,
/*2309*/      OPC_MoveParent,
/*2310*/      OPC_RecordChild1, // #1 = $src1
/*2311*/      OPC_MorphNodeTo, TARGET_VAL(XCore::ANDNOT_2r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (and:i32 (xor:i32 GRRegs:i32:$src2, -1:i32), GRRegs:i32:$src1) - Complexity = 11
              // Dst: (ANDNOT_2r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2)
/*2320*/    /*Scope*/ 37, /*->2358*/
/*2321*/      OPC_RecordChild0, // #0 = $val
/*2322*/      OPC_RecordChild1, // #1 = $mask
/*2323*/      OPC_Scope, 22, /*->2347*/ // 2 children in Scope
/*2325*/        OPC_MoveChild, 1,
/*2327*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2330*/        OPC_CheckPredicate, 22, // Predicate_immMskBitp
/*2332*/        OPC_MoveParent,
/*2333*/        OPC_EmitConvertToTarget, 1,
/*2335*/        OPC_EmitNodeXForm, 4, 2, // msksize_xform
/*2338*/        OPC_MorphNodeTo, TARGET_VAL(XCore::ZEXT_rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (and:i32 GRRegs:i32:$val, (imm:i32)<<P:Predicate_immMskBitp>>:$mask) - Complexity = 7
                // Dst: (ZEXT_rus:i32 GRRegs:i32:$val, (msksize_xform:i32 (imm:i32)<<P:Predicate_immMskBitp>>:$mask))
/*2347*/      /*Scope*/ 9, /*->2357*/
/*2348*/        OPC_MorphNodeTo, TARGET_VAL(XCore::AND_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                // Dst: (AND_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*2357*/      0, /*End of Scope*/
/*2358*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(ISD::BRIND),// ->2402
/*2362*/    OPC_RecordNode,   // #0 = 'brind' chained node
/*2363*/    OPC_Scope, 24, /*->2389*/ // 2 children in Scope
/*2365*/      OPC_MoveChild, 1,
/*2367*/      OPC_CheckOpcode, TARGET_VAL(ISD::INTRINSIC_W_CHAIN),
/*2370*/      OPC_RecordNode, // #1 = 'intrinsic_w_chain' chained node
/*2371*/      OPC_CheckFoldableChainNode,
/*2372*/      OPC_MoveChild, 1,
/*2374*/      OPC_CheckInteger, 127|128,18/*2431*/, 
/*2377*/      OPC_MoveParent,
/*2378*/      OPC_MoveParent,
/*2379*/      OPC_EmitMergeInputChains, 2, 0, 1, 
/*2383*/      OPC_MorphNodeTo, TARGET_VAL(XCore::WAITEU_0R), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (brind (intrinsic_w_chain:iPTR 2431:iPTR)) - Complexity = 11
              // Dst: (WAITEU_0R)
/*2389*/    /*Scope*/ 11, /*->2401*/
/*2390*/      OPC_RecordChild1, // #1 = $a
/*2391*/      OPC_CheckChild1Type, MVT::i32,
/*2393*/      OPC_EmitMergeInputChains1_0,
/*2394*/      OPC_MorphNodeTo, TARGET_VAL(XCore::BAU_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (brind GRRegs:i32:$a) - Complexity = 3
              // Dst: (BAU_1r GRRegs:i32:$a)
/*2401*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 113|128,2/*369*/,  TARGET_VAL(ISD::BRCOND),// ->2775
/*2406*/    OPC_RecordNode,   // #0 = 'brcond' chained node
/*2407*/    OPC_Scope, 90|128,2/*346*/, /*->2756*/ // 2 children in Scope
/*2410*/      OPC_MoveChild, 1,
/*2412*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*2415*/      OPC_RecordChild0, // #1 = $lhs
/*2416*/      OPC_Scope, 6|128,1/*134*/, /*->2553*/ // 3 children in Scope
/*2419*/        OPC_MoveChild, 1,
/*2421*/        OPC_Scope, 82, /*->2505*/ // 2 children in Scope
/*2423*/          OPC_CheckInteger, 0, 
/*2425*/          OPC_MoveParent,
/*2426*/          OPC_MoveChild, 2,
/*2428*/          OPC_Scope, 20, /*->2450*/ // 3 children in Scope
/*2430*/            OPC_CheckCondCode, ISD::SETNE,
/*2432*/            OPC_MoveParent,
/*2433*/            OPC_MoveParent,
/*2434*/            OPC_RecordChild2, // #2 = $dst
/*2435*/            OPC_MoveChild, 2,
/*2437*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2440*/            OPC_MoveParent,
/*2441*/            OPC_EmitMergeInputChains1_0,
/*2442*/            OPC_MorphNodeTo, TARGET_VAL(XCore::BRFT_lru6), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETNE:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BRFT_lru6 GRRegs:i32:$lhs, (bb:Other):$dst)
/*2450*/          /*Scope*/ 20, /*->2471*/
/*2451*/            OPC_CheckCondCode, ISD::SETEQ,
/*2453*/            OPC_MoveParent,
/*2454*/            OPC_MoveParent,
/*2455*/            OPC_RecordChild2, // #2 = $dst
/*2456*/            OPC_MoveChild, 2,
/*2458*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2461*/            OPC_MoveParent,
/*2462*/            OPC_EmitMergeInputChains1_0,
/*2463*/            OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETEQ:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BRFF_lru6 GRRegs:i32:$lhs, (bb:Other):$dst)
/*2471*/          /*Scope*/ 32, /*->2504*/
/*2472*/            OPC_CheckCondCode, ISD::SETLT,
/*2474*/            OPC_MoveParent,
/*2475*/            OPC_MoveParent,
/*2476*/            OPC_RecordChild2, // #2 = $dst
/*2477*/            OPC_MoveChild, 2,
/*2479*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2482*/            OPC_MoveParent,
/*2483*/            OPC_EmitMergeInputChains1_0,
/*2484*/            OPC_EmitInteger, MVT::i32, 32, 
/*2487*/            OPC_EmitNode, TARGET_VAL(XCore::ASHR_l2rus), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4
/*2496*/            OPC_MorphNodeTo, TARGET_VAL(XCore::BRFT_lru6), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 4, 2, 
                    // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETLT:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BRFT_lru6 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), (bb:Other):$dst)
/*2504*/          0, /*End of Scope*/
/*2505*/        /*Scope*/ 46, /*->2552*/
/*2506*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2517*/          OPC_MoveParent,
/*2518*/          OPC_MoveChild, 2,
/*2520*/          OPC_CheckCondCode, ISD::SETGT,
/*2522*/          OPC_MoveParent,
/*2523*/          OPC_MoveParent,
/*2524*/          OPC_RecordChild2, // #2 = $dst
/*2525*/          OPC_MoveChild, 2,
/*2527*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2530*/          OPC_MoveParent,
/*2531*/          OPC_EmitMergeInputChains1_0,
/*2532*/          OPC_EmitInteger, MVT::i32, 32, 
/*2535*/          OPC_EmitNode, TARGET_VAL(XCore::ASHR_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4
/*2544*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 2, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, -1:i32, SETGT:Other), (bb:Other):$dst) - Complexity = 11
                  // Dst: (BRFF_lru6 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), (bb:Other):$dst)
/*2552*/        0, /*End of Scope*/
/*2553*/      /*Scope*/ 42, /*->2596*/
/*2554*/        OPC_RecordChild1, // #2 = $rhs
/*2555*/        OPC_MoveChild, 1,
/*2557*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2560*/        OPC_CheckPredicate, 0, // Predicate_immUs
/*2562*/        OPC_MoveParent,
/*2563*/        OPC_MoveChild, 2,
/*2565*/        OPC_CheckCondCode, ISD::SETNE,
/*2567*/        OPC_MoveParent,
/*2568*/        OPC_MoveParent,
/*2569*/        OPC_RecordChild2, // #3 = $dst
/*2570*/        OPC_MoveChild, 2,
/*2572*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2575*/        OPC_MoveParent,
/*2576*/        OPC_EmitMergeInputChains1_0,
/*2577*/        OPC_EmitConvertToTarget, 2,
/*2579*/        OPC_EmitNode, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*2588*/        OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 5, 3, 
                // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETNE:Other), (bb:Other):$dst) - Complexity = 10
                // Dst: (BRFF_lru6 (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs), (bb:Other):$dst)
/*2596*/      /*Scope*/ 29|128,1/*157*/, /*->2755*/
/*2598*/        OPC_CheckChild0Type, MVT::i32,
/*2600*/        OPC_RecordChild1, // #2 = $rhs
/*2601*/        OPC_MoveChild, 2,
/*2603*/        OPC_Scope, 29, /*->2634*/ // 5 children in Scope
/*2605*/          OPC_CheckCondCode, ISD::SETLE,
/*2607*/          OPC_MoveParent,
/*2608*/          OPC_MoveParent,
/*2609*/          OPC_RecordChild2, // #3 = $dst
/*2610*/          OPC_MoveChild, 2,
/*2612*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2615*/          OPC_MoveParent,
/*2616*/          OPC_EmitMergeInputChains1_0,
/*2617*/          OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*2626*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BRFF_lru6 (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), (bb:Other):$dst)
/*2634*/        /*Scope*/ 29, /*->2664*/
/*2635*/          OPC_CheckCondCode, ISD::SETULE,
/*2637*/          OPC_MoveParent,
/*2638*/          OPC_MoveParent,
/*2639*/          OPC_RecordChild2, // #3 = $dst
/*2640*/          OPC_MoveChild, 2,
/*2642*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2645*/          OPC_MoveParent,
/*2646*/          OPC_EmitMergeInputChains1_0,
/*2647*/          OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*2656*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BRFF_lru6 (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), (bb:Other):$dst)
/*2664*/        /*Scope*/ 29, /*->2694*/
/*2665*/          OPC_CheckCondCode, ISD::SETGE,
/*2667*/          OPC_MoveParent,
/*2668*/          OPC_MoveParent,
/*2669*/          OPC_RecordChild2, // #3 = $dst
/*2670*/          OPC_MoveChild, 2,
/*2672*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2675*/          OPC_MoveParent,
/*2676*/          OPC_EmitMergeInputChains1_0,
/*2677*/          OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*2686*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BRFF_lru6 (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), (bb:Other):$dst)
/*2694*/        /*Scope*/ 29, /*->2724*/
/*2695*/          OPC_CheckCondCode, ISD::SETUGE,
/*2697*/          OPC_MoveParent,
/*2698*/          OPC_MoveParent,
/*2699*/          OPC_RecordChild2, // #3 = $dst
/*2700*/          OPC_MoveChild, 2,
/*2702*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2705*/          OPC_MoveParent,
/*2706*/          OPC_EmitMergeInputChains1_0,
/*2707*/          OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*2716*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BRFF_lru6 (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), (bb:Other):$dst)
/*2724*/        /*Scope*/ 29, /*->2754*/
/*2725*/          OPC_CheckCondCode, ISD::SETNE,
/*2727*/          OPC_MoveParent,
/*2728*/          OPC_MoveParent,
/*2729*/          OPC_RecordChild2, // #3 = $dst
/*2730*/          OPC_MoveChild, 2,
/*2732*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2735*/          OPC_MoveParent,
/*2736*/          OPC_EmitMergeInputChains1_0,
/*2737*/          OPC_EmitNode, TARGET_VAL(XCore::EQ_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*2746*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETNE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BRFF_lru6 (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), (bb:Other):$dst)
/*2754*/        0, /*End of Scope*/
/*2755*/      0, /*End of Scope*/
/*2756*/    /*Scope*/ 17, /*->2774*/
/*2757*/      OPC_RecordChild1, // #1 = $cond
/*2758*/      OPC_RecordChild2, // #2 = $addr
/*2759*/      OPC_MoveChild, 2,
/*2761*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2764*/      OPC_MoveParent,
/*2765*/      OPC_EmitMergeInputChains1_0,
/*2766*/      OPC_MorphNodeTo, TARGET_VAL(XCore::BRFT_lru6), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (brcond GRRegs:i32:$cond, (bb:Other):$addr) - Complexity = 3
              // Dst: (BRFT_lru6 GRRegs:i32:$cond, (bb:Other):$addr)
/*2774*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 89|128,2/*345*/,  TARGET_VAL(ISD::SELECT),// ->3124
/*2779*/    OPC_Scope, 69|128,2/*325*/, /*->3107*/ // 2 children in Scope
/*2782*/      OPC_MoveChild, 0,
/*2784*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*2787*/      OPC_RecordChild0, // #0 = $lhs
/*2788*/      OPC_Scope, 126, /*->2916*/ // 3 children in Scope
/*2790*/        OPC_MoveChild, 1,
/*2792*/        OPC_Scope, 76, /*->2870*/ // 2 children in Scope
/*2794*/          OPC_CheckInteger, 0, 
/*2796*/          OPC_MoveParent,
/*2797*/          OPC_MoveChild, 2,
/*2799*/          OPC_Scope, 18, /*->2819*/ // 3 children in Scope
/*2801*/            OPC_CheckCondCode, ISD::SETNE,
/*2803*/            OPC_MoveParent,
/*2804*/            OPC_MoveParent,
/*2805*/            OPC_RecordChild1, // #1 = $T
/*2806*/            OPC_RecordChild2, // #2 = $F
/*2807*/            OPC_CheckType, MVT::i32,
/*2809*/            OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETNE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 11
                    // Dst: (SELECT_CC:i32 GRRegs:i32:$lhs, GRRegs:i32:$T, GRRegs:i32:$F)
/*2819*/          /*Scope*/ 18, /*->2838*/
/*2820*/            OPC_CheckCondCode, ISD::SETEQ,
/*2822*/            OPC_MoveParent,
/*2823*/            OPC_MoveParent,
/*2824*/            OPC_RecordChild1, // #1 = $T
/*2825*/            OPC_RecordChild2, // #2 = $F
/*2826*/            OPC_CheckType, MVT::i32,
/*2828*/            OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 1, 
                    // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETEQ:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 11
                    // Dst: (SELECT_CC:i32 GRRegs:i32:$lhs, GRRegs:i32:$F, GRRegs:i32:$T)
/*2838*/          /*Scope*/ 30, /*->2869*/
/*2839*/            OPC_CheckCondCode, ISD::SETLT,
/*2841*/            OPC_MoveParent,
/*2842*/            OPC_MoveParent,
/*2843*/            OPC_RecordChild1, // #1 = $T
/*2844*/            OPC_RecordChild2, // #2 = $F
/*2845*/            OPC_CheckType, MVT::i32,
/*2847*/            OPC_EmitInteger, MVT::i32, 32, 
/*2850*/            OPC_EmitNode, TARGET_VAL(XCore::ASHR_l2rus), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*2859*/            OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 1, 2, 
                    // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETLT:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 11
                    // Dst: (SELECT_CC:i32 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), GRRegs:i32:$T, GRRegs:i32:$F)
/*2869*/          0, /*End of Scope*/
/*2870*/        /*Scope*/ 44, /*->2915*/
/*2871*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2882*/          OPC_MoveParent,
/*2883*/          OPC_MoveChild, 2,
/*2885*/          OPC_CheckCondCode, ISD::SETGT,
/*2887*/          OPC_MoveParent,
/*2888*/          OPC_MoveParent,
/*2889*/          OPC_RecordChild1, // #1 = $T
/*2890*/          OPC_RecordChild2, // #2 = $F
/*2891*/          OPC_CheckType, MVT::i32,
/*2893*/          OPC_EmitInteger, MVT::i32, 32, 
/*2896*/          OPC_EmitNode, TARGET_VAL(XCore::ASHR_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*2905*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 2, 1, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, -1:i32, SETGT:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 11
                  // Dst: (SELECT_CC:i32 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), GRRegs:i32:$F, GRRegs:i32:$T)
/*2915*/        0, /*End of Scope*/
/*2916*/      /*Scope*/ 40, /*->2957*/
/*2917*/        OPC_RecordChild1, // #1 = $rhs
/*2918*/        OPC_MoveChild, 1,
/*2920*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2923*/        OPC_CheckPredicate, 0, // Predicate_immUs
/*2925*/        OPC_MoveParent,
/*2926*/        OPC_MoveChild, 2,
/*2928*/        OPC_CheckCondCode, ISD::SETNE,
/*2930*/        OPC_MoveParent,
/*2931*/        OPC_MoveParent,
/*2932*/        OPC_RecordChild1, // #2 = $T
/*2933*/        OPC_RecordChild2, // #3 = $F
/*2934*/        OPC_CheckType, MVT::i32,
/*2936*/        OPC_EmitConvertToTarget, 1,
/*2938*/        OPC_EmitNode, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*2947*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 5, 3, 2, 
                // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETNE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 10
                // Dst: (SELECT_CC:i32 (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*2957*/      /*Scope*/ 19|128,1/*147*/, /*->3106*/
/*2959*/        OPC_CheckChild0Type, MVT::i32,
/*2961*/        OPC_RecordChild1, // #1 = $rhs
/*2962*/        OPC_MoveChild, 2,
/*2964*/        OPC_Scope, 27, /*->2993*/ // 5 children in Scope
/*2966*/          OPC_CheckCondCode, ISD::SETLE,
/*2968*/          OPC_MoveParent,
/*2969*/          OPC_MoveParent,
/*2970*/          OPC_RecordChild1, // #2 = $T
/*2971*/          OPC_RecordChild2, // #3 = $F
/*2972*/          OPC_CheckType, MVT::i32,
/*2974*/          OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*2983*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                  // Dst: (SELECT_CC:i32 (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*2993*/        /*Scope*/ 27, /*->3021*/
/*2994*/          OPC_CheckCondCode, ISD::SETULE,
/*2996*/          OPC_MoveParent,
/*2997*/          OPC_MoveParent,
/*2998*/          OPC_RecordChild1, // #2 = $T
/*2999*/          OPC_RecordChild2, // #3 = $F
/*3000*/          OPC_CheckType, MVT::i32,
/*3002*/          OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*3011*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                  // Dst: (SELECT_CC:i32 (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*3021*/        /*Scope*/ 27, /*->3049*/
/*3022*/          OPC_CheckCondCode, ISD::SETGE,
/*3024*/          OPC_MoveParent,
/*3025*/          OPC_MoveParent,
/*3026*/          OPC_RecordChild1, // #2 = $T
/*3027*/          OPC_RecordChild2, // #3 = $F
/*3028*/          OPC_CheckType, MVT::i32,
/*3030*/          OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*3039*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                  // Dst: (SELECT_CC:i32 (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*3049*/        /*Scope*/ 27, /*->3077*/
/*3050*/          OPC_CheckCondCode, ISD::SETUGE,
/*3052*/          OPC_MoveParent,
/*3053*/          OPC_MoveParent,
/*3054*/          OPC_RecordChild1, // #2 = $T
/*3055*/          OPC_RecordChild2, // #3 = $F
/*3056*/          OPC_CheckType, MVT::i32,
/*3058*/          OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*3067*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                  // Dst: (SELECT_CC:i32 (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*3077*/        /*Scope*/ 27, /*->3105*/
/*3078*/          OPC_CheckCondCode, ISD::SETNE,
/*3080*/          OPC_MoveParent,
/*3081*/          OPC_MoveParent,
/*3082*/          OPC_RecordChild1, // #2 = $T
/*3083*/          OPC_RecordChild2, // #3 = $F
/*3084*/          OPC_CheckType, MVT::i32,
/*3086*/          OPC_EmitNode, TARGET_VAL(XCore::EQ_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*3095*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETNE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                  // Dst: (SELECT_CC:i32 (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*3105*/        0, /*End of Scope*/
/*3106*/      0, /*End of Scope*/
/*3107*/    /*Scope*/ 15, /*->3123*/
/*3108*/      OPC_RecordChild0, // #0 = $cond
/*3109*/      OPC_RecordChild1, // #1 = $T
/*3110*/      OPC_RecordChild2, // #2 = $F
/*3111*/      OPC_CheckType, MVT::i32,
/*3113*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (select:i32 GRRegs:i32:$cond, GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 3
              // Dst: (SELECT_CC:i32 GRRegs:i32:$cond, GRRegs:i32:$T, GRRegs:i32:$F)
/*3123*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::CALLSEQ_END),// ->3153
/*3127*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*3128*/    OPC_CaptureGlueInput,
/*3129*/    OPC_RecordChild1, // #1 = $amt1
/*3130*/    OPC_MoveChild, 1,
/*3132*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3135*/    OPC_MoveParent,
/*3136*/    OPC_RecordChild2, // #2 = $amt2
/*3137*/    OPC_MoveChild, 2,
/*3139*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3142*/    OPC_MoveParent,
/*3143*/    OPC_EmitMergeInputChains1_0,
/*3144*/    OPC_MorphNodeTo, TARGET_VAL(XCore::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP:i32 (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FrameIndex),// ->3171
/*3156*/    OPC_RecordNode,   // #0 = $addr
/*3157*/    OPC_CheckType, MVT::i32,
/*3159*/    OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectADDRspii:$addr #1 #2
/*3162*/    OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWFI), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: ADDRspii:i32:$addr - Complexity = 9
            // Dst: (LDAWFI:i32 ADDRspii:i32:$addr)
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::XOR),// ->3211
/*3174*/    OPC_RecordChild0, // #0 = $b
/*3175*/    OPC_Scope, 22, /*->3199*/ // 2 children in Scope
/*3177*/      OPC_MoveChild, 1,
/*3179*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3190*/      OPC_MoveParent,
/*3191*/      OPC_MorphNodeTo, TARGET_VAL(XCore::NOT), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (xor:i32 GRRegs:i32:$b, -1:i32) - Complexity = 8
              // Dst: (NOT:i32 GRRegs:i32:$b)
/*3199*/    /*Scope*/ 10, /*->3210*/
/*3200*/      OPC_RecordChild1, // #1 = $c
/*3201*/      OPC_MorphNodeTo, TARGET_VAL(XCore::XOR_l3r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
              // Dst: (XOR_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*3210*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 67,  TARGET_VAL(ISD::MUL),// ->3281
/*3214*/    OPC_RecordChild0, // #0 = $src
/*3215*/    OPC_Scope, 52, /*->3269*/ // 2 children in Scope
/*3217*/      OPC_MoveChild, 1,
/*3219*/      OPC_Scope, 12, /*->3233*/ // 3 children in Scope
/*3221*/        OPC_CheckInteger, 3, 
/*3223*/        OPC_MoveParent,
/*3224*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDA16F_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (mul:i32 GRRegs:i32:$src, 3:i32) - Complexity = 8
                // Dst: (LDA16F_l3r:i32 GRRegs:i32:$src, GRRegs:i32:$src)
/*3233*/      /*Scope*/ 12, /*->3246*/
/*3234*/        OPC_CheckInteger, 5, 
/*3236*/        OPC_MoveParent,
/*3237*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWF_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (mul:i32 GRRegs:i32:$src, 5:i32) - Complexity = 8
                // Dst: (LDAWF_l3r:i32 GRRegs:i32:$src, GRRegs:i32:$src)
/*3246*/      /*Scope*/ 21, /*->3268*/
/*3247*/        OPC_CheckInteger, 125|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551613*/, 
/*3258*/        OPC_MoveParent,
/*3259*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWB_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (mul:i32 GRRegs:i32:$src, -3:i32) - Complexity = 8
                // Dst: (LDAWB_l3r:i32 GRRegs:i32:$src, GRRegs:i32:$src)
/*3268*/      0, /*End of Scope*/
/*3269*/    /*Scope*/ 10, /*->3280*/
/*3270*/      OPC_RecordChild1, // #1 = $c
/*3271*/      OPC_MorphNodeTo, TARGET_VAL(XCore::MUL_l3r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
              // Dst: (MUL_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*3280*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 46|128,2/*302*/,  TARGET_VAL(ISD::SETCC),// ->3587
/*3285*/    OPC_RecordChild0, // #0 = $lhs
/*3286*/    OPC_Scope, 43, /*->3331*/ // 3 children in Scope
/*3288*/      OPC_MoveChild, 1,
/*3290*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3301*/      OPC_MoveParent,
/*3302*/      OPC_MoveChild, 2,
/*3304*/      OPC_CheckCondCode, ISD::SETGT,
/*3306*/      OPC_MoveParent,
/*3307*/      OPC_EmitInteger, MVT::i32, 32, 
/*3310*/      OPC_EmitNode, TARGET_VAL(XCore::ASHR_l2rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*3319*/      OPC_EmitInteger, MVT::i32, 0, 
/*3322*/      OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (setcc:i32 GRRegs:i32:$lhs, -1:i32, SETGT:Other) - Complexity = 8
              // Dst: (EQ_2rus:i32 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), 0:i32)
/*3331*/    /*Scope*/ 55, /*->3387*/
/*3332*/      OPC_RecordChild1, // #1 = $rhs
/*3333*/      OPC_MoveChild, 1,
/*3335*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3338*/      OPC_CheckPredicate, 0, // Predicate_immUs
/*3340*/      OPC_MoveParent,
/*3341*/      OPC_MoveChild, 2,
/*3343*/      OPC_Scope, 14, /*->3359*/ // 2 children in Scope
/*3345*/        OPC_CheckCondCode, ISD::SETEQ,
/*3347*/        OPC_MoveParent,
/*3348*/        OPC_EmitConvertToTarget, 1,
/*3350*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETEQ:Other) - Complexity = 7
                // Dst: (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs)
/*3359*/      /*Scope*/ 26, /*->3386*/
/*3360*/        OPC_CheckCondCode, ISD::SETNE,
/*3362*/        OPC_MoveParent,
/*3363*/        OPC_EmitConvertToTarget, 1,
/*3365*/        OPC_EmitNode, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*3374*/        OPC_EmitInteger, MVT::i32, 0, 
/*3377*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETNE:Other) - Complexity = 7
                // Dst: (EQ_2rus:i32 (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs), 0:i32)
/*3386*/      0, /*End of Scope*/
/*3387*/    /*Scope*/ 69|128,1/*197*/, /*->3586*/
/*3389*/      OPC_CheckChild0Type, MVT::i32,
/*3391*/      OPC_RecordChild1, // #1 = $rhs
/*3392*/      OPC_MoveChild, 2,
/*3394*/      OPC_Scope, 12, /*->3408*/ // 10 children in Scope
/*3396*/        OPC_CheckCondCode, ISD::SETGT,
/*3398*/        OPC_MoveParent,
/*3399*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LSS_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGT:Other) - Complexity = 3
                // Dst: (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs)
/*3408*/      /*Scope*/ 12, /*->3421*/
/*3409*/        OPC_CheckCondCode, ISD::SETUGT,
/*3411*/        OPC_MoveParent,
/*3412*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LSU_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGT:Other) - Complexity = 3
                // Dst: (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs)
/*3421*/      /*Scope*/ 12, /*->3434*/
/*3422*/        OPC_CheckCondCode, ISD::SETLT,
/*3424*/        OPC_MoveParent,
/*3425*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LSS_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLT:Other) - Complexity = 3
                // Dst: (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs)
/*3434*/      /*Scope*/ 12, /*->3447*/
/*3435*/        OPC_CheckCondCode, ISD::SETULT,
/*3437*/        OPC_MoveParent,
/*3438*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LSU_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULT:Other) - Complexity = 3
                // Dst: (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs)
/*3447*/      /*Scope*/ 12, /*->3460*/
/*3448*/        OPC_CheckCondCode, ISD::SETEQ,
/*3450*/        OPC_MoveParent,
/*3451*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETEQ:Other) - Complexity = 3
                // Dst: (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs)
/*3460*/      /*Scope*/ 24, /*->3485*/
/*3461*/        OPC_CheckCondCode, ISD::SETLE,
/*3463*/        OPC_MoveParent,
/*3464*/        OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*3473*/        OPC_EmitInteger, MVT::i32, 0, 
/*3476*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLE:Other) - Complexity = 3
                // Dst: (EQ_2rus:i32 (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), 0:i32)
/*3485*/      /*Scope*/ 24, /*->3510*/
/*3486*/        OPC_CheckCondCode, ISD::SETULE,
/*3488*/        OPC_MoveParent,
/*3489*/        OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*3498*/        OPC_EmitInteger, MVT::i32, 0, 
/*3501*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULE:Other) - Complexity = 3
                // Dst: (EQ_2rus:i32 (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), 0:i32)
/*3510*/      /*Scope*/ 24, /*->3535*/
/*3511*/        OPC_CheckCondCode, ISD::SETGE,
/*3513*/        OPC_MoveParent,
/*3514*/        OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*3523*/        OPC_EmitInteger, MVT::i32, 0, 
/*3526*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGE:Other) - Complexity = 3
                // Dst: (EQ_2rus:i32 (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), 0:i32)
/*3535*/      /*Scope*/ 24, /*->3560*/
/*3536*/        OPC_CheckCondCode, ISD::SETUGE,
/*3538*/        OPC_MoveParent,
/*3539*/        OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*3548*/        OPC_EmitInteger, MVT::i32, 0, 
/*3551*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGE:Other) - Complexity = 3
                // Dst: (EQ_2rus:i32 (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), 0:i32)
/*3560*/      /*Scope*/ 24, /*->3585*/
/*3561*/        OPC_CheckCondCode, ISD::SETNE,
/*3563*/        OPC_MoveParent,
/*3564*/        OPC_EmitNode, TARGET_VAL(XCore::EQ_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*3573*/        OPC_EmitInteger, MVT::i32, 0, 
/*3576*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETNE:Other) - Complexity = 3
                // Dst: (EQ_2rus:i32 (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), 0:i32)
/*3585*/      0, /*End of Scope*/
/*3586*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::SHL),// ->3624
/*3590*/    OPC_RecordChild0, // #0 = $b
/*3591*/    OPC_RecordChild1, // #1 = $c
/*3592*/    OPC_Scope, 19, /*->3613*/ // 2 children in Scope
/*3594*/      OPC_MoveChild, 1,
/*3596*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3599*/      OPC_CheckPredicate, 19, // Predicate_immBitp
/*3601*/      OPC_MoveParent,
/*3602*/      OPC_EmitConvertToTarget, 1,
/*3604*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SHL_2rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (shl:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immBitp>>:$c) - Complexity = 7
              // Dst: (SHL_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*3613*/    /*Scope*/ 9, /*->3623*/
/*3614*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SHL_3r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (shl:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
              // Dst: (SHL_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*3623*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::SRL),// ->3661
/*3627*/    OPC_RecordChild0, // #0 = $b
/*3628*/    OPC_RecordChild1, // #1 = $c
/*3629*/    OPC_Scope, 19, /*->3650*/ // 2 children in Scope
/*3631*/      OPC_MoveChild, 1,
/*3633*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3636*/      OPC_CheckPredicate, 19, // Predicate_immBitp
/*3638*/      OPC_MoveParent,
/*3639*/      OPC_EmitConvertToTarget, 1,
/*3641*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SHR_2rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (srl:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immBitp>>:$c) - Complexity = 7
              // Dst: (SHR_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*3650*/    /*Scope*/ 9, /*->3660*/
/*3651*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SHR_3r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (srl:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
              // Dst: (SHR_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*3660*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(XCoreISD::STWSP),// ->3706
/*3664*/    OPC_RecordNode,   // #0 = 'XCoreStwsp' chained node
/*3665*/    OPC_RecordChild1, // #1 = $a
/*3666*/    OPC_CheckChild1Type, MVT::i32,
/*3668*/    OPC_RecordChild2, // #2 = $b
/*3669*/    OPC_MoveChild, 2,
/*3671*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3674*/    OPC_Scope, 14, /*->3690*/ // 2 children in Scope
/*3676*/      OPC_CheckPredicate, 20, // Predicate_immU6
/*3678*/      OPC_MoveParent,
/*3679*/      OPC_EmitMergeInputChains1_0,
/*3680*/      OPC_EmitConvertToTarget, 2,
/*3682*/      OPC_MorphNodeTo, TARGET_VAL(XCore::STWSP_ru6), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (XCoreStwsp RRegs:i32:$a, (imm:i32)<<P:Predicate_immU6>>:$b) - Complexity = 7
              // Dst: (STWSP_ru6 RRegs:i32:$a, (imm:i32):$b)
/*3690*/    /*Scope*/ 14, /*->3705*/
/*3691*/      OPC_CheckPredicate, 21, // Predicate_immU16
/*3693*/      OPC_MoveParent,
/*3694*/      OPC_EmitMergeInputChains1_0,
/*3695*/      OPC_EmitConvertToTarget, 2,
/*3697*/      OPC_MorphNodeTo, TARGET_VAL(XCore::STWSP_lru6), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (XCoreStwsp RRegs:i32:$a, (imm:i32)<<P:Predicate_immU16>>:$b) - Complexity = 7
              // Dst: (STWSP_lru6 RRegs:i32:$a, (imm:i32):$b)
/*3705*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(XCoreISD::RETSP),// ->3751
/*3709*/    OPC_RecordNode,   // #0 = 'XCoreRetsp' chained node
/*3710*/    OPC_CaptureGlueInput,
/*3711*/    OPC_RecordChild1, // #1 = $a
/*3712*/    OPC_MoveChild, 1,
/*3714*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3717*/    OPC_CheckType, MVT::i32,
/*3719*/    OPC_Scope, 14, /*->3735*/ // 2 children in Scope
/*3721*/      OPC_CheckPredicate, 20, // Predicate_immU6
/*3723*/      OPC_MoveParent,
/*3724*/      OPC_EmitMergeInputChains1_0,
/*3725*/      OPC_EmitConvertToTarget, 1,
/*3727*/      OPC_MorphNodeTo, TARGET_VAL(XCore::RETSP_u6), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (XCoreRetsp (imm:i32)<<P:Predicate_immU6>>:$a) - Complexity = 7
              // Dst: (RETSP_u6:i32 (imm:i32):$a)
/*3735*/    /*Scope*/ 14, /*->3750*/
/*3736*/      OPC_CheckPredicate, 21, // Predicate_immU16
/*3738*/      OPC_MoveParent,
/*3739*/      OPC_EmitMergeInputChains1_0,
/*3740*/      OPC_EmitConvertToTarget, 1,
/*3742*/      OPC_MorphNodeTo, TARGET_VAL(XCore::RETSP_lu6), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (XCoreRetsp (imm:i32)<<P:Predicate_immU16>>:$a) - Complexity = 7
              // Dst: (RETSP_lu6:i32 (imm:i32):$a)
/*3750*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 85,  TARGET_VAL(XCoreISD::BL),// ->3839
/*3754*/    OPC_RecordNode,   // #0 = 'XCoreBranchLink' chained node
/*3755*/    OPC_CaptureGlueInput,
/*3756*/    OPC_RecordChild1, // #1 = $a
/*3757*/    OPC_Scope, 67, /*->3826*/ // 2 children in Scope
/*3759*/      OPC_MoveChild, 1,
/*3761*/      OPC_SwitchOpcode /*3 cases */, 34,  TARGET_VAL(ISD::Constant),// ->3799
/*3765*/        OPC_CheckType, MVT::i32,
/*3767*/        OPC_Scope, 14, /*->3783*/ // 2 children in Scope
/*3769*/          OPC_CheckPredicate, 23, // Predicate_immU10
/*3771*/          OPC_MoveParent,
/*3772*/          OPC_EmitMergeInputChains1_0,
/*3773*/          OPC_EmitConvertToTarget, 1,
/*3775*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BLRF_u10), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                  // Src: (XCoreBranchLink (imm:i32)<<P:Predicate_immU10>>:$a) - Complexity = 7
                  // Dst: (BLRF_u10:i32 (imm:i32):$a)
/*3783*/        /*Scope*/ 14, /*->3798*/
/*3784*/          OPC_CheckPredicate, 24, // Predicate_immU20
/*3786*/          OPC_MoveParent,
/*3787*/          OPC_EmitMergeInputChains1_0,
/*3788*/          OPC_EmitConvertToTarget, 1,
/*3790*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BLRF_lu10), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                  // Src: (XCoreBranchLink (imm:i32)<<P:Predicate_immU20>>:$a) - Complexity = 7
                  // Dst: (BLRF_lu10:i32 (imm:i32):$a)
/*3798*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 10,  TARGET_VAL(ISD::TargetGlobalAddress),// ->3812
/*3802*/        OPC_MoveParent,
/*3803*/        OPC_EmitMergeInputChains1_0,
/*3804*/        OPC_MorphNodeTo, TARGET_VAL(XCore::BLRF_lu10), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (XCoreBranchLink (tglobaladdr:iPTR):$addr) - Complexity = 6
                // Dst: (BLRF_lu10:i32 (tglobaladdr:i32):$addr)
              /*SwitchOpcode*/ 10,  TARGET_VAL(ISD::TargetExternalSymbol),// ->3825
/*3815*/        OPC_MoveParent,
/*3816*/        OPC_EmitMergeInputChains1_0,
/*3817*/        OPC_MorphNodeTo, TARGET_VAL(XCore::BLRF_lu10), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (XCoreBranchLink (texternalsym:iPTR):$addr) - Complexity = 6
                // Dst: (BLRF_lu10:i32 (texternalsym:i32):$addr)
              0, // EndSwitchOpcode
/*3826*/    /*Scope*/ 11, /*->3838*/
/*3827*/      OPC_CheckChild1Type, MVT::i32,
/*3829*/      OPC_EmitMergeInputChains1_0,
/*3830*/      OPC_MorphNodeTo, TARGET_VAL(XCore::BLA_1r), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (XCoreBranchLink GRRegs:i32:$a) - Complexity = 3
              // Dst: (BLA_1r:i32 GRRegs:i32:$a)
/*3838*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CALLSEQ_START),// ->3859
/*3842*/    OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*3843*/    OPC_RecordChild1, // #1 = $amt
/*3844*/    OPC_MoveChild, 1,
/*3846*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3849*/    OPC_MoveParent,
/*3850*/    OPC_EmitMergeInputChains1_0,
/*3851*/    OPC_MorphNodeTo, TARGET_VAL(XCore::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN:i32 (timm:i32):$amt)
          /*SwitchOpcode*/ 17,  TARGET_VAL(XCoreISD::DPRelativeWrapper),// ->3879
/*3862*/    OPC_RecordChild0, // #0 = $b
/*3863*/    OPC_MoveChild, 0,
/*3865*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*3868*/    OPC_MoveParent,
/*3869*/    OPC_CheckType, MVT::i32,
/*3871*/    OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWDP_lru6), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (dprelwrapper:i32 (tglobaladdr:i32):$b) - Complexity = 6
            // Dst: (LDAWDP_lru6:i32 (tglobaladdr:i32):$b)
          /*SwitchOpcode*/ 17,  TARGET_VAL(XCoreISD::CPRelativeWrapper),// ->3899
/*3882*/    OPC_RecordChild0, // #0 = $a
/*3883*/    OPC_MoveChild, 0,
/*3885*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*3888*/    OPC_MoveParent,
/*3889*/    OPC_CheckType, MVT::i32,
/*3891*/    OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWCP_lu6), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (cprelwrapper:i32 (tglobaladdr:i32):$a) - Complexity = 6
            // Dst: (LDAWCP_lu6:i32 (tglobaladdr:i32):$a)
          /*SwitchOpcode*/ 45,  TARGET_VAL(XCoreISD::PCRelativeWrapper),// ->3947
/*3902*/    OPC_RecordChild0, // #0 = $a
/*3903*/    OPC_MoveChild, 0,
/*3905*/    OPC_SwitchOpcode /*2 cases */, 23,  TARGET_VAL(ISD::TargetGlobalAddress),// ->3932
/*3909*/      OPC_MoveParent,
/*3910*/      OPC_CheckType, MVT::i32,
/*3912*/      OPC_Scope, 8, /*->3922*/ // 2 children in Scope
/*3914*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDAPF_lu10), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (pcrelwrapper:i32 (tglobaladdr:i32):$a) - Complexity = 6
                // Dst: (LDAPF_lu10:i32 (tglobaladdr:i32):$a)
/*3922*/      /*Scope*/ 8, /*->3931*/
/*3923*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDAPB_lu10), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (pcrelwrapper:i32 (tglobaladdr:i32):$a) - Complexity = 6
                // Dst: (LDAPB_lu10:i32 (tglobaladdr:i32):$a)
/*3931*/      0, /*End of Scope*/
            /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetBlockAddress),// ->3946
/*3935*/      OPC_MoveParent,
/*3936*/      OPC_CheckType, MVT::i32,
/*3938*/      OPC_MorphNodeTo, TARGET_VAL(XCore::LDAPF_lu10_ba), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (pcrelwrapper:i32 (tblockaddress:i32):$a) - Complexity = 6
              // Dst: (LDAPF_lu10_ba:i32 (tblockaddress:i32):$a)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 18,  TARGET_VAL(XCoreISD::BR_JT),// ->3968
/*3950*/    OPC_RecordNode,   // #0 = 'XCoreBR_JT' chained node
/*3951*/    OPC_RecordChild1, // #1 = $t
/*3952*/    OPC_MoveChild, 1,
/*3954*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetJumpTable),
/*3957*/    OPC_MoveParent,
/*3958*/    OPC_RecordChild2, // #2 = $i
/*3959*/    OPC_EmitMergeInputChains1_0,
/*3960*/    OPC_MorphNodeTo, TARGET_VAL(XCore::BR_JT), 0|OPFL_Chain,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (XCoreBR_JT (tjumptable:i32):$t, GRRegs:i32:$i) - Complexity = 6
            // Dst: (BR_JT (tjumptable:i32):$t, GRRegs:i32:$i)
          /*SwitchOpcode*/ 18,  TARGET_VAL(XCoreISD::BR_JT32),// ->3989
/*3971*/    OPC_RecordNode,   // #0 = 'XCoreBR_JT32' chained node
/*3972*/    OPC_RecordChild1, // #1 = $t
/*3973*/    OPC_MoveChild, 1,
/*3975*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetJumpTable),
/*3978*/    OPC_MoveParent,
/*3979*/    OPC_RecordChild2, // #2 = $i
/*3980*/    OPC_EmitMergeInputChains1_0,
/*3981*/    OPC_MorphNodeTo, TARGET_VAL(XCore::BR_JT32), 0|OPFL_Chain,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (XCoreBR_JT32 (tjumptable:i32):$t, GRRegs:i32:$i) - Complexity = 6
            // Dst: (BR_JT32 (tjumptable:i32):$t, GRRegs:i32:$i)
          /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::Constant),// ->4021
/*3992*/    OPC_RecordNode,   // #0 = $b
/*3993*/    OPC_Scope, 12, /*->4007*/ // 2 children in Scope
/*3995*/      OPC_CheckPredicate, 20, // Predicate_immU6
/*3997*/      OPC_EmitConvertToTarget, 0,
/*3999*/      OPC_MorphNodeTo, TARGET_VAL(XCore::LDC_ru6), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (imm:i32)<<P:Predicate_immU6>>:$b - Complexity = 4
              // Dst: (LDC_ru6:i32 (imm:i32):$b)
/*4007*/    /*Scope*/ 12, /*->4020*/
/*4008*/      OPC_CheckPredicate, 21, // Predicate_immU16
/*4010*/      OPC_EmitConvertToTarget, 0,
/*4012*/      OPC_MorphNodeTo, TARGET_VAL(XCore::LDC_lru6), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (imm:i32)<<P:Predicate_immU16>>:$b - Complexity = 4
              // Dst: (LDC_lru6:i32 (imm:i32):$b)
/*4020*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::OR),// ->4035
/*4024*/    OPC_RecordChild0, // #0 = $b
/*4025*/    OPC_RecordChild1, // #1 = $c
/*4026*/    OPC_MorphNodeTo, TARGET_VAL(XCore::OR_3r), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (or:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
            // Dst: (OR_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::SDIV),// ->4049
/*4038*/    OPC_RecordChild0, // #0 = $b
/*4039*/    OPC_RecordChild1, // #1 = $c
/*4040*/    OPC_MorphNodeTo, TARGET_VAL(XCore::DIVS_l3r), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (sdiv:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
            // Dst: (DIVS_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::UDIV),// ->4063
/*4052*/    OPC_RecordChild0, // #0 = $b
/*4053*/    OPC_RecordChild1, // #1 = $c
/*4054*/    OPC_MorphNodeTo, TARGET_VAL(XCore::DIVU_l3r), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (udiv:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
            // Dst: (DIVU_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::SREM),// ->4077
/*4066*/    OPC_RecordChild0, // #0 = $b
/*4067*/    OPC_RecordChild1, // #1 = $c
/*4068*/    OPC_MorphNodeTo, TARGET_VAL(XCore::REMS_l3r), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (srem:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
            // Dst: (REMS_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::UREM),// ->4091
/*4080*/    OPC_RecordChild0, // #0 = $b
/*4081*/    OPC_RecordChild1, // #1 = $c
/*4082*/    OPC_MorphNodeTo, TARGET_VAL(XCore::REMU_l3r), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (urem:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
            // Dst: (REMU_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::BSWAP),// ->4103
/*4094*/    OPC_RecordChild0, // #0 = $src
/*4095*/    OPC_MorphNodeTo, TARGET_VAL(XCore::BYTEREV_l2r), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (bswap:i32 GRRegs:i32:$src) - Complexity = 3
            // Dst: (BYTEREV_l2r:i32 GRRegs:i32:$src)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::CTLZ),// ->4115
/*4106*/    OPC_RecordChild0, // #0 = $src
/*4107*/    OPC_MorphNodeTo, TARGET_VAL(XCore::CLZ_l2r), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (ctlz:i32 GRRegs:i32:$src) - Complexity = 3
            // Dst: (CLZ_l2r:i32 GRRegs:i32:$src)
          /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->4171
/*4118*/    OPC_RecordChild0, // #0 = $b
/*4119*/    OPC_MoveChild, 1,
/*4121*/    OPC_Scope, 15, /*->4138*/ // 3 children in Scope
/*4123*/      OPC_CheckValueType, MVT::i1,
/*4125*/      OPC_MoveParent,
/*4126*/      OPC_EmitInteger, MVT::i32, 1, 
/*4129*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sext_inreg:i32 GRRegs:i32:$b, i1:Other) - Complexity = 3
              // Dst: (SEXT_rus:i32 GRRegs:i32:$b, 1:i32)
/*4138*/    /*Scope*/ 15, /*->4154*/
/*4139*/      OPC_CheckValueType, MVT::i8,
/*4141*/      OPC_MoveParent,
/*4142*/      OPC_EmitInteger, MVT::i32, 8, 
/*4145*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sext_inreg:i32 GRRegs:i32:$b, i8:Other) - Complexity = 3
              // Dst: (SEXT_rus:i32 GRRegs:i32:$b, 8:i32)
/*4154*/    /*Scope*/ 15, /*->4170*/
/*4155*/      OPC_CheckValueType, MVT::i16,
/*4157*/      OPC_MoveParent,
/*4158*/      OPC_EmitInteger, MVT::i32, 16, 
/*4161*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sext_inreg:i32 GRRegs:i32:$b, i16:Other) - Complexity = 3
              // Dst: (SEXT_rus:i32 GRRegs:i32:$b, 16:i32)
/*4170*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->4190
/*4174*/    OPC_RecordNode,   // #0 = 'br' chained node
/*4175*/    OPC_RecordChild1, // #1 = $addr
/*4176*/    OPC_MoveChild, 1,
/*4178*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*4181*/    OPC_MoveParent,
/*4182*/    OPC_EmitMergeInputChains1_0,
/*4183*/    OPC_MorphNodeTo, TARGET_VAL(XCore::BRFU_lu6), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$addr) - Complexity = 3
            // Dst: (BRFU_lu6 (bb:Other):$addr)
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CTTZ),// ->4210
/*4193*/    OPC_RecordChild0, // #0 = $src
/*4194*/    OPC_EmitNode, TARGET_VAL(XCore::BITREV_l2r), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*4202*/    OPC_MorphNodeTo, TARGET_VAL(XCore::CLZ_l2r), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (cttz:i32 GRRegs:i32:$src) - Complexity = 3
            // Dst: (CLZ_l2r:i32 (BITREV_l2r:i32 GRRegs:i32:$src))
          /*SwitchOpcode*/ 20,  TARGET_VAL(ISD::TRAP),// ->4233
/*4213*/    OPC_RecordNode,   // #0 = 'trap' chained node
/*4214*/    OPC_EmitMergeInputChains1_0,
/*4215*/    OPC_EmitInteger, MVT::i32, 0, 
/*4218*/    OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*4226*/    OPC_MorphNodeTo, TARGET_VAL(XCore::ECALLF_1r), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 2, 
            // Src: (trap) - Complexity = 3
            // Dst: (ECALLF_1r (LDC_ru6:i32 0:i32))
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 4235 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 68
  // #OPC_RecordNode                     = 19
  // #OPC_RecordChild                    = 194
  // #OPC_RecordMemRef                   = 2
  // #OPC_CaptureGlueInput               = 3
  // #OPC_MoveChild                      = 98
  // #OPC_MoveParent                     = 226
  // #OPC_CheckSame                      = 1
  // #OPC_CheckPatternPredicate          = 0
  // #OPC_CheckPredicate                 = 93
  // #OPC_CheckOpcode                    = 59
  // #OPC_SwitchOpcode                   = 5
  // #OPC_CheckType                      = 42
  // #OPC_SwitchType                     = 0
  // #OPC_CheckChildType                 = 54
  // #OPC_CheckInteger                   = 78
  // #OPC_CheckCondCode                  = 33
  // #OPC_CheckValueType                 = 3
  // #OPC_CheckComplexPat                = 4
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 1
  // #OPC_EmitInteger                    = 25
  // #OPC_EmitStringInteger              = 0
  // #OPC_EmitRegister                   = 0
  // #OPC_EmitConvertToTarget            = 36
  // #OPC_EmitMergeInputChains           = 104
  // #OPC_EmitCopyToReg                  = 2
  // #OPC_EmitNode                       = 31
  // #OPC_EmitNodeXForm                  = 8
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 189

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_immUs
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() <= 11;

  }
  case 1: { // Predicate_immUs4
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return value%4 == 0 && value/4 <= 11;

  }
  case 2: { // Predicate_immUsNeg
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return -((uint32_t)N->getZExtValue()) <= 11;

  }
  case 3: { // Predicate_immUs4Neg
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return (-value)%4 == 0 && (-value)/4 <= 11;

  }
  case 4: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 5: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 6: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 7: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 8: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 9: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 10: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 11: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 12: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 13: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 14: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 15: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 16: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 17: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 18: { // Predicate_immBpwSubBitp
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return (value >= 24 && value <= 31)
          || value == 16
          || value == 8
          || value == 0;

  }
  case 19: { // Predicate_immBitp
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return (value >= 1 && value <= 8)
          || value == 16
          || value == 24
          || value == 32;

  }
  case 20: { // Predicate_immU6
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() < (1 << 6);

  }
  case 21: { // Predicate_immU16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() < (1 << 16);

  }
  case 22: { // Predicate_immMskBitp
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return immMskBitp(N); 
  }
  case 23: { // Predicate_immU10
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() < (1 << 10);

  }
  case 24: { // Predicate_immU20
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() < (1 << 20);

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
    return SelectADDRspii(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // div4_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: imm/4
  assert(N->getZExtValue() % 4 == 0);
  return getI32Imm(N->getZExtValue()/4);

  }
  case 1: {  // neg_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: -imm
  uint32_t value = N->getZExtValue();
  return getI32Imm(-value);

  }
  case 2: {  // div4neg_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: -imm/4
  uint32_t value = N->getZExtValue();
  assert(-value % 4 == 0);
  return getI32Imm(-value/4);

  }
  case 3: {  // bpwsub_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 32-imm
  uint32_t value = N->getZExtValue();
  return getI32Imm(32-value);

  }
  case 4: {  // msksize_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the size of a mask
  assert(isMask_32(N->getZExtValue()));
  // look for the first non-zero bit
  return getI32Imm(32 - CountLeadingZeros_32(N->getZExtValue()));

  }
  }
}

