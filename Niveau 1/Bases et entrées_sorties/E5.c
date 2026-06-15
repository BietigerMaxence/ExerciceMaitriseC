//
// Created by maxence on 15/06/2026.
//

#include <stdio.h>

int main() {
    int longueur;
    int largeur;
    int perimetre;
    int aire;

    scanf("%d", &longueur);
    scanf("%d", &largeur);

    perimetre = (largeur + longueur) *2;
    aire = largeur * longueur;

    printf("%d %d\n", perimetre, aire);
    return 0;
}
