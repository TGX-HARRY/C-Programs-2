#include <stdio.h>

int main() {
    int a = 9;
    void* ptr = &a; // void type pointer
    printf("%d", *(int*)ptr); 
    // int* means pointer to int
    // void* means pointer to void type, which can be exlcitly casted to any data types
    // so basically we are typecasting the void pointer to get the actual value
    // we are teling the first pointer that it is a pointer to int and 
    // hence get th evalue in int format
    return 0;
}