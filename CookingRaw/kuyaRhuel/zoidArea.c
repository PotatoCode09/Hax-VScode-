#include <stdio.h>

int main()
{
   int base1, base2, height, area;

   base1 = 4;
   base2 = 2;
   height = 4;
   area = ((base1 + base2) / 2) * height;
   printf("area 1 is = %d\n", area);

   base1 = 7;
   base2 = 3;
   height = 5;
   area = ((base1 + base2) / 2) * height;
   printf("area 2 is = %d\n", area);

   base1 = 2;
   base2 = 5;
   height = 7;
   area = ((base1 + base2) / 2) * height;
   printf("area 3 is = %d\n", area);

}