#include <stdio.h>  
#include <math.h>  

int main() {
float u, a, t, b, c, p;
printf ("Enter the value of u, a , t , b, c and p : ");
scanf ("%f %f %f %f %f %f", &u, &a, &t, &b, &c, &p);    
printf ("The value of V (u + at) is: %.2f\n", u+(a*t));
printf ("The value of S (ut + 1/2at^2) is: %.2f\n", (u * t) + (0.5 * a * t * t)); 
printf ("The value of T (2*a + b^(1/2) + 9c) is: %.2f\n", (2 * a) + sqrt(b) + (9 * c));  
printf ("The value of H ((b^2 + p^2)^(1/2)) is: %.2f\n", sqrt ((b * b) + (p * p)));
return 0;
}
