import cocotb
from cocotb.triggers import Timer


@cocotb.test()
async def alu_decoder_test(dut):
    dut.aluop.value = 0
    await Timer(10,unit="ns")
    assert dut.alucontrol.value == 2, f"FAILED ALUOP 2'B00"

    dut.aluop.value = 1
    await Timer(10,unit="ns")
    assert dut.alucontrol.value == 6, f"FAILED ALUOP 2'B01"

    dut.aluop.value = 3
    await Timer(10,unit="ns")
    assert dut.alucontrol.value == 1, f"FAILED ALUOP 2'B11, doesnt matter tho tbh"

    dut.aluop.value = 2

    dut.funct.value = 32
    await Timer(10,unit="ns")
    assert dut.alucontrol.value == 2, f"FAILED FUNCT ADD"


    dut.funct.value = 34
    await Timer(10,unit="ns")
    assert dut.alucontrol.value == 6, f"FAILED FUNCT SUB"


    dut.funct.value = 36
    await Timer(10,unit="ns")
    assert dut.alucontrol.value == 0, f"FAILED FUNCT AND"


    dut.funct.value = 37
    await Timer(10,unit="ns")
    assert dut.alucontrol.value == 1, f"FAILED FUNCT OR"


    dut.funct.value = 42
    await Timer(10,unit="ns")
    assert dut.alucontrol.value == 7, f"FAILED FUNCT SLT"

    dut._log.info("TEST COMPLETE!")