//Multiply Array by 10

//Create a program to multiply each element of an array by 10.

//Create an integer array with elements: 1, 2, 3, 4, 5.
//Create a new int array with the elements now multiplied by 10.

#include <stdio.h>

int main() {
    int elements[5] = {1,2,3,4,5};
    int newElements[5];
    
    for(int i = 0; i < 5; i++) {
        newElements[i] = elements[i] * 10;
        printf("%d\n", newElements[i]);
    }
    
    return 0;
}
