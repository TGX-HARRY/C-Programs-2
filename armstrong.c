#include <stdio.h>
// function to get ni raised to pwer n2
// made this to prevent error of pow function in math.h
int power(int n1, int n2) {
    int result=1;
    for (int i=1; i<=n2; i++) {
        result *= n1;
    }
    return result;
}

int main() {
    int digits =0, n, a;
    printf("Enter the number : ");
        scanf("%d", &n);
    int m=n;
    while (m!=0) {
        m = (int) m/10;
        digits++;
    }
    printf("Digits: %d\n", digits);

    int o = n;
    int result = 0;
    while (o!=0) {
        a = o%10;
        result += power(a, digits);
        // printf("%d\n", result);
        o = (int) o/10;
    }
    printf("Result is: %d", result);

    if (result == n) 
        printf("\nNumber is an Armstrong");
    else 
        printf("\nNumber isn't an Armstrong");
    return 0;

}