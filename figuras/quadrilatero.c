#include <stdio.h>
#include <math.h>
#include "../utils/entrada.h"
#include "quadrilatero.h"

void calcularAreaQuadrilatero_Quadrado(){
	double lado, area;
	
	if (!lerDouble("\n Digite o lado do quadrado: ", &lado)) return;
	area = pow(lado, 2);
	printf("\n A área do quadrilatero é: %.5lf\n", area);
}

void calcularAreaQuadrilatero_Rentagulo(){
	double base, altura, area;
	
	if(!lerDouble("\n Digite a base do retangulo: ", &base) || !lerDouble("\n Digite a altura do retangulo: ", &altura)) return;
	area = base * altura;	
	printf("\n A área do quadrilatero é: %.5lf\n", area);
}

void calcularAreaQuadrilatero_Losango(){
	double diagonal_1, diagonal_2, area;
	
	if(!lerDouble("\n Digite a primeira diagonal do losango: ", &diagonal_1) || !lerDouble("\n Digite a segunda diagonal do losango: ", &diagonal_2)) return;
   	area = (diagonal_1 * diagonal_2) / 2;
   printf("\n A área do quadrilatero é: %.5lf\n", area);
}

void calcularAreaQuadrilatero_Trapezio(){
	double base_1, base_2, altura, area;
	
	if(!lerDouble("\n Digite a primeira base do trapézio: ", &base_1) || !lerDouble("\n Digite a segunda base do trapézio: ", &base_2) || !lerDouble("\n Digite a altura do trapézio: ", &altura)) return;
	area = ((base_1 + base_2) * altura) / 2;
	printf("\n A área do quadrilatero é: %.5lf\n", area);
}

void calcularAreaQuadrilatero_Paralelograma(){
	double base, altura, area;
	
	if(!lerDouble("\n Digite a base do paralelograma: ", &base) || !lerDouble("\n Digite a altura do paralelograma: ", &altura)) return;
	area = base * altura;
 	printf("\n A área do quadrilatero é: %.5lf\n", area);
}
void menuCalculoAreaQuadrilatero() {
	int modo;
	
	if(!lerInt("\n Escolha o modo de cálculo do quadrilátero: \n 1 - Quadrado\n 2 - Retângulo\n 3 - Losango\n 4 - Trapézio\n 5 - Paralelograma\n  => ", &modo)) return;

    switch ((int)modo) {
        case 1:
            calcularAreaQuadrilatero_Quadrado();
            break;

        case 2:
			calcularAreaQuadrilatero_Rentagulo();
            break;

        case 3:
            calcularAreaQuadrilatero_Losango();
            break;
 
        case 4:
			calcularAreaQuadrilatero_Trapezio();
            break;

        case 5:
			calcularAreaQuadrilatero_Paralelograma();
            break;

        default:
            printf("\nModo inválido. TENTE NOVAMENTE!\n");
    }
    limparEntrada();
}
