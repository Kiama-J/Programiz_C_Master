//Create a program to find the multiplication table of an integer from 6 to 9.
//Take integer input and store it in variable n.
//Using a for loop, find the multiplication table of n from 6 to 9 in the specified format below.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    for(int i = 6; i <= 9; i++){
        
        int product = n * i;
        printf("%d times %d is %d\n", n, i, product);
    }

    return 0;
}
