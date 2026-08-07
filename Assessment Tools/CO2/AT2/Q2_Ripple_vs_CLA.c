#include <stdio.h>

int main() {
    int bits;
    printf("Enter number of bits: ");
    scanf("%d", &bits);

    printf("\nRipple Carry Adder Delay = %dT\n", bits);
    printf("Carry propagates through all %d stages.\n", bits);

    printf("\nCarry Look-Ahead Adder:\n");
    printf("Carry is generated in parallel.\n");
    printf("Approximate Delay = log2(%d) levels (hardware dependent).\n", bits);

    return 0;
}
