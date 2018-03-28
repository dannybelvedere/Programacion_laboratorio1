#include <stdio.h>
#include <stdlib.h>

int sumaEnteros(int numero1, int numero2) {
    int resultado;
    resultado = numero1 + numero2;
    return resultado;
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
float dividirEnteros(int numero1, int numero2) {
    float resultado;
    resultado = numero1 / (float)numero2;
    return resultado;
}


int main()
{
    int numero1;
    int numero2;
    int opcionUsuario;
    int suma;
    int resta;
    int producto;
    float division;

    printf("Ingrese el primer numero\n");
    scanf("%d",&numero1);
    printf("Ingrese el segundo numero\n");
    scanf("%d",&numero2);
    printf("Qué operacion queres hacer?\n 1. Sumar \n 2. Restar \n 3. Multiplicar \n 4. Dividir \n");
    scanf("%d",&opcionUsuario);

    switch (opcionUsuario){
        case 1:
            suma = sumaEnteros(numero1,numero2);
            printf("la suma es: %d",suma);
            break;
        case 2:
            resta = restarEnteros(numero1,numero2);
            printf("la resta es: %d",resta);
            break;
        case 3:
            producto = multiplicarEnteros(numero1,numero2);
            printf("El producto es: %d",producto);
            break;
        case 4:
            division = dividirEnteros(numero1,numero2);
            printf("El producto es: %.2f",division);
            break;
        default:
             printf("No es una opcion valida");
    }

    return 0;
}

