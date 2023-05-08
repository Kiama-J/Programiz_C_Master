//Create a program to divide N number of pens to M number of students.
//Create a variable named penNumber and assign 14 to it.
//Create a variable named studentNumber and assign 3 to it.
//Compute the number of pens each student will get and print it.
//Compute the number of pens that will be left and print it.

#include <stdio.h>

int main() 
{
    int penNumber = 14;
    int studentNumber = 3;
    int pensReceived = penNumber / studentNumber;
    int pensLeft = penNumber % studentNumber;
    
    printf("%d\n", pensReceived);
    printf("%d", pensLeft);
   
    return 0;
}
