//Create a program to find the name of the month based on the input.
//Get an integer value between 1 to 12 and store it in the month variable.
//Use a switch case statement to print the month name based on the input.
//If input is 1, print January, if input is 8, print August, and so on.

#include <stdio.h>

int main() 
{
    int month;
    scanf("%d", &month);
    
    switch(month){
        case 1:
        printf("January");
        break;
        
        case 2:
        printf("February");
        break;
        
        case 3:
        printf("March");
        break;
        
        case 4:
        printf("April");
        break;
        
        case 5:
        printf("May");
        break;
        
        case 6:
        printf("June");
        break;
        
        case 7:
        printf("July");
        break;
        
        case 8:
        printf("August");
        break;
        
        case 9:
        printf("September");
        break;
        
        case 10:
        printf("October");
        break;
        
        case 11:
        printf("November");
        break;
        
        case 12:
        printf("December");
        break;
        
        default:
        printf("Invalid");
    }

    return 0;
}
