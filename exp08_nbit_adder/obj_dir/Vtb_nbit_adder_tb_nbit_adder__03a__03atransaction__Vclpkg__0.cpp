// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_nbit_adder.h for the primary calling header

#include "Vtb_nbit_adder__pch.h"

void Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction::__VnoInFunc_display(Vtb_nbit_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction::__VnoInFunc_display\n"); );
    // Body
    VL_WRITEF_NX("A=%0d B=%0d Cin=%0d | Sum=%0d Cout=%0d\n",5
                 , '#',4,this->__PVT__A, '#',4,(IData)(this->__PVT__B)
                 , '#',1,this->__PVT__Cin, '#',4,(IData)(this->__PVT__Sum)
                 , '#',1,this->__PVT__Cout);
}

void Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction::init(Vtb_nbit_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction::__VnoInFunc_randomize(Vtb_nbit_adder__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    randomize__Vfuncrtn = 1U;
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction::__VnoInFunc___VBasicRand(Vtb_nbit_adder__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__A = (0x0000000fU & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__B = (0x0000000fU & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__Cin = (1U & VL_RANDOM_RNG_I(__Vm_rng));
}

void Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction::_ctor_var_reset(Vtb_nbit_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__A = 0;
    __PVT__B = 0;
    __PVT__Cin = 0;
    __PVT__Sum = 0;
    __PVT__Cout = 0;
}
