#include <stdio.h>
#include <math.h>
#include "../utils/entrada.h"
#include "hexagono.h"

void calcularAreaHexagono() {
    double a, area;
    printf("\n Voc� escolheu o hex�gono regular");
    printf("\n Digite o valor do lado: ");
    if (scanf("%lf", &a) != 1) {
        printf("\nEntrada inv�lida. TENTE NOVAMENTE!\n");
        limparEntrada();
        return;
    }
    area = 3 * (pow(a, 2) * sqrt(3)) / 2;
    printf("\n A �rea do hex�gono �: %.5lf\n", area);
    limparEntrada();
}