//
// Created by maxence on 15/06/2026.
//

#include <stdio.h>

int main() {
    float note1;
    float note2;
    float note3;
    float moyenne;

    scanf("%f %f %f", &note1 , &note2, &note3);

    moyenne = (note1 + note2 + note3)/3.0;

    printf("%.2f\n", moyenne);

    return 0;
}
