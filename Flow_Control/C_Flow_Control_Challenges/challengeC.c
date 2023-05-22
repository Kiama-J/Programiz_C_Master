//Create a program to check if a year is a leap year or not.
//A leap year is exactly divisible by 4 except for century years (years ending by 00). The century year is a leap year only if it is perfectly divisible by 400.
//Get an integer year input for the year variable.
//Use the if condition to check if the year is perfectly divisible by 400. If true, print Leap Year.
//Use an else if condition to check if the year is perfectly divisible by 4 and doesn't end with 00 (not divisible by 100). If true, print Leap Year.
//Otherwise, print Not a Leap Year.

#include <stdio.h>

int main() 
{
    int year;
    scanf("%d", &year);
    
    if(year % 400 == 0){
        printf("Leap Year");
    }
    else if(year % 4 == 0 && year % 100 != 0){
        printf("Leap Year");
    }
    else {
        printf("Not a Leap Year");
    }
   
    return 0;
}
