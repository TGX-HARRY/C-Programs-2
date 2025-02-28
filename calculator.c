#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

float add(float n1,float n2) {
    return n1+n2;
}
float diff(float n1,float n2) {
    return abs(n1-n2);
}
float prod(float n1,float n2) {
    return n1*n2;
}
float divi(float n1,float n2) {
    return n1>n2? n1/n2: n2/n1;
}

int main() {
    float a,b;
    printf("Enter 2 numbers: ");
        scanf("%f %f", &a, &b);

    int validation = 1;    
    while (validation)
        {
    printf("What do you want to perform?\n");
    printf("Type 1 to get sum\nType 2 to get difference\nType 3 to get product\nType 4 to get quotient\nType 5 to get allllll!!\n");
    
        int choice;
        printf("Choice: ");
            scanf("%d", &choice);
        
        if (choice==1)
            printf("Sum: %.2f\n", add(a,b));

        else if (choice==2)
            printf("Difference: %.2f\n", diff(a,b));

        else if(choice==3)
            printf("Product: %.2f\n", prod(a,b));

        else if(choice==4)
            printf("Quotient: %.2f\n", divi(a,b));

        else if(choice==5) {
            printf("Sum: %.2f\n", add(a,b));
            printf("Difference: %.2f\n", diff(a,b));
            printf("Product: %.2f\n", prod(a,b));
            printf("Quotient: %.2f\n", divi(a,b));
            validation=0;
        }

        else if(choice==6) // end the program
            return 0;

        else
        {
            printf("Enter a valid choice\n\n\n");
            sleep(3);
            system("cls");
            validation = 1;
        }
    }
    return 0;
}