// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr IData/*31:0*/ Vtop___024root::top__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__pcmux__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__pc__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__adderF__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__regD1__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__regD2__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__regD3__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__rf__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__ext__DOT__OUTWIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__regE1__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__regE2__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__regE3__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__regE4__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__regE5__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__regE6__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__regE7__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__regE8__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__fmuxa__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__fmuxb__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__alumux__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__adderE__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__alu__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__regM1__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__regM2__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__regM3__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__regM4__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__regW1__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__regW2__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__regW3__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__regW4__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__dp__DOT__resultmux__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__cu__DOT__regE__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__cu__DOT__regM__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__riscv__DOT__cu__DOT__regW__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__imem__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__dmem__DOT__WIDTH;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
}
