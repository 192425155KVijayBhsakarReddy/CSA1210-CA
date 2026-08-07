#include <stdio.h>

int main() {
    float f1 = 100000000.0f, f2 = 1.0f;
    double d1 = 100000000.0, d2 = 1.0;

    printf("Float  Result  : %.0f\n", f1 + f2);
    printf("Double Result  : %.0lf\n", d1 + d2);

    printf("\nObservation:\n");
    printf("Float loses precision when adding very large and very small numbers.\n");
    printf("Double precision provides more accurate results.\n");

    return 0;
}
