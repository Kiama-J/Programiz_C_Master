//Number of Characters in String

//Create a program to count the total number of characters in a string.

//Get a string input for the variable named text using fgets().

#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    
    fgets(string, sizeof(string), stdin);
    
    printf("%zu", strlen(string));
    
    return 0;
}
