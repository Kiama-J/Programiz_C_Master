//Create a program to find the sum of N natural numbers.
//Get an integer input for a variable n.
//Run a loop from 1 to n.
//Inside the loop, find the sum of all numbers from 1 to n.
//Print the sum.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    
    for(int i = 1; i <= n; i++){
        sum=sum + i;
    }
    printf("%d", sum);
    
    return 0;
}
