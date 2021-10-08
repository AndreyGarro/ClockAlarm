# ------------------------------------------------------------------------------
# Top Level Simulation Script to source msim_setup.tcl
# ------------------------------------------------------------------------------
set QSYS_SIMDIR obj/default/runtime/sim
source msim_setup.tcl
# Copy generated memory initialization hex and dat file(s) to current directory
file copy -force C:/Users/kimbe/Documents/ClockAlarm/software/clock_alarm/mem_init/hdl_sim/clock_RAM.dat ./ 
file copy -force C:/Users/kimbe/Documents/ClockAlarm/software/clock_alarm/mem_init/clock_RAM.hex ./ 
