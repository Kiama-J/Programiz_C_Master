//Create a program to check if a number guessed by the user is correct or not.
//Create a variable named correctNumber with value 18.
//Create another variable named guessedNumber.
//Get and input value between 1 to 100 for guessedNumber.
//If the guessed number is equal to the correct number, print "Your guess is correct".
//If the guessed number is greater than the correct number, print "Wrong, your guess is larger".
//If the guessed number is smaller than the correct number, print "Wrong, your guess is smaller".

#include <stdio.h>

int main() 
{
    int correctNumber = 18;
    int guessedNumber;
    scanf("%d", &guessedNumber);
    
    if(guessedNumber == correctNumber){
        printf("Your guess is correct");
    }
    else if(guessedNumber > correctNumber){
        printf("Wrong, your guess is larger");
    }
    else {
        printf("Wrong, your guess is smaller");
    }
    
    return 0; 
}
