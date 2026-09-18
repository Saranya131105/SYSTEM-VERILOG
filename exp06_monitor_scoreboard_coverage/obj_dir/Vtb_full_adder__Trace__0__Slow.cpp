// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_full_adder__Syms.h"


VL_ATTR_COLD void Vtb_full_adder___024root__trace_init_sub__TOP__tb_full_adder__0(Vtb_full_adder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_full_adder___024root__trace_init_sub__TOP__0(Vtb_full_adder___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_full_adder___024root__trace_init_sub__TOP__0\n"); );
    Vtb_full_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "tb_full_adder", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtb_full_adder___024root__trace_init_sub__TOP__tb_full_adder__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_full_adder___024root__trace_init_sub__TOP__tb_full_adder__0(Vtb_full_adder___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_full_adder___024root__trace_init_sub__TOP__tb_full_adder__0\n"); );
    Vtb_full_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+8,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+10,0,"cin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "coverage", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 7);
    for (int i = 0; i < 8; ++i) {
        VL_TRACE_DECL_BIT_ARRAY(tracep,c+0+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, (i + 0));
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"coverage_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+10,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_full_adder___024root__trace_init_top(Vtb_full_adder___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_full_adder___024root__trace_init_top\n"); );
    Vtb_full_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_full_adder___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_full_adder___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_full_adder___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_full_adder___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_full_adder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_full_adder___024root__trace_register(Vtb_full_adder___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_full_adder___024root__trace_register\n"); );
    Vtb_full_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_full_adder___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_full_adder___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_full_adder___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_full_adder___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_full_adder___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_full_adder___024root__trace_const_0\n"); );
    // Body
    Vtb_full_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_full_adder___024root*>(voidSelf);
    Vtb_full_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtb_full_adder___024root__trace_full_0_sub_0(Vtb_full_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_full_adder___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_full_adder___024root__trace_full_0\n"); );
    // Body
    Vtb_full_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_full_adder___024root*>(voidSelf);
    Vtb_full_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_full_adder___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_full_adder___024root__trace_full_0_sub_0(Vtb_full_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_full_adder___024root__trace_full_0_sub_0\n"); );
    Vtb_full_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSymsp->TOP__tb_full_adder.__PVT__coverage[0]));
    bufp->fullBit(oldp+1,(vlSymsp->TOP__tb_full_adder.__PVT__coverage[1]));
    bufp->fullBit(oldp+2,(vlSymsp->TOP__tb_full_adder.__PVT__coverage[2]));
    bufp->fullBit(oldp+3,(vlSymsp->TOP__tb_full_adder.__PVT__coverage[3]));
    bufp->fullBit(oldp+4,(vlSymsp->TOP__tb_full_adder.__PVT__coverage[4]));
    bufp->fullBit(oldp+5,(vlSymsp->TOP__tb_full_adder.__PVT__coverage[5]));
    bufp->fullBit(oldp+6,(vlSymsp->TOP__tb_full_adder.__PVT__coverage[6]));
    bufp->fullBit(oldp+7,(vlSymsp->TOP__tb_full_adder.__PVT__coverage[7]));
    bufp->fullBit(oldp+8,(vlSymsp->TOP__tb_full_adder.__PVT__a));
    bufp->fullBit(oldp+9,(vlSymsp->TOP__tb_full_adder.__PVT__b));
    bufp->fullBit(oldp+10,(vlSymsp->TOP__tb_full_adder.__PVT__cin));
    bufp->fullBit(oldp+11,(((IData)(vlSymsp->TOP__tb_full_adder.__PVT__a) 
                            ^ ((IData)(vlSymsp->TOP__tb_full_adder.__PVT__b) 
                               ^ (IData)(vlSymsp->TOP__tb_full_adder.__PVT__cin)))));
    bufp->fullBit(oldp+12,((((IData)(vlSymsp->TOP__tb_full_adder.__PVT__a) 
                             & (IData)(vlSymsp->TOP__tb_full_adder.__PVT__b)) 
                            | ((IData)(vlSymsp->TOP__tb_full_adder.__PVT__cin) 
                               & ((IData)(vlSymsp->TOP__tb_full_adder.__PVT__a) 
                                  | (IData)(vlSymsp->TOP__tb_full_adder.__PVT__b))))));
    bufp->fullIData(oldp+13,(vlSymsp->TOP__tb_full_adder.__PVT__coverage_count),32);
}
