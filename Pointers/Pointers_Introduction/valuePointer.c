/*C Pointers*/

/*Create a program to print the value pointed by a pointer variable.*/

/*Get an integer input value from the user and store it in the x variable.*/
/*Assign the address of x to a pointer variable pt.*/
/*Print the value of x using the pointer pt.*/

#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    
    int *pt;
    pt = &x;
    
    printf("%d", *pt);
    
    return 0;
}
