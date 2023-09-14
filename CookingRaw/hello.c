#include <stdio.h>

int main(){
    int n;
    
    do 
    {
        printf("size of block: ");
        scanf("%d", &n);

        if(n < 0)
        {
            printf("Enter a positive whole numba shit bish\n\n");
        }
    } while (n < 0);

    for(int i = 0;i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
}