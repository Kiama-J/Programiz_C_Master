//Create a program to convert weight in pounds to kilograms.
//The formula to convert pound to kilogram is :        kg = pound * 0.453592 
//Get a double type input and assign it to the pound variable.
//Use the formula to convert weight from pound to kilogram.
//Display the value of weight in kilogram

#include<stdio.h>  
  
int main()  
{
    double pound;
    
    scanf("%lf", &pound);
    
    double kg = pound * 0.453592;
    
    printf("%lf", kg);
    
    return 0;  
}
