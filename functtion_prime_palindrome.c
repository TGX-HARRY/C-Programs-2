#include <stdio.h>

int isPrime(int num) {
    int i;
    for(i=2;i<num;i++) 
    {
        if (num%i==0) return 0;
    }
    return 1;
}

int isPalindrome(int num) {
    int r, result=0, orginalnum = num;

    while(orginalnum!=0)
    {
        r=orginalnum%10;
        result=result*10+r;
        orginalnum /= 10;
    }
    return (result==num);
}

void Display(int num) {
    if (isPrime(num))
    printf("Number is prime!\n");
    else
    printf("Number is not prime\n");

    if(isPalindrome(num))
    printf("Number is Palindrome\n");
    else
    printf("Number is not Palindrome\n");
}

int main() {
    int num;
    printf("Enter a number: ");
        scanf("%d", &num);
        
    Display(num);
    return 0;
}