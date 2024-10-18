#include <stdio.h>
#include <math.h>
#include <string.h>
#include "funciones.h"

char prod[10][20];
float price[10];
int q=0;

//Obtencion de datos
void data(char prod[10][20], float price[10]){
    printf("¿Cuantos productos desea agregar?\n");
    scanf("%d", &q);
    while (getchar() != '\n');
    for (int i=0; i<q; i++){
        printf("\nIngrese el nombre del producto %d: ", i+1);
        fgets(prod[i], 20, stdin);
        prod[i][strcspn(prod[i], "\n")] = '\0';

        printf("Ingrese el precio del producto %s: ", prod[i]);
        scanf("%f", &price[i]);
        getchar();  //Limpiar el buffer de entrada
    }
}

//Productos maximos
float calcmax(float price[10]){
    float max=price[0];
    for (int i=1; i<q; i++){
        if (price[i]>max){
            max=price[i];
        }
    }
    return max;
}

//Productos minimos
float calcmin(float price[10]){
    float min=price[0];
    for (int i=1; i<q; i++) {
        if (price[i]<min) {
            min=price[i];
        }
    }
    return min;
}

//Suma
float calcsum(float price[10]){
    float sum=0;
    for (int i=0; i<q; i++){
        sum+=price[i];
    }
    return sum;
}

//Promedio
float calcprom(float sum, int q){
    float prom=sum/q;
    return prom;
}

//Busqueda
void search(){
    int found=0;
    char nom[20];
    printf("\nIngrese el nombre del articulo que desea buscar: ");
    fgets(nom, sizeof(nom), stdin);
    nom[strcspn(nom, "\n")] = '\0';
    for (int i=0; i<q; i++) {
        if (strcmp(nom, prod[i])==0){
            printf("El precio del articulo es: %.2f\n", price[i]);
            found=1;
            break;
        }
    }
    if (!found){
        printf("Articulo no encontrado.\n");
    }
}

//Output
void print(float max, float min, float prom){
    printf("\nPrecio maximo: %.2f\n", max);
    printf("Precio minimo: %.2f\n", min);
    printf("Promedio de precios: %.2f\n", prom);
}