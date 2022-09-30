#include <stdio.h>
struct perro
{
    char nombre[30];
    int edadMeses;
    float peso;
}perro1= {"Chikorita", 10, 3.5},
perro2={"Totodile", 4, 2.30};

int main()
{
    printf("EL peso de %s es %.2fKg. y tiene %i meses \n", perro2.nombre, perro2.peso, perro2.edadMeses);
    return 0;
}