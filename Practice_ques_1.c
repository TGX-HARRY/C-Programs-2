#include<stdio.h>

int main() {
    
    float side;
    printf("Enter the side of the square: ");
        scanf("%f", &side);
    printf("Area of sqaure of side %f units is %f sq. units", side, side*side);
    
    return 0;
}