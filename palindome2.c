#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int r;
    int result=0;
    int orginalnum = num;

    while(orginalnum!=0) {
        r=orginalnum%10;
        result=result*10+r;
        orginalnum /= 10;
    }
    printf("%d", result);
}