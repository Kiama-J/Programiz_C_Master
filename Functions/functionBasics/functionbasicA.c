//Create a program to print numbers using a function.
//Create a function named printNumbers().
//Inside the function, use two print statements: print("%d\n", 5) and print("%d\n", 100)
//Call the function two times.

#include <stdio.h>

void printNumbers() {
    printf("%d\n", 5);
    printf("%d\n", 100);
}

int main(){
    printNumbers();
    printNumbers();
    
    return 0;
}
