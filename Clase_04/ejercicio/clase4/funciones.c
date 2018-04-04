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
