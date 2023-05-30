//Create a program to find the cube root of a number.
//Get an integer input and assign it to the num variable.
//Use cbrt() function to find the cube root of the number.

#include <stdio.h>
#include <math.h>

int main(){
    int num;
    scanf("%d", &num);
    
    double cubeRoot = cbrt(num);
    
    printf("%.2lf", cubeRoot);
    
    return 0;
}
