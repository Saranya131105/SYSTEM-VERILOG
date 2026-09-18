// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_counter.h for the primary calling header

#include "Vtb_counter__pch.h"

void Vtb_counter_tb_counter__03a__03aenvironment::init(Vtb_counter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03aenvironment::new\n"); );
    // Locals
    VlClassRef<Vtb_counter_std__03a__03amailbox__Tz1> TOP__tb_counter__DOT____PVT__gen2drv;
    VlClassRef<Vtb_counter_std__03a__03amailbox__Tz1> TOP__tb_counter__DOT____PVT__mon2scb;
    // Body
    _ctor_var_reset(vlSymsp);
    TOP__tb_counter__DOT____PVT__gen2drv = VL_NEW(Vtb_counter_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    TOP__tb_counter__DOT____PVT__mon2scb = VL_NEW(Vtb_counter_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    this->__PVT__gen = VL_NEW(Vtb_counter_tb_counter__03a__03agenerator, vlSymsp, TOP__tb_counter__DOT____PVT__gen2drv);
    this->__PVT__drv = VL_NEW(Vtb_counter_tb_counter__03a__03adriver, vlSymsp, TOP__tb_counter__DOT____PVT__gen2drv);
    this->__PVT__mon = VL_NEW(Vtb_counter_tb_counter__03a__03amonitor, vlSymsp, TOP__tb_counter__DOT____PVT__mon2scb);
    this->__PVT__scb = VL_NEW(Vtb_counter_tb_counter__03a__03ascoreboard, vlSymsp, TOP__tb_counter__DOT____PVT__mon2scb);
}

VlCoroutine Vtb_counter_tb_counter__03a__03aenvironment::__VnoInFunc_run(Vtb_counter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03aenvironment::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    {
        VlForkSync __Vfork_1__sync;
        __Vfork_1__sync.init(4U, nullptr);
        this->__VnoInFunc_run____Vfork_1__0(vlSymsp, __Vfork_1__sync);
        this->__VnoInFunc_run____Vfork_1__1(vlSymsp, __Vfork_1__sync);
        this->__VnoInFunc_run____Vfork_1__2(vlSymsp, __Vfork_1__sync);
        this->__VnoInFunc_run____Vfork_1__3(vlSymsp, __Vfork_1__sync);
        co_await __Vfork_1__sync.join(nullptr, "tb.sv", 
                                      260);
    }
    co_return;
}

VlCoroutine Vtb_counter_tb_counter__03a__03aenvironment::__VnoInFunc_run____Vfork_1__3(Vtb_counter__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03aenvironment::__VnoInFunc_run____Vfork_1__3\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__scb, "tb.sv", 265)->__VnoInFunc_run(vlSymsp);
    __Vfork_1__sync.done("tb.sv", 265);
    co_return;
}

VlCoroutine Vtb_counter_tb_counter__03a__03aenvironment::__VnoInFunc_run____Vfork_1__2(Vtb_counter__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03aenvironment::__VnoInFunc_run____Vfork_1__2\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__mon, "tb.sv", 264)->__VnoInFunc_run(vlSymsp);
    __Vfork_1__sync.done("tb.sv", 264);
    co_return;
}

VlCoroutine Vtb_counter_tb_counter__03a__03aenvironment::__VnoInFunc_run____Vfork_1__1(Vtb_counter__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03aenvironment::__VnoInFunc_run____Vfork_1__1\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__drv, "tb.sv", 263)->__VnoInFunc_run(vlSymsp);
    __Vfork_1__sync.done("tb.sv", 263);
    co_return;
}

VlCoroutine Vtb_counter_tb_counter__03a__03aenvironment::__VnoInFunc_run____Vfork_1__0(Vtb_counter__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03aenvironment::__VnoInFunc_run____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__gen, "tb.sv", 262)->__VnoInFunc_run(vlSymsp);
    __Vfork_1__sync.done("tb.sv", 262);
    co_return;
}

void Vtb_counter_tb_counter__03a__03aenvironment::_ctor_var_reset(Vtb_counter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03aenvironment::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}
