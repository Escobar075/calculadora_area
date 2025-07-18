#include <stdio.h>
#include <math.h>
#include "../utils/entrada.h"
#include "quadrilatero.h"

void calcularAreaQuadrilatero() {
    double modo, area, lado_1, lado_2, altura, diagonal_1, diagonal_2;

    printf("\n Você escolheu o quadrilátero. Qual tipo é:\n 1 - Quadrado\n 2 - Retângulo\n 3 - Losango\n 4 - Trapézio\n 5 - Paralelograma\n   ");
    if (scanf("%lf", &modo) != 1) {
        printf("\nEntrada inválida para o modo. Tente novamente.\n");
        limparEntrada();
        return;
    }

    switch ((int)modo) {
        case 1:
            printf("\n Digite o lado do quadrado: ");
            if (scanf("%lf", &lado_1) != 1) break;
            area = pow(lado_1, 2);
            printf("\n A área do quadrado é: %.5lf\n", area);
            break;

        case 2:
            printf("\n Digite a base do retângulo: ");
            if (scanf("%lf", &lado_1) != 1) break;
            printf("\n Digite a altura do retângulo: ");
            if (scanf("%lf", &lado_2) != 1) break;
            area = lado_1 * lado_2;
            printf("\n A área do retângulo é: %.5lf\n", area);
            break;

        case 3:
            printf("\n Digite a diagonal maior do losango: ");
            if (scanf("%lf", &diagonal_1) != 1) break;
            printf("\n Digite a diagonal menor do losango: ");
            if (scanf("%lf", &diagonal_2) != 1) break;
            if (diagonal_1 > diagonal_2) {
                area = (diagonal_1 * diagonal_2) / 2;
                printf("\n A área do losango é: %.5lf\n", area);
            } else {
                printf("\n A diagonal maior deve ser realmente maior. TENTE NOVAMENTE!\n");
            }
            break;

        case 4:
            printf("\n Digite a base maior do trapézio: ");
            if (scanf("%lf", &lado_1) != 1) break;
            printf("\n Digite a base menor do trapézio: ");
            if (scanf("%lf", &lado_2) != 1) break;
            printf("\n Digite a altura do trapézio: ");
            if (scanf("%lf", &altura) != 1) break;
            if (lado_1 > lado_2) {
                area = ((lado_1 + lado_2) * altura) / 2;
                printf("\n A área do trapézio é: %.5lf\n", area);
            } else {
                printf("\n A base maior deve ser realmente maior. TENTE NOVAMENTE!\n");
            }
            break;

        case 5:
            printf("\n Digite a base do paralelograma: ");
            if (scanf("%lf", &lado_1) != 1) break;
            printf("\n Digite a altura do paralelograma: ");
            if (scanf("%lf", &altura) != 1) break;
            area = lado_1 * altura;
            printf("\n A área do paralelograma é: %.5lf\n", area);
            break;

        default:
            printf("\nModo inválido. TENTE NOVAMENTE!\n");
    }
    limparEntrada();
}
