#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

enum Formatos { TRIANGULO, QUADRILATERO, PENTAGONO, HEXAGONO, CIRCUNFERENCIA, INVALIDO };

int identificarFormato(char* letra);
void calcularAreaTriangulo();
void calcularAreaQuadrilatero();
void calcularAreaPentagono();
void calcularAreaHexagono();
void calcularAreaCircunferencia();

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    char letra[20], again[5];

    do {
        printf("\n   Escolha dentre as opcoes abaixo a figura geometrica para calcular a área:\n");
        printf("   A) Triangulo\n   B) Quadrilatero\n   C) Pentagono\n   D) Hexagono\n   E) Circunferencia\n   => ");
        scanf("%s", letra);

        switch (identificarFormato(letra)) {
            case TRIANGULO:
                calcularAreaTriangulo();
                break;
            case QUADRILATERO:
                calcularAreaQuadrilatero();
                break;
            case PENTAGONO:
                calcularAreaPentagono();
                break;
            case HEXAGONO:
                calcularAreaHexagono();
                break;
            case CIRCUNFERENCIA:
                calcularAreaCircunferencia();
                break;
            default:
                printf("\n =============== ERRO-1 ===============\n");
                printf("\nFigura invalida. TENTE NOVAMENTE!\n");
                break;
        }

        printf("\n   Quer continuar outra operacao? (sim/nao): ");
        scanf("%s", again);
        limparTela();

    } while (strcasecmp(again, "sim") == 0 || strcasecmp(again, "s") == 0);

    printf("\nAgradeco por utilizar nossos servicos.\n");
    printf("\n=============== FINALIZADO ===============\n");
    return 0;
}

int identificarFormato(char* letra) {
    if (strcasecmp(letra, "A") == 0 || strcasecmp(letra, "triangulo") == 0 || strcasecmp(letra, "triângulo") == 0)
        return TRIANGULO;
    else if (strcasecmp(letra, "B") == 0 || strcasecmp(letra, "quadrilatero") == 0 || strcasecmp(letra, "quadrilátero") == 0)
        return QUADRILATERO;
    else if (strcasecmp(letra, "C") == 0 || strcasecmp(letra, "pentagono") == 0 || strcasecmp(letra, "pentágono") == 0)
        return PENTAGONO;
    else if (strcasecmp(letra, "D") == 0 || strcasecmp(letra, "hexagono") == 0 || strcasecmp(letra, "hexágono") == 0)
        return HEXAGONO;
    else if (strcasecmp(letra, "E") == 0 || strcasecmp(letra, "circunferencia") == 0 || strcasecmp(letra, "circunferência") == 0)
        return CIRCUNFERENCIA;
    else
        return INVALIDO;
}

void calcularAreaTriangulo() {
    double modo, a, b, c, h, s, angulo, R, area;

    printf("\n Você escolheu o triângulo, agora escolha o modo de calcular a área:\n");
    printf(" 1 - Altura com base\n");
    printf(" 2 - Todos os lados\n");
    printf(" 3 - Com um ângulo\n");
    printf(" 4 - Triângulo equilátero\n");
    printf(" 5 - Triângulo retângulo\n   ");
    scanf("%lf", &modo);

    if (modo == 1) {
        printf("\n Digite o valor da base: ");
        scanf("%lf", &a);
        printf("\n Digite o valor da altura: ");
        scanf("%lf", &h);
        area = (h * a) / 2;
        printf("\n A área do triângulo é: %.5lf\n", area);
    } else if (modo == 2) {
        printf("\n Digite um lado: ");
        scanf("%lf", &a);
        printf("\n Outro lado: ");
        scanf("%lf", &b);
        printf("\n O terceiro lado: ");
        scanf("%lf", &c);
        if (a < b + c && b < a + c && c < a + b) {
            s = (a + b + c) / 2;
            area = sqrt(s * (s - a) * (s - b) * (s - c));
            printf("\n A área do triângulo é: %.5lf\n", area);
        } else {
            printf("\n ===============ERRO-2=============== \n");
            printf("\n Lados inválidos. TENTE NOVAMENTE! \n");
        }
    } else if (modo == 3) {
        printf("\n Digite um lado: ");
        scanf("%lf", &a);
        printf("\n Digite outro lado: ");
        scanf("%lf", &b);
        printf("\n Digite o ângulo (graus): ");
        scanf("%lf", &angulo);
        R = angulo * M_PI / 180;
        area = a * b * sin(R) / 2;
        printf("\n A área do triângulo é: %.5lf\n", area);
    } else if (modo == 4) {
        printf("\n Você escolheu o triângulo equilátero.");
        printf("\n Digite o lado do triângulo equilátero: ");
        scanf("%lf", &a);
        area = (pow(a, 2) * sqrt(3)) / 4;
        printf("\n A área do triângulo é: %.5lf\n", area);
    } else if (modo == 5) {
        printf("\n Você escolheu o triângulo retângulo.");
        printf("\n Digite a base: ");
        scanf("%lf", &a);
        printf("\n Digite a altura: ");
        scanf("%lf", &h);
        area = a * h / 2;
        printf("\n A área do triângulo é: %.5lf\n", area);
    } else {
        printf("\n ===============ERRO-3=============== \n");
        printf("\n Modo inválido. TENTE NOVAMENTE! \n");
    }
}

void calcularAreaQuadrilatero() {
	double modo, area, a, b, h;
	
	printf("\n Você escolheu o quadrilátero, qual tipo é:\n 1-quadrado\n 2-retÂngulo\n 3-losango\n 4-trapézio\n 5-paralelograma\n   ");
	scanf("  %lf", &modo);
	if(modo == 1) {
		printf("\n Você escolheu o quadrado");
		printf("\n Digite o lado do quadrado: ");
		scanf("%lf", &a);
		area = pow(a, 2);
		printf("\n A área do quadrado é:%.5lf\n", area);
	}
	else if(modo == 2) {
		printf("\n Você escolheu o retângulo");
		printf("\n Digite a base do retângulo: ");
		scanf("%lf", &a);
		printf("\n Digite a altura do retângulo: ");
		scanf("%lf", &b);
		area = a * b;
		printf("\n A área do retângulo é:%.5lf\n", area);	
	}
	else if (modo == 3) {
    		printf("\n Você escolheu o losango");
		printf("\n Digite a diagonal maior do losango: ");
    		scanf("%lf", &a);
    		printf("\n Digite a diagonal menor do losango: ");
    		scanf("%lf", &b);
    		if (a > b) {
        		area = (a * b) / 2;
        		printf("\n A área do losango é: %.5lf\n", area);
   		} 
		else {
        		printf("\n ===============ERRO-4=============== \n");
        		printf("\n A diagonal maior deve ser realmente maior. TENTE NOVAMENTE! \n");
    		}
	}
	else if (modo == 4) {  // Trapézio
    		printf("\n Você escolheu o trapézio");
    		printf("\n Digite a base maior do trapézio: ");
    		scanf("%lf", &a);
    		printf("\n Digite a base menor do trapézio: ");
    		scanf("%lf", &b);
    		printf("\n Digite a altura do trapézio: ");
    		scanf("%lf", &h);
			if (a > b) {
        			area = ((a + b) * h) / 2;
        			printf("\n A área do trapézio é: %.5lf\n", area);
    			}
			else {
        			printf("\n ===============ERRO-5=============== \n");
       				printf("\n A base maior deve ser realmente maior. TENTE NOVAMENTE! \n");
    			}
	}
	else if(modo == 5) {
		printf("\n Você escolheu o paralelograma");
		printf("\n Digite a base do paralelograma: ");
		scanf("%lf", &a);
		printf("\n Digite a altura do paralelograma: ");
		scanf("%lf", &h);
		area = a * h;
		printf("\n A área do paralelograma é:%.5lf\n", area);
	}
	else {
		printf("\n ===============ERRO-6=============== \n");
		printf("\n TENTE NOVAMENTE! \n");
	}
}

void calcularAreaPentagono() {
	double a, area;
	
	printf("\n Você escolheu o pentágono regular");
	printf("\n Digite o valor do lado: ");
	scanf("%lf", &a);
	area = (5 * pow(a, 2)) / (4 * tan(M_PI / 5));
	printf("\n A área do pentágono é:%.5lf\n", area);
}

void calcularAreaHexagono() {
	double a, area;

	printf("\n Você escolheu o hexágono regular");
	printf("\n Digite o valor do lado do hexágono: ");
	scanf("%lf", &a);
	area = 3 * (pow(a, 2) * sqrt(3)) / 2;
	printf("\n A área do hexágono é:%.5lf\n", area);
}

void calcularAreaCircunferencia() {
	double r, R, b, modo, angulo, area;
	
	printf("\n Você escolheu o circunferência, agora escolha o quer a partir dele:\n 1-Área\n 2-setor circular(fatia de pizza)\n 3-círculo anular(um CD)\n   ");
	scanf("  %lf", &modo);
	if(modo == 1) {
		printf("\n Você escolheu a área da circunferência, digite o valor do raio: ");
		scanf("%lf", &r);
		area = pow(r, 2) * M_PI;
		printf("\n A área da circunferência é:%.5lf\n", area);
	}
	else if(modo == 2) {
		printf("\n Você escolheu a área de um setor circular");
		printf("\n Digite o valor do raio: ");
		scanf("%lf", &r);
		printf("\n Escolha escolha a medida do ângulo, entre\n 1-grau\n 2-radiano\n 3-grado\n\n (só escolha pelo número)\n\n");
		scanf("%lf", &b);
		if(b == 1) {
			printf("\n Digite o ângulo: ");
			scanf("%lf", &angulo);
			area = angulo * pow(r, 2) * M_PI/360;
			printf("\n A área do setor circular é:%.5lf\n", area);
		}
		else if(b == 2)	{
			printf("\n considere a fórmula já com o PI");
			printf("\n Digite o ângulo: ");
			scanf("%lf", &angulo);
			area = angulo * M_PI * pow(r, 2)/2;
			printf("\n A área do setor circular é:%.5lf\n", area);
		}
		else if(b == 3) {
			printf("\n Digite o ângulo: ");
			scanf("%lf", &angulo);
			area = angulo * M_PI * pow(r, 2)/400;
			printf("\n A área do setor circular é:%.5lf\n", area);
		}
		else {
			printf("\n ===============ERRO-7=============== \n");
			printf("\n TENTE NOVAMENTE! \n");
		}
	}
	else if(modo == 3) {
		if(R > r) {
			printf("\n Você escolheu o círculo anular");
			printf("\n digite o raio maior: ");
			scanf("%lf", &R);
			printf("\n Digite o raio menor: ");
			scanf("%lf", &r);
			area = M_PI * (pow(R, 2) - pow(r, 2));
			printf("\n A área do círculo anular é:%.2lf\n", area);
		}
		else {
			printf("\n ===============ERRO-8=============== \n");
			printf("\n TENTE NOVAMENTE! \n");
		}	
	}
	else {
		printf("\n ===============ERRO-9=============== \n");
		printf("\n TENTE NOVAMENTE! \n");
	}
}

void limparTela() {
	#ifdef _WIN32
   		system("cls");
	#else
    		system("clear");
	#endif
}
