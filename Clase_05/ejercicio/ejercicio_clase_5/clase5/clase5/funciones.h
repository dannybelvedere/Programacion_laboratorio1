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
float ingresoDatos(char* mensaje,
                   float v[],
                   int cantidadIngresos);
int calcularPromedio (float v[],
                        int cantidadIngresos,
                        float* resultado);
float calcularMaximo(float v[],
                     int cantidadIngresos,
                     float* resultado);
float calcularMinimo(float v[],
                     int cantidadIngresos,
                     float* resultado);
#endif // FUNCIONES_H_INCLUDED
