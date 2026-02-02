import cocotb
from cocotb.triggers import Timer
from cocotb.clock import Clock

@cocotb.test()
async def dmem_tb(dut):
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    await Timer(10,unit="ns")
    dut.we.value = 1
    dut.a.value = 96
    dut.wd.value = 7
    await Timer(10,unit="ns")
    dut.a.value = 32 
    dut.wd.value = 0
    await Timer(10,unit="ns")
    dut.we.value = 0
    dut.a.value = 96
    await Timer(10,unit="ns")
    assert dut.rd.value == 7, f"failed"