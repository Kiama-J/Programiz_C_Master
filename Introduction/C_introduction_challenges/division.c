//Create a program to divide N number of chocolates among M children.
//Get an integer value for the number of chocolate.
//Get an integer input for the number of children.
//Find the number of chocolates each child gets after //Find the number of remaining chocolates and print it.
//Assumption: Input value for the number of chocolates should be greater than the number of children.

#include <stdio.h>

int main()
{
    int chocolate;
    scanf("%d\n", &chocolate);
    
    int children;
    scanf("%d", &children);
    
    int received;
    received = chocolate / children;
    
    int remaining;
    remaining = chocolate % children;
    
    printf("%d\n", received);
    
    printf("%d", remaining);
    
    return 0;
    
}
