#include <stdio.h>
#include <limits.h>

int main() {
    int a, b;
    printf("Enter two signed integers (-128 to 127): ");
    scanf("%d %d", &a, &b);

    int sum = a + b;

    if (sum > 127 || sum < -128) {
        printf("\nOverflow Detected!\n");
        printf("Actual Sum = %d\n", sum);
    } else {
        printf("\nNo Overflow.\n");
        printf("Sum = %d\n", sum);
    }

    return 0;
}
