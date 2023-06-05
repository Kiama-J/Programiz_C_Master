//PROJECT

//A project to get marks input for 5 subjects from the user.

//Find the Average

//Assign grade based on average
//Grade A if the average score is equal to or above 80
//Grade B if the average score is equal to or above 60 and less than 80
//Grade C if the average score is equal to or above 50 and less than 60
//Grade F if the average score is less than 50

//Used the array as argument in both fuctions.
//I then called the 'findAverage' fuction when defining the second function 'assignGrade'

#include <stdio.h>

double findAverage(double scores[]) {
    
    double sum = 0.0;
    double average;
    
    for(int i = 0; i < 5; i++){
        sum = sum + scores[i];
    }
    average = sum / 5;
    return average;
}

double assignGrade(double scores[]) {
    
    double n1 = findAverage(scores);
    
    char letter = 'A';'B';'C';'D';'F';
    
    if(n1 >= 80){
        return 'A';
    }
    else if(n1 >= 60 && n1 < 80) {
        return 'B';
    }
    else if(n1 >= 50 && n1 < 60) {
        return 'C';
    }
    else {
        return 'F';
    }
}

int main(){
    
    double scores[5];
    int subject = 1;
    
    for(int i = 0; i < 5; i++){
        printf("Enter subject %d score: ", subject);
        scanf("%lf", &scores[i]);
        subject++;
    }
    
    double average = findAverage(scores);
    printf("The Average is: %.2lf\n", average);
    
    char grade = assignGrade(scores);
    printf("The grade is %c", grade);
    
    return 0;
}
