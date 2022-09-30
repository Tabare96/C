#include<stdio.h>
int main()
{
    //ARREGLO UNIDIRECCIONAL
    // int arreglo[4] = {3,4,1,5};
    // printf("%i\n", arreglo[2]);

    // int sizeA;
    // printf("tamanio del arreglo\n");
    // scanf("%i", &sizeA);
    // int age[sizeA];
    // for (int i = 0; i < sizeA; i++)
    // {
    //     printf("ingresa el valor%i\n", i+1);
    //     scanf("%i", &age[i]);
    // } 
    // printf("Los valores del arreglo son: \n");
    // for (int i = 0; i < sizeA; i++)
    // {
    //     printf("%i-", age[i]);
    // }
    // printf("\n");

    // ARREGLO BIDIMENSIONAL
    //Col ..0 1 2
    //fila0|5 3 1
    //fila1|6 4 2
    // int multi[2][3] = {{5,3,1.}, {6,4,2}};
    // printf("%i\n", multi[0][2]);

 
int celdas;
printf("ingrese la cantidad de celdas que tiene su vector\n");
scanf("%i",&celdas);
int arreglo[celdas];
for (int i = 0; i < celdas; i++)
{
    printf("ingrese el valor de la celda numero %i\n", i+1);
    scanf("%i",&arreglo[i]);   
}

printf("el valor de las celdas es: ");
for (int i = 0; i < celdas; i++)
{
    printf("%i-", arreglo[i]);
}
return 0;
}