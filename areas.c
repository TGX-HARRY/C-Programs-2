#include <stdio.h>
#include <ctype.h>

float square(float length) {
    return length*length;
}
float rectange(float length, float breadth) {
    return 2*(length+breadth);
}
float circle( float radius) {
    return 3.14*radius*radius;
}

int main() {
    char shape[25];
    printf("Whose area you want to calculate?\n");
        scanf("%s", &shape);

    if(shape=="square")
    {
        float len;
        printf("Enter length of any side of square: ");
            scanf("%f", &len);
        printf("Area of square is: %.2f", square(len));
    }
    else if(shape=="rectangle") {
        float len, brt;
        printf("Enter length and breadth of rectangle: ");
            scanf("%f %f", &len, &brt);
        printf("Area of rectangle is: %.2f", rectange(len, brt));
    }
    else if(shape=="circle") {
        float rad;
        printf("Enter radius of circle: ");
            scanf("%f", &rad);
        printf("Area of circle is: %f", circle(rad));
    }
    return 0;
}