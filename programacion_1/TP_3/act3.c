/*Dado un archivo de enteros que ya tiene cargado valores,
 se desea leer el archivo hasta el final e indicar la cantidad de valores
 iguales a 12 o 15 que tiene el mismo.
 Luego imprimir esas cantidades en la pantalla.*/

#include <stdio.h>

int main()
{
    FILE *archivo;
    int cant = 0;
    int num;
    archivo = fopen("archivoDeEnteros.txt", "r");
    while (!feof(archivo))
    {
        fscanf(archivo, "%d", &num);
        if (num == 12 || num == 15)
            cant++;
    }
    fclose(archivo);
    printf("La cantidad de valores iguales a 12 o 15 es: %d", cant);
    return 0;
}