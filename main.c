#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "menu.h"
#include "utils/entrada.h"

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    char alternativa[20], again[5];

    do {
        mostrarMenuPrincipal();
        scanf("%s", alternativa);

        switch (identificarFormato(alternativa)) {
            case TRIANGULO:
                menuCalculoAreaTriangulo();
                break;
            case QUADRILATERO:
                menuCalculoAreaQuadrilatero();
                break;
            case PENTAGONO:
                menuCalculoAreaPentagono();
                break;
            case HEXAGONO:
                menuCalculoAreaHexagono();
                break;
            case CIRCUNFERENCIA:
                menuCalculoAreaCircunferencia();
                break;
            default:
                printf("\nFigura inválida. TENTE NOVAMENTE!\n");
        }

        printf("\nQuer continuar outra operação? (sim/não): ");
        scanf("%s", again);
		limparTela();
		
    } while (strcasecmp(again, "sim") == 0 || strcasecmp(again, "s") == 0);

    printf("\n Obrigado por utilizar a Calculadora de Áreas!\n");
    return 0;
}
