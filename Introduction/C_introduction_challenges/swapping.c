//Create a program to swap two numbers using a temporary variable
//Get integer inputs for variables x and y
//Use a temporary variable to swap the values of x and y
//Print the values of x and y respectively after swapping

#include <stdio.h>

int main()
{
    int x;
    int y;
    
    scanf("%d\n", &x);
    scanf("%d", &y);
    
    int temp = x;
    x = y;
    
    printf("%d\n", x);
    printf("%d", temp);
    
    return 0;
}
