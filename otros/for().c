#include <stdio.h>

main()
{
    int a;

    for(a = 1 ; a < 6; a = a + 1)
    printf("El valor de a es %d\n",a);
    return 0;
}
/*Como vimos, el ciclo for consiste de la palabra reservada for seguida de una
expresión entre paréntesis. Esta expresión se compone de tres elementos,
cada uno separado por un punto y coma. El primero contiene la expresión “a
= 1" y se le llama campo de inicialización. Cualquier expresión en este lugar
se ejecuta antes del inicio del ciclo. El segundo lugar, que contiene la
expresión “a < 4 ", corresponde a la evaluación que se hace al principio de
cada ciclo y puede ser cualquier expresión que pueda evaluarse como
verdadero o falso. Sirve para saber si se ha completado el ciclo del for o si
todavía debe continuarse ejecutando. La expresión del tercer lugar se ejecuta
en cada ciclo luego de que se ejecutan las acciones contenidas en el cuerpo
del for. Hay que destacar que esto sucede hasta que se alcance la condición
de corte del ciclo. Esas acciones son lo que conocemos como cuerpo
ejecutable del ciclo for(). Esas acciones pueden ser una o varias. Si son
varias, deben incluirse las llaves “{“ y “}” que denotarán el inicio y fin de las
instrucciones que se ejecutarán en cada ciclo del for().*/