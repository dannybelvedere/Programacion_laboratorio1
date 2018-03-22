#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD_NUMEROS 3
int main()
{

    int i;
    int numero;
    float maximo;
    float minimo;
    int acumulador;
    float promedio;

    acumulador = 0;

    for (i = 0; i < CANTIDAD_NUMEROS; i++)
    {
        printf("Ingrese el numero %d\n",i+1);
        scanf("%d",&numero);

        acumulador += numero;

        if( i == 0)
        {
            minimo = numero;
            maximo = maximo;

        } else if ( numero < minimo)
        {
            minimo = numero;
        }
        else if( numero > maximo) {
           maximo = numero;
        }
    }

    promedio = (float) acumulador / CANTIDAD_NUMEROS;

    printf("El promedio es: %.2f", promedio);
    printf("El minimo es: %f", minimo);
    printf("El maximo es: %f", maximo);

    return 0;

}
