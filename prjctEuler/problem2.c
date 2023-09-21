#include <stdio.h>

int main(){

   int n1 = 0, n2 = 1, nextTerm = 0, sum = 0;

   while(nextTerm < 4000000)
   {
      nextTerm = n1 + n2;
      n1 = n2;
      n2 = nextTerm;

      if (nextTerm % 2 == 0)
         sum = sum + nextTerm;
   }
   
   printf("\nThe sum of all even valued numbers in the sequences is:%d", sum);

   return 0;
}