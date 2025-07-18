#include <stdio.h>
#include <math.h>
#include "../utils/entrada.h"
#include "triangulo.h"

void calcularAreaTriangulo() {
    int modo;
    double a, b, c, h, s, angulo, R, area;

    printf("\nVoc� escolheu o tri�ngulo. Escolha o modo de c�lculo:\n");
    printf(" 1 - Base e altura\n 2 - Tr�s lados\n 3 - Dois lados e �ngulo\n 4 - Equil�tero\n 5 - Ret�ngulo\n => ");

    if (scanf("%d", &modo) != 1) {
        printf("\nEntrada inv�lida.\n");
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
                printf("\nLados inv�lidos.\n");
                return;
            }
            break;
        case 3:
            if (!lerDouble("\nLado 1: ", &a) || !lerDouble("Lado 2: ", &b) || !lerDouble("�ngulo (graus): ", &angulo)) return;
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
            printf("\nModo inv�lido.\n");
            return;
    }

    printf("\nA �rea do tri�ngulo �: %.5lf\n", area);
    limparEntrada();
}

