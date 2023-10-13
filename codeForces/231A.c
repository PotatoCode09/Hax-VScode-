#include <stdio.h>

int main()
{
    int num, a, b, c, sum, sure = 0;
    scanf("%d", &num);
    
    for (int i = 0; i < num; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        sum = a + b + c;
        
        if (sum == 2 || sum == 3)
        {
           sure++; 
        }
    }
    printf("%d\n", sure);
}