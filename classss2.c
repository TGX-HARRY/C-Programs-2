#include <stdio.h>

int main() {
    // engineering, buisness, pharm
    // eng -> civil, mech, case
    // buis -> comm, purchase
    int subtype;
    char type;
    printf("Enter your department: ");
        scanf("%c", &type);

    switch(type) {
        case 'e': {
            printf("Enter your branch: ");
                scanf("%d", &subtype);
            switch(subtype) {
                case 1:
                    printf("\nYou are in Engineering Department, Civil Branch");
                    break;
                case 2:
                    printf("\nYou are in Engineering department, Computer Branch");
                    break;
                case 3:
                    printf("\nYou are in Engineering Department, Mechanical Branch");
                    break;
                default:
                    printf("\nNot a valid branch!");
                    break;
            }
            break;
        }

        case 'b': {
            printf("Enter your branch: ");
                scanf("%d", &subtype);
            switch(subtype) {
                case 1:
                    printf("\nYou are in Business Department, Commerce Branch");
                    break;
                case 2:
                    printf("\nYou are in Business department, Purchase Branch");
                    break;
                default:
                    printf("\nNot a valid branch!");
                    break;
            }
            break;
        }


        case 'p': 
            printf("You are in Pharmacy Department");
            break;
    }
    printf("\nThank you for visiting Chitkara University!");
    return 0;
}