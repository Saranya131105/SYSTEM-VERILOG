// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_environment.h for the primary calling header

#include "Vtb_environment__pch.h"

void Vtb_environment_tb_environment__03a__03aenvironment::init(Vtb_environment__Syms* __restrict vlSymsp, Vtb_environment_half_adder_if* vif) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03aenvironment::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__gen2drv = VL_NEW(Vtb_environment_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    this->__PVT__gen = VL_NEW(Vtb_environment_tb_environment__03a__03agenerator, vlSymsp, this->__PVT__gen2drv);
    this->__PVT__drv = VL_NEW(Vtb_environment_tb_environment__03a__03adriver, vlSymsp, this->__PVT__gen2drv, vif);
}

VlCoroutine Vtb_environment_tb_environment__03a__03aenvironment::__VnoInFunc_run(Vtb_environment__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03aenvironment::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    {
        VlForkSync __Vfork_1__sync;
        __Vfork_1__sync.init(2U, nullptr);
        this->__VnoInFunc_run____Vfork_1__0(vlSymsp, __Vfork_1__sync);
        this->__VnoInFunc_run____Vfork_1__1(vlSymsp, __Vfork_1__sync);
        co_await __Vfork_1__sync.join(nullptr, "tb_environment.sv", 
                                      119);
    }
    co_return;
}

VlCoroutine Vtb_environment_tb_environment__03a__03aenvironment::__VnoInFunc_run____Vfork_1__1(Vtb_environment__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03aenvironment::__VnoInFunc_run____Vfork_1__1\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__drv, "tb_environment.sv", 121)->__VnoInFunc_run(vlSymsp);
    __Vfork_1__sync.done("tb_environment.sv", 121);
    co_return;
}

VlCoroutine Vtb_environment_tb_environment__03a__03aenvironment::__VnoInFunc_run____Vfork_1__0(Vtb_environment__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03aenvironment::__VnoInFunc_run____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__gen, "tb_environment.sv", 120)->__VnoInFunc_run(vlSymsp);
    __Vfork_1__sync.done("tb_environment.sv", 120);
    co_return;
}

void Vtb_environment_tb_environment__03a__03aenvironment::_ctor_var_reset(Vtb_environment__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_environment_tb_environment__03a__03aenvironment::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}
