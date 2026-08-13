#include <stdio.h>
int main()
{
    int R1 = 10, R2 = 20, R3 = 0;
    int memory[50];
    int io = 30;
    int single_cycles = 0;
    int multi_cycles = 0;
    memory[10] = 100;
    printf("===== SINGLE-BUS ORGANIZATION =====\n");
    printf("\nInitial Values:");
    printf("\nR1 = %d", R1);
    printf("\nR2 = %d", R2);
    printf("\nMemory[10] = %d", memory[10]);
    printf("\nI/O = %d\n", io);
    R1 = memory[10];
    single_cycles++;
    printf("\nCycle %d: Memory[10] -> R1", single_cycles);
    R2 = R1;
    single_cycles++;
    printf("\nCycle %d: R1 -> R2", single_cycles);
    R3 = R2;
    single_cycles++;
    printf("\nCycle %d: R2 -> R3", single_cycles);
    io = R3;
    single_cycles++;
    printf("\nCycle %d: R3 -> I/O", single_cycles);
    printf("\n\nSingle-Bus Cycles = %d\n", single_cycles);
    printf("\n===== MULTI-BUS ORGANIZATION =====\n");
    R1 = memory[10];
    R2 = 20;
    printf("\nCycle 1: Memory[10] -> R1");
    printf("\nCycle 1: R2 -> Bus B");
    R3 = R1 + R2;
    multi_cycles++;
    printf("\nCycle %d: ALU performs R1 + R2 -> R3", multi_cycles);
    printf("\n\nMulti-Bus Cycles = %d\n", multi_cycles);
    printf("\n===== PERFORMANCE COMPARISON =====\n");
    printf("Single-Bus Cycles = %d\n", single_cycles);
    printf("Multi-Bus Cycles  = %d\n", multi_cycles);
    printf("Speedup = %.2f\n",
           (float)single_cycles / multi_cycles);
    return 0;
}
