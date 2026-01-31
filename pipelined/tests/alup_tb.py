import cocotb
from cocotb.triggers import Timer


@cocotb.test()
async def test_alup(dut):
    val_a = 10
    val_b = 7

    dut.a.value = val_a
    dut.b.value = val_b
    dut.shamt.value = 0
    dut.f.value = 0 #AND
    await Timer(10,unit="ns")
    assert dut.y.value == 2, f"AND FAILED"

    dut.f.value = 1 # or
    await Timer(10,unit="ns")
    assert dut.y.value == 15, f"OR FAILED"

    dut.f.value = 2 # or
    await Timer(10,unit="ns")
    assert dut.y.value == 17, f"ADD FAILED"

    dut.f.value = 4 # or
    dut.shamt.value = 1 #shamt applies to b input
    await Timer(10,unit="ns")
    assert dut.y.value == 14, f"SLL FAILED" 

    dut.f.value = 5 # or
    dut.shamt.value = 1 #shamt applies to b input
    await Timer(10,unit="ns")
    assert dut.y.value == 3, f"SRL FAILED"

    dut.f.value = 6 # or
    dut.shamt.value = 0 #shamt applies to b input
    await Timer(10,unit="ns")
    assert dut.y.value == 3, f"SUB FAILED"

    dut.f.value = 7 # or
    await Timer(10,unit="ns")
    assert dut.y.value == 0, f"SRL FAILED"