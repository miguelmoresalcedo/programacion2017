#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int operador1, o1,
        operador2, o2,
        resultado = 0;

    printf("Operando 1: ");
        scanf(" %i", &operador1);
         o1 = operador1;

    printf("Operando 2: ");
        scanf(" %i", &operador2);
         o2 = operador2;

         do {
              if (operador2 % 2 == 1)
              resultado += operador1;
                operador2 >>= 1;
                operador1 <<= 1;
                     } while (operador2 > 0);

         printf(" %i x %i = %i\n", o1, o2, resultado);
erador
             return EXIT_SUCCESS;
}
