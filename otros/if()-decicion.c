#include <stdio.h>

main()
{
    int hora;
    printf("Introduzca la hora actual\n");
    scanf("%i", &hora);

    if(hora <12)
    {
        printf("Buenos días\n");
    }

    if ((hora >12) && (hora <=18))
    {
        printf("Buenas tardes\n");
    }

    if((hora >18) && (hora <=24))
    {
        printf("Buenas noches\n");
    }

    if (hora >24)
    {
        printf("hora invalida");
    }
    /*if (hora > 99)
    {
        printf("... te pasaste 2 pueblos -_-\n");
    }*/
    //return 0;
    //getchar;
}
    /*Se pide leer una hora. Si la hora es menor a 12, se imprimirá “Buenos días”;
    si está entre las 12 y las 18, se imprimirá “Buenas tardes”;
    y si son más de las 18, se imprimirá “Buenas noches”.*/