#include <stdio.h>
#include <stdbool.h>

long checkPrime(long n);

long main()
{
   long n;
   scanf("%ld", &n);
   long arr[100], index = 0;

   for(long i=1; i<n; i++)
   {
      if(n % i == 0)
      {
         arr[index] = i;
         index++;
      }
   }

   for(long i=0; i<index; i++)
      printf("%ld, ", arr[i]);
   
   long max = 0;
   for(long i=0;  i<index; i++)
   {
      if (checkPrime(arr[i]) && arr[i] > max)
      {
         max = arr[i];
      }
      
   }
   printf("\nMax Prime: %ld\n", max);
}




long checkPrime(long n)
{
   long ctr = 0;
   for(long i = 2; i<=n; i++)
   {
      if(n%i == 0)
         ctr++;
   }

   //||, &&, !=, ==

   if(n == 1 || n == 2)
      return 0;
   if(ctr == 1)
      return 1;
   else 
      return 0;
}
