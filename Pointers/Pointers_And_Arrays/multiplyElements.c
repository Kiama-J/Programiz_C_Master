/*Multiply Each Array Element by N*/

/*Create a program to multiply N to each element of the array.*/

/*Create an array named primeNumbers with value: 2, 3, 5, 7, 11.*/
/*Get an integer input for the variable number.*/
/*Multiply each element of the array by the number using pointers.*/

#include <stdio.h>

int main() {
    int primeNumbers[5] = {2, 3, 5, 7, 11};
    int number;
    scanf("%d", &number);
    
    for(int i = 0; i < 5; i++) {
        *(primeNumbers + i) = *(primeNumbers + i) * number;
        printf("%d\n", *(primeNumbers + i));
    }
    
    return 0;
}
