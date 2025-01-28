#include <stdio.h>
// diamond pattern
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        for (int k=n-i+1; k>=1; k--) {
            printf(" ");
        }
        for (int j=i; j>=1; j--) {
            printf("*");
        }
        for (int l=2; l<=i; l++) {
            printf("*");
        }
        for (int m=1; m<=i; m++) {
            printf(" ");
        }
        printf("\n");
    }
    for (int i=1; i<=n; i++) {
        for (int p=1;p<=i+1;p++) {
            printf(" ");
        }
        for (int q=n-1; q>=i; q--) {
            printf("*");
        }
        for (int o=n-1; o>=i+1; o--) {
                printf("*");
        }
        printf("\n");
    }
    return 0;
}