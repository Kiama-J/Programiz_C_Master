//Create a program to find the sum of all the user inputs until the user enters 0.
//Create an integer variable named sum with initial value 0.
//Run a while loop that is always true.
//Inside the loop, get an integer input value from the user and store it in a variable.
//Check if the value is 0.
//If the input value is 0, terminate the loop. Otherwise, add the input value to the sum variable.
//Print the sum.

#include <stdio.h>

int main() 
{
    int sum = 0;
    
    while(1){
        int n;
        scanf("%d", &n);
        sum = sum + n;
        
        if(n == 0){
            break;
        }
        
    }
    printf("%d", sum);

    return 0;
}
