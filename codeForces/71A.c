#include <stdio.h>
#include <string.h>

int main()
{
   int num, numSntc, charNum;
   char name[101];
   scanf("%d", &numSntc);

   for (int ctr = 0; ctr < numSntc; ctr++)
   {
      scanf("%s", &name[0]);
      num = strlen(name);
      if (num > 10)
      {
         printf("%c%d%c\n", name[0], num - 1, name[num]);//prints outer letters and the letter count of the center
      }
      else
      {
         printf("%s\n", name);
      }
   }    
}