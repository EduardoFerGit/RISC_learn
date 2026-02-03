import cocotb
from cocotb.triggers import Timer

@cocotb.test()
async def align_test(dut):
    dut.a.value = 4039905024 #11110000 11001100 00001111 00000000
    dut.funct3.value = 0
    dut.addr.value = 0
    await Timer(10,unit="ns")
    assert dut.y.value.to_signed() == 0,f"lb addr=0 FAILED"
    dut.addr.value = 1
    await Timer(10,unit="ns")
    assert dut.y.value.to_signed() == 15,f"lb addr=1 FAILED"
    dut.addr.value = 2
    await Timer(10,unit="ns")
    assert dut.y.value.to_signed() == -52,f"lb addr=2 FAILED"
    dut.addr.value = 3
    await Timer(10,unit="ns")
    assert dut.y.value.to_signed() == -16,f"lb addr=3 FAILED"
