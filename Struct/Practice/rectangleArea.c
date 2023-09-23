/*Find the Area of a Rectangle

Find the area of a rectangle given its length and width.

Use a function and struct to perform this task.*/

#include <stdio.h>

typedef struct Rectangle {
    int length;
    int width;
} rect;

int findArea (struct Rectangle n1) {
    int area;
    area = (n1.length * n1.width);
    return area;
}

int main () {
    int a, b;
    scanf("%d\n%d", &a, &b);
    
    rect rectangleA = {.length = a, .width = b};
    
    int area = findArea(rectangleA);
    printf("The rectangle's area is: %d", area);
    
    return 0;
}
