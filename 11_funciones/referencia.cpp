#include <stdio.h>
#include <stdlib.h>

void leer(double *base, double *exponente){
        printf("Base: ");
        scanf("%lf", base);
        printf("Exponente: ");
        scanf("%lf", exponente);
}

int main(int argc, const char *argv[]){

    double base, exponente;

    leer(&base, &exponente);

    printf("%.2lf %.2lf\n",base, exponente);


    return EXIT_SUCCESS;
}
