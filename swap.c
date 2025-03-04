#include <stdio.h>  

void swap(int *a, int *b) {       
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    printf("Before Swap: \nA: %d\nB: %d", a,b);
    swap(&a, &b);
    printf("\n\nAfter swap: \nA: %d\nB: %d", a,b);
    return 0;
}