#include <stdio.h>
#include <math.h>

int main()
{
   double afterValue, p = 1800, r = .02, t = 4, e;
   e = r * t;
   
   afterValue = p * exp(e);

   printf("%.2lf\n", afterValue);
}