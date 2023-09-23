/*Subtract Two Complex Numbers*/

/*Create a program to subtract two complex numbers.*/

/*Create a struct named Complex with double members: real and imag.*/
/*Inside main(), create two struct variables.*/
/*Get input values of real and imag for both variables.*/
/*Subtract them and print the result.*/

#include <stdio.h>

typedef struct Complex {
    double real;
    double imag;
} complex;

int main() {
    
    double a, b, c, d;
    
    complex n1 = {.real = a, .imag = b};
    complex n2 = {.real = c, .imag = d};
    scanf("%lf\n%lf\n%lf\n%lf", &a, &b, &c, &d);
    
    complex subtract;
    subtract.real = (a - c);
    subtract.imag = (b - d);
    
    printf("%.2lf + %.2lfi", subtract.real, subtract.imag);
    
    return 0;
}
