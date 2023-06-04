//Create a program to implement a double type array.
//Create a double type array named numbers with values: 3.5, 8.9, 1.6, -4.8.

#include <stdio.h>

int main(){
    
    double numbers[4]={3.5,8.9,1.6,-4.8};
    
    for(int index = 0; index < 4; index++){
        printf("%.2lf\n", numbers[index]);
    }
    
    return 0;
}
