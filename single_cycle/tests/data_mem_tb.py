import cocotb
from cocotb.triggers import Timer
from cocotb.clock import Clock

@cocotb.test()
async def data_mem_test(dut):
    
    #Start CLock
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())

    #STORE DATA IN EACH WORD
    for i in range(64):
        dut.a.value = i
        dut.we.value = 1
        dut.wd.value = (i+1)*10
        await Timer(10, unit="ns")
        dut.we.value = 0


    #READ STORED DATA
    for i in range(64):
        dut.a.value = i
        #print(i)
        await Timer(10,unit="ns")
        #print(dut.rd.value.signed_integer)
        assert dut.rd.value == (i+1)*10, f"FAILED CHECK TEST BENCH"
    
    dut._log.info("test finished")

