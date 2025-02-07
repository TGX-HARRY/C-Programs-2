#include <stdio.h>

int main() {
    int a=15, b=5, c=100;
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