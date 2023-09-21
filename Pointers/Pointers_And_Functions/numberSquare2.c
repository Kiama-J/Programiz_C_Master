/*Find Square of a Number*/

/*Create a program to find the square of a number using pointers.*/

/*Create a function named findSquare() with a pointer n as parameter.*/
/*Inside the function, find the square of the number*/
/*Assign the result to the address pointed by the n pointer.*/
/*Inside main(), get integer input for a variable named number.*/
/*Call findSquare() by passing the address of the number as input.*/
/*Print the value of number after the function call.*/

#include <stdio.h>

int* findSquare(int* n) {
    *n = (*n) * (*n);
    return n;
}



int main() {
    int number;
    scanf("%d", &number);
    
    int* result = findSquare(&number);
    printf("%d", *result);
    
    return 0;
}
