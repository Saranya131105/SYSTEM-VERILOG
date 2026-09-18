// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_nbit_adder__Syms.h"


VL_ATTR_COLD void Vtb_nbit_adder___024root__trace_init_sub__TOP__tb_nbit_adder__0(Vtb_nbit_adder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_nbit_adder___024root__trace_init_sub__TOP__0(Vtb_nbit_adder___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_nbit_adder___024root__trace_init_sub__TOP__0\n"); );
    Vtb_nbit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "tb_nbit_adder", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtb_nbit_adder___024root__trace_init_sub__TOP__tb_nbit_adder__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_nbit_adder___024root__trace_init_sub__TOP__tb_nbit_adder__0(Vtb_nbit_adder___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_nbit_adder___024root__trace_init_sub__TOP__tb_nbit_adder__0\n"); );
    Vtb_nbit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+6,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"Sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"Cin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"Cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"Sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_nbit_adder___024root__trace_init_top(Vtb_nbit_adder___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_nbit_adder___024root__trace_init_top\n"); );
    Vtb_nbit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_nbit_adder___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_nbit_adder___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_nbit_adder___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_nbit_adder___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_nbit_adder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_nbit_adder___024root__trace_register(Vtb_nbit_adder___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_nbit_adder___024root__trace_register\n"); );
    Vtb_nbit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_nbit_adder___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_nbit_adder___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_nbit_adder___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_nbit_adder___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_nbit_adder___024root__trace_const_0_sub_0(Vtb_nbit_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_nbit_adder___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_nbit_adder___024root__trace_const_0\n"); );
    // Body
    Vtb_nbit_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_nbit_adder___024root*>(voidSelf);
    Vtb_nbit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_nbit_adder___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_nbit_adder___024root__trace_const_0_sub_0(Vtb_nbit_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_nbit_adder___024root__trace_const_0_sub_0\n"); );
    Vtb_nbit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+6,(4U),32);
}

VL_ATTR_COLD void Vtb_nbit_adder___024root__trace_full_0_sub_0(Vtb_nbit_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_nbit_adder___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_nbit_adder___024root__trace_full_0\n"); );
    // Body
    Vtb_nbit_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_nbit_adder___024root*>(voidSelf);
    Vtb_nbit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_nbit_adder___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_nbit_adder___024root__trace_full_0_sub_0(Vtb_nbit_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_nbit_adder___024root__trace_full_0_sub_0\n"); );
    Vtb_nbit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSymsp->TOP__tb_nbit_adder.__PVT__clk));
    bufp->fullCData(oldp+1,(vlSymsp->TOP__tb_nbit_adder.__PVT__A),4);
    bufp->fullCData(oldp+2,(vlSymsp->TOP__tb_nbit_adder.__PVT__B),4);
    bufp->fullCData(oldp+3,((0x0000000fU & ((IData)(vlSymsp->TOP__tb_nbit_adder.__PVT__A) 
                                            + ((IData)(vlSymsp->TOP__tb_nbit_adder.__PVT__B) 
                                               + (IData)(vlSymsp->TOP__tb_nbit_adder.__PVT__Cin))))),4);
    bufp->fullBit(oldp+4,(vlSymsp->TOP__tb_nbit_adder.__PVT__Cin));
    bufp->fullBit(oldp+5,((1U & (((IData)(vlSymsp->TOP__tb_nbit_adder.__PVT__A) 
                                  + ((IData)(vlSymsp->TOP__tb_nbit_adder.__PVT__Cin) 
                                     + (IData)(vlSymsp->TOP__tb_nbit_adder.__PVT__B))) 
                                 >> 4U))));
}
