import cocotb
from cocotb.triggers import Timer

@cocotb.test()
async def extend_test(dut):

    dut.instr.value = 33292288 #-32 in the immediate field
    dut.immsrc.value = 0
    await Timer(50,unit="ns")
    # assert dut.immext.value.signed_integer == -32
    await Timer(20,unit="ns")