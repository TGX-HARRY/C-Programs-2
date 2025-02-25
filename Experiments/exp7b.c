#include <stdio.h>

int main() {
    int a=1,b=2;
    printf("Before swapping\na=%d\nb=%d\n\n",a ,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swapping\na=%d\nb=%d", a,b);
    return 0;
}