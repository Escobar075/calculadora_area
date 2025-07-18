#include <stdio.h>
#include <math.h>
#include "../utils/entrada.h"
#include "triangulo.h"

void calcularAreaTriangulo() {
    int modo;
    double a, b, c, h, s, angulo, R, area;

    printf("\nVocê escolheu o triângulo. Escolha o modo de cálculo:\n");
    printf(" 1 - Base e altura\n 2 - Três lados\n 3 - Dois lados e ângulo\n 4 - Equilátero\n 5 - Retângulo\n => ");

    if (scanf("%d", &modo) != 1) {
        printf("\nEntrada inválida.\n");
        limparEntrada();
        return;
    }

    switch (modo) {
        case 1:
            if (!lerDouble("\nBase: ", &a) || !lerDouble("Altura: ", &h)) return;
            area = (a * h) / 2;
            break;
        case 2:
            if (!lerDouble("\nLado 1: ", &a) || !lerDouble("Lado 2: ", &b) || !lerDouble("Lado 3: ", &c)) return;
            if (a + b > c && a + c > b && b + c > a) {
                s = (a + b + c) / 2;
                area = sqrt(s * (s - a) * (s - b) * (s - c));
            } else {
                printf("\nLados inválidos.\n");
                return;
            }
            break;
        case 3:
            if (!lerDouble("\nLado 1: ", &a) || !lerDouble("Lado 2: ", &b) || !lerDouble("Ângulo (graus): ", &angulo)) return;
            R = angulo * M_PI / 180;
            area = a * b * sin(R) / 2;
            break;
        case 4:
            if (!lerDouble("\nLado: ", &a)) return;
            area = (pow(a, 2) * sqrt(3)) / 4;
            break;
        case 5:
            if (!lerDouble("\nBase: ", &a) || !lerDouble("Altura: ", &h)) return;
            area = (a * h) / 2;
            break;
        default:
            printf("\nModo inválido.\n");
            return;
    }

    printf("\nA área do triângulo é: %.5lf\n", area);
    limparEntrada();
}

