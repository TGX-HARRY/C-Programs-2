#include <stdio.h>

int main() {
    int odds, evens, n;
    do {
        if (n%2==0)
        evens += n;
        else
        odds += n;
        n++;
    } while (n<=50);
    
    printf("Sum of even numbers : %d\n", evens);
    printf("Sum of odd numbers : %d", odds);
    return 0;
}