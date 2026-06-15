//
// Created by maxence on 15/06/2026.
//

#include <stdio.h>

int main() {
    const double PI = 3.14159;
    double rayon;
    double aire;

    scanf("%lf", &rayon);

    aire = PI * rayon * rayon;

    printf("perimetre = %lf\n", aire);

    return 0;

}
