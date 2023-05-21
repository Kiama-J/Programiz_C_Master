//Create a program to check if a number is even or odd.
//Get an integer input for the number variable.
//Check if the number is exactly divisible by 2.
//If the number is divisible, print Even. Otherwise, print Odd.

#include <stdio.h>

int main() 
{
    int number;
    scanf("%d", &number);
    
    if(number % 2 == 0){
        printf("Even");
    }
    else {
        printf("Odd");
    }
    
    return 0;
}
