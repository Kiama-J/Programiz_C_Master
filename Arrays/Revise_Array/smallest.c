//Create a program to find the smallest element of the array.
//Suppose we have an array:
//int numbers[5] = {55, 64, 75, 80, 65};
//Create a function named findSmallest() that takes the numbers array as a parameter.
//Inside the function, find the smallest element and return it.

#include <stdio.h>

int findSmallest(int numbers[]) {
    
    int smallest = numbers[0];
    
    for(int i = 1; i < 5; i++){
        if(smallest > numbers[i]){
            smallest = numbers[i];
        }
    }
    
    return smallest;
}

int main(){
    int numbers[]={55,64,75,80,65};
    
    int smallest = findSmallest(numbers);
    
    printf("%d", smallest);
    
    return 0;
}
