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
	if (getenv("TERM") != NULL && strcmp(getenv("TERM"), "dumb") != 0) {
        printf("\e[1;1H\e[2J"); 
	} else {
    system("clear");
	}
#endif
	fflush(stdout);
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

int lerInt(const char* mensagem, int* valor) {
    printf("%s", mensagem);
    if (scanf("%d", valor) != 1) {
        limparEntrada();
        printf("\nEntrada inválida. Tente novamente.\n");
        return 0;
    }
    return 1;
}
