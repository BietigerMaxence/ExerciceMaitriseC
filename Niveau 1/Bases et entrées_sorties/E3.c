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

    if (scanf("%d", &number) != 1 || scanf("%d", &number1) != 1) {
        printf("Entrée invalide\n");
        return 1;
    }

    sum = number + number1;
    diff = number - number1;
    mul = number * number1;
    if (number1 != 0) {
        quotient = number / number1;
        reste = number % number1;
    }else {
        printf("Impossible\n");
        return 1;
    }

    printf("%d %d %d %d %d\n", sum, diff, mul, quotient, reste);
}
