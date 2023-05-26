//Create a program to find the bonus of employees based on their year of service.
//Zara decides to give a bonus of 5% to employees if their year of service is more than 5 years.
//Take salary and year of service as input.
//Print the bonus amount.

#include <stdio.h>

int main() 
{
    double salary;
    scanf("%lf", &salary);
    
    double year;
    scanf("%lf", &year);
    
    double bonus;
    
    if(year > 5){
        bonus = 0.05 * salary;
    }
    else{
        bonus = 0;
    }
        printf("%lf", bonus);
 
    return 0;
}
