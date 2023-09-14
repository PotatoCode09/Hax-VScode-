#include <stdio.h>

int main(){
    float number;
    float lowerLimit = 1.00;
    float upperLimit = 5.00;

    printf("Enter Grade: ");
    scanf("%f", &number);

    if (number >= lowerLimit && number <= 1.49) {
        printf("Amazing\n");
    } else {
        if(number >= 1.5 && number <= 2.49) {
            printf("Very Good\n");
        } else {
            if(number >= 2.50 && number <= 3.49) {
                printf("Good\n");
            } else {
                if(number >= 3.50 && number <= 4.49) {
                    printf("Normal\n");
                    } else {
                        if(number >= 4.50 && number <= upperLimit) {
                            printf("Below Average\n");
                        } else {
                            printf("Enter A valid fukin grade\n");
                            return 0;
                        }
                    }
                }
            }
        }
    }