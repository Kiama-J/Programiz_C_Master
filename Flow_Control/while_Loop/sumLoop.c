//Sum of Numbers Until User Enters 0
//add the numbers entered by the user until the user enters 0. If the user enters 0, we will end the loop and print the total.

#include<stdio.h>

int main() 
{
    double total = 0;
    
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    
    while (num != 0){
        total = total + num;
        
    printf("Enter a number: ");
    scanf("%lf", &num);
    }
    
    printf("The total is: %.2lf", total);
   
   return 0;
}
