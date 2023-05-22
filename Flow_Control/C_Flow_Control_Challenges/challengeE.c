//Create a program to find the grade of a student based on the marks.
//Get a double input from the user and assign it to the marks variable.
//Check the value of marks and assign grades based on that.
//If marks is greater than or equal to 90, print A.
//If marks is greater than or equal to 80, print B.
//If marks is greater than or equal to 70, print C.
//Otherwise, print D.

#include <stdio.h>

int main() 
{
    double marks;
    scanf("%lf", &marks);
    
    if(marks >= 90){
        printf("A");
    }
    else if(marks >= 80){
        printf("B");
    }
    else if(marks >= 70){
        printf("C");
    }
    else {
        printf("D");
    }
   
    return 0;
}
