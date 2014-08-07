/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the PPC target                                 *|
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
/*0*/     OPC_SwitchOpcode /*127 cases */, 33,  TARGET_VAL(ISD::PREFETCH),// ->37
/*4*/       OPC_RecordMemRef,
/*5*/       OPC_RecordNode,   // #0 = 'prefetch' chained node
/*6*/       OPC_RecordChild1, // #1 = $dst
/*7*/       OPC_MoveChild, 2,
/*9*/       OPC_CheckInteger, 0, 
/*11*/      OPC_CheckType, MVT::i32,
/*13*/      OPC_MoveParent,
/*14*/      OPC_MoveChild, 3,
/*16*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19*/      OPC_MoveParent,
/*20*/      OPC_MoveChild, 4,
/*22*/      OPC_CheckInteger, 1, 
/*24*/      OPC_MoveParent,
/*25*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*28*/      OPC_EmitMergeInputChains1_0,
/*29*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DCBT), 0|OPFL_Chain|OPFL_MemRefs,
                0/*#VTs*/, 2/*#Ops*/, 2, 3, 
            // Src: (prefetch xoaddr:iPTR:$dst, 0:i32, (imm:i32), 1:i32) - Complexity = 25
            // Dst: (DCBT xoaddr:iPTR:$dst)
          /*SwitchOpcode*/ 105|128,4/*617*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->658
/*41*/      OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*42*/      OPC_MoveChild, 1,
/*44*/      OPC_Scope, 17, /*->63*/ // 21 children in Scope
/*46*/        OPC_CheckInteger, 71|128,12/*1607*/, 
/*49*/        OPC_MoveParent,
/*50*/        OPC_RecordChild2, // #1 = $dst
/*51*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*54*/        OPC_EmitMergeInputChains1_0,
/*55*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBA), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1607:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBA xoaddr:iPTR:$dst)
/*63*/      /*Scope*/ 17, /*->81*/
/*64*/        OPC_CheckInteger, 72|128,12/*1608*/, 
/*67*/        OPC_MoveParent,
/*68*/        OPC_RecordChild2, // #1 = $dst
/*69*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*72*/        OPC_EmitMergeInputChains1_0,
/*73*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBF), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1608:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBF xoaddr:iPTR:$dst)
/*81*/      /*Scope*/ 17, /*->99*/
/*82*/        OPC_CheckInteger, 73|128,12/*1609*/, 
/*85*/        OPC_MoveParent,
/*86*/        OPC_RecordChild2, // #1 = $dst
/*87*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*90*/        OPC_EmitMergeInputChains1_0,
/*91*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBI), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1609:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBI xoaddr:iPTR:$dst)
/*99*/      /*Scope*/ 17, /*->117*/
/*100*/       OPC_CheckInteger, 74|128,12/*1610*/, 
/*103*/       OPC_MoveParent,
/*104*/       OPC_RecordChild2, // #1 = $dst
/*105*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*108*/       OPC_EmitMergeInputChains1_0,
/*109*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBST), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1610:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBST xoaddr:iPTR:$dst)
/*117*/     /*Scope*/ 17, /*->135*/
/*118*/       OPC_CheckInteger, 75|128,12/*1611*/, 
/*121*/       OPC_MoveParent,
/*122*/       OPC_RecordChild2, // #1 = $dst
/*123*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*126*/       OPC_EmitMergeInputChains1_0,
/*127*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBT), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1611:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBT xoaddr:iPTR:$dst)
/*135*/     /*Scope*/ 17, /*->153*/
/*136*/       OPC_CheckInteger, 76|128,12/*1612*/, 
/*139*/       OPC_MoveParent,
/*140*/       OPC_RecordChild2, // #1 = $dst
/*141*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*144*/       OPC_EmitMergeInputChains1_0,
/*145*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBTST), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1612:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBTST xoaddr:iPTR:$dst)
/*153*/     /*Scope*/ 17, /*->171*/
/*154*/       OPC_CheckInteger, 77|128,12/*1613*/, 
/*157*/       OPC_MoveParent,
/*158*/       OPC_RecordChild2, // #1 = $dst
/*159*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*162*/       OPC_EmitMergeInputChains1_0,
/*163*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBZ), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1613:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBZ xoaddr:iPTR:$dst)
/*171*/     /*Scope*/ 17, /*->189*/
/*172*/       OPC_CheckInteger, 78|128,12/*1614*/, 
/*175*/       OPC_MoveParent,
/*176*/       OPC_RecordChild2, // #1 = $dst
/*177*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*180*/       OPC_EmitMergeInputChains1_0,
/*181*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBZL), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1614:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBZL xoaddr:iPTR:$dst)
/*189*/     /*Scope*/ 21, /*->211*/
/*190*/       OPC_CheckInteger, 67|128,11/*1475*/, 
/*193*/       OPC_MoveParent,
/*194*/       OPC_RecordChild2, // #1 = $rS
/*195*/       OPC_RecordChild3, // #2 = $dst
/*196*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*198*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*201*/       OPC_EmitMergeInputChains1_0,
/*202*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEBX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1475:iPTR, v16i8:v16i8:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEBX v16i8:v16i8:$rS, xoaddr:iPTR:$dst)
/*211*/     /*Scope*/ 21, /*->233*/
/*212*/       OPC_CheckInteger, 68|128,11/*1476*/, 
/*215*/       OPC_MoveParent,
/*216*/       OPC_RecordChild2, // #1 = $rS
/*217*/       OPC_RecordChild3, // #2 = $dst
/*218*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*220*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*223*/       OPC_EmitMergeInputChains1_0,
/*224*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEHX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1476:iPTR, v8i16:v8i16:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEHX v8i16:v8i16:$rS, xoaddr:iPTR:$dst)
/*233*/     /*Scope*/ 21, /*->255*/
/*234*/       OPC_CheckInteger, 69|128,11/*1477*/, 
/*237*/       OPC_MoveParent,
/*238*/       OPC_RecordChild2, // #1 = $rS
/*239*/       OPC_RecordChild3, // #2 = $dst
/*240*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*242*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*245*/       OPC_EmitMergeInputChains1_0,
/*246*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEWX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1477:iPTR, v4i32:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEWX v4i32:v4i32:$rS, xoaddr:iPTR:$dst)
/*255*/     /*Scope*/ 21, /*->277*/
/*256*/       OPC_CheckInteger, 70|128,11/*1478*/, 
/*259*/       OPC_MoveParent,
/*260*/       OPC_RecordChild2, // #1 = $rS
/*261*/       OPC_RecordChild3, // #2 = $dst
/*262*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*264*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*267*/       OPC_EmitMergeInputChains1_0,
/*268*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1478:iPTR, v4i32:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVX v4i32:v4i32:$rS, xoaddr:iPTR:$dst)
/*277*/     /*Scope*/ 21, /*->299*/
/*278*/       OPC_CheckInteger, 71|128,11/*1479*/, 
/*281*/       OPC_MoveParent,
/*282*/       OPC_RecordChild2, // #1 = $rS
/*283*/       OPC_RecordChild3, // #2 = $dst
/*284*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*286*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*289*/       OPC_EmitMergeInputChains1_0,
/*290*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVXL), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1479:iPTR, v4i32:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVXL v4i32:v4i32:$rS, xoaddr:iPTR:$dst)
/*299*/     /*Scope*/ 35, /*->335*/
/*300*/       OPC_CheckInteger, 52|128,11/*1460*/, 
/*303*/       OPC_MoveParent,
/*304*/       OPC_RecordChild2, // #1 = $STRM
/*305*/       OPC_MoveChild, 2,
/*307*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*310*/       OPC_MoveParent,
/*311*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*313*/       OPC_EmitMergeInputChains1_0,
/*314*/       OPC_EmitInteger, MVT::i32, 0, 
/*317*/       OPC_EmitConvertToTarget, 1,
/*319*/       OPC_EmitInteger, MVT::i32, 0, 
/*322*/       OPC_EmitInteger, MVT::i32, 0, 
/*325*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DSS), 0|OPFL_Chain,
                  0/*#VTs*/, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (intrinsic_void 1460:iPTR, (imm:i32):$STRM) - Complexity = 11
              // Dst: (DSS 0:i32, (imm:i32):$STRM, 0:i32, 0:i32)
/*335*/     /*Scope*/ 65, /*->401*/
/*336*/       OPC_CheckInteger, 54|128,11/*1462*/, 
/*339*/       OPC_MoveParent,
/*340*/       OPC_RecordChild2, // #1 = $rA
/*341*/       OPC_Scope, 28, /*->371*/ // 2 children in Scope
/*343*/         OPC_CheckChild2Type, MVT::i32,
/*345*/         OPC_RecordChild3, // #2 = $rB
/*346*/         OPC_RecordChild4, // #3 = $STRM
/*347*/         OPC_MoveChild, 4,
/*349*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*352*/         OPC_MoveParent,
/*353*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*355*/         OPC_EmitMergeInputChains1_0,
/*356*/         OPC_EmitInteger, MVT::i32, 0, 
/*359*/         OPC_EmitConvertToTarget, 3,
/*361*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DST), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1462:iPTR, i32:i32:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DST 0:i32, (imm:i32):$STRM, ?:i32:$rA, ?:i32:$rB)
/*371*/       /*Scope*/ 28, /*->400*/
/*372*/         OPC_CheckChild2Type, MVT::i64,
/*374*/         OPC_RecordChild3, // #2 = $rB
/*375*/         OPC_RecordChild4, // #3 = $STRM
/*376*/         OPC_MoveChild, 4,
/*378*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*381*/         OPC_MoveParent,
/*382*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*384*/         OPC_EmitMergeInputChains1_0,
/*385*/         OPC_EmitInteger, MVT::i32, 0, 
/*388*/         OPC_EmitConvertToTarget, 3,
/*390*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DST64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1462:iPTR, i64:i64:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DST64 0:i32, (imm:i32):$STRM, ?:i64:$rA, ?:i32:$rB)
/*400*/       0, /*End of Scope*/
/*401*/     /*Scope*/ 65, /*->467*/
/*402*/       OPC_CheckInteger, 57|128,11/*1465*/, 
/*405*/       OPC_MoveParent,
/*406*/       OPC_RecordChild2, // #1 = $rA
/*407*/       OPC_Scope, 28, /*->437*/ // 2 children in Scope
/*409*/         OPC_CheckChild2Type, MVT::i32,
/*411*/         OPC_RecordChild3, // #2 = $rB
/*412*/         OPC_RecordChild4, // #3 = $STRM
/*413*/         OPC_MoveChild, 4,
/*415*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*418*/         OPC_MoveParent,
/*419*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*421*/         OPC_EmitMergeInputChains1_0,
/*422*/         OPC_EmitInteger, MVT::i32, 1, 
/*425*/         OPC_EmitConvertToTarget, 3,
/*427*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTT), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1465:iPTR, i32:i32:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTT 1:i32, (imm:i32):$STRM, ?:i32:$rA, ?:i32:$rB)
/*437*/       /*Scope*/ 28, /*->466*/
/*438*/         OPC_CheckChild2Type, MVT::i64,
/*440*/         OPC_RecordChild3, // #2 = $rB
/*441*/         OPC_RecordChild4, // #3 = $STRM
/*442*/         OPC_MoveChild, 4,
/*444*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*447*/         OPC_MoveParent,
/*448*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*450*/         OPC_EmitMergeInputChains1_0,
/*451*/         OPC_EmitInteger, MVT::i32, 1, 
/*454*/         OPC_EmitConvertToTarget, 3,
/*456*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTT64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1465:iPTR, i64:i64:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTT64 1:i32, (imm:i32):$STRM, ?:i64:$rA, ?:i32:$rB)
/*466*/       0, /*End of Scope*/
/*467*/     /*Scope*/ 65, /*->533*/
/*468*/       OPC_CheckInteger, 55|128,11/*1463*/, 
/*471*/       OPC_MoveParent,
/*472*/       OPC_RecordChild2, // #1 = $rA
/*473*/       OPC_Scope, 28, /*->503*/ // 2 children in Scope
/*475*/         OPC_CheckChild2Type, MVT::i32,
/*477*/         OPC_RecordChild3, // #2 = $rB
/*478*/         OPC_RecordChild4, // #3 = $STRM
/*479*/         OPC_MoveChild, 4,
/*481*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*484*/         OPC_MoveParent,
/*485*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*487*/         OPC_EmitMergeInputChains1_0,
/*488*/         OPC_EmitInteger, MVT::i32, 0, 
/*491*/         OPC_EmitConvertToTarget, 3,
/*493*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTST), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1463:iPTR, i32:i32:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTST 0:i32, (imm:i32):$STRM, ?:i32:$rA, ?:i32:$rB)
/*503*/       /*Scope*/ 28, /*->532*/
/*504*/         OPC_CheckChild2Type, MVT::i64,
/*506*/         OPC_RecordChild3, // #2 = $rB
/*507*/         OPC_RecordChild4, // #3 = $STRM
/*508*/         OPC_MoveChild, 4,
/*510*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*513*/         OPC_MoveParent,
/*514*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*516*/         OPC_EmitMergeInputChains1_0,
/*517*/         OPC_EmitInteger, MVT::i32, 0, 
/*520*/         OPC_EmitConvertToTarget, 3,
/*522*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTST64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1463:iPTR, i64:i64:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTST64 0:i32, (imm:i32):$STRM, ?:i64:$rA, ?:i32:$rB)
/*532*/       0, /*End of Scope*/
/*533*/     /*Scope*/ 65, /*->599*/
/*534*/       OPC_CheckInteger, 56|128,11/*1464*/, 
/*537*/       OPC_MoveParent,
/*538*/       OPC_RecordChild2, // #1 = $rA
/*539*/       OPC_Scope, 28, /*->569*/ // 2 children in Scope
/*541*/         OPC_CheckChild2Type, MVT::i32,
/*543*/         OPC_RecordChild3, // #2 = $rB
/*544*/         OPC_RecordChild4, // #3 = $STRM
/*545*/         OPC_MoveChild, 4,
/*547*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*550*/         OPC_MoveParent,
/*551*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*553*/         OPC_EmitMergeInputChains1_0,
/*554*/         OPC_EmitInteger, MVT::i32, 1, 
/*557*/         OPC_EmitConvertToTarget, 3,
/*559*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTSTT), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1464:iPTR, i32:i32:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTSTT 1:i32, (imm:i32):$STRM, ?:i32:$rA, ?:i32:$rB)
/*569*/       /*Scope*/ 28, /*->598*/
/*570*/         OPC_CheckChild2Type, MVT::i64,
/*572*/         OPC_RecordChild3, // #2 = $rB
/*573*/         OPC_RecordChild4, // #3 = $STRM
/*574*/         OPC_MoveChild, 4,
/*576*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*579*/         OPC_MoveParent,
/*580*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*582*/         OPC_EmitMergeInputChains1_0,
/*583*/         OPC_EmitInteger, MVT::i32, 1, 
/*586*/         OPC_EmitConvertToTarget, 3,
/*588*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTSTT64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1464:iPTR, i64:i64:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTSTT64 1:i32, (imm:i32):$STRM, ?:i64:$rA, ?:i32:$rB)
/*598*/       0, /*End of Scope*/
/*599*/     /*Scope*/ 11, /*->611*/
/*600*/       OPC_CheckInteger, 79|128,12/*1615*/, 
/*603*/       OPC_MoveParent,
/*604*/       OPC_EmitMergeInputChains1_0,
/*605*/       OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (intrinsic_void 1615:iPTR) - Complexity = 8
              // Dst: (SYNC)
/*611*/     /*Scope*/ 15, /*->627*/
/*612*/       OPC_CheckInteger, 66|128,11/*1474*/, 
/*615*/       OPC_MoveParent,
/*616*/       OPC_RecordChild2, // #1 = $vB
/*617*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*619*/       OPC_EmitMergeInputChains1_0,
/*620*/       OPC_MorphNodeTo, TARGET_VAL(PPC::MTVSCR), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 1474:iPTR, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (MTVSCR v4i32:v4i32:$vB)
/*627*/     /*Scope*/ 29, /*->657*/
/*628*/       OPC_CheckInteger, 53|128,11/*1461*/, 
/*631*/       OPC_MoveParent,
/*632*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*634*/       OPC_EmitMergeInputChains1_0,
/*635*/       OPC_EmitInteger, MVT::i32, 1, 
/*638*/       OPC_EmitInteger, MVT::i32, 0, 
/*641*/       OPC_EmitInteger, MVT::i32, 0, 
/*644*/       OPC_EmitInteger, MVT::i32, 0, 
/*647*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DSSALL), 0|OPFL_Chain,
                  0/*#VTs*/, 4/*#Ops*/, 1, 2, 3, 4, 
              // Src: (intrinsic_void 1461:iPTR) - Complexity = 8
              // Dst: (DSSALL 1:i32, 0:i32, 0:i32, 0:i32)
/*657*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 83|128,4/*595*/,  TARGET_VAL(ISD::ADD),// ->1257
/*662*/     OPC_Scope, 49|128,1/*177*/, /*->842*/ // 3 children in Scope
/*665*/       OPC_RecordChild0, // #0 = $rA
/*666*/       OPC_MoveChild, 1,
/*668*/       OPC_SwitchOpcode /*2 cases */, 24,  TARGET_VAL(PPCISD::Lo),// ->696
/*672*/         OPC_RecordChild0, // #1 = $sym
/*673*/         OPC_MoveChild, 0,
/*675*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*678*/         OPC_MoveParent,
/*679*/         OPC_MoveChild, 1,
/*681*/         OPC_CheckInteger, 0, 
/*683*/         OPC_MoveParent,
/*684*/         OPC_MoveParent,
/*685*/         OPC_CheckType, MVT::i32,
/*687*/         OPC_MorphNodeTo, TARGET_VAL(PPC::LA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 i32:i32:$rA, (PPClo:i32 (tglobaladdr:i32):$sym, 0:i32)) - Complexity = 14
                // Dst: (LA:i32 i32:i32:$rA, (tglobaladdr:i32):$sym)
              /*SwitchOpcode*/ 13|128,1/*141*/,  TARGET_VAL(PPCISD::Hi),// ->841
/*700*/         OPC_RecordChild0, // #1 = $g
/*701*/         OPC_MoveChild, 0,
/*703*/         OPC_SwitchOpcode /*4 cases */, 31,  TARGET_VAL(ISD::TargetGlobalAddress),// ->738
/*707*/           OPC_MoveParent,
/*708*/           OPC_MoveChild, 1,
/*710*/           OPC_CheckInteger, 0, 
/*712*/           OPC_MoveParent,
/*713*/           OPC_MoveParent,
/*714*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->726
/*717*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 i32:i32:$in, (PPChi:i32 (tglobaladdr:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tglobaladdr:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->737
/*728*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 i64:i64:$in, (PPChi:i64 (tglobaladdr:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tglobaladdr:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetConstantPool),// ->772
/*741*/           OPC_MoveParent,
/*742*/           OPC_MoveChild, 1,
/*744*/           OPC_CheckInteger, 0, 
/*746*/           OPC_MoveParent,
/*747*/           OPC_MoveParent,
/*748*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->760
/*751*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 i32:i32:$in, (PPChi:i32 (tconstpool:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tconstpool:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->771
/*762*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 i64:i64:$in, (PPChi:i64 (tconstpool:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tconstpool:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetJumpTable),// ->806
/*775*/           OPC_MoveParent,
/*776*/           OPC_MoveChild, 1,
/*778*/           OPC_CheckInteger, 0, 
/*780*/           OPC_MoveParent,
/*781*/           OPC_MoveParent,
/*782*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->794
/*785*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 i32:i32:$in, (PPChi:i32 (tjumptable:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tjumptable:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->805
/*796*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 i64:i64:$in, (PPChi:i64 (tjumptable:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tjumptable:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetBlockAddress),// ->840
/*809*/           OPC_MoveParent,
/*810*/           OPC_MoveChild, 1,
/*812*/           OPC_CheckInteger, 0, 
/*814*/           OPC_MoveParent,
/*815*/           OPC_MoveParent,
/*816*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->828
/*819*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 i32:i32:$in, (PPChi:i32 (tblockaddress:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tblockaddress:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->839
/*830*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 i64:i64:$in, (PPChi:i64 (tblockaddress:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tblockaddress:i64):$g)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*842*/     /*Scope*/ 53|128,1/*181*/, /*->1025*/
/*844*/       OPC_MoveChild, 0,
/*846*/       OPC_SwitchOpcode /*2 cases */, 25,  TARGET_VAL(PPCISD::Lo),// ->875
/*850*/         OPC_RecordChild0, // #0 = $sym
/*851*/         OPC_MoveChild, 0,
/*853*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*856*/         OPC_MoveParent,
/*857*/         OPC_MoveChild, 1,
/*859*/         OPC_CheckInteger, 0, 
/*861*/         OPC_MoveParent,
/*862*/         OPC_MoveParent,
/*863*/         OPC_RecordChild1, // #1 = $rA
/*864*/         OPC_CheckType, MVT::i32,
/*866*/         OPC_MorphNodeTo, TARGET_VAL(PPC::LA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 (PPClo:i32 (tglobaladdr:i32):$sym, 0:i32), i32:i32:$rA) - Complexity = 14
                // Dst: (LA:i32 i32:i32:$rA, (tglobaladdr:i32):$sym)
              /*SwitchOpcode*/ 17|128,1/*145*/,  TARGET_VAL(PPCISD::Hi),// ->1024
/*879*/         OPC_RecordChild0, // #0 = $g
/*880*/         OPC_MoveChild, 0,
/*882*/         OPC_SwitchOpcode /*4 cases */, 32,  TARGET_VAL(ISD::TargetGlobalAddress),// ->918
/*886*/           OPC_MoveParent,
/*887*/           OPC_MoveChild, 1,
/*889*/           OPC_CheckInteger, 0, 
/*891*/           OPC_MoveParent,
/*892*/           OPC_MoveParent,
/*893*/           OPC_RecordChild1, // #1 = $in
/*894*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->906
/*897*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tglobaladdr:i64):$g, 0:i64), i64:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tglobaladdr:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->917
/*908*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tglobaladdr:i32):$g, 0:i32), i32:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tglobaladdr:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetConstantPool),// ->953
/*921*/           OPC_MoveParent,
/*922*/           OPC_MoveChild, 1,
/*924*/           OPC_CheckInteger, 0, 
/*926*/           OPC_MoveParent,
/*927*/           OPC_MoveParent,
/*928*/           OPC_RecordChild1, // #1 = $in
/*929*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->941
/*932*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tconstpool:i64):$g, 0:i64), i64:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tconstpool:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->952
/*943*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tconstpool:i32):$g, 0:i32), i32:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tconstpool:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetJumpTable),// ->988
/*956*/           OPC_MoveParent,
/*957*/           OPC_MoveChild, 1,
/*959*/           OPC_CheckInteger, 0, 
/*961*/           OPC_MoveParent,
/*962*/           OPC_MoveParent,
/*963*/           OPC_RecordChild1, // #1 = $in
/*964*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->976
/*967*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tjumptable:i64):$g, 0:i64), i64:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tjumptable:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->987
/*978*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tjumptable:i32):$g, 0:i32), i32:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tjumptable:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetBlockAddress),// ->1023
/*991*/           OPC_MoveParent,
/*992*/           OPC_MoveChild, 1,
/*994*/           OPC_CheckInteger, 0, 
/*996*/           OPC_MoveParent,
/*997*/           OPC_MoveParent,
/*998*/           OPC_RecordChild1, // #1 = $in
/*999*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->1011
/*1002*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tblockaddress:i64):$g, 0:i64), i64:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tblockaddress:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->1022
/*1013*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tblockaddress:i32):$g, 0:i32), i32:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tblockaddress:i32):$g)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*1025*/    /*Scope*/ 101|128,1/*229*/, /*->1256*/
/*1027*/      OPC_RecordChild0, // #0 = $rA
/*1028*/      OPC_Scope, 99, /*->1129*/ // 3 children in Scope
/*1030*/        OPC_RecordChild1, // #1 = $imm
/*1031*/        OPC_MoveChild, 1,
/*1033*/        OPC_SwitchOpcode /*2 cases */, 76,  TARGET_VAL(ISD::Constant),// ->1113
/*1037*/          OPC_Scope, 16, /*->1055*/ // 4 children in Scope
/*1039*/            OPC_CheckPredicate, 0, // Predicate_immSExt16
/*1041*/            OPC_MoveParent,
/*1042*/            OPC_CheckType, MVT::i32,
/*1044*/            OPC_EmitConvertToTarget, 1,
/*1046*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i32 i32:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                    // Dst: (ADDI:i32 i32:i32:$rA, (imm:i32):$imm)
/*1055*/          /*Scope*/ 19, /*->1075*/
/*1056*/            OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*1058*/            OPC_MoveParent,
/*1059*/            OPC_CheckType, MVT::i32,
/*1061*/            OPC_EmitConvertToTarget, 1,
/*1063*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*1066*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (add:i32 i32:i32:$rA, (imm:i32)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm) - Complexity = 7
                    // Dst: (ADDIS:i32 i32:i32:$rA, (HI16:i32 (imm:i32):$imm))
/*1075*/          /*Scope*/ 16, /*->1092*/
/*1076*/            OPC_CheckPredicate, 0, // Predicate_immSExt16
/*1078*/            OPC_MoveParent,
/*1079*/            OPC_CheckType, MVT::i64,
/*1081*/            OPC_EmitConvertToTarget, 1,
/*1083*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i64 i64:i64:$rA, (imm:i64)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                    // Dst: (ADDI8:i64 i64:i64:$rA, (imm:i64):$imm)
/*1092*/          /*Scope*/ 19, /*->1112*/
/*1093*/            OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*1095*/            OPC_MoveParent,
/*1096*/            OPC_CheckType, MVT::i64,
/*1098*/            OPC_EmitConvertToTarget, 1,
/*1100*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*1103*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (add:i64 i64:i64:$rA, (imm:i64)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm) - Complexity = 7
                    // Dst: (ADDIS8:i64 i64:i64:$rA, (HI16:i64 (imm:i64):$imm))
/*1112*/          0, /*End of Scope*/
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->1128
/*1116*/          OPC_MoveParent,
/*1117*/          OPC_CheckType, MVT::i64,
/*1119*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8TLS), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 i64:i64:$rA, (tglobaltlsaddr:i64):$rB) - Complexity = 6
                  // Dst: (ADD8TLS:i64 i64:i64:$rA, (tglobaltlsaddr:i64):$rB)
                0, // EndSwitchOpcode
/*1129*/      /*Scope*/ 18, /*->1148*/
/*1130*/        OPC_MoveChild, 0,
/*1132*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*1135*/        OPC_MoveParent,
/*1136*/        OPC_RecordChild1, // #1 = $rA
/*1137*/        OPC_CheckType, MVT::i64,
/*1139*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8TLS), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (add:i64 (tglobaltlsaddr:i64):$rB, i64:i64:$rA) - Complexity = 6
                // Dst: (ADD8TLS:i64 i64:i64:$rA, (tglobaltlsaddr:i64):$rB)
/*1148*/      /*Scope*/ 106, /*->1255*/
/*1149*/        OPC_RecordChild1, // #1 = $imm
/*1150*/        OPC_Scope, 36, /*->1188*/ // 6 children in Scope
/*1152*/          OPC_MoveChild, 1,
/*1154*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1157*/          OPC_MoveParent,
/*1158*/          OPC_CheckType, MVT::i32,
/*1160*/          OPC_EmitConvertToTarget, 1,
/*1162*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*1165*/          OPC_EmitNode, TARGET_VAL(PPC::ADDI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*1174*/          OPC_EmitConvertToTarget, 1,
/*1176*/          OPC_EmitNodeXForm, 2, 5, // HA16
/*1179*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                  // Src: (add:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                  // Dst: (ADDIS:i32 (ADDI:i32 ?:i32:$in, (LO16:i32 (imm:i32):$imm)), (HA16:i32 (imm:i32):$imm))
/*1188*/        /*Scope*/ 11, /*->1200*/
/*1189*/          OPC_CheckType, MVT::i32,
/*1191*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADD4), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
                  // Dst: (ADD4:i32 i32:i32:$rA, i32:i32:$rB)
/*1200*/        /*Scope*/ 11, /*->1212*/
/*1201*/          OPC_CheckType, MVT::i64,
/*1203*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
                  // Dst: (ADD8:i64 i64:i64:$rA, i64:i64:$rB)
/*1212*/        /*Scope*/ 13, /*->1226*/
/*1213*/          OPC_CheckType, MVT::v16i8,
/*1215*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*1217*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUBM), 0,
                      1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                  // Src: (add:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
                  // Dst: (VADDUBM:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*1226*/        /*Scope*/ 13, /*->1240*/
/*1227*/          OPC_CheckType, MVT::v8i16,
/*1229*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*1231*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUHM), 0,
                      1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                  // Src: (add:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
                  // Dst: (VADDUHM:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*1240*/        /*Scope*/ 13, /*->1254*/
/*1241*/          OPC_CheckType, MVT::v4i32,
/*1243*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*1245*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUWM), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
                  // Dst: (VADDUWM:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*1254*/        0, /*End of Scope*/
/*1255*/      0, /*End of Scope*/
/*1256*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 117|128,6/*885*/,  TARGET_VAL(ISD::LOAD),// ->2146
/*1261*/    OPC_RecordMemRef,
/*1262*/    OPC_RecordNode,   // #0 = 'ld' chained node
/*1263*/    OPC_RecordChild1, // #1 = $src
/*1264*/    OPC_CheckPredicate, 2, // Predicate_unindexedload
/*1266*/    OPC_Scope, 19, /*->1287*/ // 19 children in Scope
/*1268*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1270*/      OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1272*/      OPC_CheckType, MVT::i32,
/*1274*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1277*/      OPC_EmitMergeInputChains1_0,
/*1278*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1287*/    /*Scope*/ 19, /*->1307*/
/*1288*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1290*/      OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1292*/      OPC_CheckType, MVT::i32,
/*1294*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1297*/      OPC_EmitMergeInputChains1_0,
/*1298*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHA), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
              // Dst: (LHA:i32 iaddr:iPTR:$src)
/*1307*/    /*Scope*/ 19, /*->1327*/
/*1308*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1310*/      OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1312*/      OPC_CheckType, MVT::i32,
/*1314*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1317*/      OPC_EmitMergeInputChains1_0,
/*1318*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
              // Dst: (LHZ:i32 iaddr:iPTR:$src)
/*1327*/    /*Scope*/ 17, /*->1345*/
/*1328*/      OPC_CheckPredicate, 8, // Predicate_load
/*1330*/      OPC_CheckType, MVT::i32,
/*1332*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1335*/      OPC_EmitMergeInputChains1_0,
/*1336*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LWZ:i32 iaddr:iPTR:$src)
/*1345*/    /*Scope*/ 19, /*->1365*/
/*1346*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1348*/      OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1350*/      OPC_CheckType, MVT::i32,
/*1352*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1355*/      OPC_EmitMergeInputChains1_0,
/*1356*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1365*/    /*Scope*/ 19, /*->1385*/
/*1366*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1368*/      OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1370*/      OPC_CheckType, MVT::i32,
/*1372*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1375*/      OPC_EmitMergeInputChains1_0,
/*1376*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHAX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
              // Dst: (LHAX:i32 xaddr:iPTR:$src)
/*1385*/    /*Scope*/ 19, /*->1405*/
/*1386*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1388*/      OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1390*/      OPC_CheckType, MVT::i32,
/*1392*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1395*/      OPC_EmitMergeInputChains1_0,
/*1396*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
              // Dst: (LHZX:i32 xaddr:iPTR:$src)
/*1405*/    /*Scope*/ 17, /*->1423*/
/*1406*/      OPC_CheckPredicate, 8, // Predicate_load
/*1408*/      OPC_CheckType, MVT::i32,
/*1410*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1413*/      OPC_EmitMergeInputChains1_0,
/*1414*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LWZX:i32 xaddr:iPTR:$src)
/*1423*/    /*Scope*/ 36, /*->1460*/
/*1424*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1426*/      OPC_CheckPredicate, 9, // Predicate_zextloadi1
/*1428*/      OPC_CheckType, MVT::i32,
/*1430*/      OPC_Scope, 13, /*->1445*/ // 2 children in Scope
/*1432*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1435*/        OPC_EmitMergeInputChains1_0,
/*1436*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1445*/      /*Scope*/ 13, /*->1459*/
/*1446*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1449*/        OPC_EmitMergeInputChains1_0,
/*1450*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1459*/      0, /*End of Scope*/
/*1460*/    /*Scope*/ 105, /*->1566*/
/*1461*/      OPC_CheckPredicate, 10, // Predicate_extload
/*1463*/      OPC_CheckType, MVT::i32,
/*1465*/      OPC_Scope, 32, /*->1499*/ // 3 children in Scope
/*1467*/        OPC_CheckPredicate, 11, // Predicate_extloadi1
/*1469*/        OPC_Scope, 13, /*->1484*/ // 2 children in Scope
/*1471*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1474*/          OPC_EmitMergeInputChains1_0,
/*1475*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1484*/        /*Scope*/ 13, /*->1498*/
/*1485*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1488*/          OPC_EmitMergeInputChains1_0,
/*1489*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1498*/        0, /*End of Scope*/
/*1499*/      /*Scope*/ 32, /*->1532*/
/*1500*/        OPC_CheckPredicate, 12, // Predicate_extloadi8
/*1502*/        OPC_Scope, 13, /*->1517*/ // 2 children in Scope
/*1504*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1507*/          OPC_EmitMergeInputChains1_0,
/*1508*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1517*/        /*Scope*/ 13, /*->1531*/
/*1518*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1521*/          OPC_EmitMergeInputChains1_0,
/*1522*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1531*/        0, /*End of Scope*/
/*1532*/      /*Scope*/ 32, /*->1565*/
/*1533*/        OPC_CheckPredicate, 13, // Predicate_extloadi16
/*1535*/        OPC_Scope, 13, /*->1550*/ // 2 children in Scope
/*1537*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1540*/          OPC_EmitMergeInputChains1_0,
/*1541*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZ:i32 iaddr:iPTR:$src)
/*1550*/        /*Scope*/ 13, /*->1564*/
/*1551*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1554*/          OPC_EmitMergeInputChains1_0,
/*1555*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZX:i32 xaddr:iPTR:$src)
/*1564*/        0, /*End of Scope*/
/*1565*/      0, /*End of Scope*/
/*1566*/    /*Scope*/ 72, /*->1639*/
/*1567*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1569*/      OPC_CheckType, MVT::i64,
/*1571*/      OPC_Scope, 15, /*->1588*/ // 4 children in Scope
/*1573*/        OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1575*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1578*/        OPC_EmitMergeInputChains1_0,
/*1579*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHA8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LHA8:i64 iaddr:iPTR:$src)
/*1588*/      /*Scope*/ 17, /*->1606*/
/*1589*/        OPC_CheckPredicate, 14, // Predicate_sextloadi32
/*1591*/        OPC_CheckPredicate, 15, // Predicate_aligned4sextloadi32
/*1593*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*1596*/        OPC_EmitMergeInputChains1_0,
/*1597*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWA), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ixaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>><<P:Predicate_aligned4sextloadi32>> - Complexity = 13
                // Dst: (LWA:i64 ixaddr:iPTR:$src)
/*1606*/      /*Scope*/ 15, /*->1622*/
/*1607*/        OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1609*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1612*/        OPC_EmitMergeInputChains1_0,
/*1613*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHAX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LHAX8:i64 xaddr:iPTR:$src)
/*1622*/      /*Scope*/ 15, /*->1638*/
/*1623*/        OPC_CheckPredicate, 14, // Predicate_sextloadi32
/*1625*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1628*/        OPC_EmitMergeInputChains1_0,
/*1629*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWAX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                // Dst: (LWAX:i64 xaddr:iPTR:$src)
/*1638*/      0, /*End of Scope*/
/*1639*/    /*Scope*/ 102, /*->1742*/
/*1640*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1642*/      OPC_CheckType, MVT::i64,
/*1644*/      OPC_Scope, 15, /*->1661*/ // 6 children in Scope
/*1646*/        OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1648*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1651*/        OPC_EmitMergeInputChains1_0,
/*1652*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1661*/      /*Scope*/ 15, /*->1677*/
/*1662*/        OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1664*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1667*/        OPC_EmitMergeInputChains1_0,
/*1668*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LHZ8:i64 iaddr:iPTR:$src)
/*1677*/      /*Scope*/ 15, /*->1693*/
/*1678*/        OPC_CheckPredicate, 16, // Predicate_zextloadi32
/*1680*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1683*/        OPC_EmitMergeInputChains1_0,
/*1684*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LWZ8:i64 iaddr:iPTR:$src)
/*1693*/      /*Scope*/ 15, /*->1709*/
/*1694*/        OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1696*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1699*/        OPC_EmitMergeInputChains1_0,
/*1700*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1709*/      /*Scope*/ 15, /*->1725*/
/*1710*/        OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1712*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1715*/        OPC_EmitMergeInputChains1_0,
/*1716*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LHZX8:i64 xaddr:iPTR:$src)
/*1725*/      /*Scope*/ 15, /*->1741*/
/*1726*/        OPC_CheckPredicate, 16, // Predicate_zextloadi32
/*1728*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1731*/        OPC_EmitMergeInputChains1_0,
/*1732*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LWZX8:i64 xaddr:iPTR:$src)
/*1741*/      0, /*End of Scope*/
/*1742*/    /*Scope*/ 36, /*->1779*/
/*1743*/      OPC_CheckPredicate, 8, // Predicate_load
/*1745*/      OPC_CheckType, MVT::i64,
/*1747*/      OPC_Scope, 15, /*->1764*/ // 2 children in Scope
/*1749*/        OPC_CheckPredicate, 17, // Predicate_aligned4load
/*1751*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*1754*/        OPC_EmitMergeInputChains1_0,
/*1755*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LD), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ixaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned4load>> - Complexity = 13
                // Dst: (LD:i64 ixaddr:iPTR:$src)
/*1764*/      /*Scope*/ 13, /*->1778*/
/*1765*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1768*/        OPC_EmitMergeInputChains1_0,
/*1769*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDX:i64 xaddr:iPTR:$src)
/*1778*/      0, /*End of Scope*/
/*1779*/    /*Scope*/ 36, /*->1816*/
/*1780*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1782*/      OPC_CheckPredicate, 9, // Predicate_zextloadi1
/*1784*/      OPC_CheckType, MVT::i64,
/*1786*/      OPC_Scope, 13, /*->1801*/ // 2 children in Scope
/*1788*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1791*/        OPC_EmitMergeInputChains1_0,
/*1792*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1801*/      /*Scope*/ 13, /*->1815*/
/*1802*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1805*/        OPC_EmitMergeInputChains1_0,
/*1806*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1815*/      0, /*End of Scope*/
/*1816*/    /*Scope*/ 10|128,1/*138*/, /*->1956*/
/*1818*/      OPC_CheckPredicate, 10, // Predicate_extload
/*1820*/      OPC_CheckType, MVT::i64,
/*1822*/      OPC_Scope, 32, /*->1856*/ // 4 children in Scope
/*1824*/        OPC_CheckPredicate, 11, // Predicate_extloadi1
/*1826*/        OPC_Scope, 13, /*->1841*/ // 2 children in Scope
/*1828*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1831*/          OPC_EmitMergeInputChains1_0,
/*1832*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1841*/        /*Scope*/ 13, /*->1855*/
/*1842*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1845*/          OPC_EmitMergeInputChains1_0,
/*1846*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1855*/        0, /*End of Scope*/
/*1856*/      /*Scope*/ 32, /*->1889*/
/*1857*/        OPC_CheckPredicate, 12, // Predicate_extloadi8
/*1859*/        OPC_Scope, 13, /*->1874*/ // 2 children in Scope
/*1861*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1864*/          OPC_EmitMergeInputChains1_0,
/*1865*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1874*/        /*Scope*/ 13, /*->1888*/
/*1875*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1878*/          OPC_EmitMergeInputChains1_0,
/*1879*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1888*/        0, /*End of Scope*/
/*1889*/      /*Scope*/ 32, /*->1922*/
/*1890*/        OPC_CheckPredicate, 13, // Predicate_extloadi16
/*1892*/        OPC_Scope, 13, /*->1907*/ // 2 children in Scope
/*1894*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1897*/          OPC_EmitMergeInputChains1_0,
/*1898*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZ8:i64 iaddr:iPTR:$src)
/*1907*/        /*Scope*/ 13, /*->1921*/
/*1908*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1911*/          OPC_EmitMergeInputChains1_0,
/*1912*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZX8:i64 xaddr:iPTR:$src)
/*1921*/        0, /*End of Scope*/
/*1922*/      /*Scope*/ 32, /*->1955*/
/*1923*/        OPC_CheckPredicate, 18, // Predicate_extloadi32
/*1925*/        OPC_Scope, 13, /*->1940*/ // 2 children in Scope
/*1927*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1930*/          OPC_EmitMergeInputChains1_0,
/*1931*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LWZ8:i64 iaddr:iPTR:$src)
/*1940*/        /*Scope*/ 13, /*->1954*/
/*1941*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1944*/          OPC_EmitMergeInputChains1_0,
/*1945*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LWZX8:i64 xaddr:iPTR:$src)
/*1954*/        0, /*End of Scope*/
/*1955*/      0, /*End of Scope*/
/*1956*/    /*Scope*/ 21, /*->1978*/
/*1957*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1959*/      OPC_CheckPredicate, 14, // Predicate_sextloadi32
/*1961*/      OPC_CheckPredicate, 19, // Predicate_unaligned4sextloadi32
/*1963*/      OPC_CheckType, MVT::i64,
/*1965*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*1968*/      OPC_EmitMergeInputChains1_0,
/*1969*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWAX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i64 xoaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>><<P:Predicate_unaligned4sextloadi32>> - Complexity = 13
              // Dst: (LWAX:i64 xoaddr:iPTR:$src)
/*1978*/    /*Scope*/ 85, /*->2064*/
/*1979*/      OPC_CheckPredicate, 8, // Predicate_load
/*1981*/      OPC_SwitchType /*3 cases */, 15,  MVT::i64,// ->1999
/*1984*/        OPC_CheckPredicate, 20, // Predicate_unaligned4load
/*1986*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*1989*/        OPC_EmitMergeInputChains1_0,
/*1990*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xoaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_unaligned4load>> - Complexity = 13
                // Dst: (LDX:i64 xoaddr:iPTR:$src)
              /*SwitchType*/ 30,  MVT::f32,// ->2031
/*2001*/        OPC_Scope, 13, /*->2016*/ // 2 children in Scope
/*2003*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*2006*/          OPC_EmitMergeInputChains1_0,
/*2007*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFS), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFS:f32 iaddr:iPTR:$src)
/*2016*/        /*Scope*/ 13, /*->2030*/
/*2017*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*2020*/          OPC_EmitMergeInputChains1_0,
/*2021*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFSX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFSX:f32 xaddr:iPTR:$src)
/*2030*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->2063
/*2033*/        OPC_Scope, 13, /*->2048*/ // 2 children in Scope
/*2035*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*2038*/          OPC_EmitMergeInputChains1_0,
/*2039*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFD), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFD:f64 iaddr:iPTR:$src)
/*2048*/        /*Scope*/ 13, /*->2062*/
/*2049*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*2052*/          OPC_EmitMergeInputChains1_0,
/*2053*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFDX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFDX:f64 xaddr:iPTR:$src)
/*2062*/        0, /*End of Scope*/
              0, // EndSwitchType
/*2064*/    /*Scope*/ 60, /*->2125*/
/*2065*/      OPC_CheckPredicate, 10, // Predicate_extload
/*2067*/      OPC_CheckPredicate, 21, // Predicate_extloadf32
/*2069*/      OPC_CheckType, MVT::f64,
/*2071*/      OPC_Scope, 25, /*->2098*/ // 2 children in Scope
/*2073*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*2076*/        OPC_EmitMergeInputChains1_0,
/*2077*/        OPC_EmitNode, TARGET_VAL(PPC::LFS), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3,  // Results = #4
/*2086*/        OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*2089*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 5, 
                // Src: (ld:f64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:f64 (LFS:f32 iaddr:iPTR:$src), F8RC:i32)
/*2098*/      /*Scope*/ 25, /*->2124*/
/*2099*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*2102*/        OPC_EmitMergeInputChains1_0,
/*2103*/        OPC_EmitNode, TARGET_VAL(PPC::LFSX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3,  // Results = #4
/*2112*/        OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*2115*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 5, 
                // Src: (ld:f64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:f64 (LFSX:f32 xaddr:iPTR:$src), F8RC:i32)
/*2124*/      0, /*End of Scope*/
/*2125*/    /*Scope*/ 19, /*->2145*/
/*2126*/      OPC_CheckPredicate, 8, // Predicate_load
/*2128*/      OPC_CheckType, MVT::v4i32,
/*2130*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*2132*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*2135*/      OPC_EmitMergeInputChains1_0,
/*2136*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:v4i32 xoaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LVX:v4i32 xoaddr:iPTR:$src)
/*2145*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 87|128,5/*727*/,  TARGET_VAL(ISD::STORE),// ->2877
/*2150*/    OPC_RecordMemRef,
/*2151*/    OPC_RecordNode,   // #0 = 'st' chained node
/*2152*/    OPC_RecordChild1, // #1 = $rS
/*2153*/    OPC_Scope, 103|128,1/*231*/, /*->2387*/ // 5 children in Scope
/*2156*/      OPC_CheckChild1Type, MVT::i32,
/*2158*/      OPC_RecordChild2, // #2 = $src
/*2159*/      OPC_Scope, 110, /*->2271*/ // 2 children in Scope
/*2161*/        OPC_CheckPredicate, 22, // Predicate_unindexedstore
/*2163*/        OPC_Scope, 36, /*->2201*/ // 4 children in Scope
/*2165*/          OPC_CheckPredicate, 23, // Predicate_truncstore
/*2167*/          OPC_Scope, 15, /*->2184*/ // 2 children in Scope
/*2169*/            OPC_CheckPredicate, 24, // Predicate_truncstorei8
/*2171*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2174*/            OPC_EmitMergeInputChains1_0,
/*2175*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STB), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB i32:i32:$rS, iaddr:iPTR:$src)
/*2184*/          /*Scope*/ 15, /*->2200*/
/*2185*/            OPC_CheckPredicate, 25, // Predicate_truncstorei16
/*2187*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2190*/            OPC_EmitMergeInputChains1_0,
/*2191*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STH), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH i32:i32:$rS, iaddr:iPTR:$src)
/*2200*/          0, /*End of Scope*/
/*2201*/        /*Scope*/ 15, /*->2217*/
/*2202*/          OPC_CheckPredicate, 26, // Predicate_store
/*2204*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2207*/          OPC_EmitMergeInputChains1_0,
/*2208*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STW), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st i32:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STW i32:i32:$rS, iaddr:iPTR:$src)
/*2217*/        /*Scope*/ 36, /*->2254*/
/*2218*/          OPC_CheckPredicate, 23, // Predicate_truncstore
/*2220*/          OPC_Scope, 15, /*->2237*/ // 2 children in Scope
/*2222*/            OPC_CheckPredicate, 24, // Predicate_truncstorei8
/*2224*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2227*/            OPC_EmitMergeInputChains1_0,
/*2228*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBX i32:i32:$rS, xaddr:iPTR:$dst)
/*2237*/          /*Scope*/ 15, /*->2253*/
/*2238*/            OPC_CheckPredicate, 25, // Predicate_truncstorei16
/*2240*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2243*/            OPC_EmitMergeInputChains1_0,
/*2244*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHX i32:i32:$rS, xaddr:iPTR:$dst)
/*2253*/          0, /*End of Scope*/
/*2254*/        /*Scope*/ 15, /*->2270*/
/*2255*/          OPC_CheckPredicate, 26, // Predicate_store
/*2257*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2260*/          OPC_EmitMergeInputChains1_0,
/*2261*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st i32:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STWX i32:i32:$rS, xaddr:iPTR:$dst)
/*2270*/        0, /*End of Scope*/
/*2271*/      /*Scope*/ 114, /*->2386*/
/*2272*/        OPC_RecordChild3, // #3 = $ptroff
/*2273*/        OPC_Scope, 40, /*->2315*/ // 4 children in Scope
/*2275*/          OPC_CheckPredicate, 27, // Predicate_itruncstore
/*2277*/          OPC_CheckPredicate, 28, // Predicate_pre_truncst
/*2279*/          OPC_Scope, 16, /*->2297*/ // 2 children in Scope
/*2281*/            OPC_CheckPredicate, 29, // Predicate_pre_truncsti8
/*2283*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2286*/            OPC_EmitMergeInputChains1_0,
/*2287*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBU), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBU:iPTR ?:i32:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2297*/          /*Scope*/ 16, /*->2314*/
/*2298*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti16
/*2300*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2303*/            OPC_EmitMergeInputChains1_0,
/*2304*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHU), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHU:iPTR ?:i32:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2314*/          0, /*End of Scope*/
/*2315*/        /*Scope*/ 18, /*->2334*/
/*2316*/          OPC_CheckPredicate, 31, // Predicate_istore
/*2318*/          OPC_CheckPredicate, 32, // Predicate_pre_store
/*2320*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2323*/          OPC_EmitMergeInputChains1_0,
/*2324*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STWU:iPTR ?:i32:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2334*/        /*Scope*/ 34, /*->2369*/
/*2335*/          OPC_CheckPredicate, 27, // Predicate_itruncstore
/*2337*/          OPC_CheckPredicate, 28, // Predicate_pre_truncst
/*2339*/          OPC_Scope, 13, /*->2354*/ // 2 children in Scope
/*2341*/            OPC_CheckPredicate, 29, // Predicate_pre_truncsti8
/*2343*/            OPC_EmitMergeInputChains1_0,
/*2344*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBUX), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 4
                    // Dst: (STBUX:iPTR ?:i32:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2354*/          /*Scope*/ 13, /*->2368*/
/*2355*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti16
/*2357*/            OPC_EmitMergeInputChains1_0,
/*2358*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHUX), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 4
                    // Dst: (STHUX:iPTR ?:i32:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2368*/          0, /*End of Scope*/
/*2369*/        /*Scope*/ 15, /*->2385*/
/*2370*/          OPC_CheckPredicate, 31, // Predicate_istore
/*2372*/          OPC_CheckPredicate, 32, // Predicate_pre_store
/*2374*/          OPC_EmitMergeInputChains1_0,
/*2375*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 4
                  // Dst: (STWUX:iPTR ?:i32:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2385*/        0, /*End of Scope*/
/*2386*/      0, /*End of Scope*/
/*2387*/    /*Scope*/ 75, /*->2463*/
/*2388*/      OPC_CheckChild1Type, MVT::f32,
/*2390*/      OPC_RecordChild2, // #2 = $dst
/*2391*/      OPC_Scope, 34, /*->2427*/ // 2 children in Scope
/*2393*/        OPC_CheckPredicate, 22, // Predicate_unindexedstore
/*2395*/        OPC_CheckPredicate, 26, // Predicate_store
/*2397*/        OPC_Scope, 13, /*->2412*/ // 2 children in Scope
/*2399*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$dst #3 #4
/*2402*/          OPC_EmitMergeInputChains1_0,
/*2403*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFS), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st f32:f32:$rS, iaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFS f32:f32:$rS, iaddr:iPTR:$dst)
/*2412*/        /*Scope*/ 13, /*->2426*/
/*2413*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2416*/          OPC_EmitMergeInputChains1_0,
/*2417*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st f32:f32:$frS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFSX f32:f32:$frS, xaddr:iPTR:$dst)
/*2426*/        0, /*End of Scope*/
/*2427*/      /*Scope*/ 34, /*->2462*/
/*2428*/        OPC_RecordChild3, // #3 = $ptroff
/*2429*/        OPC_CheckPredicate, 31, // Predicate_istore
/*2431*/        OPC_CheckPredicate, 32, // Predicate_pre_store
/*2433*/        OPC_Scope, 14, /*->2449*/ // 2 children in Scope
/*2435*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2438*/          OPC_EmitMergeInputChains1_0,
/*2439*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR f32:f32:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STFSU:iPTR ?:f32:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2449*/        /*Scope*/ 11, /*->2461*/
/*2450*/          OPC_EmitMergeInputChains1_0,
/*2451*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (ist:iPTR f32:f32:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 4
                  // Dst: (STFSUX:iPTR ?:f32:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2461*/        0, /*End of Scope*/
/*2462*/      0, /*End of Scope*/
/*2463*/    /*Scope*/ 75, /*->2539*/
/*2464*/      OPC_CheckChild1Type, MVT::f64,
/*2466*/      OPC_RecordChild2, // #2 = $dst
/*2467*/      OPC_Scope, 34, /*->2503*/ // 2 children in Scope
/*2469*/        OPC_CheckPredicate, 22, // Predicate_unindexedstore
/*2471*/        OPC_CheckPredicate, 26, // Predicate_store
/*2473*/        OPC_Scope, 13, /*->2488*/ // 2 children in Scope
/*2475*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$dst #3 #4
/*2478*/          OPC_EmitMergeInputChains1_0,
/*2479*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFD), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st f64:f64:$rS, iaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFD f64:f64:$rS, iaddr:iPTR:$dst)
/*2488*/        /*Scope*/ 13, /*->2502*/
/*2489*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2492*/          OPC_EmitMergeInputChains1_0,
/*2493*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st f64:f64:$frS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFDX f64:f64:$frS, xaddr:iPTR:$dst)
/*2502*/        0, /*End of Scope*/
/*2503*/      /*Scope*/ 34, /*->2538*/
/*2504*/        OPC_RecordChild3, // #3 = $ptroff
/*2505*/        OPC_CheckPredicate, 31, // Predicate_istore
/*2507*/        OPC_CheckPredicate, 32, // Predicate_pre_store
/*2509*/        OPC_Scope, 14, /*->2525*/ // 2 children in Scope
/*2511*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2514*/          OPC_EmitMergeInputChains1_0,
/*2515*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR f64:f64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STFDU:iPTR ?:f64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2525*/        /*Scope*/ 11, /*->2537*/
/*2526*/          OPC_EmitMergeInputChains1_0,
/*2527*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (ist:iPTR f64:f64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 4
                  // Dst: (STFDUX:iPTR ?:f64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2537*/        0, /*End of Scope*/
/*2538*/      0, /*End of Scope*/
/*2539*/    /*Scope*/ 22, /*->2562*/
/*2540*/      OPC_CheckChild1Type, MVT::v4i32,
/*2542*/      OPC_RecordChild2, // #2 = $dst
/*2543*/      OPC_CheckPredicate, 22, // Predicate_unindexedstore
/*2545*/      OPC_CheckPredicate, 26, // Predicate_store
/*2547*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*2549*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*2552*/      OPC_EmitMergeInputChains1_0,
/*2553*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STVX), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (st v4i32:v4i32:$rS, xoaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
              // Dst: (STVX ?:v4i32:$rS, xoaddr:iPTR:$dst)
/*2562*/    /*Scope*/ 56|128,2/*312*/, /*->2876*/
/*2564*/      OPC_CheckChild1Type, MVT::i64,
/*2566*/      OPC_RecordChild2, // #2 = $src
/*2567*/      OPC_Scope, 28|128,1/*156*/, /*->2726*/ // 2 children in Scope
/*2570*/        OPC_CheckPredicate, 22, // Predicate_unindexedstore
/*2572*/        OPC_Scope, 100, /*->2674*/ // 2 children in Scope
/*2574*/          OPC_CheckPredicate, 23, // Predicate_truncstore
/*2576*/          OPC_Scope, 15, /*->2593*/ // 6 children in Scope
/*2578*/            OPC_CheckPredicate, 24, // Predicate_truncstorei8
/*2580*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2583*/            OPC_EmitMergeInputChains1_0,
/*2584*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STB8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB8 i64:i64:$rS, iaddr:iPTR:$src)
/*2593*/          /*Scope*/ 15, /*->2609*/
/*2594*/            OPC_CheckPredicate, 25, // Predicate_truncstorei16
/*2596*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2599*/            OPC_EmitMergeInputChains1_0,
/*2600*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STH8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH8 i64:i64:$rS, iaddr:iPTR:$src)
/*2609*/          /*Scope*/ 15, /*->2625*/
/*2610*/            OPC_CheckPredicate, 33, // Predicate_truncstorei32
/*2612*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2615*/            OPC_EmitMergeInputChains1_0,
/*2616*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STW8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STW8 i64:i64:$rS, iaddr:iPTR:$src)
/*2625*/          /*Scope*/ 15, /*->2641*/
/*2626*/            OPC_CheckPredicate, 24, // Predicate_truncstorei8
/*2628*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2631*/            OPC_EmitMergeInputChains1_0,
/*2632*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBX8 i64:i64:$rS, xaddr:iPTR:$dst)
/*2641*/          /*Scope*/ 15, /*->2657*/
/*2642*/            OPC_CheckPredicate, 25, // Predicate_truncstorei16
/*2644*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2647*/            OPC_EmitMergeInputChains1_0,
/*2648*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHX8 i64:i64:$rS, xaddr:iPTR:$dst)
/*2657*/          /*Scope*/ 15, /*->2673*/
/*2658*/            OPC_CheckPredicate, 33, // Predicate_truncstorei32
/*2660*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2663*/            OPC_EmitMergeInputChains1_0,
/*2664*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STWX8 i64:i64:$rS, xaddr:iPTR:$dst)
/*2673*/          0, /*End of Scope*/
/*2674*/        /*Scope*/ 50, /*->2725*/
/*2675*/          OPC_CheckPredicate, 26, // Predicate_store
/*2677*/          OPC_Scope, 15, /*->2694*/ // 3 children in Scope
/*2679*/            OPC_CheckPredicate, 34, // Predicate_aligned4store
/*2681*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectAddrImmShift:$dst #3 #4
/*2684*/            OPC_EmitMergeInputChains1_0,
/*2685*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STD), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, ixaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_aligned4store>> - Complexity = 13
                    // Dst: (STD i64:i64:$rS, ixaddr:iPTR:$dst)
/*2694*/          /*Scope*/ 13, /*->2708*/
/*2695*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2698*/            OPC_EmitMergeInputChains1_0,
/*2699*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STDX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDX i64:i64:$rS, xaddr:iPTR:$dst)
/*2708*/          /*Scope*/ 15, /*->2724*/
/*2709*/            OPC_CheckPredicate, 35, // Predicate_unaligned4store
/*2711*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*2714*/            OPC_EmitMergeInputChains1_0,
/*2715*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STDX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xoaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_unaligned4store>> - Complexity = 13
                    // Dst: (STDX ?:i64:$rS, xoaddr:iPTR:$dst)
/*2724*/          0, /*End of Scope*/
/*2725*/        0, /*End of Scope*/
/*2726*/      /*Scope*/ 19|128,1/*147*/, /*->2875*/
/*2728*/        OPC_RecordChild3, // #3 = $ptroff
/*2729*/        OPC_Scope, 57, /*->2788*/ // 4 children in Scope
/*2731*/          OPC_CheckPredicate, 27, // Predicate_itruncstore
/*2733*/          OPC_CheckPredicate, 28, // Predicate_pre_truncst
/*2735*/          OPC_Scope, 16, /*->2753*/ // 3 children in Scope
/*2737*/            OPC_CheckPredicate, 29, // Predicate_pre_truncsti8
/*2739*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2742*/            OPC_EmitMergeInputChains1_0,
/*2743*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBU8:iPTR ?:i64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2753*/          /*Scope*/ 16, /*->2770*/
/*2754*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti16
/*2756*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2759*/            OPC_EmitMergeInputChains1_0,
/*2760*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHU8:iPTR ?:i64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2770*/          /*Scope*/ 16, /*->2787*/
/*2771*/            OPC_CheckPredicate, 36, // Predicate_pre_truncsti32
/*2773*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2776*/            OPC_EmitMergeInputChains1_0,
/*2777*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti32>> - Complexity = 10
                    // Dst: (STWU8:iPTR ?:i64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2787*/          0, /*End of Scope*/
/*2788*/        /*Scope*/ 20, /*->2809*/
/*2789*/          OPC_CheckPredicate, 31, // Predicate_istore
/*2791*/          OPC_CheckPredicate, 32, // Predicate_pre_store
/*2793*/          OPC_CheckPredicate, 37, // Predicate_aligned4pre_store
/*2795*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2798*/          OPC_EmitMergeInputChains1_0,
/*2799*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STDU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>><<P:Predicate_aligned4pre_store>> - Complexity = 10
                  // Dst: (STDU:iPTR ?:i64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2809*/        /*Scope*/ 48, /*->2858*/
/*2810*/          OPC_CheckPredicate, 27, // Predicate_itruncstore
/*2812*/          OPC_CheckPredicate, 28, // Predicate_pre_truncst
/*2814*/          OPC_Scope, 13, /*->2829*/ // 3 children in Scope
/*2816*/            OPC_CheckPredicate, 29, // Predicate_pre_truncsti8
/*2818*/            OPC_EmitMergeInputChains1_0,
/*2819*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 4
                    // Dst: (STBUX8:iPTR ?:i64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2829*/          /*Scope*/ 13, /*->2843*/
/*2830*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti16
/*2832*/            OPC_EmitMergeInputChains1_0,
/*2833*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 4
                    // Dst: (STHUX8:iPTR ?:i64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2843*/          /*Scope*/ 13, /*->2857*/
/*2844*/            OPC_CheckPredicate, 36, // Predicate_pre_truncsti32
/*2846*/            OPC_EmitMergeInputChains1_0,
/*2847*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti32>> - Complexity = 4
                    // Dst: (STWUX8:iPTR ?:i64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2857*/          0, /*End of Scope*/
/*2858*/        /*Scope*/ 15, /*->2874*/
/*2859*/          OPC_CheckPredicate, 31, // Predicate_istore
/*2861*/          OPC_CheckPredicate, 32, // Predicate_pre_store
/*2863*/          OPC_EmitMergeInputChains1_0,
/*2864*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STDUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 4
                  // Dst: (STDUX:iPTR ?:i64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2874*/        0, /*End of Scope*/
/*2875*/      0, /*End of Scope*/
/*2876*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->2963
/*2880*/    OPC_RecordMemRef,
/*2881*/    OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*2882*/    OPC_RecordChild1, // #1 = $ptr
/*2883*/    OPC_RecordChild2, // #2 = $incr
/*2884*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->2943
/*2887*/      OPC_Scope, 17, /*->2906*/ // 3 children in Scope
/*2889*/        OPC_CheckPredicate, 38, // Predicate_atomic_load_add_8
/*2891*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2894*/        OPC_EmitMergeInputChains1_0,
/*2895*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*2906*/      /*Scope*/ 17, /*->2924*/
/*2907*/        OPC_CheckPredicate, 39, // Predicate_atomic_load_add_16
/*2909*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2912*/        OPC_EmitMergeInputChains1_0,
/*2913*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*2924*/      /*Scope*/ 17, /*->2942*/
/*2925*/        OPC_CheckPredicate, 40, // Predicate_atomic_load_add_32
/*2927*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2930*/        OPC_EmitMergeInputChains1_0,
/*2931*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*2942*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->2962
/*2945*/      OPC_CheckPredicate, 41, // Predicate_atomic_load_add_64
/*2947*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2950*/      OPC_EmitMergeInputChains1_0,
/*2951*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_add:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_ADD_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->3049
/*2966*/    OPC_RecordMemRef,
/*2967*/    OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*2968*/    OPC_RecordChild1, // #1 = $ptr
/*2969*/    OPC_RecordChild2, // #2 = $incr
/*2970*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3029
/*2973*/      OPC_Scope, 17, /*->2992*/ // 3 children in Scope
/*2975*/        OPC_CheckPredicate, 42, // Predicate_atomic_load_sub_8
/*2977*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2980*/        OPC_EmitMergeInputChains1_0,
/*2981*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*2992*/      /*Scope*/ 17, /*->3010*/
/*2993*/        OPC_CheckPredicate, 43, // Predicate_atomic_load_sub_16
/*2995*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2998*/        OPC_EmitMergeInputChains1_0,
/*2999*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3010*/      /*Scope*/ 17, /*->3028*/
/*3011*/        OPC_CheckPredicate, 44, // Predicate_atomic_load_sub_32
/*3013*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3016*/        OPC_EmitMergeInputChains1_0,
/*3017*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3028*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3048
/*3031*/      OPC_CheckPredicate, 45, // Predicate_atomic_load_sub_64
/*3033*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3036*/      OPC_EmitMergeInputChains1_0,
/*3037*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_sub:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_SUB_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->3135
/*3052*/    OPC_RecordMemRef,
/*3053*/    OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*3054*/    OPC_RecordChild1, // #1 = $ptr
/*3055*/    OPC_RecordChild2, // #2 = $incr
/*3056*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3115
/*3059*/      OPC_Scope, 17, /*->3078*/ // 3 children in Scope
/*3061*/        OPC_CheckPredicate, 46, // Predicate_atomic_load_and_8
/*3063*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3066*/        OPC_EmitMergeInputChains1_0,
/*3067*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3078*/      /*Scope*/ 17, /*->3096*/
/*3079*/        OPC_CheckPredicate, 47, // Predicate_atomic_load_and_16
/*3081*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3084*/        OPC_EmitMergeInputChains1_0,
/*3085*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3096*/      /*Scope*/ 17, /*->3114*/
/*3097*/        OPC_CheckPredicate, 48, // Predicate_atomic_load_and_32
/*3099*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3102*/        OPC_EmitMergeInputChains1_0,
/*3103*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3114*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3134
/*3117*/      OPC_CheckPredicate, 49, // Predicate_atomic_load_and_64
/*3119*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3122*/      OPC_EmitMergeInputChains1_0,
/*3123*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_and:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_AND_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->3221
/*3138*/    OPC_RecordMemRef,
/*3139*/    OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*3140*/    OPC_RecordChild1, // #1 = $ptr
/*3141*/    OPC_RecordChild2, // #2 = $incr
/*3142*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3201
/*3145*/      OPC_Scope, 17, /*->3164*/ // 3 children in Scope
/*3147*/        OPC_CheckPredicate, 50, // Predicate_atomic_load_or_8
/*3149*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3152*/        OPC_EmitMergeInputChains1_0,
/*3153*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3164*/      /*Scope*/ 17, /*->3182*/
/*3165*/        OPC_CheckPredicate, 51, // Predicate_atomic_load_or_16
/*3167*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3170*/        OPC_EmitMergeInputChains1_0,
/*3171*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3182*/      /*Scope*/ 17, /*->3200*/
/*3183*/        OPC_CheckPredicate, 52, // Predicate_atomic_load_or_32
/*3185*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3188*/        OPC_EmitMergeInputChains1_0,
/*3189*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3200*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3220
/*3203*/      OPC_CheckPredicate, 53, // Predicate_atomic_load_or_64
/*3205*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3208*/      OPC_EmitMergeInputChains1_0,
/*3209*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_or:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_OR_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->3307
/*3224*/    OPC_RecordMemRef,
/*3225*/    OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*3226*/    OPC_RecordChild1, // #1 = $ptr
/*3227*/    OPC_RecordChild2, // #2 = $incr
/*3228*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3287
/*3231*/      OPC_Scope, 17, /*->3250*/ // 3 children in Scope
/*3233*/        OPC_CheckPredicate, 54, // Predicate_atomic_load_xor_8
/*3235*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3238*/        OPC_EmitMergeInputChains1_0,
/*3239*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3250*/      /*Scope*/ 17, /*->3268*/
/*3251*/        OPC_CheckPredicate, 55, // Predicate_atomic_load_xor_16
/*3253*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3256*/        OPC_EmitMergeInputChains1_0,
/*3257*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3268*/      /*Scope*/ 17, /*->3286*/
/*3269*/        OPC_CheckPredicate, 56, // Predicate_atomic_load_xor_32
/*3271*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3274*/        OPC_EmitMergeInputChains1_0,
/*3275*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3286*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3306
/*3289*/      OPC_CheckPredicate, 57, // Predicate_atomic_load_xor_64
/*3291*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3294*/      OPC_EmitMergeInputChains1_0,
/*3295*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_xor:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_XOR_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->3393
/*3310*/    OPC_RecordMemRef,
/*3311*/    OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*3312*/    OPC_RecordChild1, // #1 = $ptr
/*3313*/    OPC_RecordChild2, // #2 = $incr
/*3314*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3373
/*3317*/      OPC_Scope, 17, /*->3336*/ // 3 children in Scope
/*3319*/        OPC_CheckPredicate, 58, // Predicate_atomic_load_nand_8
/*3321*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3324*/        OPC_EmitMergeInputChains1_0,
/*3325*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3336*/      /*Scope*/ 17, /*->3354*/
/*3337*/        OPC_CheckPredicate, 59, // Predicate_atomic_load_nand_16
/*3339*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3342*/        OPC_EmitMergeInputChains1_0,
/*3343*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3354*/      /*Scope*/ 17, /*->3372*/
/*3355*/        OPC_CheckPredicate, 60, // Predicate_atomic_load_nand_32
/*3357*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3360*/        OPC_EmitMergeInputChains1_0,
/*3361*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3372*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3392
/*3375*/      OPC_CheckPredicate, 61, // Predicate_atomic_load_nand_64
/*3377*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3380*/      OPC_EmitMergeInputChains1_0,
/*3381*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_nand:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NAND_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 88,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->3484
/*3396*/    OPC_RecordMemRef,
/*3397*/    OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*3398*/    OPC_RecordChild1, // #1 = $ptr
/*3399*/    OPC_RecordChild2, // #2 = $old
/*3400*/    OPC_RecordChild3, // #3 = $new
/*3401*/    OPC_SwitchType /*2 cases */, 59,  MVT::i32,// ->3463
/*3404*/      OPC_Scope, 18, /*->3424*/ // 3 children in Scope
/*3406*/        OPC_CheckPredicate, 62, // Predicate_atomic_cmp_swap_8
/*3408*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3411*/        OPC_EmitMergeInputChains1_0,
/*3412*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)
/*3424*/      /*Scope*/ 18, /*->3443*/
/*3425*/        OPC_CheckPredicate, 63, // Predicate_atomic_cmp_swap_16
/*3427*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3430*/        OPC_EmitMergeInputChains1_0,
/*3431*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)
/*3443*/      /*Scope*/ 18, /*->3462*/
/*3444*/        OPC_CheckPredicate, 64, // Predicate_atomic_cmp_swap_32
/*3446*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3449*/        OPC_EmitMergeInputChains1_0,
/*3450*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)
/*3462*/      0, /*End of Scope*/
            /*SwitchType*/ 18,  MVT::i64,// ->3483
/*3465*/      OPC_CheckPredicate, 65, // Predicate_atomic_cmp_swap_64
/*3467*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3470*/      OPC_EmitMergeInputChains1_0,
/*3471*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
              // Src: (atomic_cmp_swap:i64 xoaddr:iPTR:$ptr, i64:i64:$old, i64:i64:$new)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_CMP_SWAP_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$old, i64:i64:$new)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->3570
/*3487*/    OPC_RecordMemRef,
/*3488*/    OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*3489*/    OPC_RecordChild1, // #1 = $ptr
/*3490*/    OPC_RecordChild2, // #2 = $new
/*3491*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3550
/*3494*/      OPC_Scope, 17, /*->3513*/ // 3 children in Scope
/*3496*/        OPC_CheckPredicate, 66, // Predicate_atomic_swap_8
/*3498*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3501*/        OPC_EmitMergeInputChains1_0,
/*3502*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$new)<<P:Predicate_atomic_swap_8>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$new)
/*3513*/      /*Scope*/ 17, /*->3531*/
/*3514*/        OPC_CheckPredicate, 67, // Predicate_atomic_swap_16
/*3516*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3519*/        OPC_EmitMergeInputChains1_0,
/*3520*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$new)<<P:Predicate_atomic_swap_16>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$new)
/*3531*/      /*Scope*/ 17, /*->3549*/
/*3532*/        OPC_CheckPredicate, 68, // Predicate_atomic_swap_32
/*3534*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3537*/        OPC_EmitMergeInputChains1_0,
/*3538*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$new)<<P:Predicate_atomic_swap_32>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$new)
/*3549*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3569
/*3552*/      OPC_CheckPredicate, 69, // Predicate_atomic_swap_64
/*3554*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3557*/      OPC_EmitMergeInputChains1_0,
/*3558*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_swap:i64 xoaddr:iPTR:$ptr, i64:i64:$new)<<P:Predicate_atomic_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_SWAP_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$new)
            0, // EndSwitchType
          /*SwitchOpcode*/ 48,  TARGET_VAL(PPCISD::DYNALLOC),// ->3621
/*3573*/    OPC_RecordNode,   // #0 = 'PPCdynalloc' chained node
/*3574*/    OPC_RecordChild1, // #1 = $negsize
/*3575*/    OPC_SwitchType /*2 cases */, 20,  MVT::i32,// ->3598
/*3578*/      OPC_CheckChild1Type, MVT::i32,
/*3580*/      OPC_RecordChild2, // #2 = $fpsi
/*3581*/      OPC_CheckChild2Type, MVT::iPTR,
/*3583*/      OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$fpsi #3 #4
/*3586*/      OPC_EmitMergeInputChains1_0,
/*3587*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DYNALLOC), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCdynalloc:i32 i32:i32:$negsize, iaddr:iPTR:$fpsi) - Complexity = 12
              // Dst: (DYNALLOC:i32:i32 i32:i32:$negsize, iaddr:iPTR:$fpsi)
            /*SwitchType*/ 20,  MVT::i64,// ->3620
/*3600*/      OPC_CheckChild1Type, MVT::i64,
/*3602*/      OPC_RecordChild2, // #2 = $fpsi
/*3603*/      OPC_CheckChild2Type, MVT::iPTR,
/*3605*/      OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$fpsi #3 #4
/*3608*/      OPC_EmitMergeInputChains1_0,
/*3609*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DYNALLOC8), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i64, MVT::i64, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCdynalloc:i64 i64:i64:$negsize, iaddr:iPTR:$fpsi) - Complexity = 12
              // Dst: (DYNALLOC8:i64:i64 i64:i64:$negsize, iaddr:iPTR:$fpsi)
            0, // EndSwitchType
          /*SwitchOpcode*/ 34,  TARGET_VAL(PPCISD::LARX),// ->3658
/*3624*/    OPC_RecordNode,   // #0 = 'PPClarx' chained node
/*3625*/    OPC_RecordChild1, // #1 = $src
/*3626*/    OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->3642
/*3629*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3632*/      OPC_EmitMergeInputChains1_0,
/*3633*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWARX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClarx:i32 xoaddr:iPTR:$src) - Complexity = 12
              // Dst: (LWARX:i32 xoaddr:iPTR:$src)
            /*SwitchType*/ 13,  MVT::i64,// ->3657
/*3644*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #2 #3
/*3647*/      OPC_EmitMergeInputChains1_0,
/*3648*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDARX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPClarx:i64 xoaddr:iPTR:$ptr) - Complexity = 12
              // Dst: (LDARX:i64 xoaddr:iPTR:$ptr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 40,  TARGET_VAL(PPCISD::STCX),// ->3701
/*3661*/    OPC_RecordNode,   // #0 = 'PPCstcx' chained node
/*3662*/    OPC_RecordChild1, // #1 = $rS
/*3663*/    OPC_Scope, 17, /*->3682*/ // 2 children in Scope
/*3665*/      OPC_CheckChild1Type, MVT::i32,
/*3667*/      OPC_RecordChild2, // #2 = $dst
/*3668*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3671*/      OPC_EmitMergeInputChains1_0,
/*3672*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STWCX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstcx i32:i32:$rS, xoaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STWCX:i32 i32:i32:$rS, xoaddr:iPTR:$dst)
/*3682*/    /*Scope*/ 17, /*->3700*/
/*3683*/      OPC_CheckChild1Type, MVT::i64,
/*3685*/      OPC_RecordChild2, // #2 = $dst
/*3686*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3689*/      OPC_EmitMergeInputChains1_0,
/*3690*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STDCX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstcx i64:i64:$rS, xoaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STDCX:i32 i64:i64:$rS, xoaddr:iPTR:$dst)
/*3700*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 63,  TARGET_VAL(PPCISD::LBRX),// ->3767
/*3704*/    OPC_RecordNode,   // #0 = 'PPClbrx' chained node
/*3705*/    OPC_RecordChild1, // #1 = $src
/*3706*/    OPC_MoveChild, 2,
/*3708*/    OPC_Scope, 18, /*->3728*/ // 3 children in Scope
/*3710*/      OPC_CheckValueType, MVT::i16,
/*3712*/      OPC_MoveParent,
/*3713*/      OPC_CheckType, MVT::i32,
/*3715*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3718*/      OPC_EmitMergeInputChains1_0,
/*3719*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i32 xoaddr:iPTR:$src, i16:Other) - Complexity = 12
              // Dst: (LHBRX:i32 xoaddr:iPTR:$src)
/*3728*/    /*Scope*/ 18, /*->3747*/
/*3729*/      OPC_CheckValueType, MVT::i32,
/*3731*/      OPC_MoveParent,
/*3732*/      OPC_CheckType, MVT::i32,
/*3734*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3737*/      OPC_EmitMergeInputChains1_0,
/*3738*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i32 xoaddr:iPTR:$src, i32:Other) - Complexity = 12
              // Dst: (LWBRX:i32 xoaddr:iPTR:$src)
/*3747*/    /*Scope*/ 18, /*->3766*/
/*3748*/      OPC_CheckValueType, MVT::i64,
/*3750*/      OPC_MoveParent,
/*3751*/      OPC_CheckType, MVT::i64,
/*3753*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3756*/      OPC_EmitMergeInputChains1_0,
/*3757*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i64 xoaddr:iPTR:$src, i64:Other) - Complexity = 12
              // Dst: (LDBRX:i64 xoaddr:iPTR:$src)
/*3766*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 68,  TARGET_VAL(PPCISD::STBRX),// ->3838
/*3770*/    OPC_RecordNode,   // #0 = 'PPCstbrx' chained node
/*3771*/    OPC_RecordChild1, // #1 = $rS
/*3772*/    OPC_Scope, 41, /*->3815*/ // 2 children in Scope
/*3774*/      OPC_CheckChild1Type, MVT::i32,
/*3776*/      OPC_RecordChild2, // #2 = $dst
/*3777*/      OPC_MoveChild, 3,
/*3779*/      OPC_Scope, 16, /*->3797*/ // 2 children in Scope
/*3781*/        OPC_CheckValueType, MVT::i16,
/*3783*/        OPC_MoveParent,
/*3784*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3787*/        OPC_EmitMergeInputChains1_0,
/*3788*/        OPC_MorphNodeTo, TARGET_VAL(PPC::STHBRX), 0|OPFL_Chain,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (PPCstbrx i32:i32:$rS, xoaddr:iPTR:$dst, i16:Other) - Complexity = 12
                // Dst: (STHBRX i32:i32:$rS, xoaddr:iPTR:$dst)
/*3797*/      /*Scope*/ 16, /*->3814*/
/*3798*/        OPC_CheckValueType, MVT::i32,
/*3800*/        OPC_MoveParent,
/*3801*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3804*/        OPC_EmitMergeInputChains1_0,
/*3805*/        OPC_MorphNodeTo, TARGET_VAL(PPC::STWBRX), 0|OPFL_Chain,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (PPCstbrx i32:i32:$rS, xoaddr:iPTR:$dst, i32:Other) - Complexity = 12
                // Dst: (STWBRX i32:i32:$rS, xoaddr:iPTR:$dst)
/*3814*/      0, /*End of Scope*/
/*3815*/    /*Scope*/ 21, /*->3837*/
/*3816*/      OPC_CheckChild1Type, MVT::i64,
/*3818*/      OPC_RecordChild2, // #2 = $dst
/*3819*/      OPC_MoveChild, 3,
/*3821*/      OPC_CheckValueType, MVT::i64,
/*3823*/      OPC_MoveParent,
/*3824*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3827*/      OPC_EmitMergeInputChains1_0,
/*3828*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STDBRX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstbrx i64:i64:$rS, xoaddr:iPTR:$dst, i64:Other) - Complexity = 12
              // Dst: (STDBRX i64:i64:$rS, xoaddr:iPTR:$dst)
/*3837*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(PPCISD::STFIWX),// ->3857
/*3841*/    OPC_RecordNode,   // #0 = 'PPCstfiwx' chained node
/*3842*/    OPC_RecordChild1, // #1 = $frS
/*3843*/    OPC_RecordChild2, // #2 = $dst
/*3844*/    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3847*/    OPC_EmitMergeInputChains1_0,
/*3848*/    OPC_MorphNodeTo, TARGET_VAL(PPC::STFIWX), 0|OPFL_Chain,
                0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
            // Src: (PPCstfiwx f64:f64:$frS, xoaddr:iPTR:$dst) - Complexity = 12
            // Dst: (STFIWX f64:f64:$frS, xoaddr:iPTR:$dst)
          /*SwitchOpcode*/ 37,  TARGET_VAL(PPCISD::LOAD),// ->3897
/*3860*/    OPC_RecordNode,   // #0 = 'PPCload' chained node
/*3861*/    OPC_CaptureGlueInput,
/*3862*/    OPC_RecordChild1, // #1 = $src
/*3863*/    OPC_CheckChild1Type, MVT::iPTR,
/*3865*/    OPC_CheckType, MVT::i64,
/*3867*/    OPC_Scope, 13, /*->3882*/ // 2 children in Scope
/*3869*/      OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*3872*/      OPC_EmitMergeInputChains1_0,
/*3873*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LD), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPCload:i64 ixaddr:iPTR:$src) - Complexity = 12
              // Dst: (LD:i64 ixaddr:iPTR:$src)
/*3882*/    /*Scope*/ 13, /*->3896*/
/*3883*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*3886*/      OPC_EmitMergeInputChains1_0,
/*3887*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPCload:i64 xaddr:iPTR:$src) - Complexity = 12
              // Dst: (LDX:i64 xaddr:iPTR:$src)
/*3896*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 94|128,4/*606*/,  TARGET_VAL(ISD::XOR),// ->4507
/*3901*/    OPC_Scope, 39|128,1/*167*/, /*->4071*/ // 8 children in Scope
/*3904*/      OPC_MoveChild, 0,
/*3906*/      OPC_SwitchOpcode /*3 cases */, 41,  TARGET_VAL(ISD::AND),// ->3951
/*3910*/        OPC_RecordChild0, // #0 = $rS
/*3911*/        OPC_RecordChild1, // #1 = $rB
/*3912*/        OPC_MoveParent,
/*3913*/        OPC_MoveChild, 1,
/*3915*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3926*/        OPC_MoveParent,
/*3927*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3939
/*3930*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NAND), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (and:i32 i32:i32:$rS, i32:i32:$rB), -1:i32) - Complexity = 11
                  // Dst: (NAND:i32 i32:i32:$rS, i32:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->3950
/*3941*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NAND8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 (and:i64 i64:i64:$rS, i64:i64:$rB), -1:i64) - Complexity = 11
                  // Dst: (NAND8:i64 i64:i64:$rS, i64:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::OR),// ->3995
/*3954*/        OPC_RecordChild0, // #0 = $rS
/*3955*/        OPC_RecordChild1, // #1 = $rB
/*3956*/        OPC_MoveParent,
/*3957*/        OPC_MoveChild, 1,
/*3959*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3970*/        OPC_MoveParent,
/*3971*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3983
/*3974*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (or:i32 i32:i32:$rS, i32:i32:$rB), -1:i32) - Complexity = 11
                  // Dst: (NOR:i32 i32:i32:$rS, i32:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->3994
/*3985*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 (or:i64 i64:i64:$rS, i64:i64:$rB), -1:i64) - Complexity = 11
                  // Dst: (NOR8:i64 i64:i64:$rS, i64:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 72,  TARGET_VAL(ISD::XOR),// ->4070
/*3998*/        OPC_RecordChild0, // #0 = $rS
/*3999*/        OPC_Scope, 40, /*->4041*/ // 2 children in Scope
/*4001*/          OPC_RecordChild1, // #1 = $rB
/*4002*/          OPC_MoveParent,
/*4003*/          OPC_MoveChild, 1,
/*4005*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4016*/          OPC_MoveParent,
/*4017*/          OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4029
/*4020*/            OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 (xor:i32 i32:i32:$rS, i32:i32:$rB), -1:i32) - Complexity = 11
                    // Dst: (EQV:i32 i32:i32:$rS, i32:i32:$rB)
                  /*SwitchType*/ 9,  MVT::i64,// ->4040
/*4031*/            OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i64 (xor:i64 i64:i64:$rS, i64:i64:$rB), -1:i64) - Complexity = 11
                    // Dst: (EQV8:i64 i64:i64:$rS, i64:i64:$rB)
                  0, // EndSwitchType
/*4041*/        /*Scope*/ 27, /*->4069*/
/*4042*/          OPC_MoveChild, 1,
/*4044*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4055*/          OPC_MoveParent,
/*4056*/          OPC_MoveParent,
/*4057*/          OPC_RecordChild1, // #1 = $rB
/*4058*/          OPC_CheckType, MVT::i32,
/*4060*/          OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (xor:i32 i32:i32:$rS, -1:i32), i32:i32:$rB) - Complexity = 11
                  // Dst: (EQV:i32 i32:i32:$rS, i32:i32:$rB)
/*4069*/        0, /*End of Scope*/
              0, // EndSwitchOpcode
/*4071*/    /*Scope*/ 33, /*->4105*/
/*4072*/      OPC_RecordChild0, // #0 = $rB
/*4073*/      OPC_MoveChild, 1,
/*4075*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4078*/      OPC_RecordChild0, // #1 = $rS
/*4079*/      OPC_MoveChild, 1,
/*4081*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4092*/      OPC_MoveParent,
/*4093*/      OPC_MoveParent,
/*4094*/      OPC_CheckType, MVT::i32,
/*4096*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (xor:i32 i32:i32:$rB, (xor:i32 i32:i32:$rS, -1:i32)) - Complexity = 11
              // Dst: (EQV:i32 i32:i32:$rS, i32:i32:$rB)
/*4105*/    /*Scope*/ 33, /*->4139*/
/*4106*/      OPC_MoveChild, 0,
/*4108*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4111*/      OPC_RecordChild0, // #0 = $rS
/*4112*/      OPC_MoveChild, 1,
/*4114*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4125*/      OPC_MoveParent,
/*4126*/      OPC_MoveParent,
/*4127*/      OPC_RecordChild1, // #1 = $rB
/*4128*/      OPC_CheckType, MVT::i64,
/*4130*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i64 (xor:i64 i64:i64:$rS, -1:i64), i64:i64:$rB) - Complexity = 11
              // Dst: (EQV8:i64 i64:i64:$rS, i64:i64:$rB)
/*4139*/    /*Scope*/ 84|128,1/*212*/, /*->4353*/
/*4141*/      OPC_RecordChild0, // #0 = $rB
/*4142*/      OPC_Scope, 59, /*->4203*/ // 2 children in Scope
/*4144*/        OPC_MoveChild, 1,
/*4146*/        OPC_Scope, 30, /*->4178*/ // 2 children in Scope
/*4148*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4151*/          OPC_RecordChild0, // #1 = $rS
/*4152*/          OPC_MoveChild, 1,
/*4154*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4165*/          OPC_MoveParent,
/*4166*/          OPC_MoveParent,
/*4167*/          OPC_CheckType, MVT::i64,
/*4169*/          OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (xor:i64 i64:i64:$rB, (xor:i64 i64:i64:$rS, -1:i64)) - Complexity = 11
                  // Dst: (EQV8:i64 i64:i64:$rS, i64:i64:$rB)
/*4178*/        /*Scope*/ 23, /*->4202*/
/*4179*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4190*/          OPC_MoveParent,
/*4191*/          OPC_CheckType, MVT::i32,
/*4193*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                  // Src: (xor:i32 i32:i32:$in, -1:i32) - Complexity = 8
                  // Dst: (NOR:i32 ?:i32:$in, ?:i32:$in)
/*4202*/        0, /*End of Scope*/
/*4203*/      /*Scope*/ 19|128,1/*147*/, /*->4352*/
/*4205*/        OPC_RecordChild1, // #1 = $src2
/*4206*/        OPC_Scope, 119, /*->4327*/ // 3 children in Scope
/*4208*/          OPC_MoveChild, 1,
/*4210*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4213*/          OPC_Scope, 19, /*->4234*/ // 5 children in Scope
/*4215*/            OPC_CheckPredicate, 70, // Predicate_immZExt16
/*4217*/            OPC_MoveParent,
/*4218*/            OPC_CheckType, MVT::i32,
/*4220*/            OPC_EmitConvertToTarget, 1,
/*4222*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4225*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (XORI:i32 i32:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4234*/          /*Scope*/ 19, /*->4254*/
/*4235*/            OPC_CheckPredicate, 71, // Predicate_imm16ShiftedZExt
/*4237*/            OPC_MoveParent,
/*4238*/            OPC_CheckType, MVT::i32,
/*4240*/            OPC_EmitConvertToTarget, 1,
/*4242*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4245*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (XORIS:i32 i32:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4254*/          /*Scope*/ 19, /*->4274*/
/*4255*/            OPC_CheckPredicate, 70, // Predicate_immZExt16
/*4257*/            OPC_MoveParent,
/*4258*/            OPC_CheckType, MVT::i64,
/*4260*/            OPC_EmitConvertToTarget, 1,
/*4262*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4265*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORI8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (XORI8:i64 i64:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4274*/          /*Scope*/ 19, /*->4294*/
/*4275*/            OPC_CheckPredicate, 71, // Predicate_imm16ShiftedZExt
/*4277*/            OPC_MoveParent,
/*4278*/            OPC_CheckType, MVT::i64,
/*4280*/            OPC_EmitConvertToTarget, 1,
/*4282*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4285*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (XORIS8:i64 i64:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4294*/          /*Scope*/ 31, /*->4326*/
/*4295*/            OPC_MoveParent,
/*4296*/            OPC_CheckType, MVT::i32,
/*4298*/            OPC_EmitConvertToTarget, 1,
/*4300*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4303*/            OPC_EmitNode, TARGET_VAL(PPC::XORI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*4312*/            OPC_EmitConvertToTarget, 1,
/*4314*/            OPC_EmitNodeXForm, 0, 5, // HI16
/*4317*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                    // Src: (xor:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                    // Dst: (XORIS:i32 (XORI:i32 ?:i32:$in, (LO16:i32 (imm:i32):$imm)), (HI16:i32 (imm:i32):$imm))
/*4326*/          0, /*End of Scope*/
/*4327*/        /*Scope*/ 11, /*->4339*/
/*4328*/          OPC_CheckType, MVT::i32,
/*4330*/          OPC_MorphNodeTo, TARGET_VAL(PPC::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                  // Dst: (XOR:i32 i32:i32:$rS, i32:i32:$rB)
/*4339*/        /*Scope*/ 11, /*->4351*/
/*4340*/          OPC_CheckType, MVT::i64,
/*4342*/          OPC_MorphNodeTo, TARGET_VAL(PPC::XOR8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 i64:i64:$rS, i64:i64:$rB) - Complexity = 3
                  // Dst: (XOR8:i64 i64:i64:$rS, i64:i64:$rB)
/*4351*/        0, /*End of Scope*/
/*4352*/      0, /*End of Scope*/
/*4353*/    /*Scope*/ 74, /*->4428*/
/*4354*/      OPC_MoveChild, 0,
/*4356*/      OPC_SwitchOpcode /*2 cases */, 32,  TARGET_VAL(ISD::OR),// ->4392
/*4360*/        OPC_RecordChild0, // #0 = $vA
/*4361*/        OPC_RecordChild1, // #1 = $vB
/*4362*/        OPC_MoveParent,
/*4363*/        OPC_MoveChild, 1,
/*4365*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4368*/        OPC_MoveChild, 0,
/*4370*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4373*/        OPC_CheckPredicate, 72, // Predicate_immAllOnesV
/*4375*/        OPC_CheckType, MVT::v16i8,
/*4377*/        OPC_MoveParent,
/*4378*/        OPC_MoveParent,
/*4379*/        OPC_CheckType, MVT::v4i32,
/*4381*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4383*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:v4i32 (or:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB), (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)) - Complexity = 13
                // Dst: (VNOR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
              /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::BITCAST),// ->4427
/*4395*/        OPC_MoveChild, 0,
/*4397*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4400*/        OPC_CheckPredicate, 72, // Predicate_immAllOnesV
/*4402*/        OPC_CheckType, MVT::v16i8,
/*4404*/        OPC_MoveParent,
/*4405*/        OPC_MoveParent,
/*4406*/        OPC_MoveChild, 1,
/*4408*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4411*/        OPC_RecordChild0, // #0 = $vA
/*4412*/        OPC_RecordChild1, // #1 = $vB
/*4413*/        OPC_MoveParent,
/*4414*/        OPC_CheckType, MVT::v4i32,
/*4416*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4418*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), (or:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)) - Complexity = 13
                // Dst: (VNOR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
              0, // EndSwitchOpcode
/*4428*/    /*Scope*/ 30, /*->4459*/
/*4429*/      OPC_RecordChild0, // #0 = $vA
/*4430*/      OPC_MoveChild, 1,
/*4432*/      OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4435*/      OPC_MoveChild, 0,
/*4437*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4440*/      OPC_CheckPredicate, 72, // Predicate_immAllOnesV
/*4442*/      OPC_CheckType, MVT::v16i8,
/*4444*/      OPC_MoveParent,
/*4445*/      OPC_MoveParent,
/*4446*/      OPC_CheckType, MVT::v4i32,
/*4448*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4450*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 0, 
              // Src: (xor:v4i32 v4i32:v4i32:$vA, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)) - Complexity = 10
              // Dst: (VNOR:v4i32 ?:v4i32:$vA, ?:v4i32:$vA)
/*4459*/    /*Scope*/ 30, /*->4490*/
/*4460*/      OPC_MoveChild, 0,
/*4462*/      OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4465*/      OPC_MoveChild, 0,
/*4467*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4470*/      OPC_CheckPredicate, 72, // Predicate_immAllOnesV
/*4472*/      OPC_CheckType, MVT::v16i8,
/*4474*/      OPC_MoveParent,
/*4475*/      OPC_MoveParent,
/*4476*/      OPC_RecordChild1, // #0 = $vA
/*4477*/      OPC_CheckType, MVT::v4i32,
/*4479*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4481*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 0, 
              // Src: (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), v4i32:v4i32:$vA) - Complexity = 10
              // Dst: (VNOR:v4i32 ?:v4i32:$vA, ?:v4i32:$vA)
/*4490*/    /*Scope*/ 15, /*->4506*/
/*4491*/      OPC_RecordChild0, // #0 = $vA
/*4492*/      OPC_RecordChild1, // #1 = $vB
/*4493*/      OPC_CheckType, MVT::v4i32,
/*4495*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4497*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VXOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (xor:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
              // Dst: (VXOR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4506*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 41|128,3/*425*/,  TARGET_VAL(ISD::AND),// ->4936
/*4511*/    OPC_Scope, 46, /*->4559*/ // 5 children in Scope
/*4513*/      OPC_RecordChild0, // #0 = $rS
/*4514*/      OPC_MoveChild, 1,
/*4516*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4519*/      OPC_RecordChild0, // #1 = $rB
/*4520*/      OPC_MoveChild, 1,
/*4522*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4533*/      OPC_MoveParent,
/*4534*/      OPC_MoveParent,
/*4535*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4547
/*4538*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 i32:i32:$rS, (xor:i32 i32:i32:$rB, -1:i32)) - Complexity = 11
                // Dst: (ANDC:i32 i32:i32:$rS, i32:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4558
/*4549*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 i64:i64:$rS, (xor:i64 i64:i64:$rB, -1:i64)) - Complexity = 11
                // Dst: (ANDC8:i64 i64:i64:$rS, i64:i64:$rB)
              0, // EndSwitchType
/*4559*/    /*Scope*/ 88, /*->4648*/
/*4560*/      OPC_MoveChild, 0,
/*4562*/      OPC_SwitchOpcode /*2 cases */, 41,  TARGET_VAL(ISD::XOR),// ->4607
/*4566*/        OPC_RecordChild0, // #0 = $rB
/*4567*/        OPC_MoveChild, 1,
/*4569*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4580*/        OPC_MoveParent,
/*4581*/        OPC_MoveParent,
/*4582*/        OPC_RecordChild1, // #1 = $rS
/*4583*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4595
/*4586*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i32 (xor:i32 i32:i32:$rB, -1:i32), i32:i32:$rS) - Complexity = 11
                  // Dst: (ANDC:i32 i32:i32:$rS, i32:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->4606
/*4597*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i64 (xor:i64 i64:i64:$rB, -1:i64), i64:i64:$rS) - Complexity = 11
                  // Dst: (ANDC8:i64 i64:i64:$rS, i64:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::ROTL),// ->4647
/*4610*/        OPC_RecordChild0, // #0 = $in
/*4611*/        OPC_RecordChild1, // #1 = $sh
/*4612*/        OPC_CheckChild1Type, MVT::i32,
/*4614*/        OPC_MoveParent,
/*4615*/        OPC_RecordChild1, // #2 = $imm
/*4616*/        OPC_MoveChild, 1,
/*4618*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4621*/        OPC_CheckPredicate, 73, // Predicate_maskimm32
/*4623*/        OPC_MoveParent,
/*4624*/        OPC_CheckType, MVT::i32,
/*4626*/        OPC_EmitConvertToTarget, 2,
/*4628*/        OPC_EmitNodeXForm, 3, 3, // MB
/*4631*/        OPC_EmitConvertToTarget, 2,
/*4633*/        OPC_EmitNodeXForm, 4, 5, // ME
/*4636*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWNM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 4, 6, 
                // Src: (and:i32 (rotl:i32 i32:i32:$in, i32:i32:$sh), (imm:i32)<<P:Predicate_maskimm32>>:$imm) - Complexity = 10
                // Dst: (RLWNM:i32 ?:i32:$in, ?:i32:$sh, (MB:i32 (imm:i32)<<P:Predicate_maskimm32>>:$imm), (ME:i32 (imm:i32)<<P:Predicate_maskimm32>>:$imm))
              0, // EndSwitchOpcode
/*4648*/    /*Scope*/ 67|128,1/*195*/, /*->4845*/
/*4650*/      OPC_RecordChild0, // #0 = $src1
/*4651*/      OPC_Scope, 119, /*->4772*/ // 2 children in Scope
/*4653*/        OPC_RecordChild1, // #1 = $src2
/*4654*/        OPC_Scope, 91, /*->4747*/ // 3 children in Scope
/*4656*/          OPC_MoveChild, 1,
/*4658*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4661*/          OPC_Scope, 20, /*->4683*/ // 4 children in Scope
/*4663*/            OPC_CheckPredicate, 70, // Predicate_immZExt16
/*4665*/            OPC_MoveParent,
/*4666*/            OPC_CheckType, MVT::i32,
/*4668*/            OPC_EmitConvertToTarget, 1,
/*4670*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4673*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ANDIo), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (ANDIo:i32:i32 i32:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4683*/          /*Scope*/ 20, /*->4704*/
/*4684*/            OPC_CheckPredicate, 71, // Predicate_imm16ShiftedZExt
/*4686*/            OPC_MoveParent,
/*4687*/            OPC_CheckType, MVT::i32,
/*4689*/            OPC_EmitConvertToTarget, 1,
/*4691*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4694*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ANDISo), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (ANDISo:i32:i32 i32:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4704*/          /*Scope*/ 20, /*->4725*/
/*4705*/            OPC_CheckPredicate, 70, // Predicate_immZExt16
/*4707*/            OPC_MoveParent,
/*4708*/            OPC_CheckType, MVT::i64,
/*4710*/            OPC_EmitConvertToTarget, 1,
/*4712*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4715*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ANDIo8), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (ANDIo8:i64:i32 i64:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4725*/          /*Scope*/ 20, /*->4746*/
/*4726*/            OPC_CheckPredicate, 71, // Predicate_imm16ShiftedZExt
/*4728*/            OPC_MoveParent,
/*4729*/            OPC_CheckType, MVT::i64,
/*4731*/            OPC_EmitConvertToTarget, 1,
/*4733*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4736*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ANDISo8), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (ANDISo8:i64:i32 i64:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4746*/          0, /*End of Scope*/
/*4747*/        /*Scope*/ 11, /*->4759*/
/*4748*/          OPC_CheckType, MVT::i32,
/*4750*/          OPC_MorphNodeTo, TARGET_VAL(PPC::AND), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                  // Dst: (AND:i32 i32:i32:$rS, i32:i32:$rB)
/*4759*/        /*Scope*/ 11, /*->4771*/
/*4760*/          OPC_CheckType, MVT::i64,
/*4762*/          OPC_MorphNodeTo, TARGET_VAL(PPC::AND8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i64 i64:i64:$rS, i64:i64:$rB) - Complexity = 3
                  // Dst: (AND8:i64 i64:i64:$rS, i64:i64:$rB)
/*4771*/        0, /*End of Scope*/
/*4772*/      /*Scope*/ 71, /*->4844*/
/*4773*/        OPC_MoveChild, 1,
/*4775*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4778*/        OPC_Scope, 31, /*->4811*/ // 2 children in Scope
/*4780*/          OPC_RecordChild0, // #1 = $vB
/*4781*/          OPC_MoveChild, 1,
/*4783*/          OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4786*/          OPC_MoveChild, 0,
/*4788*/          OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4791*/          OPC_CheckPredicate, 72, // Predicate_immAllOnesV
/*4793*/          OPC_CheckType, MVT::v16i8,
/*4795*/          OPC_MoveParent,
/*4796*/          OPC_MoveParent,
/*4797*/          OPC_MoveParent,
/*4798*/          OPC_CheckType, MVT::v4i32,
/*4800*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4802*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:v4i32 v4i32:v4i32:$vA, (xor:v4i32 v4i32:v4i32:$vB, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>))) - Complexity = 13
                  // Dst: (VANDC:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4811*/        /*Scope*/ 31, /*->4843*/
/*4812*/          OPC_MoveChild, 0,
/*4814*/          OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4817*/          OPC_MoveChild, 0,
/*4819*/          OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4822*/          OPC_CheckPredicate, 72, // Predicate_immAllOnesV
/*4824*/          OPC_CheckType, MVT::v16i8,
/*4826*/          OPC_MoveParent,
/*4827*/          OPC_MoveParent,
/*4828*/          OPC_RecordChild1, // #1 = $vB
/*4829*/          OPC_MoveParent,
/*4830*/          OPC_CheckType, MVT::v4i32,
/*4832*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4834*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:v4i32 v4i32:v4i32:$vA, (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), v4i32:v4i32:$vB)) - Complexity = 13
                  // Dst: (VANDC:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4843*/        0, /*End of Scope*/
/*4844*/      0, /*End of Scope*/
/*4845*/    /*Scope*/ 73, /*->4919*/
/*4846*/      OPC_MoveChild, 0,
/*4848*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4851*/      OPC_Scope, 32, /*->4885*/ // 2 children in Scope
/*4853*/        OPC_RecordChild0, // #0 = $vB
/*4854*/        OPC_MoveChild, 1,
/*4856*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4859*/        OPC_MoveChild, 0,
/*4861*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4864*/        OPC_CheckPredicate, 72, // Predicate_immAllOnesV
/*4866*/        OPC_CheckType, MVT::v16i8,
/*4868*/        OPC_MoveParent,
/*4869*/        OPC_MoveParent,
/*4870*/        OPC_MoveParent,
/*4871*/        OPC_RecordChild1, // #1 = $vA
/*4872*/        OPC_CheckType, MVT::v4i32,
/*4874*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4876*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 v4i32:v4i32:$vB, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)), v4i32:v4i32:$vA) - Complexity = 13
                // Dst: (VANDC:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4885*/      /*Scope*/ 32, /*->4918*/
/*4886*/        OPC_MoveChild, 0,
/*4888*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4891*/        OPC_MoveChild, 0,
/*4893*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4896*/        OPC_CheckPredicate, 72, // Predicate_immAllOnesV
/*4898*/        OPC_CheckType, MVT::v16i8,
/*4900*/        OPC_MoveParent,
/*4901*/        OPC_MoveParent,
/*4902*/        OPC_RecordChild1, // #0 = $vB
/*4903*/        OPC_MoveParent,
/*4904*/        OPC_RecordChild1, // #1 = $vA
/*4905*/        OPC_CheckType, MVT::v4i32,
/*4907*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4909*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), v4i32:v4i32:$vB), v4i32:v4i32:$vA) - Complexity = 13
                // Dst: (VANDC:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4918*/      0, /*End of Scope*/
/*4919*/    /*Scope*/ 15, /*->4935*/
/*4920*/      OPC_RecordChild0, // #0 = $vA
/*4921*/      OPC_RecordChild1, // #1 = $vB
/*4922*/      OPC_CheckType, MVT::v4i32,
/*4924*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4926*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAND), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (and:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
              // Dst: (VAND:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4935*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 4|128,2/*260*/,  TARGET_VAL(ISD::OR),// ->5200
/*4940*/    OPC_Scope, 46, /*->4988*/ // 3 children in Scope
/*4942*/      OPC_RecordChild0, // #0 = $rS
/*4943*/      OPC_MoveChild, 1,
/*4945*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4948*/      OPC_RecordChild0, // #1 = $rB
/*4949*/      OPC_MoveChild, 1,
/*4951*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4962*/      OPC_MoveParent,
/*4963*/      OPC_MoveParent,
/*4964*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4976
/*4967*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 i32:i32:$rS, (xor:i32 i32:i32:$rB, -1:i32)) - Complexity = 11
                // Dst: (ORC:i32 i32:i32:$rS, i32:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4987
/*4978*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 i64:i64:$rS, (xor:i64 i64:i64:$rB, -1:i64)) - Complexity = 11
                // Dst: (ORC8:i64 i64:i64:$rS, i64:i64:$rB)
              0, // EndSwitchType
/*4988*/    /*Scope*/ 46, /*->5035*/
/*4989*/      OPC_MoveChild, 0,
/*4991*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4994*/      OPC_RecordChild0, // #0 = $rB
/*4995*/      OPC_MoveChild, 1,
/*4997*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5008*/      OPC_MoveParent,
/*5009*/      OPC_MoveParent,
/*5010*/      OPC_RecordChild1, // #1 = $rS
/*5011*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5023
/*5014*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (or:i32 (xor:i32 i32:i32:$rB, -1:i32), i32:i32:$rS) - Complexity = 11
                // Dst: (ORC:i32 i32:i32:$rS, i32:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->5034
/*5025*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (or:i64 (xor:i64 i64:i64:$rB, -1:i64), i64:i64:$rS) - Complexity = 11
                // Dst: (ORC8:i64 i64:i64:$rS, i64:i64:$rB)
              0, // EndSwitchType
/*5035*/    /*Scope*/ 34|128,1/*162*/, /*->5199*/
/*5037*/      OPC_RecordChild0, // #0 = $src1
/*5038*/      OPC_RecordChild1, // #1 = $src2
/*5039*/      OPC_Scope, 119, /*->5160*/ // 4 children in Scope
/*5041*/        OPC_MoveChild, 1,
/*5043*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5046*/        OPC_Scope, 19, /*->5067*/ // 5 children in Scope
/*5048*/          OPC_CheckPredicate, 70, // Predicate_immZExt16
/*5050*/          OPC_MoveParent,
/*5051*/          OPC_CheckType, MVT::i32,
/*5053*/          OPC_EmitConvertToTarget, 1,
/*5055*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*5058*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ORI:i32 i32:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*5067*/        /*Scope*/ 19, /*->5087*/
/*5068*/          OPC_CheckPredicate, 71, // Predicate_imm16ShiftedZExt
/*5070*/          OPC_MoveParent,
/*5071*/          OPC_CheckType, MVT::i32,
/*5073*/          OPC_EmitConvertToTarget, 1,
/*5075*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*5078*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ORIS:i32 i32:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*5087*/        /*Scope*/ 19, /*->5107*/
/*5088*/          OPC_CheckPredicate, 70, // Predicate_immZExt16
/*5090*/          OPC_MoveParent,
/*5091*/          OPC_CheckType, MVT::i64,
/*5093*/          OPC_EmitConvertToTarget, 1,
/*5095*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*5098*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORI8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ORI8:i64 i64:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*5107*/        /*Scope*/ 19, /*->5127*/
/*5108*/          OPC_CheckPredicate, 71, // Predicate_imm16ShiftedZExt
/*5110*/          OPC_MoveParent,
/*5111*/          OPC_CheckType, MVT::i64,
/*5113*/          OPC_EmitConvertToTarget, 1,
/*5115*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*5118*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ORIS8:i64 i64:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*5127*/        /*Scope*/ 31, /*->5159*/
/*5128*/          OPC_MoveParent,
/*5129*/          OPC_CheckType, MVT::i32,
/*5131*/          OPC_EmitConvertToTarget, 1,
/*5133*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*5136*/          OPC_EmitNode, TARGET_VAL(PPC::ORI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*5145*/          OPC_EmitConvertToTarget, 1,
/*5147*/          OPC_EmitNodeXForm, 0, 5, // HI16
/*5150*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                  // Src: (or:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                  // Dst: (ORIS:i32 (ORI:i32 ?:i32:$in, (LO16:i32 (imm:i32):$imm)), (HI16:i32 (imm:i32):$imm))
/*5159*/        0, /*End of Scope*/
/*5160*/      /*Scope*/ 11, /*->5172*/
/*5161*/        OPC_CheckType, MVT::i32,
/*5163*/        OPC_MorphNodeTo, TARGET_VAL(PPC::OR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (OR:i32 i32:i32:$rS, i32:i32:$rB)
/*5172*/      /*Scope*/ 11, /*->5184*/
/*5173*/        OPC_CheckType, MVT::i64,
/*5175*/        OPC_MorphNodeTo, TARGET_VAL(PPC::OR8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 i64:i64:$rS, i64:i64:$rB) - Complexity = 3
                // Dst: (OR8:i64 i64:i64:$rS, i64:i64:$rB)
/*5184*/      /*Scope*/ 13, /*->5198*/
/*5185*/        OPC_CheckType, MVT::v4i32,
/*5187*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5189*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
                // Dst: (VOR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*5198*/      0, /*End of Scope*/
/*5199*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 30|128,1/*158*/,  TARGET_VAL(PPCISD::Hi),// ->5362
/*5204*/    OPC_RecordChild0, // #0 = $in
/*5205*/    OPC_MoveChild, 0,
/*5207*/    OPC_SwitchOpcode /*5 cases */, 28,  TARGET_VAL(ISD::TargetGlobalAddress),// ->5239
/*5211*/      OPC_MoveParent,
/*5212*/      OPC_MoveChild, 1,
/*5214*/      OPC_CheckInteger, 0, 
/*5216*/      OPC_MoveParent,
/*5217*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5228
/*5220*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tglobaladdr:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tglobaladdr:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5238
/*5230*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tglobaladdr:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetConstantPool),// ->5270
/*5242*/      OPC_MoveParent,
/*5243*/      OPC_MoveChild, 1,
/*5245*/      OPC_CheckInteger, 0, 
/*5247*/      OPC_MoveParent,
/*5248*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5259
/*5251*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tconstpool:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5269
/*5261*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tconstpool:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetJumpTable),// ->5301
/*5273*/      OPC_MoveParent,
/*5274*/      OPC_MoveChild, 1,
/*5276*/      OPC_CheckInteger, 0, 
/*5278*/      OPC_MoveParent,
/*5279*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5290
/*5282*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tjumptable:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5300
/*5292*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tjumptable:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetBlockAddress),// ->5332
/*5304*/      OPC_MoveParent,
/*5305*/      OPC_MoveChild, 1,
/*5307*/      OPC_CheckInteger, 0, 
/*5309*/      OPC_MoveParent,
/*5310*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5321
/*5313*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tblockaddress:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5331
/*5323*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tblockaddress:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->5361
/*5335*/      OPC_MoveParent,
/*5336*/      OPC_RecordChild1, // #1 = $in
/*5337*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5349
/*5340*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (PPChi:i32 (tglobaltlsaddr:i32):$g, i32:i32:$in) - Complexity = 6
                // Dst: (ADDIS:i32 ?:i32:$in, (tglobaltlsaddr:i32):$g)
              /*SwitchType*/ 9,  MVT::i64,// ->5360
/*5351*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (PPChi:i64 (tglobaltlsaddr:i64):$g, i64:i64:$in) - Complexity = 6
                // Dst: (ADDIS8:i64 ?:i64:$in, (tglobaltlsaddr:i64):$g)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 30|128,1/*158*/,  TARGET_VAL(PPCISD::Lo),// ->5524
/*5366*/    OPC_RecordChild0, // #0 = $in
/*5367*/    OPC_MoveChild, 0,
/*5369*/    OPC_SwitchOpcode /*5 cases */, 28,  TARGET_VAL(ISD::TargetGlobalAddress),// ->5401
/*5373*/      OPC_MoveParent,
/*5374*/      OPC_MoveChild, 1,
/*5376*/      OPC_CheckInteger, 0, 
/*5378*/      OPC_MoveParent,
/*5379*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5390
/*5382*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tglobaladdr:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tglobaladdr:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5400
/*5392*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tglobaladdr:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetConstantPool),// ->5432
/*5404*/      OPC_MoveParent,
/*5405*/      OPC_MoveChild, 1,
/*5407*/      OPC_CheckInteger, 0, 
/*5409*/      OPC_MoveParent,
/*5410*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5421
/*5413*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tconstpool:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5431
/*5423*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tconstpool:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetJumpTable),// ->5463
/*5435*/      OPC_MoveParent,
/*5436*/      OPC_MoveChild, 1,
/*5438*/      OPC_CheckInteger, 0, 
/*5440*/      OPC_MoveParent,
/*5441*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5452
/*5444*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tjumptable:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5462
/*5454*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tjumptable:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetBlockAddress),// ->5494
/*5466*/      OPC_MoveParent,
/*5467*/      OPC_MoveChild, 1,
/*5469*/      OPC_CheckInteger, 0, 
/*5471*/      OPC_MoveParent,
/*5472*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5483
/*5475*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tblockaddress:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5493
/*5485*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tblockaddress:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->5523
/*5497*/      OPC_MoveParent,
/*5498*/      OPC_RecordChild1, // #1 = $in
/*5499*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5511
/*5502*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (PPClo:i32 (tglobaltlsaddr:i32):$g, i32:i32:$in) - Complexity = 6
                // Dst: (ADDI:i32 ?:i32:$in, (tglobaltlsaddr:i32):$g)
              /*SwitchType*/ 9,  MVT::i64,// ->5522
/*5513*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (PPClo:i64 (tglobaltlsaddr:i64):$g, i64:i64:$in) - Complexity = 6
                // Dst: (ADDI8:i64 ?:i64:$in, (tglobaltlsaddr:i64):$g)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::CALLSEQ_END),// ->5553
/*5527*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*5528*/    OPC_CaptureGlueInput,
/*5529*/    OPC_RecordChild1, // #1 = $amt1
/*5530*/    OPC_MoveChild, 1,
/*5532*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*5535*/    OPC_MoveParent,
/*5536*/    OPC_RecordChild2, // #2 = $amt2
/*5537*/    OPC_MoveChild, 2,
/*5539*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*5542*/    OPC_MoveParent,
/*5543*/    OPC_EmitMergeInputChains1_0,
/*5544*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP:i32 (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 70|128,1/*198*/,  TARGET_VAL(PPCISD::TC_RETURN),// ->5755
/*5557*/    OPC_RecordNode,   // #0 = 'PPCtc_return' chained node
/*5558*/    OPC_CaptureGlueInput,
/*5559*/    OPC_RecordChild1, // #1 = $func
/*5560*/    OPC_Scope, 21|128,1/*149*/, /*->5712*/ // 3 children in Scope
/*5563*/      OPC_MoveChild, 1,
/*5565*/      OPC_SwitchOpcode /*3 cases */, 48,  TARGET_VAL(ISD::Constant),// ->5617
/*5569*/        OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->5593
/*5572*/          OPC_MoveParent,
/*5573*/          OPC_RecordChild2, // #2 = $offset
/*5574*/          OPC_MoveChild, 2,
/*5576*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5579*/          OPC_MoveParent,
/*5580*/          OPC_EmitMergeInputChains1_0,
/*5581*/          OPC_EmitConvertToTarget, 1,
/*5583*/          OPC_EmitConvertToTarget, 2,
/*5585*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNai), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 3, 4, 
                  // Src: (PPCtc_return (imm:i32):$func, (imm:i32):$offset) - Complexity = 9
                  // Dst: (TCRETURNai (imm:i32):$func, (imm:i32):$offset)
                /*SwitchType*/ 21,  MVT::i64,// ->5616
/*5595*/          OPC_MoveParent,
/*5596*/          OPC_RecordChild2, // #2 = $offset
/*5597*/          OPC_MoveChild, 2,
/*5599*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5602*/          OPC_MoveParent,
/*5603*/          OPC_EmitMergeInputChains1_0,
/*5604*/          OPC_EmitConvertToTarget, 1,
/*5606*/          OPC_EmitConvertToTarget, 2,
/*5608*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNai8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 3, 4, 
                  // Src: (PPCtc_return (imm:i64):$func, (imm:i32):$offset) - Complexity = 9
                  // Dst: (TCRETURNai8 (imm:i64):$func, (imm:i32):$offset)
                0, // EndSwitchType
              /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetGlobalAddress),// ->5664
/*5620*/        OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->5642
/*5623*/          OPC_MoveParent,
/*5624*/          OPC_RecordChild2, // #2 = $imm
/*5625*/          OPC_MoveChild, 2,
/*5627*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5630*/          OPC_MoveParent,
/*5631*/          OPC_EmitMergeInputChains1_0,
/*5632*/          OPC_EmitConvertToTarget, 2,
/*5634*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (tglobaladdr:i32):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi (tglobaladdr:i32):$dst, (imm:i32):$imm)
                /*SwitchType*/ 19,  MVT::i64,// ->5663
/*5644*/          OPC_MoveParent,
/*5645*/          OPC_RecordChild2, // #2 = $imm
/*5646*/          OPC_MoveChild, 2,
/*5648*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5651*/          OPC_MoveParent,
/*5652*/          OPC_EmitMergeInputChains1_0,
/*5653*/          OPC_EmitConvertToTarget, 2,
/*5655*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (tglobaladdr:i64):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi8 (tglobaladdr:i64):$dst, (imm:i32):$imm)
                0, // EndSwitchType
              /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetExternalSymbol),// ->5711
/*5667*/        OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->5689
/*5670*/          OPC_MoveParent,
/*5671*/          OPC_RecordChild2, // #2 = $imm
/*5672*/          OPC_MoveChild, 2,
/*5674*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5677*/          OPC_MoveParent,
/*5678*/          OPC_EmitMergeInputChains1_0,
/*5679*/          OPC_EmitConvertToTarget, 2,
/*5681*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (texternalsym:i32):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi (texternalsym:i32):$dst, (imm:i32):$imm)
                /*SwitchType*/ 19,  MVT::i64,// ->5710
/*5691*/          OPC_MoveParent,
/*5692*/          OPC_RecordChild2, // #2 = $imm
/*5693*/          OPC_MoveChild, 2,
/*5695*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5698*/          OPC_MoveParent,
/*5699*/          OPC_EmitMergeInputChains1_0,
/*5700*/          OPC_EmitConvertToTarget, 2,
/*5702*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (texternalsym:i64):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi8 (texternalsym:i64):$dst, (imm:i32):$imm)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*5712*/    /*Scope*/ 20, /*->5733*/
/*5713*/      OPC_CheckChild1Type, MVT::i32,
/*5715*/      OPC_RecordChild2, // #2 = $imm
/*5716*/      OPC_MoveChild, 2,
/*5718*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5721*/      OPC_MoveParent,
/*5722*/      OPC_EmitMergeInputChains1_0,
/*5723*/      OPC_EmitConvertToTarget, 2,
/*5725*/      OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (PPCtc_return CTRRC:i32:$dst, (imm:i32):$imm) - Complexity = 6
              // Dst: (TCRETURNri CTRRC:i32:$dst, (imm:i32):$imm)
/*5733*/    /*Scope*/ 20, /*->5754*/
/*5734*/      OPC_CheckChild1Type, MVT::i64,
/*5736*/      OPC_RecordChild2, // #2 = $imm
/*5737*/      OPC_MoveChild, 2,
/*5739*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5742*/      OPC_MoveParent,
/*5743*/      OPC_EmitMergeInputChains1_0,
/*5744*/      OPC_EmitConvertToTarget, 2,
/*5746*/      OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNri8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (PPCtc_return CTRRC8:i64:$dst, (imm:i32):$imm) - Complexity = 6
              // Dst: (TCRETURNri8 CTRRC8:i64:$dst, (imm:i32):$imm)
/*5754*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 20,  TARGET_VAL(ISD::ATOMIC_FENCE),// ->5778
/*5758*/    OPC_RecordNode,   // #0 = 'atomic_fence' chained node
/*5759*/    OPC_MoveChild, 1,
/*5761*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5764*/    OPC_MoveParent,
/*5765*/    OPC_MoveChild, 2,
/*5767*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5770*/    OPC_MoveParent,
/*5771*/    OPC_EmitMergeInputChains1_0,
/*5772*/    OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (atomic_fence (imm:iPTR), (imm:iPTR)) - Complexity = 9
            // Dst: (SYNC)
          /*SwitchOpcode*/ 36,  TARGET_VAL(PPCISD::EH_SJLJ_SETJMP),// ->5817
/*5781*/    OPC_RecordNode,   // #0 = 'PPCeh_sjlj_setjmp' chained node
/*5782*/    OPC_RecordChild1, // #1 = $buf
/*5783*/    OPC_CheckType, MVT::i32,
/*5785*/    OPC_Scope, 14, /*->5801*/ // 2 children in Scope
/*5787*/      OPC_CheckPatternPredicate, 1, // (!PPCSubTarget.isPPC64())
/*5789*/      OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddr:$buf #2
/*5792*/      OPC_EmitMergeInputChains1_0,
/*5793*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EH_SjLj_SetJmp32), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (PPCeh_sjlj_setjmp:i32 addr:iPTR:$buf) - Complexity = 9
              // Dst: (EH_SjLj_SetJmp32:i32 addr:iPTR:$buf)
/*5801*/    /*Scope*/ 14, /*->5816*/
/*5802*/      OPC_CheckPatternPredicate, 2, // (PPCSubTarget.isPPC64())
/*5804*/      OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddr:$buf #2
/*5807*/      OPC_EmitMergeInputChains1_0,
/*5808*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EH_SjLj_SetJmp64), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (PPCeh_sjlj_setjmp:i32 addr:iPTR:$buf) - Complexity = 9
              // Dst: (EH_SjLj_SetJmp64:i32 addr:iPTR:$buf)
/*5816*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 32,  TARGET_VAL(PPCISD::EH_SJLJ_LONGJMP),// ->5852
/*5820*/    OPC_RecordNode,   // #0 = 'PPCeh_sjlj_longjmp' chained node
/*5821*/    OPC_RecordChild1, // #1 = $buf
/*5822*/    OPC_Scope, 13, /*->5837*/ // 2 children in Scope
/*5824*/      OPC_CheckPatternPredicate, 1, // (!PPCSubTarget.isPPC64())
/*5826*/      OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddr:$buf #2
/*5829*/      OPC_EmitMergeInputChains1_0,
/*5830*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EH_SjLj_LongJmp32), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 2, 
              // Src: (PPCeh_sjlj_longjmp addr:iPTR:$buf) - Complexity = 9
              // Dst: (EH_SjLj_LongJmp32 addr:iPTR:$buf)
/*5837*/    /*Scope*/ 13, /*->5851*/
/*5838*/      OPC_CheckPatternPredicate, 2, // (PPCSubTarget.isPPC64())
/*5840*/      OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddr:$buf #2
/*5843*/      OPC_EmitMergeInputChains1_0,
/*5844*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EH_SjLj_LongJmp64), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 2, 
              // Src: (PPCeh_sjlj_longjmp addr:iPTR:$buf) - Complexity = 9
              // Dst: (EH_SjLj_LongJmp64 addr:iPTR:$buf)
/*5851*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 124,  TARGET_VAL(ISD::SUB),// ->5979
/*5855*/    OPC_Scope, 28, /*->5885*/ // 2 children in Scope
/*5857*/      OPC_MoveChild, 0,
/*5859*/      OPC_CheckInteger, 0, 
/*5861*/      OPC_MoveParent,
/*5862*/      OPC_RecordChild1, // #0 = $rA
/*5863*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5874
/*5866*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NEG), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sub:i32 0:i32, i32:i32:$rA) - Complexity = 8
                // Dst: (NEG:i32 i32:i32:$rA)
              /*SwitchType*/ 8,  MVT::i64,// ->5884
/*5876*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NEG8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sub:i64 0:i64, i64:i64:$rA) - Complexity = 8
                // Dst: (NEG8:i64 i64:i64:$rA)
              0, // EndSwitchType
/*5885*/    /*Scope*/ 92, /*->5978*/
/*5886*/      OPC_RecordChild0, // #0 = $imm
/*5887*/      OPC_Scope, 23, /*->5912*/ // 2 children in Scope
/*5889*/        OPC_MoveChild, 0,
/*5891*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5894*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*5896*/        OPC_MoveParent,
/*5897*/        OPC_RecordChild1, // #1 = $in
/*5898*/        OPC_CheckType, MVT::i32,
/*5900*/        OPC_EmitConvertToTarget, 0,
/*5902*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (sub:i32 (imm:i32)<<P:Predicate_immSExt16>>:$imm, i32:i32:$in) - Complexity = 7
                // Dst: (SUBFIC:i32:i32 ?:i32:$in, (imm:i32):$imm)
/*5912*/      /*Scope*/ 64, /*->5977*/
/*5913*/        OPC_RecordChild1, // #1 = $rA
/*5914*/        OPC_SwitchType /*5 cases */, 9,  MVT::i32,// ->5926
/*5917*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBF), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (sub:i32 i32:i32:$rB, i32:i32:$rA) - Complexity = 3
                  // Dst: (SUBF:i32 i32:i32:$rA, i32:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->5937
/*5928*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBF8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (sub:i64 i64:i64:$rB, i64:i64:$rA) - Complexity = 3
                  // Dst: (SUBF8:i64 i64:i64:$rA, i64:i64:$rB)
                /*SwitchType*/ 11,  MVT::v16i8,// ->5950
/*5939*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5941*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUBM), 0,
                      1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
                  // Dst: (VSUBUBM:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
                /*SwitchType*/ 11,  MVT::v8i16,// ->5963
/*5952*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5954*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUHM), 0,
                      1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
                  // Dst: (VSUBUHM:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
                /*SwitchType*/ 11,  MVT::v4i32,// ->5976
/*5965*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5967*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUWM), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
                  // Dst: (VSUBUWM:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
                0, // EndSwitchType
/*5977*/      0, /*End of Scope*/
/*5978*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 102,  TARGET_VAL(ISD::ADDE),// ->6084
/*5982*/    OPC_CaptureGlueInput,
/*5983*/    OPC_RecordChild0, // #0 = $rA
/*5984*/    OPC_Scope, 69, /*->6055*/ // 2 children in Scope
/*5986*/      OPC_MoveChild, 1,
/*5988*/      OPC_Scope, 36, /*->6026*/ // 2 children in Scope
/*5990*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6001*/        OPC_MoveParent,
/*6002*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6014
/*6005*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDME), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i32 i32:i32:$rA, -1:i32) - Complexity = 8
                  // Dst: (ADDME:i32:i32 i32:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->6025
/*6016*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDME8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i64 i64:i64:$rA, -1:i64) - Complexity = 8
                  // Dst: (ADDME8:i64:i32 i64:i64:$rA)
                0, // EndSwitchType
/*6026*/      /*Scope*/ 27, /*->6054*/
/*6027*/        OPC_CheckInteger, 0, 
/*6029*/        OPC_MoveParent,
/*6030*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6042
/*6033*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDZE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i32 i32:i32:$rA, 0:i32) - Complexity = 8
                  // Dst: (ADDZE:i32:i32 i32:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->6053
/*6044*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDZE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i64 i64:i64:$rA, 0:i64) - Complexity = 8
                  // Dst: (ADDZE8:i64:i32 i64:i64:$rA)
                0, // EndSwitchType
/*6054*/      0, /*End of Scope*/
/*6055*/    /*Scope*/ 27, /*->6083*/
/*6056*/      OPC_RecordChild1, // #1 = $rB
/*6057*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->6070
/*6060*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
                // Dst: (ADDE:i32:i32 i32:i32:$rA, i32:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->6082
/*6072*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
                // Dst: (ADDE8:i64:i32 i64:i64:$rA, i64:i64:$rB)
              0, // EndSwitchType
/*6083*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 104,  TARGET_VAL(ISD::SUBE),// ->6191
/*6087*/    OPC_CaptureGlueInput,
/*6088*/    OPC_Scope, 71, /*->6161*/ // 2 children in Scope
/*6090*/      OPC_MoveChild, 0,
/*6092*/      OPC_Scope, 37, /*->6131*/ // 2 children in Scope
/*6094*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6105*/        OPC_MoveParent,
/*6106*/        OPC_RecordChild1, // #0 = $rA
/*6107*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6119
/*6110*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFME), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i32 -1:i32, i32:i32:$rA) - Complexity = 8
                  // Dst: (SUBFME:i32:i32 i32:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->6130
/*6121*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFME8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i64 -1:i64, i64:i64:$rA) - Complexity = 8
                  // Dst: (SUBFME8:i64:i32 i64:i64:$rA)
                0, // EndSwitchType
/*6131*/      /*Scope*/ 28, /*->6160*/
/*6132*/        OPC_CheckInteger, 0, 
/*6134*/        OPC_MoveParent,
/*6135*/        OPC_RecordChild1, // #0 = $rA
/*6136*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6148
/*6139*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFZE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i32 0:i32, i32:i32:$rA) - Complexity = 8
                  // Dst: (SUBFZE:i32:i32 i32:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->6159
/*6150*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFZE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i64 0:i64, i64:i64:$rA) - Complexity = 8
                  // Dst: (SUBFZE8:i64:i32 i64:i64:$rA)
                0, // EndSwitchType
/*6160*/      0, /*End of Scope*/
/*6161*/    /*Scope*/ 28, /*->6190*/
/*6162*/      OPC_RecordChild0, // #0 = $rB
/*6163*/      OPC_RecordChild1, // #1 = $rA
/*6164*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->6177
/*6167*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (sube:i32 i32:i32:$rB, i32:i32:$rA) - Complexity = 3
                // Dst: (SUBFE:i32:i32 i32:i32:$rA, i32:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->6189
/*6179*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (sube:i64 i64:i64:$rB, i64:i64:$rA) - Complexity = 3
                // Dst: (SUBFE8:i64:i32 i64:i64:$rA, i64:i64:$rB)
              0, // EndSwitchType
/*6190*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::ADDC),// ->6263
/*6194*/    OPC_RecordChild0, // #0 = $rA
/*6195*/    OPC_RecordChild1, // #1 = $imm
/*6196*/    OPC_Scope, 38, /*->6236*/ // 3 children in Scope
/*6198*/      OPC_MoveChild, 1,
/*6200*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6203*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*6205*/      OPC_MoveParent,
/*6206*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->6221
/*6209*/        OPC_EmitConvertToTarget, 1,
/*6211*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 i32:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (ADDIC:i32:i32 i32:i32:$rA, (imm:i32):$imm)
              /*SwitchType*/ 12,  MVT::i64,// ->6235
/*6223*/        OPC_EmitConvertToTarget, 1,
/*6225*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i64 i64:i64:$rA, (imm:i64)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (ADDIC8:i64:i32 i64:i64:$rA, (imm:i64):$imm)
              0, // EndSwitchType
/*6236*/    /*Scope*/ 12, /*->6249*/
/*6237*/      OPC_CheckType, MVT::i32,
/*6239*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ADDC), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (ADDC:i32:i32 i32:i32:$rA, i32:i32:$rB)
/*6249*/    /*Scope*/ 12, /*->6262*/
/*6250*/      OPC_CheckType, MVT::i64,
/*6252*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ADDC8), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (ADDC8:i64:i32 i64:i64:$rA, i64:i64:$rB)
/*6262*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 50,  TARGET_VAL(ISD::MUL),// ->6316
/*6266*/    OPC_RecordChild0, // #0 = $rA
/*6267*/    OPC_RecordChild1, // #1 = $imm
/*6268*/    OPC_Scope, 21, /*->6291*/ // 3 children in Scope
/*6270*/      OPC_MoveChild, 1,
/*6272*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6275*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*6277*/      OPC_MoveParent,
/*6278*/      OPC_CheckType, MVT::i32,
/*6280*/      OPC_EmitConvertToTarget, 1,
/*6282*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (mul:i32 i32:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
              // Dst: (MULLI:i32 i32:i32:$rA, (imm:i32):$imm)
/*6291*/    /*Scope*/ 11, /*->6303*/
/*6292*/      OPC_CheckType, MVT::i32,
/*6294*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (MULLW:i32 i32:i32:$rA, i32:i32:$rB)
/*6303*/    /*Scope*/ 11, /*->6315*/
/*6304*/      OPC_CheckType, MVT::i64,
/*6306*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (MULLD:i64 i64:i64:$rA, i64:i64:$rB)
/*6315*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 71,  TARGET_VAL(ISD::SUBC),// ->6390
/*6319*/    OPC_RecordChild0, // #0 = $imm
/*6320*/    OPC_Scope, 39, /*->6361*/ // 2 children in Scope
/*6322*/      OPC_MoveChild, 0,
/*6324*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6327*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*6329*/      OPC_MoveParent,
/*6330*/      OPC_RecordChild1, // #1 = $rA
/*6331*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->6346
/*6334*/        OPC_EmitConvertToTarget, 0,
/*6336*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (subc:i32 (imm:i32)<<P:Predicate_immSExt16>>:$imm, i32:i32:$rA) - Complexity = 7
                // Dst: (SUBFIC:i32:i32 i32:i32:$rA, (imm:i32):$imm)
              /*SwitchType*/ 12,  MVT::i64,// ->6360
/*6348*/        OPC_EmitConvertToTarget, 0,
/*6350*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (subc:i64 (imm:i64)<<P:Predicate_immSExt16>>:$imm, i64:i64:$rA) - Complexity = 7
                // Dst: (SUBFIC8:i64:i32 i64:i64:$rA, (imm:i64):$imm)
              0, // EndSwitchType
/*6361*/    /*Scope*/ 27, /*->6389*/
/*6362*/      OPC_RecordChild1, // #1 = $rA
/*6363*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->6376
/*6366*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (subc:i32 i32:i32:$rB, i32:i32:$rA) - Complexity = 3
                // Dst: (SUBFC:i32:i32 i32:i32:$rA, i32:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->6388
/*6378*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (subc:i64 i64:i64:$rB, i64:i64:$rA) - Complexity = 3
                // Dst: (SUBFC8:i64:i32 i64:i64:$rA, i64:i64:$rB)
              0, // EndSwitchType
/*6389*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 120,  TARGET_VAL(ISD::SRA),// ->6513
/*6393*/    OPC_RecordChild0, // #0 = $rS
/*6394*/    OPC_RecordChild1, // #1 = $SH
/*6395*/    OPC_Scope, 38, /*->6435*/ // 5 children in Scope
/*6397*/      OPC_MoveChild, 1,
/*6399*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6402*/      OPC_CheckType, MVT::i32,
/*6404*/      OPC_MoveParent,
/*6405*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->6420
/*6408*/        OPC_EmitConvertToTarget, 1,
/*6410*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAWI), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 i32:i32:$rS, (imm:i32):$SH) - Complexity = 6
                // Dst: (SRAWI:i32:i32 i32:i32:$rS, (imm:i32):$SH)
              /*SwitchType*/ 12,  MVT::i64,// ->6434
/*6422*/        OPC_EmitConvertToTarget, 1,
/*6424*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRADI), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i64 i64:i64:$rS, (imm:i32):$SH) - Complexity = 6
                // Dst: (SRADI:i64:i32 i64:i64:$rS, (imm:i32):$SH)
              0, // EndSwitchType
/*6435*/    /*Scope*/ 28, /*->6464*/
/*6436*/      OPC_CheckChild1Type, MVT::i32,
/*6438*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->6451
/*6441*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAW), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SRAW:i32:i32 ?:i32:$rS, ?:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->6463
/*6453*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAD), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SRAD:i64:i32 ?:i64:$rS, ?:i32:$rB)
              0, // EndSwitchType
/*6464*/    /*Scope*/ 15, /*->6480*/
/*6465*/      OPC_CheckChild1Type, MVT::v16i8,
/*6467*/      OPC_CheckType, MVT::v16i8,
/*6469*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6471*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
              // Dst: (VSRAB:v16i8 ?:v16i8:$vA, ?:v16i8:$vB)
/*6480*/    /*Scope*/ 15, /*->6496*/
/*6481*/      OPC_CheckChild1Type, MVT::v8i16,
/*6483*/      OPC_CheckType, MVT::v8i16,
/*6485*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6487*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
              // Dst: (VSRAH:v8i16 ?:v8i16:$vA, ?:v8i16:$vB)
/*6496*/    /*Scope*/ 15, /*->6512*/
/*6497*/      OPC_CheckChild1Type, MVT::v4i32,
/*6499*/      OPC_CheckType, MVT::v4i32,
/*6501*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6503*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
              // Dst: (VSRAW:v4i32 ?:v4i32:$vA, ?:v4i32:$vB)
/*6512*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 4|128,1/*132*/,  TARGET_VAL(ISD::SHL),// ->6649
/*6517*/    OPC_RecordChild0, // #0 = $in
/*6518*/    OPC_RecordChild1, // #1 = $imm
/*6519*/    OPC_Scope, 52, /*->6573*/ // 5 children in Scope
/*6521*/      OPC_MoveChild, 1,
/*6523*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6526*/      OPC_CheckType, MVT::i32,
/*6528*/      OPC_MoveParent,
/*6529*/      OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->6553
/*6532*/        OPC_EmitConvertToTarget, 1,
/*6534*/        OPC_EmitInteger, MVT::i32, 0, 
/*6537*/        OPC_EmitConvertToTarget, 1,
/*6539*/        OPC_EmitNodeXForm, 5, 4, // SHL32
/*6542*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 5, 
                // Src: (shl:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 ?:i32:$in, (imm:i32):$imm, 0:i32, (SHL32:i32 (imm:i32):$imm))
              /*SwitchType*/ 17,  MVT::i64,// ->6572
/*6555*/        OPC_EmitConvertToTarget, 1,
/*6557*/        OPC_EmitConvertToTarget, 1,
/*6559*/        OPC_EmitNodeXForm, 6, 3, // SHL64
/*6562*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICR), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 4, 
                // Src: (shl:i64 i64:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICR:i64 ?:i64:$in, (imm:i32):$imm, (SHL64:i32 (imm:i32):$imm))
              0, // EndSwitchType
/*6573*/    /*Scope*/ 26, /*->6600*/
/*6574*/      OPC_CheckChild1Type, MVT::i32,
/*6576*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6588
/*6579*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SLW), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SLW:i32 ?:i32:$rS, ?:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->6599
/*6590*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SLD), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SLD:i64 ?:i64:$rS, ?:i32:$rB)
              0, // EndSwitchType
/*6600*/    /*Scope*/ 15, /*->6616*/
/*6601*/      OPC_CheckChild1Type, MVT::v16i8,
/*6603*/      OPC_CheckType, MVT::v16i8,
/*6605*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6607*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
              // Dst: (VSLB:v16i8 ?:v16i8:$vA, ?:v16i8:$vB)
/*6616*/    /*Scope*/ 15, /*->6632*/
/*6617*/      OPC_CheckChild1Type, MVT::v8i16,
/*6619*/      OPC_CheckType, MVT::v8i16,
/*6621*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6623*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
              // Dst: (VSLH:v8i16 ?:v8i16:$vA, ?:v8i16:$vB)
/*6632*/    /*Scope*/ 15, /*->6648*/
/*6633*/      OPC_CheckChild1Type, MVT::v4i32,
/*6635*/      OPC_CheckType, MVT::v4i32,
/*6637*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6639*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
              // Dst: (VSLW:v4i32 ?:v4i32:$vA, ?:v4i32:$vB)
/*6648*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 4|128,1/*132*/,  TARGET_VAL(ISD::SRL),// ->6785
/*6653*/    OPC_RecordChild0, // #0 = $in
/*6654*/    OPC_RecordChild1, // #1 = $imm
/*6655*/    OPC_Scope, 52, /*->6709*/ // 5 children in Scope
/*6657*/      OPC_MoveChild, 1,
/*6659*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6662*/      OPC_CheckType, MVT::i32,
/*6664*/      OPC_MoveParent,
/*6665*/      OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->6689
/*6668*/        OPC_EmitConvertToTarget, 1,
/*6670*/        OPC_EmitNodeXForm, 7, 2, // SRL32
/*6673*/        OPC_EmitConvertToTarget, 1,
/*6675*/        OPC_EmitInteger, MVT::i32, 31, 
/*6678*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (srl:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 ?:i32:$in, (SRL32:i32 (imm:i32):$imm), (imm:i32):$imm, 31:i32)
              /*SwitchType*/ 17,  MVT::i64,// ->6708
/*6691*/        OPC_EmitConvertToTarget, 1,
/*6693*/        OPC_EmitNodeXForm, 8, 2, // SRL64
/*6696*/        OPC_EmitConvertToTarget, 1,
/*6698*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 3, 4, 
                // Src: (srl:i64 i64:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICL:i64 ?:i64:$in, (SRL64:i32 (imm:i32):$imm), (imm:i32):$imm)
              0, // EndSwitchType
/*6709*/    /*Scope*/ 26, /*->6736*/
/*6710*/      OPC_CheckChild1Type, MVT::i32,
/*6712*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6724
/*6715*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRW), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SRW:i32 ?:i32:$rS, ?:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->6735
/*6726*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRD), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SRD:i64 ?:i64:$rS, ?:i32:$rB)
              0, // EndSwitchType
/*6736*/    /*Scope*/ 15, /*->6752*/
/*6737*/      OPC_CheckChild1Type, MVT::v16i8,
/*6739*/      OPC_CheckType, MVT::v16i8,
/*6741*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6743*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
              // Dst: (VSRB:v16i8 ?:v16i8:$vA, ?:v16i8:$vB)
/*6752*/    /*Scope*/ 15, /*->6768*/
/*6753*/      OPC_CheckChild1Type, MVT::v8i16,
/*6755*/      OPC_CheckType, MVT::v8i16,
/*6757*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6759*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
              // Dst: (VSRH:v8i16 ?:v8i16:$vA, ?:v8i16:$vB)
/*6768*/    /*Scope*/ 15, /*->6784*/
/*6769*/      OPC_CheckChild1Type, MVT::v4i32,
/*6771*/      OPC_CheckType, MVT::v4i32,
/*6773*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6775*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
              // Dst: (VSRW:v4i32 ?:v4i32:$vA, ?:v4i32:$vB)
/*6784*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 92,  TARGET_VAL(ISD::ROTL),// ->6880
/*6788*/    OPC_RecordChild0, // #0 = $in
/*6789*/    OPC_RecordChild1, // #1 = $imm
/*6790*/    OPC_Scope, 48, /*->6840*/ // 2 children in Scope
/*6792*/      OPC_MoveChild, 1,
/*6794*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6797*/      OPC_CheckType, MVT::i32,
/*6799*/      OPC_MoveParent,
/*6800*/      OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->6822
/*6803*/        OPC_EmitConvertToTarget, 1,
/*6805*/        OPC_EmitInteger, MVT::i32, 0, 
/*6808*/        OPC_EmitInteger, MVT::i32, 31, 
/*6811*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (rotl:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 ?:i32:$in, (imm:i32):$imm, 0:i32, 31:i32)
              /*SwitchType*/ 15,  MVT::i64,// ->6839
/*6824*/        OPC_EmitConvertToTarget, 1,
/*6826*/        OPC_EmitInteger, MVT::i32, 0, 
/*6829*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
                // Src: (rotl:i64 i64:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICL:i64 ?:i64:$in, (imm:i32):$imm, 0:i32)
              0, // EndSwitchType
/*6840*/    /*Scope*/ 38, /*->6879*/
/*6841*/      OPC_CheckChild1Type, MVT::i32,
/*6843*/      OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->6863
/*6846*/        OPC_EmitInteger, MVT::i32, 0, 
/*6849*/        OPC_EmitInteger, MVT::i32, 31, 
/*6852*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWNM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                // Src: (rotl:i32 i32:i32:$in, i32:i32:$sh) - Complexity = 3
                // Dst: (RLWNM:i32 ?:i32:$in, ?:i32:$sh, 0:i32, 31:i32)
              /*SwitchType*/ 13,  MVT::i64,// ->6878
/*6865*/        OPC_EmitInteger, MVT::i32, 0, 
/*6868*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDCL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (rotl:i64 i64:i64:$in, i32:i32:$sh) - Complexity = 3
                // Dst: (RLDCL:i64 ?:i64:$in, ?:i32:$sh, 0:i32)
              0, // EndSwitchType
/*6879*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 53,  TARGET_VAL(PPCISD::TOC_ENTRY),// ->6936
/*6883*/    OPC_RecordChild0, // #0 = $disp
/*6884*/    OPC_MoveChild, 0,
/*6886*/    OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::TargetGlobalAddress),// ->6903
/*6890*/      OPC_MoveParent,
/*6891*/      OPC_RecordChild1, // #1 = $reg
/*6892*/      OPC_CheckType, MVT::i64,
/*6894*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtoc), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tglobaladdr:i64):$disp, i64:i64:$reg) - Complexity = 6
              // Dst: (LDtoc:i64 (tglobaladdr:i64):$disp, i64:i64:$reg)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetJumpTable),// ->6919
/*6906*/      OPC_MoveParent,
/*6907*/      OPC_RecordChild1, // #1 = $reg
/*6908*/      OPC_CheckType, MVT::i64,
/*6910*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtocJTI), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tjumptable:i64):$disp, i64:i64:$reg) - Complexity = 6
              // Dst: (LDtocJTI:i64 (tjumptable:i64):$disp, i64:i64:$reg)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetConstantPool),// ->6935
/*6922*/      OPC_MoveParent,
/*6923*/      OPC_RecordChild1, // #1 = $reg
/*6924*/      OPC_CheckType, MVT::i64,
/*6926*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtocCPT), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tconstpool:i64):$disp, i64:i64:$reg) - Complexity = 6
              // Dst: (LDtocCPT:i64 (tconstpool:i64):$disp, i64:i64:$reg)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_TOC_HA),// ->6958
/*6939*/    OPC_RecordChild0, // #0 = $reg
/*6940*/    OPC_RecordChild1, // #1 = $disp
/*6941*/    OPC_MoveChild, 1,
/*6943*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*6946*/    OPC_MoveParent,
/*6947*/    OPC_CheckType, MVT::i64,
/*6949*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIStocHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisTocHA:i64 i64:i64:$reg, (tglobaladdr:i64):$disp) - Complexity = 6
            // Dst: (ADDIStocHA:i64 i64:i64:$reg, (tglobaladdr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::LD_TOC_L),// ->6980
/*6961*/    OPC_RecordChild0, // #0 = $disp
/*6962*/    OPC_MoveChild, 0,
/*6964*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*6967*/    OPC_MoveParent,
/*6968*/    OPC_RecordChild1, // #1 = $reg
/*6969*/    OPC_CheckType, MVT::i64,
/*6971*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LDtocL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCldTocL:i64 (tglobaladdr:i64):$disp, i64:i64:$reg) - Complexity = 6
            // Dst: (LDtocL:i64 (tglobaladdr:i64):$disp, i64:i64:$reg)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_TOC_L),// ->7002
/*6983*/    OPC_RecordChild0, // #0 = $reg
/*6984*/    OPC_RecordChild1, // #1 = $disp
/*6985*/    OPC_MoveChild, 1,
/*6987*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*6990*/    OPC_MoveParent,
/*6991*/    OPC_CheckType, MVT::i64,
/*6993*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDItocL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiTocL:i64 i64:i64:$reg, (tglobaladdr:i64):$disp) - Complexity = 6
            // Dst: (ADDItocL:i64 i64:i64:$reg, (tglobaladdr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_GOT_TPREL_HA),// ->7024
/*7005*/    OPC_RecordChild0, // #0 = $reg
/*7006*/    OPC_RecordChild1, // #1 = $disp
/*7007*/    OPC_MoveChild, 1,
/*7009*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*7012*/    OPC_MoveParent,
/*7013*/    OPC_CheckType, MVT::i64,
/*7015*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDISgotTprelHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisGotTprelHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDISgotTprelHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::LD_GOT_TPREL_L),// ->7046
/*7027*/    OPC_RecordChild0, // #0 = $disp
/*7028*/    OPC_MoveChild, 0,
/*7030*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*7033*/    OPC_MoveParent,
/*7034*/    OPC_RecordChild1, // #1 = $reg
/*7035*/    OPC_CheckType, MVT::i64,
/*7037*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LDgotTprelL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCldGotTprelL:i64 (tglobaltlsaddr:i64):$disp, i64:i64:$reg) - Complexity = 6
            // Dst: (LDgotTprelL:i64 (tglobaltlsaddr:i64):$disp, i64:i64:$reg)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADD_TLS),// ->7068
/*7049*/    OPC_RecordChild0, // #0 = $in
/*7050*/    OPC_RecordChild1, // #1 = $g
/*7051*/    OPC_MoveChild, 1,
/*7053*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*7056*/    OPC_MoveParent,
/*7057*/    OPC_CheckType, MVT::i64,
/*7059*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8TLS), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddTls:i64 i64:i64:$in, (tglobaltlsaddr:i64):$g) - Complexity = 6
            // Dst: (ADD8TLS:i64 ?:i64:$in, (tglobaltlsaddr:i64):$g)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_TLSGD_HA),// ->7090
/*7071*/    OPC_RecordChild0, // #0 = $reg
/*7072*/    OPC_RecordChild1, // #1 = $disp
/*7073*/    OPC_MoveChild, 1,
/*7075*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*7078*/    OPC_MoveParent,
/*7079*/    OPC_CheckType, MVT::i64,
/*7081*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIStlsgdHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisTlsgdHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDIStlsgdHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_TLSGD_L),// ->7112
/*7093*/    OPC_RecordChild0, // #0 = $reg
/*7094*/    OPC_RecordChild1, // #1 = $disp
/*7095*/    OPC_MoveChild, 1,
/*7097*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*7100*/    OPC_MoveParent,
/*7101*/    OPC_CheckType, MVT::i64,
/*7103*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDItlsgdL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiTlsgdL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDItlsgdL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::GET_TLS_ADDR),// ->7134
/*7115*/    OPC_RecordChild0, // #0 = $reg
/*7116*/    OPC_RecordChild1, // #1 = $sym
/*7117*/    OPC_MoveChild, 1,
/*7119*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*7122*/    OPC_MoveParent,
/*7123*/    OPC_CheckType, MVT::i64,
/*7125*/    OPC_MorphNodeTo, TARGET_VAL(PPC::GETtlsADDR), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCgetTlsAddr:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$sym) - Complexity = 6
            // Dst: (GETtlsADDR:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$sym)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_TLSLD_HA),// ->7156
/*7137*/    OPC_RecordChild0, // #0 = $reg
/*7138*/    OPC_RecordChild1, // #1 = $disp
/*7139*/    OPC_MoveChild, 1,
/*7141*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*7144*/    OPC_MoveParent,
/*7145*/    OPC_CheckType, MVT::i64,
/*7147*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIStlsldHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisTlsldHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDIStlsldHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_TLSLD_L),// ->7178
/*7159*/    OPC_RecordChild0, // #0 = $reg
/*7160*/    OPC_RecordChild1, // #1 = $disp
/*7161*/    OPC_MoveChild, 1,
/*7163*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*7166*/    OPC_MoveParent,
/*7167*/    OPC_CheckType, MVT::i64,
/*7169*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDItlsldL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiTlsldL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDItlsldL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::GET_TLSLD_ADDR),// ->7200
/*7181*/    OPC_RecordChild0, // #0 = $reg
/*7182*/    OPC_RecordChild1, // #1 = $sym
/*7183*/    OPC_MoveChild, 1,
/*7185*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*7188*/    OPC_MoveParent,
/*7189*/    OPC_CheckType, MVT::i64,
/*7191*/    OPC_MorphNodeTo, TARGET_VAL(PPC::GETtlsldADDR), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCgetTlsldAddr:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$sym) - Complexity = 6
            // Dst: (GETtlsldADDR:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$sym)
          /*SwitchOpcode*/ 21,  TARGET_VAL(PPCISD::ADDIS_DTPREL_HA),// ->7224
/*7203*/    OPC_RecordNode,   // #0 = 'PPCaddisDtprelHA' chained node
/*7204*/    OPC_RecordChild1, // #1 = $reg
/*7205*/    OPC_RecordChild2, // #2 = $disp
/*7206*/    OPC_MoveChild, 2,
/*7208*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*7211*/    OPC_MoveParent,
/*7212*/    OPC_CheckType, MVT::i64,
/*7214*/    OPC_EmitMergeInputChains1_0,
/*7215*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDISdtprelHA), 0|OPFL_Chain,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
            // Src: (PPCaddisDtprelHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDISdtprelHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_DTPREL_L),// ->7246
/*7227*/    OPC_RecordChild0, // #0 = $reg
/*7228*/    OPC_RecordChild1, // #1 = $disp
/*7229*/    OPC_MoveChild, 1,
/*7231*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*7234*/    OPC_MoveParent,
/*7235*/    OPC_CheckType, MVT::i64,
/*7237*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIdtprelL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiDtprelL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDIdtprelL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 97,  TARGET_VAL(ISD::Constant),// ->7346
/*7249*/    OPC_RecordNode,   // #0 = $imm
/*7250*/    OPC_SwitchType /*2 cases */, 59,  MVT::i32,// ->7312
/*7253*/      OPC_Scope, 12, /*->7267*/ // 3 children in Scope
/*7255*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*7257*/        OPC_EmitConvertToTarget, 0,
/*7259*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (imm:i32)<<P:Predicate_immSExt16>>:$imm - Complexity = 4
                // Dst: (LI:i32 (imm:i32):$imm)
/*7267*/      /*Scope*/ 15, /*->7283*/
/*7268*/        OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*7270*/        OPC_EmitConvertToTarget, 0,
/*7272*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*7275*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (LIS:i32 (HI16:i32 (imm:i32):$imm))
/*7283*/      /*Scope*/ 27, /*->7311*/
/*7284*/        OPC_EmitConvertToTarget, 0,
/*7286*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*7289*/        OPC_EmitNode, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*7297*/        OPC_EmitConvertToTarget, 0,
/*7299*/        OPC_EmitNodeXForm, 1, 4, // LO16
/*7302*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (ORI:i32 (LIS:i32 (HI16:i32 (imm:i32):$imm)), (LO16:i32 (imm:i32):$imm))
/*7311*/      0, /*End of Scope*/
            /*SwitchType*/ 31,  MVT::i64,// ->7345
/*7314*/      OPC_Scope, 12, /*->7328*/ // 2 children in Scope
/*7316*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*7318*/        OPC_EmitConvertToTarget, 0,
/*7320*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (imm:i64)<<P:Predicate_immSExt16>>:$imm - Complexity = 4
                // Dst: (LI8:i64 (imm:i64):$imm)
/*7328*/      /*Scope*/ 15, /*->7344*/
/*7329*/        OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*7331*/        OPC_EmitConvertToTarget, 0,
/*7333*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*7336*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (LIS8:i64 (HI16:i64 (imm:i64):$imm))
/*7344*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(PPCISD::SHL),// ->7377
/*7349*/    OPC_RecordChild0, // #0 = $rS
/*7350*/    OPC_RecordChild1, // #1 = $rB
/*7351*/    OPC_CheckChild1Type, MVT::i32,
/*7353*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7365
/*7356*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SLW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCshl:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SLW:i32 i32:i32:$rS, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->7376
/*7367*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SLD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCshl:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SLD:i64 i64:i64:$rS, i32:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(PPCISD::SRL),// ->7408
/*7380*/    OPC_RecordChild0, // #0 = $rS
/*7381*/    OPC_RecordChild1, // #1 = $rB
/*7382*/    OPC_CheckChild1Type, MVT::i32,
/*7384*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7396
/*7387*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsrl:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SRW:i32 i32:i32:$rS, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->7407
/*7398*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsrl:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SRD:i64 i64:i64:$rS, i32:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 30,  TARGET_VAL(PPCISD::SRA),// ->7441
/*7411*/    OPC_RecordChild0, // #0 = $rS
/*7412*/    OPC_RecordChild1, // #1 = $rB
/*7413*/    OPC_CheckChild1Type, MVT::i32,
/*7415*/    OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->7428
/*7418*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRAW), 0,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsra:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SRAW:i32:i32 i32:i32:$rS, i32:i32:$rB)
            /*SwitchType*/ 10,  MVT::i64,// ->7440
/*7430*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRAD), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsra:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SRAD:i64:i32 i64:i64:$rS, i32:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::CTLZ),// ->7467
/*7444*/    OPC_RecordChild0, // #0 = $rS
/*7445*/    OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->7456
/*7448*/      OPC_MorphNodeTo, TARGET_VAL(PPC::CNTLZW), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctlz:i32 i32:i32:$rS) - Complexity = 3
              // Dst: (CNTLZW:i32 i32:i32:$rS)
            /*SwitchType*/ 8,  MVT::i64,// ->7466
/*7458*/      OPC_MorphNodeTo, TARGET_VAL(PPC::CNTLZD), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (ctlz:i64 i64:i64:$rS) - Complexity = 3
              // Dst: (CNTLZD:i64 i64:i64:$rS)
            0, // EndSwitchType
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->7539
/*7470*/    OPC_RecordChild0, // #0 = $rS
/*7471*/    OPC_MoveChild, 1,
/*7473*/    OPC_Scope, 25, /*->7500*/ // 3 children in Scope
/*7475*/      OPC_CheckValueType, MVT::i8,
/*7477*/      OPC_MoveParent,
/*7478*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->7489
/*7481*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSB), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 i32:i32:$rS, i8:Other) - Complexity = 3
                // Dst: (EXTSB:i32 i32:i32:$rS)
              /*SwitchType*/ 8,  MVT::i64,// ->7499
/*7491*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSB8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 i64:i64:$rS, i8:Other) - Complexity = 3
                // Dst: (EXTSB8:i64 i64:i64:$rS)
              0, // EndSwitchType
/*7500*/    /*Scope*/ 25, /*->7526*/
/*7501*/      OPC_CheckValueType, MVT::i16,
/*7503*/      OPC_MoveParent,
/*7504*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->7515
/*7507*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSH), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 i32:i32:$rS, i16:Other) - Complexity = 3
                // Dst: (EXTSH:i32 i32:i32:$rS)
              /*SwitchType*/ 8,  MVT::i64,// ->7525
/*7517*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSH8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 i64:i64:$rS, i16:Other) - Complexity = 3
                // Dst: (EXTSH8:i64 i64:i64:$rS)
              0, // EndSwitchType
/*7526*/    /*Scope*/ 11, /*->7538*/
/*7527*/      OPC_CheckValueType, MVT::i32,
/*7529*/      OPC_MoveParent,
/*7530*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i64 i64:i64:$rS, i32:Other) - Complexity = 3
              // Dst: (EXTSW:i64 i64:i64:$rS)
/*7538*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::SDIV),// ->7568
/*7542*/    OPC_RecordChild0, // #0 = $rA
/*7543*/    OPC_RecordChild1, // #1 = $rB
/*7544*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7556
/*7547*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (DIVW:i32 i32:i32:$rA, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->7567
/*7558*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (DIVD:i64 i64:i64:$rA, i64:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::UDIV),// ->7597
/*7571*/    OPC_RecordChild0, // #0 = $rA
/*7572*/    OPC_RecordChild1, // #1 = $rB
/*7573*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7585
/*7576*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVWU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (DIVWU:i32 i32:i32:$rA, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->7596
/*7587*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVDU), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (DIVDU:i64 i64:i64:$rA, i64:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::MULHS),// ->7626
/*7600*/    OPC_RecordChild0, // #0 = $rA
/*7601*/    OPC_RecordChild1, // #1 = $rB
/*7602*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7614
/*7605*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mulhs:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (MULHW:i32 i32:i32:$rA, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->7625
/*7616*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mulhs:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (MULHD:i64 i64:i64:$rA, i64:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::MULHU),// ->7655
/*7629*/    OPC_RecordChild0, // #0 = $rA
/*7630*/    OPC_RecordChild1, // #1 = $rB
/*7631*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7643
/*7634*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHWU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mulhu:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (MULHWU:i32 i32:i32:$rA, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->7654
/*7645*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHDU), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mulhu:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (MULHDU:i64 i64:i64:$rA, i64:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::READCYCLECOUNTER),// ->7669
/*7658*/    OPC_RecordNode,   // #0 = 'readcyclecounter' chained node
/*7659*/    OPC_CheckType, MVT::i64,
/*7661*/    OPC_EmitMergeInputChains1_0,
/*7662*/    OPC_MorphNodeTo, TARGET_VAL(PPC::MFTB8), 0|OPFL_Chain,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/, 
            // Src: (readcyclecounter:i64) - Complexity = 3
            // Dst: (MFTB8:i64)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::SIGN_EXTEND),// ->7685
/*7672*/    OPC_RecordChild0, // #0 = $rS
/*7673*/    OPC_CheckChild0Type, MVT::i32,
/*7675*/    OPC_CheckType, MVT::i64,
/*7677*/    OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW_32_64), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 i32:i32:$rS) - Complexity = 3
            // Dst: (EXTSW_32_64:i64 i32:i32:$rS)
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::CTPOP),// ->7711
/*7688*/    OPC_RecordChild0, // #0 = $rS
/*7689*/    OPC_SwitchType /*2 cases */, 8,  MVT::i64,// ->7700
/*7692*/      OPC_MorphNodeTo, TARGET_VAL(PPC::POPCNTD), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (ctpop:i64 i64:i64:$rS) - Complexity = 3
              // Dst: (POPCNTD:i64 i64:i64:$rS)
            /*SwitchType*/ 8,  MVT::i32,// ->7710
/*7702*/      OPC_MorphNodeTo, TARGET_VAL(PPC::POPCNTW), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctpop:i32 i32:i32:$rS) - Complexity = 3
              // Dst: (POPCNTW:i32 i32:i32:$rS)
            0, // EndSwitchType
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::TRUNCATE),// ->7729
/*7714*/    OPC_RecordChild0, // #0 = $in
/*7715*/    OPC_CheckType, MVT::i32,
/*7717*/    OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*7720*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (trunc:i32 i64:i64:$in) - Complexity = 3
            // Dst: (EXTRACT_SUBREG:i32 ?:i64:$in, sub_32:i32)
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::ANY_EXTEND),// ->7757
/*7732*/    OPC_RecordChild0, // #0 = $in
/*7733*/    OPC_CheckChild0Type, MVT::i32,
/*7735*/    OPC_CheckType, MVT::i64,
/*7737*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*7744*/    OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*7747*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
            // Src: (anyext:i64 i32:i32:$in) - Complexity = 3
            // Dst: (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), ?:i32:$in, sub_32:i32)
          /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::ZERO_EXTEND),// ->7801
/*7760*/    OPC_RecordChild0, // #0 = $in
/*7761*/    OPC_CheckChild0Type, MVT::i32,
/*7763*/    OPC_CheckType, MVT::i64,
/*7765*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*7772*/    OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*7775*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2,  // Results = #3
/*7785*/    OPC_EmitInteger, MVT::i32, 0, 
/*7788*/    OPC_EmitInteger, MVT::i32, 32, 
/*7791*/    OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 5, 
            // Src: (zext:i64 i32:i32:$in) - Complexity = 3
            // Dst: (RLDICL:i64 (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), ?:i32:$in, sub_32:i32), 0:i32, 32:i32)
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::LFIWAX),// ->7819
/*7804*/    OPC_RecordNode,   // #0 = 'PPClfiwax' chained node
/*7805*/    OPC_RecordChild1, // #1 = $src
/*7806*/    OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*7809*/    OPC_EmitMergeInputChains1_0,
/*7810*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LFIWAX), 0|OPFL_Chain,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
            // Src: (PPClfiwax:f64 xoaddr:iPTR:$src) - Complexity = 12
            // Dst: (LFIWAX:f64 xoaddr:iPTR:$src)
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::LFIWZX),// ->7837
/*7822*/    OPC_RecordNode,   // #0 = 'PPClfiwzx' chained node
/*7823*/    OPC_RecordChild1, // #1 = $src
/*7824*/    OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*7827*/    OPC_EmitMergeInputChains1_0,
/*7828*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LFIWZX), 0|OPFL_Chain,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
            // Src: (PPClfiwzx:f64 xoaddr:iPTR:$src) - Complexity = 12
            // Dst: (LFIWZX:f64 xoaddr:iPTR:$src)
          /*SwitchOpcode*/ 31|128,1/*159*/,  TARGET_VAL(ISD::FNEG),// ->8000
/*7841*/    OPC_Scope, 102, /*->7945*/ // 3 children in Scope
/*7843*/      OPC_MoveChild, 0,
/*7845*/      OPC_SwitchOpcode /*2 cases */, 68,  TARGET_VAL(ISD::FMA),// ->7917
/*7849*/        OPC_RecordChild0, // #0 = $FRA
/*7850*/        OPC_RecordChild1, // #1 = $FRC
/*7851*/        OPC_Scope, 34, /*->7887*/ // 2 children in Scope
/*7853*/          OPC_MoveChild, 2,
/*7855*/          OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*7858*/          OPC_RecordChild0, // #2 = $FRB
/*7859*/          OPC_MoveParent,
/*7860*/          OPC_MoveParent,
/*7861*/          OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->7874
/*7864*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f64 (fma:f64 f64:f64:$FRA, f64:f64:$FRC, (fneg:f64 f64:f64:$FRB))) - Complexity = 9
                    // Dst: (FNMSUB:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
                  /*SwitchType*/ 10,  MVT::f32,// ->7886
/*7876*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f32 (fma:f32 f32:f32:$FRA, f32:f32:$FRC, (fneg:f32 f32:f32:$FRB))) - Complexity = 9
                    // Dst: (FNMSUBS:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)
                  0, // EndSwitchType
/*7887*/        /*Scope*/ 28, /*->7916*/
/*7888*/          OPC_RecordChild2, // #2 = $FRB
/*7889*/          OPC_MoveParent,
/*7890*/          OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->7903
/*7893*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADD), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f64 (fma:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)) - Complexity = 6
                    // Dst: (FNMADD:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
                  /*SwitchType*/ 10,  MVT::f32,// ->7915
/*7905*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADDS), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f32 (fma:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)) - Complexity = 6
                    // Dst: (FNMADDS:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)
                  0, // EndSwitchType
/*7916*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::FABS),// ->7944
/*7920*/        OPC_RecordChild0, // #0 = $frB
/*7921*/        OPC_MoveParent,
/*7922*/        OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->7933
/*7925*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNABSS), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (fneg:f32 (fabs:f32 f32:f32:$frB)) - Complexity = 6
                  // Dst: (FNABSS:f32 f32:f32:$frB)
                /*SwitchType*/ 8,  MVT::f64,// ->7943
/*7935*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNABSD), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                  // Src: (fneg:f64 (fabs:f64 f64:f64:$frB)) - Complexity = 6
                  // Dst: (FNABSD:f64 f64:f64:$frB)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*7945*/    /*Scope*/ 23, /*->7969*/
/*7946*/      OPC_RecordChild0, // #0 = $frB
/*7947*/      OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->7958
/*7950*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FNEGS), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 f32:f32:$frB) - Complexity = 3
                // Dst: (FNEGS:f32 f32:f32:$frB)
              /*SwitchType*/ 8,  MVT::f64,// ->7968
/*7960*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FNEGD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 f64:f64:$frB) - Complexity = 3
                // Dst: (FNEGD:f64 f64:f64:$frB)
              0, // EndSwitchType
/*7969*/    /*Scope*/ 29, /*->7999*/
/*7970*/      OPC_MoveChild, 0,
/*7972*/      OPC_CheckOpcode, TARGET_VAL(ISD::FMA),
/*7975*/      OPC_RecordChild0, // #0 = $vA
/*7976*/      OPC_RecordChild1, // #1 = $vC
/*7977*/      OPC_MoveChild, 2,
/*7979*/      OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*7982*/      OPC_RecordChild0, // #2 = $vB
/*7983*/      OPC_MoveParent,
/*7984*/      OPC_MoveParent,
/*7985*/      OPC_CheckType, MVT::v4f32,
/*7987*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7989*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fneg:v4f32 (fma:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vC, (fneg:v4f32 v4f32:v4f32:$vB))) - Complexity = 9
              // Dst: (VNMSUBFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vC, v4f32:v4f32:$vB)
/*7999*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 44|128,1/*172*/,  TARGET_VAL(ISD::FMA),// ->8176
/*8004*/    OPC_Scope, 35, /*->8041*/ // 5 children in Scope
/*8006*/      OPC_RecordChild0, // #0 = $FRA
/*8007*/      OPC_RecordChild1, // #1 = $FRC
/*8008*/      OPC_MoveChild, 2,
/*8010*/      OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*8013*/      OPC_RecordChild0, // #2 = $FRB
/*8014*/      OPC_MoveParent,
/*8015*/      OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->8028
/*8018*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FMSUB), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f64 f64:f64:$FRA, f64:f64:$FRC, (fneg:f64 f64:f64:$FRB)) - Complexity = 6
                // Dst: (FMSUB:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
              /*SwitchType*/ 10,  MVT::f32,// ->8040
/*8030*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FMSUBS), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f32 f32:f32:$FRA, f32:f32:$FRC, (fneg:f32 f32:f32:$FRB)) - Complexity = 6
                // Dst: (FMSUBS:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)
              0, // EndSwitchType
/*8041*/    /*Scope*/ 21, /*->8063*/
/*8042*/      OPC_MoveChild, 0,
/*8044*/      OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*8047*/      OPC_RecordChild0, // #0 = $A
/*8048*/      OPC_MoveParent,
/*8049*/      OPC_RecordChild1, // #1 = $C
/*8050*/      OPC_RecordChild2, // #2 = $B
/*8051*/      OPC_CheckType, MVT::f64,
/*8053*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fma:f64 (fneg:f64 f64:f64:$A), f64:f64:$C, f64:f64:$B) - Complexity = 6
              // Dst: (FNMSUB:f64 ?:f64:$A, ?:f64:$C, ?:f64:$B)
/*8063*/    /*Scope*/ 21, /*->8085*/
/*8064*/      OPC_RecordChild0, // #0 = $A
/*8065*/      OPC_MoveChild, 1,
/*8067*/      OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*8070*/      OPC_RecordChild0, // #1 = $C
/*8071*/      OPC_MoveParent,
/*8072*/      OPC_RecordChild2, // #2 = $B
/*8073*/      OPC_CheckType, MVT::f64,
/*8075*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fma:f64 f64:f64:$A, (fneg:f64 f64:f64:$C), f64:f64:$B) - Complexity = 6
              // Dst: (FNMSUB:f64 ?:f64:$A, ?:f64:$C, ?:f64:$B)
/*8085*/    /*Scope*/ 21, /*->8107*/
/*8086*/      OPC_MoveChild, 0,
/*8088*/      OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*8091*/      OPC_RecordChild0, // #0 = $A
/*8092*/      OPC_MoveParent,
/*8093*/      OPC_RecordChild1, // #1 = $C
/*8094*/      OPC_RecordChild2, // #2 = $B
/*8095*/      OPC_CheckType, MVT::f32,
/*8097*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fma:f32 (fneg:f32 f32:f32:$A), f32:f32:$C, f32:f32:$B) - Complexity = 6
              // Dst: (FNMSUBS:f32 ?:f32:$A, ?:f32:$C, ?:f32:$B)
/*8107*/    /*Scope*/ 67, /*->8175*/
/*8108*/      OPC_RecordChild0, // #0 = $A
/*8109*/      OPC_Scope, 20, /*->8131*/ // 2 children in Scope
/*8111*/        OPC_MoveChild, 1,
/*8113*/        OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*8116*/        OPC_RecordChild0, // #1 = $C
/*8117*/        OPC_MoveParent,
/*8118*/        OPC_RecordChild2, // #2 = $B
/*8119*/        OPC_CheckType, MVT::f32,
/*8121*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f32 f32:f32:$A, (fneg:f32 f32:f32:$C), f32:f32:$B) - Complexity = 6
                // Dst: (FNMSUBS:f32 ?:f32:$A, ?:f32:$C, ?:f32:$B)
/*8131*/      /*Scope*/ 42, /*->8174*/
/*8132*/        OPC_RecordChild1, // #1 = $FRC
/*8133*/        OPC_RecordChild2, // #2 = $FRB
/*8134*/        OPC_SwitchType /*3 cases */, 10,  MVT::f64,// ->8147
/*8137*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FMADD), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fma:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB) - Complexity = 3
                  // Dst: (FMADD:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
                /*SwitchType*/ 10,  MVT::f32,// ->8159
/*8149*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FMADDS), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fma:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB) - Complexity = 3
                  // Dst: (FMADDS:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)
                /*SwitchType*/ 12,  MVT::v4f32,// ->8173
/*8161*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8163*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                      1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fma:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vC, v4f32:v4f32:$vB) - Complexity = 3
                  // Dst: (VMADDFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vC, v4f32:v4f32:$vB)
                0, // EndSwitchType
/*8174*/      0, /*End of Scope*/
/*8175*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIWZ),// ->8190
/*8179*/    OPC_RecordChild0, // #0 = $frB
/*8180*/    OPC_CheckType, MVT::f64,
/*8182*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIWZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctiwz:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCTIWZ:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::FP_ROUND),// ->8202
/*8193*/    OPC_RecordChild0, // #0 = $frB
/*8194*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FRSP), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (fround:f32 f64:f64:$frB) - Complexity = 3
            // Dst: (FRSP:f32 f64:f64:$frB)
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::FNEARBYINT),// ->8240
/*8205*/    OPC_RecordChild0, // #0 = $frB
/*8206*/    OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->8217
/*8209*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FRIND), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fnearbyint:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRIND:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->8227
/*8219*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FRINS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fnearbyint:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRINS:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->8239
/*8229*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8231*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIN), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (fnearbyint:v4f32 v4f32:v4f32:$vA) - Complexity = 3
              // Dst: (VRFIN:v4f32 ?:v4f32:$vA)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::FCEIL),// ->8278
/*8243*/    OPC_RecordChild0, // #0 = $frB
/*8244*/    OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->8255
/*8247*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FRIPD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fceil:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRIPD:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->8265
/*8257*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FRIPS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fceil:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRIPS:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->8277
/*8267*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8269*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (fceil:v4f32 v4f32:v4f32:$vA) - Complexity = 3
              // Dst: (VRFIP:v4f32 ?:v4f32:$vA)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::FTRUNC),// ->8316
/*8281*/    OPC_RecordChild0, // #0 = $frB
/*8282*/    OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->8293
/*8285*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FRIZD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (ftrunc:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRIZD:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->8303
/*8295*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FRIZS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (ftrunc:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRIZS:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->8315
/*8305*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8307*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIZ), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (ftrunc:v4f32 v4f32:v4f32:$vA) - Complexity = 3
              // Dst: (VRFIZ:v4f32 ?:v4f32:$vA)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::FFLOOR),// ->8354
/*8319*/    OPC_RecordChild0, // #0 = $frB
/*8320*/    OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->8331
/*8323*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FRIMD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (ffloor:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRIMD:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->8341
/*8333*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FRIMS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (ffloor:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRIMS:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->8353
/*8343*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8345*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIM), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (ffloor:v4f32 v4f32:v4f32:$vA) - Complexity = 3
              // Dst: (VRFIM:v4f32 ?:v4f32:$vA)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FSQRT),// ->8380
/*8357*/    OPC_RecordChild0, // #0 = $frB
/*8358*/    OPC_SwitchType /*2 cases */, 8,  MVT::f64,// ->8369
/*8361*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSQRT), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FSQRT:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->8379
/*8371*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSQRTS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FSQRTS:f32 f32:f32:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FABS),// ->8406
/*8383*/    OPC_RecordChild0, // #0 = $frB
/*8384*/    OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->8395
/*8387*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FABSS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FABSS:f32 f32:f32:$frB)
            /*SwitchType*/ 8,  MVT::f64,// ->8405
/*8397*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FABSD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fabs:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FABSD:f64 f64:f64:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(PPCISD::FRE),// ->8444
/*8409*/    OPC_RecordChild0, // #0 = $frB
/*8410*/    OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->8421
/*8413*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FRE), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (PPCfre:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRE:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->8431
/*8423*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FRES), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (PPCfre:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRES:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->8443
/*8433*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8435*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VREFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (PPCfre:v4f32 v4f32:v4f32:$A) - Complexity = 3
              // Dst: (VREFP:v4f32 ?:v4f32:$A)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(PPCISD::FRSQRTE),// ->8482
/*8447*/    OPC_RecordChild0, // #0 = $frB
/*8448*/    OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->8459
/*8451*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FRSQRTE), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (PPCfrsqrte:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRSQRTE:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->8469
/*8461*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FRSQRTES), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (PPCfrsqrte:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRSQRTES:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->8481
/*8471*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8473*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRSQRTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (PPCfrsqrte:v4f32 v4f32:v4f32:$A) - Complexity = 3
              // Dst: (VRSQRTEFP:v4f32 ?:v4f32:$A)
            0, // EndSwitchType
          /*SwitchOpcode*/ 7,  TARGET_VAL(PPCISD::MFFS),// ->8492
/*8485*/    OPC_MorphNodeTo, TARGET_VAL(PPC::MFFS), 0,
                1/*#VTs*/, MVT::f64, 0/*#Ops*/, 
            // Src: (PPCmffs:f64) - Complexity = 3
            // Dst: (MFFS:f64)
          /*SwitchOpcode*/ 29,  TARGET_VAL(PPCISD::FSEL),// ->8524
/*8495*/    OPC_RecordChild0, // #0 = $FRA
/*8496*/    OPC_RecordChild1, // #1 = $FRC
/*8497*/    OPC_RecordChild2, // #2 = $FRB
/*8498*/    OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->8511
/*8501*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSELD), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (PPCfsel:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB) - Complexity = 3
              // Dst: (FSELD:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
            /*SwitchType*/ 10,  MVT::f32,// ->8523
/*8513*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSELS), 0,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (PPCfsel:f32 f64:f64:$FRA, f32:f32:$FRC, f32:f32:$FRB) - Complexity = 3
              // Dst: (FSELS:f32 f64:f64:$FRA, f32:f32:$FRC, f32:f32:$FRB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FADD),// ->8566
/*8527*/    OPC_RecordChild0, // #0 = $FRA
/*8528*/    OPC_RecordChild1, // #1 = $FRB
/*8529*/    OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->8541
/*8532*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FADD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f64 f64:f64:$FRA, f64:f64:$FRB) - Complexity = 3
              // Dst: (FADD:f64 f64:f64:$FRA, f64:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->8552
/*8543*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FADDS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f32 f32:f32:$FRA, f32:f32:$FRB) - Complexity = 3
              // Dst: (FADDS:f32 f32:f32:$FRA, f32:f32:$FRB)
            /*SwitchType*/ 11,  MVT::v4f32,// ->8565
/*8554*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8556*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 3
              // Dst: (VADDFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::FDIV),// ->8595
/*8569*/    OPC_RecordChild0, // #0 = $FRA
/*8570*/    OPC_RecordChild1, // #1 = $FRB
/*8571*/    OPC_SwitchType /*2 cases */, 9,  MVT::f64,// ->8583
/*8574*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FDIV), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f64 f64:f64:$FRA, f64:f64:$FRB) - Complexity = 3
              // Dst: (FDIV:f64 f64:f64:$FRA, f64:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->8594
/*8585*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FDIVS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 f32:f32:$FRA, f32:f32:$FRB) - Complexity = 3
              // Dst: (FDIVS:f32 f32:f32:$FRA, f32:f32:$FRB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 63,  TARGET_VAL(ISD::FMUL),// ->8661
/*8598*/    OPC_RecordChild0, // #0 = $FRA
/*8599*/    OPC_RecordChild1, // #1 = $FRC
/*8600*/    OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->8612
/*8603*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FMUL), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f64 f64:f64:$FRA, f64:f64:$FRC) - Complexity = 3
              // Dst: (FMUL:f64 f64:f64:$FRA, f64:f64:$FRC)
            /*SwitchType*/ 9,  MVT::f32,// ->8623
/*8614*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FMULS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f32 f32:f32:$FRA, f32:f32:$FRC) - Complexity = 3
              // Dst: (FMULS:f32 f32:f32:$FRA, f32:f32:$FRC)
            /*SwitchType*/ 35,  MVT::v4f32,// ->8660
/*8625*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8627*/      OPC_EmitNode, TARGET_VAL(PPC::V_SETALLONES), 0,
                  1/*#VTs*/, MVT::v16i8, 0/*#Ops*/,  // Results = #2
/*8634*/      OPC_EmitNode, TARGET_VAL(PPC::V_SETALLONES), 0,
                  1/*#VTs*/, MVT::v16i8, 0/*#Ops*/,  // Results = #3
/*8641*/      OPC_EmitNode, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*8650*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 4, 
              // Src: (fmul:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 3
              // Dst: (VMADDFP:v4f32 ?:v4f32:$vA, ?:v4f32:$vB, (VSLW:v4i32 (V_SETALLONES:v16i8), (V_SETALLONES:v16i8)))
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FSUB),// ->8703
/*8664*/    OPC_RecordChild0, // #0 = $FRA
/*8665*/    OPC_RecordChild1, // #1 = $FRB
/*8666*/    OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->8678
/*8669*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSUB), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f64 f64:f64:$FRA, f64:f64:$FRB) - Complexity = 3
              // Dst: (FSUB:f64 f64:f64:$FRA, f64:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->8689
/*8680*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSUBS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f32 f32:f32:$FRA, f32:f32:$FRB) - Complexity = 3
              // Dst: (FSUBS:f32 f32:f32:$FRA, f32:f32:$FRB)
            /*SwitchType*/ 11,  MVT::v4f32,// ->8702
/*8691*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8693*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 3
              // Dst: (VSUBFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FP_EXTEND),// ->8719
/*8706*/    OPC_RecordChild0, // #0 = $src
/*8707*/    OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*8710*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (fextend:f64 f32:f32:$src) - Complexity = 3
            // Dst: (COPY_TO_REGCLASS:f64 ?:f32:$src, F8RC:i32)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCFID),// ->8733
/*8722*/    OPC_RecordChild0, // #0 = $frB
/*8723*/    OPC_CheckType, MVT::f64,
/*8725*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCFID), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfcfid:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCFID:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIDZ),// ->8747
/*8736*/    OPC_RecordChild0, // #0 = $frB
/*8737*/    OPC_CheckType, MVT::f64,
/*8739*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIDZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctidz:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCTIDZ:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCFIDU),// ->8761
/*8750*/    OPC_RecordChild0, // #0 = $frB
/*8751*/    OPC_CheckType, MVT::f64,
/*8753*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCFIDU), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfcfidu:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCFIDU:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::FCFIDS),// ->8773
/*8764*/    OPC_RecordChild0, // #0 = $frB
/*8765*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCFIDS), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (PPCfcfids:f32 f64:f64:$frB) - Complexity = 3
            // Dst: (FCFIDS:f32 f64:f64:$frB)
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::FCFIDUS),// ->8785
/*8776*/    OPC_RecordChild0, // #0 = $frB
/*8777*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCFIDUS), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (PPCfcfidus:f32 f64:f64:$frB) - Complexity = 3
            // Dst: (FCFIDUS:f32 f64:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIDUZ),// ->8799
/*8788*/    OPC_RecordChild0, // #0 = $frB
/*8789*/    OPC_CheckType, MVT::f64,
/*8791*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIDUZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctiduz:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCTIDUZ:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIWUZ),// ->8813
/*8802*/    OPC_RecordChild0, // #0 = $frB
/*8803*/    OPC_CheckType, MVT::f64,
/*8805*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIWUZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctiwuz:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCTIWUZ:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FRINT),// ->8839
/*8816*/    OPC_RecordChild0, // #0 = $frB
/*8817*/    OPC_SwitchType /*2 cases */, 8,  MVT::f64,// ->8828
/*8820*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FRINDrint), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (frint:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRINDrint:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->8838
/*8830*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FRINSrint), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (frint:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRINSrint:f32 f32:f32:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(PPCISD::FADDRTZ),// ->8855
/*8842*/    OPC_RecordChild0, // #0 = $FRA
/*8843*/    OPC_RecordChild1, // #1 = $FRB
/*8844*/    OPC_CheckType, MVT::f64,
/*8846*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FADDrtz), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCfaddrtz:f64 f64:f64:$FRA, f64:f64:$FRB) - Complexity = 3
            // Dst: (FADDrtz:f64 f64:f64:$FRA, f64:f64:$FRB)
          /*SwitchOpcode*/ 125,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->8983
/*8858*/    OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*8859*/    OPC_MoveChild, 1,
/*8861*/    OPC_Scope, 20, /*->8883*/ // 6 children in Scope
/*8863*/      OPC_CheckInteger, 58|128,11/*1466*/, 
/*8866*/      OPC_MoveParent,
/*8867*/      OPC_RecordChild2, // #1 = $src
/*8868*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8870*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*8873*/      OPC_EmitMergeInputChains1_0,
/*8874*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEBX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v16i8 1466:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEBX:v16i8 xoaddr:iPTR:$src)
/*8883*/    /*Scope*/ 20, /*->8904*/
/*8884*/      OPC_CheckInteger, 59|128,11/*1467*/, 
/*8887*/      OPC_MoveParent,
/*8888*/      OPC_RecordChild2, // #1 = $src
/*8889*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8891*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*8894*/      OPC_EmitMergeInputChains1_0,
/*8895*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEHX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v8i16 1467:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEHX:v8i16 xoaddr:iPTR:$src)
/*8904*/    /*Scope*/ 20, /*->8925*/
/*8905*/      OPC_CheckInteger, 60|128,11/*1468*/, 
/*8908*/      OPC_MoveParent,
/*8909*/      OPC_RecordChild2, // #1 = $src
/*8910*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8912*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*8915*/      OPC_EmitMergeInputChains1_0,
/*8916*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEWX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 1468:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEWX:v4i32 xoaddr:iPTR:$src)
/*8925*/    /*Scope*/ 20, /*->8946*/
/*8926*/      OPC_CheckInteger, 63|128,11/*1471*/, 
/*8929*/      OPC_MoveParent,
/*8930*/      OPC_RecordChild2, // #1 = $src
/*8931*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8933*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*8936*/      OPC_EmitMergeInputChains1_0,
/*8937*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 1471:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVX:v4i32 xoaddr:iPTR:$src)
/*8946*/    /*Scope*/ 20, /*->8967*/
/*8947*/      OPC_CheckInteger, 64|128,11/*1472*/, 
/*8950*/      OPC_MoveParent,
/*8951*/      OPC_RecordChild2, // #1 = $src
/*8952*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8954*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*8957*/      OPC_EmitMergeInputChains1_0,
/*8958*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVXL), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 1472:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVXL:v4i32 xoaddr:iPTR:$src)
/*8967*/    /*Scope*/ 14, /*->8982*/
/*8968*/      OPC_CheckInteger, 65|128,11/*1473*/, 
/*8971*/      OPC_MoveParent,
/*8972*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8974*/      OPC_EmitMergeInputChains1_0,
/*8975*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MFVSCR), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v8i16, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:v8i16 1473:iPTR) - Complexity = 8
              // Dst: (MFVSCR:v8i16)
/*8982*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 48|128,15/*1968*/,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->10955
/*8987*/    OPC_MoveChild, 0,
/*8989*/    OPC_Scope, 19, /*->9010*/ // 103 children in Scope
/*8991*/      OPC_CheckInteger, 61|128,11/*1469*/, 
/*8994*/      OPC_MoveParent,
/*8995*/      OPC_RecordChild1, // #0 = $src
/*8996*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8998*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddrIdxOnly:$src #1 #2
/*9001*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVSL), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_wo_chain:v16i8 1469:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVSL:v16i8 xoaddr:iPTR:$src)
/*9010*/    /*Scope*/ 19, /*->9030*/
/*9011*/      OPC_CheckInteger, 62|128,11/*1470*/, 
/*9014*/      OPC_MoveParent,
/*9015*/      OPC_RecordChild1, // #0 = $src
/*9016*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9018*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddrIdxOnly:$src #1 #2
/*9021*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVSR), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_wo_chain:v16i8 1470:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVSR:v16i8 xoaddr:iPTR:$src)
/*9030*/    /*Scope*/ 44, /*->9075*/
/*9031*/      OPC_CheckInteger, 114|128,11/*1522*/, 
/*9034*/      OPC_MoveParent,
/*9035*/      OPC_RecordChild1, // #0 = $vB
/*9036*/      OPC_Scope, 15, /*->9053*/ // 2 children in Scope
/*9038*/        OPC_MoveChild, 2,
/*9040*/        OPC_CheckInteger, 0, 
/*9042*/        OPC_MoveParent,
/*9043*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9045*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS_0), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1522:iPTR, v4f32:v4f32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCTUXS_0:v4i32 v4f32:v4f32:$vB)
/*9053*/      /*Scope*/ 20, /*->9074*/
/*9054*/        OPC_RecordChild2, // #1 = $UIMM
/*9055*/        OPC_MoveChild, 2,
/*9057*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9060*/        OPC_MoveParent,
/*9061*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9063*/        OPC_EmitConvertToTarget, 1,
/*9065*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1522:iPTR, v4f32:v4f32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCTUXS:v4i32 (imm:i32):$UIMM, v4f32:v4f32:$vB)
/*9074*/      0, /*End of Scope*/
/*9075*/    /*Scope*/ 44, /*->9120*/
/*9076*/      OPC_CheckInteger, 113|128,11/*1521*/, 
/*9079*/      OPC_MoveParent,
/*9080*/      OPC_RecordChild1, // #0 = $vB
/*9081*/      OPC_Scope, 15, /*->9098*/ // 2 children in Scope
/*9083*/        OPC_MoveChild, 2,
/*9085*/        OPC_CheckInteger, 0, 
/*9087*/        OPC_MoveParent,
/*9088*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9090*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS_0), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1521:iPTR, v4f32:v4f32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCTSXS_0:v4i32 v4f32:v4f32:$vB)
/*9098*/      /*Scope*/ 20, /*->9119*/
/*9099*/        OPC_RecordChild2, // #1 = $UIMM
/*9100*/        OPC_MoveChild, 2,
/*9102*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9105*/        OPC_MoveParent,
/*9106*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9108*/        OPC_EmitConvertToTarget, 1,
/*9110*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1521:iPTR, v4f32:v4f32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCTSXS:v4i32 (imm:i32):$UIMM, v4f32:v4f32:$vB)
/*9119*/      0, /*End of Scope*/
/*9120*/    /*Scope*/ 19, /*->9140*/
/*9121*/      OPC_CheckInteger, 125|128,11/*1533*/, 
/*9124*/      OPC_MoveParent,
/*9125*/      OPC_RecordChild1, // #0 = $vA
/*9126*/      OPC_RecordChild2, // #1 = $vB
/*9127*/      OPC_RecordChild3, // #2 = $vC
/*9128*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9130*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMHADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 1533:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC) - Complexity = 8
              // Dst: (VMHADDSHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC)
/*9140*/    /*Scope*/ 19, /*->9160*/
/*9141*/      OPC_CheckInteger, 126|128,11/*1534*/, 
/*9144*/      OPC_MoveParent,
/*9145*/      OPC_RecordChild1, // #0 = $vA
/*9146*/      OPC_RecordChild2, // #1 = $vB
/*9147*/      OPC_RecordChild3, // #2 = $vC
/*9148*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9150*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMHRADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 1534:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC) - Complexity = 8
              // Dst: (VMHRADDSHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC)
/*9160*/    /*Scope*/ 19, /*->9180*/
/*9161*/      OPC_CheckInteger, 6|128,12/*1542*/, 
/*9164*/      OPC_MoveParent,
/*9165*/      OPC_RecordChild1, // #0 = $vA
/*9166*/      OPC_RecordChild2, // #1 = $vB
/*9167*/      OPC_RecordChild3, // #2 = $vC
/*9168*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9170*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMLADDUHM), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 1542:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC) - Complexity = 8
              // Dst: (VMLADDUHM:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC)
/*9180*/    /*Scope*/ 19, /*->9200*/
/*9181*/      OPC_CheckInteger, 22|128,12/*1558*/, 
/*9184*/      OPC_MoveParent,
/*9185*/      OPC_RecordChild1, // #0 = $vA
/*9186*/      OPC_RecordChild2, // #1 = $vB
/*9187*/      OPC_RecordChild3, // #2 = $vC
/*9188*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9190*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPERM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1558:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB, v16i8:v16i8:$vC) - Complexity = 8
              // Dst: (VPERM:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, v16i8:v16i8:$vC)
/*9200*/    /*Scope*/ 19, /*->9220*/
/*9201*/      OPC_CheckInteger, 39|128,12/*1575*/, 
/*9204*/      OPC_MoveParent,
/*9205*/      OPC_RecordChild1, // #0 = $vA
/*9206*/      OPC_RecordChild2, // #1 = $vB
/*9207*/      OPC_RecordChild3, // #2 = $vC
/*9208*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9210*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSEL), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1575:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VSEL:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, v4i32:v4i32:$vC)
/*9220*/    /*Scope*/ 17, /*->9238*/
/*9221*/      OPC_CheckInteger, 72|128,11/*1480*/, 
/*9224*/      OPC_MoveParent,
/*9225*/      OPC_RecordChild1, // #0 = $vA
/*9226*/      OPC_RecordChild2, // #1 = $vB
/*9227*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9229*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDCUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1480:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VADDCUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*9238*/    /*Scope*/ 17, /*->9256*/
/*9239*/      OPC_CheckInteger, 73|128,11/*1481*/, 
/*9242*/      OPC_MoveParent,
/*9243*/      OPC_RecordChild1, // #0 = $vA
/*9244*/      OPC_RecordChild2, // #1 = $vB
/*9245*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9247*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1481:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VADDSBS:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9256*/    /*Scope*/ 17, /*->9274*/
/*9257*/      OPC_CheckInteger, 74|128,11/*1482*/, 
/*9260*/      OPC_MoveParent,
/*9261*/      OPC_RecordChild1, // #0 = $vA
/*9262*/      OPC_RecordChild2, // #1 = $vB
/*9263*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9265*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1482:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VADDSHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9274*/    /*Scope*/ 17, /*->9292*/
/*9275*/      OPC_CheckInteger, 75|128,11/*1483*/, 
/*9278*/      OPC_MoveParent,
/*9279*/      OPC_RecordChild1, // #0 = $vA
/*9280*/      OPC_RecordChild2, // #1 = $vB
/*9281*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9283*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1483:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VADDSWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*9292*/    /*Scope*/ 17, /*->9310*/
/*9293*/      OPC_CheckInteger, 76|128,11/*1484*/, 
/*9296*/      OPC_MoveParent,
/*9297*/      OPC_RecordChild1, // #0 = $vA
/*9298*/      OPC_RecordChild2, // #1 = $vB
/*9299*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9301*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1484:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VADDUBS:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9310*/    /*Scope*/ 17, /*->9328*/
/*9311*/      OPC_CheckInteger, 77|128,11/*1485*/, 
/*9314*/      OPC_MoveParent,
/*9315*/      OPC_RecordChild1, // #0 = $vA
/*9316*/      OPC_RecordChild2, // #1 = $vB
/*9317*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9319*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1485:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VADDUHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9328*/    /*Scope*/ 17, /*->9346*/
/*9329*/      OPC_CheckInteger, 78|128,11/*1486*/, 
/*9332*/      OPC_MoveParent,
/*9333*/      OPC_RecordChild1, // #0 = $vA
/*9334*/      OPC_RecordChild2, // #1 = $vB
/*9335*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9337*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1486:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VADDUWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*9346*/    /*Scope*/ 17, /*->9364*/
/*9347*/      OPC_CheckInteger, 79|128,11/*1487*/, 
/*9350*/      OPC_MoveParent,
/*9351*/      OPC_RecordChild1, // #0 = $vA
/*9352*/      OPC_RecordChild2, // #1 = $vB
/*9353*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9355*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1487:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VAVGSB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9364*/    /*Scope*/ 17, /*->9382*/
/*9365*/      OPC_CheckInteger, 80|128,11/*1488*/, 
/*9368*/      OPC_MoveParent,
/*9369*/      OPC_RecordChild1, // #0 = $vA
/*9370*/      OPC_RecordChild2, // #1 = $vB
/*9371*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9373*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1488:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VAVGSH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9382*/    /*Scope*/ 17, /*->9400*/
/*9383*/      OPC_CheckInteger, 81|128,11/*1489*/, 
/*9386*/      OPC_MoveParent,
/*9387*/      OPC_RecordChild1, // #0 = $vA
/*9388*/      OPC_RecordChild2, // #1 = $vB
/*9389*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9391*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1489:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VAVGSW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*9400*/    /*Scope*/ 17, /*->9418*/
/*9401*/      OPC_CheckInteger, 82|128,11/*1490*/, 
/*9404*/      OPC_MoveParent,
/*9405*/      OPC_RecordChild1, // #0 = $vA
/*9406*/      OPC_RecordChild2, // #1 = $vB
/*9407*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9409*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1490:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VAVGUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9418*/    /*Scope*/ 17, /*->9436*/
/*9419*/      OPC_CheckInteger, 83|128,11/*1491*/, 
/*9422*/      OPC_MoveParent,
/*9423*/      OPC_RecordChild1, // #0 = $vA
/*9424*/      OPC_RecordChild2, // #1 = $vB
/*9425*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9427*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1491:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VAVGUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9436*/    /*Scope*/ 17, /*->9454*/
/*9437*/      OPC_CheckInteger, 84|128,11/*1492*/, 
/*9440*/      OPC_MoveParent,
/*9441*/      OPC_RecordChild1, // #0 = $vA
/*9442*/      OPC_RecordChild2, // #1 = $vB
/*9443*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9445*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1492:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VAVGUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*9454*/    /*Scope*/ 17, /*->9472*/
/*9455*/      OPC_CheckInteger, 119|128,11/*1527*/, 
/*9458*/      OPC_MoveParent,
/*9459*/      OPC_RecordChild1, // #0 = $vA
/*9460*/      OPC_RecordChild2, // #1 = $vB
/*9461*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9463*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1527:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMAXSB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9472*/    /*Scope*/ 17, /*->9490*/
/*9473*/      OPC_CheckInteger, 120|128,11/*1528*/, 
/*9476*/      OPC_MoveParent,
/*9477*/      OPC_RecordChild1, // #0 = $vA
/*9478*/      OPC_RecordChild2, // #1 = $vB
/*9479*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9481*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1528:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMAXSH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9490*/    /*Scope*/ 17, /*->9508*/
/*9491*/      OPC_CheckInteger, 121|128,11/*1529*/, 
/*9494*/      OPC_MoveParent,
/*9495*/      OPC_RecordChild1, // #0 = $vA
/*9496*/      OPC_RecordChild2, // #1 = $vB
/*9497*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9499*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1529:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VMAXSW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*9508*/    /*Scope*/ 17, /*->9526*/
/*9509*/      OPC_CheckInteger, 122|128,11/*1530*/, 
/*9512*/      OPC_MoveParent,
/*9513*/      OPC_RecordChild1, // #0 = $vA
/*9514*/      OPC_RecordChild2, // #1 = $vB
/*9515*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9517*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1530:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMAXUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9526*/    /*Scope*/ 17, /*->9544*/
/*9527*/      OPC_CheckInteger, 123|128,11/*1531*/, 
/*9530*/      OPC_MoveParent,
/*9531*/      OPC_RecordChild1, // #0 = $vA
/*9532*/      OPC_RecordChild2, // #1 = $vB
/*9533*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9535*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1531:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMAXUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9544*/    /*Scope*/ 17, /*->9562*/
/*9545*/      OPC_CheckInteger, 124|128,11/*1532*/, 
/*9548*/      OPC_MoveParent,
/*9549*/      OPC_RecordChild1, // #0 = $vA
/*9550*/      OPC_RecordChild2, // #1 = $vB
/*9551*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9553*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1532:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VMAXUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*9562*/    /*Scope*/ 17, /*->9580*/
/*9563*/      OPC_CheckInteger, 0|128,12/*1536*/, 
/*9566*/      OPC_MoveParent,
/*9567*/      OPC_RecordChild1, // #0 = $vA
/*9568*/      OPC_RecordChild2, // #1 = $vB
/*9569*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9571*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1536:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMINSB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9580*/    /*Scope*/ 17, /*->9598*/
/*9581*/      OPC_CheckInteger, 1|128,12/*1537*/, 
/*9584*/      OPC_MoveParent,
/*9585*/      OPC_RecordChild1, // #0 = $vA
/*9586*/      OPC_RecordChild2, // #1 = $vB
/*9587*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9589*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1537:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMINSH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9598*/    /*Scope*/ 17, /*->9616*/
/*9599*/      OPC_CheckInteger, 2|128,12/*1538*/, 
/*9602*/      OPC_MoveParent,
/*9603*/      OPC_RecordChild1, // #0 = $vA
/*9604*/      OPC_RecordChild2, // #1 = $vB
/*9605*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9607*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1538:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VMINSW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*9616*/    /*Scope*/ 17, /*->9634*/
/*9617*/      OPC_CheckInteger, 3|128,12/*1539*/, 
/*9620*/      OPC_MoveParent,
/*9621*/      OPC_RecordChild1, // #0 = $vA
/*9622*/      OPC_RecordChild2, // #1 = $vB
/*9623*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9625*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1539:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMINUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9634*/    /*Scope*/ 17, /*->9652*/
/*9635*/      OPC_CheckInteger, 4|128,12/*1540*/, 
/*9638*/      OPC_MoveParent,
/*9639*/      OPC_RecordChild1, // #0 = $vA
/*9640*/      OPC_RecordChild2, // #1 = $vB
/*9641*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9643*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1540:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMINUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9652*/    /*Scope*/ 17, /*->9670*/
/*9653*/      OPC_CheckInteger, 5|128,12/*1541*/, 
/*9656*/      OPC_MoveParent,
/*9657*/      OPC_RecordChild1, // #0 = $vA
/*9658*/      OPC_RecordChild2, // #1 = $vB
/*9659*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9661*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1541:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VMINUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*9670*/    /*Scope*/ 19, /*->9690*/
/*9671*/      OPC_CheckInteger, 7|128,12/*1543*/, 
/*9674*/      OPC_MoveParent,
/*9675*/      OPC_RecordChild1, // #0 = $vA
/*9676*/      OPC_RecordChild2, // #1 = $vB
/*9677*/      OPC_RecordChild3, // #2 = $vC
/*9678*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9680*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMMBM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1543:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMMBM:v4i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB, v4i32:v4i32:$vC)
/*9690*/    /*Scope*/ 19, /*->9710*/
/*9691*/      OPC_CheckInteger, 8|128,12/*1544*/, 
/*9694*/      OPC_MoveParent,
/*9695*/      OPC_RecordChild1, // #0 = $vA
/*9696*/      OPC_RecordChild2, // #1 = $vB
/*9697*/      OPC_RecordChild3, // #2 = $vC
/*9698*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9700*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMSHM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1544:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMSHM:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC)
/*9710*/    /*Scope*/ 19, /*->9730*/
/*9711*/      OPC_CheckInteger, 9|128,12/*1545*/, 
/*9714*/      OPC_MoveParent,
/*9715*/      OPC_RecordChild1, // #0 = $vA
/*9716*/      OPC_RecordChild2, // #1 = $vB
/*9717*/      OPC_RecordChild3, // #2 = $vC
/*9718*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9720*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMSHS), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1545:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMSHS:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC)
/*9730*/    /*Scope*/ 19, /*->9750*/
/*9731*/      OPC_CheckInteger, 10|128,12/*1546*/, 
/*9734*/      OPC_MoveParent,
/*9735*/      OPC_RecordChild1, // #0 = $vA
/*9736*/      OPC_RecordChild2, // #1 = $vB
/*9737*/      OPC_RecordChild3, // #2 = $vC
/*9738*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9740*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUBM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1546:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUBM:v4i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB, v4i32:v4i32:$vC)
/*9750*/    /*Scope*/ 19, /*->9770*/
/*9751*/      OPC_CheckInteger, 11|128,12/*1547*/, 
/*9754*/      OPC_MoveParent,
/*9755*/      OPC_RecordChild1, // #0 = $vA
/*9756*/      OPC_RecordChild2, // #1 = $vB
/*9757*/      OPC_RecordChild3, // #2 = $vC
/*9758*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9760*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUHM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1547:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUHM:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC)
/*9770*/    /*Scope*/ 19, /*->9790*/
/*9771*/      OPC_CheckInteger, 12|128,12/*1548*/, 
/*9774*/      OPC_MoveParent,
/*9775*/      OPC_RecordChild1, // #0 = $vA
/*9776*/      OPC_RecordChild2, // #1 = $vB
/*9777*/      OPC_RecordChild3, // #2 = $vC
/*9778*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9780*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUHS), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1548:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUHS:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC)
/*9790*/    /*Scope*/ 17, /*->9808*/
/*9791*/      OPC_CheckInteger, 13|128,12/*1549*/, 
/*9794*/      OPC_MoveParent,
/*9795*/      OPC_RecordChild1, // #0 = $vA
/*9796*/      OPC_RecordChild2, // #1 = $vB
/*9797*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9799*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULESB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1549:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMULESB:v8i16 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9808*/    /*Scope*/ 17, /*->9826*/
/*9809*/      OPC_CheckInteger, 14|128,12/*1550*/, 
/*9812*/      OPC_MoveParent,
/*9813*/      OPC_RecordChild1, // #0 = $vA
/*9814*/      OPC_RecordChild2, // #1 = $vB
/*9815*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9817*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULESH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1550:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMULESH:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9826*/    /*Scope*/ 17, /*->9844*/
/*9827*/      OPC_CheckInteger, 15|128,12/*1551*/, 
/*9830*/      OPC_MoveParent,
/*9831*/      OPC_RecordChild1, // #0 = $vA
/*9832*/      OPC_RecordChild2, // #1 = $vB
/*9833*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9835*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULEUB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1551:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMULEUB:v8i16 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9844*/    /*Scope*/ 17, /*->9862*/
/*9845*/      OPC_CheckInteger, 16|128,12/*1552*/, 
/*9848*/      OPC_MoveParent,
/*9849*/      OPC_RecordChild1, // #0 = $vA
/*9850*/      OPC_RecordChild2, // #1 = $vB
/*9851*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9853*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULEUH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1552:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMULEUH:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9862*/    /*Scope*/ 17, /*->9880*/
/*9863*/      OPC_CheckInteger, 17|128,12/*1553*/, 
/*9866*/      OPC_MoveParent,
/*9867*/      OPC_RecordChild1, // #0 = $vA
/*9868*/      OPC_RecordChild2, // #1 = $vB
/*9869*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9871*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOSB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1553:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMULOSB:v8i16 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9880*/    /*Scope*/ 17, /*->9898*/
/*9881*/      OPC_CheckInteger, 18|128,12/*1554*/, 
/*9884*/      OPC_MoveParent,
/*9885*/      OPC_RecordChild1, // #0 = $vA
/*9886*/      OPC_RecordChild2, // #1 = $vB
/*9887*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9889*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOSH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1554:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMULOSH:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9898*/    /*Scope*/ 17, /*->9916*/
/*9899*/      OPC_CheckInteger, 19|128,12/*1555*/, 
/*9902*/      OPC_MoveParent,
/*9903*/      OPC_RecordChild1, // #0 = $vA
/*9904*/      OPC_RecordChild2, // #1 = $vB
/*9905*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9907*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOUB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1555:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMULOUB:v8i16 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9916*/    /*Scope*/ 17, /*->9934*/
/*9917*/      OPC_CheckInteger, 20|128,12/*1556*/, 
/*9920*/      OPC_MoveParent,
/*9921*/      OPC_RecordChild1, // #0 = $vA
/*9922*/      OPC_RecordChild2, // #1 = $vB
/*9923*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9925*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOUH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1556:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMULOUH:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9934*/    /*Scope*/ 17, /*->9952*/
/*9935*/      OPC_CheckInteger, 53|128,12/*1589*/, 
/*9938*/      OPC_MoveParent,
/*9939*/      OPC_RecordChild1, // #0 = $vA
/*9940*/      OPC_RecordChild2, // #1 = $vB
/*9941*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9943*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBCUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1589:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBCUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*9952*/    /*Scope*/ 17, /*->9970*/
/*9953*/      OPC_CheckInteger, 54|128,12/*1590*/, 
/*9956*/      OPC_MoveParent,
/*9957*/      OPC_RecordChild1, // #0 = $vA
/*9958*/      OPC_RecordChild2, // #1 = $vB
/*9959*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9961*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1590:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSUBSBS:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*9970*/    /*Scope*/ 17, /*->9988*/
/*9971*/      OPC_CheckInteger, 55|128,12/*1591*/, 
/*9974*/      OPC_MoveParent,
/*9975*/      OPC_RecordChild1, // #0 = $vA
/*9976*/      OPC_RecordChild2, // #1 = $vB
/*9977*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9979*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1591:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSUBSHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*9988*/    /*Scope*/ 17, /*->10006*/
/*9989*/      OPC_CheckInteger, 56|128,12/*1592*/, 
/*9992*/      OPC_MoveParent,
/*9993*/      OPC_RecordChild1, // #0 = $vA
/*9994*/      OPC_RecordChild2, // #1 = $vB
/*9995*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*9997*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1592:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBSWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10006*/   /*Scope*/ 17, /*->10024*/
/*10007*/     OPC_CheckInteger, 57|128,12/*1593*/, 
/*10010*/     OPC_MoveParent,
/*10011*/     OPC_RecordChild1, // #0 = $vA
/*10012*/     OPC_RecordChild2, // #1 = $vB
/*10013*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10015*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1593:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSUBUBS:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*10024*/   /*Scope*/ 17, /*->10042*/
/*10025*/     OPC_CheckInteger, 58|128,12/*1594*/, 
/*10028*/     OPC_MoveParent,
/*10029*/     OPC_RecordChild1, // #0 = $vA
/*10030*/     OPC_RecordChild2, // #1 = $vB
/*10031*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10033*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1594:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSUBUHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*10042*/   /*Scope*/ 17, /*->10060*/
/*10043*/     OPC_CheckInteger, 59|128,12/*1595*/, 
/*10046*/     OPC_MoveParent,
/*10047*/     OPC_RecordChild1, // #0 = $vA
/*10048*/     OPC_RecordChild2, // #1 = $vB
/*10049*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10051*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1595:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBUWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10060*/   /*Scope*/ 17, /*->10078*/
/*10061*/     OPC_CheckInteger, 64|128,12/*1600*/, 
/*10064*/     OPC_MoveParent,
/*10065*/     OPC_RecordChild1, // #0 = $vA
/*10066*/     OPC_RecordChild2, // #1 = $vB
/*10067*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10069*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSUMSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1600:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUMSWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10078*/   /*Scope*/ 17, /*->10096*/
/*10079*/     OPC_CheckInteger, 60|128,12/*1596*/, 
/*10082*/     OPC_MoveParent,
/*10083*/     OPC_RecordChild1, // #0 = $vA
/*10084*/     OPC_RecordChild2, // #1 = $vB
/*10085*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10087*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM2SWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1596:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM2SWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10096*/   /*Scope*/ 17, /*->10114*/
/*10097*/     OPC_CheckInteger, 61|128,12/*1597*/, 
/*10100*/     OPC_MoveParent,
/*10101*/     OPC_RecordChild1, // #0 = $vA
/*10102*/     OPC_RecordChild2, // #1 = $vB
/*10103*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10105*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4SBS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1597:iPTR, v16i8:v16i8:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4SBS:v4i32 v16i8:v16i8:$vA, v4i32:v4i32:$vB)
/*10114*/   /*Scope*/ 17, /*->10132*/
/*10115*/     OPC_CheckInteger, 62|128,12/*1598*/, 
/*10118*/     OPC_MoveParent,
/*10119*/     OPC_RecordChild1, // #0 = $vA
/*10120*/     OPC_RecordChild2, // #1 = $vB
/*10121*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10123*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4SHS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1598:iPTR, v8i16:v8i16:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4SHS:v4i32 v8i16:v8i16:$vA, v4i32:v4i32:$vB)
/*10132*/   /*Scope*/ 17, /*->10150*/
/*10133*/     OPC_CheckInteger, 63|128,12/*1599*/, 
/*10136*/     OPC_MoveParent,
/*10137*/     OPC_RecordChild1, // #0 = $vA
/*10138*/     OPC_RecordChild2, // #1 = $vB
/*10139*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10141*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4UBS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1599:iPTR, v16i8:v16i8:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4UBS:v4i32 v16i8:v16i8:$vA, v4i32:v4i32:$vB)
/*10150*/   /*Scope*/ 17, /*->10168*/
/*10151*/     OPC_CheckInteger, 35|128,12/*1571*/, 
/*10154*/     OPC_MoveParent,
/*10155*/     OPC_RecordChild1, // #0 = $vA
/*10156*/     OPC_RecordChild2, // #1 = $vB
/*10157*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10159*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1571:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VRLB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*10168*/   /*Scope*/ 17, /*->10186*/
/*10169*/     OPC_CheckInteger, 36|128,12/*1572*/, 
/*10172*/     OPC_MoveParent,
/*10173*/     OPC_RecordChild1, // #0 = $vA
/*10174*/     OPC_RecordChild2, // #1 = $vB
/*10175*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10177*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1572:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VRLH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*10186*/   /*Scope*/ 17, /*->10204*/
/*10187*/     OPC_CheckInteger, 37|128,12/*1573*/, 
/*10190*/     OPC_MoveParent,
/*10191*/     OPC_RecordChild1, // #0 = $vA
/*10192*/     OPC_RecordChild2, // #1 = $vB
/*10193*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10195*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1573:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VRLW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10204*/   /*Scope*/ 17, /*->10222*/
/*10205*/     OPC_CheckInteger, 40|128,12/*1576*/, 
/*10208*/     OPC_MoveParent,
/*10209*/     OPC_RecordChild1, // #0 = $vA
/*10210*/     OPC_RecordChild2, // #1 = $vB
/*10211*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10213*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSL), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1576:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSL:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10222*/   /*Scope*/ 17, /*->10240*/
/*10223*/     OPC_CheckInteger, 43|128,12/*1579*/, 
/*10226*/     OPC_MoveParent,
/*10227*/     OPC_RecordChild1, // #0 = $vA
/*10228*/     OPC_RecordChild2, // #1 = $vB
/*10229*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10231*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSLO), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1579:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSLO:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10240*/   /*Scope*/ 17, /*->10258*/
/*10241*/     OPC_CheckInteger, 41|128,12/*1577*/, 
/*10244*/     OPC_MoveParent,
/*10245*/     OPC_RecordChild1, // #0 = $vA
/*10246*/     OPC_RecordChild2, // #1 = $vB
/*10247*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10249*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1577:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSLB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*10258*/   /*Scope*/ 17, /*->10276*/
/*10259*/     OPC_CheckInteger, 42|128,12/*1578*/, 
/*10262*/     OPC_MoveParent,
/*10263*/     OPC_RecordChild1, // #0 = $vA
/*10264*/     OPC_RecordChild2, // #1 = $vB
/*10265*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10267*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1578:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSLH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*10276*/   /*Scope*/ 17, /*->10294*/
/*10277*/     OPC_CheckInteger, 44|128,12/*1580*/, 
/*10280*/     OPC_MoveParent,
/*10281*/     OPC_RecordChild1, // #0 = $vA
/*10282*/     OPC_RecordChild2, // #1 = $vB
/*10283*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10285*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1580:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSLW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10294*/   /*Scope*/ 17, /*->10312*/
/*10295*/     OPC_CheckInteger, 45|128,12/*1581*/, 
/*10298*/     OPC_MoveParent,
/*10299*/     OPC_RecordChild1, // #0 = $vA
/*10300*/     OPC_RecordChild2, // #1 = $vB
/*10301*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10303*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1581:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10312*/   /*Scope*/ 17, /*->10330*/
/*10313*/     OPC_CheckInteger, 51|128,12/*1587*/, 
/*10316*/     OPC_MoveParent,
/*10317*/     OPC_RecordChild1, // #0 = $vA
/*10318*/     OPC_RecordChild2, // #1 = $vB
/*10319*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10321*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSRO), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1587:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSRO:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10330*/   /*Scope*/ 17, /*->10348*/
/*10331*/     OPC_CheckInteger, 46|128,12/*1582*/, 
/*10334*/     OPC_MoveParent,
/*10335*/     OPC_RecordChild1, // #0 = $vA
/*10336*/     OPC_RecordChild2, // #1 = $vB
/*10337*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10339*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1582:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSRAB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*10348*/   /*Scope*/ 17, /*->10366*/
/*10349*/     OPC_CheckInteger, 47|128,12/*1583*/, 
/*10352*/     OPC_MoveParent,
/*10353*/     OPC_RecordChild1, // #0 = $vA
/*10354*/     OPC_RecordChild2, // #1 = $vB
/*10355*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10357*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1583:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSRAH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*10366*/   /*Scope*/ 17, /*->10384*/
/*10367*/     OPC_CheckInteger, 48|128,12/*1584*/, 
/*10370*/     OPC_MoveParent,
/*10371*/     OPC_RecordChild1, // #0 = $vA
/*10372*/     OPC_RecordChild2, // #1 = $vB
/*10373*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10375*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1584:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSRAW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10384*/   /*Scope*/ 17, /*->10402*/
/*10385*/     OPC_CheckInteger, 49|128,12/*1585*/, 
/*10388*/     OPC_MoveParent,
/*10389*/     OPC_RecordChild1, // #0 = $vA
/*10390*/     OPC_RecordChild2, // #1 = $vB
/*10391*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10393*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSRB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1585:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSRB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*10402*/   /*Scope*/ 17, /*->10420*/
/*10403*/     OPC_CheckInteger, 50|128,12/*1586*/, 
/*10406*/     OPC_MoveParent,
/*10407*/     OPC_RecordChild1, // #0 = $vA
/*10408*/     OPC_RecordChild2, // #1 = $vB
/*10409*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10411*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSRH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1586:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSRH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*10420*/   /*Scope*/ 17, /*->10438*/
/*10421*/     OPC_CheckInteger, 52|128,12/*1588*/, 
/*10424*/     OPC_MoveParent,
/*10425*/     OPC_RecordChild1, // #0 = $vA
/*10426*/     OPC_RecordChild2, // #1 = $vB
/*10427*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10429*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSRW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1588:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSRW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10438*/   /*Scope*/ 17, /*->10456*/
/*10439*/     OPC_CheckInteger, 23|128,12/*1559*/, 
/*10442*/     OPC_MoveParent,
/*10443*/     OPC_RecordChild1, // #0 = $vA
/*10444*/     OPC_RecordChild2, // #1 = $vB
/*10445*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10447*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VPKPX), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1559:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VPKPX:v8i16 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10456*/   /*Scope*/ 17, /*->10474*/
/*10457*/     OPC_CheckInteger, 24|128,12/*1560*/, 
/*10460*/     OPC_MoveParent,
/*10461*/     OPC_RecordChild1, // #0 = $vA
/*10462*/     OPC_RecordChild2, // #1 = $vB
/*10463*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10465*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSHSS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1560:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VPKSHSS:v16i8 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*10474*/   /*Scope*/ 17, /*->10492*/
/*10475*/     OPC_CheckInteger, 25|128,12/*1561*/, 
/*10478*/     OPC_MoveParent,
/*10479*/     OPC_RecordChild1, // #0 = $vA
/*10480*/     OPC_RecordChild2, // #1 = $vB
/*10481*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10483*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSHUS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1561:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VPKSHUS:v16i8 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*10492*/   /*Scope*/ 17, /*->10510*/
/*10493*/     OPC_CheckInteger, 26|128,12/*1562*/, 
/*10496*/     OPC_MoveParent,
/*10497*/     OPC_RecordChild1, // #0 = $vA
/*10498*/     OPC_RecordChild2, // #1 = $vB
/*10499*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10501*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSWSS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1562:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VPKSWSS:v16i8 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10510*/   /*Scope*/ 17, /*->10528*/
/*10511*/     OPC_CheckInteger, 27|128,12/*1563*/, 
/*10514*/     OPC_MoveParent,
/*10515*/     OPC_RecordChild1, // #0 = $vA
/*10516*/     OPC_RecordChild2, // #1 = $vB
/*10517*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10519*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSWUS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1563:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VPKSWUS:v8i16 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10528*/   /*Scope*/ 17, /*->10546*/
/*10529*/     OPC_CheckInteger, 28|128,12/*1564*/, 
/*10532*/     OPC_MoveParent,
/*10533*/     OPC_RecordChild1, // #0 = $vA
/*10534*/     OPC_RecordChild2, // #1 = $vB
/*10535*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10537*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1564:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VPKUHUS:v16i8 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*10546*/   /*Scope*/ 17, /*->10564*/
/*10547*/     OPC_CheckInteger, 29|128,12/*1565*/, 
/*10550*/     OPC_MoveParent,
/*10551*/     OPC_RecordChild1, // #0 = $vA
/*10552*/     OPC_RecordChild2, // #1 = $vB
/*10553*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10555*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1565:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VPKUWUS:v8i16 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*10564*/   /*Scope*/ 15, /*->10580*/
/*10565*/     OPC_CheckInteger, 65|128,12/*1601*/, 
/*10568*/     OPC_MoveParent,
/*10569*/     OPC_RecordChild1, // #0 = $vB
/*10570*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10572*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHPX), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1601:iPTR, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKHPX:v4i32 v8i16:v8i16:$vB)
/*10580*/   /*Scope*/ 15, /*->10596*/
/*10581*/     OPC_CheckInteger, 66|128,12/*1602*/, 
/*10584*/     OPC_MoveParent,
/*10585*/     OPC_RecordChild1, // #0 = $vB
/*10586*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10588*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHSB), 0,
                  1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v8i16 1602:iPTR, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VUPKHSB:v8i16 v16i8:v16i8:$vB)
/*10596*/   /*Scope*/ 15, /*->10612*/
/*10597*/     OPC_CheckInteger, 67|128,12/*1603*/, 
/*10600*/     OPC_MoveParent,
/*10601*/     OPC_RecordChild1, // #0 = $vB
/*10602*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10604*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHSH), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1603:iPTR, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKHSH:v4i32 v8i16:v8i16:$vB)
/*10612*/   /*Scope*/ 15, /*->10628*/
/*10613*/     OPC_CheckInteger, 68|128,12/*1604*/, 
/*10616*/     OPC_MoveParent,
/*10617*/     OPC_RecordChild1, // #0 = $vB
/*10618*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10620*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLPX), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1604:iPTR, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKLPX:v4i32 v8i16:v8i16:$vB)
/*10628*/   /*Scope*/ 15, /*->10644*/
/*10629*/     OPC_CheckInteger, 69|128,12/*1605*/, 
/*10632*/     OPC_MoveParent,
/*10633*/     OPC_RecordChild1, // #0 = $vB
/*10634*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10636*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLSB), 0,
                  1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v8i16 1605:iPTR, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VUPKLSB:v8i16 v16i8:v16i8:$vB)
/*10644*/   /*Scope*/ 15, /*->10660*/
/*10645*/     OPC_CheckInteger, 70|128,12/*1606*/, 
/*10648*/     OPC_MoveParent,
/*10649*/     OPC_RecordChild1, // #0 = $vB
/*10650*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10652*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLSH), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1606:iPTR, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKLSH:v4i32 v8i16:v8i16:$vB)
/*10660*/   /*Scope*/ 44, /*->10705*/
/*10661*/     OPC_CheckInteger, 85|128,11/*1493*/, 
/*10664*/     OPC_MoveParent,
/*10665*/     OPC_RecordChild1, // #0 = $vB
/*10666*/     OPC_Scope, 15, /*->10683*/ // 2 children in Scope
/*10668*/       OPC_MoveChild, 2,
/*10670*/       OPC_CheckInteger, 0, 
/*10672*/       OPC_MoveParent,
/*10673*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10675*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX_0), 0,
                    1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1493:iPTR, v4i32:v4i32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCFSX_0:v4f32 v4i32:v4i32:$vB)
/*10683*/     /*Scope*/ 20, /*->10704*/
/*10684*/       OPC_RecordChild2, // #1 = $UIMM
/*10685*/       OPC_MoveChild, 2,
/*10687*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10690*/       OPC_MoveParent,
/*10691*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10693*/       OPC_EmitConvertToTarget, 1,
/*10695*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX), 0,
                    1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1493:iPTR, v4i32:v4i32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCFSX:v4f32 (imm:i32):$UIMM, v4i32:v4i32:$vB)
/*10704*/     0, /*End of Scope*/
/*10705*/   /*Scope*/ 44, /*->10750*/
/*10706*/     OPC_CheckInteger, 86|128,11/*1494*/, 
/*10709*/     OPC_MoveParent,
/*10710*/     OPC_RecordChild1, // #0 = $vB
/*10711*/     OPC_Scope, 15, /*->10728*/ // 2 children in Scope
/*10713*/       OPC_MoveChild, 2,
/*10715*/       OPC_CheckInteger, 0, 
/*10717*/       OPC_MoveParent,
/*10718*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10720*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX_0), 0,
                    1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1494:iPTR, v4i32:v4i32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCFUX_0:v4f32 v4i32:v4i32:$vB)
/*10728*/     /*Scope*/ 20, /*->10749*/
/*10729*/       OPC_RecordChild2, // #1 = $UIMM
/*10730*/       OPC_MoveChild, 2,
/*10732*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10735*/       OPC_MoveParent,
/*10736*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10738*/       OPC_EmitConvertToTarget, 1,
/*10740*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX), 0,
                    1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1494:iPTR, v4i32:v4i32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCFUX:v4f32 (imm:i32):$UIMM, v4i32:v4i32:$vB)
/*10749*/     0, /*End of Scope*/
/*10750*/   /*Scope*/ 15, /*->10766*/
/*10751*/     OPC_CheckInteger, 115|128,11/*1523*/, 
/*10754*/     OPC_MoveParent,
/*10755*/     OPC_RecordChild1, // #0 = $vB
/*10756*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10758*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VEXPTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1523:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VEXPTEFP:v4f32 v4f32:v4f32:$vB)
/*10766*/   /*Scope*/ 15, /*->10782*/
/*10767*/     OPC_CheckInteger, 116|128,11/*1524*/, 
/*10770*/     OPC_MoveParent,
/*10771*/     OPC_RecordChild1, // #0 = $vB
/*10772*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10774*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VLOGEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1524:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VLOGEFP:v4f32 v4f32:v4f32:$vB)
/*10782*/   /*Scope*/ 17, /*->10800*/
/*10783*/     OPC_CheckInteger, 118|128,11/*1526*/, 
/*10786*/     OPC_MoveParent,
/*10787*/     OPC_RecordChild1, // #0 = $vA
/*10788*/     OPC_RecordChild2, // #1 = $vB
/*10789*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10791*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4f32 1526:iPTR, v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VMAXFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*10800*/   /*Scope*/ 17, /*->10818*/
/*10801*/     OPC_CheckInteger, 127|128,11/*1535*/, 
/*10804*/     OPC_MoveParent,
/*10805*/     OPC_RecordChild1, // #0 = $vA
/*10806*/     OPC_RecordChild2, // #1 = $vB
/*10807*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10809*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VMINFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4f32 1535:iPTR, v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VMINFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*10818*/   /*Scope*/ 15, /*->10834*/
/*10819*/     OPC_CheckInteger, 30|128,12/*1566*/, 
/*10822*/     OPC_MoveParent,
/*10823*/     OPC_RecordChild1, // #0 = $vB
/*10824*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10826*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VREFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1566:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VREFP:v4f32 v4f32:v4f32:$vB)
/*10834*/   /*Scope*/ 15, /*->10850*/
/*10835*/     OPC_CheckInteger, 31|128,12/*1567*/, 
/*10838*/     OPC_MoveParent,
/*10839*/     OPC_RecordChild1, // #0 = $vB
/*10840*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10842*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIM), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1567:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIM:v4f32 v4f32:v4f32:$vB)
/*10850*/   /*Scope*/ 15, /*->10866*/
/*10851*/     OPC_CheckInteger, 32|128,12/*1568*/, 
/*10854*/     OPC_MoveParent,
/*10855*/     OPC_RecordChild1, // #0 = $vB
/*10856*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10858*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIN), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1568:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIN:v4f32 v4f32:v4f32:$vB)
/*10866*/   /*Scope*/ 15, /*->10882*/
/*10867*/     OPC_CheckInteger, 33|128,12/*1569*/, 
/*10870*/     OPC_MoveParent,
/*10871*/     OPC_RecordChild1, // #0 = $vB
/*10872*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10874*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1569:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIP:v4f32 v4f32:v4f32:$vB)
/*10882*/   /*Scope*/ 15, /*->10898*/
/*10883*/     OPC_CheckInteger, 34|128,12/*1570*/, 
/*10886*/     OPC_MoveParent,
/*10887*/     OPC_RecordChild1, // #0 = $vB
/*10888*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10890*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIZ), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1570:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIZ:v4f32 v4f32:v4f32:$vB)
/*10898*/   /*Scope*/ 15, /*->10914*/
/*10899*/     OPC_CheckInteger, 38|128,12/*1574*/, 
/*10902*/     OPC_MoveParent,
/*10903*/     OPC_RecordChild1, // #0 = $vB
/*10904*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10906*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRSQRTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1574:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRSQRTEFP:v4f32 v4f32:v4f32:$vB)
/*10914*/   /*Scope*/ 19, /*->10934*/
/*10915*/     OPC_CheckInteger, 117|128,11/*1525*/, 
/*10918*/     OPC_MoveParent,
/*10919*/     OPC_RecordChild1, // #0 = $A
/*10920*/     OPC_RecordChild2, // #1 = $B
/*10921*/     OPC_RecordChild3, // #2 = $C
/*10922*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10924*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4f32 1525:iPTR, v4f32:v4f32:$A, v4f32:v4f32:$B, v4f32:v4f32:$C) - Complexity = 8
              // Dst: (VMADDFP:v4f32 ?:v4f32:$A, ?:v4f32:$B, ?:v4f32:$C)
/*10934*/   /*Scope*/ 19, /*->10954*/
/*10935*/     OPC_CheckInteger, 21|128,12/*1557*/, 
/*10938*/     OPC_MoveParent,
/*10939*/     OPC_RecordChild1, // #0 = $A
/*10940*/     OPC_RecordChild2, // #1 = $B
/*10941*/     OPC_RecordChild3, // #2 = $C
/*10942*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10944*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4f32 1557:iPTR, v4f32:v4f32:$A, v4f32:v4f32:$B, v4f32:v4f32:$C) - Complexity = 8
              // Dst: (VNMSUBFP:v4f32 ?:v4f32:$A, ?:v4f32:$B, ?:v4f32:$C)
/*10954*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 110|128,1/*238*/,  TARGET_VAL(PPCISD::VCMP),// ->11197
/*10959*/   OPC_RecordChild0, // #0 = $vA
/*10960*/   OPC_RecordChild1, // #1 = $vB
/*10961*/   OPC_MoveChild, 2,
/*10963*/   OPC_Scope, 16, /*->10981*/ // 13 children in Scope
/*10965*/     OPC_CheckInteger, 6, 
/*10967*/     OPC_MoveParent,
/*10968*/     OPC_CheckType, MVT::v16i8,
/*10970*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10972*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 6:i32) - Complexity = 8
              // Dst: (VCMPEQUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*10981*/   /*Scope*/ 17, /*->10999*/
/*10982*/     OPC_CheckInteger, 6|128,6/*774*/, 
/*10985*/     OPC_MoveParent,
/*10986*/     OPC_CheckType, MVT::v16i8,
/*10988*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10990*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 774:i32) - Complexity = 8
              // Dst: (VCMPGTSB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*10999*/   /*Scope*/ 17, /*->11017*/
/*11000*/     OPC_CheckInteger, 6|128,4/*518*/, 
/*11003*/     OPC_MoveParent,
/*11004*/     OPC_CheckType, MVT::v16i8,
/*11006*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11008*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 518:i32) - Complexity = 8
              // Dst: (VCMPGTUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11017*/   /*Scope*/ 16, /*->11034*/
/*11018*/     OPC_CheckInteger, 70, 
/*11020*/     OPC_MoveParent,
/*11021*/     OPC_CheckType, MVT::v8i16,
/*11023*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11025*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 70:i32) - Complexity = 8
              // Dst: (VCMPEQUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11034*/   /*Scope*/ 17, /*->11052*/
/*11035*/     OPC_CheckInteger, 70|128,6/*838*/, 
/*11038*/     OPC_MoveParent,
/*11039*/     OPC_CheckType, MVT::v8i16,
/*11041*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11043*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 838:i32) - Complexity = 8
              // Dst: (VCMPGTSH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11052*/   /*Scope*/ 17, /*->11070*/
/*11053*/     OPC_CheckInteger, 70|128,4/*582*/, 
/*11056*/     OPC_MoveParent,
/*11057*/     OPC_CheckType, MVT::v8i16,
/*11059*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11061*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 582:i32) - Complexity = 8
              // Dst: (VCMPGTUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11070*/   /*Scope*/ 17, /*->11088*/
/*11071*/     OPC_CheckInteger, 6|128,1/*134*/, 
/*11074*/     OPC_MoveParent,
/*11075*/     OPC_CheckType, MVT::v4i32,
/*11077*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11079*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 134:i32) - Complexity = 8
              // Dst: (VCMPEQUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11088*/   /*Scope*/ 17, /*->11106*/
/*11089*/     OPC_CheckInteger, 6|128,7/*902*/, 
/*11092*/     OPC_MoveParent,
/*11093*/     OPC_CheckType, MVT::v4i32,
/*11095*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11097*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 902:i32) - Complexity = 8
              // Dst: (VCMPGTSW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11106*/   /*Scope*/ 17, /*->11124*/
/*11107*/     OPC_CheckInteger, 6|128,5/*646*/, 
/*11110*/     OPC_MoveParent,
/*11111*/     OPC_CheckType, MVT::v4i32,
/*11113*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11115*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 646:i32) - Complexity = 8
              // Dst: (VCMPGTUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11124*/   /*Scope*/ 17, /*->11142*/
/*11125*/     OPC_CheckInteger, 70|128,7/*966*/, 
/*11128*/     OPC_MoveParent,
/*11129*/     OPC_CheckType, MVT::v4f32,
/*11131*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11133*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 966:i32) - Complexity = 8
              // Dst: (VCMPBFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11142*/   /*Scope*/ 17, /*->11160*/
/*11143*/     OPC_CheckInteger, 70|128,1/*198*/, 
/*11146*/     OPC_MoveParent,
/*11147*/     OPC_CheckType, MVT::v4f32,
/*11149*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11151*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 198:i32) - Complexity = 8
              // Dst: (VCMPEQFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11160*/   /*Scope*/ 17, /*->11178*/
/*11161*/     OPC_CheckInteger, 70|128,3/*454*/, 
/*11164*/     OPC_MoveParent,
/*11165*/     OPC_CheckType, MVT::v4f32,
/*11167*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11169*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 454:i32) - Complexity = 8
              // Dst: (VCMPGEFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11178*/   /*Scope*/ 17, /*->11196*/
/*11179*/     OPC_CheckInteger, 70|128,5/*710*/, 
/*11182*/     OPC_MoveParent,
/*11183*/     OPC_CheckType, MVT::v4f32,
/*11185*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11187*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 710:i32) - Complexity = 8
              // Dst: (VCMPGTFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11196*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 123|128,1/*251*/,  TARGET_VAL(PPCISD::VCMPo),// ->11452
/*11201*/   OPC_RecordChild0, // #0 = $vA
/*11202*/   OPC_RecordChild1, // #1 = $vB
/*11203*/   OPC_MoveChild, 2,
/*11205*/   OPC_Scope, 17, /*->11224*/ // 13 children in Scope
/*11207*/     OPC_CheckInteger, 6, 
/*11209*/     OPC_MoveParent,
/*11210*/     OPC_CheckType, MVT::v16i8,
/*11212*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11214*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 6:i32) - Complexity = 8
              // Dst: (VCMPEQUBo:v16i8:i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11224*/   /*Scope*/ 18, /*->11243*/
/*11225*/     OPC_CheckInteger, 6|128,6/*774*/, 
/*11228*/     OPC_MoveParent,
/*11229*/     OPC_CheckType, MVT::v16i8,
/*11231*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11233*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 774:i32) - Complexity = 8
              // Dst: (VCMPGTSBo:v16i8:i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11243*/   /*Scope*/ 18, /*->11262*/
/*11244*/     OPC_CheckInteger, 6|128,4/*518*/, 
/*11247*/     OPC_MoveParent,
/*11248*/     OPC_CheckType, MVT::v16i8,
/*11250*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11252*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 518:i32) - Complexity = 8
              // Dst: (VCMPGTUBo:v16i8:i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11262*/   /*Scope*/ 17, /*->11280*/
/*11263*/     OPC_CheckInteger, 70, 
/*11265*/     OPC_MoveParent,
/*11266*/     OPC_CheckType, MVT::v8i16,
/*11268*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11270*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 70:i32) - Complexity = 8
              // Dst: (VCMPEQUHo:v8i16:i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11280*/   /*Scope*/ 18, /*->11299*/
/*11281*/     OPC_CheckInteger, 70|128,6/*838*/, 
/*11284*/     OPC_MoveParent,
/*11285*/     OPC_CheckType, MVT::v8i16,
/*11287*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11289*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 838:i32) - Complexity = 8
              // Dst: (VCMPGTSHo:v8i16:i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11299*/   /*Scope*/ 18, /*->11318*/
/*11300*/     OPC_CheckInteger, 70|128,4/*582*/, 
/*11303*/     OPC_MoveParent,
/*11304*/     OPC_CheckType, MVT::v8i16,
/*11306*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11308*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 582:i32) - Complexity = 8
              // Dst: (VCMPGTUHo:v8i16:i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11318*/   /*Scope*/ 18, /*->11337*/
/*11319*/     OPC_CheckInteger, 6|128,1/*134*/, 
/*11322*/     OPC_MoveParent,
/*11323*/     OPC_CheckType, MVT::v4i32,
/*11325*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11327*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 134:i32) - Complexity = 8
              // Dst: (VCMPEQUWo:v4i32:i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11337*/   /*Scope*/ 18, /*->11356*/
/*11338*/     OPC_CheckInteger, 6|128,7/*902*/, 
/*11341*/     OPC_MoveParent,
/*11342*/     OPC_CheckType, MVT::v4i32,
/*11344*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11346*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 902:i32) - Complexity = 8
              // Dst: (VCMPGTSWo:v4i32:i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11356*/   /*Scope*/ 18, /*->11375*/
/*11357*/     OPC_CheckInteger, 6|128,5/*646*/, 
/*11360*/     OPC_MoveParent,
/*11361*/     OPC_CheckType, MVT::v4i32,
/*11363*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11365*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 646:i32) - Complexity = 8
              // Dst: (VCMPGTUWo:v4i32:i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11375*/   /*Scope*/ 18, /*->11394*/
/*11376*/     OPC_CheckInteger, 70|128,7/*966*/, 
/*11379*/     OPC_MoveParent,
/*11380*/     OPC_CheckType, MVT::v4f32,
/*11382*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11384*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPBFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 966:i32) - Complexity = 8
              // Dst: (VCMPBFPo:v4f32:i32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11394*/   /*Scope*/ 18, /*->11413*/
/*11395*/     OPC_CheckInteger, 70|128,1/*198*/, 
/*11398*/     OPC_MoveParent,
/*11399*/     OPC_CheckType, MVT::v4f32,
/*11401*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11403*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 198:i32) - Complexity = 8
              // Dst: (VCMPEQFPo:v4f32:i32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11413*/   /*Scope*/ 18, /*->11432*/
/*11414*/     OPC_CheckInteger, 70|128,3/*454*/, 
/*11417*/     OPC_MoveParent,
/*11418*/     OPC_CheckType, MVT::v4f32,
/*11420*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11422*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGEFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 454:i32) - Complexity = 8
              // Dst: (VCMPGEFPo:v4f32:i32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11432*/   /*Scope*/ 18, /*->11451*/
/*11433*/     OPC_CheckInteger, 70|128,5/*710*/, 
/*11436*/     OPC_MoveParent,
/*11437*/     OPC_CheckType, MVT::v4f32,
/*11439*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11441*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 710:i32) - Complexity = 8
              // Dst: (VCMPGTFPo:v4f32:i32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11451*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 94|128,2/*350*/,  TARGET_VAL(ISD::VECTOR_SHUFFLE),// ->11806
/*11456*/   OPC_Scope, 81, /*->11539*/ // 4 children in Scope
/*11458*/     OPC_RecordNode, // #0 = $UIMM
/*11459*/     OPC_RecordChild0, // #1 = $vB
/*11460*/     OPC_MoveChild, 1,
/*11462*/     OPC_CheckOpcode, TARGET_VAL(ISD::UNDEF),
/*11465*/     OPC_MoveParent,
/*11466*/     OPC_CheckType, MVT::v16i8,
/*11468*/     OPC_Scope, 16, /*->11486*/ // 4 children in Scope
/*11470*/       OPC_CheckPredicate, 74, // Predicate_vspltb_shuffle
/*11472*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11474*/       OPC_EmitNodeXForm, 9, 0, // VSPLTB_get_imm
/*11477*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8))<<P:Predicate_vspltb_shuffle>><<X:VSPLTB_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTB:v16i8 (VSPLTB_get_imm:i32 (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8)):$UIMM), v16i8:v16i8:$vB)
/*11486*/     /*Scope*/ 16, /*->11503*/
/*11487*/       OPC_CheckPredicate, 75, // Predicate_vsplth_shuffle
/*11489*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11491*/       OPC_EmitNodeXForm, 10, 0, // VSPLTH_get_imm
/*11494*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8))<<P:Predicate_vsplth_shuffle>><<X:VSPLTH_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTH:v16i8 (VSPLTH_get_imm:i32 (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8)):$UIMM), v16i8:v16i8:$vB)
/*11503*/     /*Scope*/ 16, /*->11520*/
/*11504*/       OPC_CheckPredicate, 76, // Predicate_vspltw_shuffle
/*11506*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11508*/       OPC_EmitNodeXForm, 11, 0, // VSPLTW_get_imm
/*11511*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8))<<P:Predicate_vspltw_shuffle>><<X:VSPLTW_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTW:v16i8 (VSPLTW_get_imm:i32 (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8)):$UIMM), v16i8:v16i8:$vB)
/*11520*/     /*Scope*/ 17, /*->11538*/
/*11521*/       OPC_CheckPredicate, 77, // Predicate_vsldoi_unary_shuffle
/*11523*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11525*/       OPC_EmitNodeXForm, 12, 0, // VSLDOI_unary_get_imm
/*11528*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSLDOI), 0,
                    1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 1, 1, 2, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vsldoi_unary_shuffle>><<X:VSLDOI_unary_get_imm>>:$in - Complexity = 7
                // Dst: (VSLDOI:v16i8 ?:v16i8:$vA, ?:v16i8:$vA, (VSLDOI_unary_get_imm:i32 ?:v16i8:$in))
/*11538*/     0, /*End of Scope*/
/*11539*/   /*Scope*/ 123, /*->11663*/
/*11540*/     OPC_RecordChild0, // #0 = $vA
/*11541*/     OPC_MoveChild, 1,
/*11543*/     OPC_CheckOpcode, TARGET_VAL(ISD::UNDEF),
/*11546*/     OPC_MoveParent,
/*11547*/     OPC_CheckType, MVT::v16i8,
/*11549*/     OPC_Scope, 13, /*->11564*/ // 8 children in Scope
/*11551*/       OPC_CheckPredicate, 78, // Predicate_vpkuwum_unary_shuffle
/*11553*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11555*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vpkuwum_unary_shuffle>> - Complexity = 7
                // Dst: (VPKUWUM:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11564*/     /*Scope*/ 13, /*->11578*/
/*11565*/       OPC_CheckPredicate, 79, // Predicate_vpkuhum_unary_shuffle
/*11567*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11569*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vpkuhum_unary_shuffle>> - Complexity = 7
                // Dst: (VPKUHUM:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11578*/     /*Scope*/ 13, /*->11592*/
/*11579*/       OPC_CheckPredicate, 80, // Predicate_vmrglb_unary_shuffle
/*11581*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11583*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglb_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLB:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11592*/     /*Scope*/ 13, /*->11606*/
/*11593*/       OPC_CheckPredicate, 81, // Predicate_vmrglh_unary_shuffle
/*11595*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11597*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglh_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLH:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11606*/     /*Scope*/ 13, /*->11620*/
/*11607*/       OPC_CheckPredicate, 82, // Predicate_vmrglw_unary_shuffle
/*11609*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11611*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglw_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLW:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11620*/     /*Scope*/ 13, /*->11634*/
/*11621*/       OPC_CheckPredicate, 83, // Predicate_vmrghb_unary_shuffle
/*11623*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11625*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghb_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHB:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11634*/     /*Scope*/ 13, /*->11648*/
/*11635*/       OPC_CheckPredicate, 84, // Predicate_vmrghh_unary_shuffle
/*11637*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11639*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghh_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHH:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11648*/     /*Scope*/ 13, /*->11662*/
/*11649*/       OPC_CheckPredicate, 85, // Predicate_vmrghw_unary_shuffle
/*11651*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11653*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghw_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHW:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11662*/     0, /*End of Scope*/
/*11663*/   /*Scope*/ 22, /*->11686*/
/*11664*/     OPC_RecordNode, // #0 = $SH
/*11665*/     OPC_RecordChild0, // #1 = $vA
/*11666*/     OPC_RecordChild1, // #2 = $vB
/*11667*/     OPC_CheckPredicate, 86, // Predicate_vsldoi_shuffle
/*11669*/     OPC_CheckType, MVT::v16i8,
/*11671*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11673*/     OPC_EmitNodeXForm, 13, 0, // VSLDOI_get_imm
/*11676*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSLDOI), 0,
                  1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 1, 2, 3, 
              // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vsldoi_shuffle>><<X:VSLDOI_get_imm>>:$SH - Complexity = 4
              // Dst: (VSLDOI:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, (VSLDOI_get_imm:i32 (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB):$SH))
/*11686*/   /*Scope*/ 118, /*->11805*/
/*11687*/     OPC_RecordChild0, // #0 = $vA
/*11688*/     OPC_RecordChild1, // #1 = $vB
/*11689*/     OPC_CheckType, MVT::v16i8,
/*11691*/     OPC_Scope, 13, /*->11706*/ // 8 children in Scope
/*11693*/       OPC_CheckPredicate, 87, // Predicate_vmrghb_shuffle
/*11695*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11697*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrghb_shuffle>> - Complexity = 4
                // Dst: (VMRGHB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11706*/     /*Scope*/ 13, /*->11720*/
/*11707*/       OPC_CheckPredicate, 88, // Predicate_vmrghh_shuffle
/*11709*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11711*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrghh_shuffle>> - Complexity = 4
                // Dst: (VMRGHH:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11720*/     /*Scope*/ 13, /*->11734*/
/*11721*/       OPC_CheckPredicate, 89, // Predicate_vmrghw_shuffle
/*11723*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11725*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrghw_shuffle>> - Complexity = 4
                // Dst: (VMRGHW:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11734*/     /*Scope*/ 13, /*->11748*/
/*11735*/       OPC_CheckPredicate, 90, // Predicate_vmrglb_shuffle
/*11737*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11739*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrglb_shuffle>> - Complexity = 4
                // Dst: (VMRGLB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11748*/     /*Scope*/ 13, /*->11762*/
/*11749*/       OPC_CheckPredicate, 91, // Predicate_vmrglh_shuffle
/*11751*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11753*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrglh_shuffle>> - Complexity = 4
                // Dst: (VMRGLH:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11762*/     /*Scope*/ 13, /*->11776*/
/*11763*/       OPC_CheckPredicate, 92, // Predicate_vmrglw_shuffle
/*11765*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11767*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrglw_shuffle>> - Complexity = 4
                // Dst: (VMRGLW:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11776*/     /*Scope*/ 13, /*->11790*/
/*11777*/       OPC_CheckPredicate, 93, // Predicate_vpkuhum_shuffle
/*11779*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11781*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vpkuhum_shuffle>> - Complexity = 4
                // Dst: (VPKUHUM:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11790*/     /*Scope*/ 13, /*->11804*/
/*11791*/       OPC_CheckPredicate, 94, // Predicate_vpkuwum_shuffle
/*11793*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11795*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vpkuwum_shuffle>> - Complexity = 4
                // Dst: (VPKUWUM:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11804*/     0, /*End of Scope*/
/*11805*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CALLSEQ_START),// ->11826
/*11809*/   OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*11810*/   OPC_RecordChild1, // #1 = $amt
/*11811*/   OPC_MoveChild, 1,
/*11813*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*11816*/   OPC_MoveParent,
/*11817*/   OPC_EmitMergeInputChains1_0,
/*11818*/   OPC_MorphNodeTo, TARGET_VAL(PPC::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN:i32 (timm:i32):$amt)
          /*SwitchOpcode*/ 92,  TARGET_VAL(PPCISD::CALL),// ->11921
/*11829*/   OPC_RecordNode,   // #0 = 'PPCcall' chained node
/*11830*/   OPC_CaptureGlueInput,
/*11831*/   OPC_RecordChild1, // #1 = $func
/*11832*/   OPC_MoveChild, 1,
/*11834*/   OPC_SwitchOpcode /*3 cases */, 28,  TARGET_VAL(ISD::Constant),// ->11866
/*11838*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->11852
/*11841*/       OPC_MoveParent,
/*11842*/       OPC_EmitMergeInputChains1_0,
/*11843*/       OPC_EmitConvertToTarget, 1,
/*11845*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (PPCcall (imm:i32):$func) - Complexity = 6
                // Dst: (BLA (imm:i32):$func)
              /*SwitchType*/ 11,  MVT::i64,// ->11865
/*11854*/       OPC_MoveParent,
/*11855*/       OPC_EmitMergeInputChains1_0,
/*11856*/       OPC_EmitConvertToTarget, 1,
/*11858*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (PPCcall (imm:i64):$func) - Complexity = 6
                // Dst: (BLA8 (imm:i64):$func)
              0, // EndSwitchType
            /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::TargetGlobalAddress),// ->11893
/*11869*/     OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->11881
/*11872*/       OPC_MoveParent,
/*11873*/       OPC_EmitMergeInputChains1_0,
/*11874*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (PPCcall (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (BL (tglobaladdr:i32):$dst)
              /*SwitchType*/ 9,  MVT::i64,// ->11892
/*11883*/       OPC_MoveParent,
/*11884*/       OPC_EmitMergeInputChains1_0,
/*11885*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (PPCcall (tglobaladdr:i64):$dst) - Complexity = 6
                // Dst: (BL8 (tglobaladdr:i64):$dst)
              0, // EndSwitchType
            /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::TargetExternalSymbol),// ->11920
/*11896*/     OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->11908
/*11899*/       OPC_MoveParent,
/*11900*/       OPC_EmitMergeInputChains1_0,
/*11901*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (PPCcall (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (BL (texternalsym:i32):$dst)
              /*SwitchType*/ 9,  MVT::i64,// ->11919
/*11910*/       OPC_MoveParent,
/*11911*/       OPC_EmitMergeInputChains1_0,
/*11912*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (PPCcall (texternalsym:i64):$dst) - Complexity = 6
                // Dst: (BL8 (texternalsym:i64):$dst)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 51,  TARGET_VAL(PPCISD::CALL_NOP),// ->11975
/*11924*/   OPC_RecordNode,   // #0 = 'PPCcall_nop' chained node
/*11925*/   OPC_CaptureGlueInput,
/*11926*/   OPC_RecordChild1, // #1 = $func
/*11927*/   OPC_MoveChild, 1,
/*11929*/   OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::Constant),// ->11946
/*11933*/     OPC_CheckType, MVT::i64,
/*11935*/     OPC_MoveParent,
/*11936*/     OPC_EmitMergeInputChains1_0,
/*11937*/     OPC_EmitConvertToTarget, 1,
/*11939*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8_NOP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 2, 
              // Src: (PPCcall_nop (imm:i64):$func) - Complexity = 6
              // Dst: (BLA8_NOP (imm:i64):$func)
            /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->11960
/*11949*/     OPC_CheckType, MVT::i64,
/*11951*/     OPC_MoveParent,
/*11952*/     OPC_EmitMergeInputChains1_0,
/*11953*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_NOP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (PPCcall_nop (tglobaladdr:i64):$dst) - Complexity = 6
              // Dst: (BL8_NOP (tglobaladdr:i64):$dst)
            /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetExternalSymbol),// ->11974
/*11963*/     OPC_CheckType, MVT::i64,
/*11965*/     OPC_MoveParent,
/*11966*/     OPC_EmitMergeInputChains1_0,
/*11967*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_NOP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (PPCcall_nop (texternalsym:i64):$dst) - Complexity = 6
              // Dst: (BL8_NOP (texternalsym:i64):$dst)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 85,  TARGET_VAL(ISD::BUILD_VECTOR),// ->12063
/*11978*/   OPC_Scope, 54, /*->12034*/ // 3 children in Scope
/*11980*/     OPC_RecordNode, // #0 = $SIMM
/*11981*/     OPC_SwitchType /*3 cases */, 15,  MVT::v16i8,// ->11999
/*11984*/       OPC_CheckPredicate, 95, // Predicate_vecspltisb
/*11986*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11988*/       OPC_EmitNodeXForm, 14, 0, // VSPLTISB_get_imm
/*11991*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISB), 0,
                    1/*#VTs*/, MVT::v16i8, 1/*#Ops*/, 1, 
                // Src: (build_vector:v16i8)<<P:Predicate_vecspltisb>><<X:VSPLTISB_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISB:v16i8 (VSPLTISB_get_imm:i32 (build_vector:v16i8):$SIMM))
              /*SwitchType*/ 15,  MVT::v8i16,// ->12016
/*12001*/       OPC_CheckPredicate, 96, // Predicate_vecspltish
/*12003*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12005*/       OPC_EmitNodeXForm, 15, 0, // VSPLTISH_get_imm
/*12008*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISH), 0,
                    1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 1, 
                // Src: (build_vector:v8i16)<<P:Predicate_vecspltish>><<X:VSPLTISH_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISH:v8i16 (VSPLTISH_get_imm:i32 (build_vector:v8i16):$SIMM))
              /*SwitchType*/ 15,  MVT::v4i32,// ->12033
/*12018*/       OPC_CheckPredicate, 97, // Predicate_vecspltisw
/*12020*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12022*/       OPC_EmitNodeXForm, 16, 0, // VSPLTISW_get_imm
/*12025*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISW), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 1, 
                // Src: (build_vector:v4i32)<<P:Predicate_vecspltisw>><<X:VSPLTISW_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISW:v4i32 (VSPLTISW_get_imm:i32 (build_vector:v4i32):$SIMM))
              0, // EndSwitchType
/*12034*/   /*Scope*/ 13, /*->12048*/
/*12035*/     OPC_CheckPredicate, 98, // Predicate_immAllZerosV
/*12037*/     OPC_CheckType, MVT::v4i32,
/*12039*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12041*/     OPC_MorphNodeTo, TARGET_VAL(PPC::V_SET0), 0,
                  1/*#VTs*/, MVT::v4i32, 0/*#Ops*/, 
              // Src: (build_vector:v4i32)<<P:Predicate_immAllZerosV>> - Complexity = 4
              // Dst: (V_SET0:v4i32)
/*12048*/   /*Scope*/ 13, /*->12062*/
/*12049*/     OPC_CheckPredicate, 72, // Predicate_immAllOnesV
/*12051*/     OPC_CheckType, MVT::v4i32,
/*12053*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12055*/     OPC_MorphNodeTo, TARGET_VAL(PPC::V_SETALLONES), 0,
                  1/*#VTs*/, MVT::v4i32, 0/*#Ops*/, 
              // Src: (build_vector:v4i32)<<P:Predicate_immAllOnesV>> - Complexity = 4
              // Dst: (V_SETALLONES:v4i32)
/*12062*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 107,  TARGET_VAL(ISD::BITCAST),// ->12173
/*12066*/   OPC_RecordChild0, // #0 = $src
/*12067*/   OPC_Scope, 25, /*->12094*/ // 4 children in Scope
/*12069*/     OPC_CheckChild0Type, MVT::v8i16,
/*12071*/     OPC_SwitchType /*3 cases */, 5,  MVT::v16i8,// ->12079
/*12074*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12076*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 5,  MVT::v4i32,// ->12086
/*12081*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12083*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              /*SwitchType*/ 5,  MVT::v4f32,// ->12093
/*12088*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12090*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*12094*/   /*Scope*/ 25, /*->12120*/
/*12095*/     OPC_CheckChild0Type, MVT::v4i32,
/*12097*/     OPC_SwitchType /*3 cases */, 5,  MVT::v16i8,// ->12105
/*12100*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12102*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 5,  MVT::v8i16,// ->12112
/*12107*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12109*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 5,  MVT::v4f32,// ->12119
/*12114*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12116*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*12120*/   /*Scope*/ 25, /*->12146*/
/*12121*/     OPC_CheckChild0Type, MVT::v4f32,
/*12123*/     OPC_SwitchType /*3 cases */, 5,  MVT::v16i8,// ->12131
/*12126*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12128*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 5,  MVT::v8i16,// ->12138
/*12133*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12135*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 5,  MVT::v4i32,// ->12145
/*12140*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12142*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              0, // EndSwitchType
/*12146*/   /*Scope*/ 25, /*->12172*/
/*12147*/     OPC_CheckChild0Type, MVT::v16i8,
/*12149*/     OPC_SwitchType /*3 cases */, 5,  MVT::v8i16,// ->12157
/*12152*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12154*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 5,  MVT::v4i32,// ->12164
/*12159*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12161*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              /*SwitchType*/ 5,  MVT::v4f32,// ->12171
/*12166*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12168*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*12172*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::RET_FLAG),// ->12185
/*12176*/   OPC_RecordNode,   // #0 = 'retflag' chained node
/*12177*/   OPC_CaptureGlueInput,
/*12178*/   OPC_EmitMergeInputChains1_0,
/*12179*/   OPC_MorphNodeTo, TARGET_VAL(PPC::BLR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (retflag) - Complexity = 3
            // Dst: (BLR)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->12204
/*12188*/   OPC_RecordNode,   // #0 = 'br' chained node
/*12189*/   OPC_RecordChild1, // #1 = $dst
/*12190*/   OPC_MoveChild, 1,
/*12192*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*12195*/   OPC_MoveParent,
/*12196*/   OPC_EmitMergeInputChains1_0,
/*12197*/   OPC_MorphNodeTo, TARGET_VAL(PPC::B), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$dst) - Complexity = 3
            // Dst: (B (bb:Other):$dst)
          /*SwitchOpcode*/ 24,  TARGET_VAL(PPCISD::BCTRL),// ->12231
/*12207*/   OPC_RecordNode,   // #0 = 'PPCbctrl' chained node
/*12208*/   OPC_CaptureGlueInput,
/*12209*/   OPC_Scope, 9, /*->12220*/ // 2 children in Scope
/*12211*/     OPC_CheckPatternPredicate, 1, // (!PPCSubTarget.isPPC64())
/*12213*/     OPC_EmitMergeInputChains1_0,
/*12214*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (PPCbctrl) - Complexity = 3
              // Dst: (BCTRL)
/*12220*/   /*Scope*/ 9, /*->12230*/
/*12221*/     OPC_CheckPatternPredicate, 2, // (PPCSubTarget.isPPC64())
/*12223*/     OPC_EmitMergeInputChains1_0,
/*12224*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (PPCbctrl) - Complexity = 3
              // Dst: (BCTRL8)
/*12230*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 8,  TARGET_VAL(ISD::TRAP),// ->12242
/*12234*/   OPC_RecordNode,   // #0 = 'trap' chained node
/*12235*/   OPC_EmitMergeInputChains1_0,
/*12236*/   OPC_MorphNodeTo, TARGET_VAL(PPC::TRAP), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (trap) - Complexity = 3
            // Dst: (TRAP)
          /*SwitchOpcode*/ 10,  TARGET_VAL(PPCISD::CR6SET),// ->12255
/*12245*/   OPC_RecordNode,   // #0 = 'PPCcr6set' chained node
/*12246*/   OPC_CaptureGlueInput,
/*12247*/   OPC_EmitMergeInputChains1_0,
/*12248*/   OPC_MorphNodeTo, TARGET_VAL(PPC::CR6SET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
            // Src: (PPCcr6set) - Complexity = 3
            // Dst: (CR6SET:i32)
          /*SwitchOpcode*/ 10,  TARGET_VAL(PPCISD::CR6UNSET),// ->12268
/*12258*/   OPC_RecordNode,   // #0 = 'PPCcr6unset' chained node
/*12259*/   OPC_CaptureGlueInput,
/*12260*/   OPC_EmitMergeInputChains1_0,
/*12261*/   OPC_MorphNodeTo, TARGET_VAL(PPC::CR6UNSET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
            // Src: (PPCcr6unset) - Complexity = 3
            // Dst: (CR6UNSET:i32)
          /*SwitchOpcode*/ 29,  TARGET_VAL(PPCISD::MTCTR),// ->12300
/*12271*/   OPC_RecordNode,   // #0 = 'PPCmtctr' chained node
/*12272*/   OPC_CaptureGlueInput,
/*12273*/   OPC_RecordChild1, // #1 = $rS
/*12274*/   OPC_Scope, 11, /*->12287*/ // 2 children in Scope
/*12276*/     OPC_CheckChild1Type, MVT::i32,
/*12278*/     OPC_EmitMergeInputChains1_0,
/*12279*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (PPCmtctr i32:i32:$rS) - Complexity = 3
              // Dst: (MTCTR:i32 i32:i32:$rS)
/*12287*/   /*Scope*/ 11, /*->12299*/
/*12288*/     OPC_CheckChild1Type, MVT::i64,
/*12290*/     OPC_EmitMergeInputChains1_0,
/*12291*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (PPCmtctr i64:i64:$rS) - Complexity = 3
              // Dst: (MTCTR8:i64 i64:i64:$rS)
/*12299*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(PPCISD::VPERM),// ->12320
/*12303*/   OPC_RecordChild0, // #0 = $vA
/*12304*/   OPC_RecordChild1, // #1 = $vB
/*12305*/   OPC_RecordChild2, // #2 = $vC
/*12306*/   OPC_CheckType, MVT::v16i8,
/*12308*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12310*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VPERM), 0,
                1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvperm:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, v16i8:v16i8:$vC) - Complexity = 3
            // Dst: (VPERM:v16i8 ?:v16i8:$vA, ?:v16i8:$vB, ?:v16i8:$vC)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FP_TO_SINT),// ->12338
/*12323*/   OPC_RecordChild0, // #0 = $vA
/*12324*/   OPC_CheckChild0Type, MVT::v4f32,
/*12326*/   OPC_CheckType, MVT::v4i32,
/*12328*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12330*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS_0), 0,
                1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
            // Src: (fp_to_sint:v4i32 v4f32:v4f32:$vA) - Complexity = 3
            // Dst: (VCTSXS_0:v4i32 ?:v4f32:$vA)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FP_TO_UINT),// ->12356
/*12341*/   OPC_RecordChild0, // #0 = $vA
/*12342*/   OPC_CheckChild0Type, MVT::v4f32,
/*12344*/   OPC_CheckType, MVT::v4i32,
/*12346*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12348*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS_0), 0,
                1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
            // Src: (fp_to_uint:v4i32 v4f32:v4f32:$vA) - Complexity = 3
            // Dst: (VCTUXS_0:v4i32 ?:v4f32:$vA)
          /*SwitchOpcode*/ 17,  TARGET_VAL(PPCISD::VMADDFP),// ->12376
/*12359*/   OPC_RecordChild0, // #0 = $A
/*12360*/   OPC_RecordChild1, // #1 = $B
/*12361*/   OPC_RecordChild2, // #2 = $C
/*12362*/   OPC_CheckType, MVT::v4f32,
/*12364*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12366*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvmaddfp:v4f32 v4f32:v4f32:$A, v4f32:v4f32:$B, v4f32:v4f32:$C) - Complexity = 3
            // Dst: (VMADDFP:v4f32 ?:v4f32:$A, ?:v4f32:$B, ?:v4f32:$C)
          /*SwitchOpcode*/ 17,  TARGET_VAL(PPCISD::VNMSUBFP),// ->12396
/*12379*/   OPC_RecordChild0, // #0 = $A
/*12380*/   OPC_RecordChild1, // #1 = $B
/*12381*/   OPC_RecordChild2, // #2 = $C
/*12382*/   OPC_CheckType, MVT::v4f32,
/*12384*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12386*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvnmsubfp:v4f32 v4f32:v4f32:$A, v4f32:v4f32:$B, v4f32:v4f32:$C) - Complexity = 3
            // Dst: (VNMSUBFP:v4f32 ?:v4f32:$A, ?:v4f32:$B, ?:v4f32:$C)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::SINT_TO_FP),// ->12414
/*12399*/   OPC_RecordChild0, // #0 = $vA
/*12400*/   OPC_CheckChild0Type, MVT::v4i32,
/*12402*/   OPC_CheckType, MVT::v4f32,
/*12404*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12406*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX_0), 0,
                1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
            // Src: (sint_to_fp:v4f32 v4i32:v4i32:$vA) - Complexity = 3
            // Dst: (VCFSX_0:v4f32 ?:v4i32:$vA)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::UINT_TO_FP),// ->12432
/*12417*/   OPC_RecordChild0, // #0 = $vA
/*12418*/   OPC_CheckChild0Type, MVT::v4i32,
/*12420*/   OPC_CheckType, MVT::v4f32,
/*12422*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12424*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX_0), 0,
                1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
            // Src: (uint_to_fp:v4f32 v4i32:v4i32:$vA) - Complexity = 3
            // Dst: (VCFUX_0:v4f32 ?:v4i32:$vA)
          /*SwitchOpcode*/ 13,  TARGET_VAL(PPCISD::LOAD_TOC),// ->12448
/*12435*/   OPC_RecordNode,   // #0 = 'PPCload_toc' chained node
/*12436*/   OPC_CaptureGlueInput,
/*12437*/   OPC_RecordChild1, // #1 = $reg
/*12438*/   OPC_CheckChild1Type, MVT::i64,
/*12440*/   OPC_EmitMergeInputChains1_0,
/*12441*/   OPC_MorphNodeTo, TARGET_VAL(PPC::LDinto_toc), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (PPCload_toc i64:i64:$reg) - Complexity = 3
            // Dst: (LDinto_toc i64:i64:$reg)
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::TOC_RESTORE),// ->12460
/*12451*/   OPC_RecordNode,   // #0 = 'PPCtoc_restore' chained node
/*12452*/   OPC_CaptureGlueInput,
/*12453*/   OPC_EmitMergeInputChains1_0,
/*12454*/   OPC_MorphNodeTo, TARGET_VAL(PPC::LDtoc_restore), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (PPCtoc_restore) - Complexity = 3
            // Dst: (LDtoc_restore)
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 12462 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 115
  // #OPC_RecordNode                     = 45
  // #OPC_RecordChild                    = 535
  // #OPC_RecordMemRef                   = 11
  // #OPC_CaptureGlueInput               = 14
  // #OPC_MoveChild                      = 154
  // #OPC_MoveParent                     = 373
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 245
  // #OPC_CheckPredicate                 = 199
  // #OPC_CheckOpcode                    = 92
  // #OPC_SwitchOpcode                   = 16
  // #OPC_CheckType                      = 178
  // #OPC_SwitchType                     = 98
  // #OPC_CheckChildType                 = 55
  // #OPC_CheckInteger                   = 197
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 9
  // #OPC_CheckComplexPat                = 150
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 25
  // #OPC_EmitStringInteger              = 6
  // #OPC_EmitRegister                   = 0
  // #OPC_EmitConvertToTarget            = 74
  // #OPC_EmitMergeInputChains           = 203
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 12
  // #OPC_EmitNodeXForm                  = 38
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 12
  // #OPC_MorphNodeTo                    = 641

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (PPCSubTarget.hasAltivec());
  case 1: return (!PPCSubTarget.isPPC64());
  case 2: return (PPCSubTarget.isPPC64());
  }
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immSExt16 predicate - True if the immediate fits in a 16-bit sign extended
  // field.  Used by instructions like 'addi'.
  if (N->getValueType(0) == MVT::i32)
    return (int32_t)N->getZExtValue() == (short)N->getZExtValue();
  else
    return (int64_t)N->getZExtValue() == (short)N->getZExtValue();

  }
  case 1: { // Predicate_imm16ShiftedSExt
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // imm16ShiftedSExt predicate - True if only bits in the top 16-bits of the
  // immediate are set.  Used by instructions like 'addis'.  Identical to 
  // imm16ShiftedZExt in 32-bit mode.
  if (N->getZExtValue() & 0xFFFF) return false;
  if (N->getValueType(0) == MVT::i32)
    return true;
  // For 64-bit, make sure it is sext right.
  return N->getZExtValue() == (uint64_t)(int)N->getZExtValue();

  }
  case 2: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 3: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 4: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 5: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 6: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 7: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 8: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 9: { // Predicate_zextloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 10: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 11: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 12: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 13: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 14: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 15: { // Predicate_aligned4sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAlignment() >= 4;

  }
  case 16: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 17: { // Predicate_aligned4load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAlignment() >= 4;

  }
  case 18: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 19: { // Predicate_unaligned4sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAlignment() < 4;

  }
  case 20: { // Predicate_unaligned4load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAlignment() < 4;

  }
  case 21: { // Predicate_extloadf32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f32;

  }
  case 22: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 23: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 24: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 25: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 26: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 27: { // Predicate_itruncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 28: { // Predicate_pre_truncst
    SDNode *N = Node;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

  }
  case 29: { // Predicate_pre_truncsti8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 30: { // Predicate_pre_truncsti16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 31: { // Predicate_istore
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 32: { // Predicate_pre_store
    SDNode *N = Node;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

  }
  case 33: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 34: { // Predicate_aligned4store
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAlignment() >= 4;

  }
  case 35: { // Predicate_unaligned4store
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAlignment() < 4;

  }
  case 36: { // Predicate_pre_truncsti32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 37: { // Predicate_aligned4pre_store
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAlignment() >= 4;

  }
  case 38: { // Predicate_atomic_load_add_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 39: { // Predicate_atomic_load_add_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 40: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 41: { // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 42: { // Predicate_atomic_load_sub_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 43: { // Predicate_atomic_load_sub_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 44: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 45: { // Predicate_atomic_load_sub_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 46: { // Predicate_atomic_load_and_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 47: { // Predicate_atomic_load_and_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 48: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 49: { // Predicate_atomic_load_and_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 50: { // Predicate_atomic_load_or_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 51: { // Predicate_atomic_load_or_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 52: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 53: { // Predicate_atomic_load_or_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 54: { // Predicate_atomic_load_xor_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 55: { // Predicate_atomic_load_xor_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 56: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 57: { // Predicate_atomic_load_xor_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 58: { // Predicate_atomic_load_nand_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 59: { // Predicate_atomic_load_nand_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 60: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 61: { // Predicate_atomic_load_nand_64
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
  case 66: { // Predicate_atomic_swap_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 67: { // Predicate_atomic_swap_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 68: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 69: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 70: { // Predicate_immZExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immZExt16 predicate - True if the immediate fits in a 16-bit zero extended
  // field.  Used by instructions like 'ori'.
  return (uint64_t)N->getZExtValue() == (unsigned short)N->getZExtValue();

  }
  case 71: { // Predicate_imm16ShiftedZExt
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // imm16ShiftedZExt predicate - True if only bits in the top 16-bits of the
  // immediate are set.  Used by instructions like 'xoris'.
  return (N->getZExtValue() & ~uint64_t(0xFFFF0000)) == 0;

  }
  case 72: { // Predicate_immAllOnesV
    SDNode *N = Node;

  return ISD::isBuildVectorAllOnes(N);

  }
  case 73: { // Predicate_maskimm32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // maskImm predicate - True if immediate is a run of ones.
  unsigned mb, me;
  if (N->getValueType(0) == MVT::i32)
    return isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  else
    return false;

  }
  case 74: { // Predicate_vspltb_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 1);

  }
  case 75: { // Predicate_vsplth_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 2);

  }
  case 76: { // Predicate_vspltw_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 4);

  }
  case 77: { // Predicate_vsldoi_unary_shuffle
    SDNode *N = Node;

  return PPC::isVSLDOIShuffleMask(N, true) != -1;

  }
  case 78: { // Predicate_vpkuwum_unary_shuffle
    SDNode *N = Node;

  return PPC::isVPKUWUMShuffleMask(cast<ShuffleVectorSDNode>(N), true);

  }
  case 79: { // Predicate_vpkuhum_unary_shuffle
    SDNode *N = Node;

  return PPC::isVPKUHUMShuffleMask(cast<ShuffleVectorSDNode>(N), true);

  }
  case 80: { // Predicate_vmrglb_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 1, true);

  }
  case 81: { // Predicate_vmrglh_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 2, true);

  }
  case 82: { // Predicate_vmrglw_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 4, true);

  }
  case 83: { // Predicate_vmrghb_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 1, true);

  }
  case 84: { // Predicate_vmrghh_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 2, true);

  }
  case 85: { // Predicate_vmrghw_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 4, true);

  }
  case 86: { // Predicate_vsldoi_shuffle
    SDNode *N = Node;

  return PPC::isVSLDOIShuffleMask(N, false) != -1;

  }
  case 87: { // Predicate_vmrghb_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 1, false);

  }
  case 88: { // Predicate_vmrghh_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 2, false);

  }
  case 89: { // Predicate_vmrghw_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 4, false);

  }
  case 90: { // Predicate_vmrglb_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 1, false);

  }
  case 91: { // Predicate_vmrglh_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 2, false);

  }
  case 92: { // Predicate_vmrglw_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 4, false);

  }
  case 93: { // Predicate_vpkuhum_shuffle
    SDNode *N = Node;

  return PPC::isVPKUHUMShuffleMask(cast<ShuffleVectorSDNode>(N), false);

  }
  case 94: { // Predicate_vpkuwum_shuffle
    SDNode *N = Node;

  return PPC::isVPKUWUMShuffleMask(cast<ShuffleVectorSDNode>(N), false);

  }
  case 95: { // Predicate_vecspltisb
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 1, *CurDAG).getNode() != 0;

  }
  case 96: { // Predicate_vecspltish
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 2, *CurDAG).getNode() != 0;

  }
  case 97: { // Predicate_vecspltisw
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 4, *CurDAG).getNode() != 0;

  }
  case 98: { // Predicate_immAllZerosV
    SDNode *N = Node;

  return ISD::isBuildVectorAllZeros(N);

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
    return SelectAddrIdxOnly(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectAddrImm(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+2);
    return SelectAddrIdx(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return SelectAddrImmShift(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 4:
    Result.resize(NextRes+1);
    return SelectAddrImmOffs(N, Result[NextRes+0].first);
  case 5:
    Result.resize(NextRes+1);
    return SelectAddr(N, Result[NextRes+0].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // HI16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  return getI32Imm((unsigned)N->getZExtValue() >> 16);

  }
  case 1: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the low 16 bits.
  return getI32Imm((unsigned short)N->getZExtValue());

  }
  case 2: {  // HA16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  signed int Val = N->getZExtValue();
  return getI32Imm((Val - (signed short)Val) >> 16);

  }
  case 3: {  // MB
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the start bit of a mask
  unsigned mb = 0, me;
  (void)isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  return getI32Imm(mb);

  }
  case 4: {  // ME
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the end bit of a mask
  unsigned mb, me = 0;
  (void)isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  return getI32Imm(me);

  }
  case 5: {  // SHL32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 31 - imm
  return getI32Imm(31 - N->getZExtValue());

  }
  case 6: {  // SHL64
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 63 - imm
  return getI32Imm(63 - N->getZExtValue());

  }
  case 7: {  // SRL32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 32 - imm
  return N->getZExtValue() ? getI32Imm(32 - N->getZExtValue()) : getI32Imm(0);

  }
  case 8: {  // SRL64
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 64 - imm
  return N->getZExtValue() ? getI32Imm(64 - N->getZExtValue()) : getI32Imm(0);

  }
  case 9: {  // VSPLTB_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 1));

  }
  case 10: {  // VSPLTH_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 2));

  }
  case 11: {  // VSPLTW_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 4));

  }
  case 12: {  // VSLDOI_unary_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::isVSLDOIShuffleMask(N, true));

  }
  case 13: {  // VSLDOI_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::isVSLDOIShuffleMask(N, false));

  }
  case 14: {  // VSPLTISB_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 1, *CurDAG);

  }
  case 15: {  // VSPLTISH_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 2, *CurDAG);

  }
  case 16: {  // VSPLTISW_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 4, *CurDAG);

  }
  }
}

