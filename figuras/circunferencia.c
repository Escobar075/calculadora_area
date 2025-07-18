#include <stdio.h>
#include <math.h>
#include "../utils/entrada.h"
#include "circunferencia.h"

void calcularAreaCircunferencia() {
    double r, R, b, modo, angulo, area;

    printf("\n Voc� escolheu a circunfer�ncia. Escolha uma op��o:\n 1 - �rea\n 2 - Setor circular\n 3 - C�rculo anular\n   ");
    if (scanf("%lf", &modo) != 1) {
        printf("\nEntrada inv�lida. TENTE NOVAMENTE!\n");
        limparEntrada();
        return;
    }

    switch ((int)modo) {
        case 1:
            printf("\n Digite o valor do raio: ");
            if (scanf("%lf", &r) != 1) break;
            area = pow(r, 2) * M_PI;
            printf("\n A �rea da circunfer�ncia �: %.5lf\n", area);
            break;

        case 2:
            printf("\n Digite o valor do raio: ");
            if (scanf("%lf", &r) != 1) break;
            printf("\n Escolha a unidade do �ngulo:\n 1 - Grau\n 2 - Radiano\n 3 - Grado\n   ");
            if (scanf("%lf", &b) != 1) break;
            printf("\n Digite o valor do �ngulo: ");
            if (scanf("%lf", &angulo) != 1) break;

            if (b == 1) {
                area = angulo * pow(r, 2) * M_PI / 360;
            } else if (b == 2) {
                area = angulo * M_PI * pow(r, 2) / 2;
            } else if (b == 3) {
                area = angulo * M_PI * pow(r, 2) / 400;
            } else {
                printf("\n Unid. de �ngulo inv�lida.\n");
                return;
            }
            printf("\n A �rea do setor circular �: %.5lf\n", area);
            break;

        case 3:
            printf("\n Digite o raio maior: ");
            if (scanf("%lf", &R) != 1) break;
            printf("\n Digite o raio menor: ");
            if (scanf("%lf", &r) != 1) break;
            if (R > r) {
                area = M_PI * (pow(R, 2) - pow(r, 2));
                printf("\n A �rea do c�rculo anular �: %.5lf\n", area);
            } else {
                printf("\n O raio maior deve ser maior que o menor.\n");
            }
            break;

        default:
            printf("\nModo inv�lido. TENTE NOVAMENTE!\n");
    }
    limparEntrada();
}