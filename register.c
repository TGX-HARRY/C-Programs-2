#include <stdio.h>

int main() {
    register int m = 10;
    int* a = &m;
    printf("%d", *a);
    return 0;
    // gives error: address of
    // register variable 'm' requested4
    // as 'm' is stored in CPU regsiter
    // it has no address
    // it is used for intermediate values
    // it is speedy to get form cpu register
    // then the RAM memory module
    
}
// Register -> Cache Memory -> Maim Memory (RAM) -> Secondary memory (HDDs and SSDs)