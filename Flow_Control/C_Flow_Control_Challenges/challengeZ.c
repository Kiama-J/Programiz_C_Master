//Create a program to check if a number is a Harshad Number.
//A Harshad number is an integer which is divisible by the sum of its digits. For example, 21 which is perfectly divided by 3 (sum of digits: 2 + 1).
//Get an integer input for a variable number.
//Run a while loop to access each digit of number.
//Inside the loop, find the sum of each digit of number.
//Check if the number is perfectly divisible by the sum.
//If the number is divisible by the sum, print Harshad Number. Otherwise, print Not a Harshad Number

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
    if(number % sum == 0){
        printf("Harshad Number");
    }
    else {
        printf("Not a Harshad Number");
    }
    
    return 0;
}

