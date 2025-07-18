#include <stdio.h>
#include <string.h>
#include "menu.h"

void mostrarMenuPrincipal() {
    printf("\nEscolha a figura geom�trica para calcular a �rea:\n");
    printf(" A) Tri�ngulo\n B) Quadril�tero\n C) Pent�gono\n D) Hex�gono\n E) Circunfer�ncia\n => ");
}

int identificarFormato(char* letra) {
    if (strcasecmp(letra, "A") == 0 || strcasecmp(letra, "triangulo") == 0 || strcasecmp(letra, "tri�ngulo") == 0)
        return TRIANGULO;
    else if (strcasecmp(letra, "B") == 0 || strcasecmp(letra, "quadrilatero") == 0 || strcasecmp(letra, "quadril�tero") == 0)
        return QUADRILATERO;
    else if (strcasecmp(letra, "C") == 0 || strcasecmp(letra, "pentagono") == 0 || strcasecmp(letra, "pent�gono") == 0)
        return PENTAGONO;
    else if (strcasecmp(letra, "D") == 0 || strcasecmp(letra, "hexagono") == 0 || strcasecmp(letra, "hex�gono") == 0)
        return HEXAGONO;
    else if (strcasecmp(letra, "E") == 0 || strcasecmp(letra, "circunferencia") == 0 || strcasecmp(letra, "circunfer�ncia") == 0)
        return CIRCUNFERENCIA;
    else
        return INVALIDO;
}	
