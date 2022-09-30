/* Realizar un programa que permita obtener e imprimir el resultado
de la suma de los elementos de un vector Z de longitud k, donde los elementos
del vector son reales (considerar k=5). */

#include <stdio.h>
#define k 5

int main()
{
    int z[k];
    int suma = 0;

    for(int i = 0; i<=4; i++)
    {
        printf("\nIngrese un numero: ");
        scanf("%i", &z[i]);
        suma += z[i];
    }
    printf("La suma de los numeros ingresados es: %d", suma);

    return 0;
}