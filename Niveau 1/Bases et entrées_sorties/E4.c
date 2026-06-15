//
// Created by maxence on 15/06/2026.
//

#include <stdio.h>

int main() {
    float tempCelsius;
    float tempFahrenheit;

    scanf("%f", &tempCelsius);

    tempFahrenheit = (tempCelsius * 9.0/5.0) + 32.0;

    printf("%.1f", tempFahrenheit);
    return 0;
}
