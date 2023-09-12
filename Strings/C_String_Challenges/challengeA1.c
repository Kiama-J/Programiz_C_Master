//Number of Characters in String

//Create a program to count the total number of characters in a string.

//Get a string input for the variable named text using fgets().

#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    
    fgets(string, sizeof(string), stdin);
    int count;
    
    for(int i = 0; i <= strlen(string); i++){
        if(string[i] != '\0') {
            count++;
        }
        else {
            break;
        }
    
    }
    
    printf("%d", count);
    
    return 0;
}
