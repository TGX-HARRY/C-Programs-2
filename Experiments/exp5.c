#include <stdio.h>

int main() {
    int a,b;
    printf("Enter any 2 numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum: %d\n", a+b);
    printf("Subtraction: %d\n", a-b);
    printf("Division: %d\n", a/b);
    printf("Multiplication: %d\n", a*b);
    return 0;
}
