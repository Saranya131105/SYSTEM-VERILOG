// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_full_adder.h for the primary calling header

#ifndef VERILATED_VTB_FULL_ADDER_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VTB_FULL_ADDER_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_full_adder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_full_adder_std__03a__03asemaphore__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_full_adder__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_full_adder_std__03a__03asemaphore__Vclpkg();
    ~Vtb_full_adder_std__03a__03asemaphore__Vclpkg();
    void ctor(Vtb_full_adder__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_full_adder_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_full_adder__Syms;

class Vtb_full_adder_std__03a__03asemaphore : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_keyCount;
    IData/*31:0*/ __PVT__m_nextKeyCount;
    QData/*63:0*/ __PVT__m_ticket;
    QData/*63:0*/ __PVT__m_nextTicket;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::semaphore"; }
    VlClass* clone() const { return new Vtb_full_adder_std__03a__03asemaphore(*this); }
    VlCoroutine __VnoInFunc_get(Vtb_full_adder__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_put(Vtb_full_adder__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_try_get(Vtb_full_adder__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_full_adder__Syms* __restrict vlSymsp);
  public:
    Vtb_full_adder_std__03a__03asemaphore() = default;
    void init(Vtb_full_adder__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    ~Vtb_full_adder_std__03a__03asemaphore() {}
};


#endif  // guard
