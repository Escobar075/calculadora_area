#include <stdio.h>
#include <math.h>
#include "../utils/entrada.h"
#include "pentagono.h"

void calcularAreaPentagono_Regular(){
	double lado, area;
	
	if(!lerDouble("\n Digite o lado da pentágono regular: ", &lado)) return;
	area =(5 * pow(lado, 2)) * (4 * tan(M_PI / 5));
    printf("\n A área do pentágono é: %.5lf\n", area);
}

void menuCalculoAreaPentagono() {
	calcularAreaPentagono_Regular();
    limparEntrada();
}
