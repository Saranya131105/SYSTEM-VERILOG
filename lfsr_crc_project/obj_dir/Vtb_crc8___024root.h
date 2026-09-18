// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_crc8.h for the primary calling header

#ifndef VERILATED_VTB_CRC8___024ROOT_H_
#define VERILATED_VTB_CRC8___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_crc8__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_crc8___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_crc8__DOT__clk;
    CData/*0:0*/ tb_crc8__DOT__rst;
    CData/*0:0*/ tb_crc8__DOT__start;
    CData/*7:0*/ tb_crc8__DOT__data_in;
    CData/*7:0*/ tb_crc8__DOT__crc_out;
    CData/*0:0*/ tb_crc8__DOT__done;
    CData/*7:0*/ tb_crc8__DOT__DUT__DOT__crc_reg;
    CData/*2:0*/ tb_crc8__DOT__DUT__DOT__bit_count;
    CData/*0:0*/ tb_crc8__DOT__DUT__DOT__busy;
    CData/*0:0*/ tb_crc8__DOT__DUT__DOT__feedback;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_crc8__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_crc8__DOT__rst__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_crc8__DOT__done__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h15c8cebb__0;

    // INTERNAL VARIABLES
    Vtb_crc8__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_crc8___024root(Vtb_crc8__Syms* symsp, const char* namep);
    ~Vtb_crc8___024root();
    VL_UNCOPYABLE(Vtb_crc8___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
