// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr IData/*31:0*/ Vtop___024root::toplevel__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::toplevel__DOT__PCWIDTH;
constexpr IData/*31:0*/ Vtop___024root::toplevel__DOT__mips_core__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::toplevel__DOT__mips_core__DOT__PCWIDTH;
constexpr IData/*31:0*/ Vtop___024root::toplevel__DOT__mips_core__DOT__datapath_inst__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::toplevel__DOT__mips_core__DOT__datapath_inst__DOT__PCWIDTH;
constexpr IData/*31:0*/ Vtop___024root::toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4_inst__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmux__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmux__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wregmux__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::toplevel__DOT__mips_core__DOT__datapath_inst__DOT__se__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::toplevel__DOT__mips_core__DOT__datapath_inst__DOT__se__DOT__OUTWIDTH;
constexpr IData/*31:0*/ Vtop___024root::toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::toplevel__DOT__mips_core__DOT__datapath_inst__DOT__signextls2__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcbranch__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpls2_inst__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::toplevel__DOT__mips_core__DOT__datapath_inst__DOT__resultmux__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::toplevel__DOT__dmem__DOT__WIDTH;


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
