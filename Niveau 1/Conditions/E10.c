//
// Created by maxence on 15/06/2026.
//

#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);

    if (number %2 == 0) {
        printf("C'est un nombre pair.");
    }else {
        printf("C'est un nombre impair.");
    }

    return 0;
}
