//Create a program to find the greatest multiple of a number below 100.
//Get an integer input for the number variable.
//Run a for loop backwards: from i = 100 to i = 1.
//Inside the loop, check if i perfectly divides number.
//If true, print the number and exit the loop.

#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    int i;
    
    for(i = 100; i >= 1; i--){
        int n = i % number;
        
        if(n == 0){
            printf("%d", i);
            break;
        }
    }
    
    return 0;
}
