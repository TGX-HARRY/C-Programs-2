#include <stdio.h>

int main() {
    float len, wid;
    printf("ENter length of rectangle: ");
        scanf("%f", &len);
    printf("Enter width of rectangle: ");
        scanf("%f", &wid);
    printf("Perimeter of rectangle is %f units", 2*(len+wid));
    return 0;
}