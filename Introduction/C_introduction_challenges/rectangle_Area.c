//Create a program to find the area of a rectangle.
//The formula to compute the area of a rectangle is :Area = length * breadth
//Take two integer inputs from the user and store them in length and breadth variables respectively.
//Use the above formula to compute the area of the rectangle.

#include <stdio.h>

int main() 
{
    int length;
    int breadth;
    
    scanf("%d \n%d", &length, &breadth);
    
    int Area = length * breadth;
    printf("%d", Area);

    return 0;
}
