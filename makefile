SIM ?= verilator
TOPLEVEL_LANG ?= verilog

# 1. Include all .sv files in the src directory
#VERILOG_SOURCES += $(PWD)/rtl/mux2_1.sv

# Alternatively, use a wildcard to include all .sv files in src:
VERILOG_SOURCES += $(wildcard $(PWD)/rtl/*.sv)

# 2. Set the Top Level (the module cocotb will "talk" to)
#TOPLEVEL = mux2_1
#TOPLEVEL = adder
#TOPLEVEL = ls2
#TOPLEVEL = signext
#TOPLEVEL = regfile
#TOPLEVEL = alu
#TOPLEVEL = instruction_mem
#TOPLEVEL = data_mem
#TOPLEVEL = alu_decoder
#TOPLEVEL = main_decoder
#TOPLEVEL = control_unit
TOPLEVEL = toplevel

export PYTHONPATH := $(PWD)/tests:$(PYTHONPATH)

# 3. Set the Python test file (test_alu.py)
#MODULE = mux2_1_tb 
#MODULE = adder_tb
#MODULE = ls2_tb
#MODULE = signext_tb
#MODULE = regfile_tb
#MODULE = alu_tb
#MODULE = instruction_mem_tb
#MODULE = data_mem_tb
#MODULE = alu_decoder_tb
#MODULE = main_decoder_tb
#MODULE = control_unit_tb
MODULE = toplevel_tb

# 4. Verilator specific arguments
# -I allows Verilator to find `include "file.sv"` statements
EXTRA_ARGS += --trace --trace-structs -I$(PWD)/rtl

include $(shell cocotb-config --makefiles)/Makefile.sim