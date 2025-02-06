#include <stdio.h>

int main() {
    static int m = 10;
    int n=100;
    m+=50;
    n+=50;
    printf("m = %d, n = %d", m,n);
    return 0;
}