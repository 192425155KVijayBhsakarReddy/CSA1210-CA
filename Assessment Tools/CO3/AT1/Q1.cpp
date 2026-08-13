#include <stdio.h>

int main()
{
    int R1, R2, R3, R4;

    printf("Enter value for R1: ");
    scanf("%d", &R1);

    printf("Enter value for R2: ");
    scanf("%d", &R2);

    printf("\nInitial Register Values\n");
    printf("R1 = %d\n", R1);
    printf("R2 = %d\n", R2);

    R3 = R1 + R2;
    printf("\nADD Operation: R3 <- R1 + R2\n");
    printf("R3 = %d\n", R3);

    R4 = R1 - R2;
    printf("\nSUB Operation: R4 <- R1 - R2\n");
    printf("R4 = %d\n", R4);

    R3 = R1 & R2;
    printf("\nAND Operation: R3 <- R1 AND R2\n");
    printf("R3 = %d\n", R3);

    R4 = R1 | R2;
    printf("\nOR Operation: R4 <- R1 OR R2\n");
    printf("R4 = %d\n", R4);

    return 0;
}
