#include <stdio.h>

int main(void)
{
   int militia, wood, stone, defense, quotient, diff, infantry, barricade, archer, catapult, battlepower = 0, def = 0;
   scanf("%d", &militia);
   scanf("%d %d", &wood, &stone);
   scanf("%d", &defense);

   if (50<=militia<=500 && 5<=wood,stone<=7500 && 50<=defense<=2500)
   {
      for (int barricade = 0; def < defense; barricade++)
      {
         militia = militia - 2;
         wood = wood - 5;
         stone = stone - 10;
         def = def + 10;
         battlepower = battlepower + 1;
         diff = defense - def;
         quotient = diff / 10;
         if ( 2 > quotient > 1)
         {
            break;
         }
      }
      for (infantry = 0; def <= defense; infantry++ )
      {
         militia = militia - 1;
         wood = wood - 2;
         stone = stone - 3;
         def = def + 1;
         battlepower = battlepower + 3;
      }
      for (catapult = 0; stone >= 15 ; catapult++ )
      {
         militia = militia - 5;
         wood = wood - 10;
         stone = stone - 15;
         battlepower = battlepower + 5;
      } 
      for (archer = 0; militia > 0 && wood > 0 && stone > 0 ; archer++ )
      {
         militia = militia - 1;
         wood = wood - 5;
         battlepower = battlepower + 5;
      }

      printf("%d\n", battlepower);
      printf("%d %d %d %d", infantry, archer, barricade, catapult);
   }
   else
   {
      printf("IMPOSSIBLE");
   }
}