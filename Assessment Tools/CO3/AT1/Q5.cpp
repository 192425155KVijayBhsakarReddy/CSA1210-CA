#include <stdio.h>

int main()
{
    int instructions = 8;
    int scalarCycles = 8;
    int superscalarCycles = 4;
    int outOfOrderCycles = 3;
    int smtCycles = 4;
    float scalarIPC;
    float superscalarIPC;
    float outOfOrderIPC;
    float smtIPC;
    float superscalarSpeedup;
    float outOfOrderSpeedup;
    float smtSpeedup;
    printf("========================================\n");
    printf(" SUPERSCALAR AND SMT SIMULATION\n");
    printf("========================================\n");
    printf("\nInstruction Sequence:\n");
    printf("I1: ADD R1, R2, R3\n");
    printf("I2: MUL R4, R5, R6\n");
    printf("I3: SUB R7, R1, R8\n");
    printf("I4: AND R9, R10, R11\n");
    printf("I5: OR  R12, R7, R13\n");
    printf("I6: ADD R14, R15, R16\n");
    printf("I7: MUL R17, R18, R19\n");
    printf("I8: SUB R20, R21, R22\n");
    printf("\n========================================\n");
    printf("             EXECUTION\n");
    printf("========================================\n");
    printf("\n1. SCALAR PROCESSOR\n");
    printf("Instructions = %d\n", instructions);
    printf("Cycles = %d\n", scalarCycles);
    printf("\n2. 2-WIDE SUPERSCALAR\n");
    printf("Instructions can be issued in pairs.\n");
    printf("Cycles = %d\n", superscalarCycles);
    printf("\n3. OUT-OF-ORDER EXECUTION\n");
    printf("Independent instructions can execute early.\n");
    printf("Cycles = %d\n", outOfOrderCycles);
    printf("\n4. SMT EXECUTION\n");
    printf("Instructions from two threads execute concurrently.\n");
    printf("Cycles = %d\n", smtCycles);
    scalarIPC =(float)instructions /scalarCycles;
    superscalarIPC =(float)instructions /superscalarCycles;
    outOfOrderIPC =(float)instructions /outOfOrderCycles;
    smtIPC =(float)instructions /smtCycles;
    superscalarSpeedup =(float)scalarCycles /superscalarCycles;
    outOfOrderSpeedup =(float)scalarCycles /outOfOrderCycles;
    smtSpeedup =(float)scalarCycles /smtCycles;
    printf("\n========================================\n");
    printf("        PERFORMANCE COMPARISON\n");
    printf("========================================\n");
    printf("\nArchitecture\t\tCycles\tIPC\n");
    printf("Scalar\t\t\t%d\t%.2f\n",
           scalarCycles,
           scalarIPC);
    printf("Superscalar\t\t%d\t%.2f\n",
           superscalarCycles,
           superscalarIPC);
    printf("Out-of-Order\t\t%d\t%.2f\n",
           outOfOrderCycles,
           outOfOrderIPC);
    printf("SMT\t\t\t%d\t%.2f\n",
           smtCycles,
           smtIPC);
    printf("\n========================================\n");
    printf("             SPEEDUP\n");
    printf("========================================\n");
    printf("\nSuperscalar Speedup = %.2f\n",
           superscalarSpeedup);
    printf("Out-of-Order Speedup = %.2f\n",
           outOfOrderSpeedup);
    printf("SMT Speedup = %.2f\n",
           smtSpeedup);
    printf("\n========================================\n");
    printf("Simulation completed successfully.\n");
    printf("========================================\n");
    return 0;
}
