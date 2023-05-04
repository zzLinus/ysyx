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

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo
	@echo "-- Verilator CMake hello world example"

	@echo
	@echo "-- VERILATE ----------------"
	mkdir -p build && cd build && cmake -D__IMG__=$(IMG) ..

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

clean mostlyclean distclean maintainer-clean:
	@rm -rf build logs
