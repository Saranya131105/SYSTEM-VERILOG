// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_full_adder.h for the primary calling header

#include "Vtb_full_adder__pch.h"


Vtb_full_adder_tb_full_adder__03a__03atransaction__Vclpkg::Vtb_full_adder_tb_full_adder__03a__03atransaction__Vclpkg() = default;
Vtb_full_adder_tb_full_adder__03a__03atransaction__Vclpkg::~Vtb_full_adder_tb_full_adder__03a__03atransaction__Vclpkg() = default;

void Vtb_full_adder_tb_full_adder__03a__03atransaction__Vclpkg::ctor(Vtb_full_adder__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vtb_full_adder_tb_full_adder__03a__03atransaction__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_full_adder_tb_full_adder__03a__03atransaction__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
