//Create a program to find the power of a number.
//Get integer input for two variables named number and power.
//Create a result variable with initial value 1.
//Run a for loop from i = 1 to i <= power.
//In each iteration of the loop, multiply result with number and assign the value to result.
//Finally, print result.

#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    
    int power;
    scanf("%d", &power);
    
    int result = 1;
    
    for(int i = 1; i <= power; i++){
        result = result * number;
    }
    printf("%d", result);
    
    return 0;
}
