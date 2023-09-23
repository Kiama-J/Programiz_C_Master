/*Struct as Function Argument

Create a program to find the perimeter of a rectangle.

Create a struct named Rectangle with integer members length and breadth.
Create a function named findPerimeter that accepts a struct variable as its parameter.
Inside function, find the perimeter of a rectangle and print it.
Inside main(), create a struct variable named rect1.
Get integer input for length and breadth of rect1.
Call findPerimeter() with rect1 as argument. */

#include <stdio.h>

typedef struct Rectangle {
    int length;
    int breadth;
} rect;

int findPerimeter(struct Rectangle n1) {
    int perimeter = (n1.length + n1.breadth) * 2;
    return perimeter;
}

int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);
    
    rect rect1 = {.length = a, .breadth = b};
    
    int result = findPerimeter(rect1);
    
    printf("%d", result);
    
    return 0;
}
