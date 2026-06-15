//
// Created by maxence on 15/06/2026.
//

#include <stdio.h>

int main() {
    int temp;
    int valeur1;
    int valeur2;

    scanf("%d %d", &valeur1, &valeur2);

    printf("Valeur 1 avant changement : %d et valeur2 avant changement : %d\n", valeur1, valeur2);

    temp = valeur1;
    valeur1 = valeur2;
    valeur2 = temp;

    printf("Valeur 1 après changement : %d et valeur2 après changement : %d\n", valeur1, valeur2);

    return 0;
}
