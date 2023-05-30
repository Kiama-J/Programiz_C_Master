//Create a program to convert a character to lowercase.
//Get a character input and store it in the alphabet variable.We will assume that the user will only provide characters in uppercase.
//Use the tolower() function to convert the character to lowercase.
//Print the lowercase character.

#include <stdio.h>
#include <ctype.h>

int main(){
    char alphabet;
    scanf("%c", &alphabet);
    
    char lower = tolower(alphabet);
    printf("%c", lower);
    
    return 0;
}
