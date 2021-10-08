
module clock (
	clk_clk,
	reg_h1_external_connection_export,
	reg_h2_external_connection_1_export,
	reset_reset_n,
	timer_irq_irq,
	reg_m1_external_connection_export,
	reg_m2_external_connection_export,
	reg_s1_external_connection_export,
	reg_s2_external_connection_export);	

	input		clk_clk;
	output	[7:0]	reg_h1_external_connection_export;
	output	[7:0]	reg_h2_external_connection_1_export;
	input		reset_reset_n;
	output		timer_irq_irq;
	output	[7:0]	reg_m1_external_connection_export;
	output	[7:0]	reg_m2_external_connection_export;
	output	[7:0]	reg_s1_external_connection_export;
	output	[7:0]	reg_s2_external_connection_export;
endmodule
