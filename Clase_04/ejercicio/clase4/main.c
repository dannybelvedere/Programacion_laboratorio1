#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{
    int resultado;
    if(getInt("\nEdad \n","Entre 0-99\n",2,99,2,&resultado) == 0){
       printf("\nLa edad es %d \n", resultado);
    }else {
        printf("\n NO ES LA EDAD.\n");
    }
    return 0;
}
