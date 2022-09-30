#include <stdio.h>
#define MAX 100
typedef struct
{
    int id;       // identificador del cliente
    char nom[20]; // nombre
    float saldo;
} Tcliente;
typedef struct
{
    int numero;
    Tcliente cliente[MAX];
} Tlista;
main()
{
    Tlista mis_clientes;
    printf("Escribe el numero de clientes\n");
    scanf("%d", &mis_clientes.numero);
    for (int i = 0; i < mis_clientes.numero; i++)
    {
        printf("Escribe idenfificador, nombre y saldo\n");
        scanf("%d", &mis_clientes.cliente[i].id);
        scanf("%s", mis_clientes.cliente[i].nom);
        scanf("%f", &mis_clientes.cliente[i].saldo);
    }

    for (int i = 0; i < mis_clientes.numero; i++)
    {
        if (mis_clientes.cliente[i].saldo > 100.0)
        {
            printf(" El cliente es %s\n", mis_clientes.cliente[i].nom);
        }
    }
}