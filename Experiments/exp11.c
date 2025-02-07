#include <stdio.h>

// function to get n1 raised to power n2
// made this to prevent error of pow function in math.h
int power(int n1, int n2) {
    int result=1;
    for (int i=1; i<=n2; i++) {
        result *= n1;
    }
    return result;
}

int main() {
    int digits =0, n, a, m;
    printf("Enter the number : ");
        scanf("%d", &n);
    for (m=n; m>0; digits++) {
        m = (int) m/10;
    }

    int result = 0;
    for (m=n; m!=0;) {
        a = m%10;
        result += power(a, digits);
        m = (int) m/10;
    }

    if (result == n) 
        printf("\nNumber is an Armstrong");
    else 
        printf("\nNumber isn't an Armstrong");
    return 0;
}