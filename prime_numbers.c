#include <stdio.h>

int main() {
    int a,b;
    printf("Enter a range : ");
    scanf("%d %d", &a, &b);

    int r,c;
    for(r=a; r<=b; r++) 
    {
        for(c=2; c<=r-1; c++) {
            if (r%c==0)
            {
                break;
            }
        }
        if (c==r) printf("%d\n", r);
    }
    return 0;
}   