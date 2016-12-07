#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

        char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";
        int dni, pos;

        printf("DNI: ");
        scanf(" %i", &dni);

        printf("%c\n", letras[dni % 23]);



    return  EXIT_SUCCESS;
}
