#include <stdio.h>

int main()
{
   int num;
   int sumFactor = 0;

   printf("what is the number :>");
   scanf("%d", &num);

   for(int i = 1; i < num; i++)
   {
      if(num % i == 0)
         sumFactor = sumFactor + i; 
   }
   printf("%d\n", sumFactor);

   if(sumFactor == num)
      printf("Perfect Number");
   else if(sumFactor < num)
      printf("Deficient Number");
   else if(sumFactor > num)
      printf("Abundant Number");
   
   return 0;
}