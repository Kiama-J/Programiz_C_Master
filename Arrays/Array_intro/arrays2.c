//Create a program to find the average of array elements.
//Create a double array named numbers with size 5.
//Get input value for the array.
//Create a sum variable with initial value 0.0.
//Run a for loop to access each element of the array.
//Inside the loop, add each element to the sum variable.
//Outside the loop, divide the sum by 5 (total number of elements) to find the average.
//Print the average upto 2 decimal places.

#include <stdio.h>

int main(){
    
    double numbers[5];
    
    for(int index = 0; index < 5; index++){
        scanf("%lf", &numbers[index]);
    }
    
    double sum = 0.0;
    
    for(int index = 0; index < 5; index++){
        sum = sum + numbers[index];
    }
    
    double average = sum / 5;
    
    printf("%.2lf", average);
    
    return 0;
}
