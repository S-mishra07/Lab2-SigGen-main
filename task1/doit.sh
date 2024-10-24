#!/bin/sh

#cleanup
rm -rf obj_dir
rm -f sinegen.vcd

#run Verilator to translate Verilog to C++, including C++ testbench
verilator -Wall --cc --trace sinegen.sv --exe sinegen_tb.cpp

#build C++ project
make -j -C obj_dir/ -f Vsinegen.mk Vsinegen

#run executable simulation file
obj_dir/Vsinegen
