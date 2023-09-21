/*Return Pointer from a function*/

/*Create a function that adds 10 to a number*/
/*Return the address pointed by the pointer*/

#include <stdio.h>

int* findSum(int* n) {
    *n = *n + 10;
    return n;
}

int main() {
    int number;
    scanf("%d", &number);
    
    int* result = findSum(&number);
    printf("%d", *result);
    
    return 0;
}
