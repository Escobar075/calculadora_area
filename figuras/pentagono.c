#include <stdio.h>
#include <math.h>
#include "../utils/entrada.h"
#include "pentagono.h"

void calcularAreaPentagono() {
    double a, area;
    printf("\n Você escolheu o pentágono regular");
    printf("\n Digite o valor do lado: ");
    if (scanf("%lf", &a) != 1) {
        printf("\nEntrada inválida. TENTE NOVAMENTE!\n");
        limparEntrada();
        return;
    }
    area = (5 * pow(a, 2)) / (4 * tan(M_PI / 5));
    printf("\n A área do pentágono é: %.5lf\n", area);
    limparEntrada();
}