//Check Perfect Number
//Create a function to check if a number is a Perfect Number.

//A perfect number is a number which is equal to the sum of its positive divisors.
//For example, 6

#include <stdio.h>

int findSum(int number) {
    int newNumber = number;
    int sum = 0;
    
    for(int i = 1; i < newNumber; i++) {
        if(newNumber % i == 0) {
            sum = sum + i;
        }
    }
    if(sum == newNumber) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int number;
    scanf("%d", &number);
    
    int result = findSum(number);
    
    if(result == 1) {
        printf("Perfect Number");
    }
    else{
        printf("Not a Perfect Number");
    }
    return 0;
}
