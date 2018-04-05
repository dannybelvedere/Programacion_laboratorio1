#include <stdio.h>
#include <stdlib.h>
int getInt(char* mensaje,
           char* mensajeError,
           int reintentos,
           int maximo,
           int minimo,
           int* resultado)
{
        int retorno = -1;
        long auxiliarLong;
        do
        {
            reintentos--;
            printf("%s", mensaje);
            scanf("%ld", &auxiliarLong);
            if (auxiliarLong >= minimo && auxiliarLong <= maximo)
            {
                *resultado = (int)auxiliarLong;
                retorno = 0;
                break;
            }

            printf("%s",mensajeError);
        } while (reintentos >= 0);
        return retorno;
}

float getFloat(char* mensaje,
               char* mensajeError,
               int reintentos,
               float maximo,
               float minimo,
               float* precio)
{
        int retorno = -1;
        float valor;
        do
        {
            reintentos--;
            printf("%s", mensaje);
            scanf("%f", &valor);
            if (valor >= minimo && valor <= maximo)
            {
                *precio = valor;
                retorno = 0;
                break;
            }

            printf("%s",mensajeError);
        } while (reintentos >= 0);
        return retorno;
}

int getChar(char* mensaje,
            char* mensajeError,
            int reintentos,
            char maximo,
            char minimo,
            char* ingreso
            )
{
        int retorno = -1;
        char caracter;
        do
        {
            reintentos--;
            fflush(stdin);
            printf("%s", mensaje);
            scanf("%c", &caracter);
            if (caracter >= minimo && caracter <= maximo)
            {
                *ingreso = caracter;
                retorno = 0;
                break;
            }
            printf("%s",mensajeError);
        } while (reintentos >= 0);
        return retorno;

}

float calcularPromedio (char* mensaje, int cantidadIngresos, float* resultado)
{
    float v[cantidadIngresos];
    int i;
    float suma;
    suma = 0;

    for (i=0;i<cantidadIngresos;i++)
    {
        printf("%s",mensaje);
        scanf("%f",&v[i]);
        //suma += v[i];
    }
    //Como lo pedia el ejercicio:
    for (i=0;i<cantidadIngresos;i++)
    {
        suma += v[i];
    }


    *resultado = suma / cantidadIngresos;
    return 0;
}
