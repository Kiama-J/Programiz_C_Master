//Create a program to check if a character is an alphabet or not.
//A character is an alphabet if it falls under the range from 'a' to 'z' or 'A' to 'Z'.
//Get a character input for the alphabet variable.
//Check if the character is greater than or equal to 'a' and less than or equal to 'z' or if it is greater than or equal to 'A' and less than or equal to 'Z'.
//If the character falls under this range, print Alphabet. Otherwise, print Not an Alphabet.

#include <stdio.h>

int main() 
{
    char alphabet;
    scanf("%c", &alphabet);
    
    if(alphabet >= 'a' && alphabet <= 'z'){
        printf("Alphabet");
    }
    else if(alphabet >= 'A' && alphabet <= 'Z'){
        printf("Alphabet");
    }
    else{
        printf("Not an Alphabet");
    }
  
    
    return 0;
}
