#include <stdio.h>
long Factorial(long numero)
;int main()
{
    /*
    Ejemplo del Factorial de Un número
    5! = 5*4*3*2*1 ó 5*4! = 120
    4! = 4*3*2*1 ó 4*3! = 24
    3! = 3*2*1 ó 3*2! = 6
    2! = 2*1 ó 2*1! = 2
    1! = 1
    0! = 1
    */
   int numero;
   printf("ingresa un numero\n");
   scanf("%i", &numero);
   for (int i = 0; i <= numero; i++)
   {
       printf("%ld\n", Factorial(i));
   }
   return 0;
}
long Factorial(long numero)
{
    if (numero<= 1)
    {
        return 1;
    }else{
        return(numero * Factorial(numero-1));
    }
}