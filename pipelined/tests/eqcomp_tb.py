import cocotb
from cocotb.triggers import Timer

@cocotb.test()
async def eqcomp_test(dut):
    dut.a.value = 33
    dut.b.value = 32
    await Timer(10,unit="ns")
    assert dut.y.value == 0, f"eq comparator failed"

    dut.a.value = 32
    await Timer(10,unit="ns")
    assert dut.y.value == 1, f"eq comparator failed"
    await Timer(10,unit="ns")
