// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_nbit_adder.h for the primary calling header

#include "Vtb_nbit_adder__pch.h"

void Vtb_nbit_adder_tb_nbit_adder__03a__03ascoreboard::init(Vtb_nbit_adder__Syms* __restrict vlSymsp, VlClassRef<Vtb_nbit_adder_std__03a__03amailbox__Tz1> mon2scb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_nbit_adder_tb_nbit_adder__03a__03ascoreboard::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__mon2scb = mon2scb;
    this->__PVT__pass_count = 0U;
    this->__PVT__fail_count = 0U;
}

VlCoroutine Vtb_nbit_adder_tb_nbit_adder__03a__03ascoreboard::__VnoInFunc_run(Vtb_nbit_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_nbit_adder_tb_nbit_adder__03a__03ascoreboard::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    unnamedblk1_1__DOT____Vrepeat0 = 0x00000014U;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        co_await VL_NULL_CHECK(this->__PVT__mon2scb, "tb.sv", 211)->__VnoInFunc_get(vlSymsp, this->__PVT__tr);
        this->__PVT__expected = (0x0000001fU & ((VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 213)
                                                 ->__PVT__A 
                                                 + VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 213)
                                                 ->__PVT__B) 
                                                + VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 213)
                                                ->__PVT__Cin));
        if ((((VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 215)
               ->__PVT__Cout << 4U) | VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 215)
              ->__PVT__Sum) == (IData)(this->__PVT__expected))) {
            VL_WRITEF_NX("[SCOREBOARD] PASS | Expected=%0d Actual=%0d\n",2
                         , '#',5,this->__PVT__expected
                         , '#',5,((VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 220)
                                   ->__PVT__Cout << 4U) 
                                  | VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 220)
                                  ->__PVT__Sum));
            this->__PVT__pass_count = ((IData)(1U) 
                                       + this->__PVT__pass_count);
        } else {
            VL_WRITEF_NX("[SCOREBOARD] FAIL | Expected=%0d Actual=%0d\n",2
                         , '#',5,this->__PVT__expected
                         , '#',5,((VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 231)
                                   ->__PVT__Cout << 4U) 
                                  | VL_NULL_CHECK(this->__PVT__tr, "tb.sv", 231)
                                  ->__PVT__Sum));
            this->__PVT__fail_count = ((IData)(1U) 
                                       + this->__PVT__fail_count);
        }
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    co_return;
}

void Vtb_nbit_adder_tb_nbit_adder__03a__03ascoreboard::_ctor_var_reset(Vtb_nbit_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_nbit_adder_tb_nbit_adder__03a__03ascoreboard::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__pass_count = VL_SCOPED_RAND_RESET_I(32, 3167646187755127769ULL, 17489978223003880030ull);
    __PVT__fail_count = VL_SCOPED_RAND_RESET_I(32, 3167646187755127769ULL, 780742047261477168ull);
    __PVT__expected = 0;
}
