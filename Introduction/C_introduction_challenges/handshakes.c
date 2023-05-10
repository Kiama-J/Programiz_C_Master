//Create a program to find the maximum number of handshakes among N number of students.
//The formula to calculate the combination is : combination = (n * (n - 1)) / 2
// where n = total number of students
//Get integer input for students variable.
//Use the combination formula to calculate the maximum number of possible handshakes.
//Display the number of possible handshakes.

#include <stdio.h>

int main() 
{
    int n;
    
    scanf("%d", &n);
    
    int combination = (n * (n - 1)) / 2;
    
    printf("%d", combination);
    
    return 0;
}
