module sigdelay #(
        parameter A_WIDTH = 9,
                  D_WIDTH = 8
) (
    input logic        clk,
    input logic        rst,
    input logic        en,
    input logic        wr_enable,
    input logic        rd_enable,
    input logic [D_WIDTH-1:0] din,
    input logic [A_WIDTH-1:0] incr,
    input logic [D_WIDTH-1:0] phase_offset,
    output logic [D_WIDTH-1:0] dout,

);

    logic [A_WIDTH-1:0] address;

counter addrCounter(
    .clk (clk),
    .rst (rst),
    .en (en),
    .incr (incr),
    .count (address1)
);

    assign address2 = address1 + phase_offset;

dualportram sigRam(
    .clk (clk),
    .wr_addr (address2),
    .rd_addr (address1),
    .dout (dout),
    .din (din),
    .wr_enable(wr_enable),
    .rd_enable(rd_enable)
);

endmodule