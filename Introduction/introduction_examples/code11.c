//Create a program to convert temperature in celsius to fahrenheit
//The formula to convert Celsius to Fahrenheit is:  fahrenheit = (celsius * 1.8) + 32
//Get temperature in Celsius from the user and assign it to a variable.
//Convert it to degree Fahrenheit using the above formula
//Print the temperature in Fahrenheit upto 2 decimal places

#include <stdio.h>

int main() 
{
    double celsius;
    
    scanf("%lf", &celsius);
    
    double fahrenheit;
    fahrenheit = celsius * 1.8 + 32;
    
    printf("%.2lf", fahrenheit);
    
    return 0;
}
