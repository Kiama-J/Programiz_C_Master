/*Struct as Function Argument

Create a program to find the area of a rectangle and return struct from a function

Create a struct named Rectangle with integer members length and breadth.
Create a function named findArea that accepts a struct variable as its parameter.
Inside function, find the Area of a rectangle and return struct from the fuction.
Inside main(), create a struct variable named rect1.
Get integer input for length and breadth of rect1.
Call findArea() with rect1 as argument and assign the result to struct member area.
Print the Area*/

#include <stdio.h>

typedef struct Rectangle {
    int length;
    int breadth;
    int area;
} recta;

recta findArea(recta rect2) {
    rect2.area = rect2.length * rect2.breadth;
    return rect2;
}

int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);
    
    recta rect = {.length = a, .breadth = b};
    
    rect = findArea(rect);
    
    printf("The Area is: %d", rect.area);
    
    return 0;
}
