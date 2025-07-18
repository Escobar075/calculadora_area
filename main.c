#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "menu.h"
#include "utils/entrada.h"

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    char letra[20], again[5];

    do {
        mostrarMenuPrincipal();
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
                printf("\nFigura inválida. TENTE NOVAMENTE!\n");
        }

        printf("\nQuer continuar outra operação? (sim/não): ");
        scanf("%s", again);

    } while (strcasecmp(again, "sim") == 0 || strcasecmp(again, "s") == 0);

	limparTela();
    printf("\nObrigado por utilizar a Calculadora de Áreas!\n");
    return 0;
}
