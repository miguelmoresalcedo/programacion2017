#include <stdio.h>
#include <stdlib.h>

double x_cuad(double x){
    return x * x;
}

int main(int argc, const char *argv[]){

    double x, y;
    printf("En que punto quieres calcular la derivada: \n");
    scanf("%lf", &x);

    y = x + 0.001;

    x = x_cuad(y) - x_cuad(x);  //0.001;
    printf(" %.5lf", x);


    return EXIT_SUCCESS;
}
