//Create a program to calculate the cost price given selling price and profit percentage.
//The formula to calculate the cost price is : costPrice = (sellingPrice * 100.0) / (100 + profitPercent)
//Take double inputs for the variables sellingPrice and profitPercent.
//Use the formula to compute the cost price.
//Print the cost price upto 2 decimal points.

#include <stdio.h>

int main() 
{
    double sellingPrice;
    double profitPercent;
    
    scanf("%lf\n%lf", &sellingPrice, &profitPercent);
    
    double costPrice = (sellingPrice * 100.0) / (100 + profitPercent);
    
    printf("%.2lf", costPrice);
    
    
    return 0;
}
