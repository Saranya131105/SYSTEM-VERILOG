// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_nbit_adder.h for the primary calling header

#include "Vtb_nbit_adder__pch.h"

void Vtb_nbit_adder_tb_nbit_adder__03a__03agenerator::init(Vtb_nbit_adder__Syms* __restrict vlSymsp, VlClassRef<Vtb_nbit_adder_std__03a__03amailbox__Tz1> gen2drv) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_nbit_adder_tb_nbit_adder__03a__03agenerator::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__gen2drv = gen2drv;
}

VlCoroutine Vtb_nbit_adder_tb_nbit_adder__03a__03agenerator::__VnoInFunc_run(Vtb_nbit_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_nbit_adder_tb_nbit_adder__03a__03agenerator::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCond_1;
    IData/*31:0*/ __VlefCall_0__randomize;
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000014U, unnamedblk1__DOT__i)) {
        this->__PVT__tr = VL_NEW(Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction, vlSymsp);
        if ((VlNull{} != this->__PVT__tr)) {
            VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 80)->__VnoInFunc_randomize(vlSymsp, __VlefCall_0__randomize);
            __VlefCond_1 = __VlefCall_0__randomize;
        } else {
            __VlefCond_1 = 0U;
        }
        if (VL_UNLIKELY(((0U != __VlefCond_1)))) {
            VL_WRITEF_NX("[GENERATOR] Transaction %0d\n",1
                         , '~',32,((IData)(1U) + unnamedblk1__DOT__i));
            VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 84)->__VnoInFunc_display(vlSymsp);
            co_await VL_NULL_CHECK(this->__PVT__gen2drv, "tb.sv", 86)->__VnoInFunc_put(vlSymsp, this->__PVT__tr);
        }
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
    co_return;
}

void Vtb_nbit_adder_tb_nbit_adder__03a__03agenerator::_ctor_var_reset(Vtb_nbit_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_nbit_adder_tb_nbit_adder__03a__03agenerator::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}
