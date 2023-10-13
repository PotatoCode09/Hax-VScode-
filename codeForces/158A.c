#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num, i, last, sum = 0,  count = 0;
   scanf("%d %d", &num, &last);

   int *arr = (int *)malloc(num * sizeof(int));    //to add integers separated by whitespace into an array

   for (i = 0; i < num; i++)
   {
      scanf("%d", &arr[i]);
   }
   
   for (i = 0; i < num; i++)    //adds all values of the array
   {
       sum = sum + arr[i];
   }
   
   if (sum == 0)    //checks the array and continue if all values !=0
   {
       printf("%d", count);
   }
   else
   {
       for (i = 0; i < num; i++)    //counts the number of players to continue
       {
            if (arr[i] == 0)
               break;

            if (arr[last-1] > arr[i])
               break;
            
       }
       printf("%d", i);
   }
   
   free (arr);
   return 0;
}