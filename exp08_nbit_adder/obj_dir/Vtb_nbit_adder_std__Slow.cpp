// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_nbit_adder.h for the primary calling header

#include "Vtb_nbit_adder__pch.h"


Vtb_nbit_adder_std::Vtb_nbit_adder_std() = default;
Vtb_nbit_adder_std::~Vtb_nbit_adder_std() = default;

void Vtb_nbit_adder_std::ctor(Vtb_nbit_adder__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vtb_nbit_adder_std::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_nbit_adder_std::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
