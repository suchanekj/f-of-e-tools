
module clk_divisor(clk_hf,
		`ifdef CACHE_READ_BUFFER_AT_DOUBLE_CLOCK
			clk_double,
		`endif
		clk);
	input clk_hf;
	`ifdef CACHE_READ_BUFFER_AT_DOUBLE_CLOCK
		output clk_double;
	`endif
	output clk;
	
	`ifdef CLK_DIV_REG_3
		reg			divider_reg_0;
		reg			divider_reg_1;
		reg			divider_reg_2;
		wire[1:0]	clk_mf;
		
		assign clk_mf[0] = divider_reg_0;
				
		always @(posedge clk_hf) begin
			divider_reg_0 <= !divider_reg_0;
		end
		
		assign clk_mf[1] = divider_reg_1;
				
		always @(posedge clk_mf[0]) begin
			divider_reg_1 <= !divider_reg_1;
		end
		
		assign clk = divider_reg_2;
				
		always @(posedge clk_mf[1]) begin
			divider_reg_2 <= !divider_reg_2;
		end
		
		initial begin
			divider_reg_0 = 0;
			divider_reg_1 = 0;
			divider_reg_2 = 0;
		end
		
		`ifdef CACHE_READ_BUFFER_AT_DOUBLE_CLOCK
			assign clk_double = clk_mf[1];
		`endif
		
	`elsif CLK_DIV_REG_2
	
		reg			divider_reg_0;
		reg			divider_reg_1;
		wire[0:0]	clk_mf;
		
		assign clk_mf[0] = divider_reg_0;
				
		always @(posedge clk_hf) begin
			divider_reg_0 <= !divider_reg_0;
		end
		
		assign clk = divider_reg_1;
				
		always @(posedge clk_mf[0]) begin
			divider_reg_1 <= !divider_reg_1;
		end
		
		initial begin
			divider_reg_0 = 0;
			divider_reg_1 = 0;
		end
		
		`ifdef CACHE_READ_BUFFER_AT_DOUBLE_CLOCK
			assign clk_double = clk_mf[0];
		`endif
	`endif
endmodule
