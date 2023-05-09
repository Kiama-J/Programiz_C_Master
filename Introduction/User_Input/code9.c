//Ask the user to enter the salary and store it in the variable salary.
//Ask the user to enter a bonus and store it in the variable bonus.
//Add salary and bonus and assign the result to the income variable.
//Print the income upto two decimal places.

#include <stdio.h>

int main() 
{
        double salary;
        double bonus;
        
        scanf("%lf", &salary);
        
        scanf("%lf", &bonus);
        
        double income = salary + bonus;
        printf("%.2lf", income);
        
    
        return 0;
}
