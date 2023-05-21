//Create a program to identify even and odd numbers between 1 to 10.
//Take an integer input between 1 to 10 and store it in a number variable.
//Use a switch statement to check if the number is even or odd.
//If number is not between 1 to 10, print Invalid Number.

#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    
    switch(number){
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
            printf("Even Number");
            break;
        
        case 1:    
        case 3:
        case 5:
        case 7:
        case 9:
            printf("Odd Number");
            break;
            
        default:
            printf("Invalid Number");
    }

        return 0;
}
