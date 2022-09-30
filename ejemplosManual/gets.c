#include <stdio.h>
main()
{
    char nombre[80];
    printf("Cual es su nombre? ");
    gets(nombre);
    printf("Parece que su nombre es %s\n", nombre);
}