#include <stdio.h>
#include <stdlib.h>

int menu(int opcion){

    printf(" 1- SUMA
             2- RESTA
             3- DIVISION
             4- MULTIPLICACION ");

}

int main(int argc, const char *argv[]){

    char opcion = menu(4);
    printf(" %c", opcion);

    return EXIT_SUCCESS;
}
