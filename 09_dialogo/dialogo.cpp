#include <stdio.h>
#include <stdlib.h>

int suma(int op1, int op2){
    int resultado;
    resultado = op1 + op2;
    return resultado;

}


int main(int argc, const char *argv[]){

    int resultado;

    resultado = suma(2, 3);

    printf(" %i \n", resultado);

    return EXIT_SUCCESS;



}
