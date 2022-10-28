#include <stdio.h>

// int factorial(int n)
// {
//     if ((n == 0) || (n == 1))
//         return (1);
//     else
//         return (n * factorial(n - 1));
// }

// int main()
// {
//     int n;
//     printf("Ingrese un numero: ");
//     scanf("%d", &n);
//     printf("El factorial de %d es: %d", n, factorial(n));
//     return 0;
// }

void intercambia(int *x, int *y)
{
    int z = x;

    z = *x;
    *x = *y;
    *y = z;
}

int main()
{
    int a = 7;
    int b = 8;

    printf("a= %d  b= %d\n", a, b);
    intercambia(&a, &b);
    printf("a= %d  b= %d\n\n", a, b);




    int c = 1;
    int d = 2;

    printf("c= %d  d= %d\n", c, d);
    int e = c;
    c = d;
    d = e;
    printf("c= %d  d= %d", c, d);


}
