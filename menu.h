#ifndef MENU_H
#define MENU_H

enum Formatos {
    TRIANGULO, QUADRILATERO, PENTAGONO, HEXAGONO, CIRCUNFERENCIA, INVALIDO
};

void mostrarMenuPrincipal();
int identificarFormato(char* letra);

void calcularAreaTriangulo();
void calcularAreaQuadrilatero();
void calcularAreaPentagono();
void calcularAreaHexagono();
void calcularAreaCircunferencia();

#endif
