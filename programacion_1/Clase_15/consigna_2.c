/*Definir una variable del tipo definido en la consigna 1*/

#include <stdio.h>

struct estructura
{
    int numeroDeLegajo;
    char nombre[35];
    int nota;
    char fechaDeIngreso[10];
}estructura1 = {1, "Tabare", 10,"10/08/2022"};

int main()
{
    printf("Numero de legajo: %i", estructura1.numeroDeLegajo);
    printf("\nNombre: %s", estructura1.nombre);
    printf("\nNota: %i", estructura1.nota);
    printf("\nFecha de ingreso: %s", estructura1.fechaDeIngreso);

}
