//String Function

//Create a program to iterate through each character of a string
//Create a string named text with value "Programiz is fun"
//Use a for loop to access each character of the string.
#include <stdio.h>

int main() {
    char text[] = "Programiz is fun";
    
    for(int i = 0; i < 16; i++) {
        printf("%c", text[i]);
    }
    return 0;
}
