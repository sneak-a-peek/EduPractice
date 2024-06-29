#include <stdio.h>
 
int main () {

   /* local variable definition */
   int i = 4;
   while (i < 5) {
       i += i;
       printf("%d\n", i);
   }
   return 0;
}
