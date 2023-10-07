#include <stdio.h>

int main(void)
{
   int array[10], sum = 0;

   for (int i = 0; i < 10; i++)
   {
      array[i] = i + 1;
   }

   for (int i = 0 ; i < 10; i++)
   {
      printf("%d", array[i]);
   }

   sum = array[4] + array[6];
   printf("\n%d\n", sum);

}