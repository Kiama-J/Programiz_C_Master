//LCM of Two Numbers

//Create a program to find LCM of two numbers using a function.

//LCM (Lowest Common Multiple) of two numbers, x and y is the smallest positive integer that is perfectly divisible by both x and y.

//This code uses a for loop unlike the previous one which uses an infinite while loop

#include <stdio.h>

int findLcm(int, int);

int main() {
    int x, y;
    scanf("%d\n%d", &x, &y);
    
    int result = findLcm(x,y);
    printf("%d", result);
    
    return 0;
}

int findLcm(int x, int y) {
    int lcm;
    int i;
    if(x > y) {
        lcm = x;
    }
    else {
        lcm = y;
    }
    for(i = lcm; i <= 100000000; i++){
        if((i % x == 0) && (i % y == 0)) {
            break;
        }
    }
    return i;
}
