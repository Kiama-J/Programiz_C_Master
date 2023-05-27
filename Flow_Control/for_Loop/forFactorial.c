//Create a program to find the factorial of an integer entered by the user.
//Take an integer input from the user and assign it to the variable n. We will assume the user will always enter a positive integer.
//Using a for loop, compute the factorial.
//Print the factorial at the end.

#include <stdio.h>

int main() 
{
    int n;
    
    scanf("%d", &n);
    
    int i;
    int total = 1;
    
    for(i = 1; i <= n; i++){
        total = total * i;
        }
    printf("%d", total);

    return 0;
}
