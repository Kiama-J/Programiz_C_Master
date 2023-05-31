//Create a program to compute the factorial of a number using a function.

//Step 1
//Create a function named computeFactorial().
//This function takes only one argument, n, and computes the factorial.
//Return the factorial.

//Step 2
//Outside of the function:
//Get an integer input from the user and store it in the number variable.
//Call the computeFactorial() with number as an argument, and assign the returned value to the total variable.
//Print the total variable.
//Assumption: We will assume that the user will always enter a positive integer.

#include <stdio.h>

int computeFactorial(int n){
    
    int factorial = 1;
    
    for(int i = 1; i <= n; i++){
        int product = factorial * i;
        
        factorial = product;
    }
    
    return factorial;
}

int main(){
    
    int number;
    scanf("%d", &number);
    
    int total = computeFactorial(number);
    
    printf("%d", total);
    
    return 0;
}
