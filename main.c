#include <stdio.h>
#include <string.h>
#include "funciones.h"


int main (int argc, char *argv[]) {

    char nom[20]; 
    int op1=0, op2=0;

    //Obtecion de datos
    data(prod, price);

    //Calculos 
    float max = calcmax(price);
    float min = calcmin(price);
    float sum = calcsum(price);
    float prom = calcprom(sum, q);

    //Output
    print(max, min, prom);
    getchar();

    //Busqueda
    do{
        printf("\nDeseas buscar el precio de un producto?\n");
        printf("Si la respuesta es si, ingresa 1, si no, ingresa 2.\n");
        scanf("%d", &op1);
        while (getchar() != '\n');
        if (op1==1){
            search(); 
        } else if(op1==2){
            printf("Gracias por usar\n");
            break;
        } else {
            printf("Opcion no valida\n");
        }
    }while(op1!=1 || op1!=2);

    return 0;
}
