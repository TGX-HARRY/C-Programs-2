#include <stdio.h>

int main() {
    // >50 and >18
    int weight, age;
    char choice, pinky;
    printf("Enter you age, don't lie: ");
        scanf("%d", &age);

    if (age>=18)
    printf("\nYou sure?\n");
    scanf(" %c", &choice);
    // printf("%s", choice);
    if (choice=='y') {    
        printf("\nBut I am sus so lets do a pinky promise...");
        printf("\nEnter \"p\" to make a pinky promise: \n");
        scanf("%c", &pinky);
        }
    else {
        printf("haha caught ya!");
        return 0;
    }
    if (pinky=='p') {

        printf("\nEnter your weight, don't be shy [:)] : ");
        scanf("%d", &weight);
        if (weight>80)
            printf("\nConsider donating some fat to skinny ppl like haddi too :)!");

        if (age>=18 && weight>=50) {
            printf("\nYou are eligible to donate your blood!");
        }
        else {
            printf("\nSorry but you ain't able to donate blood but thanks for trying!");
        }
    }
    else {
        printf("Caught ya, hehehe!");
        return 0;
    }
    return 0;
}