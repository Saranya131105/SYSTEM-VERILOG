// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_full_adder.h for the primary calling header

#include "Vtb_full_adder__pch.h"

void Vtb_full_adder_tb_full_adder__03a__03aenvironment::init(Vtb_full_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03aenvironment::new\n"); );
    // Locals
    VlClassRef<Vtb_full_adder_std__03a__03amailbox__Tz1> TOP__tb_full_adder__DOT____PVT__gen2drv;
    VlClassRef<Vtb_full_adder_std__03a__03amailbox__Tz1> TOP__tb_full_adder__DOT____PVT__mon2scb;
    // Body
    _ctor_var_reset(vlSymsp);
    TOP__tb_full_adder__DOT____PVT__gen2drv = VL_NEW(Vtb_full_adder_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    TOP__tb_full_adder__DOT____PVT__mon2scb = VL_NEW(Vtb_full_adder_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    this->__PVT__gen = VL_NEW(Vtb_full_adder_tb_full_adder__03a__03agenerator, vlSymsp, TOP__tb_full_adder__DOT____PVT__gen2drv);
    this->__PVT__drv = VL_NEW(Vtb_full_adder_tb_full_adder__03a__03adriver, vlSymsp, TOP__tb_full_adder__DOT____PVT__gen2drv);
    this->__PVT__mon = VL_NEW(Vtb_full_adder_tb_full_adder__03a__03amonitor, vlSymsp, TOP__tb_full_adder__DOT____PVT__mon2scb);
    this->__PVT__scb = VL_NEW(Vtb_full_adder_tb_full_adder__03a__03ascoreboard, vlSymsp, TOP__tb_full_adder__DOT____PVT__mon2scb);
}

VlCoroutine Vtb_full_adder_tb_full_adder__03a__03aenvironment::__VnoInFunc_run(Vtb_full_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03aenvironment::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    {
        VlForkSync __Vfork_1__sync;
        __Vfork_1__sync.init(4U, nullptr);
        this->__VnoInFunc_run____Vfork_1__0(vlSymsp, __Vfork_1__sync);
        this->__VnoInFunc_run____Vfork_1__1(vlSymsp, __Vfork_1__sync);
        this->__VnoInFunc_run____Vfork_1__2(vlSymsp, __Vfork_1__sync);
        this->__VnoInFunc_run____Vfork_1__3(vlSymsp, __Vfork_1__sync);
        co_await __Vfork_1__sync.join(nullptr, "tb_full_adder.sv", 
                                      273);
    }
    co_return;
}

VlCoroutine Vtb_full_adder_tb_full_adder__03a__03aenvironment::__VnoInFunc_run____Vfork_1__3(Vtb_full_adder__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03aenvironment::__VnoInFunc_run____Vfork_1__3\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__scb, "tb_full_adder.sv", 278)->__VnoInFunc_run(vlSymsp);
    __Vfork_1__sync.done("tb_full_adder.sv", 278);
    co_return;
}

VlCoroutine Vtb_full_adder_tb_full_adder__03a__03aenvironment::__VnoInFunc_run____Vfork_1__2(Vtb_full_adder__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03aenvironment::__VnoInFunc_run____Vfork_1__2\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__mon, "tb_full_adder.sv", 277)->__VnoInFunc_run(vlSymsp);
    __Vfork_1__sync.done("tb_full_adder.sv", 277);
    co_return;
}

VlCoroutine Vtb_full_adder_tb_full_adder__03a__03aenvironment::__VnoInFunc_run____Vfork_1__1(Vtb_full_adder__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03aenvironment::__VnoInFunc_run____Vfork_1__1\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__drv, "tb_full_adder.sv", 276)->__VnoInFunc_run(vlSymsp);
    __Vfork_1__sync.done("tb_full_adder.sv", 276);
    co_return;
}

VlCoroutine Vtb_full_adder_tb_full_adder__03a__03aenvironment::__VnoInFunc_run____Vfork_1__0(Vtb_full_adder__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03aenvironment::__VnoInFunc_run____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__gen, "tb_full_adder.sv", 275)->__VnoInFunc_run(vlSymsp);
    __Vfork_1__sync.done("tb_full_adder.sv", 275);
    co_return;
}

void Vtb_full_adder_tb_full_adder__03a__03aenvironment::_ctor_var_reset(Vtb_full_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03aenvironment::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}
