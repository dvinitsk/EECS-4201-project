// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((2ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    VL_WRITEF("###########\n");
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vdly__top__DOT__counter;
    __Vdly__top__DOT__counter = 0;
    IData/*31:0*/ __Vdly__top__DOT__reset_counter;
    __Vdly__top__DOT__reset_counter = 0;
    IData/*31:0*/ __Vdly__top__DOT__clkg__DOT__counter;
    __Vdly__top__DOT__clkg__DOT__counter = 0;
    // Body
    __Vdly__top__DOT__clkg__DOT__counter = vlSelf->top__DOT__clkg__DOT__counter;
    __Vdly__top__DOT__counter = vlSelf->top__DOT__counter;
    __Vdly__top__DOT__reset_counter = vlSelf->top__DOT__reset_counter;
    if (VL_UNLIKELY(vlSelf->top__DOT__reset_done)) {
        VL_WRITEF("[TSP] op1=%b, op2=%b, out=%b\n",
                  32,vlSelf->top__DOT__tsp_op1,32,vlSelf->top__DOT__tsp_op2,
                  32,vlSelf->top__DOT__tsp_out);
    }
    if (VL_UNLIKELY(vlSelf->top__DOT__reset_done)) {
        VL_WRITEF("[ALU] inp1=%b, inp2=%b, alusel=%b, res=%b\n",
                  32,vlSelf->top__DOT__alu_op1,32,vlSelf->top__DOT__alu_op2,
                  2,(IData)(vlSelf->top__DOT__alu_sel),
                  32,vlSelf->top__DOT__alu_res);
    }
    if (VL_UNLIKELY(vlSelf->top__DOT__reset_done)) {
        VL_WRITEF("[REG] inp=%b, out=%b\n",32,vlSelf->top__DOT__reg_rst_inp,
                  32,vlSelf->top__DOT__reg_rst_out);
    }
    if (VL_UNLIKELY(vlSelf->top__DOT__reset_done)) {
        VL_WRITEF("[ASSIGN_XOR] op1=%b, op2=%b, res=%b\n",
                  1,vlSelf->top__DOT__assign_xor_op1,
                  1,(IData)(vlSelf->top__DOT__assign_xor_op2),
                  1,vlSelf->top__DOT__assign_xor_res);
    }
    __Vdly__top__DOT__counter = ((IData)(1U) + vlSelf->top__DOT__counter);
    if (VL_UNLIKELY((0x64U == vlSelf->top__DOT__counter))) {
        VL_WRITEF("[PD0] No error encountered\n");
        VL_FINISH_MT("/home/parallels/github/EECS-4201-project/project/pd0/verif/tests/test_pd.sv", 30, "");
    }
    vlSelf->top__DOT__tsp_op2 = vlSelf->top__DOT__dut__DOT__core__DOT__tsp_op2;
    vlSelf->top__DOT__tsp_op1 = vlSelf->top__DOT__counter;
    vlSelf->top__DOT__tsp_out = vlSelf->top__DOT__dut__DOT__core__DOT__tsp_out;
    vlSelf->top__DOT__alu_res = vlSelf->top__DOT__dut__DOT__core__DOT__alu_res;
    vlSelf->top__DOT__alu_op2 = vlSelf->top__DOT__dut__DOT__core__DOT__alu_op2;
    vlSelf->top__DOT__alu_op1 = vlSelf->top__DOT__counter;
    vlSelf->top__DOT__alu_sel = (3U & vlSelf->top__DOT__counter);
    vlSelf->top__DOT__reg_rst_inp = vlSelf->top__DOT__counter;
    vlSelf->top__DOT__reg_rst_out = vlSelf->top__DOT__dut__DOT__core__DOT__reg_rst_out;
    if (vlSelf->top__DOT__reset) {
        vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__op2_reg_out = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__sum_reg_out = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__op1_reg_out = 0U;
        __Vdly__top__DOT__reset_counter = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__tsp_out = 0U;
        vlSelf->top__DOT__dut__DOT__core__DOT__reg_rst_out = 0U;
    } else {
        vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__op2_reg_out 
            = vlSelf->top__DOT__dut__DOT__core__DOT__tsp_op2;
        vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__sum_reg_out 
            = vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__stage1_alu_out;
        vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__op1_reg_out 
            = vlSelf->top__DOT__counter;
        __Vdly__top__DOT__reset_counter = ((IData)(1U) 
                                           + vlSelf->top__DOT__reset_counter);
        vlSelf->top__DOT__dut__DOT__core__DOT__tsp_out 
            = vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__stage2_alu_out;
        vlSelf->top__DOT__dut__DOT__core__DOT__reg_rst_out 
            = vlSelf->top__DOT__counter;
    }
    vlSelf->top__DOT__assign_xor_op1 = (1U & vlSelf->top__DOT__counter);
    vlSelf->top__DOT__assign_xor_op2 = (1U & (vlSelf->top__DOT__counter 
                                              >> 1U));
    vlSelf->top__DOT__assign_xor_res = (1U & (vlSelf->top__DOT__counter 
                                              ^ (vlSelf->top__DOT__counter 
                                                 >> 1U)));
    if (((IData)(vlSelf->top__DOT__reset_neg) & VL_LTES_III(32, 3U, vlSelf->top__DOT__reset_counter))) {
        vlSelf->top__DOT__reset_done = 1U;
    }
    vlSelf->top__DOT__reset_counter = __Vdly__top__DOT__reset_counter;
    vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__stage1_alu_out 
        = (vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__op1_reg_out 
           + vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__op2_reg_out);
    vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__alu_add__DOT__neg_o 
        = (vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__stage1_alu_out 
           >> 0x1fU);
    vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__alu_add__DOT__zero_o 
        = (0U == vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__stage1_alu_out);
    if (((IData)(vlSelf->top__DOT__reset_reg) & (~ (IData)(vlSelf->top__DOT__reset)))) {
        vlSelf->top__DOT__reset_neg = 1U;
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__stage2_alu_out 
        = (vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__sum_reg_out 
           - vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__op1_reg_out);
    vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__alu_sub__DOT__neg_o 
        = (vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__stage2_alu_out 
           >> 0x1fU);
    vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__alu_sub__DOT__zero_o 
        = (0U == vlSelf->top__DOT__dut__DOT__core__DOT__tsp_inst__DOT__stage2_alu_out);
    vlSelf->top__DOT__counter = __Vdly__top__DOT__counter;
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
    vlSelf->top__DOT__reset_reg = vlSelf->top__DOT__reset;
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
    __Vdly__top__DOT__clkg__DOT__counter = ((IData)(1U) 
                                            + vlSelf->top__DOT__clkg__DOT__counter);
    vlSelf->top__DOT__reset = VL_GTS_III(32, 5U, vlSelf->top__DOT__clkg__DOT__counter);
    if (VL_UNLIKELY((0x186a0U == vlSelf->top__DOT__clkg__DOT__counter))) {
        VL_FINISH_MT("/home/parallels/github/EECS-4201-project/project/pd0/verif/tests/clockgen.sv", 26, "");
    }
    vlSelf->top__DOT__clkg__DOT__counter = __Vdly__top__DOT__clkg__DOT__counter;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/parallels/github/EECS-4201-project/project/pd0/verif/tests/test_pd.sv", 8, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/parallels/github/EECS-4201-project/project/pd0/verif/tests/test_pd.sv", 8, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/parallels/github/EECS-4201-project/project/pd0/verif/tests/test_pd.sv", 8, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
