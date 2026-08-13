#include <stdio.h>
#define STAGES 5
#define INSTRUCTIONS 5
int main()
{
    char *stage[] = {
        "IF", "ID", "EX", "MEM", "WB"
    };
    int i, cycle;
    int pipeline_cycles = STAGES + INSTRUCTIONS - 1;
    int non_pipeline_cycles = STAGES * INSTRUCTIONS;
    printf("===== 5-STAGE PIPELINE =====\n\n");
    printf("Stages: IF -> ID -> EX -> MEM -> WB\n\n");
    for (cycle = 1; cycle <= pipeline_cycles; cycle++)
    {
        printf("Cycle %d: ", cycle);
        for (i = 0; i < INSTRUCTIONS; i++)
        {
            int stage_no = cycle - i - 1;

            if (stage_no >= 0 && stage_no < STAGES)
            {
                printf("I%d-%s  ",
                       i + 1,
                       stage[stage_no]);
            }
        }
        printf("\n");
    }
    printf("\n===== PERFORMANCE =====\n");
    printf("Number of Instructions = %d\n", INSTRUCTIONS);
    printf("Pipeline Stages = %d\n", STAGES);
    printf("Non-Pipelined Cycles = %d\n",
           non_pipeline_cycles);
    printf("Pipelined Cycles = %d\n",
           pipeline_cycles);
    printf("Speedup = %.2f\n",
           (float)non_pipeline_cycles /
           pipeline_cycles);
    printf("Throughput = %.2f instructions/cycle\n",
           (float)INSTRUCTIONS /
           pipeline_cycles);
    return 0;
}
