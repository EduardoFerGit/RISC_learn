import cocotb
from cocotb.triggers import Timer

@cocotb.test()
async def test_mux_basic(dut):
    """Test Mux logic: sel=0 selects 'a', sel=1 selects 'b'"""

    # Define test values
    val_a = 100
    val_b = 200

    dut.a.value = val_a
    dut.b.value = val_b

    # Case 1: Select A
    dut.sel.value = 0
    await Timer(10, unit="ns")
    assert dut.y.value == val_a, f"Mux failed! Expected {val_a}, got {dut.y.value.integer}"

    await Timer(30, unit="ns")

    # Case 2: Select B
    dut.sel.value = 1
    await Timer(1, unit="ns")
    assert dut.y.value == val_b, f"Mux failed! Expected {val_b}, got {dut.y.value.integer}"

    await Timer(30, unit="ns")

    dut._log.info("MUX2 Test Passed!")