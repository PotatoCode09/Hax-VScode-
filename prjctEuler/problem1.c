#include <stdio.h>

int main(){
   int range;
   int sum = 0;

   do
   {
      printf("Enter upperLimit: ");
      scanf("%d", &range);
   }
   while(range < 3 && range < 5);

   for (int i = 0; i < range; i++)
   {
      if( i % 3 == 0|| i % 5 == 0)
      {
         sum = sum + i;
      }
   }
   printf("sum of Multiples = %d", sum);

}