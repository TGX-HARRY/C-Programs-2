#include <stdio.h>

int isPerfectSquare(int num) {
    int r;
    for(r=1; r<=num; r++) {
        if((float)num/r==(float)r)
        return 1;
    }
    return 0;
}

int main() {
    int min, max;
    printf("Enter range: ");
        scanf("%d %d", &min, &max);
    
    int r;
    for(r=min; r<=max; r++) {
        if (isPerfectSquare(r))
        printf("%d\n", r);
    }
    return 0;
}