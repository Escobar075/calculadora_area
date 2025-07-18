#include <stdio.h>
#include <math.h>
#include "../utils/entrada.h"
#include "hexagono.h"

void calcularAreaHexagono() {
    double lado_1, area;
    printf("\n Você escolheu o hexágono regular");
    printf("\n Digite o valor do lado: ");
    if (scanf("%lf", &lado_1) != 1) {
        printf("\nEntrada inválida. TENTE NOVAMENTE!\n");
        limparEntrada();
        return;
    }
    area = 3 * (pow(lado_1, 2) * sqrt(3)) / 2;
    printf("\n A área do hexágono é: %.5lf\n", area);
    limparEntrada();
}
