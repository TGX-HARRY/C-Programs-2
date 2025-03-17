#include <stdio.h>

int main() {
    int len, brt;
    printf("Enter length & breadth: ");
        scanf("%d %d", &len, &brt);
    int *pl=&len, *pb=&brt;
    int area = (*pl)*(*pb);
    printf("Area= %d", area);
    return 0;
}