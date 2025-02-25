#include <stdio.h>

int main() {
    float pi=3.14, r, a, cu;
    printf("Enter radius: ");
        scanf("%f", &r);
    cu = 2*pi*r;
    a=pi*r*r;
    printf("Area: %.2f\n", a);
    printf("Circumference: %.2f\n", cu);
    return 0;
}