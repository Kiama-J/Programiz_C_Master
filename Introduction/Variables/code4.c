//Create an integer variable named distance with value 135.
//Print the distance variable.
//Create another integer variable named newDistance with value 429.
//Assign the newDistance variable to the distance variable.
//Print the distance variable again with two spaces before it.

#include <stdio.h>

int main() 
{

    int distance = 135;
    printf("%d", distance);
    
    int newDistance = 429;
    distance = newDistance;
    
    printf("  %d", distance);

    return 0;
}
