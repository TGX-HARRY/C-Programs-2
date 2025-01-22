#include <stdio.h>

int main() {
    int digit_count = 0, n;
    printf("Enter a number : ");
        scanf("%d", &n);
    while (n>1) {
        n = (int) n/10; //base division
        digit_count += 1;
    }
    printf("The number you entered has %d digits only.", digit_count);
    return 0;
}