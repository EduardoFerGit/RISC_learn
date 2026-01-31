import cocotb
from cocotb.triggers import Timer, FallingEdge
from cocotb.clock import Clock

@cocotb.test()
async def mips_cpi_test(dut):
    
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())

    dut.rst.value = 1
    await Timer(10,unit="ns")
    dut.rst.value = 0
    dut._log.info("RESET RELEASED. Starting execution....")

    for cycle in range(50):
        await FallingEdge(dut.clk)

        pc = dut.currentpc.value
        instr = dut.instruction.value

        dut._log.info(f"Cycle {cycle}: PC={pc} Instruction={instr}")

        if dut.memwrite.value == 1:    
            if dut.dataaddr.value == 32:
                if dut.writedata.value == 1337:
                    dut._log.info("TEST SUCCESS: found value 1337 at address 32")                        
                    return
                else:
                    assert False, f"wrong data"

    raise Exception("ERROR CPU neve reached address 32 to write the value")