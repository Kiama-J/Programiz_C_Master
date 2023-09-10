//Check Palindrome Number

//Create a function to check if a number is palindrome or not.

//A number is palindrome if the reverse of that number is equal to the original number.
//For example, 1001, 343, etc.

#include <stdio.h>

int findPalindrome(int number) {
    int newNumber = number;
    int remainder;
    int quotient;
    int reversed = 0;
    
    while(newNumber != 0) {
        remainder = newNumber % 10;
        quotient = newNumber / 10;
        reversed = reversed*10 + remainder;
        newNumber = quotient;
    }
    if(reversed == number) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int number;
    scanf("%d", &number);
    
    int result = findPalindrome(number);
    
    if(result == 1){
        printf("Palindrome Number");
    }
    else {
        printf("Not a Palindrome Number");
    }
    
    return 0;
}
