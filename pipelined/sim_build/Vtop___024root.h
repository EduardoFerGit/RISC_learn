// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(dmem__02Eclk,0,0);
        VL_IN8(flopenrc__02Eclk,0,0);
        VL_IN8(flopenrc__02Erst,0,0);
        VL_IN8(flopenr__02Eclk,0,0);
        VL_IN8(flopenr__02Erst,0,0);
        VL_IN8(floprc__02Eclk,0,0);
        VL_IN8(floprc__02Erst,0,0);
        VL_IN8(flopr__02Eclk,0,0);
        VL_IN8(flopr__02Erst,0,0);
        VL_IN8(regfilep__02Eclk,0,0);
        VL_IN8(opb5,0,0);
        VL_IN8(funct3,2,0);
        VL_IN8(functb5,0,0);
        VL_IN8(aludec__02Ealuop,1,0);
        VL_OUT8(alucontrol,2,0);
        VL_IN8(f,2,0);
        VL_IN8(shamt,4,0);
        VL_IN8(we,0,0);
        VL_IN8(worb,0,0);
        VL_OUT8(eqcomp__02Ey,0,0);
        VL_IN8(extend__02Eimmsrc,1,0);
        VL_IN8(flopenrc__02Een,0,0);
        VL_IN8(flopenrc__02Eclear,0,0);
        VL_IN8(flopenrc__02Ed,7,0);
        VL_OUT8(flopenrc__02Eq,7,0);
        VL_IN8(flopenr__02Een,0,0);
        VL_IN8(flopenr__02Ed,7,0);
        VL_OUT8(flopenr__02Eq,7,0);
        VL_IN8(floprc__02Eclear,0,0);
        VL_IN8(floprc__02Ed,7,0);
        VL_OUT8(floprc__02Eq,7,0);
        VL_IN8(flopr__02Ed,7,0);
        VL_OUT8(flopr__02Eq,7,0);
        VL_IN8(op,6,0);
        VL_OUT8(resultsrc,1,0);
        VL_OUT8(regwrite,0,0);
        VL_OUT8(memwrite,0,0);
        VL_OUT8(jump,0,0);
        VL_OUT8(branch,0,0);
        VL_OUT8(alusrc,0,0);
        VL_OUT8(maindec__02Eimmsrc,1,0);
        VL_OUT8(maindec__02Ealuop,1,0);
        VL_IN8(__pinNumber10,0,0);
        VL_IN8(mux2__02Esel,0,0);
        VL_IN8(mux3__02Esel,1,0);
        VL_IN8(mux4__02Esel,1,0);
        VL_IN8(we3,0,0);
        VL_IN8(ra1,4,0);
        VL_IN8(ra2,4,0);
        VL_IN8(wa3,4,0);
        CData/*0:0*/ aludec__DOT__opb5;
        CData/*2:0*/ aludec__DOT__funct3;
        CData/*0:0*/ aludec__DOT__functb5;
        CData/*1:0*/ aludec__DOT__aluop;
        CData/*2:0*/ aludec__DOT__alucontrol;
        CData/*0:0*/ aludec__DOT__rsub;
        CData/*2:0*/ alup__DOT__f;
        CData/*4:0*/ alup__DOT__shamt;
        CData/*0:0*/ dmem__DOT__clk;
        CData/*0:0*/ dmem__DOT__we;
        CData/*0:0*/ dmem__DOT__worb;
        CData/*0:0*/ eqcomp__DOT__y;
        CData/*1:0*/ extend__DOT__immsrc;
        CData/*0:0*/ flopenrc__DOT__clk;
    };
    struct {
        CData/*0:0*/ flopenrc__DOT__rst;
        CData/*0:0*/ flopenrc__DOT__en;
        CData/*0:0*/ flopenrc__DOT__clear;
        CData/*7:0*/ flopenrc__DOT__d;
        CData/*7:0*/ flopenrc__DOT__q;
        CData/*0:0*/ flopenr__DOT__clk;
        CData/*0:0*/ flopenr__DOT__rst;
        CData/*0:0*/ flopenr__DOT__en;
        CData/*7:0*/ flopenr__DOT__d;
        CData/*7:0*/ flopenr__DOT__q;
        CData/*0:0*/ floprc__DOT__clk;
        CData/*0:0*/ floprc__DOT__rst;
        CData/*0:0*/ floprc__DOT__clear;
        CData/*7:0*/ floprc__DOT__d;
        CData/*7:0*/ floprc__DOT__q;
        CData/*0:0*/ flopr__DOT__clk;
        CData/*0:0*/ flopr__DOT__rst;
        CData/*7:0*/ flopr__DOT__d;
        CData/*7:0*/ flopr__DOT__q;
        CData/*6:0*/ maindec__DOT__op;
        CData/*1:0*/ maindec__DOT__resultsrc;
        CData/*0:0*/ maindec__DOT__regwrite;
        CData/*0:0*/ maindec__DOT__memwrite;
        CData/*0:0*/ maindec__DOT__jump;
        CData/*0:0*/ maindec__DOT__branch;
        CData/*0:0*/ maindec__DOT__alusrc;
        CData/*1:0*/ maindec__DOT__immsrc;
        CData/*1:0*/ maindec__DOT__aluop;
        CData/*0:0*/ maindec__DOT____pinNumber10;
        CData/*0:0*/ mux2__DOT__sel;
        CData/*1:0*/ mux3__DOT__sel;
        CData/*1:0*/ mux4__DOT__sel;
        CData/*0:0*/ regfilep__DOT__clk;
        CData/*0:0*/ regfilep__DOT__we3;
        CData/*4:0*/ regfilep__DOT__ra1;
        CData/*4:0*/ regfilep__DOT__ra2;
        CData/*4:0*/ regfilep__DOT__wa3;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*2:0*/ __Vtrigprevexpr___TOP__f__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__dmem__02Eclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__flopenrc__02Eclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__flopenrc__02Erst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__flopenr__02Eclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__flopenr__02Erst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__floprc__02Eclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__floprc__02Erst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__flopr__02Eclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__flopr__02Erst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__regfilep__02Eclk__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*10:0*/ maindec__DOT__controlsig;
        VL_IN(adder__02Ea,31,0);
        VL_IN(adder__02Eb,31,0);
        VL_OUT(adder__02Ey,31,0);
        VL_IN(alup__02Ea,31,0);
        VL_IN(alup__02Eb,31,0);
        VL_OUT(alup__02Ey,31,0);
        VL_IN(dmem__02Ea,31,0);
        VL_IN(wd,31,0);
        VL_OUT(dmem__02Erd,31,0);
        VL_IN(eqcomp__02Ea,31,0);
        VL_IN(eqcomp__02Eb,31,0);
    };
    struct {
        VL_IN(instr,31,7);
        VL_OUT(immext,31,0);
        VL_IN(imem__02Ea,31,0);
        VL_OUT(imem__02Erd,31,0);
        VL_IN(ls2__02Ea,31,0);
        VL_OUT(ls2__02Ey,31,0);
        VL_IN(mux2__02Ea,31,0);
        VL_IN(mux2__02Eb,31,0);
        VL_OUT(mux2__02Ey,31,0);
        VL_IN(mux3__02Ea,31,0);
        VL_IN(mux3__02Eb,31,0);
        VL_IN(mux3__02Ec,31,0);
        VL_OUT(mux3__02Ey,31,0);
        VL_IN(mux4__02Ea,31,0);
        VL_IN(mux4__02Eb,31,0);
        VL_IN(mux4__02Ec,31,0);
        VL_IN(mux4__02Ed,31,0);
        VL_OUT(mux4__02Ey,31,0);
        VL_IN(wd3,31,0);
        VL_OUT(rd1,31,0);
        VL_OUT(rd2,31,0);
        IData/*31:0*/ adder__DOT__a;
        IData/*31:0*/ adder__DOT__b;
        IData/*31:0*/ adder__DOT__y;
        IData/*31:0*/ alup__DOT__a;
        IData/*31:0*/ alup__DOT__b;
        IData/*31:0*/ alup__DOT__y;
        IData/*31:0*/ dmem__DOT__a;
        IData/*31:0*/ dmem__DOT__wd;
        IData/*31:0*/ dmem__DOT__rd;
        IData/*31:0*/ eqcomp__DOT__a;
        IData/*31:0*/ eqcomp__DOT__b;
        IData/*24:0*/ extend__DOT__instr;
        IData/*31:0*/ extend__DOT__immext;
        IData/*31:0*/ imem__DOT__a;
        IData/*31:0*/ imem__DOT__rd;
        IData/*31:0*/ ls2__DOT__a;
        IData/*31:0*/ ls2__DOT__y;
        IData/*31:0*/ mux2__DOT__a;
        IData/*31:0*/ mux2__DOT__b;
        IData/*31:0*/ mux2__DOT__y;
        IData/*31:0*/ mux3__DOT__a;
        IData/*31:0*/ mux3__DOT__b;
        IData/*31:0*/ mux3__DOT__c;
        IData/*31:0*/ mux3__DOT__y;
        IData/*31:0*/ mux4__DOT__a;
        IData/*31:0*/ mux4__DOT__b;
        IData/*31:0*/ mux4__DOT__c;
        IData/*31:0*/ mux4__DOT__d;
        IData/*31:0*/ mux4__DOT__y;
        IData/*31:0*/ regfilep__DOT__wd3;
        IData/*31:0*/ regfilep__DOT__rd1;
        IData/*31:0*/ regfilep__DOT__rd2;
        IData/*31:0*/ __Vtrigprevexpr___TOP__alup__02Ea__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__alup__02Eb__0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 64> dmem__DOT__RAM;
        VlUnpacked<IData/*31:0*/, 64> imem__DOT__RAM;
        VlUnpacked<IData/*31:0*/, 32> regfilep__DOT__rf;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<13> __VactTriggered;
    VlTriggerVec<13> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ adder__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ alup__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ dmem__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ eqcomp__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ extend__DOT__OUTWIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ flopenrc__DOT__WIDTH = 8U;
    static constexpr IData/*31:0*/ flopenr__DOT__WIDTH = 8U;
    static constexpr IData/*31:0*/ floprc__DOT__WIDTH = 8U;
    static constexpr IData/*31:0*/ flopr__DOT__WIDTH = 8U;
    static constexpr IData/*31:0*/ imem__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ ls2__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ mux2__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ mux3__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ mux4__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ regfilep__DOT__WIDTH = 0x00000020U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
