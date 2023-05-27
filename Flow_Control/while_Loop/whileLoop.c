//Create a program to print numbers from 5 to 1 using a while loop.
//Create variable i with value 5.
//Run a while loop until value of i is greater than 0.
//Inside the loop, print the value of i.
//Decrease the value of i by 1 in each iteration of the loop.

#include <stdio.h>

int main() 
{
    int i = 5;
    
    while (i > 0){
        printf("%d\n", i);
        i--;
    }
    
    return 0;
}
