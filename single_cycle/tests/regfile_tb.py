import cocotb
from cocotb.triggers import Timer, FallingEdge, RisingEdge
import random
from cocotb.clock import Clock

@cocotb.test()
async def regfile_test(dut):
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())

    dut.wa3.value = 1
    dut.wd3.value = 1234
    dut.ra1.value = 1
    dut.we3.value = 1
    await Timer(5,unit="ns")
    dut.wa3.value = 0
    dut.wd3.value = 0
    dut.we3.value = 0
    await Timer(5,unit="ns")
    dut.wa3.value = 1
    dut.wd3.value = 4321
    dut.we3.value = 1
    await Timer(5,unit="ns")
    dut.we3.value = 0
    

    await Timer(50,unit="ns")
    dut._log.info("Test Done!")
    