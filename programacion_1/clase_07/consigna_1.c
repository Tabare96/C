/*Genere un lazo for que permita incrementar una variable X sumándole el valor 2
cada vez que se incrementa 10 veces la variable de iteración.
Hacer esto hasta que la variable de iteración del ciclo alcance el valor 80.
La variable X está inicialmente cargada con el valor 0.
Cada vez que se incrementa la variable X debe imprimirse el nuevo valor que tiene cargada la misma.
Realizar el programa en lenguaje C.*/
#include <stdio.h>
int main()
{
    int iteracion=0, x=0;
    for(iteracion=0; iteracion<=80; iteracion++)
    {
        //printf("iteracion va por la suma: %i\n",iteracion);
        if(iteracion!=0 && iteracion%10==0)
        {
            x=x+2;
            printf("x vale: %i\n", x);
        }
        
    }
    return 0;
}