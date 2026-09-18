// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_nbit_adder.h for the primary calling header

#include "Vtb_nbit_adder__pch.h"

void Vtb_nbit_adder_tb_nbit_adder__03a__03amonitor::init(Vtb_nbit_adder__Syms* __restrict vlSymsp, VlClassRef<Vtb_nbit_adder_std__03a__03amailbox__Tz1> mon2scb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_nbit_adder_tb_nbit_adder__03a__03amonitor::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__mon2scb = mon2scb;
}

VlCoroutine Vtb_nbit_adder_tb_nbit_adder__03a__03amonitor::__VnoInFunc_run(Vtb_nbit_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_nbit_adder_tb_nbit_adder__03a__03amonitor::__VnoInFunc_run\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_nbit_adder____PVT__clk__0;
    __Vtrigprevexpr___TOP__tb_nbit_adder____PVT__clk__0 = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    unnamedblk1_1__DOT____Vrepeat0 = 0x00000014U;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        CData/*0:0*/ __VdynTrigger_h698bde00__0;
        __VdynTrigger_h698bde00__0 = 0;
        __VdynTrigger_h698bde00__0 = 0U;
        __Vtrigprevexpr___TOP__tb_nbit_adder____PVT__clk__0 
            = vlSymsp->TOP__tb_nbit_adder.__PVT__clk;
        while ((1U & (~ (IData)(__VdynTrigger_h698bde00__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge tb_nbit_adder.clk)", 
                                                         "tb.sv", 
                                                         151);
            __VdynTrigger_h698bde00__0 = ((IData)(vlSymsp->TOP__tb_nbit_adder.__PVT__clk) 
                                          & (~ (IData)(__Vtrigprevexpr___TOP__tb_nbit_adder____PVT__clk__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h698bde00__0);
            __Vtrigprevexpr___TOP__tb_nbit_adder____PVT__clk__0 
                = vlSymsp->TOP__tb_nbit_adder.__PVT__clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge tb_nbit_adder.clk)", 
                                                     "tb.sv", 
                                                     151);
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000003e8ULL, 
                                                nullptr, 
                                                "tb.sv", 
                                                153);
        this->__PVT__tr = VL_NEW(Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction, vlSymsp);
        VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 157)->__PVT__A 
            = vlSymsp->TOP__tb_nbit_adder.__PVT__A;
        VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 158)->__PVT__B 
            = vlSymsp->TOP__tb_nbit_adder.__PVT__B;
        VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 159)->__PVT__Cin 
            = vlSymsp->TOP__tb_nbit_adder.__PVT__Cin;
        VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 161)->__PVT__Sum 
            = (0x0000000fU & ((IData)(vlSymsp->TOP__tb_nbit_adder.__PVT__A) 
                              + ((IData)(vlSymsp->TOP__tb_nbit_adder.__PVT__B) 
                                 + (IData)(vlSymsp->TOP__tb_nbit_adder.__PVT__Cin))));
        VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 162)->__PVT__Cout 
            = (1U & (((IData)(vlSymsp->TOP__tb_nbit_adder.__PVT__A) 
                      + ((IData)(vlSymsp->TOP__tb_nbit_adder.__PVT__Cin) 
                         + (IData)(vlSymsp->TOP__tb_nbit_adder.__PVT__B))) 
                     >> 4U));
        VL_WRITEF_NX("[MONITOR] A=%0d B=%0d Cin=%0d | Sum=%0d Cout=%0d\n",5
                     , '#',4,VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 166)
                     ->__PVT__A, '#',4,VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 167)
                     ->__PVT__B, '#',1,VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 168)
                     ->__PVT__Cin, '#',4,VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 169)
                     ->__PVT__Sum, '#',1,VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 170)
                     ->__PVT__Cout);
        co_await VL_NULL_CHECK(this->__PVT__mon2scb, "tb.sv", 173)->__VnoInFunc_put(vlSymsp, this->__PVT__tr);
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    co_return;
}

void Vtb_nbit_adder_tb_nbit_adder__03a__03amonitor::_ctor_var_reset(Vtb_nbit_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_nbit_adder_tb_nbit_adder__03a__03amonitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}
