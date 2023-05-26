//Create a program to check if a number is armstrong or not.
//A number is called an Armstrong number of order 3 if the sum of cubes of each digit is equal to the number itself. For example, 153
//   153 = 1^3 + 5^3 + 3^3
//Get an integer input for the number variable.
//Find the sum of cubes of each digit of the number.
//Check if the sum is equal to the original number.
//If the sum is equal to the original number, print Armstrong Number
//Otherwise, print Not an Armstrong Number

#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    
    int originalNumber = number;
    int remain;
    int sum = 0;
    
    while(originalNumber != 0){
        
        remain = originalNumber % 10;
        
        sum = sum + remain*remain*remain;
        
        originalNumber = originalNumber / 10;
        }
    if(sum == number){
        printf("Armstrong Number");
    }
    else {
        printf("Not an Armstrong Number");
    }
    
}
