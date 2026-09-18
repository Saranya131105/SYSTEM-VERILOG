// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_d_flipflop.h for the primary calling header

#include "Vtb_d_flipflop__pch.h"

void Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction::__VnoInFunc_display(Vtb_d_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction::__VnoInFunc_display\n"); );
    // Body
    VL_WRITEF_NX("RESET=%0d D=%0d\n",2, '#',1,this->__PVT__reset
                 , '#',1,(IData)(this->__PVT__d));
}

void Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction::init(Vtb_d_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction::__VnoInFunc_randomize(Vtb_d_flipflop__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    randomize__Vfuncrtn = 1U;
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction::__VnoInFunc___VBasicRand(Vtb_d_flipflop__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__reset = (1U & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__d = (1U & VL_RANDOM_RNG_I(__Vm_rng));
}

void Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction::_ctor_var_reset(Vtb_d_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__reset = 0;
    __PVT__d = 0;
    __PVT__q = 0;
}
