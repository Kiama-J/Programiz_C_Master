//Create a Pointer

//Create a program to print the value of a pointer.

//Define a pointer pt and an integer number with value 31.
//Assign the address of number to pt.
//Print the value of the pointer.

#include <stdio.h>

int main() {
    int* pt;
    int number = 31;
    
    pt = &number;
    
    printf("%p", pt);
    
    return 0;
}
