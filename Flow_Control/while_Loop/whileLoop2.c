//Create a program to print numbers between 1 and 100.
//Get input value from the user.
//If the input value is between 1 and 100, print it. Otherwise terminate the loop.

#include <stdio.h>

int main() 
{
    int n;
    
    while (1){
        scanf("%d", &n);
        
        if(n>0 && n<=100){
            printf("%d\n", n);
        }
        else {
            break;
        }
    }
    return 0;
}
