#include <stdio.h>
#include <stdlib.h>

int sumaEnteros(int numero1, int numero2, float* resultado) {
    long resultadoCalculo;
    int retorno = -1;

    resultadoCalculo = numero1 + numero2;

    if(resultadoCalculo < 32767)
    {
        *resultado = resultadoCalculo;
        return 0;
    }
    return retorno;
}

int restarEnteros(int numero1, int numero2) {
    int resultado;
    resultado = numero1 - numero2;
    return resultado;
}

int multiplicarEnteros(int numero1, int numero2) {
    int resultado;
    resultado = numero1 * numero2;
    return resultado;
}
float dividirEnteros(int numero1, int numero2, float* resultado) {
    float resultadoCalculo;
    int retorno = -1;
    resultadoCalculo = numero1 / (float)numero2;

    if (numero2 != 0)
    {
        *resultado = resultadoCalculo;
        return 0;
    }
    return retorno;
}


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
            resultado = restarEnteros(numero1,numero2);
            printf("la resta es: %.0f",resultado);
            break;
        case 3:
            resultado = multiplicarEnteros(numero1,numero2);
            printf("El producto es: %.0f",resultado);
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

