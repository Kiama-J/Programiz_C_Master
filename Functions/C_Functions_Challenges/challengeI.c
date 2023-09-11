//LCM of Two Numbers

//Create a program to find LCM of two numbers using a function.

//LCM (Lowest Common Multiple) of two numbers, x and y is the smallest positive integer that is perfectly divisible by both x and y.

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
    if(x > y) {
        lcm = x;
    }
    else {
        lcm = y;
    }
    int lcmNew = lcm;
    while(1) {
        if((lcmNew % x == 0) && (lcmNew % y == 0)) {
            break;
        }
         lcmNew++;
    }
    return lcmNew;
}
