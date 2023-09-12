//Mean Height of Players

//Create a program to find the mean height of players present in a football team.

//The formula to calculate the mean is: mean = sum of all elements / number of elements
//Create a double array named heights of size 11.
//Get input values from the user.

#include <stdio.h>

int main() {
    double heights[11];
    double sum = 0;
    
    for(int i = 0; i < 11; i++) {
        scanf("%lf", &heights[i]);
        sum = sum + heights[i];
    }
    
    double mean = sum / 11;
    printf("%.2lf", mean);
    
    return 0;
    
}
