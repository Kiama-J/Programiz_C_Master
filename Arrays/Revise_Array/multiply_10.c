//Create a program to multiply each element of an array by 10.
//Create an integer array named numbers with elements: 43, 78, 23, 45.
//Create another integer array of the same size named newNumbers.
//Use a for loop to access each element of numbers.
//Inside the loop, multiply each element of numbers by 10 and assign it to newNumbers.
//Print elements of newNumbers.

#include <stdio.h>

int main(){
    int numbers[4]={43,78,23,45};
    
    int newNumbers[4];
    
    for(int i = 0; i < 4; i++){
        newNumbers[i] = numbers[i] * 10;
    }
    
    for(int i = 0; i < 4; i++){
        printf("%d\n", newNumbers[i]);
    }
    
    return 0;
}
