#include <stdio.h>
#include <stdbool.h>

int main() {
    int a,b;
    float c = a>b;
    printf("Enter 2 numbers seprated by space: ");
    scanf("%d %d", &a, &b);
    // printf("%f", c);
    if (c==0) 
        printf("B is greater than A");
    else
        printf("A is greater than B");
    return 0;
}