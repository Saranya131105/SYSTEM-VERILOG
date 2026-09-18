// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_crc8__Syms.h"


void Vtb_crc8___024root__trace_chg_0_sub_0(Vtb_crc8___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_crc8___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_crc8___024root__trace_chg_0\n"); );
    // Body
    Vtb_crc8___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_crc8___024root*>(voidSelf);
    Vtb_crc8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_crc8___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_crc8___024root__trace_chg_0_sub_0(Vtb_crc8___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_crc8___024root__trace_chg_0_sub_0\n"); );
    Vtb_crc8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.tb_crc8__DOT__crc_out),8);
        bufp->chgBit(oldp+1,(vlSelfRef.tb_crc8__DOT__done));
        bufp->chgCData(oldp+2,(vlSelfRef.tb_crc8__DOT__DUT__DOT__crc_reg),8);
        bufp->chgCData(oldp+3,(vlSelfRef.tb_crc8__DOT__DUT__DOT__bit_count),3);
        bufp->chgBit(oldp+4,(vlSelfRef.tb_crc8__DOT__DUT__DOT__busy));
    }
    bufp->chgBit(oldp+5,(vlSelfRef.tb_crc8__DOT__clk));
    bufp->chgBit(oldp+6,(vlSelfRef.tb_crc8__DOT__rst));
    bufp->chgBit(oldp+7,(vlSelfRef.tb_crc8__DOT__start));
    bufp->chgCData(oldp+8,(vlSelfRef.tb_crc8__DOT__data_in),8);
    bufp->chgBit(oldp+9,(vlSelfRef.tb_crc8__DOT__DUT__DOT__feedback));
}

void Vtb_crc8___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_crc8___024root__trace_cleanup\n"); );
    // Body
    Vtb_crc8___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_crc8___024root*>(voidSelf);
    Vtb_crc8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
