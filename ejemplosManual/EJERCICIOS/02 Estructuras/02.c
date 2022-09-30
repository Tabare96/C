/*Realizar un programa que permita, dado un vector de
estructuras/registros cuyos campos son: empresa (cadena de caracteres [30]),
domicilio (cadena de caracteres [40]), código postal (cadena de caracteres [10]),
localidad (cadena de caracteres [20]), país (cadena de caracteres [15]),
imprimir un listado para generar el destinatario de unas cartas. El formato debe
ser el correcto.*/
 #include <stdio.h>
typedef struct empresa
{
    char empresa[30];
    char domicilio[40];
    char codigoPostal[10];
    char localidad[20];
    char pais[15];
} destinatario;

int main(){
    destinatario destinatarios[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Ingrese el nombre de la empresa %i:\n", i + 1);
        scanf("%s", destinatarios[i].empresa);
        printf("Ingrese el domicilio de la empresa %i:\n", i + 1);
        scanf("%s", destinatarios[i].domicilio);
        printf("Ingrese el codigo postal de la empresa %i:\n", i + 1);
        scanf("%s", destinatarios[i].codigoPostal);
        printf("Ingrese la localidad de la empresa %i:\n", i + 1);
        scanf("%s", destinatarios[i].localidad);
        printf("Ingrese el pais de la empresa %i:\n", i + 1);
        scanf("%s", destinatarios[i].pais);
        printf("\n");
    }
    for (int i = 0; i < 2; i++)
    {
        printf("\nLa empresa %i es: %s", i + 1, destinatarios[i].empresa);
        printf("\nEl domicilio de la empresa %i es: %s", i + 1, destinatarios[i].domicilio);
        printf("\nEl codigo postal de la empresa %i es: %s", i + 1, destinatarios[i].codigoPostal);
        printf("\nLa localidad de la empresa %i es: %s", i + 1, destinatarios[i].localidad);
        printf("\nEl pais de la empresa %i es: %s", i + 1, destinatarios[i].pais);
        printf("\n");
    }
    return 0;
}

