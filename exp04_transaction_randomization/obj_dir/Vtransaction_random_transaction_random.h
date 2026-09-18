// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransaction_random.h for the primary calling header

#ifndef VERILATED_VTRANSACTION_RANDOM_TRANSACTION_RANDOM_H_
#define VERILATED_VTRANSACTION_RANDOM_TRANSACTION_RANDOM_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransaction_random_transaction_random__03a__03atransaction;


class Vtransaction_random__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransaction_random_transaction_random final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __VlemCond_1;
    IData/*31:0*/ __VlemCall_0__randomize;
    VlClassRef<Vtransaction_random_transaction_random__03a__03atransaction> __PVT__unnamedblk1__DOT__tr;

    // INTERNAL VARIABLES
    Vtransaction_random__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransaction_random_transaction_random();
    ~Vtransaction_random_transaction_random();
    void ctor(Vtransaction_random__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransaction_random_transaction_random);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
