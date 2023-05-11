//Create a program to find the smallest number.
//Take 3 integer inputs from the user and store them in n1, n2 and n3 variables.
//if n3 is the smallest number, print 1.
//If n3 is not the smallest number, print 0.

#include <stdio.h>
#include <stdbool.h>

int main() 
{
    int n1, n2, n3;
    
    scanf("%d %d %d", &n1, &n2, &n3);
    
    bool result = (n3 < n1) && (n3 < n2);
    
    printf("%d", result);
    
    return 0;
}
