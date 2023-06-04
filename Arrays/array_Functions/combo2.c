//Create a program to find the average marks obtained by a student using a function.

//Step 1
//Create a function named findAverage() that accepts an array of marks as its parameter.
//Use a for loop to find the sum of all the marks and store it in the sum variable.
//Find the average marks by dividing sum by the total number of elements (marks) present in the array.
//Return the average marks.

//Step 2
//Inside the main() function, create an array named marks with elements: 54.8, 59.8, 48.7, 42.6, 60.1.
//Call findAverage() with the array marks as argument.
//Print the returned value.

#include <stdio.h>

double findAverage(double marks[]) {
    double sum = 0.0;
    
    for(int i = 0; i < 5; i++){
        sum = sum + marks[i];
    }
    
    double average = sum / 5.0;
    return average;
}

int main() {
    double marks[]={54.8,59.8,48.7,42.6,60.1};
    
    double average = findAverage(marks);
    
    printf("%.2lf", average);
    
    return 0;
}
