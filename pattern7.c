#include <stdio.h>

//Pyramid
int main() {
    int n;
    printf("Enter a number : ");
        scanf("%d", &n);;
    
    for (int i=1; i<=n; i++) {
        for (int j=n-i+1; j>1; j--) {
            printf(" ");
        }
        for (int k=1; k<=i;k++) {
            printf("*");
        }
        for (int l=2; l<=i; l++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
