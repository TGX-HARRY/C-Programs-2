#include <stdio.h>

int a = 19; //Scope is global accross the program and can be accessed in any function

void main2() {
    int a = 90; // Scope is local and only within the walls of the main2 function
    printf("%d", a);
}

int main() {
    static int a = 0;

    int b = 50; // Scope is local and only within the walls of main function
    {   
        int b = 10;
        printf("%d %d\n", a,b);
        {
            a+=4;
            b+=4;
            printf("%d %d", a,b);
        }
    }
    // even after calling this main2 function, value of a remains the same as decalred above
    // showing int a is bound in main function and thus cannot be affected by any other function
    printf("\n%d %d", a,b);
    //local is priortised over global until it isn't defined in main
    return 0;
}
