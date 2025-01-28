#include <stdio.h>
#include <math.h>

int number, org_n, d, n = 0, result = 0;

int main() {
    printf("Enter a number: ");
    scanf("%d", &number);

    org_n = number;

    while (org_n != 0) {
        org_n /= 10;
        n++;
    }

    org_n = number;
    while (org_n != 0) {
        d = org_n % 10;
        int temp = (int)pow(d, n);
        printf("%d", temp);
        result += temp;
        org_n /= 10;
    }

    if (result == number) {
        printf("Number is an Armstrong number.");
    } else {
        printf("%d\n", result);
        printf("Number is not an Armstrong number.");
    }

    return 0;
}
