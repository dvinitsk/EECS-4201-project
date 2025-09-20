// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff))))) {
        VL_WRITEF(" clk = %0b\n",1,vlSelf->top__DOT__clock);
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__tsp_op2 
        = ((0x80000000U & (vlSelf->top__DOT__counter 
                           << 0x1eU)) | ((0x40000000U 
                                          & (vlSelf->top__DOT__counter 
                                             << 0x1cU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->top__DOT__counter 
                                                << 0x1dU)) 
                                            | (vlSelf->top__DOT__counter 
                                               >> 3U))));
    vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__stage1_alu_out 
        = (vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__op1_reg_out 
           + vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__op2_reg_out);
    vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__alu_add__DOT__neg_o 
        = (vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__stage1_alu_out 
           >> 0x1fU);
    vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__alu_add__DOT__zero_o 
        = (0U == vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__stage1_alu_out);
    vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__stage2_alu_out 
        = (vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__sum_reg_out 
           - vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__op1_reg_out);
    vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__alu_sub__DOT__neg_o 
        = (vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__stage2_alu_out 
           >> 0x1fU);
    vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__alu_sub__DOT__zero_o 
        = (0U == vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__stage2_alu_out);
    vlSelf->top__DOT__dut__DOT__core__DOT__alu_op2 
        = ((0x80000000U & (vlSelf->top__DOT__counter 
                           << 0x1dU)) | ((0x40000000U 
                                          & (vlSelf->top__DOT__counter 
                                             << 0x1bU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->top__DOT__counter 
                                                << 0x1dU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->top__DOT__counter 
                                                   << 0x1bU)) 
                                               | (vlSelf->top__DOT__counter 
                                                  >> 4U)))));
    vlSelf->top__DOT__dut__DOT__core__DOT__alu_res 
        = ((0U == (3U & vlSelf->top__DOT__counter))
            ? (vlSelf->top__DOT__counter + vlSelf->top__DOT__dut__DOT__core__DOT__alu_op2)
            : ((1U == (3U & vlSelf->top__DOT__counter))
                ? (vlSelf->top__DOT__counter - vlSelf->top__DOT__dut__DOT__core__DOT__alu_op2)
                : ((2U == (3U & vlSelf->top__DOT__counter))
                    ? (vlSelf->top__DOT__counter & vlSelf->top__DOT__dut__DOT__core__DOT__alu_op2)
                    : ((3U == (3U & vlSelf->top__DOT__counter))
                        ? (vlSelf->top__DOT__counter 
                           | vlSelf->top__DOT__dut__DOT__core__DOT__alu_op2)
                        : 0U))));
    vlSelf->top__DOT__dut__DOT__core__DOT__alu_inst__DOT__neg_o 
        = (vlSelf->top__DOT__dut__DOT__core__DOT__alu_res 
           >> 0x1fU);
    vlSelf->top__DOT__dut__DOT__core__DOT__alu_inst__DOT__zero_o 
        = (0U == vlSelf->top__DOT__dut__DOT__core__DOT__alu_res);
}
