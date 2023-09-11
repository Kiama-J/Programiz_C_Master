//GCD of Two Numbers

//Create a program to find the GCD of two numbers using a function.

//GCD (Greatest Common Divisor) of two numbers is the largest number that can exactly divide both the numbers.

#include <stdio.h>

int findGcd(int, int);

int main() {
    int x, y;
    scanf("%d\n%d", &x, &y);
    
    int result = findGcd(x, y);
    printf("%d", result);
    
    return 0;
}

int findGcd(int x, int y) {
    int gcd;
    
    for(int i = 1; (i <= x && i <= y); i++) {
        if( (x % i == 0) && (y % i == 0) ) {
            gcd = i;
        }
    }
    
    return gcd;
}
