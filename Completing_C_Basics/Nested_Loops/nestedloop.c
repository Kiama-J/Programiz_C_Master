/*
Nested Loops

Create a program to print * using a nested loop.

Take integer input from the user and store it in variable n.
Create a nested loop. The outer loop should iterate n times.
In each iteration of the outer loop, iterate the inner loop 2 times.
Inside the inner loop, print "*\n".
*/

#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        
        for(int j =0; j < 2; j++) {
            printf("*\n");
        }
    }
    
    return 0;
}
