// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_counter.h for the primary calling header

#include "Vtb_counter__pch.h"

void Vtb_counter_tb_counter__03a__03agenerator::init(Vtb_counter__Syms* __restrict vlSymsp, VlClassRef<Vtb_counter_std__03a__03amailbox__Tz1> gen2drv) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03agenerator::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__gen2drv = gen2drv;
}

VlCoroutine Vtb_counter_tb_counter__03a__03agenerator::__VnoInFunc_run(Vtb_counter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03agenerator::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCond_1;
    IData/*31:0*/ __VlefCall_0__randomize;
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000014U, unnamedblk1__DOT__i)) {
        this->__PVT__tr = VL_NEW(Vtb_counter_tb_counter__03a__03atransaction, vlSymsp);
        if ((VlNull{} != this->__PVT__tr)) {
            VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 86)->__VnoInFunc_randomize(vlSymsp, __VlefCall_0__randomize);
            __VlefCond_1 = __VlefCall_0__randomize;
        } else {
            __VlefCond_1 = 0U;
        }
        if (VL_UNLIKELY(((0U != __VlefCond_1)))) {
            VL_WRITEF_NX("[GENERATOR] Transaction %0d\n",1
                         , '~',32,((IData)(1U) + unnamedblk1__DOT__i));
            VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 90)->__VnoInFunc_display(vlSymsp);
            co_await VL_NULL_CHECK(this->__PVT__gen2drv, "tb.sv", 92)->__VnoInFunc_put(vlSymsp, this->__PVT__tr);
        }
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
    co_return;
}

void Vtb_counter_tb_counter__03a__03agenerator::_ctor_var_reset(Vtb_counter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03agenerator::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}
