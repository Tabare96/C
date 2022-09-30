#include <stdio.h>

// int miVector[5];

// int main()
// {
//     int i;
//     int sumatoria = 0;
//     for (i = 0; i < 5; i++)
//     {
//         printf("Ingrese valor de posicion %d: ", i + 1);
//         scanf("%d", &miVector[i]);

//         if (miVector[i] % 2 == 0)
//         {
//             sumatoria += miVector[i];
//         }
//     }
//     printf("La sumatoria de los numeros pares es: %d", sumatoria);
//     return 0;
// }


// int factorial (int x)
// {
//     int rta;
//     if (x == 0)
//     {
//         rta = 1;
//     }
//     else
//     {
//         rta = x * factorial(x - 1);
//     }
//     return rta;
// }

// int main()
// {
//     int numero;
//     printf("Ingrese un numero: ");
//     scanf("%d", &numero);
//     printf("El factorial de %d es: %d", numero, factorial(numero));
//     return 0;
// }

int sumaRecursiva (int arreglo[], int validos, int i)
{
    int rta;
    if (i == validos)
    {
        rta = 0;
    }
    else
    {
        rta = arreglo[i] + sumaRecursiva(arreglo, validos, i + 1);
    }
    return rta;
}

int main()
{
    int miVector[5] = {1, 2, 3, 4, 5};
    printf("La sumatoria de los elementos del vector es: %d", sumaRecursiva(miVector, 5, 0));
    return 0;
}