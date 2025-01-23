#include <stdio.h>

int main() {
    char a='a', c;
    printf("Value of a: %c\n", a);
    a++; // ASCII value increment that is a->97 to b->98
    printf("Value of a after increment is : %c\n", a);
    c=99; // ASCII Values: a->97, b->98, c->99
    printf("Value of c : %c\n", c);
    printf("ASCII Value of b which is stored in a is : %d", a);
    return 0;
}