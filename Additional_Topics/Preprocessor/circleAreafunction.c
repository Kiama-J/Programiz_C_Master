/* 
Define Macro Functions
We can also use the #define preprocessor to define macro functions.
*/

#include <stdio.h>

#define PI 3.1415
#define circleArea(r) (PI * r *r)

int main() {
    double radius;
    printf("Enter the radius: ");
    scanf("%lf", &radius);
    
    double area = circleArea(radius);
    printf("The Circle's area is: %.2lf", area);
    
    return 0;
}
