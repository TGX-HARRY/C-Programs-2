#include <stdio.h>

int fun() {
static int count = 0; // static variable
count++;
return count;
}

int main() {
printf("%d ", fun()); // Output: 1
printf("%d ", fun()); // Output: 2
printf("%d ", fun()); // Output: 3
// static value keeps the value after function is initialized
// example here in fun, count was declared 0 and added 1
// but if we call function again, it should normally be declared 0 again and added 1 and give 1
// but due to static keyword, it saves its value 1 after first initialization and added 1 gives 2
return 0;
}

