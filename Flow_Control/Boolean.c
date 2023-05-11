//Create a program to check if a number is divisible by 5.
//Get an integer input from the user.
//Check if the input is divisible by 5 or not. If it's divisible by 5, print 1. If not, print 0.

#include <stdio.h>

int main() 
{
    int number;
    
    scanf("%d", &number);
    
    printf("%d", number % 5 == 0);
   
    return 0;
}
