#include <stdio.h>
#include <math.h>
#include "../utils/entrada.h"
#include "hexagono.h"

void calcularAreaHexagono_Regular(){
	double lado, area;
	
	if(!lerDouble("\n Digite o lado do hexágono regular: ", &lado)) return;
	area = 3 * (pow(lado, 2) * sqrt(3)) / 2;
    printf("\n A área do hexágono é: %.5lf\n", area);
}

void menuCalculoAreaHexagono() {
	calcularAreaHexagono_Regular();
    limparEntrada();
}
