/*Generar un subprograma que permita, dado un vector de 100 posiciones,
 obtener el promedio de los elementos pares del mismo
 (no de las posiciones pares, sino de los valores pares que tiene cargado en cada posición).
 Los valores del vector son float. Guardar el resultado del promedio en un archivo.*/

#include <stdio.h>

float promedios(int vector[])
{
    int cant = 0;
    int suma = 0;
    float promedio;
    
    for (int i = 0; i < 100; i++)
    {
        if (vector[i] % 2 == 0)
        {
            suma += vector[i];
            cant++;
        }
    }
    if (cant == 0)
        return 0;
    promedio = (float)suma / cant;
    return promedio;
}

int main()
{
    int vector[100];
    for (int i = 0; i < 100; i++)
    {
        vector[i] = i+1;
    }
    printf("El promedio de los elementos pares del vector es: %.2f", promedios(vector));
    
    FILE *archivo;
    archivo = fopen("promedio.txt", "w");
    fprintf(archivo, "El promedio de los elementos pares del vector es: %.2f", promedios(vector));
    fclose(archivo);

    return 0;
}
