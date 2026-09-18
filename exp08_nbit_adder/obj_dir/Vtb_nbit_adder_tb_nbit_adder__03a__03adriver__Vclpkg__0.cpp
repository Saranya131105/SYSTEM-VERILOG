// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_nbit_adder.h for the primary calling header

#include "Vtb_nbit_adder__pch.h"

void Vtb_nbit_adder_tb_nbit_adder__03a__03adriver::init(Vtb_nbit_adder__Syms* __restrict vlSymsp, VlClassRef<Vtb_nbit_adder_std__03a__03amailbox__Tz1> gen2drv) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_nbit_adder_tb_nbit_adder__03a__03adriver::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__gen2drv = gen2drv;
}

VlCoroutine Vtb_nbit_adder_tb_nbit_adder__03a__03adriver::__VnoInFunc_run(Vtb_nbit_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_nbit_adder_tb_nbit_adder__03a__03adriver::__VnoInFunc_run\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_nbit_adder____PVT__clk__0;
    __Vtrigprevexpr___TOP__tb_nbit_adder____PVT__clk__0 = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    unnamedblk1_1__DOT____Vrepeat0 = 0x00000014U;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        co_await VL_NULL_CHECK(this->__PVT__gen2drv, "tb.sv", 114)->__VnoInFunc_get(vlSymsp, this->__PVT__tr);
        CData/*0:0*/ __VdynTrigger_h698be0bf__0;
        __VdynTrigger_h698be0bf__0 = 0;
        __VdynTrigger_h698be0bf__0 = 0U;
        __Vtrigprevexpr___TOP__tb_nbit_adder____PVT__clk__0 
            = vlSymsp->TOP__tb_nbit_adder.__PVT__clk;
        while ((1U & (~ (IData)(__VdynTrigger_h698be0bf__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(negedge tb_nbit_adder.clk)", 
                                                         "tb.sv", 
                                                         116);
            __VdynTrigger_h698be0bf__0 = ((~ (IData)(vlSymsp->TOP__tb_nbit_adder.__PVT__clk)) 
                                          & (IData)(__Vtrigprevexpr___TOP__tb_nbit_adder____PVT__clk__0));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h698be0bf__0);
            __Vtrigprevexpr___TOP__tb_nbit_adder____PVT__clk__0 
                = vlSymsp->TOP__tb_nbit_adder.__PVT__clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(negedge tb_nbit_adder.clk)", 
                                                     "tb.sv", 
                                                     116);
        vlSymsp->TOP__tb_nbit_adder.__PVT__A = VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 118)
            ->__PVT__A;
        vlSymsp->TOP__tb_nbit_adder.__PVT__B = VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 119)
            ->__PVT__B;
        vlSymsp->TOP__tb_nbit_adder.__PVT__Cin = VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 120)
            ->__PVT__Cin;
        VL_WRITEF_NX("[DRIVER] A=%0d B=%0d Cin=%0d\n",3
                     , '#',4,vlSymsp->TOP__tb_nbit_adder.__PVT__A
                     , '#',4,(IData)(vlSymsp->TOP__tb_nbit_adder.__PVT__B)
                     , '#',1,vlSymsp->TOP__tb_nbit_adder.__PVT__Cin);
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    co_return;
}

void Vtb_nbit_adder_tb_nbit_adder__03a__03adriver::_ctor_var_reset(Vtb_nbit_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_nbit_adder_tb_nbit_adder__03a__03adriver::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}
