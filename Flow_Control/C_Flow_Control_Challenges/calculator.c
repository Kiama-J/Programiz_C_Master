//Create a program to create a calculator using switch...case.
//Create two double variables named first and second and a character variable named op.
//Get input values for all variables.
//The input for the operator can only be one of the four values: '+', '-', '*' or '/'.
//Based on the input value of the op, perform specific operations using the switch...case statement and print the result.
//If op is +, perform addition between first and second; if it is -, perform subtraction and so on.
//If op is neither of those 4 values, print Invalid Operator.

#include <stdio.h>

int main()
{
    char op = '+'; '-'; '*'; '/';
    scanf("%c", &op);
    
    double first;
    scanf("%lf", &first);
    
    double second;
    scanf("%lf", &second);
    
    double a = first + second;
    double b = first - second;
    double c = first * second;
    double d = first / second;
    
    switch (op){
        
        case '+':
        printf("%.1lf", a);
        break;
        
        case '-':
        printf("%.1lf", b);
        break;
        
        case '*':
        printf("%.1lf", c);
        break;
        
        case '/':
        printf("%.1lf", d);
        break;
        
        default:
        printf("Invalid Operator");
        
    }
    
    return 0;
    
}
