/*
Change the Array Size Dynamically

Create a program to increase the size of an array dynamically.

Declare an integer pointer marks.
Allocate 3 memory addresses to marks using malloc().
Get input value for 3 elements.
Print the elements.
Change the allocated memory from 3 to 5.
Assign 13 and 15 as the 4th and 5th elements.
Print the array again.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int* marks;
    
    marks = (int*)malloc(3 * sizeof(int));
    
    if(marks == NULL) {
        return 1;
    }
    
    for(int i = 0; i < 3; i++) {
        scanf("%d", &marks[i]);
        printf("%d\n", *(marks + i));
    }
    printf("\n");
    
    marks = realloc(marks, (5 * sizeof(int)));
    marks[3] = 13;
    marks[4] = 15;
    
    for(int i = 0; i < 5; i++) {
        printf("%d\n", *(marks + i));
    }
    
    free(marks);
    
    return 0;
}
