/* Creating enum variables while defining enum.
Just like in struct, we can also declare enum as we define them
*/

#include <stdio.h>

enum Size {
    small,
    medium,
    large,
} size1;

int main() {
    size1 = small;
    printf("%d", size1);
    
    return 0;
}
