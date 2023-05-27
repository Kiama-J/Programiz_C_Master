//Create a program to check whether a person can vote or not depending on his/her age.
//Get integer input from the user and store it in the age variable.
//If age is 18 or above, print The person can vote. If not, print The person cannot vote.

#include <stdio.h>

int main() 
{
    int age;
    
    scanf("%d", &age);
    
    if (age >= 18){
        printf("The person can vote.");
    }
    else {
        printf("The person cannot vote.");
    }
    
    
    return 0;
}
