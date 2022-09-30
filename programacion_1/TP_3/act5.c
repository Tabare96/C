/*Realizar una función recursiva que permita
 calcular la suma de los valores mayores a 10
 de un vector de enteros de 40 posiciones. */

#include <stdio.h>

int suma(int vector[], int i)
{
    if (i == 40)
        return 0;
    if (vector[i] > 10)
        return vector[i] + suma(vector, i+1);
    else
        return suma(vector, i+1);
}

int main()
{
    int vector[40];
    for (int i = 0; i < 40; i++)
    {
        vector[i] = i+1;
    }
    printf("La suma de los valores mayores a 10 del vector es: %d", suma(vector, 0));
    return 0;
}