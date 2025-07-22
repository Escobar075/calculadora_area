#include <stdio.h>
#include <math.h>
#include "../utils/entrada.h"
#include "pentagono.h"

void calcularAreaPentagono() {
    double lado, area;
    printf("\n Voce escolheu o pentágono regular");
    printf("\n Digite o valor do lado: ");
    if (scanf("%lf", &lado) != 1) {
        printf("\nEntrada inválida. TENTE NOVAMENTE!\n");
        limparEntrada();
        return;
    }
    area = (5 * pow(lado, 2)) / (4 * tan(M_PI / 5));
    printf("\n A área do pentágono é: %.5lf\n", area);
    limparEntrada();
}
