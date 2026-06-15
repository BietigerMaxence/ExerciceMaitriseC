//
// Created by maxence on 15/06/2026.
//

#include <stdio.h>

int main() {
    int heure;
    int minute;
    int seconde;
    int secondesSaises;

    scanf("%d", &secondesSaises);

    heure = secondesSaises /3600;
    minute = secondesSaises %3600 / 60;
    seconde = secondesSaises % 60;

    printf("%d secondes correspond à %d heures %d minutes et %d secondes", secondesSaises, heure, minute, seconde);
    return 0;

}
