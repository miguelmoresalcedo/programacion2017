#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX 29
#define CANTIDAD(x) (sizeof( (x) ) / sizeof(char *) - 1)

const char *palabra[]{
	"jose",
	"menta",
	"libro",
	"arbol",
	NULL
};

int main(int argc, char *argv){

    int aleatoria, fallos = 0;
    const char *elegida;
    char adivinado[MAX];
    char letra;
    int errores;

    printf("Tienes 5 intestos o adios \n");

         srand(time(NULL));
         aleatoria = rand() % CANTIDAD(palabra);
         elegida = palabra [aleatoria];

         strcpy(adivinado, elegida);
         bzero(adivinado, MAX);
         for(int i=0; i<(int) strlen(elegida); i++)
         	adivinado[i] = "-";
         for(int = 0; i<MAX; i++){


         }

     printf("Introduce una letra: ");
     scanf("%c", letra);

     if (strcmp (aleatoria, adivinado) != 0)
        printf("Has acertado 1");
    else
        printf("Has fallado, prueba otra vez");
    errores++;

         return EXIT_SUCCESS;



}
