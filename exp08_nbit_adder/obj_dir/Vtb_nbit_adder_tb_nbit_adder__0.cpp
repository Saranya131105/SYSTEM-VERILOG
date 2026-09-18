// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_nbit_adder.h for the primary calling header

#include "Vtb_nbit_adder__pch.h"

VlCoroutine Vtb_nbit_adder_tb_nbit_adder___eval_initial__TOP__tb_nbit_adder__Vtiming__0(Vtb_nbit_adder_tb_nbit_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_nbit_adder_tb_nbit_adder___eval_initial__TOP__tb_nbit_adder__Vtiming__0\n"); );
    Vtb_nbit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clk = 0U;
    while (true) {
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000001388ULL, 
                                                nullptr, 
                                                "tb.sv", 
                                                14);
        vlSelfRef.__PVT__clk = (1U & (~ (IData)(vlSelfRef.__PVT__clk)));
    }
    co_return;
}

VlCoroutine Vtb_nbit_adder_tb_nbit_adder___eval_initial__TOP__tb_nbit_adder__Vtiming__1(Vtb_nbit_adder_tb_nbit_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_nbit_adder_tb_nbit_adder___eval_initial__TOP__tb_nbit_adder__Vtiming__1\n"); );
    Vtb_nbit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vtb_nbit_adder_tb_nbit_adder__03a__03aenvironment> __PVT__env;
    // Body
    vlSelfRef.__PVT__A = 0U;
    vlSelfRef.__PVT__B = 0U;
    vlSelfRef.__PVT__Cin = 0U;
    VL_WRITEF_NX("\n======================================\n     N-BIT ADDER VERIFICATION\n     N = 4\n======================================\n\n",0);
    __PVT__env = VL_NEW(Vtb_nbit_adder_tb_nbit_adder__03a__03aenvironment, vlSymsp);
    co_await VL_NULL_CHECK(__PVT__env, "tb.sv", 306)->__VnoInFunc_run(vlSymsp);
    VL_WRITEF_NX("\n======================================\n          TEST SUMMARY\n======================================\nPASS = %0d\nFAIL = %0d\n",2
                 , '~',32,VL_NULL_CHECK(VL_NULL_CHECK(__PVT__env, "tb.sv", 313)
                                        ->__PVT__scb, "tb.sv", 313)
                 ->__PVT__pass_count, '~',32,VL_NULL_CHECK(VL_NULL_CHECK(__PVT__env, "tb.sv", 314)
                                                           ->__PVT__scb, "tb.sv", 314)
                 ->__PVT__fail_count);
    if ((0U == VL_NULL_CHECK(VL_NULL_CHECK(__PVT__env, "tb.sv", 316)
                             ->__PVT__scb, "tb.sv", 316)
         ->__PVT__fail_count)) {
        VL_WRITEF_NX("RESULT = ALL TESTS PASSED\n",0);
    } else {
        VL_WRITEF_NX("RESULT = SOME TESTS FAILED\n",0);
    }
    VL_WRITEF_NX("======================================\n",0);
    VL_FINISH_MT("tb.sv", 323, "");
    co_return;
}
