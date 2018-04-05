#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
int getInt(char* mensaje,
           char* mensajeError,
           int reintentos,
           int maximo,
           int minimo,
           int* resultado);

float getFloat(char* mensaje,
               char* mensajeError,
               int reintentos,
               float maximo,
               float minimo,
               float* precio);
int getChar(char* mensaje,
            char* mensajeError,
            int reintentos,
            char maximo,
            char minimo,
            char* ingreso);

float calcularPromedio (char* mensaje, int cantidadIngresos, float* resultado);
#endif // FUNCIONES_H_INCLUDED
