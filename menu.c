#include <stdio.h>
#include <string.h>
#include "menu.h"

void mostrarMenuPrincipal() {
    printf("\nEscolha a figura geométrica para calcular a área:\n");
    printf(" A) Triângulo\n B) Quadrilátero\n C) Pentágono\n D) Hexágono\n E) Circunferência\n => ");
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
