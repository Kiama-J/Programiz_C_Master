//Create a program to check if 3 values are internal angles of a triangle.
//Get integer input for 3 variables named a, b and c.
//Find the sum of a, b and c.
//If the sum is equal to 180, print true. Otherwise, print false

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int b;
    scanf("%d", &b);
    int c;
    scanf("%d", &c);
    
    int sum = a + b + c;
    
    if(sum == 180){
        printf("true");
    }
    else {
        printf("false");
    }
    
    return 0;
}
