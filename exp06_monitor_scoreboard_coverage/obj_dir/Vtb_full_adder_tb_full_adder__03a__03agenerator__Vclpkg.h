// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_full_adder.h for the primary calling header

#ifndef VERILATED_VTB_FULL_ADDER_TB_FULL_ADDER__03A__03AGENERATOR__VCLPKG_H_
#define VERILATED_VTB_FULL_ADDER_TB_FULL_ADDER__03A__03AGENERATOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_full_adder_std__03a__03amailbox__Tz1;
class Vtb_full_adder_tb_full_adder__03a__03atransaction;


class Vtb_full_adder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_full_adder_tb_full_adder__03a__03agenerator__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_full_adder__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_full_adder_tb_full_adder__03a__03agenerator__Vclpkg();
    ~Vtb_full_adder_tb_full_adder__03a__03agenerator__Vclpkg();
    void ctor(Vtb_full_adder__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_full_adder_tb_full_adder__03a__03agenerator__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_full_adder__Syms;

class Vtb_full_adder_tb_full_adder__03a__03agenerator : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtb_full_adder_tb_full_adder__03a__03atransaction> __PVT__tr;
    VlClassRef<Vtb_full_adder_std__03a__03amailbox__Tz1> __PVT__gen2drv;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "tb_full_adder::generator"; }
    VlClass* clone() const { return new Vtb_full_adder_tb_full_adder__03a__03agenerator(*this); }
    VlCoroutine __VnoInFunc_run(Vtb_full_adder__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb_full_adder__Syms* __restrict vlSymsp);
  public:
    Vtb_full_adder_tb_full_adder__03a__03agenerator() = default;
    void init(Vtb_full_adder__Syms* __restrict vlSymsp, VlClassRef<Vtb_full_adder_std__03a__03amailbox__Tz1> gen2drv);
    ~Vtb_full_adder_tb_full_adder__03a__03agenerator() {}
};


#endif  // guard
