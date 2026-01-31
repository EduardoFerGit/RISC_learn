import cocotb
from cocotb.triggers import Timer

@cocotb.test()
async def main_decoder_test(dut):
    #R-TYPE
    dut.op.value = 0
    await Timer(10,unit="ns")
    assert dut.controlsig.value == 26, f"FAILED R-TYPE"
    
    #LW
    dut.op.value = 35
    await Timer(10,unit="ns")
    assert dut.controlsig.value == 296, f"FAILED LW"

    #SW
    dut.op.value = 43
    await Timer(10,unit="ns")
    assert dut.controlsig.value == 160, f"FAILED LW"

    #BEQ
    dut.op.value = 4
    await Timer(10,unit="ns")
    assert dut.controlsig.value == 65, f"FAILED LW"

    #ADDI
    dut.op.value = 8
    await Timer(10,unit="ns")
    assert dut.controlsig.value == 40, f"FAILED LW"

    #J
    dut.op.value = 2
    await Timer(10,unit="ns")
    assert dut.controlsig.value == 4, f"FAILED LW"

    

    
    
    