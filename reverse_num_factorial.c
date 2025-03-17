#include <stdio.h>

int reverse_number(int n, int result) {
    if (n!=0) result = result * 10 + (n%10);
    else return result;
    return reverse_number(n/10, result);
}

int main() {
    int n;
    scanf("%d", &n);
    int rev_num = reverse_number(n, 0);
    printf("%d", rev_num);
    printf((n==rev_num && n>9)? "\nPalindrome": "\nnot Palindrome");
    return 0;
}