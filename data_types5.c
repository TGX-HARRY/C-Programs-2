#include <stdio.h>

int main() {
    int a = 9;
    void* ptr = &a; // void type pointer
    printf("%d", *(int*)ptr); 
    // point towards void pointer which is pointing to address of a
    // int* means pointer to int
    // void* means pointer to void type, which can be exlcitly casted to any data types
    // so basically we are typecasting the void pointer to get the actual value
    return 0;
}