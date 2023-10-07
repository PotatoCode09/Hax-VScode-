#include <stdio.h>

int main(void)
{
   int i, j, num;

   for(i = 100; i <= 1000; i++)
   {
      int counter = 0;
      for(j = 1; j <= i; j++)
      {
         if (i % j == 0)
            counter = counter + 1;
      }
      if (counter == 2)
      printf("%d\n", i);
   }
}