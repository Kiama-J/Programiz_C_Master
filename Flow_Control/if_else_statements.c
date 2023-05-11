//Create a program to check whether a number is positive or negative or zero.
//Get integer input from the user and store it in the number variable.
//If number is positive, print positive.
//If number is negative, print negative.
//If number is 0, print zero.

#include <stdio.h>

int main() 
{
    int number;
    
    scanf("%d", &number);
    
    if (number > 0){
        printf("positive");
    }
    else if (number < 0){
        printf("negative");
    }
    else{
        printf("zero");
    }
    
    return 0;
}
