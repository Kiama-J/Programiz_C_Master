//Find the Larger string when given two strings.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Apple";
    char str2[] = "Orange";
    
    if(strlen(str1) > strlen(str2)) {
        printf("%s", str1);
    }
    else {
        printf("%s", str2);
    }
    
    return 0;
}
