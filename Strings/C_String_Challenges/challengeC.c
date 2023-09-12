//Frequency of Characters in a String

//Create a program to find the total occurrence of a character in a string.

//Get string input for a char array named str.
//Get character input for a char variable named ch.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    
    char ch;
    scanf("%c", &ch);
    
    int count = 0;
    
    for(int i = 0; i <= strlen(str); i++) {
        if(ch == str[i]) {
            count++;
        }
    }
    printf("\n%d", count);
}
