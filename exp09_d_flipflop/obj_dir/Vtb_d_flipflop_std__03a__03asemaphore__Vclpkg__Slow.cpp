// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_d_flipflop.h for the primary calling header

#include "Vtb_d_flipflop__pch.h"


Vtb_d_flipflop_std__03a__03asemaphore__Vclpkg::Vtb_d_flipflop_std__03a__03asemaphore__Vclpkg() = default;
Vtb_d_flipflop_std__03a__03asemaphore__Vclpkg::~Vtb_d_flipflop_std__03a__03asemaphore__Vclpkg() = default;

void Vtb_d_flipflop_std__03a__03asemaphore__Vclpkg::ctor(Vtb_d_flipflop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vtb_d_flipflop_std__03a__03asemaphore__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_d_flipflop_std__03a__03asemaphore__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
