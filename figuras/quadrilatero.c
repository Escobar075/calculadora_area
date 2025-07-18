#include <stdio.h>
#include <math.h>
#include "../utils/entrada.h"
#include "quadrilatero.h"

void calcularAreaQuadrilatero() {
    double modo, area, a, b, h;

    printf("\n Voc� escolheu o quadril�tero. Qual tipo �:\n 1 - Quadrado\n 2 - Ret�ngulo\n 3 - Losango\n 4 - Trap�zio\n 5 - Paralelograma\n   ");
    if (scanf("%lf", &modo) != 1) {
        printf("\nEntrada inv�lida para o modo. Tente novamente.\n");
        limparEntrada();
        return;
    }

    switch ((int)modo) {
        case 1:
            printf("\n Digite o lado do quadrado: ");
            if (scanf("%lf", &a) != 1) break;
            area = pow(a, 2);
            printf("\n A �rea do quadrado �: %.5lf\n", area);
            break;

        case 2:
            printf("\n Digite a base do ret�ngulo: ");
            if (scanf("%lf", &a) != 1) break;
            printf("\n Digite a altura do ret�ngulo: ");
            if (scanf("%lf", &b) != 1) break;
            area = a * b;
            printf("\n A �rea do ret�ngulo �: %.5lf\n", area);
            break;

        case 3:
            printf("\n Digite a diagonal maior do losango: ");
            if (scanf("%lf", &a) != 1) break;
            printf("\n Digite a diagonal menor do losango: ");
            if (scanf("%lf", &b) != 1) break;
            if (a > b) {
                area = (a * b) / 2;
                printf("\n A �rea do losango �: %.5lf\n", area);
            } else {
                printf("\n A diagonal maior deve ser realmente maior. TENTE NOVAMENTE!\n");
            }
            break;

        case 4:
            printf("\n Digite a base maior do trap�zio: ");
            if (scanf("%lf", &a) != 1) break;
            printf("\n Digite a base menor do trap�zio: ");
            if (scanf("%lf", &b) != 1) break;
            printf("\n Digite a altura do trap�zio: ");
            if (scanf("%lf", &h) != 1) break;
            if (a > b) {
                area = ((a + b) * h) / 2;
                printf("\n A �rea do trap�zio �: %.5lf\n", area);
            } else {
                printf("\n A base maior deve ser realmente maior. TENTE NOVAMENTE!\n");
            }
            break;

        case 5:
            printf("\n Digite a base do paralelograma: ");
            if (scanf("%lf", &a) != 1) break;
            printf("\n Digite a altura do paralelograma: ");
            if (scanf("%lf", &h) != 1) break;
            area = a * h;
            printf("\n A �rea do paralelograma �: %.5lf\n", area);
            break;

        default:
            printf("\nModo inv�lido. TENTE NOVAMENTE!\n");
    }
    limparEntrada();
}