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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.top__DOT__dut__DOT__core__DOT__u_memory__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+1,(vlSelfRef.top__DOT__reset));
        bufp->chgIData(oldp+2,(vlSelfRef.top__DOT__clkg__DOT__counter),32);
        bufp->chgIData(oldp+3,(vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch_pc_o),32);
        bufp->chgIData(oldp+4,(vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch_insn_o),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+5,(vlSelfRef.top__DOT__dut__DOT__core__DOT__mem_addr),32);
        bufp->chgIData(oldp+6,(vlSelfRef.top__DOT__dut__DOT__core__DOT__mem_data_in),32);
        bufp->chgBit(oldp+7,(vlSelfRef.top__DOT__dut__DOT__core__DOT__mem_read_en));
        bufp->chgBit(oldp+8,(vlSelfRef.top__DOT__dut__DOT__core__DOT__mem_write_en));
        bufp->chgIData(oldp+9,((vlSelfRef.top__DOT__dut__DOT__core__DOT__mem_addr 
                                - (IData)(0x1000000U))),32);
        bufp->chgIData(oldp+10,(vlSelfRef.top__DOT__genblk3__DOT__tick),32);
        bufp->chgCData(oldp+11,(vlSelfRef.top__DOT__genblk3__DOT__state),2);
        bufp->chgIData(oldp+12,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__Vstatic__check_mem_read1_func__DOT__addr),32);
        bufp->chgIData(oldp+13,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__Vstatic__check_mem_read1_func__DOT__data),32);
        bufp->chgWData(oldp+14,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read1__Vstatic__check_mem_read1_func__DOT__p),128);
        bufp->chgIData(oldp+18,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__Vstatic__check_mem_read2_func__DOT__addr),32);
        bufp->chgIData(oldp+19,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__Vstatic__check_mem_read2_func__DOT__data),32);
        bufp->chgWData(oldp+20,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_mem_read2__Vstatic__check_mem_read2_func__DOT__p),128);
        bufp->chgBit(oldp+24,(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__res));
        bufp->chgBit(oldp+25,(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__correct));
        bufp->chgWData(oldp+26,(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__msg),4096);
    }
    bufp->chgBit(oldp+154,(vlSelfRef.top__DOT__clock));
    bufp->chgIData(oldp+155,(vlSelfRef.top__DOT__dut__DOT__core__DOT__mem_data_out),32);
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
