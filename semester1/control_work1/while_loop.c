#include <stdio.h>
 
int main () {

   /* local variable definition */
   int i, n = 0;

   scanf("%d", &i); do {
      i += 18; n++;
   }

   /* while loop execution */
   while( i < 109); {
      printf("value of n: %d\n value of i: %d\n", n, i);
   }
 
   return 0;
}
