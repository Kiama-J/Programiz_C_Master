//Create a program to check if a person can vote or not based on the age.
//Get an integer input for the age variable.
//If the age is greater than or equal to 18, print Can Vote. Otherwise, print Cannot Vote.

#include <stdio.h>

int main() 
{
    int age;
    scanf("%d", &age);
    
    if(age >= 18){
        printf("Can Vote");
    }
    else {
        printf("Cannot Vote");
    }
  
    return 0;
}
