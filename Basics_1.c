

//Including header files whose code will be added during the time of compilation
#include <stdio.h>

// Making the main function, which is always called first before other functions
int main() {
    int a = 18; // stores integral values
    float b = 3.14 ; // stores decimal values
    char c = "h"; // stores characters like h, *, &, etc
    
    // valid type declaration instructions
    int d = 9; // valid cuz we are declaring it
    int e = d; // valid cuz d declared before it
    int f = e+1; // valid cuz e declared before f 
    int g = 1, h; // valid cuz g declared correctly and h is an emply int type variable here
    // after writing the type, we can declare various variables in one line
    //example
    int m=1,n=2,o=3,p=4; // it is valid
    int i,j,k;
    i=j=k=1; // valid cuz all decalared before and assigned now
}