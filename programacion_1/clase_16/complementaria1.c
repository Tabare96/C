#include <stdio.h>

main()
{
    struct
    {
        int id;       // identificador del cliente (entero)
        char nom[20]; // nombre (cadena)
        float saldo;  // saldo (real)
    } cliente;
    printf("Ingrese el valor de identificador del cliente\n");
    scanf("%d", &cliente.id);
    printf("Ingrese el nombre del cliente\n");
    scanf("%s", &cliente.nom);
    cliente.saldo = 0; // saldo inicial
    if (cliente.id > 100)
        printf("El id del cliente es mayor a 100\n", cliente.nom);


    return 0;
}