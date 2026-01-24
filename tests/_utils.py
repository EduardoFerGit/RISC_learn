import cocotb
from cocotb.triggers import Timer
import random

async def rand_test_alu(dut, num_test, ALU_CONTROL):
    count = 0
    while count < num_test:
        val_a = random.randint(0, 2**30)
        val_b = random.randint(0, 2**30)

        dut.a.value = val_a
        dut.b.value = val_b
        dut.f.value = ALU_CONTROL

        await Timer(10, unit="ns")
        if ALU_CONTROL == 0:
            assert dut.y.value == (val_a & val_b), f"AND FAILED, expected = {val_a & val_b}, got = {dut.y.value}"
        elif ALU_CONTROL == 1:
            assert dut.y.value == (val_a | val_b), f"OR FAILED, expected = {val_a | val_b}, got = {dut.y.value}"
        elif ALU_CONTROL == 2:
            assert dut.y.value == (val_a + val_b), f"ADD FAILED, expected = {val_a + val_b}, got = {int(dut.y.value)}"
        elif ALU_CONTROL == 6:
            #print(f"{val_a} - {val_b} = {val_a - val_b}, resulted value = {dut.y.value}")
            assert dut.y.value.signed_integer == (val_a - val_b), f" SUBTRACT FAILED, expected = {val_a - val_b}, got = {dut.y.value}"
        elif ALU_CONTROL == 7:
            assert dut.y.value == int(val_a < val_b), f"SLT FAILED, expected = {int(val_a < val_b)}, got = {dut.y.value}"
        else:
            return "ALU_CONTROL INVALID"
        count = count + 1
    return

async def rand_test_adder(dut, num_test):
    count = 0
    while count < num_test:
        val_a = random.randint(0, 2**30)
        val_b = random.randint(0, 2**30)

        dut.a.value = val_a
        dut.b.value = val_b

        await Timer(10,unit="ns")
        assert dut.y.value == (val_a + val_b), f"ADD FAILED, expected = {(val_a + val_b)}, got = {dut.y.value}"
        count = count + 1
    return
