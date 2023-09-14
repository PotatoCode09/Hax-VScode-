#include <stdio.h>

int main(){
    int numbers;
    int sum = 0;
    int count;
    int i;

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

