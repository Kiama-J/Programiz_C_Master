//Practice example:
//Get the Array input for 5 elements of ages.
//Access the array elements using a loop.

#include <stdio.h>

int main(){
    
    int ages[5];
    int number = 1;
    
    for(int index = 0; index < 5; index++){
        
        printf("Enter the %d element: ", number);
        scanf("%d", &ages[index]);
        
        number++;
        
    }
    
    printf("Array elements: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", ages[i]);
        
    }
    return 0;
}
