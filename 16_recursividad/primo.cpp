#include <stdio.h>
#include <stdlib.h>

bool es_primo(int p, int d){

    if (d == 1)
        return true;
    return p%d != 0 && es_primo(p, d-1);
}

int main(int argc, const char *argv[]){

        int p = 7;
        int d = 5;


    printf("¿Es primo %i? \n", p);

    if(es_primo(p,d)){
        printf("Es primo \n");
    }

   return EXIT_SUCCESS;
}
