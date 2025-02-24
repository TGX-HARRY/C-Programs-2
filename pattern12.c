#include <stdio.h>

int main() {
    int value;
    printf("Enter a number : ");
        scanf("%d", &value);
    
        int row = 2 * value - 1;
        int column = 2 * value - 1;
        int arr[row][column];
        int i, j, k;
        
        for (k = 0; k < value; k++) {
            j = k;
            while (j < column - k) {
                arr[k][j] = value - k;
                j++;
            }
            i = k + 1;
            while (i < row - k) {
                arr[i][row - 1 - k] = value - k;
                i++;
            }
            j = column - k - 2;
            while (j >= k) {
                arr[column - k - 1][j] = value - k;
                j--;
            }
            i = row - k - 2;
            while (i > k) {
                arr[i][k] = value - k;
                i--;
            }
        }
     
        // print the pattern
        for (i = 0; i < row; i++) {
            for (j = 0; j < column; j++) {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }}
