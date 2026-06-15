//
// Created by maxence on 15/06/2026.
//

#include <stdio.h>

int main() {
    int longueur;
    int largeur;
    int perimetre;

    scanf("%d", &longueur);
    scanf("%d", &largeur);

    perimetre = largeur * longueur;

    printf("%d\n", perimetre);
    return 0;
}
