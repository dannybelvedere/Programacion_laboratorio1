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

float ingresoDatos(char* mensaje,float v[],int cantidadIngresos)
{
    int i;
     for (i=0;i<cantidadIngresos;i++)
    {
        printf("%s",mensaje);
        scanf("%f",&v[i]);
    }
    return 0;
}

float calcularPromedio (float v[], int cantidadIngresos, float* resultado)
{
    int i;
    float suma;
    suma = 0;

    for (i=0;i<cantidadIngresos;i++)
    {
        suma += v[i];
    }

    *resultado = suma / cantidadIngresos;
    return 0;
}

float calcularMaximo(float v[], int cantidadIngresos, float* resultado)
{
     int i;
    float maximo;
    maximo = 0;

    for (i=0;i<cantidadIngresos;i++)
    {
        if(i == 0)
        {
          maximo = v[i];
        }
        if (maximo < v[i])
        {
            maximo = v[i];
        }
    }

    *resultado = maximo;
    return 0;

}

float calcularMinimo(float v[], int cantidadIngresos, float* resultado)
{
     int i;
    float minimo;
    minimo = 0;

    for (i=0;i<cantidadIngresos;i++)
    {
        if(i == 0)
        {
          minimo = v[i];
        }
        if (minimo > v[i])
        {
            minimo = v[i];
        }
    }

    *resultado =minimo;
    return 0;

}
