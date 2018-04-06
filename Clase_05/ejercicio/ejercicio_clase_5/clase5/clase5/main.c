#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define CANTIDAD_DATOS 0
int main()
{
    float myArray[CANTIDAD_DATOS];
    float resultado;
    float maximo;
    float minimo;

    ingresoDatos("Ingrese el numero",myArray,CANTIDAD_DATOS);
    if(calcularPromedio(myArray,CANTIDAD_DATOS,&resultado) == 0)
    {
        printf("El promedio es %.2f\n", resultado);
        /* Por ahora lo pongo acá, para que en caso que CANTIDAD_DATOS == 0 => no imprima max y min es 0
        pero lo correcto seria que si No ingreso cero datos no calcule max, min ni nada */
        calcularMaximo(myArray, CANTIDAD_DATOS, &maximo);
        printf("El maximo es %.2f\n", maximo);
        calcularMinimo(myArray, CANTIDAD_DATOS, &minimo);
        printf("El minimo es %.2f\n", minimo);
    }
    else
    {
      printf("Debe ingresar al menos un dato.\n");
    }


    return 0;
}
