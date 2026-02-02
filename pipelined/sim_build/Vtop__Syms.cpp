// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_adder);
    __Vhier.remove(0, &__Vscope_aludec);
    __Vhier.remove(0, &__Vscope_alup);
    __Vhier.remove(0, &__Vscope_dmem);
    __Vhier.remove(0, &__Vscope_eqcomp);
    __Vhier.remove(0, &__Vscope_extend);
    __Vhier.remove(0, &__Vscope_flopenr);
    __Vhier.remove(0, &__Vscope_flopenrc);
    __Vhier.remove(0, &__Vscope_flopr);
    __Vhier.remove(0, &__Vscope_floprc);
    __Vhier.remove(0, &__Vscope_imem);
    __Vhier.remove(0, &__Vscope_ls2);
    __Vhier.remove(0, &__Vscope_maindec);
    __Vhier.remove(0, &__Vscope_mux2);
    __Vhier.remove(0, &__Vscope_mux3);
    __Vhier.remove(0, &__Vscope_mux4);
    __Vhier.remove(0, &__Vscope_regfilep);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(59);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_adder.configure(this, name(), "adder", "adder", "adder", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_aludec.configure(this, name(), "aludec", "aludec", "aludec", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_alup.configure(this, name(), "alup", "alup", "alup", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_dmem.configure(this, name(), "dmem", "dmem", "dmem", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_eqcomp.configure(this, name(), "eqcomp", "eqcomp", "eqcomp", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_extend.configure(this, name(), "extend", "extend", "extend", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_flopenr.configure(this, name(), "flopenr", "flopenr", "flopenr", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_flopenrc.configure(this, name(), "flopenrc", "flopenrc", "flopenrc", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_flopr.configure(this, name(), "flopr", "flopr", "flopr", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_floprc.configure(this, name(), "floprc", "floprc", "floprc", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_imem.configure(this, name(), "imem", "imem", "imem", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_ls2.configure(this, name(), "ls2", "ls2", "ls2", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_maindec.configure(this, name(), "maindec", "maindec", "maindec", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_mux2.configure(this, name(), "mux2", "mux2", "mux2", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_mux3.configure(this, name(), "mux3", "mux3", "mux3", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_mux4.configure(this, name(), "mux4", "mux4", "mux4", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_regfilep.configure(this, name(), "regfilep", "regfilep", "regfilep", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_adder);
    __Vhier.add(0, &__Vscope_aludec);
    __Vhier.add(0, &__Vscope_alup);
    __Vhier.add(0, &__Vscope_dmem);
    __Vhier.add(0, &__Vscope_eqcomp);
    __Vhier.add(0, &__Vscope_extend);
    __Vhier.add(0, &__Vscope_flopenr);
    __Vhier.add(0, &__Vscope_flopenrc);
    __Vhier.add(0, &__Vscope_flopr);
    __Vhier.add(0, &__Vscope_floprc);
    __Vhier.add(0, &__Vscope_imem);
    __Vhier.add(0, &__Vscope_ls2);
    __Vhier.add(0, &__Vscope_maindec);
    __Vhier.add(0, &__Vscope_mux2);
    __Vhier.add(0, &__Vscope_mux3);
    __Vhier.add(0, &__Vscope_mux4);
    __Vhier.add(0, &__Vscope_regfilep);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"__pinNumber10", &(TOP.__pinNumber10), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\adder.a ", &(TOP.adder__02Ea), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\adder.b ", &(TOP.adder__02Eb), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\adder.y ", &(TOP.adder__02Ey), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"alucontrol", &(TOP.alucontrol), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\aludec.aluop ", &(TOP.aludec__02Ealuop), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\alup.a ", &(TOP.alup__02Ea), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\alup.b ", &(TOP.alup__02Eb), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\alup.y ", &(TOP.alup__02Ey), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"alusrc", &(TOP.alusrc), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"branch", &(TOP.branch), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\dmem.a ", &(TOP.dmem__02Ea), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\dmem.clk ", &(TOP.dmem__02Eclk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\dmem.rd ", &(TOP.dmem__02Erd), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\eqcomp.a ", &(TOP.eqcomp__02Ea), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\eqcomp.b ", &(TOP.eqcomp__02Eb), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\eqcomp.y ", &(TOP.eqcomp__02Ey), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\extend.immsrc ", &(TOP.extend__02Eimmsrc), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"f", &(TOP.f), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\flopenr.clk ", &(TOP.flopenr__02Eclk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\flopenr.d ", &(TOP.flopenr__02Ed), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\flopenr.en ", &(TOP.flopenr__02Een), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\flopenr.q ", &(TOP.flopenr__02Eq), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\flopenr.rst ", &(TOP.flopenr__02Erst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\flopenrc.clear ", &(TOP.flopenrc__02Eclear), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\flopenrc.clk ", &(TOP.flopenrc__02Eclk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\flopenrc.d ", &(TOP.flopenrc__02Ed), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\flopenrc.en ", &(TOP.flopenrc__02Een), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\flopenrc.q ", &(TOP.flopenrc__02Eq), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\flopenrc.rst ", &(TOP.flopenrc__02Erst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\flopr.clk ", &(TOP.flopr__02Eclk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\flopr.d ", &(TOP.flopr__02Ed), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\flopr.q ", &(TOP.flopr__02Eq), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\flopr.rst ", &(TOP.flopr__02Erst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\floprc.clear ", &(TOP.floprc__02Eclear), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\floprc.clk ", &(TOP.floprc__02Eclk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\floprc.d ", &(TOP.floprc__02Ed), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\floprc.q ", &(TOP.floprc__02Eq), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\floprc.rst ", &(TOP.floprc__02Erst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"funct3", &(TOP.funct3), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"functb5", &(TOP.functb5), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\imem.a ", &(TOP.imem__02Ea), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\imem.rd ", &(TOP.imem__02Erd), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"immext", &(TOP.immext), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"instr", &(TOP.instr), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,7);
        __Vscope_TOP.varInsert(__Vfinal,"jump", &(TOP.jump), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\ls2.a ", &(TOP.ls2__02Ea), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\ls2.y ", &(TOP.ls2__02Ey), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\maindec.aluop ", &(TOP.maindec__02Ealuop), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\maindec.immsrc ", &(TOP.maindec__02Eimmsrc), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"memwrite", &(TOP.memwrite), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\mux2.a ", &(TOP.mux2__02Ea), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\mux2.b ", &(TOP.mux2__02Eb), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\mux2.sel ", &(TOP.mux2__02Esel), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\mux2.y ", &(TOP.mux2__02Ey), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\mux3.a ", &(TOP.mux3__02Ea), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\mux3.b ", &(TOP.mux3__02Eb), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\mux3.c ", &(TOP.mux3__02Ec), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\mux3.sel ", &(TOP.mux3__02Esel), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\mux3.y ", &(TOP.mux3__02Ey), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\mux4.a ", &(TOP.mux4__02Ea), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\mux4.b ", &(TOP.mux4__02Eb), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\mux4.c ", &(TOP.mux4__02Ec), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\mux4.d ", &(TOP.mux4__02Ed), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\mux4.sel ", &(TOP.mux4__02Esel), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\mux4.y ", &(TOP.mux4__02Ey), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"op", &(TOP.op), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_TOP.varInsert(__Vfinal,"opb5", &(TOP.opb5), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"ra1", &(TOP.ra1), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"ra2", &(TOP.ra2), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"rd1", &(TOP.rd1), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"rd2", &(TOP.rd2), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"\\regfilep.clk ", &(TOP.regfilep__02Eclk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"regwrite", &(TOP.regwrite), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"resultsrc", &(TOP.resultsrc), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"shamt", &(TOP.shamt), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"wa3", &(TOP.wa3), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"wd", &(TOP.wd), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"wd3", &(TOP.wd3), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"we", &(TOP.we), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"we3", &(TOP.we3), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"worb", &(TOP.worb), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_adder.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.adder__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_adder.varInsert(__Vfinal,"a", &(TOP.adder__DOT__a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_adder.varInsert(__Vfinal,"b", &(TOP.adder__DOT__b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_adder.varInsert(__Vfinal,"y", &(TOP.adder__DOT__y), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_aludec.varInsert(__Vfinal,"alucontrol", &(TOP.aludec__DOT__alucontrol), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_aludec.varInsert(__Vfinal,"aluop", &(TOP.aludec__DOT__aluop), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_aludec.varInsert(__Vfinal,"funct3", &(TOP.aludec__DOT__funct3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_aludec.varInsert(__Vfinal,"functb5", &(TOP.aludec__DOT__functb5), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_aludec.varInsert(__Vfinal,"opb5", &(TOP.aludec__DOT__opb5), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_aludec.varInsert(__Vfinal,"rsub", &(TOP.aludec__DOT__rsub), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_alup.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.alup__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_alup.varInsert(__Vfinal,"a", &(TOP.alup__DOT__a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_alup.varInsert(__Vfinal,"b", &(TOP.alup__DOT__b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_alup.varInsert(__Vfinal,"f", &(TOP.alup__DOT__f), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_alup.varInsert(__Vfinal,"shamt", &(TOP.alup__DOT__shamt), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_alup.varInsert(__Vfinal,"y", &(TOP.alup__DOT__y), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_dmem.varInsert(__Vfinal,"RAM", &(TOP.dmem__DOT__RAM), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,63,0 ,31,0);
        __Vscope_dmem.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.dmem__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_dmem.varInsert(__Vfinal,"a", &(TOP.dmem__DOT__a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_dmem.varInsert(__Vfinal,"clk", &(TOP.dmem__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_dmem.varInsert(__Vfinal,"rd", &(TOP.dmem__DOT__rd), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_dmem.varInsert(__Vfinal,"wd", &(TOP.dmem__DOT__wd), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_dmem.varInsert(__Vfinal,"we", &(TOP.dmem__DOT__we), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_dmem.varInsert(__Vfinal,"worb", &(TOP.dmem__DOT__worb), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_eqcomp.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.eqcomp__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_eqcomp.varInsert(__Vfinal,"a", &(TOP.eqcomp__DOT__a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_eqcomp.varInsert(__Vfinal,"b", &(TOP.eqcomp__DOT__b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_eqcomp.varInsert(__Vfinal,"y", &(TOP.eqcomp__DOT__y), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_extend.varInsert(__Vfinal,"OUTWIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.extend__DOT__OUTWIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_extend.varInsert(__Vfinal,"immext", &(TOP.extend__DOT__immext), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_extend.varInsert(__Vfinal,"immsrc", &(TOP.extend__DOT__immsrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_extend.varInsert(__Vfinal,"instr", &(TOP.extend__DOT__instr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,7);
        __Vscope_flopenr.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.flopenr__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_flopenr.varInsert(__Vfinal,"clk", &(TOP.flopenr__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_flopenr.varInsert(__Vfinal,"d", &(TOP.flopenr__DOT__d), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_flopenr.varInsert(__Vfinal,"en", &(TOP.flopenr__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_flopenr.varInsert(__Vfinal,"q", &(TOP.flopenr__DOT__q), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_flopenr.varInsert(__Vfinal,"rst", &(TOP.flopenr__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_flopenrc.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.flopenrc__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_flopenrc.varInsert(__Vfinal,"clear", &(TOP.flopenrc__DOT__clear), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_flopenrc.varInsert(__Vfinal,"clk", &(TOP.flopenrc__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_flopenrc.varInsert(__Vfinal,"d", &(TOP.flopenrc__DOT__d), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_flopenrc.varInsert(__Vfinal,"en", &(TOP.flopenrc__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_flopenrc.varInsert(__Vfinal,"q", &(TOP.flopenrc__DOT__q), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_flopenrc.varInsert(__Vfinal,"rst", &(TOP.flopenrc__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_flopr.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.flopr__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_flopr.varInsert(__Vfinal,"clk", &(TOP.flopr__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_flopr.varInsert(__Vfinal,"d", &(TOP.flopr__DOT__d), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_flopr.varInsert(__Vfinal,"q", &(TOP.flopr__DOT__q), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_flopr.varInsert(__Vfinal,"rst", &(TOP.flopr__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_floprc.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.floprc__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_floprc.varInsert(__Vfinal,"clear", &(TOP.floprc__DOT__clear), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_floprc.varInsert(__Vfinal,"clk", &(TOP.floprc__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_floprc.varInsert(__Vfinal,"d", &(TOP.floprc__DOT__d), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_floprc.varInsert(__Vfinal,"q", &(TOP.floprc__DOT__q), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_floprc.varInsert(__Vfinal,"rst", &(TOP.floprc__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_imem.varInsert(__Vfinal,"RAM", &(TOP.imem__DOT__RAM), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,63,0 ,31,0);
        __Vscope_imem.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.imem__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_imem.varInsert(__Vfinal,"a", &(TOP.imem__DOT__a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_imem.varInsert(__Vfinal,"rd", &(TOP.imem__DOT__rd), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ls2.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.ls2__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ls2.varInsert(__Vfinal,"a", &(TOP.ls2__DOT__a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ls2.varInsert(__Vfinal,"y", &(TOP.ls2__DOT__y), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_maindec.varInsert(__Vfinal,"__pinNumber10", &(TOP.maindec__DOT____pinNumber10), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_maindec.varInsert(__Vfinal,"aluop", &(TOP.maindec__DOT__aluop), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_maindec.varInsert(__Vfinal,"alusrc", &(TOP.maindec__DOT__alusrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_maindec.varInsert(__Vfinal,"branch", &(TOP.maindec__DOT__branch), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_maindec.varInsert(__Vfinal,"controlsig", &(TOP.maindec__DOT__controlsig), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,10,0);
        __Vscope_maindec.varInsert(__Vfinal,"immsrc", &(TOP.maindec__DOT__immsrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_maindec.varInsert(__Vfinal,"jump", &(TOP.maindec__DOT__jump), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_maindec.varInsert(__Vfinal,"memwrite", &(TOP.maindec__DOT__memwrite), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_maindec.varInsert(__Vfinal,"op", &(TOP.maindec__DOT__op), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_maindec.varInsert(__Vfinal,"regwrite", &(TOP.maindec__DOT__regwrite), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_maindec.varInsert(__Vfinal,"resultsrc", &(TOP.maindec__DOT__resultsrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_mux2.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.mux2__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mux2.varInsert(__Vfinal,"a", &(TOP.mux2__DOT__a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mux2.varInsert(__Vfinal,"b", &(TOP.mux2__DOT__b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mux2.varInsert(__Vfinal,"sel", &(TOP.mux2__DOT__sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_mux2.varInsert(__Vfinal,"y", &(TOP.mux2__DOT__y), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mux3.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.mux3__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mux3.varInsert(__Vfinal,"a", &(TOP.mux3__DOT__a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mux3.varInsert(__Vfinal,"b", &(TOP.mux3__DOT__b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mux3.varInsert(__Vfinal,"c", &(TOP.mux3__DOT__c), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mux3.varInsert(__Vfinal,"sel", &(TOP.mux3__DOT__sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_mux3.varInsert(__Vfinal,"y", &(TOP.mux3__DOT__y), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mux4.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.mux4__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mux4.varInsert(__Vfinal,"a", &(TOP.mux4__DOT__a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mux4.varInsert(__Vfinal,"b", &(TOP.mux4__DOT__b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mux4.varInsert(__Vfinal,"c", &(TOP.mux4__DOT__c), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mux4.varInsert(__Vfinal,"d", &(TOP.mux4__DOT__d), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_mux4.varInsert(__Vfinal,"sel", &(TOP.mux4__DOT__sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_mux4.varInsert(__Vfinal,"y", &(TOP.mux4__DOT__y), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_regfilep.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.regfilep__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_regfilep.varInsert(__Vfinal,"clk", &(TOP.regfilep__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_regfilep.varInsert(__Vfinal,"ra1", &(TOP.regfilep__DOT__ra1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_regfilep.varInsert(__Vfinal,"ra2", &(TOP.regfilep__DOT__ra2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_regfilep.varInsert(__Vfinal,"rd1", &(TOP.regfilep__DOT__rd1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_regfilep.varInsert(__Vfinal,"rd2", &(TOP.regfilep__DOT__rd2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_regfilep.varInsert(__Vfinal,"rf", &(TOP.regfilep__DOT__rf), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,31,0 ,31,0);
        __Vscope_regfilep.varInsert(__Vfinal,"wa3", &(TOP.regfilep__DOT__wa3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_regfilep.varInsert(__Vfinal,"wd3", &(TOP.regfilep__DOT__wd3), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_regfilep.varInsert(__Vfinal,"we3", &(TOP.regfilep__DOT__we3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
    }
}
