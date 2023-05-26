//Create a program to print FizzBuzz based on user input.
//Get an integer input from the user.
//If the number is a multiple of 3, print Fizz.
//If the number is a multiple of 5, print Buzz.
//If the number is a multiple of both 3 and 5, print FizzBuzz.
//Else print the original number.

#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    
    if(number % 3 == 0 && number % 5 == 0){
        printf("FizzBuzz");
    }
    else if(number % 5 == 0){
        printf("Buzz");
    }
    else if(number % 3 == 0){
        printf("Fizz");
    }
    else{
        printf("%d", number);
    }
    
    return 0;
    
}
