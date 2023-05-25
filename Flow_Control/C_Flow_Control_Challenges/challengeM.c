//Create a program to check whether a number is prime or not.
//A prime number is a number that is only divisible by either 1 or itself. For example, 7, 5, 19, etc.
//Get an integer input for the variable number.
//Create a flag variable with initial value 0.
//Run a loop from 2 to number - 1 and check if number is divisible by any number between 2 to number - 1.
//If the number is divisible, change the value of flag to 1 and break the loop.
//Outside the loop, check if the value of flag is 1. If true, print Not a Prime Number. Otherwise, print Prime Number.

#include <stdio.h>

int main() 
{
    int number;
    scanf("%d", &number);
    
    int flag = 0;
    
    for(int i = 2; i <= number - 1; i++){
       
        if(number % i == 0){
            flag = 1;
            break;
        }
        
    }
    if(flag == 1){
        printf("Not a Prime Number");
    }
    else {
        printf("Prime Number");
    }

    return 0;
}
