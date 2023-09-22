/*Create a struct named Person*/

/*Let the struct have 2 members: age, salary.*/
/*Assign age and salary to a variable named alvin*/
/*Print the age and salary*/

#include <stdio.h>

struct Person {
    int age;
    int salary;
} alvin;

int main() {
    alvin.age = 24;
    alvin.salary = 2000;
    
    printf("Alvin's age is: %d\n", alvin.age);
    printf("Alvin's starting salary is: $%d", alvin.salary);
    
    return 0;
}
