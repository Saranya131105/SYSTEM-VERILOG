// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_full_adder.h for the primary calling header

#include "Vtb_full_adder__pch.h"

void Vtb_full_adder_tb_full_adder__03a__03ascoreboard::init(Vtb_full_adder__Syms* __restrict vlSymsp, VlClassRef<Vtb_full_adder_std__03a__03amailbox__Tz1> mon2scb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03ascoreboard::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__mon2scb = mon2scb;
    this->__PVT__pass_count = 0U;
    this->__PVT__fail_count = 0U;
}

VlCoroutine Vtb_full_adder_tb_full_adder__03a__03ascoreboard::__VnoInFunc_run(Vtb_full_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03ascoreboard::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    unnamedblk1_1__DOT____Vrepeat0 = 8U;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        co_await VL_NULL_CHECK(this->__PVT__mon2scb, "tb_full_adder.sv", 201)->__VnoInFunc_get(vlSymsp, this->__PVT__tr);
        this->__PVT__expected_sum = ((VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 204)
                                      ->__PVT__a ^ VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 204)
                                      ->__PVT__b) ^ VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 204)
                                     ->__PVT__cin);
        this->__PVT__expected_cout = (((VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 206)
                                        ->__PVT__a 
                                        & VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 206)
                                        ->__PVT__b) 
                                       | (VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 207)
                                          ->__PVT__b 
                                          & VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 207)
                                          ->__PVT__cin)) 
                                      | (VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 208)
                                         ->__PVT__a 
                                         & VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 208)
                                         ->__PVT__cin));
        if (((VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 211)
              ->__PVT__sum == (IData)(this->__PVT__expected_sum)) 
             && (VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 212)
                 ->__PVT__cout == (IData)(this->__PVT__expected_cout)))) {
            this->__PVT__pass_count = ((IData)(1U) 
                                       + this->__PVT__pass_count);
            VL_WRITEF_NX("[SCOREBOARD] PASS | A=%0d B=%0d Cin=%0d | Expected Sum=%0d Cout=%0d | Actual Sum=%0d Cout=%0d\n",7
                         , '#',1,VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 217)
                         ->__PVT__a, '#',1,VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 218)
                         ->__PVT__b, '#',1,VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 219)
                         ->__PVT__cin, '#',1,(IData)(this->__PVT__expected_sum)
                         , '#',1,this->__PVT__expected_cout
                         , '#',1,VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 222)
                         ->__PVT__sum, '#',1,VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 223)
                         ->__PVT__cout);
        } else {
            this->__PVT__fail_count = ((IData)(1U) 
                                       + this->__PVT__fail_count);
            VL_WRITEF_NX("[SCOREBOARD] FAIL | A=%0d B=%0d Cin=%0d | Expected Sum=%0d Cout=%0d | Actual Sum=%0d Cout=%0d\n",7
                         , '#',1,VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 231)
                         ->__PVT__a, '#',1,VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 232)
                         ->__PVT__b, '#',1,VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 233)
                         ->__PVT__cin, '#',1,(IData)(this->__PVT__expected_sum)
                         , '#',1,this->__PVT__expected_cout
                         , '#',1,VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 236)
                         ->__PVT__sum, '#',1,VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 237)
                         ->__PVT__cout);
        }
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    co_return;
}

void Vtb_full_adder_tb_full_adder__03a__03ascoreboard::_ctor_var_reset(Vtb_full_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03ascoreboard::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__pass_count = VL_SCOPED_RAND_RESET_I(32, 14495657909334241514ULL, 17489978223003880030ull);
    __PVT__fail_count = VL_SCOPED_RAND_RESET_I(32, 14495657909334241514ULL, 780742047261477168ull);
    __PVT__expected_sum = 0;
    __PVT__expected_cout = 0;
}
