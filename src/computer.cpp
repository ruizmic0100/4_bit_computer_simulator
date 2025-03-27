#include <iostream>
#include <iomanip>   // For formatting output (setw, setfill)
#include <sstream>  // For building dumpState string
#include <stdexcept> // For invalid_argument
#include "computer.hpp"

Computer::Computer() : memory(MEMORY_SIZE, 0), pc(0), ir(0), zero_flag(false), carry_flag(false), halted(false) {}

void Computer::reset() {
	pc = 0;
	ir = 0;
	zero_flag = false;
	carry_flag = false;
	halted = false;
}

void Computer::loadProgram(const std::vector<uint8_t>& program, uint8_t startAddress) {
	
}


