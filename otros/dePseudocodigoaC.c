#include<stdio.h>
#include<stdbool.h>
int main()
{
    // int producto=1, num;
    // printf("ingrese los numeros que quiere multiplicar. para terminar, ingrese uno negativo\n");
    // scanf("%i",&num);
    // while (num >= 0)
    // {
    //     producto= producto*num;
    //     printf("el resultado es: %i\n", producto);
    //     scanf("%i", &num);
    // }
    // printf("el resultado total es: %i\n", producto);
    // return 0;

    // int cont, num, sum;
    // cont= 0;
    // sum= 0;
    // num= 0;
    // while (cont !=3)
    // {
    //     printf("ingrese los valores a sumar \n");
    //     scanf("%i", &num);
    //     sum= sum+num;
    //     cont= cont+1;
    // }
    // printf("la suma de los numeros es: %i", sum);
    // return 0;

    // int n1, n2, suma=0, producto;
    // printf("Introduzca las notas");
    // scanf("%i, %i", &n1, &n2 );
    // suma=n1+n2;
    // producto=n1*n2;
    // printf("La suma de las dos notas es: %i", suma);
    // printf("El producto de las dos notas es: %i", producto);
    // return 0;

    // int cont, num, suma;
    // bool neg;
    // cont= 0;
    // suma= 0;
    // neg= false;
    // while (cont!=3)
    // {
    //     scanf("%i", &num);
    //     if (num<=0)
    //     {
    //         neg= true;
    //     }
    //     suma= suma+num;
    //     cont= cont+1;
    // }
    // if(neg == true)
    // {
    //     printf("se ha leido un numero negativo\n");
    // }
    //     else
    //     {
    //         printf("no negativos\n");
    //     }
    // printf("la suma de los numeros es: %i", suma);
    // return 0;

    int i;
    float x, y;
    for (int i = 1; i <= 3; i++)
    {
        printf("Abscisa del punto numero %i\n", i);
        scanf("%f", &x);
        printf("Ordenada del punto numero %i\n", i);
        scanf("%f", &y);
        //x=x+3;
        printf("El punto es: (%2.f, %2.f)\n",x+3,y);
        printf("=======================================\n");
    }
    return 0;



    int divisor,suma,contador,numero;
    suma = 0;
    contador = 0;
    printf("introduce el divisor\n");
    scanf("%i", &divisor);
    printf("Usted eligio el numero %i\n", divisor);
    printf("los primero 10 dividendos de %i son: \n", divisor);

    for (numero = 1; numero <= 1000; numero++)
        {
            //printf("%i \n", numero);
            if ( (numero % divisor ==0 ) && (divisor !=0))
            {
                printf("%i\n",numero);
                suma = suma+numero;
                contador = contador+1;
                if ( contador == 10)
                {
                    break;
                }
            }
        }
            printf("la suma de los dividendos es: %i", suma);

    return 0;

    // FACTORIAL


//     int numero, factorial, i;
//         factorial = 1;
//         printf("Introduce un numero\n");
//         scanf("%i", &numero);
//     for ( i=numero ; i>1 ; i-- ){
//         factorial=factorial*i;
//         printf("Incrementando: %i\n", factorial);
//     }
//     printf("Factorial total: %i \n", factorial);

//         int i;
//         for ( i=1 ; i<=100 ; i++ )
//         {
//             if (i%5 == 0)
//             {
//                 printf("%i-", i);
//             }
//         }
//         return 0;
// }
}