// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_environment.h for the primary calling header

#ifndef VERILATED_VTB_ENVIRONMENT_HALF_ADDER_IF_H_
#define VERILATED_VTB_ENVIRONMENT_HALF_ADDER_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb_environment__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_environment_half_adder_if final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__a;
    CData/*0:0*/ __PVT__b;
    CData/*0:0*/ __PVT__sum;
    CData/*0:0*/ __PVT__carry;

    // INTERNAL VARIABLES
    Vtb_environment__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_environment_half_adder_if();
    ~Vtb_environment_half_adder_if();
    void ctor(Vtb_environment__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_environment_half_adder_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
