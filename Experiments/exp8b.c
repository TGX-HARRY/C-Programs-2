#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter any 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a>b) {
        if (a>c)
        printf("Greatest number : %d",a);
        else
        printf("Greatest number : %d",c);
    }
    else if (b>a) {
        if (b>c)
        printf("Greatest number : %d",b);
        else
        printf("Greatest number : %d",c);
    } 
    return 0;
}