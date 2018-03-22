#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaro variables
    int numeroUno;
    int numeroDos;
    int resultado;
    char seguir;

    do
    {
        // Pido con printf, guardo con scanf
        printf("Ingrese el primer numero\n");
        scanf("%d",&numeroUno);
        printf("Ingrese el segundo numero\n");
        scanf("%d",&numeroDos);

        // chequeo que los dos numeros sean mayores a 0 para sumar
        if(numeroUno > 0 && numeroDos> 0)
        {
            // Realizo la suma
             resultado = numeroUno + numeroDos;
             printf("el resultado es: %d \n",resultado);
        }
        else if (numeroUno > 0 && numeroDos <= 0)
        {
            // Error
            printf("Te equivocaste en el segundo numero\n");
        }
        else if (numeroUno <= 0 && numeroDos > 0)
        {
            // Error
            printf("Te equivocaste en el primer numero\n");
        }
        else
        {
             // Error
            printf("Te equivocaste en ambos numeros\n");
        }

        printf("Desea continuar? s/n \n");
        fflush(stdin);
        scanf("%c", &seguir);

    }while(seguir == 's');

    return 0;
}
