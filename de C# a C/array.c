#include<stdio.h>
int main()
{
    int suma;
    int datos[10];
    int menor= 0;
    int mayor= 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese el numero %i\n", i+1);
        scanf("%i", &datos[i]);
        suma = suma + datos[i];
    }
     printf("Los numeros son: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%i-", datos[i]);
        if(datos[i] < menor)
        {
            menor = datos[i];
        }
        else if(datos[i] > mayor)
        {
            mayor = datos[i];
        }
    }
    printf("\n");
    printf("El numero mas grande es: %i\n", mayor);
    printf("El numero mas chico es: %i\n", menor);
    printf("La suma de los numeros da %i\n", suma);
    printf("El promedio de los numeros es: %i\n", suma/10);
    return 0;
}