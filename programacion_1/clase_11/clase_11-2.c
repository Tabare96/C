
// CONSIGNA 2
#include <stdio.h>
int main()
{
    int vector[9];
    int positivos = 0;
    int negativos = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("ingresa el valor de la celda numero %i\n", i + 1);
        scanf("%i", &vector[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (vector[i] > 0)
        {
            positivos++;
        }
        if (vector[i] < 0)
        {
            negativos++;
        }
    }
    printf("el numero de celdas positivas es %i\n", positivos);
    printf("el numero de celdas negativas es %i\n", negativos);

    return 0;
}