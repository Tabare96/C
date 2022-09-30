
#include <Stdio.h>
int main()
{
    int columnas, filas;

    printf("Ingrese la cantidad de filas\n");
    scanf("%i", &filas);

    printf("Ingrese la cantidad de columnas\n");
    scanf("%i", &columnas);

    int numeros[filas][columnas];
    float promedios[columnas];
    

    for (int i = 0; i < columnas; i++)
    {
        int suma = 0;
        printf("Ingrese el valor de la columna Numero %i\n", i + 1);

        for (int j = 0; j < filas; j++)
        {
            printf("en la fila numero %i\n", j + 1);
            scanf("%i", &numeros[j][i]);
            suma = suma + numeros[j][i];
            printf("suma: %i\n", suma);
        }
        promedios[i] = (float)suma / filas;
        // printf("el promerdio es: %d\n", promedios[i]);
    }

    for (int i = 0; i < columnas; i++)
    {
        printf("El valor de la columna numero %i\n", i + 1);

        for (int j = 0; j < filas; j++)
        {
            printf("En la fila numero %i es: %i\n", j + 1, numeros[j][i]);
        }
    }

    for (int i = 0; i < columnas; i++)
    {
        printf("El promedio de la columna numero %i es %.2f: \n", columnas, promedios[i]);
    }

    return 0;
}