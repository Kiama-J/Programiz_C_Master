/*Find the Size

Create a program to identify the size using an enum.

Create an enum named Size with constants: Small, Medium and Large.
Inside main(), create a Size variable and assign Small to it.
Create a switch...case statement to print the size.
 */
 
#include <stdio.h>

enum Size {
    small,
    medium,
    large,
} ;

int main() {
   enum Size kidogo = small;
   
   switch(small) {
       
       case small:
       printf("SMALL");
       break;
       
       case medium:
       printf("MEDIUM");
       break;
       
       case large:
       printf("LARGE");
       break;
       
       default:
       printf("NOT VALID");
   }
   return 0;
}
