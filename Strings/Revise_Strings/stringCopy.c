//Copy String Without Using strcpy()
//We will copy a string named teamA input by the user to anothe string named teamB

#include <stdio.h>
#include <string.h>

int main() {
    char teamA[20];
    char teamB[20];
    
    printf("Enter the name of the team: ");
    fgets(teamA, sizeof(teamA), stdin);
    
    for(int i = 0; i < strlen(teamA); i++) {
        teamB[i] = teamA[i];
    }
    printf("The team you entered is: %s", teamB);
    
    return 0;
}
