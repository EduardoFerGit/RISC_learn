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
    VerilatedScope __Vscope_top;
    VerilatedScope __Vscope_top__dmem;
    VerilatedScope __Vscope_top__imem;
    VerilatedScope __Vscope_top__riscv;
    VerilatedScope __Vscope_top__riscv__cu;
    VerilatedScope __Vscope_top__riscv__cu__ad;
    VerilatedScope __Vscope_top__riscv__cu__md;
    VerilatedScope __Vscope_top__riscv__cu__regE;
    VerilatedScope __Vscope_top__riscv__cu__regM;
    VerilatedScope __Vscope_top__riscv__cu__regW;
    VerilatedScope __Vscope_top__riscv__dp;
    VerilatedScope __Vscope_top__riscv__dp__adderE;
    VerilatedScope __Vscope_top__riscv__dp__adderF;
    VerilatedScope __Vscope_top__riscv__dp__alu;
    VerilatedScope __Vscope_top__riscv__dp__alumux;
    VerilatedScope __Vscope_top__riscv__dp__ext;
    VerilatedScope __Vscope_top__riscv__dp__fmuxa;
    VerilatedScope __Vscope_top__riscv__dp__fmuxb;
    VerilatedScope __Vscope_top__riscv__dp__pc;
    VerilatedScope __Vscope_top__riscv__dp__pcmux;
    VerilatedScope __Vscope_top__riscv__dp__regD1;
    VerilatedScope __Vscope_top__riscv__dp__regD2;
    VerilatedScope __Vscope_top__riscv__dp__regD3;
    VerilatedScope __Vscope_top__riscv__dp__regE1;
    VerilatedScope __Vscope_top__riscv__dp__regE2;
    VerilatedScope __Vscope_top__riscv__dp__regE3;
    VerilatedScope __Vscope_top__riscv__dp__regE4;
    VerilatedScope __Vscope_top__riscv__dp__regE5;
    VerilatedScope __Vscope_top__riscv__dp__regE6;
    VerilatedScope __Vscope_top__riscv__dp__regE7;
    VerilatedScope __Vscope_top__riscv__dp__regE8;
    VerilatedScope __Vscope_top__riscv__dp__regM1;
    VerilatedScope __Vscope_top__riscv__dp__regM2;
    VerilatedScope __Vscope_top__riscv__dp__regM3;
    VerilatedScope __Vscope_top__riscv__dp__regM4;
    VerilatedScope __Vscope_top__riscv__dp__regW1;
    VerilatedScope __Vscope_top__riscv__dp__regW2;
    VerilatedScope __Vscope_top__riscv__dp__regW3;
    VerilatedScope __Vscope_top__riscv__dp__regW4;
    VerilatedScope __Vscope_top__riscv__dp__resultmux;
    VerilatedScope __Vscope_top__riscv__dp__rf;
    VerilatedScope __Vscope_top__riscv__hu;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
