#include<stdio.h>
 int k,n,r,y;
 float resultado;
int main()
{
    printf("Bienvenido, en esta ocacion vamos a realizar\n");
    printf(" el siguiente calculo: (k-n)y/(3-r)\n");
    printf("Ingrese el valor deseado de K\n");
    scanf("%d", &k);
    printf("Ahora ingrese N, recuerde que N debe ser menor que K\n");
    scanf("%d", &n);
    while(n>=k)
    {
        printf("Recuerde que N debe ser menor que K\n");
        printf("Ingrese valor de N\n");
        scanf("%d", &n);
    }
    printf("Ingrese el valor de Y\n");
    scanf("%d", &y);
    printf("Ingrese valor de R, debe ser distinto de 3\n");
    scanf("%d", &r);
    while(r==3)
    {
        printf("Recuerde que R debe ser distinto de 3\n");
        printf("Ingrese valor de R\n");
        scanf("%d", &r);
    }
    printf("Relizando calculos.........\n");
    printf("----------------------------\n");
    resultado = (k - n) * y / (3 - r);
    printf("El resultado del calculo es: %f", resultado);
    return 0;
}