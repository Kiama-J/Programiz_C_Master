/*
Create a program which has the following as output.
Use a nested loop.
Output:

1A
1B
1C
------
2A
2B
2C
------
*/

#include <stdio.h>

int main() {
    int form[2] = {1, 2};
    char stream[3] = {'A', 'B', 'C'};
    
    for(int i = 0; i < 2; i++) {
        
        for(int j = 0; j < 3; j++) {
            printf("%d%c\n", form[i], stream[j]);
        }
        printf("------\n");
    }
    
    return 0;
}
