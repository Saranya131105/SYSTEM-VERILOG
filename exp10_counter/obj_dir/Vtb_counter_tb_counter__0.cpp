// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_counter.h for the primary calling header

#include "Vtb_counter__pch.h"

VlCoroutine Vtb_counter_tb_counter___eval_initial__TOP__tb_counter__Vtiming__0(Vtb_counter_tb_counter* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_counter_tb_counter___eval_initial__TOP__tb_counter__Vtiming__0\n"); );
    Vtb_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clk = 0U;
    while (true) {
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000001388ULL, 
                                                nullptr, 
                                                "tb.sv", 
                                                18);
        vlSelfRef.__PVT__clk = (1U & (~ (IData)(vlSelfRef.__PVT__clk)));
    }
    co_return;
}

VlCoroutine Vtb_counter_tb_counter___eval_initial__TOP__tb_counter__Vtiming__1(Vtb_counter_tb_counter* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_counter_tb_counter___eval_initial__TOP__tb_counter__Vtiming__1\n"); );
    Vtb_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vtb_counter_tb_counter__03a__03aenvironment> __PVT__env;
    // Body
    vlSelfRef.__PVT__reset = 1U;
    VL_WRITEF_NX("\n====================================\n     4-BIT COUNTER VERIFICATION\n====================================\n\n",0);
    __PVT__env = VL_NEW(Vtb_counter_tb_counter__03a__03aenvironment, vlSymsp);
    co_await VL_NULL_CHECK(__PVT__env, "tb.sv", 292)->__VnoInFunc_run(vlSymsp);
    VL_WRITEF_NX("\n====================================\n          TEST SUMMARY\n====================================\nPASS = %0d\nFAIL = %0d\n",2
                 , '~',32,VL_NULL_CHECK(VL_NULL_CHECK(__PVT__env, "tb.sv", 299)
                                        ->__PVT__scb, "tb.sv", 299)
                 ->__PVT__pass_count, '~',32,VL_NULL_CHECK(VL_NULL_CHECK(__PVT__env, "tb.sv", 300)
                                                           ->__PVT__scb, "tb.sv", 300)
                 ->__PVT__fail_count);
    if ((0U == VL_NULL_CHECK(VL_NULL_CHECK(__PVT__env, "tb.sv", 302)
                             ->__PVT__scb, "tb.sv", 302)
         ->__PVT__fail_count)) {
        VL_WRITEF_NX("RESULT = ALL TESTS PASSED\n",0);
    } else {
        VL_WRITEF_NX("RESULT = SOME TESTS FAILED\n",0);
    }
    VL_WRITEF_NX("\n",0);
    VL_FINISH_MT("tb.sv", 309, "");
    co_return;
}

void Vtb_counter_tb_counter___nba_sequent__TOP__tb_counter__0(Vtb_counter_tb_counter* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_counter_tb_counter___nba_sequent__TOP__tb_counter__0\n"); );
    Vtb_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__count = ((IData)(vlSelfRef.__PVT__reset)
                               ? 0U : (0x0000000fU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__count))));
}
