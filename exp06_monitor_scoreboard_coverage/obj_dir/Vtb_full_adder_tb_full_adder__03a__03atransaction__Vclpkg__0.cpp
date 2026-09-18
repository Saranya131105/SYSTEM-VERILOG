// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_full_adder.h for the primary calling header

#include "Vtb_full_adder__pch.h"

void Vtb_full_adder_tb_full_adder__03a__03atransaction::__VnoInFunc_display(Vtb_full_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03atransaction::__VnoInFunc_display\n"); );
    // Body
    VL_WRITEF_NX("[TRANSACTION] A=%0d B=%0d Cin=%0d\n",3
                 , '#',1,this->__PVT__a, '#',1,(IData)(this->__PVT__b)
                 , '#',1,this->__PVT__cin);
}

void Vtb_full_adder_tb_full_adder__03a__03atransaction::init(Vtb_full_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03atransaction::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vtb_full_adder_tb_full_adder__03a__03atransaction::_ctor_var_reset(Vtb_full_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03atransaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__a = 0;
    __PVT__b = 0;
    __PVT__cin = 0;
    __PVT__sum = 0;
    __PVT__cout = 0;
}
