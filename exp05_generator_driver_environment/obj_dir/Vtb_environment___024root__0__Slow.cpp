// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_environment.h for the primary calling header

#include "Vtb_environment__pch.h"

VL_ATTR_COLD void Vtb_environment___024root___eval_static(Vtb_environment___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_environment___024root___eval_static\n"); );
    Vtb_environment__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevvif_ico_TOP__tb_environment__ha_if____PVT__a 
        = vlSymsp->TOP__tb_environment__ha_if.__PVT__a;
    vlSelfRef.__Vtrigprevvif_ico_TOP__tb_environment__ha_if____PVT__b 
        = vlSymsp->TOP__tb_environment__ha_if.__PVT__b;
    vlSelfRef.__Vtrigprevvif_act_TOP__tb_environment__ha_if____PVT__a 
        = vlSymsp->TOP__tb_environment__ha_if.__PVT__a;
    vlSelfRef.__Vtrigprevvif_act_TOP__tb_environment__ha_if____PVT__b 
        = vlSymsp->TOP__tb_environment__ha_if.__PVT__b;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((1U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_environment___024root___eval_final(Vtb_environment___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_environment___024root___eval_final\n"); );
    Vtb_environment__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_environment___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_environment___024root___eval_phase__stl(Vtb_environment___024root* vlSelf);

VL_ATTR_COLD void Vtb_environment___024root___eval_settle(Vtb_environment___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_environment___024root___eval_settle\n"); );
    Vtb_environment__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_environment___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb_environment.sv", 11, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_environment___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_environment___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_environment___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_environment___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_environment___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_environment___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_environment___024root___trigger_anySet__stl\n"); );
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

void Vtb_environment_tb_environment___ico_comb__TOP__tb_environment__0(Vtb_environment_tb_environment* vlSelf);

VL_ATTR_COLD bool Vtb_environment___024root___eval_phase__stl(Vtb_environment___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_environment___024root___eval_phase__stl\n"); );
    Vtb_environment__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vtb_environment___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_environment___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb_environment_tb_environment___ico_comb__TOP__tb_environment__0((&vlSymsp->TOP__tb_environment));
            }
        }
    }
    return (__VstlExecute);
}

bool Vtb_environment___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_environment___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_environment___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_environment___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: Internal 'ico' trigger - virtual interface member: half_adder_if.__PVT__a\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: Internal 'ico' trigger - virtual interface member: half_adder_if.__PVT__b\n");
    }
}
#endif  // VL_DEBUG

bool Vtb_environment___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_environment___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_environment___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_environment___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdynSched.evaluate())\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'act' trigger - virtual interface member: half_adder_if.__PVT__a\n");
    }
    if ((1U & (IData)((triggers[1U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 65 is active: Internal 'act' trigger - virtual interface member: half_adder_if.__PVT__b\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_environment___024root___ctor_var_reset(Vtb_environment___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_environment___024root___ctor_var_reset\n"); );
    Vtb_environment__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevvif_ico_TOP__tb_environment__ha_if____PVT__a = 0;
    vlSelf->__Vtrigprevvif_ico_TOP__tb_environment__ha_if____PVT__b = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevvif_act_TOP__tb_environment__ha_if____PVT__a = 0;
    vlSelf->__Vtrigprevvif_act_TOP__tb_environment__ha_if____PVT__b = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
