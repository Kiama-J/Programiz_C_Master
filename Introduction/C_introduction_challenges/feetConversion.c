//Create a program to convert a value in centimeters to feet
//The formula to convert centimeter to feet is :       ft = cm * 0.0328 
//Get a double input from the user and assign it to the centimeter variable.
//Use the above formula to convert the centimeter value to feet.
//Assign the result to the feet variable and print the result.

#include <stdio.h>
  
int main() 
{  
    double centimeter;
    scanf("%lf", &centimeter);
    
    double feet = centimeter * 0.0328;
    printf("%lf", feet);
   
 
    return 0;  
}
