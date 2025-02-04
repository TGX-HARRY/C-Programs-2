#include <stdio.h>
// pyramid of numbers
int main() {
    int n;
    printf("Enter a number : ");
        scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        for (int j=n; j>=i; j--) {
            printf(" ");
        }
        for (int k=i; k>=2; k--) {
            printf("%d", k);
        }
        for (int l=1; l<=i; l++) {
            printf("%d", l);
        }
        printf("\n");
    }
    return 0;
}