#include <stdio.h>
#include <string.h>

int main()
{
   int num, x = 0;
   char update[1];

   scanf("%d", &num);
   for (int i = 0; i < num; i++)
   {
      scanf("%s", update);
      if (update == '+')
         x++;
      if (update == '-')
         x--;
   }
   printf("%d", x);
}