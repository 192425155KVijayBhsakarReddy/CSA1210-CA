#include <stdio.h>
int main()
{
    int normal_cycles = 9;
    int stall_cycles = 12;
    int forwarding_cycles = 10;
    int branch_prediction_cycles = 9;
    printf("===== PIPELINE HAZARD SIMULATION =====\n\n");
    printf("Instructions:\n");
    printf("I1: ADD R1, R2, R3\n");
    printf("I2: SUB R4, R1, R5\n");
    printf("I3: AND R6, R4, R7\n");
    printf("I4: BEQ R6, R0, TARGET\n");
    printf("I5: OR R8, R2, R3\n");
    printf("\n===== HAZARDS =====\n");
    printf("\n1. DATA HAZARD");
    printf("\nI2 depends on the result of I1.");
    printf("\n\n2. CONTROL HAZARD");
    printf("\nI4 is a branch instruction.");
    printf("\n\n3. STRUCTURAL HAZARD");
    printf("\nTwo instructions require the same hardware resource.");
    printf("\n\n===== HAZARD HANDLING =====");
    printf("\n\nWithout Hazard Handling:");
    printf("\nCycles = %d", normal_cycles);
    printf("\n\nWith Stalling:");
    printf("\nCycles = %d", stall_cycles);
    printf("\nStall Cycles = %d", stall_cycles - normal_cycles);
    printf("\n\nWith Data Forwarding:");
    printf("\nCycles = %d", forwarding_cycles);
    printf("\nStalls Reduced = %d",
           stall_cycles - forwarding_cycles);
    printf("\n\nWith Branch Prediction:");
    printf("\nCycles = %d",
           branch_prediction_cycles);
    printf("\n\n===== PERFORMANCE =====");
    printf("\nSpeedup using forwarding = %.2f",
           (float)stall_cycles /
           forwarding_cycles);

    printf("\nSpeedup with branch prediction = %.2f\n",
           (float)stall_cycles /
           branch_prediction_cycles);

    return 0;
}
