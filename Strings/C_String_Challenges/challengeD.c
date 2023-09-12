//Join Two Strings
//Create a program to join two strings using strcat()

//Assumption: We will assume that the user will only provide a single word as input value.


#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    
    scanf("%s", &str1);
    scanf("%s", &str2);
    
    strcat(str1," ");
    strcat(str1,str2);
    printf("%s", str1);
    
    return 0;
}
