#include <stdio.h>

int main() {
    int total = 100;
    int i = 10;
    printf("The initial values of total and i are %d and %d\n", total, i);
    total = ++i;
    printf("The resulting values of total and i are %d and %d\n", total, i);

    total = 100;
    i = 10;
    printf("\n\nThe initial values of total and i are %d and %d\n", total, i);
    total = i++;
    printf("The resulting values of total and i are %d and %d\n", total, i);
    return 0;
}