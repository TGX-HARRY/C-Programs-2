#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
        scanf("%d", &n);
        
    int r,c;
    for(r=1;r<=n;r++) {
        for(c=1; c<=r; c++) {
            printf("%d ", r+c);
        }
        printf("\n");
    }
}