#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define n 0x100

int main() {
    char frase[60],rep[100],temporal[100];
    char palabra;
    int longitud,i,a,inicial,acertado=0,contador=0,oportunidades=5;
    int repetido=0,gano=0;

   
    printf("\tJuego del Ahorcado\n");
    printf("Introduzca la palabra a adivinar: ");
    bzero(frase, 100);
    fgets(frase, n, stdin);
  
   
    longitud = 0;
    inicial = 0;
    a = 0;
   
    rep[0] = ' ';
    rep[1] = '\0';
   
   
    do {
                
        contador=0;
   
        if(inicial == 0) {
         for(i=0;i<strlen(frase);i++) {
          if(frase[i] == ' ') {
            temporal[i] = ' ';
             longitud++;
          }
          else {
             temporal[i] = '_';       
             longitud++;
          }
         }
        }
   
        inicial = 1;
       
        temporal[longitud] = '\0';
       
        for(i=0;i<strlen(rep);i++) {
           if(rep[i] == palabra) {
            repetido = 1;
            break;
          }
          else {
           repetido = 0;
         }
        }
       
        if(repetido == 0) {
         for(i=0;i<strlen(frase);i++) {
                    if(frase[i] == palabra) {
             temporal[i] = palabra;
              acertado++;
              contador=1;
            }
          }
        }
       
        if(repetido == 0) {
         if(contador == 0) {
           oportunidades = oportunidades - 1;
         }
        }
        else {
         printf("Ya se ha introducido este caracter");
         printf("\n\n");
        }
       
        printf("\n");
       
        for(i=0;i<strlen(temporal);i++) {
         printf(" %c ",temporal[i]);
        }
       
        printf("\n");
       
        if(strcmp(frase,temporal) == 0) {
            gano = 1;
            break;
        }
       
        printf("\n");
        printf("Letras Acertadas: %d",acertado);
        printf("\n");
        printf("Oportunidades Restantes: %d",oportunidades);
        printf("\n");
   
        rep[a] = palabra;
        a++;
       
        if (oportunidades==0)
        {
           break;
        }
     
        printf("Introduzca una letra:");
        scanf("\n%c",&palabra);
      
    }while(oportunidades != 0);
   
   
    if(gano) {
                printf("\n\n");
        printf("Enhorabuena, has ganado.");
    }
    else {
                printf("\n\n");
        printf("Has perdido.");
    }
   
    printf("\n\n");
  
    return EXIT_SUCCESS;

} 
