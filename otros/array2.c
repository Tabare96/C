#include <stdio.h>
int main()
{
int i, j, posicionMinima, indices;
double auxiliar;

printf("Indique la cantidad de numeros a ordenar\n");
scanf("%i", &indices);
int vector[indices];

for (int i = 0; i < indices; i++)
{
    printf("Ingrese el valor numero: %i\n", i+1);
    scanf("%i", &vector[i]);
}

for (int i=0; i<indices; i++)
{
    // Menor elemento del vector vector[i..N-1]
    posicionMinima = i;

    for (j=i+1; j<indices; j++)
    {
        if (vector[j]<vector[posicionMinima])
        {
            posicionMinima = j;
        }
    }
    // Coloca el mínimo en vector[i]
    auxiliar = vector[i];
    vector[i] = vector[posicionMinima];
    vector[posicionMinima] = auxiliar;
}
printf("\n\nDatos ordenados de manera ascendente:\n\n");
for (int i = 0; i < indices; i++)
{
    printf("%4d", vector[i]);
}
printf("\n\n\n");    
return 0;
}







// int arreglo[] = {13,23,57};
// int numeroMenor;
// int n = 3;

// for ( int i = 0; i < n-1 ; i++)
// {
//     numeroMenor = arreglo[i];

//     for ( int columna = i+1; columna <n; columna++)
//     {
//         if (arreglo[columna] < numeroMenor)
//         {
//             numeroMenor = arreglo[columna]; 
//         }
//     }
    
// }
// printf("%i\n", numeroMenor);
