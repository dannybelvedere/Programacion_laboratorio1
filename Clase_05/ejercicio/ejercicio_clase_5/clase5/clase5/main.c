#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{
    float myArray[5];
    float resultado;
    float maximo;
    float minimo;

    ingresoDatos("Ingrese un numero\n",myArray,5);
    calcularPromedio(myArray,5,&resultado);
    printf("El promedio es %.2f\n", resultado);
    calcularMaximo(myArray, 5, &maximo);
    printf("El maximo es %.2f\n", maximo);
    calcularMinimo(myArray, 5, &minimo);
    printf("El minimo es %.2f\n", minimo);
    return 0;
}
