//Create a function that adds two floating point numbers.
//Create a function named addNumbers().
//The function must accept two double arguments: n1 and n2.
//Add n1 and n2 inside the function and print the result.

//Inside main()
//Get floating point numbers input for two double variables: number1 and number2.
//Call addNumbers() with arguments number1 and number2.

#include <stdio.h>

void addNumbers(double n1, double n2){
    double result = n1 + n2;
    printf("%.2lf", result);
}

int main(){
    double number1, number2;
    scanf("%lf %lf", &number1, &number2);
    
    addNumbers(number1, number2);
    
    return 0;
    
}
