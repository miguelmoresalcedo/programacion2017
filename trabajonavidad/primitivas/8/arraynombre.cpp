#include <stdio.h>
#include <stdlib.h>

int main(){

      char apellidos[30];

      printf("Dime tu nombre y apellidos: \n");
      fgets(apellidos, 29, stdin);

      printf("Tu nombre es: %s \n", apellidos);


        return EXIT_SUCCESS;
}

