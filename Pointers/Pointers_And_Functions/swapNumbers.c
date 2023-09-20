/*Swap two numbers using Pointers*/

#include <stdio.h>

void swapNumbers(int* n, int* y) {
    int temp;
    temp = *n;
    *n = *y;
    *y = temp;
}

int main() {
    int n, y;
    n = 25;
    y = 26;
    
    swapNumbers(&n, &y);
    printf("After swapping:\n");
    printf("%d\n", n);
    printf("%d", y);
    
    return 0;
}
