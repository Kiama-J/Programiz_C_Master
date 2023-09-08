i//Find the Longer String

//Create a program to find the longer string among two strings.

//<findLength() Function>

//Create a findLength() function that takes both strings as its parameters.
//Inside the function, create a count variable with initial value 0.
//Run a while loop to access each character of the strings
//Inside the loops, increase the value of count by 1.
//Outside the loops, return the value of count.

//<main() Function>

//Get two strings input from the user.
//Call the findLength() function
//Compare the returned length for both the strings and print the string with the largest return value.

#include <stdio.h>
#include <string.h>

int findLength(char stringA[], char stringB[]) {
    int countA = 0;
    int countB = 0;
    while(stringA[countA] != '\0') {
        countA++;
    }
    while(stringB[countB] != '\0') {
        countB++;
    }
    if(countA > countB) {
        return countA;
    }
    else {
        return countB;
    }
}

int main() {
    char stringA[100];
    fgets(stringA, sizeof(stringA), stdin);
    
    char stringB[100];
    fgets(stringB, sizeof(stringB), stdin);
    
    int largest = findLength(stringA, stringB);
    
    if(largest == strlen(stringA)) {
        printf("%s", stringA);
    }
    else {
        printf("%s", stringB);
    }
    
    return 0;

}


