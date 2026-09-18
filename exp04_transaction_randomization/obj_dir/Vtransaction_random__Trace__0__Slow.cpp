// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtransaction_random__Syms.h"


VL_ATTR_COLD void Vtransaction_random___024root__trace_init_sub__TOP__transaction_random__0(Vtransaction_random___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtransaction_random___024root__trace_init_sub__TOP__0(Vtransaction_random___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_random___024root__trace_init_sub__TOP__0\n"); );
    Vtransaction_random__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "transaction_random", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtransaction_random___024root__trace_init_sub__TOP__transaction_random__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtransaction_random___024root__trace_init_sub__TOP__transaction_random__0(Vtransaction_random___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_random___024root__trace_init_sub__TOP__transaction_random__0\n"); );
    Vtransaction_random__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
}

VL_ATTR_COLD void Vtransaction_random___024root__trace_init_top(Vtransaction_random___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_random___024root__trace_init_top\n"); );
    Vtransaction_random__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtransaction_random___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtransaction_random___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtransaction_random___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtransaction_random___024root__trace_register(Vtransaction_random___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_random___024root__trace_register\n"); );
    Vtransaction_random__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtransaction_random___024root__trace_const_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtransaction_random___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtransaction_random___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_random___024root__trace_const_0\n"); );
    // Body
    Vtransaction_random___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtransaction_random___024root*>(voidSelf);
    Vtransaction_random__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}
