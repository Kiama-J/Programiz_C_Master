//Compute Standard Deviation

//Create a program to calculate the standard deviation.

//main() Function

//Get 5 integer input values for an array
//Call calculateSD() with the array as argument.
//Print the returned value up to 3 decimal places.

//calculateSD() Function

//Create a function calculateSD() with an double array data as parameter.
//Inside the function, find the sum of all the array elements.
//Compute the mean of array elements.
//Find the difference of each array value and mean.
//Compute the square of each difference using pow().
//Add all the squared differences and assign to result.
//Compute the variance by dividing the result by 5.0.
//Compute the square root of variance using sqrt() and assign it to sd.
//Return sd.

#include <stdio.h>
#include <math.h>

double calculateSD(double[]);

int main() {
    double elements[5];
    
    for(int i = 0; i < 5; i++) {
        scanf("%lf", &elements[i]);
    }
    
    double standardDeviation = calculateSD(elements);
    printf("%.3lf", standardDeviation);
    
    return 0;
}

double calculateSD(double elements[]) {

    double sum = 0.0;
    for(int i = 0; i < 5; i++) {
        sum = sum + elements[i];
    }
    double mean = sum / 5.0;
    double difference;
    double square;
    double addition = 0.0;
    
    for(int i = 0; i < 5; i++) {
        difference = elements[i] - mean;
        square = pow(difference, 2);
        addition = addition + square;
    }
    
    double variance = addition / 5.0;
    double sd = sqrt(variance);
    
    return sd;
}
