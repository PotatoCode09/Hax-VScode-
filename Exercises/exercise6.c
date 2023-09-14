#include <stdio.h>
#include <stdbool.h>

int size(void);    //determine the Maximum Parameter
bool prime(int n); //function for determining if the number is prime or not

int main()
{
   int n = size();
   printf("------------------------------------------\n");
   printf("Prime numbers until the Maximum Parameter(%d):\n", n);
   printf("------------------------------------------\n");
   for(int i = 0; i < n; i++)
   {
      if(prime(i))
      {
         printf("%d ", i);
      }
   }
   printf("\n");
}
































//function to find maximum parameter
int size(void){
   int f = 2;
   int n;
    do
   {
   printf("Input Maximum Parameter (>= 2): ");
   scanf("%d", &n);
   }
   while (n <= 1);
   return n;
}

//function for determining if prime or not prime
bool prime(int i){
   int ctr = 0;
   int f = 2;
   while (f<=i)
   {
      if(i%f==0)
      {
         ctr++;
      }
      f++;
   }
   if (ctr == 1)
   {
      return true;
   }
   else
   {
      return false;
   }
}

