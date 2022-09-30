#include <stdio.h>
struct perro
{
    char nombre[20];
    int edadMeses;
    float peso;
} perros[2];

int main()
{
    for (int i = 0; i < 2; i++)
    {
        printf("Ingrese el nombre del perro %i:\n", i + 1);
        scanf("%s", perros[i].nombre);
        printf("Ingrese la edad en meses de %s:\n", perros[i].nombre);
        scanf("%d", &perros[i].edadMeses);
        printf("Ingrese el peso de %s:\n", perros[i].nombre);
        scanf("%f", &perros[i].peso);
        printf("\n");
    }
    for (int i = 0; i < 2; i++)
    {
        printf("\nEl nombre del perro %i es: %s", i + 1, perros[i].nombre);
        printf("\nLa edad en meses de %s es: %d", perros[i].nombre, perros[i].edadMeses);
        printf("\nEl peso del perro %s es: %.2f", perros[i].nombre, perros[i].peso);
        printf("\n");
    }
    return 0;
}