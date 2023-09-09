//Armstrong Numbers Between Intervals

//Problem Description

//Create a function to display armstrong numbers between two intervals.

//A number is called an Armstrong number of order 3 if the sum of cubes of each digit is equal to the number itself.
//For example, 153

#include <stdio.h>

int findArmstrong(int number) {
    int newNumber = number;
    int sum = 0;
    int quotient;
    int remainder;
    
    while(newNumber != 0) {
        remainder = newNumber % 10;
        sum = sum + (remainder*remainder*remainder);
        quotient = newNumber / 10;
        newNumber = quotient;
    }
    if(sum == number) {
        printf("%d\n", number);
    }
}


int main() {
    int x, y;
    scanf("%d\n%d", &x, &y);
    int number;
    
    for(int i = x; i <= y; i++) {
            number = i;
            findArmstrong(number);
    }
    
    return 0;
}
