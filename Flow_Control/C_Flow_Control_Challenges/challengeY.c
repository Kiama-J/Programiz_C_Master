//Create a program to find the sum of all the digits of a number.
//Get an integer input for the number variable.
//Create an integer variable sum with initial value 0.
//Create a while loop to access each digit of the number.
//Inside the loop, add each digit of the number to sum.
//Print the sum.

#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    
    int sum = 0;
    int newNumber = number;
    int n;
    
    while(newNumber != 0){
        n = newNumber % 10;
        sum = sum + n;
        newNumber = newNumber / 10;
    }
    printf("%d", sum);
    
    return 0;
}
