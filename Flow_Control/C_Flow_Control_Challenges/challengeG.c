//Create a program to find the youngest brother among 3 based on their ages.
//Get integer age input for three brothers: jack, roman and johnny.
//Compare the values of jack, roman and johnny.
//If jack is the smallest, print Jack.
//If roman is the smallest, print Roman.
//If johnny is the smallest, print Johnny.

#include <stdio.h>

int main() 
{
    int jack;
    int roman;
    int johnny;
    
    scanf("%d\n%d\n%d", &jack, &roman, &johnny);
    
    if(jack < roman && jack < johnny){
        printf("Jack");
    }
    else if(roman < jack && roman < johnny){
        printf("Roman");
    }
    else {
        printf("Johnny");
    }

    return 0;
}
