//Calculate Simple Interest

//Create a program to calculate simple interest using a function.

//The formula to calculate simple interest is:
//Simple Interest = (principal * time * rate) / 100

#include <stdio.h>

double simpleInterest(double principal, double duration, double rate) {
    double interest = (principal * duration * rate) / 100;
    return interest;
}

int main() {
    double principal, duration, rate;
    scanf("%lf\n%lf\n%lf", &principal, &duration, &rate);
    
    double result = simpleInterest(principal, duration, rate);
    
    printf("%.2lf", result);
    
    return 0;
    
}
