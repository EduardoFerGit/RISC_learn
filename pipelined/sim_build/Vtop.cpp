// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtop::Vtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop__Syms(contextp(), _vcname__, this)}
    , dmem__02Eclk{vlSymsp->TOP.dmem__02Eclk}
    , flopenrc__02Eclk{vlSymsp->TOP.flopenrc__02Eclk}
    , flopenrc__02Erst{vlSymsp->TOP.flopenrc__02Erst}
    , flopenr__02Eclk{vlSymsp->TOP.flopenr__02Eclk}
    , flopenr__02Erst{vlSymsp->TOP.flopenr__02Erst}
    , floprc__02Eclk{vlSymsp->TOP.floprc__02Eclk}
    , floprc__02Erst{vlSymsp->TOP.floprc__02Erst}
    , flopr__02Eclk{vlSymsp->TOP.flopr__02Eclk}
    , flopr__02Erst{vlSymsp->TOP.flopr__02Erst}
    , regfilep__02Eclk{vlSymsp->TOP.regfilep__02Eclk}
    , opb5{vlSymsp->TOP.opb5}
    , funct3{vlSymsp->TOP.funct3}
    , functb5{vlSymsp->TOP.functb5}
    , aludec__02Ealuop{vlSymsp->TOP.aludec__02Ealuop}
    , alucontrol{vlSymsp->TOP.alucontrol}
    , f{vlSymsp->TOP.f}
    , shamt{vlSymsp->TOP.shamt}
    , we{vlSymsp->TOP.we}
    , worb{vlSymsp->TOP.worb}
    , eqcomp__02Ey{vlSymsp->TOP.eqcomp__02Ey}
    , extend__02Eimmsrc{vlSymsp->TOP.extend__02Eimmsrc}
    , flopenrc__02Een{vlSymsp->TOP.flopenrc__02Een}
    , flopenrc__02Eclear{vlSymsp->TOP.flopenrc__02Eclear}
    , flopenrc__02Ed{vlSymsp->TOP.flopenrc__02Ed}
    , flopenrc__02Eq{vlSymsp->TOP.flopenrc__02Eq}
    , flopenr__02Een{vlSymsp->TOP.flopenr__02Een}
    , flopenr__02Ed{vlSymsp->TOP.flopenr__02Ed}
    , flopenr__02Eq{vlSymsp->TOP.flopenr__02Eq}
    , floprc__02Eclear{vlSymsp->TOP.floprc__02Eclear}
    , floprc__02Ed{vlSymsp->TOP.floprc__02Ed}
    , floprc__02Eq{vlSymsp->TOP.floprc__02Eq}
    , flopr__02Ed{vlSymsp->TOP.flopr__02Ed}
    , flopr__02Eq{vlSymsp->TOP.flopr__02Eq}
    , op{vlSymsp->TOP.op}
    , resultsrc{vlSymsp->TOP.resultsrc}
    , regwrite{vlSymsp->TOP.regwrite}
    , memwrite{vlSymsp->TOP.memwrite}
    , jump{vlSymsp->TOP.jump}
    , branch{vlSymsp->TOP.branch}
    , alusrc{vlSymsp->TOP.alusrc}
    , maindec__02Eimmsrc{vlSymsp->TOP.maindec__02Eimmsrc}
    , maindec__02Ealuop{vlSymsp->TOP.maindec__02Ealuop}
    , __pinNumber10{vlSymsp->TOP.__pinNumber10}
    , mux2__02Esel{vlSymsp->TOP.mux2__02Esel}
    , mux3__02Esel{vlSymsp->TOP.mux3__02Esel}
    , mux4__02Esel{vlSymsp->TOP.mux4__02Esel}
    , we3{vlSymsp->TOP.we3}
    , ra1{vlSymsp->TOP.ra1}
    , ra2{vlSymsp->TOP.ra2}
    , wa3{vlSymsp->TOP.wa3}
    , adder__02Ea{vlSymsp->TOP.adder__02Ea}
    , adder__02Eb{vlSymsp->TOP.adder__02Eb}
    , adder__02Ey{vlSymsp->TOP.adder__02Ey}
    , alup__02Ea{vlSymsp->TOP.alup__02Ea}
    , alup__02Eb{vlSymsp->TOP.alup__02Eb}
    , alup__02Ey{vlSymsp->TOP.alup__02Ey}
    , dmem__02Ea{vlSymsp->TOP.dmem__02Ea}
    , wd{vlSymsp->TOP.wd}
    , dmem__02Erd{vlSymsp->TOP.dmem__02Erd}
    , eqcomp__02Ea{vlSymsp->TOP.eqcomp__02Ea}
    , eqcomp__02Eb{vlSymsp->TOP.eqcomp__02Eb}
    , instr{vlSymsp->TOP.instr}
    , immext{vlSymsp->TOP.immext}
    , imem__02Ea{vlSymsp->TOP.imem__02Ea}
    , imem__02Erd{vlSymsp->TOP.imem__02Erd}
    , ls2__02Ea{vlSymsp->TOP.ls2__02Ea}
    , ls2__02Ey{vlSymsp->TOP.ls2__02Ey}
    , mux2__02Ea{vlSymsp->TOP.mux2__02Ea}
    , mux2__02Eb{vlSymsp->TOP.mux2__02Eb}
    , mux2__02Ey{vlSymsp->TOP.mux2__02Ey}
    , mux3__02Ea{vlSymsp->TOP.mux3__02Ea}
    , mux3__02Eb{vlSymsp->TOP.mux3__02Eb}
    , mux3__02Ec{vlSymsp->TOP.mux3__02Ec}
    , mux3__02Ey{vlSymsp->TOP.mux3__02Ey}
    , mux4__02Ea{vlSymsp->TOP.mux4__02Ea}
    , mux4__02Eb{vlSymsp->TOP.mux4__02Eb}
    , mux4__02Ec{vlSymsp->TOP.mux4__02Ec}
    , mux4__02Ed{vlSymsp->TOP.mux4__02Ed}
    , mux4__02Ey{vlSymsp->TOP.mux4__02Ey}
    , wd3{vlSymsp->TOP.wd3}
    , rd1{vlSymsp->TOP.rd1}
    , rd2{vlSymsp->TOP.rd2}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtop::Vtop(const char* _vcname__)
    : Vtop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop::~Vtop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_static(Vtop___024root* vlSelf);
void Vtop___024root___eval_initial(Vtop___024root* vlSelf);
void Vtop___024root___eval_settle(Vtop___024root* vlSelf);
void Vtop___024root___eval(Vtop___024root* vlSelf);

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop___024root___eval_static(&(vlSymsp->TOP));
        Vtop___024root___eval_initial(&(vlSymsp->TOP));
        Vtop___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop::eventsPending() { return false; }

uint64_t Vtop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop___024root___eval_final(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop::final() {
    Vtop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop::hierName() const { return vlSymsp->name(); }
const char* Vtop::modelName() const { return "Vtop"; }
unsigned Vtop::threads() const { return 1; }
void Vtop::prepareClone() const { contextp()->prepareClone(); }
void Vtop::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtop___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_decl_types(tracep);
    Vtop___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtop::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtop___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
