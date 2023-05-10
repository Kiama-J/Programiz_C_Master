//Create a program to convert the temperature in fahrenheit to celsius.
//The formula to convert Fahrenheit to Celsius is : celsius = (fahrenheit - 32) * 5 / 9 
//Get a double input and assign it to the fahrenheit variable.
//Use the above formula to convert fahrenheit temperature to celsius.
//Print the celsius temperature.

#include <stdio.h>

int main() 
{
    double fahrenheit;
    
    scanf("%lf", &fahrenheit);
    
    double celsius = (fahrenheit - 32) * 5 / 9;
    
    printf("%lf", celsius);
    
    return 0;
}
