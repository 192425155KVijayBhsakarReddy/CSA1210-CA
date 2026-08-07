#include <stdio.h>

int main() {
    int dividend, divisor;

    printf("Enter Dividend: ");
    scanf("%d", &dividend);

    printf("Enter Divisor: ");
    scanf("%d", &divisor);

    if(divisor == 0){
        printf("Division by zero not allowed.\n");
        return 0;
    }

    printf("\nQuotient  = %d\n", dividend/divisor);
    printf("Remainder = %d\n", dividend%divisor);

    printf("\nDebug:\n");
    printf("Restoring Division performs extra restoration steps.\n");
    printf("Non-Restoring Division avoids repeated restoration and is faster.\n");

    return 0;
}
