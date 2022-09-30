/*Realizar un programa que permita leer de teclado y luego imprimir
los contenidos de una variable tipo struct cuyos campos son: nombre (cadena
de caracteres [10]), legajo (entero), dependencia de trabajo (entero), horas
trabajadas (real).*/
#include <stdio.h>
struct
{
    char nombre[10];
    int legajo;
    int dependencia;
    float horasTrabajadas;
}empleado;

int main()
{
    printf("Ingrese el nombre del empleado:\n");
    scanf("%s", empleado.nombre);
    printf("Ingrese el legajo del empleado:\n");
    scanf("%d", &empleado.legajo);
    printf("Ingrese la dependencia del empleado:\n");
    scanf("%d", &empleado.dependencia);
    printf("Ingrese las horas trabajadas del empleado:\n");
    scanf("%f", &empleado.horasTrabajadas);
    printf("\n");
    printf("El nombre del empleado es: %s", empleado.nombre);
    printf("\nEl legajo del empleado es: %d", empleado.legajo);
    printf("\nLa dependencia del empleado es: %d", empleado.dependencia);
    printf("\nLas horas trabajadas del empleado son: %.2f", empleado.horasTrabajadas);
    printf("\n");
    return 0;
}