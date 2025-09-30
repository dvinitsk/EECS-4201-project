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
logic [AWIDTH-1:0] fetch_pc_o;
logic [DWIDTH-1:0] fetch_insn_o;

//Memory Probes
logic [AWIDTH-1:0] mem_addr;
logic [DWIDTH-1:0] mem_data_in = '0;
logic [DWIDTH-1:0] mem_data_out;
logic mem_read_en = 1'b1;
logic mem_write_en = 1'b0;


 /*
  * Instantiate other submodules and
  * probes. To be filled by student...
  *
  */

  fetch #(
    .DWIDTH (DWIDTH),
    .AWIDTH (AWIDTH),
    .BASEADDR (32'h0100_0000)
    ) u_fetch(
      .clk (clk),
      .rst (reset),
      .pc_o(fetch_pc_o),
      .insn_o(fetch_insn_o)
    );

    memory #(
      .AWIDTH (AWIDTH),
      .DWIDTH (DWIDTH),
      .BASE_ADDR(32'h0100_0000)
      ) u_memory(
        .clk (clk),
        .rst (reset),
        .addr_i (mem_addr), 
        .data_i (mem_data_in),
        .read_en_i (mem_read_en),
        .write_en_i (mem_write_en),
        .data_o (mem_data_out)
    );
endmodule : pd1
