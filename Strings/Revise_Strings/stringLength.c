//Find the Length of a String Without Using strlen()

#include <stdio.h>
#include <string.h>

int main () {
    char string[] = "This is awesome";
    
    int length = 0;
    
    while(string[length] != '\0'){
        length++;
    }
    printf("%d", length);
    
    return 0;
}
