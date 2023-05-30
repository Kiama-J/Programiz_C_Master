//Create a function to find the product of two numbers.

//Step 1
//Create a function named getProduct().
//This function should accept two arguments: number1 and number2.
//Multiply number1 and number2 and return the result.

//Step 2
//Inside main(), get two integer input from the user and store them in n1 and n2.
//Call the getProduct() function with arguments n1 and n2 respectively and store the value returned in the result variable.
//Print the result.

#include <stdio.h>

int getProduct(int number1, int number2){
    int product = number1 * number2;
    
    return product;
}

int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    
    int result = getProduct(n1, n2);
    
    printf("%d", result);
    
    return 0;
}
