#include <stdio.h>

int main() {
    
    int n;
    printf("Enter a number : ");
        scanf("%d", &n);

    for (int i=1; i<=n; i++) {              // outer loop for rows
        for (int j=1; j<=n; j++) {          // inner loop for columns
            if (i==j || i+j == n+1) {       // after analyzing pattern we needmain diagonal
                printf("*");                // and sum of row and column number to be greater
            }                               // greater than size of pattern
            else {
                printf(" ");
                }
            }
            printf("\n");
        }
        
        return 0;
    }

    
