#include <stdio.h>

int main() {
    int numbers;
    int quotient = 0; // Initialize the quotient to 0
    int count;
    int i;

    printf("How many numbers to find the quotient?\n");
    scanf("%d", &numbers);

    for (i = 1; i <= numbers; i++) {
        printf("Enter Number %d: ", i);
        scanf("%d", &count);

        if (i == 1) {
            quotient = count; // Set the first number as the initial quotient
        } else {
            quotient = quotient / count; // Subtract the subsequent numbers from the quotient
        }
    }

    printf("The quotient is: %d\n", quotient);

    return 0;
}
