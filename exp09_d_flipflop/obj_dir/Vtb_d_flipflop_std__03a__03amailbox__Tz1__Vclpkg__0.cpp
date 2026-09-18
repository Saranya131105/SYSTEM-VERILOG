// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_d_flipflop.h for the primary calling header

#include "Vtb_d_flipflop__pch.h"

void Vtb_d_flipflop_std__03a__03amailbox__Tz1::init(Vtb_d_flipflop__Syms* __restrict vlSymsp, IData/*31:0*/ bound) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_d_flipflop_std__03a__03amailbox__Tz1::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_bound = bound;
}

void Vtb_d_flipflop_std__03a__03amailbox__Tz1::__VnoInFunc_num(Vtb_d_flipflop__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_d_flipflop_std__03a__03amailbox__Tz1::__VnoInFunc_num\n"); );
    // Body
    num__Vfuncrtn = this->__PVT__m_queue.size();
}

VlCoroutine Vtb_d_flipflop_std__03a__03amailbox__Tz1::__VnoInFunc_put(Vtb_d_flipflop__Syms* __restrict vlSymsp, VlClassRef<Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction> message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_d_flipflop_std__03a__03amailbox__Tz1::__VnoInFunc_put\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hab48f0c8__0;
    __Vtrigprevexpr_hab48f0c8__0 = 0;
    // Body
    VL_KEEP_THIS;
    while (((0U != this->__PVT__m_bound) & VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound))) {
        if (VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound)) {
            CData/*0:0*/ __VdynTrigger_hd9362d5e__0;
            __VdynTrigger_hd9362d5e__0 = 0;
            __VdynTrigger_hd9362d5e__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_hd9362d5e__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (std::mailbox__Tz1.m_queue.size() < std::mailbox__Tz1.m_bound))", 
                                                             "C:/msys64/ucrt64/share/verilator\\include\\verilated_std.sv", 
                                                             54);
                __Vtrigprevexpr_hab48f0c8__0 = VL_LTS_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound);
                __VdynTrigger_hd9362d5e__0 = __Vtrigprevexpr_hab48f0c8__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hd9362d5e__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (std::mailbox__Tz1.m_queue.size() < std::mailbox__Tz1.m_bound))", 
                                                         "C:/msys64/ucrt64/share/verilator\\include\\verilated_std.sv", 
                                                         54);
        }
    }
    this->__PVT__m_queue.push_back(message);
    co_return;
}

void Vtb_d_flipflop_std__03a__03amailbox__Tz1::__VnoInFunc_try_put(Vtb_d_flipflop__Syms* __restrict vlSymsp, VlClassRef<Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction> message, IData/*31:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_d_flipflop_std__03a__03amailbox__Tz1::__VnoInFunc_try_put\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__num;
    {
        try_put__Vfuncrtn = 0U;
        this->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
        if (((0U == this->__PVT__m_bound) | VL_LTS_III(32, __VlefCall_0__num, this->__PVT__m_bound))) {
            this->__PVT__m_queue.push_back(message);
            try_put__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        try_put__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

VlCoroutine Vtb_d_flipflop_std__03a__03amailbox__Tz1::__VnoInFunc_get(Vtb_d_flipflop__Syms* __restrict vlSymsp, VlClassRef<Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction> &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_d_flipflop_std__03a__03amailbox__Tz1::__VnoInFunc_get\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hb21a3989__0;
    __Vtrigprevexpr_hb21a3989__0 = 0;
    // Body
    VL_KEEP_THIS;
    while ((0U == this->__PVT__m_queue.size())) {
        if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
            CData/*0:0*/ __VdynTrigger_hd4647237__0;
            __VdynTrigger_hd4647237__0 = 0;
            __VdynTrigger_hd4647237__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_hd4647237__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                             "C:/msys64/ucrt64/share/verilator\\include\\verilated_std.sv", 
                                                             70);
                __Vtrigprevexpr_hb21a3989__0 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
                __VdynTrigger_hd4647237__0 = __Vtrigprevexpr_hb21a3989__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hd4647237__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                         "C:/msys64/ucrt64/share/verilator\\include\\verilated_std.sv", 
                                                         70);
        }
    }
    message = this->__PVT__m_queue.pop_front();
    co_return;
}

void Vtb_d_flipflop_std__03a__03amailbox__Tz1::__VnoInFunc_try_get(Vtb_d_flipflop__Syms* __restrict vlSymsp, VlClassRef<Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction> &message, IData/*31:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_d_flipflop_std__03a__03amailbox__Tz1::__VnoInFunc_try_get\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__num;
    {
        try_get__Vfuncrtn = 0U;
        this->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
        if (VL_LTS_III(32, 0U, __VlefCall_0__num)) {
            message = this->__PVT__m_queue.pop_front();
            try_get__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        try_get__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

VlCoroutine Vtb_d_flipflop_std__03a__03amailbox__Tz1::__VnoInFunc_peek(Vtb_d_flipflop__Syms* __restrict vlSymsp, VlClassRef<Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction> &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_d_flipflop_std__03a__03amailbox__Tz1::__VnoInFunc_peek\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hb21a3989__1;
    __Vtrigprevexpr_hb21a3989__1 = 0;
    // Body
    VL_KEEP_THIS;
    while ((0U == this->__PVT__m_queue.size())) {
        if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
            CData/*0:0*/ __VdynTrigger_hd4647237__1;
            __VdynTrigger_hd4647237__1 = 0;
            __VdynTrigger_hd4647237__1 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_hd4647237__1)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                             "C:/msys64/ucrt64/share/verilator\\include\\verilated_std.sv", 
                                                             87);
                __Vtrigprevexpr_hb21a3989__1 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
                __VdynTrigger_hd4647237__1 = __Vtrigprevexpr_hb21a3989__1;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hd4647237__1);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                         "C:/msys64/ucrt64/share/verilator\\include\\verilated_std.sv", 
                                                         87);
        }
    }
    message = this->__PVT__m_queue.at(0U);
    co_return;
}

void Vtb_d_flipflop_std__03a__03amailbox__Tz1::__VnoInFunc_try_peek(Vtb_d_flipflop__Syms* __restrict vlSymsp, VlClassRef<Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction> &message, IData/*31:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_d_flipflop_std__03a__03amailbox__Tz1::__VnoInFunc_try_peek\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__num;
    {
        try_peek__Vfuncrtn = 0U;
        this->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
        if (VL_LTS_III(32, 0U, __VlefCall_0__num)) {
            message = this->__PVT__m_queue.at(0U);
            try_peek__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        try_peek__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vtb_d_flipflop_std__03a__03amailbox__Tz1::_ctor_var_reset(Vtb_d_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_d_flipflop_std__03a__03amailbox__Tz1::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_bound = 0;
}
