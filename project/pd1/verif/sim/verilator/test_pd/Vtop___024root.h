// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ top__DOT__clock;
    CData/*0:0*/ top__DOT__reset;
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h80af893d__0;
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h70afa3bd__0;
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h70a33b03__0;
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__memory1__DOT____Vlvbound_h70b4a2d6__0;
    CData/*0:0*/ __Vdpi_export_trigger;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__clock__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ top__DOT__genblk2__DOT_____05Fdump_fd;
    VlWide<4>/*127:0*/ top__DOT__genblk2__DOT__pattern_dump;
    VlWide<4>/*127:0*/ top__DOT__genblk2__DOT__pattern_dump_proc__DOT__stage;
    IData/*31:0*/ top__DOT__clkg__DOT__counter;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__f_pc;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__f_inst;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__addr_i_top;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__data_i;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__memory1__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1048577> top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory;
    VlUnpacked<CData/*7:0*/, 1048577> top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
