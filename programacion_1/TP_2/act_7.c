/*Realizar la carga de una matriz de 7x2 posiciones donde cada elemento es un real (float)
Finalizada la carga de la matriz, realizar la impresión de la misma*/
#include <stdio.h>

int main()
{
    float matriz[7][2];
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Ingrese un numero en la fila %d y la columna %d: ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%.2f \n", matriz[i][j]);
        }
    }
    return 0;
}
//TOC TOC