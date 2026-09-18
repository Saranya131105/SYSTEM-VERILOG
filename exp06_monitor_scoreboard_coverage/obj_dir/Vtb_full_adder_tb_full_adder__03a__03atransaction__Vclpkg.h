// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_full_adder.h for the primary calling header

#ifndef VERILATED_VTB_FULL_ADDER_TB_FULL_ADDER__03A__03ATRANSACTION__VCLPKG_H_
#define VERILATED_VTB_FULL_ADDER_TB_FULL_ADDER__03A__03ATRANSACTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_full_adder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_full_adder_tb_full_adder__03a__03atransaction__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_full_adder__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_full_adder_tb_full_adder__03a__03atransaction__Vclpkg();
    ~Vtb_full_adder_tb_full_adder__03a__03atransaction__Vclpkg();
    void ctor(Vtb_full_adder__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_full_adder_tb_full_adder__03a__03atransaction__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_full_adder__Syms;

class Vtb_full_adder_tb_full_adder__03a__03atransaction : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__a;
    CData/*0:0*/ __PVT__b;
    CData/*0:0*/ __PVT__cin;
    CData/*0:0*/ __PVT__sum;
    CData/*0:0*/ __PVT__cout;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "tb_full_adder::transaction"; }
    VlClass* clone() const { return new Vtb_full_adder_tb_full_adder__03a__03atransaction(*this); }
    void __VnoInFunc_display(Vtb_full_adder__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb_full_adder__Syms* __restrict vlSymsp);
  public:
    Vtb_full_adder_tb_full_adder__03a__03atransaction() = default;
    void init(Vtb_full_adder__Syms* __restrict vlSymsp);
    ~Vtb_full_adder_tb_full_adder__03a__03atransaction() {}
};


#endif  // guard
