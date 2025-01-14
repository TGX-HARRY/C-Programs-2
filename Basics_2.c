#include <stdio.h>

int main() {
    //basic  airthematic operatorz include +,-,*,/ and %
    int a = 5;
    int b = 10;
    printf("%f \n", a+b); // adds
    printf("%d \n", a-b); // subtracts
    printf("%d \n", a*b); // multiplies
    printf("%d \n", b/a); // divides
    printf("%d \n", b%a); // gives remainder after division
    // all operations were performed on int (int op int), hence output will be always int
    // if we try get a float value, we get 0.000000 instead of the answer

    // similarily, operations performed on floats (float op float)
    // output will be float
    // similar case for operations performed on int and float (int op float / float op int)
    // output will be float
    float c = 1.0;
    float d = 2.00;

    printf("%f \n", a+c); // gives 6.000000
    printf("%f \n", a*c); // gives 5.000000
    printf("%f \n", c+d); // gives 3.000000

    int g = (int) 1.999999;
    printf("%d", g);
    return 0;
}