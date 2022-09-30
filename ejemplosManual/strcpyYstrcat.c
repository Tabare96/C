#include <stdio.h>
#include <string.h>
char completo [80];
char nombre[32] = "Pedro";
char apellidos [32] = "Gonzalez Arenas";
main()
{
/* Construye el nombre completo */
strcpy ( completo, nombre ); /* completo <- "Pedro" */
strcat ( completo, " "); /* completo <- "Pedro " */
strcat ( completo, apellidos ); /* completo <- "Pedro
González Arenas" */
printf ( "El nombre completo es %s\n", completo );
}

