/*Store Information of a Student Using Struct

Information to be input is:
    -firstname
    -stream
    -marks

Print out the information*/

#include <stdio.h>

typedef struct Profile {
    char name[50];
    char stream[50];
    int marks;
} alias;

int main() {
    
    alias student;
    
    printf("Enter the students's name: ");
    fgets(student.name, sizeof(student.name), stdin);
    
    printf("Enter the student's stream: ");
    scanf(" %s", &student.stream);
    
    printf("Enter the student's marks: ");
    scanf(" %d", &student.marks);
    
    printf("Name: %s", student.name);
    printf("Stream: %s\n", student.stream);
    printf("Marks: %d", student.marks);
    
    return 0;
}
