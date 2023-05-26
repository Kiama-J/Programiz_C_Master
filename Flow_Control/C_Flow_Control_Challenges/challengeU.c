//Create a program to find the factors of a number.
//The factors of a number n are all the numbers less than n, that perfectly divide n. For example: Factors of 24: 1, 2, 3, 4, 6, 12
//Get input value for a variable named number.
//Run a for loop from i = 1 to i < number.
//In each iteration of the loop, check if number is perfectly divisible by i.
//If true, print the value of i.

#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    
    int i;
    int n;
    
    for(i = 1; i < number; i++){
        n = number % i;
        if(n == 0){
            printf("%d\n", i);
        }
    }
    
    return 0;
}
