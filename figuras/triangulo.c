#include <stdio.h>
#include <math.h>
#include "../utils/entrada.h"
#include "triangulo.h"

void calcularAreaTriangulo() {
    int modo;
    double lado_1, lado_2, lado_3, altura, semiperimetro, angulo, radiano, area;

    printf("\nVocê escolheu o triângulo. Escolha o modo de cálculo:\n");
    printf(" 1 - Base e altura\n 2 - Três lados\n 3 - Dois lados e ângulo\n 4 - Equilátero\n 5 - Retângulo\n => ");

    if (scanf("%d", &modo) != 1) {
        printf("\nEntrada inválida.\n");
        limparEntrada();
        return;
    }

    switch (modo) {
        case 1:
            if (!lerDouble("\nBase: ", &lado_1) || !lerDouble("Altura: ", &altura)) return;
            area = (lado_1 * altura) / 2;
            break;
        case 2:
            if (!lerDouble("\nLado 1: ", &lado_1) || !lerDouble("Lado 2: ", &lado_2) || !lerDouble("Lado 3: ", &lado_3)) return;
            if (lado_1 + lado_2 > lado_3 && lado_1 + lado_3 > lado_2 && lado_2 + lado_3 > lado_1) {
                semiperimetro = (lado_1 + lado_2 + lado_3) / 2;
                area = sqrt(semiperimetro * (semiperimetro - lado_1) * (semiperimetro - lado_2) * (semiperimetro - lado_3));
            } else {
                printf("\nLados inválidos.\n");
                return;
            }
            break;
        case 3:
            if (!lerDouble("\nLado 1: ", &lado_1) || !lerDouble("Lado 2: ", &lado_2) || !lerDouble("Ângulo (graus): ", &angulo)) return;
            radiano = angulo * M_PI / 180;
            area = lado_1 * lado_2 * sin(radiano) / 2;
            break;
        case 4:
            if (!lerDouble("\nLado: ", &lado_1)) return;
            area = (pow(lado_1, 2) * sqrt(3)) / 4;
            break;
        case 5:
            if (!lerDouble("\nBase: ", &lado_1) || !lerDouble("Altura: ", &altura)) return;
            area = (lado_1 * altura) / 2;
            break;
        default:
            printf("\nModo inválido.\n");
            return;
    }

    printf("\nA área do triângulo é: %.5lf\n", area);
    limparEntrada();
}

