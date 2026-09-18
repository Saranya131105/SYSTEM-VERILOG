// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_d_flipflop.h for the primary calling header

#ifndef VERILATED_VTB_D_FLIPFLOP_TB_D_FLIPFLOP__03A__03ASCOREBOARD__VCLPKG_H_
#define VERILATED_VTB_D_FLIPFLOP_TB_D_FLIPFLOP__03A__03ASCOREBOARD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_d_flipflop_std__03a__03amailbox__Tz1;
class Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction;


class Vtb_d_flipflop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_d_flipflop_tb_d_flipflop__03a__03ascoreboard__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_d_flipflop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_d_flipflop_tb_d_flipflop__03a__03ascoreboard__Vclpkg();
    ~Vtb_d_flipflop_tb_d_flipflop__03a__03ascoreboard__Vclpkg();
    void ctor(Vtb_d_flipflop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_d_flipflop_tb_d_flipflop__03a__03ascoreboard__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_d_flipflop__Syms;

class Vtb_d_flipflop_tb_d_flipflop__03a__03ascoreboard : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__expected_q;
    IData/*31:0*/ __PVT__pass_count;
    IData/*31:0*/ __PVT__fail_count;
    VlClassRef<Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction> __PVT__tr;
    VlClassRef<Vtb_d_flipflop_std__03a__03amailbox__Tz1> __PVT__mon2scb;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "tb_d_flipflop::scoreboard"; }
    VlClass* clone() const { return new Vtb_d_flipflop_tb_d_flipflop__03a__03ascoreboard(*this); }
    VlCoroutine __VnoInFunc_run(Vtb_d_flipflop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb_d_flipflop__Syms* __restrict vlSymsp);
  public:
    Vtb_d_flipflop_tb_d_flipflop__03a__03ascoreboard() = default;
    void init(Vtb_d_flipflop__Syms* __restrict vlSymsp, VlClassRef<Vtb_d_flipflop_std__03a__03amailbox__Tz1> mon2scb);
    ~Vtb_d_flipflop_tb_d_flipflop__03a__03ascoreboard() {}
};


#endif  // guard
