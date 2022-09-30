/*Se desea hacer el siguiente cálculo: (k-n)*y/(3-r),
donde k, n, r e y son enteros (int) que se ingresan por teclado.
Se debe utilizar una función para realizar el cálculo.
El resultado (float) debe imprimirse en pantalla desde el programa principal (main).
Considerar que k debe ser mayor que n para poder hacer el cálculo y que r debe ser distinto de 3*/

#include <stdio.h>

float calculo(int k, int n, int r, int y)
{
    float resultado = (float) (k - n) * y / (3 - r);
    return resultado;
}

int main()
{
    int k, n, r, y;
    float resultado;
    printf("Se hara el siguiente calculo: (k-n)*y/(3-r)\n\n");
    printf("Ingrese K: ");
    scanf("%d", &k);
    printf("Ingrese N, debe ser menor que K: ");
    scanf("%d", &n);
    while (n >= k)
    {
        scanf("%d", &n);
    }
    printf("Ingrese R, debe ser distinto a 3: ");
    scanf("%d", &r);
    while (r == 3)
    {
        scanf("%d", &r);
    }
    printf("Ingrese Y: ");
    scanf("%d", &y);
    resultado = calculo(k, n, r, y);
    printf("El resultado de la operacion es: %.2f", resultado);
    return 0;
}

//SPACEDESKWINDOWS
