#include <stdio.h>

int factorial(int n)
{
    if ((n == 0) || (n == 1))
        return (1);
    else
        return (n * factorial(n - 1));
}

int main()
{
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    printf("El factorial de %d es: %d", n, factorial(n));
    return 0;
}