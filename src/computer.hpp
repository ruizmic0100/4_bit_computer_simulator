#ifndef COMPUTER_HPP
#define COMPUTER_HPP

#include <vector>
#include <cstdint> // For uint8_t
#include <string>  // For dumpState formatting


// Define our 4-bit constraints
constexpr size_t MEMORY_SIZE = 16;		// 2^4
constexpr uint8_t DATA_MASK = 0x0F;		// Mask for bits
constexpr uint8_t ADDRESS_MASK = 0x0F;  // Mask for the bits.

class Computer {
public:
	Computer();

	void loadProgram(const std::vector<uint8_t>& program, uint8_t startAddress = 0);
	void run();
	void step(); // Execute one instruction cycle
	void reset();
	std::string dumpState() const; // Get current state as a string
	
	// Direct Memory Access (for setup/debugging)
	uint8_t readMemory(uint8_t address) const;
	void writeMemory(uint8_t address, uint8_t value);


private:
	// CPU components
	std::vector<uint8_t> memory; // 16 locations, 4 bits each
	uint8_t pc;					 // Program Counter (4 bits)
	uint8_t ir;				     // Instruction Register (holds current opcode)
	bool zero_flag;
	bool carry_flag;
	bool halted;

	// Internal CPU Operations
	void fetch();
	void decodeExecute();
	uint8_t fetchOperand(); // Helper to fetch the next byte as operand and
							// advance PC
	
	// TODO(MSR): Add ALU or incrementer or full-adder.
	


};

#endif // COMPUTER_HPP
