//PROJECT

//A project to get marks input for 5 subjects from the user.

//Find the Average

//Assign grade based on average
//Grade A if the average score is equal to or above 80
//Grade B if the average score is equal to or above 60 and less than 80
//Grade C if the average score is equal to or above 50 and less than 60
//Grade F if the average score is less than 50

//In this project 'averageScore' was used as argument for the 'assignGrade' function (line 28 and 61)

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

char assignGrade(double averageScore) {
    
    char letter = 'A';'B';'C';'D';'F';
    
    if(averageScore >= 80){
        return 'A';
    }
    else if(averageScore >= 60 && averageScore < 80) {
        return 'B';
    }
    else if(averageScore >= 50 && averageScore < 60) {
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
    
    double averageScore = findAverage(scores);
    
    char letter = assignGrade(averageScore);
    printf("The grade is %c", letter);
    
    return 0;
}
