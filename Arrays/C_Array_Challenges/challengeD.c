//Even Numbers From Array

//Create a program to print only the even numbers from an array.

//Create an integer array of size 10 with initial values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
//Create another array of the same size.
//Run a for loop to access each element of the first array.
//Inside the loop, check if each element is an even element
//If true, assign the even element to the second array and track the position of the second array.
//Print the second array.

#include <stdio.h>

int main() {
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int array2[10];
    int even;
    
    for(int i = 0; i < 10; i++) {
        even  = array[i] % 2;
        if(even == 0) {
            array2[i] = array[i];
            printf("%d\n", array2[i]);
        }
    }
    
    return 0;
}
