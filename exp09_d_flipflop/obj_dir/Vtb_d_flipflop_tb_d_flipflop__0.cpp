// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_d_flipflop.h for the primary calling header

#include "Vtb_d_flipflop__pch.h"

VlCoroutine Vtb_d_flipflop_tb_d_flipflop___eval_initial__TOP__tb_d_flipflop__Vtiming__0(Vtb_d_flipflop_tb_d_flipflop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_d_flipflop_tb_d_flipflop___eval_initial__TOP__tb_d_flipflop__Vtiming__0\n"); );
    Vtb_d_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clk = 0U;
    while (true) {
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000001388ULL, 
                                                nullptr, 
                                                "tb.sv", 
                                                9);
        vlSelfRef.__PVT__clk = (1U & (~ (IData)(vlSelfRef.__PVT__clk)));
    }
    co_return;
}

VlCoroutine Vtb_d_flipflop_tb_d_flipflop___eval_initial__TOP__tb_d_flipflop__Vtiming__1(Vtb_d_flipflop_tb_d_flipflop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_d_flipflop_tb_d_flipflop___eval_initial__TOP__tb_d_flipflop__Vtiming__1\n"); );
    Vtb_d_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment> __PVT__env;
    // Body
    vlSelfRef.__PVT__reset = 1U;
    vlSelfRef.__PVT__d = 0U;
    VL_WRITEF_NX("\n====================================\n     D FLIP-FLOP VERIFICATION\n====================================\n\n",0);
    __PVT__env = VL_NEW(Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment, vlSymsp);
    co_await VL_NULL_CHECK(__PVT__env, "tb.sv", 276)->__VnoInFunc_run(vlSymsp);
    VL_WRITEF_NX("\n====================================\n          TEST SUMMARY\n====================================\nPASS = %0d\nFAIL = %0d\n",2
                 , '~',32,VL_NULL_CHECK(VL_NULL_CHECK(__PVT__env, "tb.sv", 283)
                                        ->__PVT__scb, "tb.sv", 283)
                 ->__PVT__pass_count, '~',32,VL_NULL_CHECK(VL_NULL_CHECK(__PVT__env, "tb.sv", 284)
                                                           ->__PVT__scb, "tb.sv", 284)
                 ->__PVT__fail_count);
    if ((0U == VL_NULL_CHECK(VL_NULL_CHECK(__PVT__env, "tb.sv", 286)
                             ->__PVT__scb, "tb.sv", 286)
         ->__PVT__fail_count)) {
        VL_WRITEF_NX("RESULT = ALL TESTS PASSED\n",0);
    } else {
        VL_WRITEF_NX("RESULT = SOME TESTS FAILED\n",0);
    }
    VL_WRITEF_NX("\n",0);
    VL_FINISH_MT("tb.sv", 293, "");
    co_return;
}

void Vtb_d_flipflop_tb_d_flipflop___nba_sequent__TOP__tb_d_flipflop__0(Vtb_d_flipflop_tb_d_flipflop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_d_flipflop_tb_d_flipflop___nba_sequent__TOP__tb_d_flipflop__0\n"); );
    Vtb_d_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__q = ((~ (IData)(vlSelfRef.__PVT__reset)) 
                          & (IData)(vlSelfRef.__PVT__d));
}
