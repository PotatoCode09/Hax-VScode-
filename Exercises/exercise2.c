#include <stdio.h>

int main(void)
{
    float number, count, average, sum = 0;

    do
    {
    printf("How many numbers? ");
    scanf("%f", &number);
    }
    while (number < 3);
    
    int i;
    for (i = 0; i < number; i++) {
        printf("Enter Number: ");
        scanf("%f", &count);
        sum = sum + count;
    }
    average = sum / number;

    printf("The average is: %.2f", average);
    return 0;
}