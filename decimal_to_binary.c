#include <stdio.h>

int main() {
    int n;
    int arr[32];
    scanf("%d", &n);
    int count = 0, temp;
    if (n==0)
    {printf("0");
    return 0;}

    while (n != 0) {
        temp = n%2;
        if (temp==1) arr[count] = 1;
        else arr[count] = 0;
        count++;
        n /= 2;
    }
    
    for (int i=count-1; i>=0; i--) {
        printf("%d", arr[i]);
    }
    return 0;
}