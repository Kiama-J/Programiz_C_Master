/*
Dynamic Memory Allocation

Create a program to allocate memory dynamically.

Declare an integer n and a pointer marks.
Get input for n.
Allocate memory to marks to store n data of int type.
Get n input values for marks.
Print the values stored in the addresses of marks.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int* marks;
    scanf("%d", &n);
    
    marks = (int*) malloc (n * sizeof(int));
    
    if (marks == NULL) {
        return 1;
    }
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        printf("%d\n", *(marks + i));
    }
    
    free(marks);
    
    return 0;
}
