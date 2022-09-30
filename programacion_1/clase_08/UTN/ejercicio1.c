#include<stdio.h>
int main()
{
    int dia, mes, anio;
    printf("Ingrese el dia, mes y anio\n");
    scanf("%i %i %i", &dia, &mes, &anio);
    printf("la fecha es: %i%i%i\n", anio, mes, dia);
    return 0;
}