// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_crc8.h for the primary calling header

#include "Vtb_crc8__pch.h"

void Vtb_crc8___024root___timing_ready(Vtb_crc8___024root* vlSelf);

VL_ATTR_COLD void Vtb_crc8___024root___eval_static(Vtb_crc8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_crc8___024root___eval_static\n"); );
    Vtb_crc8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_crc8__DOT__clk__0 
        = vlSelfRef.tb_crc8__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_crc8__DOT__rst__0 
        = vlSelfRef.tb_crc8__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_crc8__DOT__done__0 
        = vlSelfRef.tb_crc8__DOT__done;
    Vtb_crc8___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_crc8___024root___eval_final(Vtb_crc8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_crc8___024root___eval_final\n"); );
    Vtb_crc8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_crc8___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_crc8___024root___eval_phase__stl(Vtb_crc8___024root* vlSelf);

VL_ATTR_COLD void Vtb_crc8___024root___eval_settle(Vtb_crc8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_crc8___024root___eval_settle\n"); );
    Vtb_crc8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_crc8___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb_crc8.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_crc8___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_crc8___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_crc8___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_crc8___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_crc8___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_crc8___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_crc8___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD bool Vtb_crc8___024root___eval_phase__stl(Vtb_crc8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_crc8___024root___eval_phase__stl\n"); );
    Vtb_crc8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_crc8___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_crc8___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
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
    return (__VstlExecute);
}

bool Vtb_crc8___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_crc8___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_crc8___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_crc8___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_crc8.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge tb_crc8.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( tb_crc8.done)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_crc8___024root___ctor_var_reset(Vtb_crc8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_crc8___024root___ctor_var_reset\n"); );
    Vtb_crc8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_crc8__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13391223162728562766ull);
    vlSelf->tb_crc8__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8816604208980491034ull);
    vlSelf->tb_crc8__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11903086188853393266ull);
    vlSelf->tb_crc8__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3829635945546893581ull);
    vlSelf->tb_crc8__DOT__crc_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7010804494184997766ull);
    vlSelf->tb_crc8__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6565551118024649797ull);
    vlSelf->tb_crc8__DOT__DUT__DOT__crc_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10147937657399625231ull);
    vlSelf->tb_crc8__DOT__DUT__DOT__bit_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7693378354926664019ull);
    vlSelf->tb_crc8__DOT__DUT__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2184027092828121927ull);
    vlSelf->tb_crc8__DOT__DUT__DOT__feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8482753080850184770ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_crc8__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_crc8__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_crc8__DOT__done__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
