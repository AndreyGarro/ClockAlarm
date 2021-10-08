	clock u0 (
		.clk_clk                             (<connected-to-clk_clk>),                             //                          clk.clk
		.reg_h1_external_connection_export   (<connected-to-reg_h1_external_connection_export>),   //   reg_h1_external_connection.export
		.reg_h2_external_connection_1_export (<connected-to-reg_h2_external_connection_1_export>), // reg_h2_external_connection_1.export
		.reset_reset_n                       (<connected-to-reset_reset_n>),                       //                        reset.reset_n
		.timer_irq_irq                       (<connected-to-timer_irq_irq>),                       //                    timer_irq.irq
		.reg_m1_external_connection_export   (<connected-to-reg_m1_external_connection_export>),   //   reg_m1_external_connection.export
		.reg_m2_external_connection_export   (<connected-to-reg_m2_external_connection_export>),   //   reg_m2_external_connection.export
		.reg_s1_external_connection_export   (<connected-to-reg_s1_external_connection_export>),   //   reg_s1_external_connection.export
		.reg_s2_external_connection_export   (<connected-to-reg_s2_external_connection_export>)    //   reg_s2_external_connection.export
	);

