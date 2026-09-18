// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_nbit_adder.h for the primary calling header

#include "Vtb_nbit_adder__pch.h"

VL_ATTR_COLD void Vtb_nbit_adder_tb_nbit_adder___eval_initial__TOP__tb_nbit_adder(Vtb_nbit_adder_tb_nbit_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_nbit_adder_tb_nbit_adder___eval_initial__TOP__tb_nbit_adder\n"); );
    Vtb_nbit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("nbit_adder.vcd"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void Vtb_nbit_adder_tb_nbit_adder___ctor_var_reset(Vtb_nbit_adder_tb_nbit_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_nbit_adder_tb_nbit_adder___ctor_var_reset\n"); );
    Vtb_nbit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__A = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3969090544990846983ull);
    vlSelf->__PVT__B = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 149303876845869574ull);
    vlSelf->__PVT__Cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6656675172502615453ull);
}
