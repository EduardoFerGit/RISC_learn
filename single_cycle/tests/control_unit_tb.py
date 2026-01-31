import cocotb
from cocotb.triggers import Timer

@cocotb.test()
async def control_unit(dut):

    funct_val = [32, 34, 36, 37, 42]
    alucontrol_ans = [2, 6, 0, 1, 7]
    instructions = [0, 35, 43, 4, 8, 2]
    controlsig = [26, 296, 160, 65, 40, 4]

    for i in range(len(instructions)):
        dut.op.value = instructions[i]
        print(instructions[i])
        if (instructions[i] == 0):
            for y in range(len(funct_val)):
                dut.funct.value = funct_val[y]
                await Timer(10,unit="ns")
                assert dut.alucontrol.value == alucontrol_ans[y], f"funct FAILED"
        
        await Timer(10,unit="ns")
        assert dut.main_decoder_inst.controlsig.value == controlsig[i], f"ControlSig FAILED"
    
    dut._log.info("Test done!")
