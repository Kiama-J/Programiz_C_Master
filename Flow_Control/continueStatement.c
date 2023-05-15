//Create a program to print odd numbers from 1 to n.
//Take integer input from the user and store it in the variable n.
//Use a for loop to iterate from i equal to 1 to n.
//If i is even, use continue to skip the number from printing.
//If i is odd, print i.
//Note: We will assume the user will enter a positive integer.

#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            continue;
        }
    printf("%d\n", i);
    }

    return 0;
}
