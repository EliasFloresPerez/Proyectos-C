#include <stdio.h>

void pasoPorReferencia(int **referencia)
{
    int *dir_cambio, m = 2;
    dir_cambio = &m;
    *referencia = dir_cambio;
}

int main(int argc, char const *argv[])
{
    int *dir_entero, n = 13;
    printf("Referencias: %i\n",dir_entero);

    dir_entero =&n;

    printf("Valor al que apunta dir_entero: %i\n", *dir_entero);
    pasoPorReferencia(&dir_entero);
    printf("Valor al que apunta dir_entero tras llamar a pasoPorreferencia: %i\n", *dir_entero);

    return 0;
}
