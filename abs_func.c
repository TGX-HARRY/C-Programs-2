#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int choice=1;
    // while (choice)
    {    
        int num;
        printf("Enter an integer: ");
            scanf("%d", &num);
        // if (isalpha(num))
        // {
            printf("%d", abs(num));
        //     choice=0;
        // }
        // else 
        {
            printf("Enter a valid integer!\n\n\n");
            sleep(3);
            system("cls");
            choice = 1;
        }
    }
    return 0;
}