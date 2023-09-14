#include <stdio.h>

int main(void){
    int numbers;
    int sum;
    int count;
    int i;
    int choice;

    printf("What do you wanna do?\nAdd      : 1\nSubtract : 2\nMultpily : 3\nDivide   : 4\n...");
    scanf("%d", &choice);

    if (choice == 1){
            sum = 0;
            printf("How many numbers to add? "); //Ask for user imput kung pila ka numbers
        scanf("%d", &numbers); //Scan user input then assign the input to the variable

    
        for (i = 1; i <= numbers; i++){
            printf("Enter Number %d: ", i);// Ask user input on the operands and also shows which number is being asked
            scanf("%d", &count);
        sum = sum + count;
    }

    printf("The sum is: %d\n", sum);
    
    return 0;
    }

    else if(choice == 2){
            sum = 0;
            int difference;
            difference = sum;

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

    else if(choice == 3){
            sum = 1;
            int product;
            product = sum;

            printf("How many numbers to multiply? "); //Ask for user imput kung pila ka numbers
        scanf("%d", &numbers); //Scan user input then assign the input to the variable

    
        for (i = 1; i <= numbers; i++){
            printf("Enter Number %d: ", i);// Ask user input on the operands and also shows which number is being asked
            scanf("%d", &count);
        product = product * count;
    }

        printf("The product is: %d\n", product);
    
    return 0;
    }

    else if(choice == 4){
            sum = 0;
            int quotient;
            quotient = sum;

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

    else {
        printf("Pagtarung ba... ");
        return 1;
    }
}