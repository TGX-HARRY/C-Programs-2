#include <stdio.h>

int main() {
    int n;
    printf("Enter a number : ");
        scanf("%d", &n);

    int count = 0;
    for (int i=1; i<=n; i++) {
        char c = 'A';
        for (int j=1; j<=i; j++) {
            printf("%c ", c);
            c++;
        }
        printf("\n");
    }
    return 0;
}