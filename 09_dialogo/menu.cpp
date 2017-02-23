#include <stdio.h>
#include <stdlib.h>

int menu(int opcion){

    switch(opcion){
        case 1: printf("suma \n"); break;
        case 2: printf("resta \n"); break;
        case 3: printf("division \n"); break;
        case 4: printf("multiplicacion \n"); break;
    }

}

int main(int argc, const char *argv[]){

    char opcion = menu(4);
    printf(" %c", opcion);

    return EXIT_SUCCESS;
}
