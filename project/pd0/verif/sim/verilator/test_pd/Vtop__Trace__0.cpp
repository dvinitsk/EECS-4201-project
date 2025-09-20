// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__reset));
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__counter),32);
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__reset_done));
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__reset_neg));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__reset_reg));
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__reset_counter),32);
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__assign_xor_op1));
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__assign_xor_op2));
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__assign_xor_res));
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__alu_sel),2);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__alu_op1),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__alu_op2),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__alu_res),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__reg_rst_inp),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__reg_rst_out),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__tsp_op1),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__tsp_op2),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__tsp_out),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__clkg__DOT__counter),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__counter),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__dut__DOT__core__DOT__reg_rst_out),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__dut__DOT__core__DOT__tsp_op2),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__dut__DOT__core__DOT__tsp_out),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__dut__DOT__core__DOT__alu_op2),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__dut__DOT__core__DOT__alu_res),32);
        bufp->chgCData(oldp+25,((3U & vlSelf->top__DOT__counter)),2);
        bufp->chgBit(oldp+26,((1U & vlSelf->top__DOT__counter)));
        bufp->chgBit(oldp+27,((1U & (vlSelf->top__DOT__counter 
                                     >> 1U))));
        bufp->chgBit(oldp+28,((1U & (vlSelf->top__DOT__counter 
                                     ^ (vlSelf->top__DOT__counter 
                                        >> 1U)))));
        bufp->chgBit(oldp+29,(vlSelf->top__DOT__dut__DOT__core__DOT__alu_inst__DOT__zero_o));
        bufp->chgBit(oldp+30,(vlSelf->top__DOT__dut__DOT__core__DOT__alu_inst__DOT__neg_o));
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__op1_reg_out),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__op2_reg_out),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__stage1_alu_out),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__sum_reg_out),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__stage2_alu_out),32);
        bufp->chgBit(oldp+36,(vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__alu_add__DOT__zero_o));
        bufp->chgBit(oldp+37,(vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__alu_add__DOT__neg_o));
        bufp->chgBit(oldp+38,(vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__alu_sub__DOT__zero_o));
        bufp->chgBit(oldp+39,(vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__alu_sub__DOT__neg_o));
    }
    bufp->chgBit(oldp+40,(vlSelf->top__DOT__clock));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
