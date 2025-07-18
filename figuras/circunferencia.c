#include <stdio.h>
#include <math.h>
#include "../utils/entrada.h"
#include "circunferencia.h"

void calcularAreaCircunferencia() {
    double r, R, b, modo, angulo, area;

    printf("\n Você escolheu a circunferência. Escolha uma opção:\n 1 - Área\n 2 - Setor circular\n 3 - Círculo anular\n   ");
    if (scanf("%lf", &modo) != 1) {
        printf("\nEntrada inválida. TENTE NOVAMENTE!\n");
        limparEntrada();
        return;
    }

    switch ((int)modo) {
        case 1:
            printf("\n Digite o valor do raio: ");
            if (scanf("%lf", &r) != 1) break;
            area = pow(r, 2) * M_PI;
            printf("\n A área da circunferência é: %.5lf\n", area);
            break;

        case 2:
            printf("\n Digite o valor do raio: ");
            if (scanf("%lf", &r) != 1) break;
            printf("\n Escolha a unidade do ângulo:\n 1 - Grau\n 2 - Radiano\n 3 - Grado\n   ");
            if (scanf("%lf", &b) != 1) break;
            printf("\n Digite o valor do ângulo: ");
            if (scanf("%lf", &angulo) != 1) break;

            if (b == 1) {
                area = angulo * pow(r, 2) * M_PI / 360;
            } else if (b == 2) {
                area = angulo * M_PI * pow(r, 2) / 2;
            } else if (b == 3) {
                area = angulo * M_PI * pow(r, 2) / 400;
            } else {
                printf("\n Unid. de ângulo inválida.\n");
                return;
            }
            printf("\n A área do setor circular é: %.5lf\n", area);
            break;

        case 3:
            printf("\n Digite o raio maior: ");
            if (scanf("%lf", &R) != 1) break;
            printf("\n Digite o raio menor: ");
            if (scanf("%lf", &r) != 1) break;
            if (R > r) {
                area = M_PI * (pow(R, 2) - pow(r, 2));
                printf("\n A área do círculo anular é: %.5lf\n", area);
            } else {
                printf("\n O raio maior deve ser maior que o menor.\n");
            }
            break;

        default:
            printf("\nModo inválido. TENTE NOVAMENTE!\n");
    }
    limparEntrada();
}