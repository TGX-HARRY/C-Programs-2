#include <stdio.h>

int get_reversed_binary(int n, int bin) {
        if (n!=0) bin = bin*10+n%2;
        return (n!=0)?get_reversed_binary(n/2, bin): bin;
}

int main() {
    int n;
    printf("Enter the number: ");
        scanf("%d", &n);
    printf("%d", get_reversed_binary(n, 0));
    return 0;
}
