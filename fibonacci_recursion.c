#include <stdio.h>
// 0 1 1 2 3 5 8 12
int a=0, b=1, c;
int fibo(int n) {
    c = a+b;
    a=b;
    b=c;
    return (c<n)? c: c-a;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", fibo(n));
    return 0;
}