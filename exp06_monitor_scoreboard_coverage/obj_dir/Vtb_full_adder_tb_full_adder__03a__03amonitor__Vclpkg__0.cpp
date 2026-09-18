// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_full_adder.h for the primary calling header

#include "Vtb_full_adder__pch.h"

void Vtb_full_adder_tb_full_adder__03a__03amonitor::init(Vtb_full_adder__Syms* __restrict vlSymsp, VlClassRef<Vtb_full_adder_std__03a__03amailbox__Tz1> mon2scb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03amonitor::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__mon2scb = mon2scb;
}

VlCoroutine Vtb_full_adder_tb_full_adder__03a__03amonitor::__VnoInFunc_run(Vtb_full_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03amonitor::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    unnamedblk1_1__DOT____Vrepeat0 = 8U;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000003e8ULL, 
                                                nullptr, 
                                                "tb_full_adder.sv", 
                                                141);
        vlSymsp->TOP.__Vm_traceActivity[3U] = 1U;
        this->__PVT__tr = VL_NEW(Vtb_full_adder_tb_full_adder__03a__03atransaction, vlSymsp);
        VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 145)->__PVT__a 
            = vlSymsp->TOP__tb_full_adder.__PVT__a;
        VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 146)->__PVT__b 
            = vlSymsp->TOP__tb_full_adder.__PVT__b;
        VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 147)->__PVT__cin 
            = vlSymsp->TOP__tb_full_adder.__PVT__cin;
        VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 149)->__PVT__sum 
            = ((IData)(vlSymsp->TOP__tb_full_adder.__PVT__a) 
               ^ ((IData)(vlSymsp->TOP__tb_full_adder.__PVT__b) 
                  ^ (IData)(vlSymsp->TOP__tb_full_adder.__PVT__cin)));
        VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 150)->__PVT__cout 
            = (((IData)(vlSymsp->TOP__tb_full_adder.__PVT__a) 
                & (IData)(vlSymsp->TOP__tb_full_adder.__PVT__b)) 
               | ((IData)(vlSymsp->TOP__tb_full_adder.__PVT__cin) 
                  & ((IData)(vlSymsp->TOP__tb_full_adder.__PVT__a) 
                     | (IData)(vlSymsp->TOP__tb_full_adder.__PVT__b))));
        vlSymsp->TOP__tb_full_adder.__PVT__coverage[(7U 
                                                     & (((VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 153)
                                                          ->__PVT__a 
                                                          << 2U) 
                                                         + 
                                                         (VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 153)
                                                          ->__PVT__b 
                                                          << 1U)) 
                                                        + VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 153)
                                                        ->__PVT__cin))] = 1U;
        VL_WRITEF_NX("[MONITOR] A=%0d B=%0d Cin=%0d | Sum=%0d Cout=%0d\n",5
                     , '#',1,VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 156)
                     ->__PVT__a, '#',1,VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 157)
                     ->__PVT__b, '#',1,VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 158)
                     ->__PVT__cin, '#',1,VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 159)
                     ->__PVT__sum, '#',1,VL_NULL_CHECK(this->__PVT__tr, "tb_full_adder.sv", 160)
                     ->__PVT__cout);
        co_await VL_NULL_CHECK(this->__PVT__mon2scb, "tb_full_adder.sv", 162)->__VnoInFunc_put(vlSymsp, this->__PVT__tr);
        vlSymsp->TOP.__Vm_traceActivity[3U] = 1U;
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000002328ULL, 
                                                nullptr, 
                                                "tb_full_adder.sv", 
                                                164);
        vlSymsp->TOP.__Vm_traceActivity[3U] = 1U;
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    vlSymsp->TOP.__Vm_traceActivity[3U] = 1U;
    co_return;
}

void Vtb_full_adder_tb_full_adder__03a__03amonitor::_ctor_var_reset(Vtb_full_adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_full_adder_tb_full_adder__03a__03amonitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}
