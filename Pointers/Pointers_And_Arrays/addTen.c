/*Add 10 to Each Element of the Array*/

/*Write a program that adds 10 to each element of the array using pointers*/

/*Let the user input the array elements*/
/*Print the array before and after 10 is added to the elements*/

#include <stdio.h>

int main() {
    int array[10];
    
    printf("Array elements:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d\n", &array[i]);
    }
    
    printf("Array elements after adding 10:\n");
    for(int i = 0; i < 10; i++) {
        *(array + i) = *(array + i) + 10;
        printf("%d\n", *(array + i));
    }
    
    return 0;
}
