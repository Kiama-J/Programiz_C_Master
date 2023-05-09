//Declare two variables: int number1 and double number2.
//Take an integer input and assign it to number1 variable.
//Take double input and assign it to number2 variable.
//Print both variables in different lines.
//Print the double value upto 2 decimal places.

#include <stdio.h>

int main() 
{
    int number1;
    double number2;
    
    scanf("%d %lf", &number1, &number2);
    printf("%d\n%.2lf", number1, number2);
    return 0;
}
