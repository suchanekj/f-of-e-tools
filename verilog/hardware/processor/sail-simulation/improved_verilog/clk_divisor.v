
module clk_divisor(clk_hf,
		clk);
	input clk_hf;
	output clk;
	
	reg divider_regs_0;
	reg divider_regs_1;
	wire[`CLK_DIV_REG:0] clk_mf;
	
	assign clk_mf[0] = clk_hf;
	
	assign clk_mf[1] = divider_regs_0;
	
	always @(posedge clk_mf[0]) begin
		divider_regs_0 <= !divider_regs_0;
	end
	
	assign clk_mf[2] = divider_regs_1;
	
	always @(posedge clk_mf[1]) begin
		divider_regs_1 <= !divider_regs_1;
	end
	
	assign clk = clk_mf[`CLK_DIV_REG ];
	
endmodule
