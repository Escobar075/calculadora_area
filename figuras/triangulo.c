#include <stdio.h>
#include <math.h>
#include "../utils/entrada.h"
#include "triangulo.h"

void calcularAreaTriangulo_BaseAltura() {
	double base, altura, area;
	
	if (!lerDouble("\n Digite a base do triângulo: ", &base) || !lerDouble("\n Digite a altura do triângulo: ", &altura)) return;
	area = (base * altura) / 2;	
	printf("\nA área do triângulo é: %.5lf\n", area);
}

void calcularAreaTriangulo_TodosLados() {
	double lado_1, lado_2, lado_3, semiperimetro, area;
	
	if (!lerDouble("\n Digite o lado 1 do triângulo: ", &lado_1) || !lerDouble("\n Digite o lado 2 do triângulo: ", &lado_2) || !lerDouble("\n Digite o lado 3 do triângulo: ", &lado_3)) return;
  	if (!(lado_1 + lado_2 > lado_3 && lado_1 + lado_3 > lado_2 && lado_2 + lado_3 > lado_1)) {
		printf("\n Lados inválidos.\n");
		return;
	} else {
		semiperimetro = (lado_1 + lado_2 + lado_3) / 2;
		area = sqrt(semiperimetro * (semiperimetro - lado_1) * (semiperimetro - lado_2) * (semiperimetro - lado_3));
	return;
	}
	printf("\nA área do triângulo é: %.5lf\n", area);
}

void calcularAreaTriangulo_DoisLadosAngulo() {
	int unidade;
	double lado_1, lado_2, angulo, area;

	if (!lerDouble("\n Digite o lado 1 do triângulo: ", &lado_1) ||
	    !lerDouble("\n Digite o lado 2 do triângulo: ", &lado_2) ||
	    !lerInt("\n Escolha a unidade do ângulo:\n 1 - Grau\n 2 - Radiano\n 3 - Grado\n => ", &unidade)) return;

	if (!lerDouble("\n Digite o ângulo: ", &angulo)) return;

	switch (unidade) {
		case 1: angulo = angulo * M_PI / 180.0; 
			break;
		case 2: 
			break; 
		case 3: angulo = angulo * M_PI / 200.0; break;
		default:
			printf("\n Unidade inválida.\n");
			return;
	}

	area = lado_1 * lado_2 * sin(angulo) / 2.0;
	printf("\n A área do triângulo é: %.5lf\n", area);
}

void calcularAreaTriangulo_Equilatero() {
	double lado, area;
	
	if (!lerDouble("\n Digite o lado do triângulo equilatero: ", &lado)) return;
	area = (pow(lado, 2) * sqrt(3)) / 4;
    printf("\nA área do triângulo é: %.5lf\n", area);
}

void menuCalculoAreaTriangulo() {
	int modo;
	
	if(!lerInt("\n Escolha o modo de cálculo do triângulo: \n 1 - Base e altura\n 2 - Três lados\n 3 - Dois lados e ângulo\n 4 - Equilátero\n => ", &modo)) return;
	
    switch (modo) {
        case 1:
			calcularAreaTriangulo_BaseAltura();
            break;
        case 2:
            calcularAreaTriangulo_TodosLados();
            break;
        case 3:
			calcularAreaTriangulo_DoisLadosAngulo();
            break;
        case 4:
			calcularAreaTriangulo_Equilatero();
            break;
        default:
            printf("\nModo inválido.\n");
            return;
    }

    limparEntrada();
}
