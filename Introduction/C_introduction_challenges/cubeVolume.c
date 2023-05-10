//Create a program to calculate the volume of a cube.
//The formula to calculate the volume of a cube is :Volume = length * length * length
//Get an integer input and assign it to the length variable.
//Use the above formula to compute the volume.
//Print the volume.

#include<stdio.h>

int main()
{
    int length;
    
    scanf("%d", &length);
    
    int volume = length * length * length;
    
    printf("%d", volume);
    
    return 0;
}
