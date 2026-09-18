// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_NBIT_ADDER__SYMS_H_
#define VERILATED_VTB_NBIT_ADDER__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtb_nbit_adder.h"

// INCLUDE MODULE CLASSES
#include "Vtb_nbit_adder___024root.h"
#include "Vtb_nbit_adder_tb_nbit_adder.h"
#include "Vtb_nbit_adder___024unit.h"
#include "Vtb_nbit_adder_std.h"
#include "Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction__Vclpkg.h"
#include "Vtb_nbit_adder_tb_nbit_adder__03a__03agenerator__Vclpkg.h"
#include "Vtb_nbit_adder_tb_nbit_adder__03a__03adriver__Vclpkg.h"
#include "Vtb_nbit_adder_tb_nbit_adder__03a__03amonitor__Vclpkg.h"
#include "Vtb_nbit_adder_tb_nbit_adder__03a__03ascoreboard__Vclpkg.h"
#include "Vtb_nbit_adder_tb_nbit_adder__03a__03aenvironment__Vclpkg.h"
#include "Vtb_nbit_adder_std__03a__03asemaphore__Vclpkg.h"
#include "Vtb_nbit_adder_std__03a__03aprocess__Vclpkg.h"
#include "Vtb_nbit_adder_std__03a__03amailbox__Tz1__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_nbit_adder__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_nbit_adder* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_nbit_adder___024root       TOP;
    Vtb_nbit_adder_std             TOP__std;
    Vtb_nbit_adder_tb_nbit_adder   TOP__tb_nbit_adder;
    Vtb_nbit_adder_std__03a__03amailbox__Tz1__Vclpkg TOP__std__03a__03amailbox__Tz1__Vclpkg;
    Vtb_nbit_adder_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    Vtb_nbit_adder_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;
    Vtb_nbit_adder_tb_nbit_adder__03a__03adriver__Vclpkg TOP__tb_nbit_adder__03a__03adriver__Vclpkg;
    Vtb_nbit_adder_tb_nbit_adder__03a__03aenvironment__Vclpkg TOP__tb_nbit_adder__03a__03aenvironment__Vclpkg;
    Vtb_nbit_adder_tb_nbit_adder__03a__03agenerator__Vclpkg TOP__tb_nbit_adder__03a__03agenerator__Vclpkg;
    Vtb_nbit_adder_tb_nbit_adder__03a__03amonitor__Vclpkg TOP__tb_nbit_adder__03a__03amonitor__Vclpkg;
    Vtb_nbit_adder_tb_nbit_adder__03a__03ascoreboard__Vclpkg TOP__tb_nbit_adder__03a__03ascoreboard__Vclpkg;
    Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction__Vclpkg TOP__tb_nbit_adder__03a__03atransaction__Vclpkg;

    // CONSTRUCTORS
    Vtb_nbit_adder__Syms(VerilatedContext* contextp, const char* namep, Vtb_nbit_adder* modelp);
    ~Vtb_nbit_adder__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
