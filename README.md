# 4_bit_computer_simulator
Used to simulate a 4-bit von Nuemann computer to help develop the relay computer project.

### Simulator Specs

1. 4-bit data words: Registers, memory locations, and ALU operations work on
   4 bits (values 0-15).
2. 4-12bit addresses: We can address 2^4 through 2^12 memory locations.
3. Shared Memory: Instructions and data reside in the same memory space. (von
   Nuemann)
4. CPU Components:
    - Program Counter (PC) - 4 bits
    - Instruction Register (IR) - holds the current instruction opcode
    - Flags: Zero (Z), Carry (C)
5. Simple Instruction Set: A few basic instructions. (Opcode + Operand/Address)


### Instruction Set Architecture (ISA)

- Word 1: Opcode (4 bits)
- Word 2: Operand (Address or immediate value, 4 bits) - Only if needed by the
  opcode.

| Opcode (Hex) | Mnemonic | Description | Words | Needs Operand |
| --- | --- | --- | --- | --- |
| 0x0 | NOP | No Operation | 1 | No |


