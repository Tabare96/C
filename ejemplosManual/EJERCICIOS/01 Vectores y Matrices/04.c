/*Realizar un programa que permita obtener el producto de dos
vectores A y B componente a componente, guardando el resultado en un nuevo
vector C. Los vectores tienen longitud 6, y los índices son enteros. Los
elementos del vector también son enteros. Imprimir el resultado.*/

#include <stdio.h>

int main()
{
    int vectorA[6], vectorB[6], vectorC[6];

    printf("Ingrese los valores del vector A \n");
    for(int i = 0; i < 6; i++)
    {
        printf("%i: ", i+1);
        scanf("%i", &vectorA[i]);
        vectorC[i] = vectorA[i]; 
    }

    printf("\nIngrese los valores del vector B \n");
    for(int i = 0; i < 6; i++)
    {
        printf("%i: ", i+1);
        scanf("%i", &vectorB[i]);
        vectorC[i] += vectorB[i];
    }

    printf("\nLa suma de los vectores A y B componente a componente es: \n");
    for(int i = 0; i < 6; i++)
    {
        printf("%i: %i", i+1, vectorC[i]);
        printf("\n");
    }


    return 0;
}