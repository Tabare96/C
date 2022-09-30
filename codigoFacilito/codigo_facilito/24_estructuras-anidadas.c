#include <stdio.h>
#define length 2

struct owner 
{
    char nombre[20];
    char direccion[30];
};

struct dog
{
    char nombre[20];
    int edadMeses;
    struct owner ownerDog;
}dog[length];

int main ()
{
    for (int i = 0; i < length; i++)
    {
        printf("Ingrese el nombre del perro %i:\n", i + 1);
        scanf("%s", dog[i].nombre);
        printf("Ingrese la edad en meses del perro %i en meses:\n", i + 1);
        scanf("%d", &dog[i].edadMeses);
        printf("Ingrese el nombre del duenio del perro %i:\n", i + 1);
        scanf("%s", dog[i].ownerDog.nombre);
        printf("Ingrese la dirección del duenio del perro %i:\n", i + 1);
        scanf("%s", dog[i].ownerDog.direccion);
        printf("\n");
    }
    for (int i = 0; i < length; i++)
    {
        printf("El nombe del perro %i es: %s", i + 1, dog[i].nombre);
        printf("\nLa edad en meses del perro %i es: %d", i + 1, dog[i].edadMeses);
        printf("\nEl nombre del duenio del perro %i es: %s", i + 1, dog[i].ownerDog.nombre);
        printf("\nLa dirección del duenio del perro %i es: %s", i + 1, dog[i].ownerDog.direccion);
        printf("\n");
    }
    
    return 0;
}