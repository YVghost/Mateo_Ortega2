/* Desarrollar un programa que me permita obtener el área entre el circulo inscrito
en un triangulo formado por 3 puntos en el plano cartesiano y el triangulo. Los puntos son ingresados
por teclado y tiene componente X y Y.

Se debe conservar la estructura del archivo main.c */

#include <math.h>
#include <stdio.h>
#include "funciones.h"

int main(){

    float x1 = ingresarCoordenadaX();
    float y1 = ingresarCoordenadaY();
    float x2 = ingresarCoordenadaX();
    float y2 = ingresarCoordenadaY();
    float x3 = ingresarCoordenadaX();
    float y3 = ingresarCoordenadaY();

    float radio = obtenerRadio (x1, y1, x2, y2, x3 , y3);

    obtenerArea (radio, x1, y1, x2, y2, x3 , y3);

    return 0;
}
