#include <stdio.h>
#include <string.h>
#include "menu.h"

void mostrarMenuPrincipal() {
    printf("\nEscolha a figura geométrica para calcular a área:\n");
    printf(" A) Triângulo\n B) Quadrilátero\n C) Pentágono\n D) Hexágono\n E) Circunferência\n => ");
}

int identificarFormato(char* alternativa) {
    if (strcasecmp(alternativa, "A") == 0 || strcasecmp(alternativa, "triangulo") == 0 || strcasecmp(alternativa, "triângulo") == 0)
        return TRIANGULO;
    else if (strcasecmp(alternativa, "B") == 0 || strcasecmp(alternativa, "quadrilatero") == 0 || strcasecmp(alternativa, "quadrilátero") == 0)
        return QUADRILATERO;
    else if (strcasecmp(alternativa, "C") == 0 || strcasecmp(alternativa, "pentagono") == 0 || strcasecmp(alternativa, "pentágono") == 0)
        return PENTAGONO;
    else if (strcasecmp(alternativa, "D") == 0 || strcasecmp(alternativa, "hexagono") == 0 || strcasecmp(alternativa, "hexágono") == 0)
        return HEXAGONO;
    else if (strcasecmp(alternativa, "E") == 0 || strcasecmp(alternativa, "circunferencia") == 0 || strcasecmp(alternativa, "circunferência") == 0)
        return CIRCUNFERENCIA;
    else
        return INVALIDO;
}	
