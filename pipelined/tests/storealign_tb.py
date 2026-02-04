import cocotb
from cocotb.triggers import Timer


@cocotb.test()
async def storealign_test(dut):
    dut.memwrite.value = 1
    dut.addr.value = 0
    dut.funct3.value = 0
    dut.rs2.value = 257
    await Timer(10,unit="ns")
    assert dut.data4.value == 1
    assert dut.we4.value == 1
    await Timer(10,unit="ns")
    dut.funct3.value = 1
    await Timer(10,unit="ns")
    assert dut.data4.value == 257
    assert dut.we4.value == 3
    await Timer(10,unit="ns")
    dut.funct3.value = 0
    dut.addr.value = 1
    await Timer(10,unit="ns")
    assert dut.data4.value == 256
    assert dut.we4.value == 2
    await Timer(10,unit="ns")
    dut.addr.value = 3
    await Timer(10,unit="ns")
    assert dut.data4.value == 16777216
    assert dut.we4.value == 8
    await Timer(10,unit="ns")