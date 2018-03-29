int sumaEnteros(int numero1, int numero2, float* resultado)
{
    long resultadoCalculo;
    int retorno = -1;

    resultadoCalculo = numero1 + numero2;

    if(resultadoCalculo < 32767)
    {
        *resultado = resultadoCalculo;
        return 0;
    }
    return retorno;
}

int restarEnteros(int numero1, int numero2, float* resultado)
{
    long resultadoCalculo;
    resultadoCalculo = numero1 - numero2;
    int retorno = -1;
    if(resultadoCalculo < 32767)
    {
        *resultado = resultadoCalculo;
        return 0;
    }
    return retorno;
}

int multiplicarEnteros(int numero1, int numero2, float* resultado)
{
    long resultadoCalculo;
    resultadoCalculo = numero1 * numero2;
    int retorno = -1;
    if(resultadoCalculo < 32767)
    {
        *resultado = resultadoCalculo;
        return 0;
    }
    return retorno;
}
float dividirEnteros(int numero1, int numero2, float* resultado)
{
    float resultadoCalculo;
    int retorno = -1;
    resultadoCalculo = numero1 / (float)numero2;

    if (numero2 != 0)
    {
        *resultado = resultadoCalculo;
        return 0;
    }
    return retorno;
}
