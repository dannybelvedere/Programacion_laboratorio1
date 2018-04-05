#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{
    float resultado;
   if (calcularPromedio ("\nIngrese un numero\n", 5, &resultado) == 0)
   {
       printf("El promedio es %.2f", resultado);
   }
    return 0;
}
