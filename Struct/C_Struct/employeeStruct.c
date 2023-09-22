/*Struct*/

/*Create a program to print values of a struct.*/

/*Create a struct named Employee with variables: int age; and char name[50].*/
/*Create a struct variable named employee1.*/
/*Get input value for employee1's age and name.*/
/*Print employee1's name and age.*/

#include <stdio.h>

struct Employee {
    int age;
    char name[50];
} employee1;

int main() {
    scanf("%d ", &employee1.age);
    
    fgets(employee1.name, sizeof(employee1.name), stdin);
    
    printf("%s", employee1.name);
    printf("%d", employee1.age);
    
    return 0;
}
