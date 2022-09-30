/*Definir un tipo de estructura que esté formado por:
Número de legajo (entero),
Nombre (cadena de 35 caracteres),
Nota (entero),
Fecha de ingreso (cadena de 8 caracteres)*/

#include <stdio.h>

struct estructura
{
    int numeroDeLegajo;
    char nombre[35];
    int nota;
    char fechaDeIngreso[8];
};