#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b;
    printf("Enter 2 numbers asap: ");
    scanf("%d %d", &a, &b);

    printf("Process started!");
    printf("\nGetting system data....");
    sleep(10);
    printf("\nSystem data acquired, proceeding to send to remote client....");
    sleep(10);
    printf("\nNow you may continue with your work\n\n\n\n\n\n\n\n\n\n");
    sleep(2);

    if (a>b)
    printf("%d > %d",a,b);
    if (b>a)
    printf("%d > %d",b,a);
    
    return 0;
}