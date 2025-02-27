#include <stdio.h>
// A good exercise to declare function at top with required parameters
void MyFunction(char name[20]);

int main() {
    char name[20];
    printf("Enter your name: ");
        scanf("%s", &name);
    MyFunction(name);
    return 0;
}
// and then define the function for better flexibility
void MyFunction(char name[20]) {
    printf("Hello! Your name is %s!", name);
}

