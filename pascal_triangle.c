#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
        scanf("%d", &n);
    int pascal_row[n][n];
    int r,c;
    for(r=1;r<=n;r++) {
        for(c=0; c<=r; c++) {
            pascal_row[r][c]=r;
        }
    }
    for(int i=0, j=0; i<n, j<n; i++, j++) 
        printf("%d\n", pascal_row[i][j]);
    return 0;
}