	component clock is
		port (
			clk_clk                             : in  std_logic                    := 'X'; -- clk
			reg_h1_external_connection_export   : out std_logic_vector(7 downto 0);        -- export
			reg_h2_external_connection_1_export : out std_logic_vector(7 downto 0);        -- export
			reset_reset_n                       : in  std_logic                    := 'X'; -- reset_n
			timer_irq_irq                       : out std_logic;                           -- irq
			reg_m1_external_connection_export   : out std_logic_vector(7 downto 0);        -- export
			reg_m2_external_connection_export   : out std_logic_vector(7 downto 0);        -- export
			reg_s1_external_connection_export   : out std_logic_vector(7 downto 0);        -- export
			reg_s2_external_connection_export   : out std_logic_vector(7 downto 0)         -- export
		);
	end component clock;

	u0 : component clock
		port map (
			clk_clk                             => CONNECTED_TO_clk_clk,                             --                          clk.clk
			reg_h1_external_connection_export   => CONNECTED_TO_reg_h1_external_connection_export,   --   reg_h1_external_connection.export
			reg_h2_external_connection_1_export => CONNECTED_TO_reg_h2_external_connection_1_export, -- reg_h2_external_connection_1.export
			reset_reset_n                       => CONNECTED_TO_reset_reset_n,                       --                        reset.reset_n
			timer_irq_irq                       => CONNECTED_TO_timer_irq_irq,                       --                    timer_irq.irq
			reg_m1_external_connection_export   => CONNECTED_TO_reg_m1_external_connection_export,   --   reg_m1_external_connection.export
			reg_m2_external_connection_export   => CONNECTED_TO_reg_m2_external_connection_export,   --   reg_m2_external_connection.export
			reg_s1_external_connection_export   => CONNECTED_TO_reg_s1_external_connection_export,   --   reg_s1_external_connection.export
			reg_s2_external_connection_export   => CONNECTED_TO_reg_s2_external_connection_export    --   reg_s2_external_connection.export
		);

