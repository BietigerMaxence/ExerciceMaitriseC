//
// Created by maxence on 15/06/2026.
//


#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);

    if (number > 0) {
        printf("Positif");
    } else if (number < 0) {
        printf("Negatif");
    } else {
        printf("Nul");
    }
    return 0;
}
