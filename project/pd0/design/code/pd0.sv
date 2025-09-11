/*
 * Module: pd0
 *
 * Description: Top level module that will contain sub-module instantiations.
 * An instantiation of the assign_xor module is shown as an example. The other
 * modules must be instantiated similarly. Probes are defined, which will be used
 * to test This file also defines probes that will be used to test the design. Note
 * that the top level module should have only two inputs: clk and rest signals.
 *
 * Inputs:
 * 1) clk
 * 2) reset signal
 */

module pd0 #(
    parameter int DWIDTH = 32)
 (
    input logic clk,
    input logic reset
    );

 // Probes that will be defined in probes.svh
 logic assign_xor_op1;
 logic assign_xor_op2;
 logic assign_xor_res;

 assign_xor assign_xor_0 (
     .op1_i (assign_xor_op1),
     .op2_i (assign_xor_op2),
     .res_o (assign_xor_res)
 );

 /*
  * Instantiate other submodules and
  * probes. To be filled by student...
  *
  */

//ALU Probes
 logic [DWIDTH-1:0] alu_op1;
 logic [DWIDTH-1:0] alu_op2;
 logic [DWIDTH-1:0] alu_res;
 logic [1:0] alu_sel;

// Register signals
 logic [31:0] reg_rst_inp;
 logic [31:0] reg_rst_out;

// Three-stage pipeline signals  
 logic [31:0] tsp_op1;
 logic [31:0] tsp_op2;
 logic [31:0] tsp_out;

 alu #(.DWIDTH(DWIDTH)) assign_alu_0(
     .op1_i (alu_op1),
     .op2_i (alu_op2),
     .res_o (alu_res),
     .sel_i (alu_sel),
     .neg_o (), //Do we need to declare alu_neg and alu_zero
     .zero_o ()
 );

endmodule: pd0
