// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_environment.h for the primary calling header

#include "Vtb_environment__pch.h"

void Vtb_environment_half_adder_if___ctor_var_reset(Vtb_environment_half_adder_if* vlSelf);

Vtb_environment_half_adder_if::Vtb_environment_half_adder_if() = default;
Vtb_environment_half_adder_if::~Vtb_environment_half_adder_if() = default;

void Vtb_environment_half_adder_if::ctor(Vtb_environment__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_environment_half_adder_if___ctor_var_reset(this);
}

void Vtb_environment_half_adder_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_environment_half_adder_if::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
