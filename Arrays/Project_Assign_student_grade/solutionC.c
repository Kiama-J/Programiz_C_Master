//This code is a recap of the Student's Grade and Marks project.

#include <stdio.h>

int findAverage(int marks[]);

char findGrade(int average);

int main(){
    int marks[5];
    int n = 1;
    
    for(int i = 0; i < 5; i++){
        printf("Enter the Student's mark %d: ", n);
        scanf("%d", &marks[i]);
        n++;
    }
    
    int average = findAverage(marks);
    char grade = findGrade(average);
    
    printf("The Student's Average is: %d\n", average);
    printf("The Student's Grade is: %c", grade);
    
    return 0;
    
}

int findAverage(int marks[]) {
    int sum = 0;
    
    for (int i = 0; i < 5; i++){
        sum = sum + marks[i];
    }
    int average = sum / 5;
    
    return average;
}

char findGrade(int average) {
    if(average >= 70){
        return 'A';
    }
    else if(average >= 60){
        return 'B';
    }
    else if(average >= 50){
        return 'C';
    }
    else if(average >= 40){
        return 'D';
    }
    else {
        return 'D';
    }
}
