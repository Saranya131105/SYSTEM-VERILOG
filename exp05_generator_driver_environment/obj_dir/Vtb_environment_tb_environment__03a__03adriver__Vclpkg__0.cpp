// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_environment.h for the primary calling header

#include "Vtb_environment__pch.h"

void Vtb_environment_tb_environment__03a__03adriver::init(Vtb_environment__Syms* __restrict vlSymsp, VlClassRef<Vtb_environment_std__03a__03amailbox__Tz1> gen2drv, Vtb_environment_half_adder_if* vif) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_environment_tb_environment__03a__03adriver::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__gen2drv = gen2drv;
    this->__PVT__vif = vif;
}

VlCoroutine Vtb_environment_tb_environment__03a__03adriver::__VnoInFunc_run(Vtb_environment__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_environment_tb_environment__03a__03adriver::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    unnamedblk1_1__DOT____Vrepeat0 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        co_await VL_NULL_CHECK(this->__PVT__gen2drv, "tb_environment.sv", 84)->__VnoInFunc_get(vlSymsp, this->__PVT__tr);
        VL_NULL_CHECK(this->__PVT__vif, "tb_environment.sv", 86)->__PVT__a 
            = VL_NULL_CHECK(this->__PVT__tr, "tb_environment.sv", 86)
            ->__PVT__a;
        VL_NULL_CHECK(this->__PVT__vif, "tb_environment.sv", 87)->__PVT__b 
            = VL_NULL_CHECK(this->__PVT__tr, "tb_environment.sv", 87)
            ->__PVT__b;
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000003e8ULL, 
                                                nullptr, 
                                                "tb_environment.sv", 
                                                89);
        VL_WRITEF_NX("[DRIVER] A=%0d B=%0d | SUM=%0d CARRY=%0d\n",4
                     , '#',1,VL_NULL_CHECK(this->__PVT__vif, "tb_environment.sv", 93)
                     ->__PVT__a, '#',1,VL_NULL_CHECK(this->__PVT__vif, "tb_environment.sv", 93)
                     ->__PVT__b, '#',1,VL_NULL_CHECK(this->__PVT__vif, "tb_environment.sv", 93)
                     ->__PVT__sum, '#',1,VL_NULL_CHECK(this->__PVT__vif, "tb_environment.sv", 93)
                     ->__PVT__carry);
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    co_return;
}

void Vtb_environment_tb_environment__03a__03adriver::_ctor_var_reset(Vtb_environment__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_environment_tb_environment__03a__03adriver::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
}
