//Create a program to find the product of the first and last elements of an array.
//Create an array with elements: 4, 9, 2, 7.
//Call the findProduct() function with the first and last elements of the array as arguments.
//Inside the function, find the product and return the result.

#include <stdio.h>

int findProduct(int n1, int n2){
    int product = n1 * n2;
    
    return product;
}

int main(){
    
    int numbers[] = {4,9,2,7};
    
    int result = findProduct(numbers[0], numbers[3]);
    
    printf("%d", result);
    
    return 0;
    
}
