#include <stdio.h>

int x; //GLOBAL VARIABLE

void m(); // declaring the function

void main()
{
    m(); //Function call
    printf("%d", x);
}

void m() // defining the function
{
x = 4; // X is updated
}