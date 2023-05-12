//Create a program to find the factorial of an integer entered by the user.
//Take an integer input from the user and assign it to the variable n. We will assume the user will always enter a positive integer.
//Using a while loop, compute the factorial.
//Print the factorial at the end.

#include <stdio.h>

int main() 
{
    int n;
    int total = 1;
    
    scanf("%d", &n);
    
    while(n > 0){
        total = total * n;
        n--;
    }
    printf("%d", total);

   
    return 0;
}
