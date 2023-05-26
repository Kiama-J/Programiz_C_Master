//Create a program to count the number of digits in an integer.
//Get an integer input for the number variable.
//Create an integer variable count with value 0.
//Use a loop to iterate until number is not equal to 0.
//Remove the last digit from number in each iteration.
//Increase count by 1 in each iteration.

#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    
    int count = 0;
    int newNumber = number;
    
    while(newNumber != 0){
        newNumber = newNumber / 10;
        count++;
    }
    
    printf("%d", count);
    
    return 0;
}
