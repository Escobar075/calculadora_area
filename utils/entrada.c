#include <stdio.h>
#include <stdlib.h>
#include "entrada.h"

void limparEntrada() {
    while (getchar() != '\n');
}

void limparTela() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int lerDouble(const char* mensagem, double* valor) {
    printf("%s", mensagem);
    if (scanf("%lf", valor) != 1) {
        limparEntrada();
        printf("\nEntrada inválida. Tente novamente.\n");
        return 0;
    }
    return 1;
}
