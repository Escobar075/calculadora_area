#include <stdio.h>
#include <math.h>
#include "../utils/entrada.h"
#include "circunferencia.h"

void calcularAreaCircunferencia_AreaTotal(){
	double raio, area;
	
	if(!lerDouble("\n Digite o raio da circunferência: ", &raio)) return;
	area = pow(raio,2) * M_PI;
	printf("\n A área da circunferência é: %.5lf\n", area);
}

void calcularAreaCircunferencia_SetorCircular(){
    int unidade;
    double raio, angulo;
    if (!lerDouble("\n Digite o raio do setor circular: ", &raio)) return;
    if (!lerInt("\n Escolha a unidade do ângulo:\n 1 - Grau\n 2 - Radiano\n 3 - Grado\n => ", &unidade)) return;
    if (!lerDouble("\n Digite o ângulo: ", &angulo)) return;

    double area = 0;
    switch (unidade) {
        case 1: area = angulo * PI * raio * raio / 360;
			break;
        case 2: area = angulo * raio * raio / 2; 
			break;
        case 3: area = angulo * PI * raio * raio / 400; 
			break;
        default:
            printf("\n Unidade inválida.\n");
            return;
    }
    printf("\n A área do setor circular é: %.5lf\n", area);
}
	
}

void calcularAreaCircunferencia_CirculoAnular(){
	double raio_maior, raio_menor, area;
	
	if(!lerDouble("\n Digite o raio maior da circunferência: ", &raio_maior) || !lerDouble("\n Digite o raio menor da circunferência: ", &raio_menor)) return;
    if (raio_maior > raio_menor) {
    	area = M_PI * (pow(raio_maior, 2) - pow(raio_menor, 2));
        printf("\n A área do círculo anular é: %.5lf\n", area);
	} else {
        printf("\n O raio maior deve ser maior que o menor.\n");
	}
}

void menuCalculoAreaCircunferencia() {
	int modo;

	if(!lerInt("\n Escolha uma opção sobre circunferência:\n 1 - Área\n 2 - Setor circular\n 3 - Círculo anular\n =>", &modo)) return;

    switch ((int)modo) {
        case 1:
            calcularAreaCircunferencia_AreaTotal();
            break;

        case 2:
            calcularAreaCircunferencia_SetorCircular();
            break;

        case 3:
            calcularAreaCircunferencia_CirculoAnular();
            break;

        default:
            printf("\nModo inválido. TENTE NOVAMENTE!\n");
    }
    limparEntrada();
}
