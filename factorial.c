#include <stdio.h>
#include <math.h>

int main() {
    int fact = 1;
    int n , fsum;
    printf("Enter a number : ");
        scanf("%d", &n);
    
    for (int i = 1; i<=n; i++){
        for (int j = 1; j <= i; j++) {
                fact *= j;
            }
            printf("%d \n", fact);
            fsum += fact;
            fact = 1;
        }
    printf("Sum of Factorials of first %d natural numbers is: %d", n, fsum);
    return 0;
}