
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
	
	reg[`CLK_DIV_REG-1:0] divider_regs;
	wire[`CLK_DIV_REG:0] clk_mf;
	
	assign clk_mf[0] = clk_hf;
		
	genvar i;
	for (i = 0; i < `CLK_DIV_REG - 1; i = i + 1) begin
		assign clk_mf[i+1] = divider_regs[i];
		
		always @(posedge clk_mf[i]) begin
			divider_regs[i] <= !divider_regs[i];
		end
	end
	assign clk = clk_mf[`CLK_DIV_REG ];
	
	`ifdef CACHE_READ_BUFFER_AT_DOUBLE_CLOCK
		assign clk_double = clk_mf[`CLK_DIV_REG - 1];
	`endif
endmodule
