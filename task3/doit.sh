#!/bin/sh
~/Documents/iac/lab0-devtools/tools/attach_usb.sh
#cleanup
rm -rf obj_dir
rm -f sigdelay.vcd

#run Verilator to translate Verilog to C++, including C++ testbench
verilator -Wall --cc --trace sigdelay.sv --exe sigdelay_tb.cpp

#build C++ project
make -j -C obj_dir/ -f Vsigdelay.mk Vsigdelay

#run executable simulation file
obj_dir/Vsigdelay

