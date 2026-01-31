import cocotb
from cocotb.triggers import Timer
from cocotb.clock import Clock

@cocotb.test()
async def flopenr_test(dut):
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())

    dut.rst.value = 1
    await Timer(10,unit="ns")
    dut.rst.value = 0
    dut.d.value = 32 
    await Timer(10,unit="ns")
    dut.en.value = 1
    await Timer(10,unit="ns")
    dut.en.value = 0
    dut.d.value = 48
    await Timer(10,unit="ns")
    dut.en.value = 1
    await Timer(30,unit="ns")

