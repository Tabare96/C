/*Generar un programa que permita realizar la suma
de los contenidos de las posiciones de un vector de enteros de 22 elementos,
solamente si el valor de ese componente es menor a 10*/

#include <stdio.h>

int main()
{
    /*int vector[22];
    int suma = 0;
    for (int i = 0; i < 22; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
    }
    for (int i = 0; i < 22; i++)
    {
        if (vector[i] < 10)
        {
            suma += vector[i];
        }
    }
    printf("La suma de los numeros menores a 10 es: %d", suma);
    return 0;*/
    for (int i = 0; i < 22; i++)
    {
        int vector[22] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22};
        printf("elementos[%d] = %d\n", i, vector[i]);
    }
}