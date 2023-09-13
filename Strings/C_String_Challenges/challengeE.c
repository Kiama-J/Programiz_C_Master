//Number of Vowels in String

//Create a program to count the number of vowels present in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    fgets(string, sizeof(string), stdin);
    
    char vowels[] = {'a','e','i','o','u','A','E','I','O','U'};
   
    int count = 0;
    
    for(int i = 0; i < strlen(string); i++) {
        for(int j = 0; j < sizeof(vowels); j++) {
            if(string[i] == vowels[j]) {
                count++;
            }
        }
    }
    
    printf("%d", count);
    
    return 0;
}
