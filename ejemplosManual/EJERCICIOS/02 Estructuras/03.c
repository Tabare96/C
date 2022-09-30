/*Realizar un programa que permita, dado un vector A de
estructuras/registros, cuyos campos son: producto (cadena de caracteres [10]),
código (entero) y precio (real); obtener un nuevo vector B de
estructuras/registros que contengan sólo el código y el precio del vector A.*/
#include <stdio.h>
struct producto
{
    char producto[10];
    int codigo;
    float precio;
} productos[2];

int main()
{
    for (int i = 0; i < 2; i++)
    {
        printf("Ingrese el nombre del producto %i:\n", i + 1);
        scanf("%s", productos[i].producto);
        printf("Ingrese el codigo del producto %i:\n", i + 1);
        scanf("%d", &productos[i].codigo);
        printf("Ingrese el precio del producto %i:\n", i + 1);
        scanf("%f", &productos[i].precio);
        printf("\n");
    }
    for (int i = 0; i < 2; i++)
    {
        printf("\nEl producto %i es: %s", i + 1, productos[i].producto);
        printf("\nEl codigo del producto %i es: %d", i + 1, productos[i].codigo);
        printf("\nEl precio del producto %i es: %.2f", i + 1, productos[i].precio);
        printf("\n");
    }
    return 0;
}