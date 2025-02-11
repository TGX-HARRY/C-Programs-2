#include <stdio.h>

int main() {
    float num1, num2;
    char op;
    printf("Enter number 1: ");
    scanf("%f", &num1);
    printf("Enter number 2: ");
    scanf("%f", &num2);
    printf("Enter operator: ");
    scanf(" %c", &op);

    switch(op) {
        case '+':
            printf("Sum of numbers is %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Difference of numbers is %.2f\n", num1 - num2); // assume num1>num2
            break;
        case '*':
            printf("Product of numbers is %.2f\n", num1 * num2);
            break;  
        case '/':  
            printf("Quotient of numbers is %.2f\n", num1 / num2); // assume num1>num2
            break;
        default:
            printf("Invalid operator\n");           
    }
    printf("Thank you!");
    return 0;
}