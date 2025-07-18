#include <stdio.h>
#include <math.h>
#include "../utils/entrada.h"
#include "hexagono.h"

void calcularAreaHexagono() {
    double a, area;
    printf("\n Você escolheu o hexágono regular");
    printf("\n Digite o valor do lado: ");
    if (scanf("%lf", &a) != 1) {
        printf("\nEntrada inválida. TENTE NOVAMENTE!\n");
        limparEntrada();
        return;
    }
    area = 3 * (pow(a, 2) * sqrt(3)) / 2;
    printf("\n A área do hexágono é: %.5lf\n", area);
    limparEntrada();
}