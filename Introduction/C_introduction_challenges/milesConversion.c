//Create a program to convert distance in kilometers to miles.
//The formula to convert kilometers to miles is :  miles = km / 1.6 
//Get a double input from the user and assign it to the km variable.
//Use the above formula to convert the kilometer distance to miles.
//Display the value in miles.

#include <stdio.h>

int main() 
{
    double km;
    
    scanf("%lf", &km);
    
    double miles = km / 1.6;
    
    printf("%lf", miles);
	
    return 0;
}
