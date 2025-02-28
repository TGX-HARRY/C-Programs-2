#include <stdio.h>
#include <math.h>

int main() {
    float val, Cval, Fval;
    printf("Enter a float value: ");
        scanf("%f", &val);

    Cval = ceilf(val); // max int value closest to the given number
    Fval = floorf(val); // min int value closest to the given number

    printf("Ceil value: %f\n", Cval);
    printf("Floor value: %f", Fval);
    return 0;
}