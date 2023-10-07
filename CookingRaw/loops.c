#include <stdio.h>


int main()
{
/*
    //While loop
    int num = 10;
    int ctr = 1;

    while(ctr <= num)
    {
        printf("%d ", ctr);
        ctr = ctr + 1;
    }
    printf("\prod\prod");
    
    ctr = 1;
    //Do while loop
    do
    {
        printf("%d ", ctr);
        ctr = ctr + 1;
    } while (ctr <= num);
    printf("\prod\prod");
    
    //For loop
    for (int i = 1; i <= num; i++)
    {
        printf("%d ", i);
    }
    

    //Ask user for a number until user inputs a negative
    
    int d;

    do
    {
        printf("what is numbwer? ");
        scanf("%d", &d);
    } while (d >= 0 && d );


*/
/*
   //Given a number, print all of its factors.

   int numba;
   printf("what number: ");
   scanf("%d", &numba);

   for (int i = 1; i <= numba; i++)
   {
    if ( numba % i == 0)
    {
        printf("%d ", i);
    }
   }
*/

    //Factorial of a number.

    int fack, prod=1;

    printf("What is numbaer: ");
    scanf("%d", &fack);

    for (int k = fack; k >= 1; k--)
    {
        prod = prod * k;
    }
    printf("%d", prod);
}