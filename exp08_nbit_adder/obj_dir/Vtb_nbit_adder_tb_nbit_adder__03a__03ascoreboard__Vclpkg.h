// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_nbit_adder.h for the primary calling header

#ifndef VERILATED_VTB_NBIT_ADDER_TB_NBIT_ADDER__03A__03ASCOREBOARD__VCLPKG_H_
#define VERILATED_VTB_NBIT_ADDER_TB_NBIT_ADDER__03A__03ASCOREBOARD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_nbit_adder_std__03a__03amailbox__Tz1;
class Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction;


class Vtb_nbit_adder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_nbit_adder_tb_nbit_adder__03a__03ascoreboard__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_nbit_adder__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_nbit_adder_tb_nbit_adder__03a__03ascoreboard__Vclpkg();
    ~Vtb_nbit_adder_tb_nbit_adder__03a__03ascoreboard__Vclpkg();
    void ctor(Vtb_nbit_adder__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_nbit_adder_tb_nbit_adder__03a__03ascoreboard__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_nbit_adder__Syms;

class Vtb_nbit_adder_tb_nbit_adder__03a__03ascoreboard : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*4:0*/ __PVT__expected;
    IData/*31:0*/ __PVT__pass_count;
    IData/*31:0*/ __PVT__fail_count;
    VlClassRef<Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction> __PVT__tr;
    VlClassRef<Vtb_nbit_adder_std__03a__03amailbox__Tz1> __PVT__mon2scb;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "tb_nbit_adder::scoreboard"; }
    VlClass* clone() const { return new Vtb_nbit_adder_tb_nbit_adder__03a__03ascoreboard(*this); }
    VlCoroutine __VnoInFunc_run(Vtb_nbit_adder__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb_nbit_adder__Syms* __restrict vlSymsp);
  public:
    Vtb_nbit_adder_tb_nbit_adder__03a__03ascoreboard() = default;
    void init(Vtb_nbit_adder__Syms* __restrict vlSymsp, VlClassRef<Vtb_nbit_adder_std__03a__03amailbox__Tz1> mon2scb);
    ~Vtb_nbit_adder_tb_nbit_adder__03a__03ascoreboard() {}
};


#endif  // guard
