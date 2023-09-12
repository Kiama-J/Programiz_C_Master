//Find Percentage Marks Of Student

//Create a program to find the percentage obtained by a student.

//Create a double array with length 8 to store the marks obtained by the student.
//Get input values for the array.
//Find the sum of all obtained marks.
//Create a totalMarks variable and assign value 800 to it.
//Find the percentage obtained by the student and print it upto 2 decimal places.

#include <stdio.h>

int main() {
    double marks[8];
    double sum = 0.0;
    for(int i = 0; i < 8; i++) {
        scanf("%lf", &marks[i]);
        sum = sum + marks[i];
    }
    
    double totalmarks = 800.0;
    double percentage = (sum / totalmarks) * 100.0;
    
    printf("%.2lf", percentage);
    
    return 0;
}
