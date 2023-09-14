#include <stdio.h>

int size(void);
void prime(int n);

int main(){
    int n = size();
    prime(n);
}


int size(void){
    int f = 2;
    int n;
    printf("Input n: ");
    scanf("%d", &n);
    return n;
}

void prime(int n){
    int ctr = 0;
    int f = 2;
    while (f<=n)
    {
        if(n%f==0)
        {
            ctr++;
        }
        f++;
    }
    if (ctr == 1)
    {
        printf("Prime\n");
    }
    else
        printf("NOT A Prime\n");
}