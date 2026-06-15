//
// Created by maxence on 15/06/2026.
//

#include <stdio.h>

int main() {
    int heure;
    int minute;
    int seconde;
    int secondesSaisies;

    scanf("%d", &secondesSaisies);

    heure = secondesSaisies /3600;
    minute = secondesSaisies %3600 / 60;
    seconde = secondesSaisies % 60;

    printf("%d secondes correspond à %d heures %d minutes et %d secondes", secondesSaisies, heure, minute, seconde);
    return 0;

}
