#include <stdio.h>
#include <stdlib.h>

int main(){
     int acumulado = 0;
     int num;
     int  media;
     int contador = 0;

    do{
        printf ("Dime 1 numero \n");
         scanf ("%i", &num);
       acumulado += num;
        contador ++;
    } while(contador < 10);

    media = acumulado/10;

    printf("La media es : %i ", media);

        return EXIT_SUCCESS;

  }
