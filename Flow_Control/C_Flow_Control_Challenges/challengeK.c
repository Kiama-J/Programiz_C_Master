//Create a program to find the factorial of a number.
//Get an integer input for the variable number.
//Initialize an integer variable factorial with value 1.
//Run a for loop from i = 1 to i <= number.
//Inside the loop, multiply factorial by i.
//Print the value of factorial.

#include <stdio.h>

int main() 
{
    int number;
    scanf("%d", &number);
    
    int factorial = 1;
    int i;
    
    for(i = 1; i <= number; i++){
        
        factorial = factorial * i;
         
        }
    printf("%d", factorial);
    return 0;
}
