// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_H_
#define VERILATED_VTOP_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vtop__Syms;
class Vtop___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtop VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtop__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&dmem__02Eclk,0,0);
    VL_IN8(&flopenrc__02Eclk,0,0);
    VL_IN8(&flopenrc__02Erst,0,0);
    VL_IN8(&flopenr__02Eclk,0,0);
    VL_IN8(&flopenr__02Erst,0,0);
    VL_IN8(&floprc__02Eclk,0,0);
    VL_IN8(&floprc__02Erst,0,0);
    VL_IN8(&flopr__02Eclk,0,0);
    VL_IN8(&flopr__02Erst,0,0);
    VL_IN8(&regfilep__02Eclk,0,0);
    VL_IN8(&opb5,0,0);
    VL_IN8(&funct3,2,0);
    VL_IN8(&functb5,0,0);
    VL_IN8(&aludec__02Ealuop,1,0);
    VL_OUT8(&alucontrol,2,0);
    VL_IN8(&f,2,0);
    VL_IN8(&shamt,4,0);
    VL_IN8(&we,0,0);
    VL_IN8(&worb,0,0);
    VL_OUT8(&eqcomp__02Ey,0,0);
    VL_IN8(&extend__02Eimmsrc,1,0);
    VL_IN8(&flopenrc__02Een,0,0);
    VL_IN8(&flopenrc__02Eclear,0,0);
    VL_IN8(&flopenrc__02Ed,7,0);
    VL_OUT8(&flopenrc__02Eq,7,0);
    VL_IN8(&flopenr__02Een,0,0);
    VL_IN8(&flopenr__02Ed,7,0);
    VL_OUT8(&flopenr__02Eq,7,0);
    VL_IN8(&floprc__02Eclear,0,0);
    VL_IN8(&floprc__02Ed,7,0);
    VL_OUT8(&floprc__02Eq,7,0);
    VL_IN8(&flopr__02Ed,7,0);
    VL_OUT8(&flopr__02Eq,7,0);
    VL_IN8(&op,6,0);
    VL_OUT8(&resultsrc,1,0);
    VL_OUT8(&regwrite,0,0);
    VL_OUT8(&memwrite,0,0);
    VL_OUT8(&jump,0,0);
    VL_OUT8(&branch,0,0);
    VL_OUT8(&alusrc,0,0);
    VL_OUT8(&maindec__02Eimmsrc,1,0);
    VL_OUT8(&maindec__02Ealuop,1,0);
    VL_IN8(&__pinNumber10,0,0);
    VL_IN8(&mux2__02Esel,0,0);
    VL_IN8(&mux3__02Esel,1,0);
    VL_IN8(&mux4__02Esel,1,0);
    VL_IN8(&we3,0,0);
    VL_IN8(&ra1,4,0);
    VL_IN8(&ra2,4,0);
    VL_IN8(&wa3,4,0);
    VL_IN(&adder__02Ea,31,0);
    VL_IN(&adder__02Eb,31,0);
    VL_OUT(&adder__02Ey,31,0);
    VL_IN(&alup__02Ea,31,0);
    VL_IN(&alup__02Eb,31,0);
    VL_OUT(&alup__02Ey,31,0);
    VL_IN(&dmem__02Ea,31,0);
    VL_IN(&wd,31,0);
    VL_OUT(&dmem__02Erd,31,0);
    VL_IN(&eqcomp__02Ea,31,0);
    VL_IN(&eqcomp__02Eb,31,0);
    VL_IN(&instr,31,7);
    VL_OUT(&immext,31,0);
    VL_IN(&imem__02Ea,31,0);
    VL_OUT(&imem__02Erd,31,0);
    VL_IN(&ls2__02Ea,31,0);
    VL_OUT(&ls2__02Ey,31,0);
    VL_IN(&mux2__02Ea,31,0);
    VL_IN(&mux2__02Eb,31,0);
    VL_OUT(&mux2__02Ey,31,0);
    VL_IN(&mux3__02Ea,31,0);
    VL_IN(&mux3__02Eb,31,0);
    VL_IN(&mux3__02Ec,31,0);
    VL_OUT(&mux3__02Ey,31,0);
    VL_IN(&mux4__02Ea,31,0);
    VL_IN(&mux4__02Eb,31,0);
    VL_IN(&mux4__02Ec,31,0);
    VL_IN(&mux4__02Ed,31,0);
    VL_OUT(&mux4__02Ey,31,0);
    VL_IN(&wd3,31,0);
    VL_OUT(&rd1,31,0);
    VL_OUT(&rd2,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtop___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtop(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtop();
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
