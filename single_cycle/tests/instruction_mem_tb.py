import cocotb
from cocotb.triggers import Timer



@cocotb.test()
async def test_imem(dut):
    expected = [0x02010005,0x02010015, 0x03020005]

    dut.a.value = 0
    await Timer(10,unit="ns")
    print(f"reg value = {dut.a.value}, value at mem rd = {dut.rd.value}")


    for i in range(len(expected)):
        dut.a.value = i
        await Timer(20,unit="ns")

        assert dut.rd.value == expected[i], f"FAILED TESTBENCH"


    dut._log.info("TEST FINISHED!")