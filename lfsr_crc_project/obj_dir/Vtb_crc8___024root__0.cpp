// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_crc8.h for the primary calling header

#include "Vtb_crc8__pch.h"

VlCoroutine Vtb_crc8___024root___eval_initial__TOP__Vtiming__0(Vtb_crc8___024root* vlSelf);
VlCoroutine Vtb_crc8___024root___eval_initial__TOP__Vtiming__1(Vtb_crc8___024root* vlSelf);

void Vtb_crc8___024root___eval_initial(Vtb_crc8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_crc8___024root___eval_initial\n"); );
    Vtb_crc8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSymsp->_vm_contextp__->dumpfile("crc8_waveform.vcd"s);
        vlSymsp->_traceDumpOpen();
    }
    Vtb_crc8___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_crc8___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_crc8___024root___eval_initial__TOP__Vtiming__0(Vtb_crc8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_crc8___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_crc8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_crc8__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb_crc8.sv", 
                                             36);
        vlSelfRef.tb_crc8__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_crc8__DOT__clk)));
    }
    co_return;
}

void Vtb_crc8___024root____VbeforeTrig_h15c8cebb__0(Vtb_crc8___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_crc8___024root___eval_initial__TOP__Vtiming__1(Vtb_crc8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_crc8___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_crc8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_crc8__DOT__rst = 1U;
    vlSelfRef.tb_crc8__DOT__start = 0U;
    vlSelfRef.tb_crc8__DOT__data_in = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "tb_crc8.sv", 
                                         65);
    vlSelfRef.tb_crc8__DOT__rst = 0U;
    vlSelfRef.tb_crc8__DOT__data_in = 0xa5U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb_crc8.sv", 
                                         76);
    vlSelfRef.tb_crc8__DOT__start = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb_crc8.sv", 
                                         80);
    vlSelfRef.tb_crc8__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_crc8__DOT__done)))) {
        Vtb_crc8___024root____VbeforeTrig_h15c8cebb__0(vlSelf, 
                                                       "@( tb_crc8.done)");
        co_await vlSelfRef.__VtrigSched_h15c8cebb__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_crc8.done)", 
                                                             "tb_crc8.sv", 
                                                             84);
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb_crc8.sv", 
                                         86);
    VL_WRITEF_NX("-----------------------------------------------\nTEST 1\nInput Data : %h\nCRC Output : %h\nDONE       : %b\n-----------------------------------------------\n",3
                 , '#',8,vlSelfRef.tb_crc8__DOT__data_in
                 , '#',8,(IData)(vlSelfRef.tb_crc8__DOT__crc_out)
                 , '#',1,vlSelfRef.tb_crc8__DOT__done);
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "tb_crc8.sv", 
                                         100);
    vlSelfRef.tb_crc8__DOT__data_in = 0x3cU;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb_crc8.sv", 
                                         104);
    vlSelfRef.tb_crc8__DOT__start = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb_crc8.sv", 
                                         108);
    vlSelfRef.tb_crc8__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_crc8__DOT__done)))) {
        Vtb_crc8___024root____VbeforeTrig_h15c8cebb__0(vlSelf, 
                                                       "@( tb_crc8.done)");
        co_await vlSelfRef.__VtrigSched_h15c8cebb__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_crc8.done)", 
                                                             "tb_crc8.sv", 
                                                             112);
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb_crc8.sv", 
                                         114);
    VL_WRITEF_NX("-----------------------------------------------\nTEST 2\nInput Data : %h\nCRC Output : %h\nDONE       : %b\n-----------------------------------------------\n",3
                 , '#',8,vlSelfRef.tb_crc8__DOT__data_in
                 , '#',8,(IData)(vlSelfRef.tb_crc8__DOT__crc_out)
                 , '#',1,vlSelfRef.tb_crc8__DOT__done);
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "tb_crc8.sv", 
                                         124);
    VL_WRITEF_NX("Simulation completed.\n",0);
    VL_FINISH_MT("tb_crc8.sv", 128, "");
    co_return;
}

bool Vtb_crc8___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_crc8___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_crc8___024root___timing_ready(Vtb_crc8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_crc8___024root___timing_ready\n"); );
    Vtb_crc8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h15c8cebb__0.ready("@( tb_crc8.done)");
    }
}

void Vtb_crc8___024root___timing_resume(Vtb_crc8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_crc8___024root___timing_resume\n"); );
    Vtb_crc8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h15c8cebb__0.moveToResumeQueue(
                                                          "@( tb_crc8.done)");
    vlSelfRef.__VtrigSched_h15c8cebb__0.resume("@( tb_crc8.done)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_crc8___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_crc8___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_crc8___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_crc8___024root___eval_phase__act(Vtb_crc8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_crc8___024root___eval_phase__act\n"); );
    Vtb_crc8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (((((IData)(vlSelfRef.tb_crc8__DOT__done) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_crc8__DOT__done__0)) 
                                                           << 3U) 
                                                          | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                             << 2U)) 
                                                         | ((((IData)(vlSelfRef.tb_crc8__DOT__rst) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_crc8__DOT__rst__0))) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_crc8__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_crc8__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_crc8__DOT__clk__0 
            = vlSelfRef.tb_crc8__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_crc8__DOT__rst__0 
            = vlSelfRef.tb_crc8__DOT__rst;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_crc8__DOT__done__0 
            = vlSelfRef.tb_crc8__DOT__done;
    }
    Vtb_crc8___024root___timing_ready(vlSelf);
    Vtb_crc8___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_crc8___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_crc8___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_crc8___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_crc8___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_act
            if ((0x000000000000000cULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.tb_crc8__DOT__DUT__DOT__feedback 
                        = (1U & (((IData)(vlSelfRef.tb_crc8__DOT__DUT__DOT__crc_reg) 
                                  >> 7U) ^ ((IData)(vlSelfRef.tb_crc8__DOT__data_in) 
                                            >> (7U 
                                                & ((IData)(7U) 
                                                   - (IData)(vlSelfRef.tb_crc8__DOT__DUT__DOT__bit_count))))));
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_crc8___024root___eval_phase__inact(Vtb_crc8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_crc8___024root___eval_phase__inact\n"); );
    Vtb_crc8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_crc8.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_crc8___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_crc8___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_crc8___024root___eval_phase__nba(Vtb_crc8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_crc8___024root___eval_phase__nba\n"); );
    Vtb_crc8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_crc8___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    CData/*7:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_crc8__DOT__DUT__DOT__crc_reg;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_crc8__DOT__DUT__DOT__crc_reg = 0;
                    CData/*2:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_crc8__DOT__DUT__DOT__bit_count;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_crc8__DOT__DUT__DOT__bit_count = 0;
                    CData/*0:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_crc8__DOT__DUT__DOT__busy;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_crc8__DOT__DUT__DOT__busy = 0;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_crc8__DOT__DUT__DOT__busy 
                        = vlSelfRef.tb_crc8__DOT__DUT__DOT__busy;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_crc8__DOT__DUT__DOT__crc_reg 
                        = vlSelfRef.tb_crc8__DOT__DUT__DOT__crc_reg;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_crc8__DOT__DUT__DOT__bit_count 
                        = vlSelfRef.tb_crc8__DOT__DUT__DOT__bit_count;
                    if (vlSelfRef.tb_crc8__DOT__rst) {
                        __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_crc8__DOT__DUT__DOT__crc_reg = 0U;
                        vlSelfRef.tb_crc8__DOT__crc_out = 0U;
                        __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_crc8__DOT__DUT__DOT__bit_count = 0U;
                        __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_crc8__DOT__DUT__DOT__busy = 0U;
                        vlSelfRef.tb_crc8__DOT__done = 0U;
                    } else {
                        vlSelfRef.tb_crc8__DOT__done = 0U;
                        if (((IData)(vlSelfRef.tb_crc8__DOT__start) 
                             & (~ (IData)(vlSelfRef.tb_crc8__DOT__DUT__DOT__busy)))) {
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_crc8__DOT__DUT__DOT__crc_reg = 0U;
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_crc8__DOT__DUT__DOT__bit_count = 0U;
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_crc8__DOT__DUT__DOT__busy = 1U;
                        } else if (vlSelfRef.tb_crc8__DOT__DUT__DOT__busy) {
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_crc8__DOT__DUT__DOT__crc_reg 
                                = ((IData)(vlSelfRef.tb_crc8__DOT__DUT__DOT__feedback)
                                    ? (7U ^ (0x000000feU 
                                             & ((IData)(vlSelfRef.tb_crc8__DOT__DUT__DOT__crc_reg) 
                                                << 1U)))
                                    : (0x000000feU 
                                       & ((IData)(vlSelfRef.tb_crc8__DOT__DUT__DOT__crc_reg) 
                                          << 1U)));
                            if ((7U == (IData)(vlSelfRef.tb_crc8__DOT__DUT__DOT__bit_count))) {
                                vlSelfRef.tb_crc8__DOT__crc_out 
                                    = ((IData)(vlSelfRef.tb_crc8__DOT__DUT__DOT__feedback)
                                        ? (7U ^ (0x000000feU 
                                                 & ((IData)(vlSelfRef.tb_crc8__DOT__DUT__DOT__crc_reg) 
                                                    << 1U)))
                                        : (0x000000feU 
                                           & ((IData)(vlSelfRef.tb_crc8__DOT__DUT__DOT__crc_reg) 
                                              << 1U)));
                                vlSelfRef.tb_crc8__DOT__done = 1U;
                                __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_crc8__DOT__DUT__DOT__busy = 0U;
                            } else {
                                __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_crc8__DOT__DUT__DOT__bit_count 
                                    = (7U & ((IData)(1U) 
                                             + (IData)(vlSelfRef.tb_crc8__DOT__DUT__DOT__bit_count)));
                            }
                        }
                    }
                    vlSelfRef.tb_crc8__DOT__DUT__DOT__busy 
                        = __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_crc8__DOT__DUT__DOT__busy;
                    vlSelfRef.tb_crc8__DOT__DUT__DOT__crc_reg 
                        = __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_crc8__DOT__DUT__DOT__crc_reg;
                    vlSelfRef.tb_crc8__DOT__DUT__DOT__bit_count 
                        = __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_crc8__DOT__DUT__DOT__bit_count;
                }
                vlSelfRef.__Vm_traceActivity[1U] = 1U;
            }
            if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.tb_crc8__DOT__DUT__DOT__feedback 
                        = (1U & (((IData)(vlSelfRef.tb_crc8__DOT__DUT__DOT__crc_reg) 
                                  >> 7U) ^ ((IData)(vlSelfRef.tb_crc8__DOT__data_in) 
                                            >> (7U 
                                                & ((IData)(7U) 
                                                   - (IData)(vlSelfRef.tb_crc8__DOT__DUT__DOT__bit_count))))));
                }
            }
        }
        Vtb_crc8___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_crc8___024root___eval(Vtb_crc8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_crc8___024root___eval\n"); );
    Vtb_crc8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_crc8___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb_crc8.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb_crc8.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_crc8___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb_crc8.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_crc8___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_crc8___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_crc8___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_crc8___024root____VbeforeTrig_h15c8cebb__0(Vtb_crc8___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_crc8___024root____VbeforeTrig_h15c8cebb__0\n"); );
    Vtb_crc8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_crc8__DOT__done) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_crc8__DOT__done__0)) 
                                  << 3U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_crc8__DOT__done__0 
        = vlSelfRef.tb_crc8__DOT__done;
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h15c8cebb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h15c8cebb__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_crc8___024root___eval_debug_assertions(Vtb_crc8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_crc8___024root___eval_debug_assertions\n"); );
    Vtb_crc8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
