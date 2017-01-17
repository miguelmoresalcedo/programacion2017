#include <stdio.h>
#include <stdlib.h>
#define BASE 10

int main(int argc, const char **argv){
    int introducido;
    int acumulado;
    int contador=0;


    printf("Por favor, introduce un numero entre 0 y 999: ");
    scanf(" %i", &introducido);

    acumulado = introducido % BASE;

    introducido /= BASE;

    acumulado = acumulado * BASE + introducido % BASE;

    introducido /= BASE;

    acumulado = acumulado * BASE + introducido % BASE;

    printf("Tu numero al reves es: %i\n", acumulado);

    return EXIT_SUCCESS;
}


