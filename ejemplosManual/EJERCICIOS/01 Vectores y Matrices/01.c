/*Realizar un programa que permita hacer nulos (cargarles valor 0)
los elementos de un vector Q de enteros, con n componentes (donde n es una
constante que vale 10).*/

#include <stdio.h>
#define n 10

int main()
{
    int i, q[n];

    for (i = 0; i < n; ++i)
    {
        q[i] = 0;
    }

    for (i = 0; i < n; ++i)
    {
        printf("q[%d]=%d ", i, q[i]);
        printf("\n");
    }

    return 0;
}