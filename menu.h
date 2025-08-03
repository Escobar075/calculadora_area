#ifndef MENU_H
#define MENU_H

enum Formatos {
    TRIANGULO, QUADRILATERO, PENTAGONO, HEXAGONO, CIRCUNFERENCIA, INVALIDO
};

void mostrarMenuPrincipal();
int identificarFormato(char* alternativa);

void menuCalculoAreaTriangulo();
void menuCalculoAreaQuadrilatero();
void menuCalculoAreaPentagono();
void menuCalculoAreaHexagono();
void menuCalculoAreaCircunferencia();

#endif
