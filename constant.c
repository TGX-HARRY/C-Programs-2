#include <stdio.h>

int mian () {
    // constant <variable_type> <variable_name>;
    const float pi = 3.14;
    
    pi = 98;
    return 0;
    // const/constant literally means a constant literal which
    // cannot be re-initialized and thus this program throws error
    // it becomes read only as the error says
}