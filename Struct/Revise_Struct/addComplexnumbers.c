/*Add Two Complex Numbers

Create a program to add two complex numbers.

Create a struct named Complex with double variables: real and imag.
Inside main(), create two struct variables.
Get input values of real and imag for both variables.
Find the sum and print the result to 2 decimal places */

#include <stdio.h>

typedef struct Complex {
    double real;
    double imag;
} comp;

int main() {
    double a, b, c, d;
    scanf("%lf\n%lf\n%lf\n%lf", &a, &b, &c, &d);
    
    comp n1 = {.real = a, .imag = b};
    comp n2 = {.real = c, .imag = d};
    
    comp result;
    result.real = (n1.real + n2.real);
    result.imag = (n1.imag + n2.imag);
    
    printf("%.2lf + %.2lfi", result.real, result.imag);
    
    return 0;
}
