//Suppose the cost price of a book is 19 dollars. Store it in an integer variable named costPrice.
//The selling price of the book is 27 dollars. Store it in an integer variable named sellingPrice.
//Calculate the profit amount on a book.

#include <stdio.h>

int main() 
{
    int costPrice = 19;
    int sellingPrice = 27;
    int profit = sellingPrice - costPrice;
    
    printf("%d", profit);
   
    return 0;
}
