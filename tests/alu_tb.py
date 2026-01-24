import cocotb
from cocotb.triggers import Timer
from tests._utils import rand_test_alu

@cocotb.test()
async def test_alu(dut):
    """test alu logic"""

    val_a=8
    val_b=4
    dut.a.value = val_a
    dut.b.value = val_b

    # Case : AND
    await Timer(10, unit="ns")
    dut.f.value = 0 # 000
    await Timer(10, unit="ns")
    assert (dut.y.value == 0) and (dut.zero.value == 1), f" AND FAILED, y = {dut.y.value}, zero = {dut.zero.value}"
    await Timer(10, unit="ns")

    #Case : OR
    await Timer(10, unit="ns")
    dut.f.value = 1 # 001
    await Timer(10, unit="ns")
    assert dut.y.value == 12, f"OR FAILED, expected value {12}, got {dut.y.value}"
    await Timer(10, unit="ns")

    #Case : ADD
    await Timer(10, unit="ns")
    dut.f.value = 2 # 010
    await Timer(10, unit="ns")
    assert dut.y.value ==  12 ,f"ADD FAILED, expected = {12}, got {dut.y.value}"
    await Timer(10, unit="ns")

    #Case : SUBTRACT
    await Timer(10, unit="ns")
    dut.f.value = 6 # 011
    await Timer(10, unit="ns")
    assert dut.y.value == 4, f"SUB FAILED: A - B SHOULD BE 4, expected value = {4}, got = {dut.y.value}"
    await Timer(10, unit="ns")

    #Case : SLT
    await Timer(10, unit="ns")
    dut.f.value = 7 # 101
    await Timer(10, unit="ns")
    assert dut.y.value == 0, f"SLT FAILED: A<B SHOULD NOT BE TRUE, expected value = {0}, got = {dut.y.value}"
    await Timer(10, unit="ns")

    await rand_test_alu(dut,100,0)
    await rand_test_alu(dut,100,1)
    await rand_test_alu(dut,100,2)
    await rand_test_alu(dut,100,6)
    await rand_test_alu(dut,100,7)

    dut._log.info("ALU test Passed!")

