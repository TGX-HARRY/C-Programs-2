#include <stdio.h>

int power(int n1, int n2) {
    int res=1;
    for(int i=1; i<=n2; i++) {
        res *= n1;
    }
    return res;
}

int main() {
    int n, m, a, digits=0, rev_num=0;
    printf("Enter a number: ");
        scanf("%d", &n);
    m=n;
    while (m!=0) {
        m=(int)m/10;
        digits++;
    }
    printf("Digit count : %d\n", digits);
    m=n;
    while (m!=0) {
        a=m%10;
        digits--;
        rev_num+=a*power(10,digits);
        m=(int)m/10;
    }
    printf("Reversed number : %d", rev_num);
    return 0;
}