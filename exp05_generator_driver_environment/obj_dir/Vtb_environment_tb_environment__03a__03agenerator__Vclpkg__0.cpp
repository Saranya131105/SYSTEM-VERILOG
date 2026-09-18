// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_environment.h for the primary calling header

#include "Vtb_environment__pch.h"

void Vtb_environment_tb_environment__03a__03agenerator::init(Vtb_environment__Syms* __restrict vlSymsp, VlClassRef<Vtb_environment_std__03a__03amailbox__Tz1> gen2drv) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03agenerator::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__gen2drv = gen2drv;
}

VlCoroutine Vtb_environment_tb_environment__03a__03agenerator::__VnoInFunc_run(Vtb_environment__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03agenerator::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCond_1;
    IData/*31:0*/ __VlefCall_0__randomize;
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x0000000aU, unnamedblk1__DOT__i)) {
        this->__PVT__tr = VL_NEW(Vtb_environment_tb_environment__03a__03atransaction, vlSymsp);
        if ((VlNull{} != this->__PVT__tr)) {
            VL_NULL_CHECK(this->__PVT__tr, "tb_environment.sv", 50)->__VnoInFunc_randomize(vlSymsp, __VlefCall_0__randomize);
            __VlefCond_1 = __VlefCall_0__randomize;
        } else {
            __VlefCond_1 = 0U;
        }
        if ((0U != __VlefCond_1)) {
            VL_WRITEF_NX("[GENERATOR] Transaction %0d\n",1
                         , '~',32,((IData)(1U) + unnamedblk1__DOT__i));
            VL_NULL_CHECK(this->__PVT__tr, "tb_environment.sv", 52)->__VnoInFunc_display(vlSymsp);
            co_await VL_NULL_CHECK(this->__PVT__gen2drv, "tb_environment.sv", 53)->__VnoInFunc_put(vlSymsp, this->__PVT__tr);
        } else {
            VL_WRITEF_NX("[GENERATOR] Randomization FAILED\n",0);
        }
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
    co_return;
}

void Vtb_environment_tb_environment__03a__03agenerator::_ctor_var_reset(Vtb_environment__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03agenerator::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}
