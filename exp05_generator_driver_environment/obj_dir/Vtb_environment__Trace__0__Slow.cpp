// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_environment__Syms.h"


VL_ATTR_COLD void Vtb_environment___024root__trace_init_sub__TOP__tb_environment__0(Vtb_environment___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_environment___024root__trace_init_sub__TOP__0(Vtb_environment___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_environment___024root__trace_init_sub__TOP__0\n"); );
    Vtb_environment__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "tb_environment", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtb_environment___024root__trace_init_sub__TOP__tb_environment__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_environment___024root__trace_init_sub__TOP__tb_environment__ha_if__0(Vtb_environment___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_environment___024root__trace_init_sub__TOP__tb_environment__0(Vtb_environment___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_environment___024root__trace_init_sub__TOP__tb_environment__0\n"); );
    Vtb_environment__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "ha_if", VerilatedTracePrefixType::SCOPE_INTERFACE, 0, 0);
    Vtb_environment___024root__trace_init_sub__TOP__tb_environment__ha_if__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_environment___024root__trace_init_sub__TOP__tb_environment__ha_if__0(Vtb_environment___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_environment___024root__trace_init_sub__TOP__tb_environment__ha_if__0\n"); );
    Vtb_environment__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+0,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
}

VL_ATTR_COLD void Vtb_environment___024root__trace_init_top(Vtb_environment___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_environment___024root__trace_init_top\n"); );
    Vtb_environment__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_environment___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_environment___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_environment___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_environment___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_environment___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_environment___024root__trace_register(Vtb_environment___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_environment___024root__trace_register\n"); );
    Vtb_environment__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_environment___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_environment___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_environment___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_environment___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_environment___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_environment___024root__trace_const_0\n"); );
    // Body
    Vtb_environment___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_environment___024root*>(voidSelf);
    Vtb_environment__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtb_environment___024root__trace_full_0_sub_0(Vtb_environment___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_environment___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_environment___024root__trace_full_0\n"); );
    // Body
    Vtb_environment___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_environment___024root*>(voidSelf);
    Vtb_environment__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_environment___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_environment___024root__trace_full_0_sub_0(Vtb_environment___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_environment___024root__trace_full_0_sub_0\n"); );
    Vtb_environment__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSymsp->TOP__tb_environment__ha_if.__PVT__a));
    bufp->fullBit(oldp+1,(vlSymsp->TOP__tb_environment__ha_if.__PVT__b));
    bufp->fullBit(oldp+2,(((IData)(vlSymsp->TOP__tb_environment__ha_if.__PVT__a) 
                           ^ (IData)(vlSymsp->TOP__tb_environment__ha_if.__PVT__b))));
    bufp->fullBit(oldp+3,(((IData)(vlSymsp->TOP__tb_environment__ha_if.__PVT__a) 
                           & (IData)(vlSymsp->TOP__tb_environment__ha_if.__PVT__b))));
    bufp->fullBit(oldp+4,(vlSymsp->TOP__tb_environment__ha_if.__PVT__sum));
    bufp->fullBit(oldp+5,(vlSymsp->TOP__tb_environment__ha_if.__PVT__carry));
}
