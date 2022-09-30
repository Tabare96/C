/*Realizar un programa que permita imprimir las componentes de un
vector A de longitud g, cuyos elementos son caracteres. La impresión deberá
indicar el índice del vector y el valor de la componente. Los índices son enteros
y g=8.*/

#include <stdio.h>
#define g 8

int main()
{
    char A[g];
    for(int i = 0; i<g; i++)
    {
        printf("\nIngrese un caracter: ");
        scanf("%s", &A[i]);
    }
    for(int i = 0; i<g; i++)
    {
        printf("\nINDICE %i - CARACTER %c", i, A[i]);
    }

    return 0;
}
