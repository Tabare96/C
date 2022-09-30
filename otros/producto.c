// #include<stdio.h>
// int numero, producto;
// int main()
// {
//     int producto = 0;
//     printf("Escribe un numero");
//     scanf("%i", &numero);
//     while(numero>=0)
//     {
//         producto=producto*numero;
//         printf("Escribe un numero");
//         scanf("%i", &numero);
//     }
//     printf("El producto es: %i", producto);
//     return 0;
// }

// #include <stdio.h>

int main()
{
    int num, producto;
    producto = 1;
    num = 0;
    printf("escribe un numero positivo \n");
    scanf("%i", &num);
    /*if (num < 0)
    {
        printf("el numero ingresado es incorrecto");
        return 0;
    }*/

    while (num >= 0)
    {
        producto = producto * num;
        printf("escribe otro numero positivo \n");
        scanf("%i", &num);
    }

    if (producto == 1){
        printf("el numero ingresado es incorrecto");
    } else {
        printf("el producto de la cadena de multiplicaciones es:  %i \n", producto);
    }

    return 0;
}
