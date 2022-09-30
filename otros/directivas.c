#include <stdio.h>
//#include "nombre de archivo"
#define PI 3.14159
#define CUBO(a) a*a*a
int main()
{
    /*int suma;
    suma = PI+3;*/
    int a;
    printf("escriba el valor de uno de los lados de su cuadrado\n");
    scanf("%i", &a);
    printf ("el cubo de su cuadrado es: %i\n", CUBO(a));
    return 0;
}