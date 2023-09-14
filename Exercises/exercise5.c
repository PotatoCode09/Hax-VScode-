#include <stdio.h>

int main(){
    int num;

    printf("Input: ");
    scanf("%d", &num);

    num = num % 2; 

    if (num == 0){
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
return 0;
}