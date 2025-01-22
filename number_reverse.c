#include <stdio.h>
#include <math.h>

// number reversing can done in 2 different ways
// one way using array where we get result but on in integer form
// other way using math.h power function as follows
int main() {
    int count = 0, n, rev_num;
    // int arr[100];
    printf("Enter a number: ");
        scanf("%d", &n);

    int m=n;
    while (n>0) {
        n=(int)n/10;
        count+=1;
    }
    while(m>0) {
        // arr[count] = m%10;
        rev_num += (m%10)*pow(10, count-1);
        // printf("%d\n",rev_num);
        m = (int) m/10;
        count-=1;
    }
    printf("%d", rev_num);
    // for (int i=0; i<count; i++) {
    //     printf("%d", arr[i]);
    // }
    return 0;
}