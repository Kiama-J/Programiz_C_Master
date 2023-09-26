/*Add Two Distances Using Struct

Take two distances (in the inch-feet system)
Add them
Display the result on the screen
(if inch is greater than 12 add it to feet and reduce inch) */

#include <stdio.h>

typedef struct Distance {
    int feet;
    int inch;
} dista;

int main() {
    int a, b, c, d;
    dista result;
    
    printf("Enter first distance: \n");
    printf("Feet = ");
    scanf("%d", &a);
    printf("Inch = ");
    scanf("%d", &b);
    
    printf("Enter second distance: \n");
    printf("Feet = ");
    scanf("%d", &c);
    printf("Inch = ");
    scanf("%d", &d);
    
    dista n1 = {.feet = a, .inch = b};
    dista n2 = {.feet = c, .inch = d};
    
    result.feet = n1.feet + n2.feet;
    result.inch = n1.inch + n2.inch;
    
    result.feet = result.feet + (result.inch / 12);
    result.inch = result.inch % 12;
    
    printf("Feet distance = %d\n", result.feet);
    printf("Inch distance = %d", result.inch);
    
    return 0;
    
}
