// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransaction_random.h for the primary calling header

#include "Vtransaction_random__pch.h"

VL_ATTR_COLD void Vtransaction_random_transaction_random___eval_static__TOP__transaction_random(Vtransaction_random_transaction_random* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtransaction_random_transaction_random___eval_static__TOP__transaction_random\n"); );
    Vtransaction_random__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtransaction_random_transaction_random___eval_initial__TOP__transaction_random(Vtransaction_random_transaction_random* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtransaction_random_transaction_random___eval_initial__TOP__transaction_random\n"); );
    Vtransaction_random__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __PVT__unnamedblk1__DOT__unnamedblk2__DOT__i;
    __PVT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    // Body
    vlSelfRef.__PVT__unnamedblk1__DOT__tr = VL_NEW(Vtransaction_random_transaction_random__03a__03atransaction, vlSymsp);
    VL_WRITEF_NX("TRANSACTION RANDOMIZATION\n",0);
    __PVT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x0000000aU, __PVT__unnamedblk1__DOT__unnamedblk2__DOT__i)) {
        if ((VlNull{} != vlSelfRef.__PVT__unnamedblk1__DOT__tr)) {
            VL_NULL_CHECK(vlSelfRef.__PVT__unnamedblk1__DOT__tr, "transaction_random.sv", 20)->__VnoInFunc_randomize(vlSymsp, vlSelfRef.__VlemCall_0__randomize);
            vlSelfRef.__VlemCond_1 = vlSelfRef.__VlemCall_0__randomize;
        } else {
            vlSelfRef.__VlemCond_1 = 0U;
        }
        if ((0U != vlSelfRef.__VlemCond_1)) {
            VL_WRITEF_NX("Transaction %0d:\n",1, '~',32,
                         ((IData)(1U) + __PVT__unnamedblk1__DOT__unnamedblk2__DOT__i));
            VL_NULL_CHECK(vlSelfRef.__PVT__unnamedblk1__DOT__tr, "transaction_random.sv", 22)->__VnoInFunc_display(vlSymsp);
        } else {
            VL_WRITEF_NX("Randomization FAILED\n",0);
        }
        __PVT__unnamedblk1__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + __PVT__unnamedblk1__DOT__unnamedblk2__DOT__i);
    }
    VL_WRITEF_NX("Randomization completed.\n",0);
    VL_FINISH_MT("transaction_random.sv", 29, "");
}
