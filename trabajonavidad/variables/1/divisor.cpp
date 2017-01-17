#include <stdio.h>
#include <stdlib.h>

int main(){
   int numero;
   int i;

        printf("Dime un numero y te digo sus divisores: \n");
        scanf("%i", &numero);

   for (int i=1; i<numero; i++)
         {
        if (numero%i == 0){

            printf("%i Estos son sus divisores \n", i);
        }

  }

            return EXIT_SUCCESS;

}
