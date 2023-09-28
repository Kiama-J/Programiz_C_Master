/*
Subtract Two Matrices

Create a program to find the difference of two matrices using 2D arrays.

Create two 2D arrays of size 3 * 2.
First Array: A = { {9, 8}, {12, 21}, {32, 36} };
Second Array: B = {4, 5}, {10, 12}, {20, 19} };
Create a difference matrix to store the resultant array after subtraction.
Use a nested for loop to perform the subtraction between A and B
Assign the result to the difference matrix.
Use a nested for loop to print the difference matrix.
Note: Print a newline character after the inner for loop 
to print the matrix in row column format.
*/

#include <stdio.h>

int main() {
    int A[3][2] = {
        {9, 8},
        {12, 21},
        {32, 36},
    };
    
    int B[3][2] = {
        {4, 5},
        {10, 12},
        {20, 19},
    };
    
    int difference[3][2];
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            difference[i][j] = A[i][j] - B[i][j];
            printf("%d ", difference[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
