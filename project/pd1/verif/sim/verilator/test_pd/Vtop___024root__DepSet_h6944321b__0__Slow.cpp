// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
    Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__clock__0 
        = vlSelfRef.top__DOT__clock;
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__clkg__DOT__counter = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc = 0x1000000U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    Vtop___024root____Vm_traceActivitySetAll(vlSelf);
}

extern const VlWide<24>/*767:0*/ Vtop__ConstPool__CONST_h14e6b157_0;

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x64756d70U;
    __Vtemp_1[1U] = 0x7374312eU;
    __Vtemp_1[2U] = 0x7465U;
    vlSelfRef.top__DOT__genblk2__DOT_____05Fdump_fd 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                      , std::string{"w"});
    ;
    vlSelfRef.top__DOT__clock = 0U;
    vlSelfRef.top__DOT__reset = 1U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc = 0x1000000U;
    VL_READMEM_N(true, 32, 1048577, 0, VL_CVT_PACK_STR_NW(24, Vtop__ConstPool__CONST_h14e6b157_0)
                 ,  &(vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory)
                 , 0, ~0ULL);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x7fU, vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h80af893d__0 
            = ((0x100000U >= (0x1fffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__unnamedblk1__DOT__i))
                ? (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                   [(0x1fffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__unnamedblk1__DOT__i)])
                : 0U);
        if (VL_LIKELY(((0x100000U >= (0x1fffffU & VL_MULS_III(32, (IData)(4U), vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__unnamedblk1__DOT__i)))))) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[(0x1fffffU 
                                                                                & VL_MULS_III(32, (IData)(4U), vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__unnamedblk1__DOT__i))] 
                = vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h80af893d__0;
        }
        vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h70afa3bd__0 
            = (0xffU & (((0x100000U >= (0x1fffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__unnamedblk1__DOT__i))
                          ? vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                         [(0x1fffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__unnamedblk1__DOT__i)]
                          : 0U) >> 8U));
        if (VL_LIKELY(((0x100000U >= (0x1fffffU & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(4U), vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__unnamedblk1__DOT__i))))))) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[(0x1fffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__unnamedblk1__DOT__i)))] 
                = vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h70afa3bd__0;
        }
        vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h70a33b03__0 
            = (0xffU & (((0x100000U >= (0x1fffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__unnamedblk1__DOT__i))
                          ? vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                         [(0x1fffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__unnamedblk1__DOT__i)]
                          : 0U) >> 0x10U));
        if (VL_LIKELY(((0x100000U >= (0x1fffffU & ((IData)(2U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(4U), vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__unnamedblk1__DOT__i))))))) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[(0x1fffffU 
                                                                                & ((IData)(2U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__unnamedblk1__DOT__i)))] 
                = vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h70a33b03__0;
        }
        vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h70b4a2d6__0 
            = (((0x100000U >= (0x1fffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__unnamedblk1__DOT__i))
                 ? vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                [(0x1fffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__unnamedblk1__DOT__i)]
                 : 0U) >> 0x18U);
        if (VL_LIKELY(((0x100000U >= (0x1fffffU & ((IData)(3U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(4U), vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__unnamedblk1__DOT__i))))))) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[(0x1fffffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__unnamedblk1__DOT__i)))] 
                = vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h70b4a2d6__0;
        }
        vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__unnamedblk1__DOT__i);
    }
    VL_WRITEF_NX("IMEMORY: Loaded 127 32-bit words from /Users/dvinitsk/workspace/github.com/dvinitsk/EECS-4201-project/project/pd1/verif/data/test1.x\n",0);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: Internal 'act' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge top.clock)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge top.clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: Internal 'nba' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge top.clock)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge top.clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vm_traceActivitySetAll\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->top__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5844775645289313205ull);
    vlSelf->top__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4457194187413456923ull);
    vlSelf->top__DOT__genblk2__DOT_____05Fdump_fd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2131419011722022482ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->top__DOT__genblk2__DOT__pattern_dump, __VscopeHash, 10955522923576967124ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->top__DOT__genblk2__DOT__pattern_dump_proc__DOT__stage, __VscopeHash, 15181666039126907824ull);
    vlSelf->top__DOT__clkg__DOT__counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7673510899991897937ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__f_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12048714892135156921ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__f_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7229432090547846086ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__addr_i_top = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10717109848092060931ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__data_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6861737920208188584ull);
    for (int __Vi0 = 0; __Vi0 < 1048577; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1463922315813575142ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1048577; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11844625093970627893ull);
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__memory1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h80af893d__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12943319915352096524ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h70afa3bd__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1260816507207112245ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h70a33b03__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4639124275964878144ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h70b4a2d6__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3449421378879564782ull);
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__clock__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14234138457933551086ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
