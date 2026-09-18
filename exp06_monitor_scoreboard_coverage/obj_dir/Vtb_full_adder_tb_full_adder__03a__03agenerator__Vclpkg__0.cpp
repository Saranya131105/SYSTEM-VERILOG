// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_full_adder.h for the primary calling header

#include "Vtb_full_adder__pch.h"

void Vtb_full_adder_tb_full_adder__03a__03agenerator::init(Vtb_full_adder__Syms* __restrict vlSymsp, VlClassRef<Vtb_full_adder_std__03a__03amailbox__Tz1> gen2drv) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03agenerator::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__gen2drv = gen2drv;
}

VlCoroutine Vtb_full_adder_tb_full_adder__03a__03agenerator::__VnoInFunc_run(Vtb_full_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03agenerator::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, unnamedblk1__DOT__i)) {
        this->__PVT__tr = VL_NEW(Vtb_full_adder_tb_full_adder__03a__03atransaction, vlSymsp);
        VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 74)->__PVT__a 
            = (1U & (unnamedblk1__DOT__i >> 2U));
        VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 75)->__PVT__b 
            = (1U & (unnamedblk1__DOT__i >> 1U));
        VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 76)->__PVT__cin 
            = (1U & unnamedblk1__DOT__i);
        VL_WRITEF_NX("[GENERATOR] Transaction %0d\n",1
                     , '~',32,((IData)(1U) + unnamedblk1__DOT__i));
        VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 80)->__VnoInFunc_display(vlSymsp);
        co_await VL_NULL_CHECK(this->__PVT__gen2drv, "tb_full_adder.sv", 82)->__VnoInFunc_put(vlSymsp, this->__PVT__tr);
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
    co_return;
}

void Vtb_full_adder_tb_full_adder__03a__03agenerator::_ctor_var_reset(Vtb_full_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03agenerator::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}
