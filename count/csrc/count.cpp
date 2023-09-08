#include <verilated.h>
#include "verilated_vcd_c.h"
#include "Vcount.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vcount* top;

void step_and_dump_wave() {
    top->clk = !top->clk;
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
}

void sim_init() {
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vcount;
    contextp->traceEverOn(true);
    top->trace(tfp,10);
    tfp->open("count.vcd");
}

void sim_exit() {
    step_and_dump_wave();
    tfp->close();
}

int main() {
    sim_init();
    step_and_dump_wave();
    top->rst_n = 0;
    step_and_dump_wave();
    top->rst_n = 1;
    step_and_dump_wave();
    int i = 0;

    while(i < 10000) {
        i++;
        step_and_dump_wave();
    }
    sim_exit();
}
