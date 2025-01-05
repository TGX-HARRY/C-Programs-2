#include<stdio.h>

int main() {
    
    float pi = 3.14;
    float radius;
    printf("Enter radius of the circle: ");
        scanf("%f", &radius);
    printf("Area of circle with radius %f is %f", radius, pi*radius*radius);
    return 0;
}