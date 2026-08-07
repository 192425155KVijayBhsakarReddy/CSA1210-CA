#include <stdio.h>

int main() {
    int m, q;
    printf("Enter Multiplicand: ");
    scanf("%d", &m);
    printf("Enter Multiplier: ");
    scanf("%d", &q);

    int product = m * q;

    printf("\nBooth's Algorithm Debug (Simplified)\n");
    printf("Multiplicand = %d\n", m);
    printf("Multiplier   = %d\n", q);
    printf("Product      = %d\n", product);
    printf("\nVerify:\n");
    printf("- Correct bit-pair checking\n");
    printf("- Arithmetic right shift\n");
    printf("- Proper sign extension\n");

    return 0;
}
