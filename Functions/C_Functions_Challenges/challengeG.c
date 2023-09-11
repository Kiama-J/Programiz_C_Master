//Compute the Area of Circle

//Create a program to compute the area of a circle using a function.

//The formula to compute the area of a circle is:
//Area = 3.14(pi) * radius * radius

#include <stdio.h>

double findArea(double, double);

int main() {
    double radius, pi;
    pi = 3.14;
    scanf("%lf", &radius);
    
    double result = findArea(radius, pi);
    printf("%.2lf", result);
    
    return 0;
}

double findArea(double radius, double pi) {
    double area = pi * radius * radius;
    return area;
}
