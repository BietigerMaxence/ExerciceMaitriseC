//
// Created by maxence on 15/06/2026.
//

#include <stdio.h>

int main() {
    const double PI = 3.14159;
    double longueur;
    double perimetre;

    scanf("%lf", &longueur);

    perimetre = 2 * PI * longueur;

    printf("perimetre = %lf\n", perimetre);

    return 0;

}
