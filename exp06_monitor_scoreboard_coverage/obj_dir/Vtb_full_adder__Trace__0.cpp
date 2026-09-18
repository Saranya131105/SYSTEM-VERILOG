// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_full_adder__Syms.h"


void Vtb_full_adder___024root__trace_chg_0_sub_0(Vtb_full_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_full_adder___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_full_adder___024root__trace_chg_0\n"); );
    // Body
    Vtb_full_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_full_adder___024root*>(voidSelf);
    Vtb_full_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_full_adder___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_full_adder___024root__trace_chg_0_sub_0(Vtb_full_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_full_adder___024root__trace_chg_0_sub_0\n"); );
    Vtb_full_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[2U]) 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__tb_full_adder.__PVT__coverage[0]));
        bufp->chgBit(oldp+1,(vlSymsp->TOP__tb_full_adder.__PVT__coverage[1]));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__tb_full_adder.__PVT__coverage[2]));
        bufp->chgBit(oldp+3,(vlSymsp->TOP__tb_full_adder.__PVT__coverage[3]));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__tb_full_adder.__PVT__coverage[4]));
        bufp->chgBit(oldp+5,(vlSymsp->TOP__tb_full_adder.__PVT__coverage[5]));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__tb_full_adder.__PVT__coverage[6]));
        bufp->chgBit(oldp+7,(vlSymsp->TOP__tb_full_adder.__PVT__coverage[7]));
    }
    bufp->chgBit(oldp+8,(vlSymsp->TOP__tb_full_adder.__PVT__a));
    bufp->chgBit(oldp+9,(vlSymsp->TOP__tb_full_adder.__PVT__b));
    bufp->chgBit(oldp+10,(vlSymsp->TOP__tb_full_adder.__PVT__cin));
    bufp->chgBit(oldp+11,(((IData)(vlSymsp->TOP__tb_full_adder.__PVT__a) 
                           ^ ((IData)(vlSymsp->TOP__tb_full_adder.__PVT__b) 
                              ^ (IData)(vlSymsp->TOP__tb_full_adder.__PVT__cin)))));
    bufp->chgBit(oldp+12,((((IData)(vlSymsp->TOP__tb_full_adder.__PVT__a) 
                            & (IData)(vlSymsp->TOP__tb_full_adder.__PVT__b)) 
                           | ((IData)(vlSymsp->TOP__tb_full_adder.__PVT__cin) 
                              & ((IData)(vlSymsp->TOP__tb_full_adder.__PVT__a) 
                                 | (IData)(vlSymsp->TOP__tb_full_adder.__PVT__b))))));
    bufp->chgIData(oldp+13,(vlSymsp->TOP__tb_full_adder.__PVT__coverage_count),32);
}

void Vtb_full_adder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_full_adder___024root__trace_cleanup\n"); );
    // Body
    Vtb_full_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_full_adder___024root*>(voidSelf);
    Vtb_full_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
