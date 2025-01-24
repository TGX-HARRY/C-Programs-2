#include <stdio.h>

int main() {
    int size_int = sizeof(int);
    int size_float = sizeof(float);
    int size_char = sizeof(char);
    int size_double = sizeof(double);

    printf("%d\n", size_int);
    printf("%d\n", size_float);
    printf("%d\n", size_char);
    printf("%d", size_double);

    return 0;
}