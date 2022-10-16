CC = verilator
FLAGS = --trace --cc --exe --build -j 0 -Wall 

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(CC) $(FLAGS) csrc/main.cpp vsrc/our.v

#compile commands verilator --trace --cc --exe --build -j 0 -Wall csrc/main.cpp vsrc/our.v

include ../Makefile
