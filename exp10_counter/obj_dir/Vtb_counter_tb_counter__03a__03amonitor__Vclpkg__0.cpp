// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_counter.h for the primary calling header

#include "Vtb_counter__pch.h"

void Vtb_counter_tb_counter__03a__03amonitor::init(Vtb_counter__Syms* __restrict vlSymsp, VlClassRef<Vtb_counter_std__03a__03amailbox__Tz1> mon2scb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03amonitor::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__mon2scb = mon2scb;
}

VlCoroutine Vtb_counter_tb_counter__03a__03amonitor::__VnoInFunc_run(Vtb_counter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03amonitor::__VnoInFunc_run\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_counter____PVT__clk__0;
    __Vtrigprevexpr___TOP__tb_counter____PVT__clk__0 = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    unnamedblk1_1__DOT____Vrepeat0 = 0x00000014U;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        CData/*0:0*/ __VdynTrigger_h3d092d09__0;
        __VdynTrigger_h3d092d09__0 = 0;
        __VdynTrigger_h3d092d09__0 = 0U;
        __Vtrigprevexpr___TOP__tb_counter____PVT__clk__0 
            = vlSymsp->TOP__tb_counter.__PVT__clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3d092d09__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge tb_counter.clk)", 
                                                         "tb.sv", 
                                                         152);
            __VdynTrigger_h3d092d09__0 = ((IData)(vlSymsp->TOP__tb_counter.__PVT__clk) 
                                          & (~ (IData)(__Vtrigprevexpr___TOP__tb_counter____PVT__clk__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3d092d09__0);
            __Vtrigprevexpr___TOP__tb_counter____PVT__clk__0 
                = vlSymsp->TOP__tb_counter.__PVT__clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge tb_counter.clk)", 
                                                     "tb.sv", 
                                                     152);
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000003e8ULL, 
                                                nullptr, 
                                                "tb.sv", 
                                                154);
        this->__PVT__tr = VL_NEW(Vtb_counter_tb_counter__03a__03atransaction, vlSymsp);
        VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 158)->__PVT__reset 
            = vlSymsp->TOP__tb_counter.__PVT__reset;
        VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 159)->__PVT__count 
            = vlSymsp->TOP__tb_counter.__PVT__count;
        VL_WRITEF_NX("[MONITOR] RESET=%0d | COUNT=%0d\n",2
                     , '#',1,VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 162)
                     ->__PVT__reset, '#',4,VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 162)
                     ->__PVT__count);
        co_await VL_NULL_CHECK(this->__PVT__mon2scb, "tb.sv", 164)->__VnoInFunc_put(vlSymsp, this->__PVT__tr);
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    co_return;
}

void Vtb_counter_tb_counter__03a__03amonitor::_ctor_var_reset(Vtb_counter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03amonitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}
