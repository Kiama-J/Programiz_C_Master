//Check Self-Dividing Number

//Create a function to check if a number is a self-dividing number.

//A self-dividing number is a number that is divided by every digit it contains.
//For example, 128

#include <stdio.h>

int checkNumber(int number) {
    int newNumber = number;
    int remainder;
    int quotient;
    int divide;
    int flag = 0;
    
    
    while(newNumber != 0) {
        remainder = newNumber % 10;
        quotient = newNumber / 10;
        divide = number % remainder;
         if(divide != 0){
                flag++;
         }
        newNumber = quotient;
    }
    if(flag == 0) {
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int number;
    scanf("%d", &number);
    
    int result = checkNumber(number);
    if(result == 1){
        printf("Self Dividing Number");
    }
    else {
        printf("Not a Self Dividing Number");
    }
    
    return 0;
}
