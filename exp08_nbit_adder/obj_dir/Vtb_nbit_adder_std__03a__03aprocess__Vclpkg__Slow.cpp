// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_nbit_adder.h for the primary calling header

#include "Vtb_nbit_adder__pch.h"


Vtb_nbit_adder_std__03a__03aprocess__Vclpkg::Vtb_nbit_adder_std__03a__03aprocess__Vclpkg() = default;
Vtb_nbit_adder_std__03a__03aprocess__Vclpkg::~Vtb_nbit_adder_std__03a__03aprocess__Vclpkg() = default;

void Vtb_nbit_adder_std__03a__03aprocess__Vclpkg::ctor(Vtb_nbit_adder__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vtb_nbit_adder_std__03a__03aprocess__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_nbit_adder_std__03a__03aprocess__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
