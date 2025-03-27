cmake_minimum_required(VERSION 3.10)

project(4BitSim LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF) # Prefer standard C++

# Adding compiler warnings
if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
	add_compile_options(-Wall -Wextra -pedantic)
endif()

add_executable(simulator src/main.cpp src/computer.cpp src/computer.hpp)

target_include_directories(simulator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
