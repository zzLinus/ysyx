######################################################################
#
# DESCRIPTION: Verilator CMake Example: Small CMakeLists.txt
#
# This is an example cmake script to build a verilog to systemc project
# using cmake and verilator.
#
# This file ONLY is placed under the Creative Commons Public Domain, for
# any use, without warranty, 2020 by Wilson Snyder.
# SPDX-License-Identifier: CC0-1.0
#
######################################################################

# This example builds the tracing_c example using CMake
# To use it, run the following:

# cd /path/to/verilator/examples/cmake_c
# rm -rf build && mkdir build && cd build
# cmake ..
# cmake --build .

cmake_minimum_required(VERSION 3.8)
project(ysyx_npc_riscv64!)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(verilator HINTS $ENV{VERILATOR_ROOT} ${VERILATOR_ROOT})
if (NOT verilator_FOUND)
  message(FATAL_ERROR "Verilator was not found. Either install it, or set the VERILATOR_ROOT environment variable")
endif()

# Create a new executable target that will contain all your sources
add_executable(Vtop ../csrc/main.cc)

target_include_directories(Vtop PUBLIC ../nvboard/include)

# Add the Verilated circuit to the target
verilate(
	Vtop COVERAGE TRACE
	INCLUDE_DIRS "../"
	VERILATOR_ARGS -x-assign fast --trace
	SOURCES vsrc/top.v vsrc/REG.v vsrc/IFU.v vsrc/IDU.v vsrc/EXU.v vsrc/PC.v vsrc/GPR.v 
	vsrc/MUXKEY.v vsrc/ALU.v
)