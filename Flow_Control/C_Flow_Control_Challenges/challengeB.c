//Create a program to check if a number is negative or not.
//Get input value for a variable number.
//Check if the number is either less than 0, greater than 0, or equal to 0.
//If the number is less than 0, print Negative Number.
//If the number is greater than 0, print Positive Number.
//Otherwise, print Zero Number.

#include <stdio.h>

int main() 
{
    int number;
    scanf("%d", &number);
    
    if(number > 0){
        printf("Positive Number");
    }
    else if(number < 0){
        printf("Negative Number");
    }
    else {
        printf("Zero Number");
    }
    return 0;
}
