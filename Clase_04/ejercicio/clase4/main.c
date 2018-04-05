#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{
    /*int resultado;
    if(getInt("\nEdad \n","Entre 0-99\n",2,99,2,&resultado) == 0){
       printf("\nLa edad es %d \n", resultado);
    }else {
        printf("\n NO ES LA EDAD.\n");
    }*/
    /*float precio;
    if(getFloat("\n Cual es el precio? \n","\n Rango valido [0 - 10000] \n",2,10000,1, &precio) == 0){
       printf("\n El precio es  %.2f \n", precio);
    }else {
        printf("\n No es un precio valido.\n");
    }*/

    char ingreso;
    if(getChar("\nIngrese Opcion [A][B][C]\n","\nSolo [A][B][C]\n",2,'C','A', &ingreso) == 0){
       printf("\nContinuar: %c \n", ingreso);
    }else {
        printf("\n Error.\n");
    }


    return 0;
}
