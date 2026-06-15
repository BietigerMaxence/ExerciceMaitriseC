//
// Created by maxence on 15/06/2026.
//

#include <stdio.h>

int main() {
    int number;
    int number1;

    scanf("%d %d", &number, &number1);

    if (number > number1) {
        printf("%d", number);
    }else {
        printf("%d", number1);
    }

    return 0;
}
