#include <stdio.h>
#include <math.h>
#include "../utils/entrada.h"
#include "pentagono.h"

void calcularAreaPentagono() {
    double a, area;
    printf("\n Voc� escolheu o pent�gono regular");
    printf("\n Digite o valor do lado: ");
    if (scanf("%lf", &a) != 1) {
        printf("\nEntrada inv�lida. TENTE NOVAMENTE!\n");
        limparEntrada();
        return;
    }
    area = (5 * pow(a, 2)) / (4 * tan(M_PI / 5));
    printf("\n A �rea do pent�gono �: %.5lf\n", area);
    limparEntrada();
}