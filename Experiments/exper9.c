#include <stdio.h>

int main() {
    int n;
    printf("Enter any number : ");
        scanf("%d", &n);
    printf(n>0? "positive": n<0? "Negative": n==0? "Zero": "Invalid number");
}