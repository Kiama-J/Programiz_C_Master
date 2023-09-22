/*Divide Two Floating Point Numbers*/

/*Create a program to divide two floating point numbers using pointers.*/

/*Step 1*/
/*Get double input for variables number1 and number2.*/
/*Create another double variable named result.*/
/*Call divideNumbers() function with the addresses of number1, number2 and result variables as arguments.*/
/*Print the returned value upto 2 decimal places.*/

/*Step 2*/
/*Create a function named divideNumbers() with pointer parameters: n1, n2 and result.*/
/*Divide values of n1 by n2 and store it at the position specified by result.*/
/*Return result.*/

#include <stdio.h>

double* divideNumbers(double*, double*, double*);

int main() {
    double number1, number2, quotient;
    scanf("%lf\n%lf", &number1, &number2);
    
    
    double* result = divideNumbers(&number1, &number2, &quotient);
    
    printf("%.2lf", *result);
    
    return 0;
}

double* divideNumbers(double* n1, double* n2, double* result){
    *result = *n1 / *n2;
    return result;
}
