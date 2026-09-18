// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_d_flipflop.h for the primary calling header

#include "Vtb_d_flipflop__pch.h"

void Vtb_d_flipflop_tb_d_flipflop__03a__03amonitor::init(Vtb_d_flipflop__Syms* __restrict vlSymsp, VlClassRef<Vtb_d_flipflop_std__03a__03amailbox__Tz1> mon2scb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03amonitor::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__mon2scb = mon2scb;
}

VlCoroutine Vtb_d_flipflop_tb_d_flipflop__03a__03amonitor::__VnoInFunc_run(Vtb_d_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03amonitor::__VnoInFunc_run\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_d_flipflop____PVT__clk__0;
    __Vtrigprevexpr___TOP__tb_d_flipflop____PVT__clk__0 = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    unnamedblk1_1__DOT____Vrepeat0 = 0x00000014U;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        CData/*0:0*/ __VdynTrigger_hc58318b2__0;
        __VdynTrigger_hc58318b2__0 = 0;
        __VdynTrigger_hc58318b2__0 = 0U;
        __Vtrigprevexpr___TOP__tb_d_flipflop____PVT__clk__0 
            = vlSymsp->TOP__tb_d_flipflop.__PVT__clk;
        while ((1U & (~ (IData)(__VdynTrigger_hc58318b2__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge tb_d_flipflop.clk)", 
                                                         "tb.sv", 
                                                         137);
            __VdynTrigger_hc58318b2__0 = ((IData)(vlSymsp->TOP__tb_d_flipflop.__PVT__clk) 
                                          & (~ (IData)(__Vtrigprevexpr___TOP__tb_d_flipflop____PVT__clk__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hc58318b2__0);
            __Vtrigprevexpr___TOP__tb_d_flipflop____PVT__clk__0 
                = vlSymsp->TOP__tb_d_flipflop.__PVT__clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge tb_d_flipflop.clk)", 
                                                     "tb.sv", 
                                                     137);
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000003e8ULL, 
                                                nullptr, 
                                                "tb.sv", 
                                                139);
        this->__PVT__tr = VL_NEW(Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction, vlSymsp);
        VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 143)->__PVT__reset 
            = vlSymsp->TOP__tb_d_flipflop.__PVT__reset;
        VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 144)->__PVT__d 
            = vlSymsp->TOP__tb_d_flipflop.__PVT__d;
        VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 145)->__PVT__q 
            = vlSymsp->TOP__tb_d_flipflop.__PVT__q;
        VL_WRITEF_NX("[MONITOR] RESET=%0d D=%0d Q=%0d\n",3
                     , '#',1,VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 148)
                     ->__PVT__reset, '#',1,VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 148)
                     ->__PVT__d, '#',1,VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 148)
                     ->__PVT__q);
        co_await VL_NULL_CHECK(this->__PVT__mon2scb, "tb.sv", 150)->__VnoInFunc_put(vlSymsp, this->__PVT__tr);
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    co_return;
}

void Vtb_d_flipflop_tb_d_flipflop__03a__03amonitor::_ctor_var_reset(Vtb_d_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03amonitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}
