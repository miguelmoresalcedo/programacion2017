#include <stdio.h>
#include <stdlib.h>

int main(){
        int decimal;

        printf("Decimal: "); /* Pide al usuario que introduzca los datos */

        scanf(" %i", &decimal); /* Lee lo que ha introducido el usuario y
                                   guardalo en la variable decimal (& es direccion de) */

        // Hacer
        //      Imprimir decimal % 2
        //      decimal = decimal / 2
        // Mientras decimal > 0

        do {

                printf("%i", decimal % 2);
                decimal /= 2;
        } while (decimal>0);

        printf("\n");


    return EXIT_SUCCESS;
}
