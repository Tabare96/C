/*Realizar un programa que permita obtener la suma de dos
matrices X y J de dimensión axb (a=3 y b=4). Los elementos de la matriz son
reales. El resultado debe ser impreso. Realizar la suma componente a
componente.*/

#include <stdio.h>
#define a 3
#define b 4

int main()
{
    int vectorA[6], vectorB[6], vectorC[6];

    int matrizX[a][b];
    int matrizJ[a][b];

    printf("Llene la matriz X \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("FILA %i - COLUMNA %i: ", i+1, j+1);
            scanf("%i", &matrizX[i][j]);
        }     
        printf("\n");
    }

    printf("\nLlene la matriz J \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("FILA %i - COLUMNA %i: ", i+1, j+1);
            scanf("%i", &matrizJ[i][j]);
        }    
        printf("\n"); 
    }

    printf("\nLa suma de las matrices X y J componente a componente es: \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("FILA %i - COLUMNA %i: %i \n", i+1, j+1, matrizX[i][j]+matrizJ[i][j]);
        }     
    }

    return 0;
}