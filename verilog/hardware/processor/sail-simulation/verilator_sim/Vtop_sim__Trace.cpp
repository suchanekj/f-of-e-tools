// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_sim__Syms.h"


//======================

void Vtop_sim::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtop_sim* t = (Vtop_sim*)userthis;
    Vtop_sim__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vtop_sim::traceChgThis(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 0xdU))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 0xdU)) | (vlTOPp->__Vm_traceActivity 
                                                >> 0xfU))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 0xdU)) | (vlTOPp->__Vm_traceActivity 
                                                >> 0x10U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity 
                                 | (vlTOPp->__Vm_traceActivity 
                                    >> 0xdU)) | (vlTOPp->__Vm_traceActivity 
                                                 >> 0x10U)) 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 0x12U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 0xeU))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 0xfU))))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 0x10U))))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 0x10U)) | (vlTOPp->__Vm_traceActivity 
                                                 >> 0x12U))))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 0x11U))))) {
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 0x12U))))) {
            vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x20U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__17(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x40U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__18(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x80U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__19(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x100U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__20(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x200U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__21(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x400U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__22(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x800U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__23(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x1000U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__24(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x2000U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__25(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x8000U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__26(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__27(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtop_sim::traceChgThis__2(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA1),32);
        vcdp->chgBus(c+9,(vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputB1),32);
        vcdp->chgBus(c+17,(vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA2),32);
        vcdp->chgBus(c+25,(vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputB2),32);
        vcdp->chgBus(c+33,(vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputB3),5);
        vcdp->chgBit(c+41,(vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__addsub_in));
        vcdp->chgBus(c+49,(vlTOPp->top_sim__DOT__processor__DOT__branch_predictor_FSM__DOT__k),32);
    }
}

void Vtop_sim::traceChgThis__3(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*159:0*/ __Vtemp42[5];
    WData/*191:0*/ __Vtemp45[6];
    // Body
    {
        vcdp->chgBus(c+57,(vlTOPp->top_sim__DOT__processor__DOT__pc_out),32);
        vcdp->chgBus(c+65,(vlTOPp->top_sim__DOT__inst_mem__DOT__instruction_memory
                           [(0xfffU & (vlTOPp->top_sim__DOT__processor__DOT__pc_out 
                                       >> 2U))]),32);
        vcdp->chgBit(c+73,(vlTOPp->top_sim__DOT__processor__DOT__pcsrc));
        vcdp->chgBus(c+81,(vlTOPp->top_sim__DOT__processor__DOT__inst_mux_out),32);
        vcdp->chgBus(c+89,(((IData)(vlTOPp->top_sim__DOT__processor__DOT__Fence_signal)
                             ? vlTOPp->top_sim__DOT__processor__DOT__pc_out
                             : ((0xffff0000U & (((vlTOPp->top_sim__DOT__processor__DOT__pc_out 
                                                  >> 0x10U) 
                                                 + 
                                                 (1U 
                                                  & (((IData)(4U) 
                                                      + 
                                                      (0xffffU 
                                                       & vlTOPp->top_sim__DOT__processor__DOT__pc_out)) 
                                                     >> 0x10U))) 
                                                << 0x10U)) 
                                | (0xffffU & ((IData)(4U) 
                                              + vlTOPp->top_sim__DOT__processor__DOT__pc_out))))),32);
        vcdp->chgQuad(c+97,(vlTOPp->top_sim__DOT__processor__DOT__if_id_out),64);
        vcdp->chgArray(c+113,(vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out),155);
        vcdp->chgArray(c+153,(vlTOPp->top_sim__DOT__processor__DOT__mem_wb_out),117);
        vcdp->chgBit(c+185,((1U & ((((~ (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                 >> 0x25U))) 
                                     & (~ (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                   >> 0x24U)))) 
                                    & (~ (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                  >> 0x23U)))) 
                                   & (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                              >> 0x20U))))));
        vcdp->chgBit(c+193,((1U & ((((~ ((IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                  >> 0x24U)) 
                                         | (IData)(
                                                   (vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                    >> 0x25U)))) 
                                     | (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                >> 0x22U))) 
                                    | (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                               >> 0x24U))) 
                                   & (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                              >> 0x20U))))));
        vcdp->chgBit(c+201,((1U & (((~ (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                >> 0x26U))) 
                                    & (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                               >> 0x25U))) 
                                   & (~ (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                 >> 0x24U)))))));
        vcdp->chgBit(c+209,((1U & ((((~ (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                 >> 0x25U))) 
                                     & (~ (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                   >> 0x24U)))) 
                                    & (~ (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                  >> 0x23U)))) 
                                   & (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                              >> 0x21U))))));
        vcdp->chgBit(c+217,((1U & (((IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                             >> 0x26U)) 
                                    & (~ (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                  >> 0x24U)))) 
                                   & (~ (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                 >> 0x22U)))))));
        vcdp->chgBit(c+225,((1U & ((((IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                              >> 0x26U)) 
                                     & (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                >> 0x25U))) 
                                    & (~ (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                  >> 0x24U)))) 
                                   & (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                              >> 0x22U))))));
        vcdp->chgBit(c+233,((1U & (((((IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                               >> 0x26U)) 
                                      & (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                 >> 0x25U))) 
                                     & (~ (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                   >> 0x24U)))) 
                                    & (~ (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                  >> 0x23U)))) 
                                   & (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                              >> 0x22U))))));
        vcdp->chgBit(c+241,((1U & ((~ ((IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                >> 0x26U)) 
                                       | (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                  >> 0x24U)))) 
                                   | (~ (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                 >> 0x25U)))))));
        vcdp->chgBit(c+249,((1U & (((((~ (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                  >> 0x26U))) 
                                      & (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                 >> 0x25U))) 
                                     & (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                >> 0x24U))) 
                                    & (~ (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                  >> 0x23U)))) 
                                   & (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                              >> 0x22U))))));
        vcdp->chgBit(c+257,((1U & (((((~ (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                  >> 0x26U))) 
                                      & (~ (IData)(
                                                   (vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                    >> 0x25U)))) 
                                     & (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                >> 0x24U))) 
                                    & (~ (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                  >> 0x23U)))) 
                                   & (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                              >> 0x22U))))));
        vcdp->chgBit(c+265,(vlTOPp->top_sim__DOT__processor__DOT__Fence_signal));
        vcdp->chgBit(c+273,(vlTOPp->top_sim__DOT__processor__DOT__CSRR_signal));
        vcdp->chgBit(c+281,(vlTOPp->top_sim__DOT__processor__DOT__CSRRI_signal));
        vcdp->chgBus(c+289,(vlTOPp->top_sim__DOT__processor__DOT__cont_mux_out),32);
        vcdp->chgBus(c+297,(vlTOPp->top_sim__DOT__processor__DOT__imm_out),32);
        vcdp->chgBus(c+305,(((IData)(vlTOPp->top_sim__DOT__processor__DOT__CSRRI_signal)
                              ? (0x1fU & (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                  >> 0x2fU)))
                              : ((((vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrAddr_buf 
                                    == (IData)(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__rdAddrA_buf)) 
                                   & (IData)(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__write_buf)) 
                                  & (0U != vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrAddr_buf))
                                  ? vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrData_buf
                                  : vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regDatA))),32);
        vcdp->chgBus(c+313,(((IData)(vlTOPp->top_sim__DOT__processor__DOT__CSRR_signal)
                              ? vlTOPp->top_sim__DOT__processor__DOT__rdValOut_CSR
                              : ((((vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrAddr_buf 
                                    == (IData)(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__rdAddrB_buf)) 
                                   & (IData)(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__write_buf)) 
                                  & (0U != vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrAddr_buf))
                                  ? vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrData_buf
                                  : vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regDatB))),32);
        vcdp->chgBus(c+321,(((IData)(vlTOPp->top_sim__DOT__processor__DOT__CSRRI_signal)
                              ? 0U : (0x1fU & (IData)(
                                                      (vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                       >> 0x2fU))))),32);
        vcdp->chgBus(c+329,(((IData)(vlTOPp->top_sim__DOT__processor__DOT__CSRR_signal)
                              ? 0U : (0x1fU & (IData)(
                                                      (vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                       >> 0x34U))))),32);
        vcdp->chgBus(c+337,(((8U & ((~ (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                >> 0x2eU))) 
                                    << 3U)) | (IData)(vlTOPp->top_sim__DOT__processor__DOT__sign_mask_gen_inst__DOT__mask))),4);
        vcdp->chgBus(c+345,(vlTOPp->top_sim__DOT__processor__DOT__alu_ctl),7);
        vcdp->chgBus(c+353,(((0x100U & vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[0U])
                              ? ((vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[2U] 
                                  << 0x17U) | (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[1U] 
                                               >> 9U))
                              : ((vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[3U] 
                                  << 0x16U) | (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[2U] 
                                               >> 0xaU)))),32);
        vcdp->chgBus(c+361,(vlTOPp->top_sim__DOT__processor__DOT__mem_csrr_mux_out),32);
        vcdp->chgBus(c+369,(vlTOPp->top_sim__DOT__processor__DOT__wb_mux_out),32);
        vcdp->chgBus(c+377,(((0xffff0000U & (((vlTOPp->top_sim__DOT__processor__DOT__pc_out 
                                               >> 0x10U) 
                                              + (1U 
                                                 & (((IData)(4U) 
                                                     + 
                                                     (0xffffU 
                                                      & vlTOPp->top_sim__DOT__processor__DOT__pc_out)) 
                                                    >> 0x10U))) 
                                             << 0x10U)) 
                             | (0xffffU & ((IData)(4U) 
                                           + vlTOPp->top_sim__DOT__processor__DOT__pc_out)))),32);
        vcdp->chgBus(c+385,(vlTOPp->top_sim__DOT__processor__DOT__branch_predictor_addr),32);
        vcdp->chgBit(c+393,(vlTOPp->top_sim__DOT__processor__DOT__predict));
        vcdp->chgBus(c+401,(((IData)(vlTOPp->top_sim__DOT__processor__DOT__predict)
                              ? vlTOPp->top_sim__DOT__processor__DOT__branch_predictor_addr
                              : ((IData)(vlTOPp->top_sim__DOT__processor__DOT__Fence_signal)
                                  ? vlTOPp->top_sim__DOT__processor__DOT__pc_out
                                  : ((0xffff0000U & 
                                      (((vlTOPp->top_sim__DOT__processor__DOT__pc_out 
                                         >> 0x10U) 
                                        + (1U & (((IData)(4U) 
                                                  + 
                                                  (0xffffU 
                                                   & vlTOPp->top_sim__DOT__processor__DOT__pc_out)) 
                                                 >> 0x10U))) 
                                       << 0x10U)) | 
                                     (0xffffU & ((IData)(4U) 
                                                 + vlTOPp->top_sim__DOT__processor__DOT__pc_out)))))),32);
        vcdp->chgBit(c+409,(vlTOPp->top_sim__DOT__processor__DOT__actual_branch_decision));
        vcdp->chgBit(c+417,(vlTOPp->top_sim__DOT__processor__DOT__mistake_trigger));
        vcdp->chgBit(c+425,(((IData)(vlTOPp->top_sim__DOT__processor__DOT__pcsrc) 
                             | (IData)(vlTOPp->top_sim__DOT__processor__DOT__mistake_trigger))));
        vcdp->chgBit(c+433,(((((IData)(vlTOPp->top_sim__DOT__processor__DOT__pcsrc) 
                               | (IData)(vlTOPp->top_sim__DOT__processor__DOT__predict)) 
                              | (IData)(vlTOPp->top_sim__DOT__processor__DOT__mistake_trigger)) 
                             | (IData)(vlTOPp->top_sim__DOT__processor__DOT__Fence_signal))));
        vcdp->chgBus(c+441,((3U & (vlTOPp->top_sim__DOT__processor__DOT__branch_predictor_addr 
                                   >> 4U))),2);
        vcdp->chgBus(c+449,(vlTOPp->top_sim__DOT__processor__DOT__branch_predictor_FSM__DOT__LHT
                            [(3U & (vlTOPp->top_sim__DOT__processor__DOT__branch_predictor_addr 
                                    >> 4U))]),2);
        vcdp->chgBus(c+457,(vlTOPp->top_sim__DOT__processor__DOT__branch_predictor_FSM__DOT__LPT
                            [vlTOPp->top_sim__DOT__processor__DOT__branch_predictor_FSM__DOT__LHT
                            [(3U & (vlTOPp->top_sim__DOT__processor__DOT__branch_predictor_addr 
                                    >> 4U))]]),2);
        vcdp->chgBus(c+465,(((vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[2U] 
                              << 0x17U) | (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[1U] 
                                           >> 9U))),32);
        vcdp->chgBus(c+473,((0xffffU & (vlTOPp->top_sim__DOT__processor__DOT__pc_out 
                                        >> 0x10U))),16);
        vcdp->chgBus(c+481,((0xffffU & vlTOPp->top_sim__DOT__processor__DOT__pc_out)),16);
        vcdp->chgBit(c+489,((1U & (((0xffffU & (vlTOPp->top_sim__DOT__processor__DOT__pc_out 
                                                >> 0x10U)) 
                                    + (1U & (((IData)(4U) 
                                              + (0xffffU 
                                                 & vlTOPp->top_sim__DOT__processor__DOT__pc_out)) 
                                             >> 0x10U))) 
                                   >> 0x10U))));
        vcdp->chgBus(c+497,((0xffffU & ((vlTOPp->top_sim__DOT__processor__DOT__pc_out 
                                         >> 0x10U) 
                                        + (1U & (((IData)(4U) 
                                                  + 
                                                  (0xffffU 
                                                   & vlTOPp->top_sim__DOT__processor__DOT__pc_out)) 
                                                 >> 0x10U))))),16);
        vcdp->chgBus(c+505,((0xffffU & ((IData)(4U) 
                                        + vlTOPp->top_sim__DOT__processor__DOT__pc_out))),16);
        vcdp->chgBit(c+513,((1U & (((IData)(4U) + (0xffffU 
                                                   & vlTOPp->top_sim__DOT__processor__DOT__pc_out)) 
                                   >> 0x10U))));
        vcdp->chgQuad(c+521,((((QData)((IData)(vlTOPp->top_sim__DOT__processor__DOT__inst_mux_out)) 
                               << 0x20U) | (QData)((IData)(vlTOPp->top_sim__DOT__processor__DOT__pc_out)))),64);
        vcdp->chgBus(c+537,((0x7fU & (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                              >> 0x20U)))),7);
        vcdp->chgBus(c+545,(vlTOPp->top_sim__DOT__processor__DOT____Vcellinp__cont_mux__input0),32);
        vcdp->chgBit(c+553,((1U & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[0U] 
                                   >> 2U))));
        vcdp->chgBus(c+561,((0x1fU & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[4U] 
                                      >> 0xaU))),5);
        vcdp->chgBus(c+569,((0x1fU & (vlTOPp->top_sim__DOT__processor__DOT__inst_mux_out 
                                      >> 0xfU))),5);
        vcdp->chgBus(c+577,((0x1fU & (vlTOPp->top_sim__DOT__processor__DOT__inst_mux_out 
                                      >> 0x14U))),5);
        vcdp->chgBus(c+585,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[0]),32);
        vcdp->chgBus(c+586,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[1]),32);
        vcdp->chgBus(c+587,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[2]),32);
        vcdp->chgBus(c+588,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[3]),32);
        vcdp->chgBus(c+589,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[4]),32);
        vcdp->chgBus(c+590,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[5]),32);
        vcdp->chgBus(c+591,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[6]),32);
        vcdp->chgBus(c+592,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[7]),32);
        vcdp->chgBus(c+593,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[8]),32);
        vcdp->chgBus(c+594,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[9]),32);
        vcdp->chgBus(c+595,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[10]),32);
        vcdp->chgBus(c+596,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[11]),32);
        vcdp->chgBus(c+597,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[12]),32);
        vcdp->chgBus(c+598,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[13]),32);
        vcdp->chgBus(c+599,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[14]),32);
        vcdp->chgBus(c+600,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[15]),32);
        vcdp->chgBus(c+601,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[16]),32);
        vcdp->chgBus(c+602,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[17]),32);
        vcdp->chgBus(c+603,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[18]),32);
        vcdp->chgBus(c+604,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[19]),32);
        vcdp->chgBus(c+605,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[20]),32);
        vcdp->chgBus(c+606,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[21]),32);
        vcdp->chgBus(c+607,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[22]),32);
        vcdp->chgBus(c+608,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[23]),32);
        vcdp->chgBus(c+609,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[24]),32);
        vcdp->chgBus(c+610,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[25]),32);
        vcdp->chgBus(c+611,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[26]),32);
        vcdp->chgBus(c+612,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[27]),32);
        vcdp->chgBus(c+613,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[28]),32);
        vcdp->chgBus(c+614,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[29]),32);
        vcdp->chgBus(c+615,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[30]),32);
        vcdp->chgBus(c+616,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regfile[31]),32);
        vcdp->chgBus(c+841,((IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                     >> 0x20U))),32);
        vcdp->chgBus(c+849,(((8U & ((IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                             >> 0x3eU)) 
                                    << 3U)) | (7U & (IData)(
                                                            (vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                             >> 0x2cU))))),4);
        vcdp->chgBus(c+857,((7U & (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                           >> 0x2cU)))),3);
        vcdp->chgBus(c+865,(vlTOPp->top_sim__DOT__processor__DOT__sign_mask_gen_inst__DOT__mask),3);
        vcdp->chgBit(c+873,((1U & (vlTOPp->top_sim__DOT__processor__DOT__mem_wb_out[0U] 
                                   >> 3U))));
        vcdp->chgBus(c+881,((0xfffU & (vlTOPp->top_sim__DOT__processor__DOT__mem_wb_out[3U] 
                                       >> 9U))),12);
        vcdp->chgBus(c+889,(((vlTOPp->top_sim__DOT__processor__DOT__mem_wb_out[1U] 
                              << 0x1cU) | (vlTOPp->top_sim__DOT__processor__DOT__mem_wb_out[0U] 
                                           >> 4U))),32);
        vcdp->chgBus(c+897,((0xfffU & (vlTOPp->top_sim__DOT__processor__DOT__inst_mux_out 
                                       >> 0x14U))),12);
        vcdp->chgBus(c+905,((0x1fU & (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                              >> 0x2fU)))),32);
        vcdp->chgBus(c+913,((0x1fU & (IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                              >> 0x34U)))),32);
        __Vtemp42[4U] = ((0xf800000U & ((IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                 >> 0x27U)) 
                                        << 0x17U)) 
                         | ((0xfff80000U & ((0x400000U 
                                             & ((~ (IData)(
                                                           (vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                            >> 0x2eU))) 
                                                << 0x16U)) 
                                            | ((IData)(vlTOPp->top_sim__DOT__processor__DOT__sign_mask_gen_inst__DOT__mask) 
                                               << 0x13U))) 
                            | ((0xfffff000U & ((IData)(vlTOPp->top_sim__DOT__processor__DOT__alu_ctl) 
                                               << 0xcU)) 
                               | (0xfffU & ((IData)(
                                                    ((((QData)((IData)(vlTOPp->top_sim__DOT__processor__DOT__imm_out)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        ((IData)(vlTOPp->top_sim__DOT__processor__DOT__CSRR_signal)
                                                                          ? vlTOPp->top_sim__DOT__processor__DOT__rdValOut_CSR
                                                                          : 
                                                                         ((((vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrAddr_buf 
                                                                             == (IData)(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__rdAddrB_buf)) 
                                                                            & (IData)(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__write_buf)) 
                                                                           & (0U 
                                                                              != vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrAddr_buf))
                                                                           ? vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrData_buf
                                                                           : vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regDatB))))) 
                                                     >> 0x20U)) 
                                            >> 0x14U)))));
        __Vtemp45[0U] = ((0xfffff000U & ((IData)(vlTOPp->top_sim__DOT__processor__DOT__if_id_out) 
                                         << 0xcU)) 
                         | ((0xf00U & (vlTOPp->top_sim__DOT__processor__DOT__cont_mux_out 
                                       << 1U)) | (((IData)(vlTOPp->top_sim__DOT__processor__DOT__predict) 
                                                   << 7U) 
                                                  | (0x7fU 
                                                     & vlTOPp->top_sim__DOT__processor__DOT__cont_mux_out))));
        __Vtemp45[1U] = ((0xfffU & ((IData)(vlTOPp->top_sim__DOT__processor__DOT__if_id_out) 
                                    >> 0x14U)) | (0xfffff000U 
                                                  & (((IData)(vlTOPp->top_sim__DOT__processor__DOT__CSRRI_signal)
                                                       ? 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                                  >> 0x2fU)))
                                                       : 
                                                      ((((vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrAddr_buf 
                                                          == (IData)(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__rdAddrA_buf)) 
                                                         & (IData)(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__write_buf)) 
                                                        & (0U 
                                                           != vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrAddr_buf))
                                                        ? vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrData_buf
                                                        : vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regDatA)) 
                                                     << 0xcU)));
        __Vtemp45[2U] = ((0xfffU & (((IData)(vlTOPp->top_sim__DOT__processor__DOT__CSRRI_signal)
                                      ? (0x1fU & (IData)(
                                                         (vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                          >> 0x2fU)))
                                      : ((((vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrAddr_buf 
                                            == (IData)(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__rdAddrA_buf)) 
                                           & (IData)(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__write_buf)) 
                                          & (0U != vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrAddr_buf))
                                          ? vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrData_buf
                                          : vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regDatA)) 
                                    >> 0x14U)) | (0xfffff000U 
                                                  & ((IData)(
                                                             (((QData)((IData)(vlTOPp->top_sim__DOT__processor__DOT__imm_out)) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                ((IData)(vlTOPp->top_sim__DOT__processor__DOT__CSRR_signal)
                                                                                 ? vlTOPp->top_sim__DOT__processor__DOT__rdValOut_CSR
                                                                                 : 
                                                                                ((((vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrAddr_buf 
                                                                                == (IData)(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__rdAddrB_buf)) 
                                                                                & (IData)(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__write_buf)) 
                                                                                & (0U 
                                                                                != vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrAddr_buf))
                                                                                 ? vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrData_buf
                                                                                 : vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regDatB)))))) 
                                                     << 0xcU)));
        __Vtemp45[3U] = ((0xfffU & ((IData)((((QData)((IData)(vlTOPp->top_sim__DOT__processor__DOT__imm_out)) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((IData)(vlTOPp->top_sim__DOT__processor__DOT__CSRR_signal)
                                                                 ? vlTOPp->top_sim__DOT__processor__DOT__rdValOut_CSR
                                                                 : 
                                                                ((((vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrAddr_buf 
                                                                    == (IData)(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__rdAddrB_buf)) 
                                                                   & (IData)(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__write_buf)) 
                                                                  & (0U 
                                                                     != vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrAddr_buf))
                                                                  ? vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrData_buf
                                                                  : vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regDatB)))))) 
                                    >> 0x14U)) | (0xfffff000U 
                                                  & ((IData)(
                                                             ((((QData)((IData)(vlTOPp->top_sim__DOT__processor__DOT__imm_out)) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                ((IData)(vlTOPp->top_sim__DOT__processor__DOT__CSRR_signal)
                                                                                 ? vlTOPp->top_sim__DOT__processor__DOT__rdValOut_CSR
                                                                                 : 
                                                                                ((((vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrAddr_buf 
                                                                                == (IData)(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__rdAddrB_buf)) 
                                                                                & (IData)(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__write_buf)) 
                                                                                & (0U 
                                                                                != vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrAddr_buf))
                                                                                 ? vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrData_buf
                                                                                 : vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regDatB))))) 
                                                              >> 0x20U)) 
                                                     << 0xcU)));
        __Vtemp45[4U] = ((0xf0000000U & (((IData)(vlTOPp->top_sim__DOT__processor__DOT__CSRRI_signal)
                                           ? 0U : (0x1fU 
                                                   & (IData)(
                                                             (vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                              >> 0x2fU)))) 
                                         << 0x1cU)) 
                         | __Vtemp42[4U]);
        __Vtemp45[5U] = ((0x3ffc0U & ((IData)((vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                               >> 0x34U)) 
                                      << 6U)) | ((0xfffffffeU 
                                                  & (((IData)(vlTOPp->top_sim__DOT__processor__DOT__CSRR_signal)
                                                       ? 0U
                                                       : 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                                  >> 0x34U)))) 
                                                     << 1U)) 
                                                 | (0xfffffffU 
                                                    & (((IData)(vlTOPp->top_sim__DOT__processor__DOT__CSRRI_signal)
                                                         ? 0U
                                                         : 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlTOPp->top_sim__DOT__processor__DOT__if_id_out 
                                                                    >> 0x2fU)))) 
                                                       >> 4U))));
        vcdp->chgArray(c+921,(__Vtemp45),178);
        vcdp->chgBit(c+969,((1U & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[0U] 
                                   >> 6U))));
        vcdp->chgBit(c+977,((1U & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[0U] 
                                   >> 7U))));
        vcdp->chgBit(c+985,((1U & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[2U] 
                                   >> 9U))));
        vcdp->chgBit(c+993,((1U & vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[0U])));
        vcdp->chgBus(c+1001,(((vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[3U] 
                               << 0x16U) | (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[2U] 
                                            >> 0xaU))),32);
        vcdp->chgBit(c+1009,((1U & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[0U] 
                                    >> 8U))));
        vcdp->chgBus(c+1017,(((vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[4U] 
                               << 0x16U) | (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[3U] 
                                            >> 0xaU))),32);
        vcdp->chgBit(c+1025,((1U & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[0U] 
                                    >> 3U))));
        vcdp->chgBus(c+1033,(((vlTOPp->top_sim__DOT__processor__DOT__mem_wb_out[2U] 
                               << 0x1cU) | (vlTOPp->top_sim__DOT__processor__DOT__mem_wb_out[1U] 
                                            >> 4U))),32);
        vcdp->chgBus(c+1041,(((vlTOPp->top_sim__DOT__processor__DOT__mem_wb_out[3U] 
                               << 0x1cU) | (vlTOPp->top_sim__DOT__processor__DOT__mem_wb_out[2U] 
                                            >> 4U))),32);
        vcdp->chgBit(c+1049,((1U & (vlTOPp->top_sim__DOT__processor__DOT__mem_wb_out[0U] 
                                    >> 1U))));
        vcdp->chgBus(c+1057,((0x1fU & (vlTOPp->top_sim__DOT__processor__DOT__mem_wb_out[3U] 
                                       >> 4U))),5);
        vcdp->chgBit(c+1065,((1U & (vlTOPp->top_sim__DOT__processor__DOT__mem_wb_out[0U] 
                                    >> 2U))));
        vcdp->chgBus(c+1073,((0xfffU & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[4U] 
                                        >> 0xfU))),12);
        vcdp->chgBit(c+1081,((1U & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[0U] 
                                    >> 1U))));
        vcdp->chgBit(c+1089,((1U & (vlTOPp->top_sim__DOT__processor__DOT__cont_mux_out 
                                    >> 6U))));
        vcdp->chgBus(c+1097,((IData)(vlTOPp->top_sim__DOT__processor__DOT__if_id_out)),32);
        vcdp->chgBus(c+1105,(vlTOPp->top_sim__DOT__processor__DOT__branch_predictor_FSM__DOT__LHT[0]),2);
        vcdp->chgBus(c+1106,(vlTOPp->top_sim__DOT__processor__DOT__branch_predictor_FSM__DOT__LHT[1]),2);
        vcdp->chgBus(c+1107,(vlTOPp->top_sim__DOT__processor__DOT__branch_predictor_FSM__DOT__LHT[2]),2);
        vcdp->chgBus(c+1108,(vlTOPp->top_sim__DOT__processor__DOT__branch_predictor_FSM__DOT__LHT[3]),2);
        vcdp->chgBus(c+1137,(vlTOPp->top_sim__DOT__processor__DOT__branch_predictor_FSM__DOT__LPT[0]),2);
        vcdp->chgBus(c+1138,(vlTOPp->top_sim__DOT__processor__DOT__branch_predictor_FSM__DOT__LPT[1]),2);
        vcdp->chgBus(c+1139,(vlTOPp->top_sim__DOT__processor__DOT__branch_predictor_FSM__DOT__LPT[2]),2);
        vcdp->chgBus(c+1140,(vlTOPp->top_sim__DOT__processor__DOT__branch_predictor_FSM__DOT__LPT[3]),2);
    }
}

void Vtop_sim::traceChgThis__4(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*127:0*/ __Vtemp48[4];
    // Body
    {
        vcdp->chgBus(c+1169,(((2U & vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[0U])
                               ? vlTOPp->top_sim__DOT__data_out
                               : vlTOPp->top_sim__DOT__processor__DOT__mem_csrr_mux_out)),32);
        __Vtemp48[0U] = ((0xfffffff0U & ((vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[3U] 
                                          << 0x1aU) 
                                         | (0x3fffff0U 
                                            & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[2U] 
                                               >> 6U)))) 
                         | (0xfU & vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[0U]));
        __Vtemp48[1U] = ((0xfU & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[3U] 
                                  >> 6U)) | (0xfffffff0U 
                                             & ((IData)(
                                                        (((QData)((IData)(vlTOPp->top_sim__DOT__data_out)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlTOPp->top_sim__DOT__processor__DOT__mem_csrr_mux_out)))) 
                                                << 4U)));
        __Vtemp48[2U] = ((0xfU & ((IData)((((QData)((IData)(vlTOPp->top_sim__DOT__data_out)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->top_sim__DOT__processor__DOT__mem_csrr_mux_out)))) 
                                  >> 0x1cU)) | (0xfffffff0U 
                                                & ((IData)(
                                                           ((((QData)((IData)(vlTOPp->top_sim__DOT__data_out)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlTOPp->top_sim__DOT__processor__DOT__mem_csrr_mux_out))) 
                                                            >> 0x20U)) 
                                                   << 4U)));
        __Vtemp48[3U] = ((0x1ffff0U & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[4U] 
                                       >> 6U)) | (0xfU 
                                                  & ((IData)(
                                                             ((((QData)((IData)(vlTOPp->top_sim__DOT__data_out)) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlTOPp->top_sim__DOT__processor__DOT__mem_csrr_mux_out))) 
                                                              >> 0x20U)) 
                                                     >> 0x1cU)));
        vcdp->chgArray(c+1177,(__Vtemp48),117);
    }
}

void Vtop_sim::traceChgThis__5(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1209,(((IData)(vlTOPp->top_sim__DOT__processor__DOT__mistake_trigger)
                               ? ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[1U] 
                                   << 0x14U) | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[0U] 
                                                >> 0xcU))
                               : ((IData)(vlTOPp->top_sim__DOT__processor__DOT__predict)
                                   ? vlTOPp->top_sim__DOT__processor__DOT__branch_predictor_addr
                                   : ((IData)(vlTOPp->top_sim__DOT__processor__DOT__Fence_signal)
                                       ? vlTOPp->top_sim__DOT__processor__DOT__pc_out
                                       : ((0xffff0000U 
                                           & (((vlTOPp->top_sim__DOT__processor__DOT__pc_out 
                                                >> 0x10U) 
                                               + (1U 
                                                  & (((IData)(4U) 
                                                      + 
                                                      (0xffffU 
                                                       & vlTOPp->top_sim__DOT__processor__DOT__pc_out)) 
                                                     >> 0x10U))) 
                                              << 0x10U)) 
                                          | (0xffffU 
                                             & ((IData)(4U) 
                                                + vlTOPp->top_sim__DOT__processor__DOT__pc_out))))))),32);
        vcdp->chgBus(c+1217,(((IData)(vlTOPp->top_sim__DOT__processor__DOT__pcsrc)
                               ? ((vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[2U] 
                                   << 0x17U) | (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[1U] 
                                                >> 9U))
                               : ((IData)(vlTOPp->top_sim__DOT__processor__DOT__mistake_trigger)
                                   ? ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[1U] 
                                       << 0x14U) | 
                                      (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[0U] 
                                       >> 0xcU)) : 
                                  ((IData)(vlTOPp->top_sim__DOT__processor__DOT__predict)
                                    ? vlTOPp->top_sim__DOT__processor__DOT__branch_predictor_addr
                                    : ((IData)(vlTOPp->top_sim__DOT__processor__DOT__Fence_signal)
                                        ? vlTOPp->top_sim__DOT__processor__DOT__pc_out
                                        : ((0xffff0000U 
                                            & (((vlTOPp->top_sim__DOT__processor__DOT__pc_out 
                                                 >> 0x10U) 
                                                + (1U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       (0xffffU 
                                                        & vlTOPp->top_sim__DOT__processor__DOT__pc_out)) 
                                                      >> 0x10U))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & ((IData)(4U) 
                                                 + vlTOPp->top_sim__DOT__processor__DOT__pc_out)))))))),32);
        vcdp->chgBit(c+1225,((((0U != (0x1fU & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[4U] 
                                                >> 0xaU))) 
                               & ((0x1fU & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[4U] 
                                            >> 0xaU)) 
                                  == (0x1fU & ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[5U] 
                                                << 4U) 
                                               | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                                  >> 0x1cU))))) 
                              & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[0U] 
                                 >> 2U))));
        vcdp->chgBit(c+1233,(((((0U != (0x1fU & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[4U] 
                                                 >> 0xaU))) 
                                & ((0x1fU & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[4U] 
                                             >> 0xaU)) 
                                   == (0x1fU & (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[5U] 
                                                >> 1U)))) 
                               & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[0U] 
                                  >> 2U)) | (((0xfffU 
                                               & (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[5U] 
                                                  >> 6U)) 
                                              == (0xfffU 
                                                  & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[4U] 
                                                     >> 0xfU))) 
                                             & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[0U] 
                                                >> 3U)))));
        vcdp->chgBit(c+1241,(((((0U != (0x1fU & (vlTOPp->top_sim__DOT__processor__DOT__mem_wb_out[3U] 
                                                 >> 4U))) 
                                & ((0x1fU & (vlTOPp->top_sim__DOT__processor__DOT__mem_wb_out[3U] 
                                             >> 4U)) 
                                   == (0x1fU & ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[5U] 
                                                 << 4U) 
                                                | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                                   >> 0x1cU))))) 
                               & ((0x1fU & (vlTOPp->top_sim__DOT__processor__DOT__mem_wb_out[3U] 
                                            >> 4U)) 
                                  != (0x1fU & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[4U] 
                                               >> 0xaU)))) 
                              & (vlTOPp->top_sim__DOT__processor__DOT__mem_wb_out[0U] 
                                 >> 2U))));
        vcdp->chgBit(c+1249,((((((0U != (0x1fU & (vlTOPp->top_sim__DOT__processor__DOT__mem_wb_out[3U] 
                                                  >> 4U))) 
                                 & ((0x1fU & (vlTOPp->top_sim__DOT__processor__DOT__mem_wb_out[3U] 
                                              >> 4U)) 
                                    == (0x1fU & (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[5U] 
                                                 >> 1U)))) 
                                & (vlTOPp->top_sim__DOT__processor__DOT__mem_wb_out[0U] 
                                   >> 2U)) & ((0x1fU 
                                               & (vlTOPp->top_sim__DOT__processor__DOT__mem_wb_out[3U] 
                                                  >> 4U)) 
                                              != (0x1fU 
                                                  & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[4U] 
                                                     >> 0xaU)))) 
                              | ((((0xfffU & (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[5U] 
                                              >> 6U)) 
                                   == (0xfffU & (vlTOPp->top_sim__DOT__processor__DOT__mem_wb_out[3U] 
                                                 >> 9U))) 
                                  & (vlTOPp->top_sim__DOT__processor__DOT__mem_wb_out[0U] 
                                     >> 3U)) & ((0xfffU 
                                                 & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[4U] 
                                                    >> 0xfU)) 
                                                != 
                                                (0xfffU 
                                                 & (vlTOPp->top_sim__DOT__processor__DOT__mem_wb_out[3U] 
                                                    >> 9U)))))));
    }
}

void Vtop_sim::traceChgThis__6(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1257,(((((0U != (0x1fU & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[4U] 
                                                 >> 0xaU))) 
                                & ((0x1fU & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[4U] 
                                             >> 0xaU)) 
                                   == (0x1fU & ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[5U] 
                                                 << 4U) 
                                                | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                                   >> 0x1cU))))) 
                               & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[0U] 
                                  >> 2U)) ? vlTOPp->top_sim__DOT__processor__DOT__dataMemOut_fwd_mux_out
                               : ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[2U] 
                                   << 0x14U) | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[1U] 
                                                >> 0xcU)))),32);
        vcdp->chgBus(c+1265,((((((0U != (0x1fU & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[4U] 
                                                  >> 0xaU))) 
                                 & ((0x1fU & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[4U] 
                                              >> 0xaU)) 
                                    == (0x1fU & (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[5U] 
                                                 >> 1U)))) 
                                & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[0U] 
                                   >> 2U)) | (((0xfffU 
                                                & (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[5U] 
                                                   >> 6U)) 
                                               == (0xfffU 
                                                   & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[4U] 
                                                      >> 0xfU))) 
                                              & (vlTOPp->top_sim__DOT__processor__DOT__ex_mem_out[0U] 
                                                 >> 3U)))
                               ? vlTOPp->top_sim__DOT__processor__DOT__dataMemOut_fwd_mux_out
                               : ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[3U] 
                                   << 0x14U) | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[2U] 
                                                >> 0xcU)))),32);
    }
}

void Vtop_sim::traceChgThis__7(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1273,(vlTOPp->top_sim__DOT__processor__DOT__branch_predictor_FSM__DOT__branch_mem_sig_reg));
    }
}

void Vtop_sim::traceChgThis__8(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1281,(vlTOPp->top_sim__DOT__data_clk_stall));
        vcdp->chgBus(c+1289,(vlTOPp->top_sim__DOT__data_mem_inst__DOT__state),32);
        vcdp->chgBus(c+1297,(vlTOPp->top_sim__DOT__data_mem_inst__DOT__read_buf),32);
        vcdp->chgBus(c+1305,(((4U & (IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__sign_mask_buf))
                               ? vlTOPp->top_sim__DOT__data_mem_inst__DOT__write_data_buffer
                               : vlTOPp->top_sim__DOT__data_mem_inst__DOT__write_out1)),32);
        vcdp->chgBus(c+1313,(vlTOPp->top_sim__DOT__data_mem_inst__DOT__write_out1),32);
        vcdp->chgBit(c+1321,(vlTOPp->top_sim__DOT__data_mem_inst__DOT__select0));
        vcdp->chgBit(c+1329,(vlTOPp->top_sim__DOT__data_mem_inst__DOT__select1));
        vcdp->chgBus(c+1337,(((IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__select0)
                               ? ((8U & (IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__sign_mask_buf))
                                   ? ((0xffffff00U 
                                       & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                                                  >> 0xfU)))) 
                                          << 8U)) | 
                                      (0xffU & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                                >> 8U)))
                                   : (0xffU & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                               >> 8U)))
                               : ((8U & (IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__sign_mask_buf))
                                   ? ((0xffffff00U 
                                       & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                                                  >> 7U)))) 
                                          << 8U)) | 
                                      (0xffU & vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf))
                                   : (0xffU & vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf)))),32);
        vcdp->chgBus(c+1345,(((IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__select0)
                               ? ((8U & (IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__sign_mask_buf))
                                   ? ((0xffffff00U 
                                       & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                                                  >> 0x1fU)))) 
                                          << 8U)) | 
                                      (0xffU & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                                >> 0x18U)))
                                   : (0xffU & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                               >> 0x18U)))
                               : ((8U & (IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__sign_mask_buf))
                                   ? ((0xffffff00U 
                                       & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                                                  >> 0x17U)))) 
                                          << 8U)) | 
                                      (0xffU & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                                >> 0x10U)))
                                   : (0xffU & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                               >> 0x10U))))),32);
        vcdp->chgBus(c+1353,(((IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__select0)
                               ? ((8U & (IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__sign_mask_buf))
                                   ? ((0xffff0000U 
                                       & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                                                  >> 0x1fU)))) 
                                          << 0x10U)) 
                                      | (0xffffU & 
                                         (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                          >> 0x10U)))
                                   : ((0xff00U & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                                  >> 0x10U)) 
                                      | (0xffU & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                                  >> 0x10U))))
                               : ((8U & (IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__sign_mask_buf))
                                   ? ((0xffff0000U 
                                       & (VL_NEGATE_I((IData)(
                                                              (1U 
                                                               & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                                                  >> 0xfU)))) 
                                          << 0x10U)) 
                                      | (0xffffU & vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf))
                                   : (0xffffU & vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf)))),32);
        vcdp->chgBus(c+1361,(((IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__select1)
                               ? ((IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__select0)
                                   ? ((8U & (IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__sign_mask_buf))
                                       ? ((0xffffff00U 
                                           & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                                                      >> 0x1fU)))) 
                                              << 8U)) 
                                          | (0xffU 
                                             & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                                >> 0x18U)))
                                       : (0xffU & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                                   >> 0x18U)))
                                   : ((8U & (IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__sign_mask_buf))
                                       ? ((0xffffff00U 
                                           & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                                                      >> 0x17U)))) 
                                              << 8U)) 
                                          | (0xffU 
                                             & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                                >> 0x10U)))
                                       : (0xffU & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                                   >> 0x10U))))
                               : ((IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__select0)
                                   ? ((8U & (IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__sign_mask_buf))
                                       ? ((0xffffff00U 
                                           & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                                                      >> 0xfU)))) 
                                              << 8U)) 
                                          | (0xffU 
                                             & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                                >> 8U)))
                                       : (0xffU & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                                   >> 8U)))
                                   : ((8U & (IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__sign_mask_buf))
                                       ? ((0xffffff00U 
                                           & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                                                      >> 7U)))) 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf))
                                       : (0xffU & vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf))))),32);
        vcdp->chgBus(c+1369,(((IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__select1)
                               ? vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf
                               : ((IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__select0)
                                   ? ((8U & (IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__sign_mask_buf))
                                       ? ((0xffff0000U 
                                           & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                                                      >> 0x1fU)))) 
                                              << 0x10U)) 
                                          | (0xffffU 
                                             & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                                >> 0x10U)))
                                       : ((0xff00U 
                                           & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                              >> 0x10U)) 
                                          | (0xffU 
                                             & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                                >> 0x10U))))
                                   : ((8U & (IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__sign_mask_buf))
                                       ? ((0xffff0000U 
                                           & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                                                      >> 0xfU)))) 
                                              << 0x10U)) 
                                          | (0xffffU 
                                             & vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf))
                                       : (0xffffU & vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf))))),32);
    }
}

void Vtop_sim::traceChgThis__9(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1377,((1U & (vlTOPp->top_sim__DOT__processor__DOT__ex_cont_mux_out 
                                    >> 4U))));
        vcdp->chgBit(c+1385,((1U & (vlTOPp->top_sim__DOT__processor__DOT__ex_cont_mux_out 
                                    >> 5U))));
        vcdp->chgBus(c+1393,((0xfU & ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[5U] 
                                       << 0xdU) | (
                                                   vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                                   >> 0x13U)))),4);
        vcdp->chgArray(c+1401,(vlTOPp->top_sim__DOT__processor__DOT__id_ex_out),178);
        vcdp->chgBus(c+1449,(vlTOPp->top_sim__DOT__processor__DOT__ex_cont_mux_out),32);
        vcdp->chgBus(c+1457,(((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                               << 0x14U) | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[3U] 
                                            >> 0xcU))),32);
        vcdp->chgBus(c+1465,((0xffffU & ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                          << 4U) | 
                                         (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[3U] 
                                          >> 0x1cU)))),16);
        vcdp->chgBus(c+1473,((0xffffU & ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                          << 0x14U) 
                                         | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[3U] 
                                            >> 0xcU)))),16);
        vcdp->chgBus(c+1481,((0x1ffU & vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[0U])),32);
        vcdp->chgBus(c+1489,(((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[1U] 
                               << 0x14U) | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[0U] 
                                            >> 0xcU))),32);
        vcdp->chgBit(c+1497,((1U & (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[0U] 
                                    >> 0xbU))));
        vcdp->chgBit(c+1505,((1U & (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[0U] 
                                    >> 0xaU))));
        vcdp->chgBus(c+1513,((0x7fU & ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[5U] 
                                        << 0x14U) | 
                                       (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                        >> 0xcU)))),7);
        vcdp->chgBit(c+1521,((1U & (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[0U] 
                                    >> 9U))));
        vcdp->chgBus(c+1529,((0x1fU & ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[5U] 
                                        << 4U) | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                                  >> 0x1cU)))),5);
        vcdp->chgBus(c+1537,((0x1fU & (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[5U] 
                                       >> 1U))),5);
        vcdp->chgBus(c+1545,((0xfffU & (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[5U] 
                                        >> 6U))),12);
        vcdp->chgBus(c+1553,(((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[2U] 
                               << 0x14U) | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[1U] 
                                            >> 0xcU))),32);
        vcdp->chgBus(c+1561,(((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[3U] 
                               << 0x14U) | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[2U] 
                                            >> 0xcU))),32);
    }
}

void Vtop_sim::traceChgThis__10(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp49[3];
    WData/*159:0*/ __Vtemp53[5];
    // Body
    {
        vcdp->chgBus(c+1569,(((0xffff0000U & ((((vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                                 >> 0x10U) 
                                                + (
                                                   (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                                    << 4U) 
                                                   | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[3U] 
                                                      >> 0x1cU))) 
                                               + (1U 
                                                  & (((0xffffU 
                                                       & vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out) 
                                                      + 
                                                      (0xffffU 
                                                       & ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                                           << 0x14U) 
                                                          | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[3U] 
                                                             >> 0xcU)))) 
                                                     >> 0x10U))) 
                                              << 0x10U)) 
                              | (0xffffU & (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                            + ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                                << 0x14U) 
                                               | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[3U] 
                                                  >> 0xcU)))))),32);
        vcdp->chgBit(c+1577,((1U & ((((0xffffU & (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                                  >> 0x10U)) 
                                      + (0xffffU & 
                                         ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                           << 4U) | 
                                          (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[3U] 
                                           >> 0x1cU)))) 
                                     + (1U & (((0xffffU 
                                                & vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out) 
                                               + (0xffffU 
                                                  & ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                                      << 0x14U) 
                                                     | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[3U] 
                                                        >> 0xcU)))) 
                                              >> 0x10U))) 
                                    >> 0x10U))));
        vcdp->chgBus(c+1585,((0xffffU & (((vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                           >> 0x10U) 
                                          + ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                              << 4U) 
                                             | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[3U] 
                                                >> 0x1cU))) 
                                         + (1U & ((
                                                   (0xffffU 
                                                    & vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out) 
                                                   + 
                                                   (0xffffU 
                                                    & ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                                        << 0x14U) 
                                                       | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[3U] 
                                                          >> 0xcU)))) 
                                                  >> 0x10U))))),16);
        vcdp->chgBus(c+1593,((0xffffU & (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                         + ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                             << 0x14U) 
                                            | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[3U] 
                                               >> 0xcU))))),16);
        vcdp->chgBit(c+1601,((1U & (((0xffffU & vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out) 
                                     + (0xffffU & (
                                                   (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                                    << 0x14U) 
                                                   | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[3U] 
                                                      >> 0xcU)))) 
                                    >> 0x10U))));
        __Vtemp49[0U] = ((0xfffffe00U & ((IData)((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & ((((vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                                                           >> 0x10U) 
                                                                          + 
                                                                          ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                                                            << 4U) 
                                                                           | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[3U] 
                                                                              >> 0x1cU))) 
                                                                         + 
                                                                         (1U 
                                                                          & (((0xffffU 
                                                                               & vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out) 
                                                                              + 
                                                                              (0xffffU 
                                                                               & ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                                                                << 0x14U) 
                                                                                | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[3U] 
                                                                                >> 0xcU)))) 
                                                                             >> 0x10U))) 
                                                                        << 0x10U)) 
                                                                    | (0xffffU 
                                                                       & (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                                                          + 
                                                                          ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                                                            << 0x14U) 
                                                                           | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[3U] 
                                                                              >> 0xcU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[1U] 
                                                                      << 0x14U) 
                                                                     | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[0U] 
                                                                        >> 0xcU)))))) 
                                         << 9U)) | 
                         (0x1ffU & vlTOPp->top_sim__DOT__processor__DOT__ex_cont_mux_out));
        __Vtemp49[1U] = ((0x1ffU & ((IData)((((QData)((IData)(
                                                              ((0xffff0000U 
                                                                & ((((vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                                                      >> 0x10U) 
                                                                     + 
                                                                     ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                                                       << 4U) 
                                                                      | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[3U] 
                                                                         >> 0x1cU))) 
                                                                    + 
                                                                    (1U 
                                                                     & (((0xffffU 
                                                                          & vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out) 
                                                                         + 
                                                                         (0xffffU 
                                                                          & ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                                                              << 0x14U) 
                                                                             | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[3U] 
                                                                                >> 0xcU)))) 
                                                                        >> 0x10U))) 
                                                                   << 0x10U)) 
                                                               | (0xffffU 
                                                                  & (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                                                     + 
                                                                     ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                                                       << 0x14U) 
                                                                      | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[3U] 
                                                                         >> 0xcU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[1U] 
                                                                 << 0x14U) 
                                                                | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[0U] 
                                                                   >> 0xcU)))))) 
                                    >> 0x17U)) | (0xfffffe00U 
                                                  & ((IData)(
                                                             ((((QData)((IData)(
                                                                                ((0xffff0000U 
                                                                                & ((((vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                                                                >> 0x10U) 
                                                                                + 
                                                                                ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                                                                << 4U) 
                                                                                | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[3U] 
                                                                                >> 0x1cU))) 
                                                                                + 
                                                                                (1U 
                                                                                & (((0xffffU 
                                                                                & vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out) 
                                                                                + 
                                                                                (0xffffU 
                                                                                & ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                                                                << 0x14U) 
                                                                                | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[3U] 
                                                                                >> 0xcU)))) 
                                                                                >> 0x10U))) 
                                                                                << 0x10U)) 
                                                                                | (0xffffU 
                                                                                & (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                                                                + 
                                                                                ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                                                                << 0x14U) 
                                                                                | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[3U] 
                                                                                >> 0xcU))))))) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[1U] 
                                                                                << 0x14U) 
                                                                                | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[0U] 
                                                                                >> 0xcU))))) 
                                                              >> 0x20U)) 
                                                     << 9U)));
        __Vtemp49[2U] = (0x1ffU & ((IData)(((((QData)((IData)(
                                                              ((0xffff0000U 
                                                                & ((((vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                                                      >> 0x10U) 
                                                                     + 
                                                                     ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                                                       << 4U) 
                                                                      | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[3U] 
                                                                         >> 0x1cU))) 
                                                                    + 
                                                                    (1U 
                                                                     & (((0xffffU 
                                                                          & vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out) 
                                                                         + 
                                                                         (0xffffU 
                                                                          & ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                                                              << 0x14U) 
                                                                             | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[3U] 
                                                                                >> 0xcU)))) 
                                                                        >> 0x10U))) 
                                                                   << 0x10U)) 
                                                               | (0xffffU 
                                                                  & (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                                                     + 
                                                                     ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                                                       << 0x14U) 
                                                                      | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[3U] 
                                                                         >> 0xcU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[1U] 
                                                                 << 0x14U) 
                                                                | (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[0U] 
                                                                   >> 0xcU))))) 
                                            >> 0x20U)) 
                                   >> 0x17U));
        __Vtemp53[0U] = __Vtemp49[0U];
        __Vtemp53[1U] = __Vtemp49[1U];
        __Vtemp53[2U] = ((0xfffffc00U & ((IData)((((QData)((IData)(vlTOPp->top_sim__DOT__processor__DOT__wb_fwd2_mux_out)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlTOPp->top_sim__DOT__processor__DOT__lui_result)))) 
                                         << 0xaU)) 
                         | ((0xfffffe00U & ((IData)(vlTOPp->top_sim__DOT__processor__DOT__alu_branch_enable) 
                                            << 9U)) 
                            | __Vtemp49[2U]));
        __Vtemp53[3U] = ((0x3ffU & ((IData)((((QData)((IData)(vlTOPp->top_sim__DOT__processor__DOT__wb_fwd2_mux_out)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->top_sim__DOT__processor__DOT__lui_result)))) 
                                    >> 0x16U)) | (0xfffffc00U 
                                                  & ((IData)(
                                                             ((((QData)((IData)(vlTOPp->top_sim__DOT__processor__DOT__wb_fwd2_mux_out)) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlTOPp->top_sim__DOT__processor__DOT__lui_result))) 
                                                              >> 0x20U)) 
                                                     << 0xaU)));
        __Vtemp53[4U] = ((0x7ff8000U & (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[5U] 
                                        << 9U)) | (
                                                   (0x7c00U 
                                                    & ((vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[5U] 
                                                        << 0x13U) 
                                                       | (0x7fc00U 
                                                          & (vlTOPp->top_sim__DOT__processor__DOT__id_ex_out[4U] 
                                                             >> 0xdU)))) 
                                                   | (0x3ffU 
                                                      & ((IData)(
                                                                 ((((QData)((IData)(vlTOPp->top_sim__DOT__processor__DOT__wb_fwd2_mux_out)) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(vlTOPp->top_sim__DOT__processor__DOT__lui_result))) 
                                                                  >> 0x20U)) 
                                                         >> 0x16U))));
        vcdp->chgArray(c+1609,(__Vtemp53),155);
    }
}

void Vtop_sim::traceChgThis__11(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1649,(vlTOPp->top_sim__DOT__clk_proc));
    }
}

void Vtop_sim::traceChgThis__12(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1657,((0x3fffU & vlTOPp->top_sim__DOT__processor__DOT__lui_result)),14);
        vcdp->chgBus(c+1665,(vlTOPp->top_sim__DOT__processor__DOT__wb_fwd2_mux_out),32);
        vcdp->chgBus(c+1673,(vlTOPp->top_sim__DOT__processor__DOT__lui_result),32);
        vcdp->chgBus(c+1681,(vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out),32);
        vcdp->chgBus(c+1689,(vlTOPp->top_sim__DOT__processor__DOT__alu_mux_out),32);
        vcdp->chgBit(c+1697,(vlTOPp->top_sim__DOT__processor__DOT__alu_branch_enable));
        vcdp->chgBus(c+1705,(vlTOPp->top_sim__DOT__processor__DOT__alu_result),32);
        vcdp->chgBus(c+1713,(vlTOPp->top_sim__DOT__processor__DOT__reg_dat_mux_out),32);
        vcdp->chgBus(c+1721,(vlTOPp->top_sim__DOT__processor__DOT__dataMemOut_fwd_mux_out),32);
        vcdp->chgBus(c+1729,(vlTOPp->top_sim__DOT__processor__DOT__wb_fwd1_mux_out),32);
        vcdp->chgBus(c+1737,((0xffffU & (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                         >> 0x10U))),16);
        vcdp->chgBus(c+1745,((0xffffU & vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out)),16);
        vcdp->chgBit(c+1753,((1U & (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                    >> 0x1fU))));
        vcdp->chgBus(c+1761,((0xffffU & ((0xffU & (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                                   >> 0x18U)) 
                                         * (0xffU & 
                                            (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                             >> 8U))))),16);
        vcdp->chgBus(c+1769,((0xffffU & ((0xffU & (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                                   >> 0x10U)) 
                                         * (0xffU & 
                                            (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                             >> 8U))))),16);
        vcdp->chgBus(c+1777,((0xffffU & ((0xffU & (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                                   >> 0x18U)) 
                                         * (0xffU & vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out)))),16);
        vcdp->chgBus(c+1785,((0xffffU & ((0xffU & (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                                   >> 0x10U)) 
                                         * (0xffU & vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out)))),16);
        vcdp->chgBus(c+1793,(((((0xffffU & ((0xffU 
                                             & (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                                >> 0x10U)) 
                                            * (0xffU 
                                               & vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out))) 
                                + (0xffff00U & (((0xffU 
                                                  & (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                                     >> 0x18U)) 
                                                 * 
                                                 (0xffU 
                                                  & vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out)) 
                                                << 8U))) 
                               + (0xffff00U & (((0xffU 
                                                 & (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                                    >> 0x10U)) 
                                                * (0xffU 
                                                   & (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                                      >> 8U))) 
                                               << 8U))) 
                              + (0xffff0000U & (((0xffU 
                                                  & (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                                     >> 0x18U)) 
                                                 * 
                                                 (0xffU 
                                                  & (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                                     >> 8U))) 
                                                << 0x10U)))),32);
        vcdp->chgBus(c+1801,((0xffU & (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                       >> 0x18U))),16);
        vcdp->chgBus(c+1809,((0xffU & (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                       >> 0x10U))),16);
        vcdp->chgBus(c+1817,((0xffU & (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                       >> 8U))),16);
        vcdp->chgBus(c+1825,((0xffU & vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out)),16);
        vcdp->chgBus(c+1833,((0xffffU & ((0xffU & (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                                   >> 0x18U)) 
                                         * (0xffU & vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out)))),24);
        vcdp->chgBus(c+1841,((0xffffU & ((0xffU & (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                                   >> 0x10U)) 
                                         * (0xffU & 
                                            (vlTOPp->top_sim__DOT__processor__DOT__addr_adder_mux_out 
                                             >> 8U))))),24);
        vcdp->chgBus(c+1849,(vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA),32);
        vcdp->chgBus(c+1857,(vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputB),32);
        vcdp->chgBus(c+1865,(((0xffff0000U & ((((vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA 
                                                 >> 0x10U) 
                                                + (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputB 
                                                   >> 0x10U)) 
                                               + (1U 
                                                  & (((0xffffU 
                                                       & vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA) 
                                                      + 
                                                      (0xffffU 
                                                       & vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputB)) 
                                                     >> 0x10U))) 
                                              << 0x10U)) 
                              | (0xffffU & (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA 
                                            + vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputB)))),32);
        vcdp->chgBus(c+1873,((0xffffU & (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputB 
                                         >> 0x10U))),16);
        vcdp->chgBus(c+1881,((0xffffU & (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA 
                                         >> 0x10U))),16);
        vcdp->chgBus(c+1889,((0xffffU & vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA)),16);
        vcdp->chgBus(c+1897,((0xffffU & vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputB)),16);
        vcdp->chgBit(c+1905,((1U & ((((0xffffU & (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA 
                                                  >> 0x10U)) 
                                      + (0xffffU & 
                                         (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputB 
                                          >> 0x10U))) 
                                     + (1U & (((0xffffU 
                                                & vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA) 
                                               + (0xffffU 
                                                  & vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputB)) 
                                              >> 0x10U))) 
                                    >> 0x10U))));
        vcdp->chgBit(c+1913,((1U & (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA 
                                    >> 0x1fU))));
        vcdp->chgBus(c+1921,((0xffffU & ((0xffU & (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA 
                                                   >> 0x18U)) 
                                         * (0xffU & 
                                            (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA 
                                             >> 8U))))),16);
        vcdp->chgBus(c+1929,((0xffffU & ((0xffU & (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA 
                                                   >> 0x10U)) 
                                         * (0xffU & 
                                            (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA 
                                             >> 8U))))),16);
        vcdp->chgBus(c+1937,((0xffffU & ((0xffU & (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA 
                                                   >> 0x18U)) 
                                         * (0xffU & vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA)))),16);
        vcdp->chgBus(c+1945,((0xffffU & ((0xffU & (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA 
                                                   >> 0x10U)) 
                                         * (0xffU & vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA)))),16);
        vcdp->chgBus(c+1953,(((((0xffffU & ((0xffU 
                                             & (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA 
                                                >> 0x10U)) 
                                            * (0xffU 
                                               & vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA))) 
                                + (0xffff00U & (((0xffU 
                                                  & (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA 
                                                     >> 0x18U)) 
                                                 * 
                                                 (0xffU 
                                                  & vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA)) 
                                                << 8U))) 
                               + (0xffff00U & (((0xffU 
                                                 & (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA 
                                                    >> 0x10U)) 
                                                * (0xffU 
                                                   & (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA 
                                                      >> 8U))) 
                                               << 8U))) 
                              + (0xffff0000U & (((0xffU 
                                                  & (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA 
                                                     >> 0x18U)) 
                                                 * 
                                                 (0xffU 
                                                  & (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA 
                                                     >> 8U))) 
                                                << 0x10U)))),32);
        vcdp->chgBus(c+1961,((0xffffU & (((vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA 
                                           >> 0x10U) 
                                          + (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputB 
                                             >> 0x10U)) 
                                         + (1U & ((
                                                   (0xffffU 
                                                    & vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA) 
                                                   + 
                                                   (0xffffU 
                                                    & vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputB)) 
                                                  >> 0x10U))))),16);
        vcdp->chgBus(c+1969,((0xffffU & (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA 
                                         + vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputB))),16);
        vcdp->chgBit(c+1977,((1U & (((0xffffU & vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA) 
                                     + (0xffffU & vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputB)) 
                                    >> 0x10U))));
        vcdp->chgBus(c+1985,((0xffU & (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA 
                                       >> 0x18U))),16);
        vcdp->chgBus(c+1993,((0xffU & (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA 
                                       >> 0x10U))),16);
        vcdp->chgBus(c+2001,((0xffU & (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA 
                                       >> 8U))),16);
        vcdp->chgBus(c+2009,((0xffU & vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA)),16);
        vcdp->chgBus(c+2017,((0xffffU & ((0xffU & (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA 
                                                   >> 0x18U)) 
                                         * (0xffU & vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA)))),24);
        vcdp->chgBus(c+2025,((0xffffU & ((0xffU & (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA 
                                                   >> 0x10U)) 
                                         * (0xffU & 
                                            (vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__inputA 
                                             >> 8U))))),24);
    }
}

void Vtop_sim::traceChgThis__13(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2033,(vlTOPp->top_sim__DOT__processor__DOT__pc_adder__DOT__i_sbmac16__DOT__rQ),16);
    }
}

void Vtop_sim::traceChgThis__14(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2041,(vlTOPp->top_sim__DOT__processor__DOT__pc_adder__DOT__i_sbmac16__DOT__rS),16);
    }
}

void Vtop_sim::traceChgThis__15(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2049,(vlTOPp->top_sim__DOT__processor__DOT__addr_adder__DOT__i_sbmac16__DOT__rQ),16);
    }
}

void Vtop_sim::traceChgThis__16(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2057,(vlTOPp->top_sim__DOT__processor__DOT__addr_adder__DOT__i_sbmac16__DOT__rS),16);
    }
}

void Vtop_sim::traceChgThis__17(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2065,(vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__alu_adder__DOT__i_sbmac16__DOT__rQ),16);
    }
}

void Vtop_sim::traceChgThis__18(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2073,(vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__alu_adder__DOT__i_sbmac16__DOT__rS),16);
    }
}

void Vtop_sim::traceChgThis__19(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2081,(vlTOPp->top_sim__DOT__processor__DOT__pc_adder__DOT__i_sbmac16__DOT__rC),16);
        vcdp->chgBus(c+2089,(vlTOPp->top_sim__DOT__processor__DOT__pc_adder__DOT__i_sbmac16__DOT__rA),16);
        vcdp->chgBus(c+2097,(vlTOPp->top_sim__DOT__processor__DOT__pc_adder__DOT__i_sbmac16__DOT__rF),16);
        vcdp->chgBus(c+2105,(vlTOPp->top_sim__DOT__processor__DOT__pc_adder__DOT__i_sbmac16__DOT__rJ),16);
    }
}

void Vtop_sim::traceChgThis__20(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2113,(vlTOPp->top_sim__DOT__processor__DOT__addr_adder__DOT__i_sbmac16__DOT__rC),16);
        vcdp->chgBus(c+2121,(vlTOPp->top_sim__DOT__processor__DOT__addr_adder__DOT__i_sbmac16__DOT__rA),16);
        vcdp->chgBus(c+2129,(vlTOPp->top_sim__DOT__processor__DOT__addr_adder__DOT__i_sbmac16__DOT__rF),16);
        vcdp->chgBus(c+2137,(vlTOPp->top_sim__DOT__processor__DOT__addr_adder__DOT__i_sbmac16__DOT__rJ),16);
    }
}

void Vtop_sim::traceChgThis__21(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2145,(vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__alu_adder__DOT__i_sbmac16__DOT__rC),16);
        vcdp->chgBus(c+2153,(vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__alu_adder__DOT__i_sbmac16__DOT__rA),16);
        vcdp->chgBus(c+2161,(vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__alu_adder__DOT__i_sbmac16__DOT__rF),16);
        vcdp->chgBus(c+2169,(vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__alu_adder__DOT__i_sbmac16__DOT__rJ),16);
    }
}

void Vtop_sim::traceChgThis__22(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2177,(vlTOPp->top_sim__DOT__processor__DOT__pc_adder__DOT__i_sbmac16__DOT__rB),16);
        vcdp->chgBus(c+2185,(vlTOPp->top_sim__DOT__processor__DOT__pc_adder__DOT__i_sbmac16__DOT__rD),16);
        vcdp->chgBus(c+2193,(vlTOPp->top_sim__DOT__processor__DOT__pc_adder__DOT__i_sbmac16__DOT__rK),16);
        vcdp->chgBus(c+2201,(vlTOPp->top_sim__DOT__processor__DOT__pc_adder__DOT__i_sbmac16__DOT__rG),16);
        vcdp->chgBus(c+2209,(vlTOPp->top_sim__DOT__processor__DOT__pc_adder__DOT__i_sbmac16__DOT__rH),32);
    }
}

void Vtop_sim::traceChgThis__23(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2217,(vlTOPp->top_sim__DOT__processor__DOT__addr_adder__DOT__i_sbmac16__DOT__rB),16);
        vcdp->chgBus(c+2225,(vlTOPp->top_sim__DOT__processor__DOT__addr_adder__DOT__i_sbmac16__DOT__rD),16);
        vcdp->chgBus(c+2233,(vlTOPp->top_sim__DOT__processor__DOT__addr_adder__DOT__i_sbmac16__DOT__rK),16);
        vcdp->chgBus(c+2241,(vlTOPp->top_sim__DOT__processor__DOT__addr_adder__DOT__i_sbmac16__DOT__rG),16);
        vcdp->chgBus(c+2249,(vlTOPp->top_sim__DOT__processor__DOT__addr_adder__DOT__i_sbmac16__DOT__rH),32);
    }
}

void Vtop_sim::traceChgThis__24(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2257,(vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__alu_adder__DOT__i_sbmac16__DOT__rB),16);
        vcdp->chgBus(c+2265,(vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__alu_adder__DOT__i_sbmac16__DOT__rD),16);
        vcdp->chgBus(c+2273,(vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__alu_adder__DOT__i_sbmac16__DOT__rK),16);
        vcdp->chgBus(c+2281,(vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__alu_adder__DOT__i_sbmac16__DOT__rG),16);
        vcdp->chgBus(c+2289,(vlTOPp->top_sim__DOT__processor__DOT__alu_main__DOT__alu_adder__DOT__i_sbmac16__DOT__rH),32);
    }
}

void Vtop_sim::traceChgThis__25(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2297,(((((vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrAddr_buf 
                                 == (IData)(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__rdAddrA_buf)) 
                                & (IData)(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__write_buf)) 
                               & (0U != vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrAddr_buf))
                               ? vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrData_buf
                               : vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regDatA)),32);
        vcdp->chgBus(c+2305,(((((vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrAddr_buf 
                                 == (IData)(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__rdAddrB_buf)) 
                                & (IData)(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__write_buf)) 
                               & (0U != vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrAddr_buf))
                               ? vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrData_buf
                               : vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regDatB)),32);
        vcdp->chgBus(c+2313,(vlTOPp->top_sim__DOT__processor__DOT__rdValOut_CSR),32);
        vcdp->chgBus(c+2321,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__rdAddrA_buf),5);
        vcdp->chgBus(c+2329,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__rdAddrB_buf),5);
        vcdp->chgBus(c+2337,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regDatA),32);
        vcdp->chgBus(c+2345,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__regDatB),32);
        vcdp->chgBus(c+2353,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrAddr_buf),32);
        vcdp->chgBus(c+2361,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__wrData_buf),32);
        vcdp->chgBit(c+2369,(vlTOPp->top_sim__DOT__processor__DOT__register_files__DOT__write_buf));
    }
}

void Vtop_sim::traceChgThis__26(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2377,(vlTOPp->top_sim__DOT__data_out),32);
        vcdp->chgBus(c+2385,(vlTOPp->top_sim__DOT__data_mem_inst__DOT__led_reg),32);
        vcdp->chgBus(c+2393,(vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf),32);
        vcdp->chgBit(c+2401,(vlTOPp->top_sim__DOT__data_mem_inst__DOT__memread_buf));
        vcdp->chgBit(c+2409,(vlTOPp->top_sim__DOT__data_mem_inst__DOT__memwrite_buf));
        vcdp->chgBus(c+2417,(vlTOPp->top_sim__DOT__data_mem_inst__DOT__write_data_buffer),32);
        vcdp->chgBus(c+2425,(vlTOPp->top_sim__DOT__data_mem_inst__DOT__addr_buf),14);
        vcdp->chgBus(c+2433,(vlTOPp->top_sim__DOT__data_mem_inst__DOT__sign_mask_buf),4);
        vcdp->chgBus(c+2441,((0x3ffU & ((IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__addr_buf) 
                                        >> 2U))),10);
        vcdp->chgBus(c+2449,((3U & (IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__addr_buf))),2);
        vcdp->chgBus(c+2457,((0xffU & vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf)),8);
        vcdp->chgBus(c+2465,((0xffU & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                       >> 8U))),8);
        vcdp->chgBus(c+2473,((0xffU & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                       >> 0x10U))),8);
        vcdp->chgBus(c+2481,((0xffU & (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                       >> 0x18U))),8);
        vcdp->chgBit(c+2489,((1U & ((~ ((IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__addr_buf) 
                                        >> 1U)) & (~ (IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__addr_buf))))));
        vcdp->chgBit(c+2497,((1U & ((~ ((IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__addr_buf) 
                                        >> 1U)) & (IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__addr_buf)))));
        vcdp->chgBit(c+2505,((1U & (((IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__addr_buf) 
                                     >> 1U) & (~ (IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__addr_buf))))));
        vcdp->chgBit(c+2513,((1U & (((IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__addr_buf) 
                                     >> 1U) & (IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__addr_buf)))));
        vcdp->chgBus(c+2521,((0xffU & ((1U & ((~ ((IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__addr_buf) 
                                                  >> 1U)) 
                                              & (~ (IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__addr_buf))))
                                        ? vlTOPp->top_sim__DOT__data_mem_inst__DOT__write_data_buffer
                                        : vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf))),8);
        vcdp->chgBus(c+2529,((0xffU & ((1U & ((~ ((IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__addr_buf) 
                                                  >> 1U)) 
                                              & (IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__addr_buf)))
                                        ? vlTOPp->top_sim__DOT__data_mem_inst__DOT__write_data_buffer
                                        : (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                           >> 8U)))),8);
        vcdp->chgBus(c+2537,((0xffU & ((1U & (((IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__addr_buf) 
                                               >> 1U) 
                                              & (~ (IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__addr_buf))))
                                        ? vlTOPp->top_sim__DOT__data_mem_inst__DOT__write_data_buffer
                                        : (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                           >> 0x10U)))),8);
        vcdp->chgBus(c+2545,((0xffU & ((1U & (((IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__addr_buf) 
                                               >> 1U) 
                                              & (IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__addr_buf)))
                                        ? vlTOPp->top_sim__DOT__data_mem_inst__DOT__write_data_buffer
                                        : (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                           >> 0x18U)))),8);
        vcdp->chgBus(c+2553,((0xffffU & ((2U & (IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__addr_buf))
                                          ? vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf
                                          : vlTOPp->top_sim__DOT__data_mem_inst__DOT__write_data_buffer))),16);
        vcdp->chgBus(c+2561,((0xffffU & ((2U & (IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__addr_buf))
                                          ? vlTOPp->top_sim__DOT__data_mem_inst__DOT__write_data_buffer
                                          : (vlTOPp->top_sim__DOT__data_mem_inst__DOT__word_buf 
                                             >> 0x10U)))),16);
        vcdp->chgBit(c+2569,((1U & ((~ ((IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__sign_mask_buf) 
                                        >> 2U)) & ((IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__sign_mask_buf) 
                                                   >> 1U)))));
        vcdp->chgBit(c+2577,((1U & ((IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__sign_mask_buf) 
                                    >> 2U))));
        vcdp->chgBit(c+2585,((1U & ((IData)(vlTOPp->top_sim__DOT__data_mem_inst__DOT__sign_mask_buf) 
                                    >> 1U))));
    }
}

void Vtop_sim::traceChgThis__27(Vtop_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2593,(vlTOPp->clk));
        vcdp->chgBus(c+2601,(vlTOPp->led),8);
    }
}
