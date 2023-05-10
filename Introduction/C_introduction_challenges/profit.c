//Create a program to calculate the profit given the cost price and selling price.
//Get double input for variables costPrice and sellingPrice.
//Find the profit amount by subtracting cost price from the selling price.
//Use formula: (profit / costPrice) * 100 to find the profit percent.
//Print both the profit and profit percent upto 2 decimal places.

#include <stdio.h>

int main () 
{
    double costPrice;
    double sellingPrice;
    
    scanf("%lf\n%lf", &costPrice, &sellingPrice);
    
    double profit = sellingPrice - costPrice;
    double profitPercent = (profit / costPrice) * 100;
    
    printf("%.2lf\n", profit);
    printf("%.2lf", profitPercent);
        
    return 0; 
}
