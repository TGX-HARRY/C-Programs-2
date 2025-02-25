#include <stdio.h>

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int r,c;
    long int fact;
    for(r=1; r<=n; r++) 
    {
        for(c=1; c<=r; c++)
        {fact *= c;} 
        
        printf("Factorial of %d : %ld\n",r, fact);
        fact = 1; // reset value of factorial
    }
    
    return 0;
}   