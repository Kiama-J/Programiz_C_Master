//Number of Characters in String
//Create a program to count the total number of characters in a string.

//Get a string input for the variable named text using fgets().
//Create a count variable with initial value 0.
//Run a while loop to iterate over each character of the string.
//Inside the loop, increase the value of count by 1.
//Print count

#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    fgets(text, sizeof(text), stdin);
    
    int count = 0;
    while(text[count] != '\0') {
        count++;
    }
    
    printf("%d", count);
    
    return 0;
}
