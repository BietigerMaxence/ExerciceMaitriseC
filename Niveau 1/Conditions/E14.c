//
// Created by maxence on 15/06/2026.
//

#include <stdio.h>

int main() {
    int year;

    scanf("%d", &year);

    if (year % 4== 0) {
        if (year % 100== 0) {
            if (year % 400 == 0) {
                printf("Bissextile");
            }else {
                printf("Non Bissextile");
            }
        }else {
            printf("Bissextile");
        }
    }else {
        printf("Non Bissextile");
    }

    return 0;
}
