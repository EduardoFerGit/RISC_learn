// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_toplevel;
    VerilatedScope __Vscope_toplevel__dmem;
    VerilatedScope __Vscope_toplevel__imem;
    VerilatedScope __Vscope_toplevel__mips_core;
    VerilatedScope __Vscope_toplevel__mips_core__control_unit_inst;
    VerilatedScope __Vscope_toplevel__mips_core__control_unit_inst__alu_decoder_inst;
    VerilatedScope __Vscope_toplevel__mips_core__control_unit_inst__main_decoder_inst;
    VerilatedScope __Vscope_toplevel__mips_core__datapath_inst;
    VerilatedScope __Vscope_toplevel__mips_core__datapath_inst__alu;
    VerilatedScope __Vscope_toplevel__mips_core__datapath_inst__alumux;
    VerilatedScope __Vscope_toplevel__mips_core__datapath_inst__branchmux;
    VerilatedScope __Vscope_toplevel__mips_core__datapath_inst__jumpls2_inst;
    VerilatedScope __Vscope_toplevel__mips_core__datapath_inst__jumpmux;
    VerilatedScope __Vscope_toplevel__mips_core__datapath_inst__pc;
    VerilatedScope __Vscope_toplevel__mips_core__datapath_inst__pcbranch;
    VerilatedScope __Vscope_toplevel__mips_core__datapath_inst__pcplus4_inst;
    VerilatedScope __Vscope_toplevel__mips_core__datapath_inst__resultmux;
    VerilatedScope __Vscope_toplevel__mips_core__datapath_inst__rf;
    VerilatedScope __Vscope_toplevel__mips_core__datapath_inst__se;
    VerilatedScope __Vscope_toplevel__mips_core__datapath_inst__signextls2;
    VerilatedScope __Vscope_toplevel__mips_core__datapath_inst__wregmux;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
