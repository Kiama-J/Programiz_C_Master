//Frequency of a Character
//Problem Description
//We are given a string and a character.
//We need to find the number of times this character is present in the string.

#include <stdio.h>

int main() {
    char team[] = "Arsenal is the best team in the world";
    char test = 'e';
    int frequency = 0;
    
    for(int i = 0; i < strlen(team); i++) {
        if(test == team[i]){
            frequency++;
        }
    }
    printf("%d", frequency);
    
    return 0;
}
