//Prime Numbers Between Intervals

//Create a function to find all the prime numbers between two intervals using a function

#include <stdio.h>

void findPrime(int number) {
    int no = number;
    int flag = 0;
    
    for(int i = 2; i < no; i++) {
        if(no % i == 0) {
            flag++;
        }
    }
    if(flag == 0) {
        printf("%d\n", no);
    }
}

int main() {
    int x, y;
    scanf("%d\n%d", &x, &y);
    int number;
    
    for(int i = x; i <= y; i++) {
        number = i;
        findPrime(number);
    }
    return 0;
}
