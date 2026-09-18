// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_nbit_adder__Syms.h"


void Vtb_nbit_adder___024root__trace_chg_0_sub_0(Vtb_nbit_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_nbit_adder___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_nbit_adder___024root__trace_chg_0\n"); );
    // Body
    Vtb_nbit_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_nbit_adder___024root*>(voidSelf);
    Vtb_nbit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_nbit_adder___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_nbit_adder___024root__trace_chg_0_sub_0(Vtb_nbit_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_nbit_adder___024root__trace_chg_0_sub_0\n"); );
    Vtb_nbit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    bufp->chgBit(oldp+0,(vlSymsp->TOP__tb_nbit_adder.__PVT__clk));
    bufp->chgCData(oldp+1,(vlSymsp->TOP__tb_nbit_adder.__PVT__A),4);
    bufp->chgCData(oldp+2,(vlSymsp->TOP__tb_nbit_adder.__PVT__B),4);
    bufp->chgCData(oldp+3,((0x0000000fU & ((IData)(vlSymsp->TOP__tb_nbit_adder.__PVT__A) 
                                           + ((IData)(vlSymsp->TOP__tb_nbit_adder.__PVT__B) 
                                              + (IData)(vlSymsp->TOP__tb_nbit_adder.__PVT__Cin))))),4);
    bufp->chgBit(oldp+4,(vlSymsp->TOP__tb_nbit_adder.__PVT__Cin));
    bufp->chgBit(oldp+5,((1U & (((IData)(vlSymsp->TOP__tb_nbit_adder.__PVT__A) 
                                 + ((IData)(vlSymsp->TOP__tb_nbit_adder.__PVT__Cin) 
                                    + (IData)(vlSymsp->TOP__tb_nbit_adder.__PVT__B))) 
                                >> 4U))));
}

void Vtb_nbit_adder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_nbit_adder___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vtb_nbit_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_nbit_adder___024root*>(voidSelf);
    Vtb_nbit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
