#include <stdio.h>

int main(){
    int numbers;
    int product = 1;
    int count;
    int i;

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