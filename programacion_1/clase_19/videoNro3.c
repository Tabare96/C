#include <stdio.h>

void main()
{

    void hola(int *cantidad_recibi)
    {
        *cantidad_recibi = 50;
        printf("El valor de dinero es: %d", *cantidad_recibi);
    }

    int dinero = 17;
    hola(&dinero);
    printf("\nEl valor de dinero en MAIN es: %d", dinero);
}