//Create a program to divide N number of chocolates among M children.
//Get an integer value for the number of chocolate.
//Get an integer input for the number of children.
//Find the number of chocolates each child gets after division and print it.
//Find the number of remaining chocolates and print it

#include <stdio.h>

int main() 
{
    int chocolate;
    int children;
    
    scanf("%d\n%d", &chocolate, &children);
    
    int received = chocolate / children;
    int remaining = chocolate % children;
    
    printf("%d\n", received);
    printf("%d", remaining);
       
    return 0;
}
