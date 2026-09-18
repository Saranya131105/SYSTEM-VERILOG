// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_counter.h for the primary calling header

#include "Vtb_counter__pch.h"

void Vtb_counter_tb_counter__03a__03ascoreboard::init(Vtb_counter__Syms* __restrict vlSymsp, VlClassRef<Vtb_counter_std__03a__03amailbox__Tz1> mon2scb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03ascoreboard::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__mon2scb = mon2scb;
    this->__PVT__pass_count = 0U;
    this->__PVT__fail_count = 0U;
    this->__PVT__expected_count = 0U;
}

VlCoroutine Vtb_counter_tb_counter__03a__03ascoreboard::__VnoInFunc_run(Vtb_counter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03ascoreboard::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    unnamedblk1_1__DOT____Vrepeat0 = 0x00000014U;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        co_await VL_NULL_CHECK(this->__PVT__mon2scb, "tb.sv", 203)->__VnoInFunc_get(vlSymsp, this->__PVT__tr);
        this->__PVT__expected_count = (VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 205)
                                       ->__PVT__reset
                                        ? 0U : (0x0000000fU 
                                                & ((IData)(1U) 
                                                   + (IData)(this->__PVT__expected_count))));
        if ((VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 210)
             ->__PVT__count == (IData)(this->__PVT__expected_count))) {
            VL_WRITEF_NX("[SCOREBOARD] PASS | Expected=%0d Actual=%0d\n",2
                         , '#',4,this->__PVT__expected_count
                         , '#',4,VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 213)
                         ->__PVT__count);
            this->__PVT__pass_count = ((IData)(1U) 
                                       + this->__PVT__pass_count);
        } else {
            VL_WRITEF_NX("[SCOREBOARD] FAIL | Expected=%0d Actual=%0d\n",2
                         , '#',4,this->__PVT__expected_count
                         , '#',4,VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 221)
                         ->__PVT__count);
            this->__PVT__fail_count = ((IData)(1U) 
                                       + this->__PVT__fail_count);
        }
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    co_return;
}

void Vtb_counter_tb_counter__03a__03ascoreboard::_ctor_var_reset(Vtb_counter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_counter_tb_counter__03a__03ascoreboard::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__pass_count = VL_SCOPED_RAND_RESET_I(32, 12132285535647128825ULL, 17489978223003880030ull);
    __PVT__fail_count = VL_SCOPED_RAND_RESET_I(32, 12132285535647128825ULL, 780742047261477168ull);
    __PVT__expected_count = 0;
}
