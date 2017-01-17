#include <stdio.h>
#include <stdlib.h>

#define CUADRADO 1
#define TRIANGULO 2
#define RECTANGULO 3
#define CIRCUNFERENCIA 4


int main() {

        double lado;
        double ladomayor;
        double ladomenor;
        double altura;
        double base;
        double radio;
        int opciones;
        int doble= 2;

        printf("\nOpciones:\n\n"
                "\t1.- CUADRADO\n"
                "\t2.- TRIANGULO\n"
                "\t3.- RECTANGULO\n"
                "\t4.- CIRCUNFERENCIA\n"
                "\n\tOpción: "                                                                                        );
        scanf(" %i", &opciones);

  switch(opciones){
         case CUADRADO:
             printf("Cuanto mide el lado: \n");
             scanf("%lf", &lado);
             printf("Area: %lf \n", lado * lado);
           break;

         case TRIANGULO:
             printf("Cuanto mide la base: \n");
             scanf("%lf", &base);
             printf("Cuanto mide la altura: \n");
             scanf("%lf", &altura);
             printf("Area: %lf \n", (base * altura)/2);
           break;

         case RECTANGULO:
             printf("Cuanto mide el lado mayor: \n");
             scanf("%lf", &ladomayor);
             printf("Cuanto mide el lado menor: \n");
             scanf("%lf", &ladomenor);
             printf("Area: %lf \n", (ladomayor * ladomenor));
           break;

         case CIRCUNFERENCIA:
             printf("Cuanto mide el radio: \n");
             scanf("%lf", &radio);
             printf("Area: %lf \n", (radio * radio)* 3.1416);


  }

        return EXIT_SUCCESS;



}
