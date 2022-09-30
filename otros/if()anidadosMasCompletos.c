#include <stdio.h>

main()
{
    int edad;

    printf("para saber si aplica, escriba su edad\n");
    scanf("%d", &edad);

    if(edad <18)
            {
                printf("Necesita autorizacion\n");
            }
    else
            {
                if (edad >30)
                        {
                         printf("no pertenece al grupo etareo\n");
                        }
                else
                {
                    printf("Puede ingresar al evento\n");
                }
            }        
}
/*Si es menor a 18 años, entonces imprimir “Necesita autorización”, en cambio,
si es mayor a 30 años que imprima “No aplica” y si tiene o si es menor a 30
años pero tiene 18 años o más (es decir, que está entre los 18 y los 30 años
inclusive en ambos casos) que imprima “Puede continuar”.*/