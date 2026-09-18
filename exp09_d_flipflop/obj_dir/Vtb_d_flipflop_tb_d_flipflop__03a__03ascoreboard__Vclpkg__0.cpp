// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_d_flipflop.h for the primary calling header

#include "Vtb_d_flipflop__pch.h"

void Vtb_d_flipflop_tb_d_flipflop__03a__03ascoreboard::init(Vtb_d_flipflop__Syms* __restrict vlSymsp, VlClassRef<Vtb_d_flipflop_std__03a__03amailbox__Tz1> mon2scb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03ascoreboard::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__mon2scb = mon2scb;
    this->__PVT__pass_count = 0U;
    this->__PVT__fail_count = 0U;
    this->__PVT__expected_q = 0U;
}

VlCoroutine Vtb_d_flipflop_tb_d_flipflop__03a__03ascoreboard::__VnoInFunc_run(Vtb_d_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03ascoreboard::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    unnamedblk1_1__DOT____Vrepeat0 = 0x00000014U;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        co_await VL_NULL_CHECK(this->__PVT__mon2scb, "tb.sv", 188)->__VnoInFunc_get(vlSymsp, this->__PVT__tr);
        this->__PVT__expected_q = ((1U & (~ VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 190)
                                          ->__PVT__reset)) 
                                   && VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 193)
                                   ->__PVT__d);
        if ((VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 195)
             ->__PVT__q == (IData)(this->__PVT__expected_q))) {
            VL_WRITEF_NX("[SCOREBOARD] PASS\n",0);
            this->__PVT__pass_count = ((IData)(1U) 
                                       + this->__PVT__pass_count);
        } else {
            VL_WRITEF_NX("[SCOREBOARD] FAIL | Expected=%0d Actual=%0d\n",2
                         , '#',1,this->__PVT__expected_q
                         , '#',1,VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 205)
                         ->__PVT__q);
            this->__PVT__fail_count = ((IData)(1U) 
                                       + this->__PVT__fail_count);
        }
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    co_return;
}

void Vtb_d_flipflop_tb_d_flipflop__03a__03ascoreboard::_ctor_var_reset(Vtb_d_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_d_flipflop_tb_d_flipflop__03a__03ascoreboard::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__pass_count = VL_SCOPED_RAND_RESET_I(32, 4930077373527317814ULL, 17489978223003880030ull);
    __PVT__fail_count = VL_SCOPED_RAND_RESET_I(32, 4930077373527317814ULL, 780742047261477168ull);
    __PVT__expected_q = 0;
}
