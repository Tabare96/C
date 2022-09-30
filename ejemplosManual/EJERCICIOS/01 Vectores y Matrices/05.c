/*Realizar un programa que permita asignar la identidad a una
matriz R de dimensión mxm (considerar m=4). Los índices y las componentes
son enteros. La matriz identidad es la que tiene valor 1 en la diagonal principal
y 0 en el resto.
1 0 0 0
0 1 0 0
0 0 1 0
0 0 0 1*/

#include <stdio.h>
#define m 4
int main()
{
    int matrizR[m][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                matrizR[i][j] = 1;
            }
            else
            {
                matrizR[i][j] = 0;
            }
        }     
    }
    
    printf("El patron de la matriz es: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%i ", matrizR[i][j]);
        } 
        printf("\n");    
    }
    
    return 0;
}

