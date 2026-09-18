// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_nbit_adder.h for the primary calling header

#ifndef VERILATED_VTB_NBIT_ADDER_TB_NBIT_ADDER__03A__03ATRANSACTION__VCLPKG_H_
#define VERILATED_VTB_NBIT_ADDER_TB_NBIT_ADDER__03A__03ATRANSACTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb_nbit_adder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_nbit_adder__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction__Vclpkg();
    ~Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction__Vclpkg();
    void ctor(Vtb_nbit_adder__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_nbit_adder__Syms;

class Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ __PVT__A;
    CData/*3:0*/ __PVT__B;
    CData/*0:0*/ __PVT__Cin;
    CData/*3:0*/ __PVT__Sum;
    CData/*0:0*/ __PVT__Cout;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "tb_nbit_adder::transaction"; }
    VlClass* clone() const { return new Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction(*this); }
    void __VnoInFunc___VBasicRand(Vtb_nbit_adder__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    void __VnoInFunc_display(Vtb_nbit_adder__Syms* __restrict vlSymsp);
    void __VnoInFunc_randomize(Vtb_nbit_adder__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_nbit_adder__Syms* __restrict vlSymsp);
  public:
    Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction() = default;
    void init(Vtb_nbit_adder__Syms* __restrict vlSymsp);
    ~Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction() {}
};


#endif  // guard
