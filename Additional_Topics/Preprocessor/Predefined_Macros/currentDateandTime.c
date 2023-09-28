/*
Predefined Macros
 __DATE__ (provides the current date)
 __TIME__ ( provides the current time)
 
The above are some of the predefined macros in C Programming
*/

#include <stdio.h>

int main() {
    printf("The Current date is: %s\n", __DATE__);
    printf("The Current time is: %s", __TIME__);
    
    return 0;
}
