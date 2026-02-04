SIM ?= verilator
TOPLEVEL_LANG ?= verilog

# This forces a unique folder for every module you test
SIM_BUILD = sim_build/$(TOPLEVEL)

# 1. Include all .sv files in the src directory
#VERILOG_SOURCES += $(PWD)/rtl/mux2_1.sv

# Alternatively, use a wildcard to include all .sv files in src:
VERILOG_SOURCES += $(wildcard $(PWD)/rtl/*.sv)

# 2. Set the Top Level (the module cocotb will "talk" to)

#----Pipelined----
# TOPLEVEL = alup
# TOPLEVEL = flopr
# TOPLEVEL = floprc
# TOPLEVEL = flopenr
# TOPLEVEL = flopenrc
# TOPLEVEL = mux2
# TOPLEVEL = mux3
# TOPLEVEL = mux4
# TOPLEVEL = eqcomp
# TOPLEVEL = extend
# TOPLEVEL = dmem
# TOPLEVEL = align
TOPLEVEL = storealign
# TOPLEVEL = top

export PYTHONPATH := $(PWD)/tests:$(PYTHONPATH)

# 3. Set the Python test file (test_alu.py)

#----Pipelined----
# MODULE = alup_tb
# MODULE = flopr_tb
# MODULE = floprc_tb
# MODULE = flopenr_tb
# MODULE = flopenrc_tb
# MODULE = mux2_tb
# MODULE = mux3_tb
# MODULE = mux4_tb
# MODULE = eqcomp_tb
# MODULE = extend_tb
# MODULE = dmem_tb
# MODULE = align_tb
MODULE = storealign_tb
# MODULE = top_tb

# 4. Verilator specific arguments
# -I allows Verilator to find `include "file.sv"` statements
EXTRA_ARGS += --trace --trace-structs -I$(PWD)/rtl

include $(shell cocotb-config --makefiles)/Makefile.sim