#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


int main() {
    int choice=1;
    while (choice)
    {    
        char character;
        printf("Enter a character: ");
            scanf(" %c", &character);
        if (isupper(character))
        {printf("Uppercase");choice=0;}
        else if (islower(character))
        {printf("Lowercase");choice=0;}
        else 
        {
            printf("Enter a valid alphabet!\n\n\n");
            sleep(3);
            system("cls");
            choice = 1;
        }
    }
    return 0;
}