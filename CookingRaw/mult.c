#include <stdio.h>

int num1(int x, int y);
int num2(int x, int z);

int main() {
    int x, y, z;
    int add;

    printf("Input Range: ");
    scanf("%d", &x);
    printf("Multiples of what number to add? ");
    scanf("%d, %d", &y, &z);

    int result1 = num1(x, y);
    int result2 = num2(x, z);
    add = result1 + result2;
    printf("Sum is %d\n", add);

    return 0;
}














int num1(int x, int y) {
    int sum = 0;
    int ctr = 0;
    int mod;

    while (ctr <= x) {
        mod = ctr % y;
        if (mod == 0) {
            sum = ctr + sum;
        }
        ctr++;
    }
    return sum;
}

int num2(int x, int z) {
    int sum1 = 0;
    int ctr1 = 0;
    int mod1;

    while (ctr1 <= x) {
        mod1 = ctr1 % z;
        if (mod1 == 0) {
            sum1 = ctr1 + sum1;
        }
        ctr1++;
    }
    return sum1;
}
