import cocotb
from cocotb.triggers import Timer

@cocotb.test()
async def mux2_test(dut):
    dut.a.value = 100
    dut.b.value = 200
    dut.sel.value = 0
    await Timer(10,unit="ns")
    dut.sel.value = 1
    await Timer(10,unit="ns")
    assert dut.y.value == dut.b.value, f"MUX FAILED"