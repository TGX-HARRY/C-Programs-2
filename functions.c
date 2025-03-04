#include <stdio.h>

// return_type function_name(parameters) {
// ----function defining------
//    }
void Display(int sum) {
    printf("\n\nThe sum is %d", sum);
}

void Add(int a, int b) {
    Display(a+b);
}

int main() {
    int a,b;
    printf("Enter 2 numbers: ");
        scanf("%d %d", &a, &b);
    Add(a,b);
    return 0;
}