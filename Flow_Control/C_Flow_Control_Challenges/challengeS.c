//Create a program to print all numbers from 0 to 10 except the multiples of 3.
//Run a for loop from i = 1 to i <= 10.
//Check if i is perfectly divisible by 3.
//If i is divisible by 3, skip the loop and go to the next iteration. Otherwise, print the value of i.

#include <stdio.h>

int main()
{
    int i;
    int n;
    
    for(i = 1; i <= 10; i++){
        n = i % 3;
        
        if(n != 0){
           printf("%d\n", i);
            continue;
        }
    }
    
    return 0;
}
