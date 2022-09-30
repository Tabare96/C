#include <stdio.h>

main()
{
    int x, y, a;
    a = 1;
    
    printf("escriba el valor para x\n");
    scanf("%i", &x);
    printf("ahora escriba el valor para y\n");
    scanf("%i", &y);
    if (x >0)
            {
                if (y <0.5)
                        {
                            y = a*x;
                        }
                a = x + y;        
            }
    printf("el resultado es: %i\n", a);        
}
/*En este ejemplo, si x es mayor que 0 y si y es menor que 0,5 entonces
se le asigna a y el valor a*x; y luego se recalcula la variable a como
x+y.
Si se da la condición de que x es mayor que 0 pero y no es menor a
0,5; sólo se recalcula el valor de a como x+y.*/