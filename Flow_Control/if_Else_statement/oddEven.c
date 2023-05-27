//Create a program to check whether a number is even or odd.
//Get integer input from the user and store it in the number variable.
//If number is even, print even.
//If number is odd, print odd.

#include <stdio.h>

int main() 
{
    int number;
    
    scanf("%d", &number);
    
    if (number % 2 == 0){
        printf("even");
    }
    else {
        printf("odd");
    }
    
    return 0;
}
