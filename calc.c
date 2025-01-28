#include <stdio.h>
static int a=20, b; 
// static global int can be changed in any function
// but global property acts and it makes changes in every function
// so global is dangerous if touched without care

// static takes one memory slot
// and every change in any function is stored in one slot
// so the slot is static, not the value it holds
// static value if changed in any function will consider it on every reintialization
// but if reassigned, it will take that value to other functions where it is called
// static const int a=0;

int main2() {
    a++; // global program once changed in any function,
         // it is changed for every function the whole program
}
int main() {
    printf("Main2 value is : %d\n", main2());
    printf("Number 1: ");
        scanf("%d", &a);
    printf("Number 2: ");
        scanf("%d", &b);
    // printf("Main2 value is : %d\n", main2());
    printf("The sum is %d\n", a+b);
    printf("The difference is %d\n", a-b); //assuming a>b in all cases
    printf("The product is %d\n", a*b);
    printf("The division is %d\n", a/b); // again assuming a>b
    printf("The remainder of division is %d\n", a%b);
    printf("Number 1 in octal form: %o\nNumber 2 in octal form is %o\n", a, b);
    printf("Number 1 in hexadecimal form: %X \nNumber 2 in hexadecimal form is: %X\n", a, b);
    return 0;
}

