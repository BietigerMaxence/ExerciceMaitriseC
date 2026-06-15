//
// Created by maxence on 15/06/2026.
//

#include <stdio.h>

int main() {
    int age;

    scanf("%d", &age);

    if (age < 12) {
        printf("Enfant");
    } else if (age < 18) {
        printf("Ado");
    } else if (age < 65) {
        printf("Adulte");
    }else {
        printf("Senior");
    }
    return 0;
}
