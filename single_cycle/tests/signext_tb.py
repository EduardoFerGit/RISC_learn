import cocotb
from cocotb.triggers import Timer
import random


@cocotb.test()
async def signext_test(dut):
    count = 0
    while count < 100:
        val_a = random.randint((-2**15),(2**15-1)) # range of twoscomplement is (-2**n, to 2**n-1)
        dut.a.value = val_a


        await Timer(10,unit="ns")
        assert dut.y.value.signed_integer == val_a, f"SIGNEXT FAILED."
        count+=1

    dut._log.info("test passed!")
