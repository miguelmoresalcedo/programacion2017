#include <stdio.h>
#include <stdlib.h>

void imprime(const char *palabra){

        if (*palabra == '\0'){

            printf("\n");
            return ;

            printf("%c", *p);
            imprime(p + 1);
        }

}

int main(int argc, const char **argv){

    imprime("Dabale arroz a la zorra el abad");


  return EXIT_SUCCESS;
}
