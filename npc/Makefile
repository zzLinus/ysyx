# I "BORROW" the following 23 lines from verilator example in my system path /usr/share/verilator/example/...
# I need to use the cmake build system because i need the compile_commands.json file in order to make my editor works properly
ifeq ($(VERILATOR_ROOT),)
VERILATOR_COVERAGE = verilator_coverage
else
export VERILATOR_ROOT
VERILATOR_COVERAGE = $(VERILATOR_ROOT)/bin/verilator_coverage
endif
######################################################################

# Check if CMake is installed and of correct version
ifeq ($(shell which cmake),)
TARGET := nocmake
else
CMAKE_VERSION := $(shell cmake --version | grep -Po '(\d[\.\d]+)')
CMAKE_MAJOR := $(shell echo $(CMAKE_VERSION) | cut -f1 -d.)
CMAKE_MINOR := $(shell echo $(CMAKE_VERSION) | cut -f2 -d.)
CMAKE_GT_3_8 := $(shell [ $(CMAKE_MAJOR) -gt 3 -o \( $(CMAKE_MAJOR) -eq 3 -a $(CMAKE_MINOR) -ge 8 \) ] && echo true)
ifeq ($(CMAKE_GT_3_8),true)
TARGET := run
else
TARGET := oldcmake
endif
endif

NXDC_FILES = constr/top.nxdc
SRC_AUTO_BIND = csrc/auto_bind.hpp

# compile commands verilator --trace --cc --exe --build -j 0 -Wall csrc/main.cpp vsrc/our.v
# CC = verilator
# FLAGS = --trace --cc --exe --build -j 0 -Wall 

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo
	@echo "-- Verilator CMake hello world example"

	@echo
	@echo "-- VERILATE ----------------"
	mkdir -p build && cd build && cmake ..

	@echo
	@echo "-- SRC-AUTO-BIND -------------------"
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py ${NXDC_FILES} ${SRC_AUTO_BIND}

	@echo
	@echo "-- BUILD -------------------"
	cmake --build build -j

	@echo
	@echo "-- RUN ---------------------"
	@mkdir -p logs
	build/Vtop +trace

	@echo
	@echo "-- COVERAGE ----------------"
	$(VERILATOR_COVERAGE) --annotate logs/annotated logs/coverage.dat

	@echo
	@echo "-- DONE --------------------"
	@echo "To see waveforms, open vlt_dump.vcd in a waveform viewer"
	@echo

	# $(CC) $(FLAGS) csrc/main.cpp vsrc/our.v
	
clean mostlyclean distclean maintainer-clean:
	@rm -rf build logs


include ../Makefile
