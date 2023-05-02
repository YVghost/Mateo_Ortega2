#include <math.h>
#include <stdio.h>
#include "funciones.h"

float ingresarCoordenadaX (){
    printf ("Ingrese el punto x\n");
    float x;
    scanf ("%f",&x);
    return x;
}

float ingresarCoordenadaY (){
    printf ("Ingrese el punto y\n");
    float y;
    scanf ("%f",&y);
    return y;
}

float obtenerRadio (float x1, float y1, float x2, float y2, float x3 , float y3){

    float b = y3 - y1;
    float c = x2 - x1;
    float a = sqrt (pow(b,2) + pow(c,2));

    float radio = (b* c) / (a + b + c);  

    return radio;
}

void obtenerArea (float radio, float x1, float y1, float x2, float y2, float x3 , float y3){

    float b = y3 - y1;
    float c = x2 - x1;
    float a = sqrt (pow(b,2) + pow(c,2));

    float at = (c * b) / 2;
    float ac = 3.14 * (pow(radio,2));

    float Respuesta = at - ac;

    printf("%f",Respuesta);

    printf(" area circulo %f", ac);
    printf(" Area triangulo %f", at); 
}