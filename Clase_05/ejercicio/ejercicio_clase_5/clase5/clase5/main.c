#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define CANTIDAD_DATOS 5
int main()
{
    float myArray[CANTIDAD_DATOS];
    float resultado;
    float maximo;
    float minimo;

    ingresoDatos("Ingrese un numero\n",myArray,CANTIDAD_DATOS);
    calcularPromedio(myArray,CANTIDAD_DATOS,&resultado);
    printf("El promedio es %.2f\n", resultado);
    calcularMaximo(myArray, CANTIDAD_DATOS, &maximo);
    printf("El maximo es %.2f\n", maximo);
    calcularMinimo(myArray, CANTIDAD_DATOS, &minimo);
    printf("El minimo es %.2f\n", minimo);
    return 0;
}
