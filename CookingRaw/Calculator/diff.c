#include <stdio.h>

int main() {
    int numbers;
    int difference = 0; // Initialize the difference to 0
    int count;
    int i;

    printf("How many numbers to find the difference?\n");
    scanf("%d", &numbers);

    for (i = 1; i <= numbers; i++) {
        printf("Enter Number %d: ", i);
        scanf("%d", &count);

        if (i == 1) {
            difference = count; // Set the first number as the initial difference
        } else {
            difference = difference - count; // Subtract the subsequent numbers from the difference
        }
    }

    printf("The difference is: %d\n", difference);

    return 0;
}
