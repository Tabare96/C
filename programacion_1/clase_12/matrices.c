#include <stdio.h>
#include <conio.h>

main()
{

    int a[3][3], b[3][3], c[3][3], i, j;

    printf("Ingrese los elementos de la matriz A\n");

    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
            scanf("%d", &a[i][j]);
    printf("La primera matriz tiene los siguientes elementos");

    for (i = 0; i <= 2; i++)
    {
        printf("\n");
        for (j = 0; j <= 2; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Ingrese los elementos de la matriz B\n");
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
            scanf("%d", &b[i][j]);
    printf("La segunda matriz tiene los siguientes elementos\n");
    for (i = 0; i <= 2; i++)
    {
        printf("\n");
        for (j = 0; j <= 2; j++){
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    /*Calcula la suma*/
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
            c[i][j] = a[i][j] + b[i][j];
    printf("La suma de la matriz es:\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }
    return 0;
}