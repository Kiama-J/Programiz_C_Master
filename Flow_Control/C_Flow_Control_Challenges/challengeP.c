//Create a program to print the greatest factor of a number besides itself using a loop.
//Get an integer input and assign it to the number variable.
//Create a for loop that runs from i = number - 1 to i = 1.
//Inside the loop, check if number is perfectly divisible by i and break the loop.

#include <stdio.h>

int main() 
{
    int number;
    scanf("%d", &number);
    int i;
    int n;
    
    for(i = number - 1; i >= 1;  i--){
        
        n = number % i;
        
        if(n == 0){
            break;
            }
    }
        printf("%d", i);
        
    return 0;
}
