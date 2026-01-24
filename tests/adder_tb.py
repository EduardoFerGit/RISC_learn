import cocotb
from cocotb.triggers import Timer
from _utils import rand_test_adder

@cocotb.test()
async def adder_test(dut):
    await Timer(10, unit="ns")
    await rand_test_adder(dut,100)

    dut._log.info("ADDER Test Passed!")