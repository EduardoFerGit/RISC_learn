import cocotb
from cocotb.triggers import Timer
from cocotb.clock import Clock

@cocotb.test()
async def toplevel_test(dut):
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())

    dut.rst.value = 1
    await Timer(10,unit="ns")
    dut.rst.value = 0
    dut._log.info("RESET RELEASE. starting execution....")

    await Timer(500,unit="ns")
