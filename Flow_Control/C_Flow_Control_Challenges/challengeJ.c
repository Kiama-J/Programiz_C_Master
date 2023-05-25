//Create a program to print a multiplication table of a number.
//Get an integer input and store it in the number variable.
//Run a while loop from 1 to 10.
//Inside the loop, print the multiplication table in format: 8 * 1 = 8

#include <stdio.h>

int main() 
{
    int number;
    scanf("%d", &number);
    int count = 0;
    int product;
    
    while(count < 10){
        count++;
        product = number * count;
        printf("%d * %d = %d\n",number, count, product);
    }
  
    return 0;
}
