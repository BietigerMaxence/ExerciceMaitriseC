//
// Created by maxence on 15/06/2026.
//


#include <stdio.h>

int main() {
    int number;
    int number1;
    int number2;

    scanf("%d %d %d", &number, &number1, &number2);

    if (number > number1) {
        if (number > number2) {
            printf("%d", number);
        }else {
            printf("%d", number2);
        }
    }else if (number1 > number2) {
        printf("%d", number1);
    }else {
        printf("%d", number2);
    }
    return 0;
}
