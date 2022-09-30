// CONSIGNA 1
#include <stdio.h>
int main()
{
    int vector[9];
    for (int i = 0; i < 10; i++)
    {
        printf("ingresa el valor de la celda numero %i\n", i + 1);
        scanf("%i", &vector[i]);
    }
    if (vector[0] - 0)
    {
        printf("el valor de la celda numero 1 es negativo\n");
    }
    if (vector[4] > 0)
    {
        printf("el valor de la celda numero 5 es positivo\n");
    }
    if (vector[9] != 0)
    {
        printf("el valor de la ultima celda es distinto a cero\n");
    }

    return 0;
}