//Find Smallest Array Element

//Create a program to find the smallest element from an array.

//Create an integer array named numbers of size 5.
//Get input value for the array.

#include <stdio.h>

int main() {
    int numbers[5];
   
    for(int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
    
    int smallest = numbers[0];
    
    for(int i = 0; i < 5; i++) {
        if(numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    
    printf("%d", smallest);
    
    return 0;
}
