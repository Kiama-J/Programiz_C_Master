/*Add Two Complex Numbers*/

/*Unlike real numbers, complex numbers have real and imaginary parts.*/
/*To find the sum of these complex numbers, we need to add real and imaginary parts separately.*/
/*number n1 = (10.27[real] + 1.9i[imaginary])  number n2 = (17.73[real] + 5.1i[imaginary])*/
/*To find the sum of these complex numbers, we need to add real and imaginary parts separately.*/

#include <stdio.h>

typedef struct Complex {
    double real;
    double imaginary;
} complex;

int main() {
    
    complex n1 = {.real = 10.27, .imaginary = 1.9};
    complex n2 = {.real = 17.73, .imaginary = 5.1};
    
    complex result;
    result.real = (n1.real + n2.real);
    result.imaginary = (n1.imaginary + n2.imaginary);
    
    printf("Result is: %.2lf + %.2lfi", result.real, result.imaginary);
    
    return 0;
}
