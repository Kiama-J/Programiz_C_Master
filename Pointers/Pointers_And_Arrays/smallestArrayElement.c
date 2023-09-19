/*Smallest Array Element Using Pointers*/

/*Create a program to find the smallest element of the array using pointers.*/

/*Suppose we have an array like this.*/

/*int numbers[5] = {55, 64, 75, 80, 65};*/
/*Find the smallest element of the array using the pointer variable.*/

#include <stdio.h>

int main() {
    int numbers[5] = {55, 64, 75, 80, 65};
    
    int smallest = *numbers;
    
    for(int i = 1; i < 5; i++) {
        if(smallest > *(numbers + i)) {
            smallest = *(numbers + i);
        }
    }
    
    printf("%d", smallest);
    
    return 0;
}
