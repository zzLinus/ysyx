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
add_definitions(-D__IMG_="${__IMG__}")

find_package(verilator HINTS $ENV{VERILATOR_ROOT} ${VERILATOR_ROOT})
# add llvm inorder to implement itrace
find_package(LLVM REQUIRED CONFIG)
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")


if (NOT verilator_FOUND)
  message(FATAL_ERROR "Verilator was not found. Either install it, or set the VERILATOR_ROOT environment variable")
endif()

include_directories(${LLVM_INCLUDE_DIRS})
separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
add_definitions(${LLVM_DEFINITIONS_LIST})


# Create a new executable target that will contain all your sources
add_executable(Vtop 
    ../csrc/main.cc ../csrc/monitor.cc
		../csrc/sdb.cc ../csrc/watchpoint.cc
		../csrc/expr.cc ../csrc/reg.cc
		../csrc/disasm.cc ../csrc/ftrace.cc
)


llvm_map_components_to_libnames(llvm_libs support core irreader)

target_include_directories(Vtop PUBLIC ../nvboard/include)
target_include_directories(Vtop PUBLIC ./include)
target_link_directories(Vtop PUBLIC ./build)

target_link_libraries(Vtop PUBLIC -D_DEFAULT_SOURCE
		-D_XOPEN_SOURCE=600 -lreadline ${llvm_libs} -lLLVM-15
		-lnemu
)

# Add the Verilated circuit to the target
verilate(
	Vtop COVERAGE TRACE
	INCLUDE_DIRS "../"
	VERILATOR_ARGS -x-assign fast --trace -Wno-LATCH -Wno-COMBDLY
	SOURCES vsrc/top.v vsrc/IFU.v vsrc/IDU.v vsrc/EXU.v vsrc/PC.v vsrc/RF.v 
	vsrc/MUXKEY.v vsrc/CTRL.v vsrc/DMEM.v
)
