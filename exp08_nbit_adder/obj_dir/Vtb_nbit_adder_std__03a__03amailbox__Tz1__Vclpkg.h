// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_nbit_adder.h for the primary calling header

#ifndef VERILATED_VTB_NBIT_ADDER_STD__03A__03AMAILBOX__TZ1__VCLPKG_H_
#define VERILATED_VTB_NBIT_ADDER_STD__03A__03AMAILBOX__TZ1__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction;


class Vtb_nbit_adder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_nbit_adder_std__03a__03amailbox__Tz1__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_nbit_adder__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_nbit_adder_std__03a__03amailbox__Tz1__Vclpkg();
    ~Vtb_nbit_adder_std__03a__03amailbox__Tz1__Vclpkg();
    void ctor(Vtb_nbit_adder__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_nbit_adder_std__03a__03amailbox__Tz1__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_nbit_adder__Syms;

class Vtb_nbit_adder_std__03a__03amailbox__Tz1 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_bound;
    VlQueue<VlClassRef<Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction>> __PVT__m_queue;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::mailbox__Tz1"; }
    VlClass* clone() const { return new Vtb_nbit_adder_std__03a__03amailbox__Tz1(*this); }
    VlCoroutine __VnoInFunc_get(Vtb_nbit_adder__Syms* __restrict vlSymsp, VlClassRef<Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction> &message);
    void __VnoInFunc_num(Vtb_nbit_adder__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(Vtb_nbit_adder__Syms* __restrict vlSymsp, VlClassRef<Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction> &message);
    VlCoroutine __VnoInFunc_put(Vtb_nbit_adder__Syms* __restrict vlSymsp, VlClassRef<Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction> message);
    void __VnoInFunc_try_get(Vtb_nbit_adder__Syms* __restrict vlSymsp, VlClassRef<Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction> &message, IData/*31:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(Vtb_nbit_adder__Syms* __restrict vlSymsp, VlClassRef<Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction> &message, IData/*31:0*/ &try_peek__Vfuncrtn);
    void __VnoInFunc_try_put(Vtb_nbit_adder__Syms* __restrict vlSymsp, VlClassRef<Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction> message, IData/*31:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_nbit_adder__Syms* __restrict vlSymsp);
  public:
    Vtb_nbit_adder_std__03a__03amailbox__Tz1() = default;
    void init(Vtb_nbit_adder__Syms* __restrict vlSymsp, IData/*31:0*/ bound);
    ~Vtb_nbit_adder_std__03a__03amailbox__Tz1() {}
};


#endif  // guard
