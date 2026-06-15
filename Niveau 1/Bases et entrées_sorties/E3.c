//
// Created by maxence on 15/06/2026.
//

#include <stdio.h>

int main() {
    int number;
    int number1;
    int sum;
    int diff;
    int mul;
    int quotient;
    int reste;

    scanf("%d", &number);
    scanf("%d", &number1);

    if (number1 != 0) {
        sum = number + number1;
        diff = number - number1;
        mul = number * number1;
        quotient = number / number1;
        reste = number % number1;
    }

    printf("%d %d %d %d %d\n", sum, diff, mul, quotient, reste);
}
