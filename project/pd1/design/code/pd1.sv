/*
 * Module: pd1
 *
 * Description: Top level module that will contain sub-module instantiations.
 *
 * Inputs:
 * 1) clk
 * 2) reset signal
 */

module pd1 #(
    parameter int AWIDTH = 32,
    parameter int DWIDTH = 32)(
    input logic clk,
    input logic reset
);

//Fetch Probes
logic [AWIDTH-1:0] f_pc;  //fetch_pc_o;
logic [DWIDTH-1:0] f_inst; //fetch_insn_o;

//Memory Probes
logic [AWIDTH-1:0] addr_i_top; // mem_addr;
logic [DWIDTH-1:0] data_i; //mem_data_in = '0;
logic [DWIDTH-1:0] data_o; //mem_data_out;
logic read_en = 1'b1;            //mem_read_en = 1'b1;
logic write_en = 1'b0;          //mem_write_en = 1'b0;


 /*
  * Instantiate other submodules and
  * probes. To be filled by student...
  *
  */

  //assign addr_i = f_pc;

  fetch #(
    .DWIDTH (DWIDTH),
    .AWIDTH (AWIDTH),
    .BASEADDR (32'h0100_0000)
    ) fetch1(
      .clk (clk),
      .rst (reset),
      //.insn_i(data_o),
      .pc_o(f_pc),
      .insn_o(data_o)
    );

    memory #(
      .AWIDTH (AWIDTH),
      .DWIDTH (DWIDTH),
      .BASE_ADDR(32'h0100_0000)
      ) memory1(
        .clk (clk),
        .rst (reset),
        .addr_i (f_pc), 
        .data_i (data_i),
        .read_en_i (read_en),
        .write_en_i (write_en),
        .data_o (data_o)
    );
endmodule : pd1
