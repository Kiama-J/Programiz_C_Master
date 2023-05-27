//Create a program to add numbers entered by the user until the user enters 0 or a negative number.
//Initialize a variable named total with value 0 at the beginning.
//Create a while loop with the condition always true.
//If the user enters 0 or negative integer, use break to terminate the loop.
//If the user enters a positive number, add it to the total variable.
//Print the total from outside of the loop.
//Note: The negative number shouldn't be added to the total variable.

#include <stdio.h>

int main() 
{
    int n;
    
    int total = 0;
    
    while(1){
        scanf("%d\n", &n);
        if(n > 0){
          total = total + n;  
        }
        if(n <= 0){
            break;
        }
    }
    printf("%d", total);

    return 0;
}
