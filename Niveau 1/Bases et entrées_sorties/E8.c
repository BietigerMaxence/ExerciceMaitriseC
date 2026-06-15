//
// Created by maxence on 15/06/2026.
//

#include <stdio.h>

int main() {
    int note1;
    int note2;
    int note3;
    int moyenne;

    scanf("%d %d %d", &note1 , &note2, &note3);

    moyenne = (note1 + note2 + note3)/3;

    printf("%d\n", moyenne);

    return 0;
}
