//Find the Longer String

//Create a program to find the longer string among two strings.
//Get two string inputs from the user.

#include <stdio.h>
#include <string.h>

int findLarger(char[]);

int main() {
    char string1[100];
    char string2[100];
    
    fgets(string1, sizeof(string1), stdin);
    fgets(string2, sizeof(string2), stdin);
    
    int number1 = findLarger(string1);
    int number2 = findLarger(string2);
    
    if(number1 > number2) {
        printf("%s", string1);
    }
    else{
        printf("%s", string2);
    }
    
    return 0;
}

int findLarger(char string[]) {
   int a = strlen(string);
   
   return a;
}
