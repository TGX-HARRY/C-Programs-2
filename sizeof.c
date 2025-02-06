#include <stdio.h>

int main() {
    int a = 1;
    int b = (long) 20002000200l;
    printf("%d", sizeof(a));
    printf("%d", sizeof(b));
    return 0;
}