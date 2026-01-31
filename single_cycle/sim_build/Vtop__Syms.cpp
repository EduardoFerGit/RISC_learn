// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_toplevel);
    __Vhier.remove(&__Vscope_toplevel, &__Vscope_toplevel__dmem);
    __Vhier.remove(&__Vscope_toplevel, &__Vscope_toplevel__imem);
    __Vhier.remove(&__Vscope_toplevel, &__Vscope_toplevel__mips_core);
    __Vhier.remove(&__Vscope_toplevel__mips_core, &__Vscope_toplevel__mips_core__control_unit_inst);
    __Vhier.remove(&__Vscope_toplevel__mips_core, &__Vscope_toplevel__mips_core__datapath_inst);
    __Vhier.remove(&__Vscope_toplevel__mips_core__control_unit_inst, &__Vscope_toplevel__mips_core__control_unit_inst__alu_decoder_inst);
    __Vhier.remove(&__Vscope_toplevel__mips_core__control_unit_inst, &__Vscope_toplevel__mips_core__control_unit_inst__main_decoder_inst);
    __Vhier.remove(&__Vscope_toplevel__mips_core__datapath_inst, &__Vscope_toplevel__mips_core__datapath_inst__alu);
    __Vhier.remove(&__Vscope_toplevel__mips_core__datapath_inst, &__Vscope_toplevel__mips_core__datapath_inst__alumux);
    __Vhier.remove(&__Vscope_toplevel__mips_core__datapath_inst, &__Vscope_toplevel__mips_core__datapath_inst__branchmux);
    __Vhier.remove(&__Vscope_toplevel__mips_core__datapath_inst, &__Vscope_toplevel__mips_core__datapath_inst__jumpls2_inst);
    __Vhier.remove(&__Vscope_toplevel__mips_core__datapath_inst, &__Vscope_toplevel__mips_core__datapath_inst__jumpmux);
    __Vhier.remove(&__Vscope_toplevel__mips_core__datapath_inst, &__Vscope_toplevel__mips_core__datapath_inst__pc);
    __Vhier.remove(&__Vscope_toplevel__mips_core__datapath_inst, &__Vscope_toplevel__mips_core__datapath_inst__pcbranch);
    __Vhier.remove(&__Vscope_toplevel__mips_core__datapath_inst, &__Vscope_toplevel__mips_core__datapath_inst__pcplus4_inst);
    __Vhier.remove(&__Vscope_toplevel__mips_core__datapath_inst, &__Vscope_toplevel__mips_core__datapath_inst__resultmux);
    __Vhier.remove(&__Vscope_toplevel__mips_core__datapath_inst, &__Vscope_toplevel__mips_core__datapath_inst__rf);
    __Vhier.remove(&__Vscope_toplevel__mips_core__datapath_inst, &__Vscope_toplevel__mips_core__datapath_inst__se);
    __Vhier.remove(&__Vscope_toplevel__mips_core__datapath_inst, &__Vscope_toplevel__mips_core__datapath_inst__signextls2);
    __Vhier.remove(&__Vscope_toplevel__mips_core__datapath_inst, &__Vscope_toplevel__mips_core__datapath_inst__wregmux);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(115);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_toplevel.configure(this, name(), "toplevel", "toplevel", "toplevel", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_toplevel__dmem.configure(this, name(), "toplevel.dmem", "dmem", "data_mem", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_toplevel__imem.configure(this, name(), "toplevel.imem", "imem", "instruction_mem", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_toplevel__mips_core.configure(this, name(), "toplevel.mips_core", "mips_core", "mips_core", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_toplevel__mips_core__control_unit_inst.configure(this, name(), "toplevel.mips_core.control_unit_inst", "control_unit_inst", "control_unit", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_toplevel__mips_core__control_unit_inst__alu_decoder_inst.configure(this, name(), "toplevel.mips_core.control_unit_inst.alu_decoder_inst", "alu_decoder_inst", "alu_decoder", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_toplevel__mips_core__control_unit_inst__main_decoder_inst.configure(this, name(), "toplevel.mips_core.control_unit_inst.main_decoder_inst", "main_decoder_inst", "main_decoder", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_toplevel__mips_core__datapath_inst.configure(this, name(), "toplevel.mips_core.datapath_inst", "datapath_inst", "datapath", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_toplevel__mips_core__datapath_inst__alu.configure(this, name(), "toplevel.mips_core.datapath_inst.alu", "alu", "alu", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_toplevel__mips_core__datapath_inst__alumux.configure(this, name(), "toplevel.mips_core.datapath_inst.alumux", "alumux", "mux2_1", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_toplevel__mips_core__datapath_inst__branchmux.configure(this, name(), "toplevel.mips_core.datapath_inst.branchmux", "branchmux", "mux2_1", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_toplevel__mips_core__datapath_inst__jumpls2_inst.configure(this, name(), "toplevel.mips_core.datapath_inst.jumpls2_inst", "jumpls2_inst", "ls2", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_toplevel__mips_core__datapath_inst__jumpmux.configure(this, name(), "toplevel.mips_core.datapath_inst.jumpmux", "jumpmux", "mux2_1", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_toplevel__mips_core__datapath_inst__pc.configure(this, name(), "toplevel.mips_core.datapath_inst.pc", "pc", "dflopr", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_toplevel__mips_core__datapath_inst__pcbranch.configure(this, name(), "toplevel.mips_core.datapath_inst.pcbranch", "pcbranch", "adder", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_toplevel__mips_core__datapath_inst__pcplus4_inst.configure(this, name(), "toplevel.mips_core.datapath_inst.pcplus4_inst", "pcplus4_inst", "adder", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_toplevel__mips_core__datapath_inst__resultmux.configure(this, name(), "toplevel.mips_core.datapath_inst.resultmux", "resultmux", "mux2_1", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_toplevel__mips_core__datapath_inst__rf.configure(this, name(), "toplevel.mips_core.datapath_inst.rf", "rf", "regfile", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_toplevel__mips_core__datapath_inst__se.configure(this, name(), "toplevel.mips_core.datapath_inst.se", "se", "signext", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_toplevel__mips_core__datapath_inst__signextls2.configure(this, name(), "toplevel.mips_core.datapath_inst.signextls2", "signextls2", "ls2", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_toplevel__mips_core__datapath_inst__wregmux.configure(this, name(), "toplevel.mips_core.datapath_inst.wregmux", "wregmux", "mux2_1", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_toplevel);
    __Vhier.add(&__Vscope_toplevel, &__Vscope_toplevel__dmem);
    __Vhier.add(&__Vscope_toplevel, &__Vscope_toplevel__imem);
    __Vhier.add(&__Vscope_toplevel, &__Vscope_toplevel__mips_core);
    __Vhier.add(&__Vscope_toplevel__mips_core, &__Vscope_toplevel__mips_core__control_unit_inst);
    __Vhier.add(&__Vscope_toplevel__mips_core, &__Vscope_toplevel__mips_core__datapath_inst);
    __Vhier.add(&__Vscope_toplevel__mips_core__control_unit_inst, &__Vscope_toplevel__mips_core__control_unit_inst__alu_decoder_inst);
    __Vhier.add(&__Vscope_toplevel__mips_core__control_unit_inst, &__Vscope_toplevel__mips_core__control_unit_inst__main_decoder_inst);
    __Vhier.add(&__Vscope_toplevel__mips_core__datapath_inst, &__Vscope_toplevel__mips_core__datapath_inst__alu);
    __Vhier.add(&__Vscope_toplevel__mips_core__datapath_inst, &__Vscope_toplevel__mips_core__datapath_inst__alumux);
    __Vhier.add(&__Vscope_toplevel__mips_core__datapath_inst, &__Vscope_toplevel__mips_core__datapath_inst__branchmux);
    __Vhier.add(&__Vscope_toplevel__mips_core__datapath_inst, &__Vscope_toplevel__mips_core__datapath_inst__jumpls2_inst);
    __Vhier.add(&__Vscope_toplevel__mips_core__datapath_inst, &__Vscope_toplevel__mips_core__datapath_inst__jumpmux);
    __Vhier.add(&__Vscope_toplevel__mips_core__datapath_inst, &__Vscope_toplevel__mips_core__datapath_inst__pc);
    __Vhier.add(&__Vscope_toplevel__mips_core__datapath_inst, &__Vscope_toplevel__mips_core__datapath_inst__pcbranch);
    __Vhier.add(&__Vscope_toplevel__mips_core__datapath_inst, &__Vscope_toplevel__mips_core__datapath_inst__pcplus4_inst);
    __Vhier.add(&__Vscope_toplevel__mips_core__datapath_inst, &__Vscope_toplevel__mips_core__datapath_inst__resultmux);
    __Vhier.add(&__Vscope_toplevel__mips_core__datapath_inst, &__Vscope_toplevel__mips_core__datapath_inst__rf);
    __Vhier.add(&__Vscope_toplevel__mips_core__datapath_inst, &__Vscope_toplevel__mips_core__datapath_inst__se);
    __Vhier.add(&__Vscope_toplevel__mips_core__datapath_inst, &__Vscope_toplevel__mips_core__datapath_inst__signextls2);
    __Vhier.add(&__Vscope_toplevel__mips_core__datapath_inst, &__Vscope_toplevel__mips_core__datapath_inst__wregmux);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"dataaddr", &(TOP.dataaddr), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"memwrite", &(TOP.memwrite), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst", &(TOP.rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"writedata", &(TOP.writedata), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel.varInsert(__Vfinal,"PCWIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.toplevel__DOT__PCWIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.toplevel__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel.varInsert(__Vfinal,"clk", &(TOP.toplevel__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel.varInsert(__Vfinal,"currentpc", &(TOP.toplevel__DOT__currentpc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_toplevel.varInsert(__Vfinal,"dataaddr", &(TOP.toplevel__DOT__dataaddr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel.varInsert(__Vfinal,"datamemout", &(TOP.toplevel__DOT__datamemout), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel.varInsert(__Vfinal,"instruction", &(TOP.toplevel__DOT__instruction), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel.varInsert(__Vfinal,"memwrite", &(TOP.toplevel__DOT__memwrite), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel.varInsert(__Vfinal,"rst", &(TOP.toplevel__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel.varInsert(__Vfinal,"writedata", &(TOP.toplevel__DOT__writedata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__dmem.varInsert(__Vfinal,"RAM", &(TOP.toplevel__DOT__dmem__DOT__RAM), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,63,0 ,31,0);
        __Vscope_toplevel__dmem.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.toplevel__DOT__dmem__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__dmem.varInsert(__Vfinal,"a", &(TOP.toplevel__DOT__dmem__DOT__a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__dmem.varInsert(__Vfinal,"clk", &(TOP.toplevel__DOT__dmem__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__dmem.varInsert(__Vfinal,"rd", &(TOP.toplevel__DOT__dmem__DOT__rd), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__dmem.varInsert(__Vfinal,"wd", &(TOP.toplevel__DOT__dmem__DOT__wd), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__dmem.varInsert(__Vfinal,"we", &(TOP.toplevel__DOT__dmem__DOT__we), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__imem.varInsert(__Vfinal,"RAM", &(TOP.toplevel__DOT__imem__DOT__RAM), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,63,0 ,31,0);
        __Vscope_toplevel__imem.varInsert(__Vfinal,"a", &(TOP.toplevel__DOT__imem__DOT__a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,5,0);
        __Vscope_toplevel__imem.varInsert(__Vfinal,"rd", &(TOP.toplevel__DOT__imem__DOT__rd), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core.varInsert(__Vfinal,"PCWIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.toplevel__DOT__mips_core__DOT__PCWIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.toplevel__DOT__mips_core__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core.varInsert(__Vfinal,"alucontrol", &(TOP.toplevel__DOT__mips_core__DOT__alucontrol), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_toplevel__mips_core.varInsert(__Vfinal,"aluresult", &(TOP.toplevel__DOT__mips_core__DOT__aluresult), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core.varInsert(__Vfinal,"alusrc", &(TOP.toplevel__DOT__mips_core__DOT__alusrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core.varInsert(__Vfinal,"clk", &(TOP.toplevel__DOT__mips_core__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core.varInsert(__Vfinal,"currentpc", &(TOP.toplevel__DOT__mips_core__DOT__currentpc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_toplevel__mips_core.varInsert(__Vfinal,"datamemout", &(TOP.toplevel__DOT__mips_core__DOT__datamemout), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core.varInsert(__Vfinal,"funct", &(TOP.toplevel__DOT__mips_core__DOT__funct), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,5,0);
        __Vscope_toplevel__mips_core.varInsert(__Vfinal,"instruction", &(TOP.toplevel__DOT__mips_core__DOT__instruction), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core.varInsert(__Vfinal,"jump", &(TOP.toplevel__DOT__mips_core__DOT__jump), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core.varInsert(__Vfinal,"memtoreg", &(TOP.toplevel__DOT__mips_core__DOT__memtoreg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core.varInsert(__Vfinal,"memwrite", &(TOP.toplevel__DOT__mips_core__DOT__memwrite), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core.varInsert(__Vfinal,"op", &(TOP.toplevel__DOT__mips_core__DOT__op), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,5,0);
        __Vscope_toplevel__mips_core.varInsert(__Vfinal,"pcsrc", &(TOP.toplevel__DOT__mips_core__DOT__pcsrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core.varInsert(__Vfinal,"regdst", &(TOP.toplevel__DOT__mips_core__DOT__regdst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core.varInsert(__Vfinal,"regwrite", &(TOP.toplevel__DOT__mips_core__DOT__regwrite), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core.varInsert(__Vfinal,"rst", &(TOP.toplevel__DOT__mips_core__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core.varInsert(__Vfinal,"writedata", &(TOP.toplevel__DOT__mips_core__DOT__writedata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core.varInsert(__Vfinal,"zero", &(TOP.toplevel__DOT__mips_core__DOT__zero), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__control_unit_inst.varInsert(__Vfinal,"alucontrol", &(TOP.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alucontrol), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_toplevel__mips_core__control_unit_inst.varInsert(__Vfinal,"aluop", &(TOP.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__aluop), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_toplevel__mips_core__control_unit_inst.varInsert(__Vfinal,"alusrc", &(TOP.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alusrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__control_unit_inst.varInsert(__Vfinal,"branch", &(TOP.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__branch), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__control_unit_inst.varInsert(__Vfinal,"funct", &(TOP.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__funct), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,5,0);
        __Vscope_toplevel__mips_core__control_unit_inst.varInsert(__Vfinal,"jump", &(TOP.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__jump), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__control_unit_inst.varInsert(__Vfinal,"memtoreg", &(TOP.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__memtoreg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__control_unit_inst.varInsert(__Vfinal,"memwrite", &(TOP.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__memwrite), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__control_unit_inst.varInsert(__Vfinal,"op", &(TOP.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__op), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,5,0);
        __Vscope_toplevel__mips_core__control_unit_inst.varInsert(__Vfinal,"pcsrc", &(TOP.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__pcsrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__control_unit_inst.varInsert(__Vfinal,"regdst", &(TOP.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__regdst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__control_unit_inst.varInsert(__Vfinal,"regwrite", &(TOP.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__regwrite), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__control_unit_inst.varInsert(__Vfinal,"zero", &(TOP.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__zero), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__control_unit_inst__alu_decoder_inst.varInsert(__Vfinal,"alucontrol", &(TOP.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alu_decoder_inst__DOT__alucontrol), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_toplevel__mips_core__control_unit_inst__alu_decoder_inst.varInsert(__Vfinal,"aluop", &(TOP.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alu_decoder_inst__DOT__aluop), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_toplevel__mips_core__control_unit_inst__alu_decoder_inst.varInsert(__Vfinal,"funct", &(TOP.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__alu_decoder_inst__DOT__funct), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,5,0);
        __Vscope_toplevel__mips_core__control_unit_inst__main_decoder_inst.varInsert(__Vfinal,"aluop", &(TOP.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__aluop), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_toplevel__mips_core__control_unit_inst__main_decoder_inst.varInsert(__Vfinal,"aluscr", &(TOP.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__aluscr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__control_unit_inst__main_decoder_inst.varInsert(__Vfinal,"branch", &(TOP.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__branch), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__control_unit_inst__main_decoder_inst.varInsert(__Vfinal,"controlsig", &(TOP.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__controlsig), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,8,0);
        __Vscope_toplevel__mips_core__control_unit_inst__main_decoder_inst.varInsert(__Vfinal,"jump", &(TOP.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__jump), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__control_unit_inst__main_decoder_inst.varInsert(__Vfinal,"memtoreg", &(TOP.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__memtoreg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__control_unit_inst__main_decoder_inst.varInsert(__Vfinal,"memwrite", &(TOP.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__memwrite), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__control_unit_inst__main_decoder_inst.varInsert(__Vfinal,"op", &(TOP.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__op), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,5,0);
        __Vscope_toplevel__mips_core__control_unit_inst__main_decoder_inst.varInsert(__Vfinal,"regdst", &(TOP.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__regdst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__control_unit_inst__main_decoder_inst.varInsert(__Vfinal,"regwrite", &(TOP.toplevel__DOT__mips_core__DOT__control_unit_inst__DOT__main_decoder_inst__DOT__regwrite), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"PCWIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__PCWIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"alucontrol", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alucontrol), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"alumuxout", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumuxout), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"aluresult", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__aluresult), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"alusrc", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alusrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"branchmuxout", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmuxout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"clk", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"currentpc", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__currentpc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"currentpc_32", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__currentpc_32), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"datamemout", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__datamemout), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"funct", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__funct), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,5,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"immext", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__immext), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"instruction", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__instruction), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"jump", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jump), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"jumpls2out", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpls2out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"jumpmuxout", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmuxout), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"ls2out", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__ls2out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"memtoreg", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__memtoreg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"memwrite", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__memwrite), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"op", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__op), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,5,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"pcbranchout", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcbranchout), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"pcjump", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcjump), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"pcplus4", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"pcsrc", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcsrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"regdst", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regdst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"regout1", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"regout2", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regout2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"regwrite", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__regwrite), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"rst", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"wa3", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wa3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"writedatareg", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__writedatareg), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst.varInsert(__Vfinal,"zero", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__zero), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__datapath_inst__alu.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__alu.varInsert(__Vfinal,"a", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__alu.varInsert(__Vfinal,"b", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__alu.varInsert(__Vfinal,"f", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__f), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_toplevel__mips_core__datapath_inst__alu.varInsert(__Vfinal,"y", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__y), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__alu.varInsert(__Vfinal,"zero", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alu__DOT__zero), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__datapath_inst__alumux.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__alumux.varInsert(__Vfinal,"a", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__alumux.varInsert(__Vfinal,"b", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__alumux.varInsert(__Vfinal,"sel", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__datapath_inst__alumux.varInsert(__Vfinal,"y", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__alumux__DOT__y), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__branchmux.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmux__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__branchmux.varInsert(__Vfinal,"a", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmux__DOT__a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_toplevel__mips_core__datapath_inst__branchmux.varInsert(__Vfinal,"b", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmux__DOT__b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_toplevel__mips_core__datapath_inst__branchmux.varInsert(__Vfinal,"sel", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmux__DOT__sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__datapath_inst__branchmux.varInsert(__Vfinal,"y", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__branchmux__DOT__y), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_toplevel__mips_core__datapath_inst__jumpls2_inst.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpls2_inst__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__jumpls2_inst.varInsert(__Vfinal,"a", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpls2_inst__DOT__a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__jumpls2_inst.varInsert(__Vfinal,"y", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpls2_inst__DOT__y), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__jumpmux.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmux__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__jumpmux.varInsert(__Vfinal,"a", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmux__DOT__a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_toplevel__mips_core__datapath_inst__jumpmux.varInsert(__Vfinal,"b", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmux__DOT__b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_toplevel__mips_core__datapath_inst__jumpmux.varInsert(__Vfinal,"sel", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmux__DOT__sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__datapath_inst__jumpmux.varInsert(__Vfinal,"y", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__jumpmux__DOT__y), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_toplevel__mips_core__datapath_inst__pc.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__pc.varInsert(__Vfinal,"clk", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__datapath_inst__pc.varInsert(__Vfinal,"d", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__d), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_toplevel__mips_core__datapath_inst__pc.varInsert(__Vfinal,"q", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__q), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_toplevel__mips_core__datapath_inst__pc.varInsert(__Vfinal,"rst", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pc__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__datapath_inst__pcbranch.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcbranch__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__pcbranch.varInsert(__Vfinal,"a", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcbranch__DOT__a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__pcbranch.varInsert(__Vfinal,"b", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcbranch__DOT__b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__pcbranch.varInsert(__Vfinal,"y", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcbranch__DOT__y), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__pcplus4_inst.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4_inst__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__pcplus4_inst.varInsert(__Vfinal,"a", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4_inst__DOT__a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__pcplus4_inst.varInsert(__Vfinal,"b", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4_inst__DOT__b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__pcplus4_inst.varInsert(__Vfinal,"y", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__pcplus4_inst__DOT__y), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__resultmux.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__resultmux__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__resultmux.varInsert(__Vfinal,"a", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__resultmux__DOT__a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__resultmux.varInsert(__Vfinal,"b", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__resultmux__DOT__b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__resultmux.varInsert(__Vfinal,"sel", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__resultmux__DOT__sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__datapath_inst__resultmux.varInsert(__Vfinal,"y", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__resultmux__DOT__y), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__rf.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__rf.varInsert(__Vfinal,"clk", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__datapath_inst__rf.varInsert(__Vfinal,"ra1", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__ra1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_toplevel__mips_core__datapath_inst__rf.varInsert(__Vfinal,"ra2", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__ra2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_toplevel__mips_core__datapath_inst__rf.varInsert(__Vfinal,"rd1", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rd1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__rf.varInsert(__Vfinal,"rd2", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rd2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__rf.varInsert(__Vfinal,"rf", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__rf), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,31,0 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__rf.varInsert(__Vfinal,"wa3", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__wa3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_toplevel__mips_core__datapath_inst__rf.varInsert(__Vfinal,"wd3", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__wd3), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__rf.varInsert(__Vfinal,"we3", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__rf__DOT__we3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__datapath_inst__se.varInsert(__Vfinal,"OUTWIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__se__DOT__OUTWIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__se.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__se__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__se.varInsert(__Vfinal,"a", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__se__DOT__a), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_toplevel__mips_core__datapath_inst__se.varInsert(__Vfinal,"y", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__se__DOT__y), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__signextls2.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__signextls2__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__signextls2.varInsert(__Vfinal,"a", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__signextls2__DOT__a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__signextls2.varInsert(__Vfinal,"y", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__signextls2__DOT__y), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__wregmux.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wregmux__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_toplevel__mips_core__datapath_inst__wregmux.varInsert(__Vfinal,"a", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wregmux__DOT__a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_toplevel__mips_core__datapath_inst__wregmux.varInsert(__Vfinal,"b", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wregmux__DOT__b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_toplevel__mips_core__datapath_inst__wregmux.varInsert(__Vfinal,"sel", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wregmux__DOT__sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_toplevel__mips_core__datapath_inst__wregmux.varInsert(__Vfinal,"y", &(TOP.toplevel__DOT__mips_core__DOT__datapath_inst__DOT__wregmux__DOT__y), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
    }
}
