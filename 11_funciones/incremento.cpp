#include <stdio.h>
#include <stdlib.h>

void incrementa(int *op1, int op2){

   *op1 += op2;

}

int main(int argc, const char *argv[]){

    int a = 2, b = 5;

    incrementa(&a, 5);
    incrementa(&b, 3);
    incrementa(&a, -2);

    printf(" %i\n", a);
    printf("%i\n", b);

    return EXIT_SUCCESS;
}
