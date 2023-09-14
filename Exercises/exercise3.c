#include <stdio.h>

int main(){
    int lowerLimit;
    int upperLimit;

    printf("Input upper limit: ");
    scanf("%d", &upperLimit);
    printf("Natural numbers from 1 to %d: ", upperLimit);

    for (lowerLimit = 1; lowerLimit <= upperLimit; lowerLimit++){
        printf("%d ", lowerLimit);
    }
    printf("\n");
    return 0;
}