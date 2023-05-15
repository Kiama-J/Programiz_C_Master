//Create a program to print odd numbers between 1 and n (entered by the user).
//Get an integer input from the user. We will assume the user will enter a positive integer.
//Using a loop, iterate from 1 to n (n should be inclusive).
//In each iteration of the loop, print the number if it's an odd number

#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    
    int i;
    
    for(i = 1; i <= n; i++){
        if(i % 2 != 0){
            printf("%d\n", i);
        }
    }

    
    return 0;
}
