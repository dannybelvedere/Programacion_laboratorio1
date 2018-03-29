#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main()
{
    int numero1;
    int numero2;
    int opcionUsuario;
    float resultado;

    printf("Ingrese el primer numero\n");
    scanf("%d",&numero1);
    printf("Ingrese el segundo numero\n");
    scanf("%d",&numero2);
    printf("Qué operacion queres hacer?\n 1. Sumar \n 2. Restar \n 3. Multiplicar \n 4. Dividir \n");
    scanf("%d",&opcionUsuario);

    switch (opcionUsuario)
    {
        case 1:
            if(sumaEnteros(numero1,numero2,&resultado)== 0)
            {
              printf("la suma es: %.0f",resultado);
            } else
            {
                printf("La suma supera el valor máximo de un entero");
            }

            break;
        case 2:
            if(restarEnteros(numero1,numero2,&resultado)== 0)
            {
              printf("la suma es: %.0f",resultado);
            } else
            {
                printf("La resta supera el valor maximo/minimo de un entero");
            }

            break;
        case 3:
            if(multiplicarEnteros(numero1,numero2,&resultado)== 0)
            {
              printf("la suma es: %.0f",resultado);
            } else
            {
                printf("La resta supera el valor maximo/minimo de un entero");
            }

            break;
        case 4:
            if(dividirEnteros(numero1,numero2,&resultado) == 0)
            {
                printf("La division es: %.2f",resultado);
            }
            else
            {
                printf("No dividas por cero");
            }

            break;
        default:
             printf("No es una opcion valida");
    }

    return 0;
}

