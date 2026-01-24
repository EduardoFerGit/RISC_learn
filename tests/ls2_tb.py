import cocotb
from cocotb.triggers import Timer
import random

#module performs a 2 position left bitshift which is equivalent to multiplying by 4

@cocotb.test()
async def ls2_test(dut):
    count = 0
    while count < 100:
        val_a = random.randint(0,2**29)
        dut.a.value = val_a
        await Timer(10,unit="ns")
        assert dut.y.value == (val_a*4), f"LEFT SHIFT FAILED, expected = {val_a*4}, got = {dut.y.value}"
        count += 1

    dut._log.info("leftshift2 test passed!")