#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int cx2, cx, cons;
    bool ch = true;
    char choice;

    // taking coefficients as equation and building the equation 
    while (ch == true)
    {
    printf("Enter coefficient of x^2: ");
        scanf("%d", &cx2);
    printf("Enter coefficient of x: ");
        scanf("%d", &cx);
    printf("Enter constant term: ");
        scanf("%d", &cons);
    
    // building equation to confirm
    if (cx>0) {
        if (cons>0)
            printf("\n\nYour equation is (%d)x^2+%dx+%d", cx2, cx, cons);
        else
            printf("\n\nYour equation is (%d)x^2+(%d)x%d", cx2, cx, cons);
            }
    else {
        if (cons>0)
            printf("\n\nYour equation is (%d)x^2%dx%d", cx2, cx, cons);
        else
            printf("\n\nYour equation is (%d)x^2%dx%d", cx2, cx, cons);
        }

    printf("\nEnter \"N\" or \'n\' if not: ");
    scanf(" %c", &choice);
    if (choice == 'n' || choice == 'N'){ 
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        ch = true;
        }
    else
        ch=false;
    }

    // calculation and output of roots
    int D;
    float root1, root2;
    if (cx<0) {cx *= -1;}
    D = pow(cx, 2) - (4*cx2*cons);
    // printf("\n%d", D);
    if (D>0) {
        root1 =  (sqrt(D) - cx)/(2*cx2);
        root2 =(-1)*((sqrt(D) + cx)/(2*cx2));
        printf("Roots are %.2f, %.2f", root1, root2);
    }
    else if (D==0) {
        root1 = (-cx)/(2*cx2);
        root2 = cx/(2*cx2);
        printf("Roots are %.2f, %.2f", root1, root2);
    }
    else {
        printf("This equation have imaginary roots.");
    }
    return 0;
}