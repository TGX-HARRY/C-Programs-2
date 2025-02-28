#include <stdio.h>
#include <math.h>

int power(int n1, int n2) {
    int result=1, r;
    if (n2==0) return 1;
    for(r=1; r<=n2; r++)
        result*=n1;
    return result;
}

int isPalindrome(int num) {
    int digit, digits=0, result=0, orginalnum = num;

    while(orginalnum!=0) {
        orginalnum /=10;
        ++digits;
    }

    orginalnum=num;

    while(orginalnum!=0) {
        digit = orginalnum%10;
        result += digit*power(10,digits-1);
        --digits;
        orginalnum /= 10;
    }

    return (result==num);
}

int main() {
    int n;
    printf("Enter a number : ");
        scanf("%d", &n);
    // printf("%d\n", isPalindrome(n));
    if(isPalindrome(n))
        printf("Palindrome");
    else
        printf("Not Palindrome");
    
    return 0;
}