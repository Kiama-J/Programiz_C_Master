/*Find Area of Circle

Create a program to find the area of a circle.

Define a macro PI with value 3.1415
Inside main(), get a double input and assign it to radius.
Find the area of the circle.
Print the area upto 2 decimal places.
 */
 
#include <stdio.h>

#define PI 3.1415

int main() {
    double radius;
    scanf("%lf", &radius);
    
    double area;
    area = PI * (radius * radius);
    
    printf("%.2lf", area);
    
    return 0;
}
