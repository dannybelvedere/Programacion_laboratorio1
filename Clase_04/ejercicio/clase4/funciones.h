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
#endif // FUNCIONES_H_INCLUDED
